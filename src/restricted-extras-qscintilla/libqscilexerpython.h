#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERPYTHON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERPYTHON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)

/// q_scilexerpython_new constructs a new QsciLexerPython object.
///
QsciLexerPython* q_scilexerpython_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)

/// q_scilexerpython_new2 constructs a new QsciLexerPython object.
///
/// @param parent QObject*
///
QsciLexerPython* q_scilexerpython_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerPython*
///
const QMetaObject* q_scilexerpython_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback const QMetaObject* func()
///
void q_scilexerpython_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
///
const QMetaObject* q_scilexerpython_qbase_meta_object(void* self);

/// @param self QsciLexerPython*
/// @param param1 const char*
///
void* q_scilexerpython_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback void* func(QsciLexerPython* self, const char* param1)
///
void q_scilexerpython_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param param1 const char*
///
void* q_scilexerpython_qbase_metacast(void* self, const char* param1);

/// @param self QsciLexerPython*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerpython_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func(QsciLexerPython* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexerpython_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerpython_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexerpython_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerPython*
///
const char** q_scilexerpython_auto_completion_word_separators(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_block_lookback(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_block_start(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_brace_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param style int
///
bool q_scilexerpython_default_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param style int
///
QFont* q_scilexerpython_default_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_default_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_indentation_guide_view(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func()
///
void q_scilexerpython_on_indentation_guide_view(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_qbase_indentation_guide_view(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
/// @param set int
///
const char* q_scilexerpython_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
/// @param style int
///
const char* q_scilexerpython_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_fold_comments(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param fold bool
///
void q_scilexerpython_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_fold_compact(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_fold_quotes(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
/// @return enum QsciLexerPython__IndentationWarning
///
int32_t q_scilexerpython_indentation_warning(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param enabled bool
///
void q_scilexerpython_set_highlight_subidentifiers(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_highlight_subidentifiers(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param allowed bool
///
void q_scilexerpython_set_strings_over_newline_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_strings_over_newline_allowed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param allowed bool
///
void q_scilexerpython_set_v2_unicode_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_v2_unicode_allowed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param allowed bool
///
void q_scilexerpython_set_v3_binary_octal_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_v3_binary_octal_allowed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param allowed bool
///
void q_scilexerpython_set_v3_bytes_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_v3_bytes_allowed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param fold bool
///
void q_scilexerpython_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, bool fold)
///
void q_scilexerpython_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param fold bool
///
void q_scilexerpython_qbase_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param fold bool
///
void q_scilexerpython_set_fold_quotes(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, bool fold)
///
void q_scilexerpython_on_set_fold_quotes(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param fold bool
///
void q_scilexerpython_qbase_set_fold_quotes(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param warn enum QsciLexerPython__IndentationWarning
///
void q_scilexerpython_set_indentation_warning(void* self, int32_t warn);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, enum QsciLexerPython__IndentationWarning warn)
///
void q_scilexerpython_on_set_indentation_warning(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param warn enum QsciLexerPython__IndentationWarning
///
void q_scilexerpython_qbase_set_indentation_warning(void* self, int32_t warn);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, QSettings* qs, const char* prefix)
///
void q_scilexerpython_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, QSettings* qs, const char* prefix)
///
void q_scilexerpython_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Base class method implementation
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexerpython_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexerpython_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
/// @param style int*
///
const char* q_scilexerpython_block_start1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
///
QsciAbstractAPIs* q_scilexerpython_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
///
QsciScintilla* q_scilexerpython_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param apis QsciAbstractAPIs*
///
void q_scilexerpython_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param c QColor*
///
void q_scilexerpython_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param f QFont*
///
void q_scilexerpython_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param c QColor*
///
void q_scilexerpython_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
///
bool q_scilexerpython_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
///
bool q_scilexerpython_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QColor* c, int style)
///
void q_scilexerpython_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param eolfilled bool
/// @param style int
///
void q_scilexerpython_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, bool eolfilled, int style)
///
void q_scilexerpython_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param f QFont*
/// @param style int
///
void q_scilexerpython_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QFont* f, int style)
///
void q_scilexerpython_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QColor* c, int style)
///
void q_scilexerpython_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param prop const char*
/// @param val const char*
///
void q_scilexerpython_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, const char* prop, const char* val)
///
void q_scilexerpython_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerPython*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerpython_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerPython*
/// @param name char*
///
void q_scilexerpython_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerPython*
/// @param b bool
///
bool q_scilexerpython_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerPython*
///
QThread* q_scilexerpython_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerPython*
/// @param thread QThread*
///
bool q_scilexerpython_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerPython*
/// @param interval int
///
int32_t q_scilexerpython_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerPython*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexerpython_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerPython*
/// @param id int
///
void q_scilexerpython_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerPython*
/// @param id enum Qt__TimerId
///
void q_scilexerpython_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerPython*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexerpython_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerPython*
/// @param parent QObject*
///
void q_scilexerpython_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerPython*
/// @param filterObj QObject*
///
void q_scilexerpython_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerPython*
/// @param obj QObject*
///
void q_scilexerpython_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexerpython_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexerpython_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerPython*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexerpython_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerpython_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexerpython_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
/// @param receiver QObject*
///
bool q_scilexerpython_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexerpython_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerPython*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexerpython_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerPython*
/// @param name const char*
///
QVariant* q_scilexerpython_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerPython*
///
const char** q_scilexerpython_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerPython*
///
QBindingStorage* q_scilexerpython_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerPython*
///
const QBindingStorage* q_scilexerpython_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self)
///
void q_scilexerpython_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerPython*
///
QObject* q_scilexerpython_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerPython*
/// @param classname const char*
///
bool q_scilexerpython_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerPython*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerpython_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerPython*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerpython_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexerpython_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexerpython_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerPython*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexerpython_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
/// @param signal const char*
///
bool q_scilexerpython_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexerpython_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerpython_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerPython*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerpython_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerPython*
/// @param param1 QObject*
///
void q_scilexerpython_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QObject* param1)
///
void q_scilexerpython_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func()
///
void q_scilexerpython_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback const char* func()
///
void q_scilexerpython_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int*
///
const char* q_scilexerpython_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int*
///
const char* q_scilexerpython_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback const char* func(QsciLexerPython* self, int* style)
///
void q_scilexerpython_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int*
///
const char* q_scilexerpython_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int*
///
const char* q_scilexerpython_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback const char* func(QsciLexerPython* self, int* style)
///
void q_scilexerpython_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
bool q_scilexerpython_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback bool func()
///
void q_scilexerpython_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QColor* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
bool q_scilexerpython_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
bool q_scilexerpython_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QFont* q_scilexerpython_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QFont* q_scilexerpython_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QFont* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func()
///
void q_scilexerpython_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QColor* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QColor* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QFont* q_scilexerpython_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QFont* q_scilexerpython_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QFont* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param style int
///
QColor* q_scilexerpython_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QColor* func(QsciLexerPython* self, int style)
///
void q_scilexerpython_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param editor QsciScintilla*
///
void q_scilexerpython_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param editor QsciScintilla*
///
void q_scilexerpython_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QsciScintilla* editor)
///
void q_scilexerpython_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func()
///
void q_scilexerpython_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
const char* q_scilexerpython_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback const char* func()
///
void q_scilexerpython_on_word_characters(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param autoindentstyle int
///
void q_scilexerpython_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param autoindentstyle int
///
void q_scilexerpython_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, int autoindentstyle)
///
void q_scilexerpython_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QColor* c, int style)
///
void q_scilexerpython_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param eoffill bool
/// @param style int
///
void q_scilexerpython_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param eoffill bool
/// @param style int
///
void q_scilexerpython_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, bool eoffill, int style)
///
void q_scilexerpython_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param f QFont*
/// @param style int
///
void q_scilexerpython_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param f QFont*
/// @param style int
///
void q_scilexerpython_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QFont* f, int style)
///
void q_scilexerpython_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param c QColor*
/// @param style int
///
void q_scilexerpython_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QColor* c, int style)
///
void q_scilexerpython_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QEvent*
///
bool q_scilexerpython_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QEvent*
///
bool q_scilexerpython_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, QEvent* event)
///
void q_scilexerpython_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerpython_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerpython_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, QObject* watched, QEvent* event)
///
void q_scilexerpython_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QTimerEvent*
///
void q_scilexerpython_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QTimerEvent*
///
void q_scilexerpython_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QTimerEvent* event)
///
void q_scilexerpython_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QChildEvent*
///
void q_scilexerpython_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QChildEvent*
///
void q_scilexerpython_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QChildEvent* event)
///
void q_scilexerpython_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QEvent*
///
void q_scilexerpython_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param event QEvent*
///
void q_scilexerpython_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QEvent* event)
///
void q_scilexerpython_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
void q_scilexerpython_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
void q_scilexerpython_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QMetaMethod* signal)
///
void q_scilexerpython_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
void q_scilexerpython_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
void q_scilexerpython_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, QMetaMethod* signal)
///
void q_scilexerpython_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param text const char*
///
char* q_scilexerpython_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param text const char*
///
char* q_scilexerpython_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback char* func(QsciLexerPython* self, const char* text)
///
void q_scilexerpython_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerpython_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerpython_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback const char* func(QsciLexerPython* self, const char* bytes, int size)
///
void q_scilexerpython_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
QObject* q_scilexerpython_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
QObject* q_scilexerpython_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback QObject* func()
///
void q_scilexerpython_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
///
int32_t q_scilexerpython_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func()
///
void q_scilexerpython_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal const char*
///
int32_t q_scilexerpython_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal const char*
///
int32_t q_scilexerpython_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback int32_t func(QsciLexerPython* self, const char* signal)
///
void q_scilexerpython_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
bool q_scilexerpython_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param signal QMetaMethod*
///
bool q_scilexerpython_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerPython*
/// @param callback bool func(QsciLexerPython* self, QMetaMethod* signal)
///
void q_scilexerpython_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerPython*
/// @param callback void func(QsciLexerPython* self, const char* objectName)
///
void q_scilexerpython_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPython.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerPython*
///
void q_scilexerpython_delete(void* self);

typedef enum {
    QSCILEXERPYTHON__DEFAULT = 0,
    QSCILEXERPYTHON__COMMENT = 1,
    QSCILEXERPYTHON__NUMBER = 2,
    QSCILEXERPYTHON__DOUBLEQUOTEDSTRING = 3,
    QSCILEXERPYTHON__SINGLEQUOTEDSTRING = 4,
    QSCILEXERPYTHON__KEYWORD = 5,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDSTRING = 6,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDSTRING = 7,
    QSCILEXERPYTHON__CLASSNAME = 8,
    QSCILEXERPYTHON__FUNCTIONMETHODNAME = 9,
    QSCILEXERPYTHON__OPERATOR = 10,
    QSCILEXERPYTHON__IDENTIFIER = 11,
    QSCILEXERPYTHON__COMMENTBLOCK = 12,
    QSCILEXERPYTHON__UNCLOSEDSTRING = 13,
    QSCILEXERPYTHON__HIGHLIGHTEDIDENTIFIER = 14,
    QSCILEXERPYTHON__DECORATOR = 15,
    QSCILEXERPYTHON__DOUBLEQUOTEDFSTRING = 16,
    QSCILEXERPYTHON__SINGLEQUOTEDFSTRING = 17,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDFSTRING = 18,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDFSTRING = 19
} QsciLexerPython__;

typedef enum {
    QSCILEXERPYTHON_INDENTATIONWARNING_NOWARNING = 0,
    QSCILEXERPYTHON_INDENTATIONWARNING_INCONSISTENT = 1,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABSAFTERSPACES = 2,
    QSCILEXERPYTHON_INDENTATIONWARNING_SPACES = 3,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABS = 4
} QsciLexerPython__IndentationWarning;

#endif
