#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html

/// q_scilexer_new constructs a new QsciLexer object.
///
QsciLexer* q_scilexer_new();

/// q_scilexer_new2 constructs a new QsciLexer object.
///
/// @param parent QObject*
QsciLexer* q_scilexer_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexer*
const QMetaObject* q_scilexer_meta_object(void* self);

/// @param self QsciLexer*
/// @param param1 const char*
void* q_scilexer_metacast(void* self, const char* param1);

/// @param self QsciLexer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func(QsciLexer* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_scilexer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexer_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_scilexer_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char* q_scilexer_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func()
void q_scilexer_on_language(void* self, const char* (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
const char* q_scilexer_qbase_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char* q_scilexer_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func()
void q_scilexer_on_lexer(void* self, const char* (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
const char* q_scilexer_qbase_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_lexer_id(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_lexer_id(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_lexer_id(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
QsciAbstractAPIs* q_scilexer_apis(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char* q_scilexer_auto_completion_fillups(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func()
void q_scilexer_on_auto_completion_fillups(void* self, const char* (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
const char* q_scilexer_qbase_auto_completion_fillups(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char** q_scilexer_auto_completion_word_separators(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char** func()
void q_scilexer_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
const char** q_scilexer_qbase_auto_completion_word_separators(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_auto_indent_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_block_end(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, int* style)
void q_scilexer_on_block_end(void* self, const char* (*callback)(void*, int*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_qbase_block_end(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_block_lookback(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_block_lookback(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_block_lookback(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_block_start(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, int* style)
void q_scilexer_on_block_start(void* self, const char* (*callback)(void*, int*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_qbase_block_start(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_block_start_keyword(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, int* style)
void q_scilexer_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int*
const char* q_scilexer_qbase_block_start_keyword(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_brace_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_brace_style(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_brace_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
bool q_scilexer_case_sensitive(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback bool func()
void q_scilexer_on_case_sensitive(void* self, bool (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
bool q_scilexer_qbase_case_sensitive(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QColor* func(QsciLexer* self, int style)
void q_scilexer_on_color(void* self, QColor* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_qbase_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
bool q_scilexer_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, int style)
void q_scilexer_on_eol_fill(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
bool q_scilexer_qbase_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QFont* q_scilexer_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QFont* func(QsciLexer* self, int style)
void q_scilexer_on_font(void* self, QFont* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QFont* q_scilexer_qbase_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_indentation_guide_view(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_indentation_guide_view(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_indentation_guide_view(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param set int
const char* q_scilexer_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, int set)
void q_scilexer_on_keywords(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param set int
const char* q_scilexer_qbase_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_default_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_default_style(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_default_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param style int
const char* q_scilexer_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, int style)
void q_scilexer_on_description(void* self, const char* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
const char* q_scilexer_qbase_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QColor* func(QsciLexer* self, int style)
void q_scilexer_on_paper(void* self, QColor* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_qbase_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
QColor* q_scilexer_default_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_default_color2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QColor* func(QsciLexer* self, int style)
void q_scilexer_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_qbase_default_color2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
bool q_scilexer_default_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, int style)
void q_scilexer_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
bool q_scilexer_qbase_default_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
QFont* q_scilexer_default_font(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QFont* q_scilexer_default_font2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QFont* func(QsciLexer* self, int style)
void q_scilexer_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QFont* q_scilexer_qbase_default_font2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
QColor* q_scilexer_default_paper(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_default_paper2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback QColor* func(QsciLexer* self, int style)
void q_scilexer_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param style int
QColor* q_scilexer_qbase_default_paper2(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
QsciScintilla* q_scilexer_editor(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param apis QsciAbstractAPIs*
void q_scilexer_set_a_p_is(void* self, void* apis);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
void q_scilexer_set_default_color(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param f QFont*
void q_scilexer_set_default_font(void* self, void* f);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
void q_scilexer_set_default_paper(void* self, void* c);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param editor QsciScintilla*
void q_scilexer_set_editor(void* self, void* editor);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QsciScintilla* editor)
void q_scilexer_on_set_editor(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param editor QsciScintilla*
void q_scilexer_qbase_set_editor(void* self, void* editor);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
bool q_scilexer_read_settings(void* self, void* qs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
void q_scilexer_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func()
void q_scilexer_on_refresh_properties(void* self, void (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
void q_scilexer_qbase_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
int32_t q_scilexer_style_bits_needed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_style_bits_needed(void* self, int32_t (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_style_bits_needed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char* q_scilexer_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func()
void q_scilexer_on_word_characters(void* self, const char* (*callback)());

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
const char* q_scilexer_qbase_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
bool q_scilexer_write_settings(void* self, void* qs);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param autoindentstyle int
void q_scilexer_set_auto_indent_style(void* self, int autoindentstyle);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, int autoindentstyle)
void q_scilexer_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param autoindentstyle int
void q_scilexer_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_set_color(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QColor* c, int style)
void q_scilexer_on_set_color(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_qbase_set_color(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param eoffill bool
/// @param style int
void q_scilexer_set_eol_fill(void* self, bool eoffill, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, bool eoffill, int style)
void q_scilexer_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param eoffill bool
/// @param style int
void q_scilexer_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param f QFont*
/// @param style int
void q_scilexer_set_font(void* self, void* f, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QFont* f, int style)
void q_scilexer_on_set_font(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param f QFont*
/// @param style int
void q_scilexer_qbase_set_font(void* self, void* f, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_set_paper(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QColor* c, int style)
void q_scilexer_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_qbase_set_paper(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_color_changed(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QColor* c, int style)
void q_scilexer_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param eolfilled bool
/// @param style int
void q_scilexer_eol_fill_changed(void* self, bool eolfilled, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, bool eolfilled, int style)
void q_scilexer_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param f QFont*
/// @param style int
void q_scilexer_font_changed(void* self, void* f, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QFont* f, int style)
void q_scilexer_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param c QColor*
/// @param style int
void q_scilexer_paper_changed(void* self, void* c, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QColor* c, int style)
void q_scilexer_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param prop const char*
/// @param val const char*
void q_scilexer_property_changed(void* self, const char* prop, const char* val);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, const char* prop, const char* val)
void q_scilexer_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, QSettings* qs, const char* prefix)
void q_scilexer_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, QSettings* qs, const char* prefix)
void q_scilexer_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param text const char*
char* q_scilexer_text_as_bytes(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback char* func(QsciLexer* self, const char* text)
void q_scilexer_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param text const char*
char* q_scilexer_qbase_text_as_bytes(void* self, const char* text);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
/// @param bytes const char*
/// @param size int
const char* q_scilexer_bytes_as_text(void* self, const char* bytes, int size);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexer*
/// @param callback const char* func(QsciLexer* self, const char* bytes, int size)
void q_scilexer_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Base class method implementation
///
/// @param self QsciLexer*
/// @param bytes const char*
/// @param size int
const char* q_scilexer_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_scilexer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_scilexer_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_read_settings2(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexer*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexer_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char* q_scilexer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexer*
/// @param name char*
void q_scilexer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexer*
bool q_scilexer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexer*
bool q_scilexer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexer*
bool q_scilexer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexer*
bool q_scilexer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexer*
/// @param b bool
bool q_scilexer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexer*
QThread* q_scilexer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexer*
/// @param thread QThread*
bool q_scilexer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexer*
/// @param interval int
int32_t q_scilexer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexer*
/// @param id int
void q_scilexer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexer*
/// @param id enum Qt__TimerId
void q_scilexer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexer*
libqt_list /* of QObject* */ q_scilexer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexer*
/// @param parent QObject*
void q_scilexer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexer*
/// @param filterObj QObject*
void q_scilexer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexer*
/// @param obj QObject*
void q_scilexer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_scilexer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_scilexer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_scilexer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_scilexer_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexer*
void q_scilexer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexer*
void q_scilexer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexer*
/// @param name const char*
/// @param value QVariant*
bool q_scilexer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexer*
/// @param name const char*
QVariant* q_scilexer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexer*
const char** q_scilexer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexer*
QBindingStorage* q_scilexer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexer*
const QBindingStorage* q_scilexer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexer*
void q_scilexer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self)
void q_scilexer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexer*
QObject* q_scilexer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexer*
/// @param classname const char*
bool q_scilexer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexer*
void q_scilexer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexer*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_scilexer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexer*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_scilexer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_scilexer_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_scilexer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexer*
/// @param param1 QObject*
void q_scilexer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QObject* param1)
void q_scilexer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param event QEvent*
bool q_scilexer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param event QEvent*
bool q_scilexer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, QEvent* event)
void q_scilexer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, QObject* watched, QEvent* event)
void q_scilexer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param event QTimerEvent*
void q_scilexer_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param event QTimerEvent*
void q_scilexer_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QTimerEvent* event)
void q_scilexer_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param event QChildEvent*
void q_scilexer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param event QChildEvent*
void q_scilexer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QChildEvent* event)
void q_scilexer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param event QEvent*
void q_scilexer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param event QEvent*
void q_scilexer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QEvent* event)
void q_scilexer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
void q_scilexer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
void q_scilexer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QMetaMethod* signal)
void q_scilexer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
void q_scilexer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
void q_scilexer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, QMetaMethod* signal)
void q_scilexer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
QObject* q_scilexer_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
QObject* q_scilexer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback QObject* func()
void q_scilexer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
int32_t q_scilexer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
int32_t q_scilexer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback int32_t func()
void q_scilexer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param signal const char*
int32_t q_scilexer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param signal const char*
int32_t q_scilexer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback int32_t func(QsciLexer* self, const char* signal)
void q_scilexer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
bool q_scilexer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexer*
/// @param signal QMetaMethod*
bool q_scilexer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexer*
/// @param callback bool func(QsciLexer* self, QMetaMethod* signal)
void q_scilexer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexer*
/// @param callback void func(QsciLexer* self, const char* objectName)
void q_scilexer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexer*
void q_scilexer_delete(void* self);

#endif
