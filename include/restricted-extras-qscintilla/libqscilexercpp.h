#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCPP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCPP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html

/// q_scilexercpp_new constructs a new QsciLexerCPP object.
///
///
QsciLexerCPP* q_scilexercpp_new();

/// q_scilexercpp_new2 constructs a new QsciLexerCPP object.
///
/// ``` QObject* parent ```
QsciLexerCPP* q_scilexercpp_new2(void* parent);

/// q_scilexercpp_new3 constructs a new QsciLexerCPP object.
///
/// ``` QObject* parent, bool caseInsensitiveKeywords ```
QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCPP* self ```
const QMetaObject* q_scilexercpp_meta_object(void* self);

/// ``` QsciLexerCPP* self, const char* param1 ```
void* q_scilexercpp_metacast(void* self, const char* param1);

/// ``` QsciLexerCPP* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercpp_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)(QsciLexerCPP*, enum QMetaObject__Call, int, void*) ```
void q_scilexercpp_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercpp_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercpp_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char** q_scilexercpp_auto_completion_word_separators(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_end(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_start(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_start_keyword(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_brace_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_word_characters(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int set ```
const char* q_scilexercpp_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int style ```
const char* q_scilexercpp_description(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_at_else(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_compact(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_preprocessor(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_style_preprocessor(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool allowed ```
void q_scilexercpp_set_dollars_allowed(void* self, bool allowed);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_dollars_allowed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_triple_quoted_strings(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_hash_quoted_strings(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_back_quoted_strings(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_escape_sequences(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool allowed ```
void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_verbatim_string_escape_sequences_allowed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_at_else(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, bool style ```
void q_scilexercpp_set_style_preprocessor(void* self, bool style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_style_preprocessor(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool style ```
void q_scilexercpp_qbase_set_style_preprocessor(void* self, bool style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QSettings*, const char*) ```
void q_scilexercpp_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QSettings*, const char*) ```
void q_scilexercpp_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercpp_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercpp_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_end1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_start1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self ```
QsciAbstractAPIs* q_scilexercpp_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self ```
QsciScintilla* q_scilexercpp_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QsciAbstractAPIs* apis ```
void q_scilexercpp_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QColor* c ```
void q_scilexercpp_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QFont* f ```
void q_scilexercpp_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QColor* c ```
void q_scilexercpp_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs ```
bool q_scilexercpp_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs ```
bool q_scilexercpp_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, bool eolfilled, int style ```
void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool, int) ```
void q_scilexercpp_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QFont*, int) ```
void q_scilexercpp_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, const char* prop, const char* val ```
void q_scilexercpp_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, const char*, const char*) ```
void q_scilexercpp_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCPP* self, char* name ```
void q_scilexercpp_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCPP* self, bool b ```
bool q_scilexercpp_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCPP* self ```
QThread* q_scilexercpp_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCPP* self, QThread* thread ```
bool q_scilexercpp_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCPP* self, int interval ```
int32_t q_scilexercpp_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCPP* self, int id ```
void q_scilexercpp_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCPP* self, enum Qt__TimerId id ```
void q_scilexercpp_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCPP* self ```
libqt_list /* of QObject* */ q_scilexercpp_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCPP* self, QObject* parent ```
void q_scilexercpp_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCPP* self, QObject* filterObj ```
void q_scilexercpp_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCPP* self, QObject* obj ```
void q_scilexercpp_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercpp_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCPP* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercpp_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercpp_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercpp_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCPP* self, const char* name, QVariant* value ```
bool q_scilexercpp_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCPP* self, const char* name ```
QVariant* q_scilexercpp_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCPP* self ```
const char** q_scilexercpp_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCPP* self ```
QBindingStorage* q_scilexercpp_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCPP* self ```
const QBindingStorage* q_scilexercpp_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*) ```
void q_scilexercpp_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCPP* self, const char* classname ```
bool q_scilexercpp_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCPP* self, QThread* thread, Disambiguated_t* param2 ```
bool q_scilexercpp_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCPP* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercpp_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercpp_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCPP* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercpp_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self, QObject* param1 ```
void q_scilexercpp_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QObject*) ```
void q_scilexercpp_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* (*slot)() ```
void q_scilexercpp_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)() ```
void q_scilexercpp_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_color2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_font2(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_paper2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QsciScintilla* editor ```
void q_scilexercpp_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QsciScintilla* editor ```
void q_scilexercpp_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QsciScintilla*) ```
void q_scilexercpp_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int autoindentstyle ```
void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int autoindentstyle ```
void q_scilexercpp_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, bool eoffill, int style ```
void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool eoffill, int style ```
void q_scilexercpp_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool, int) ```
void q_scilexercpp_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QFont*, int) ```
void q_scilexercpp_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
bool q_scilexercpp_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
bool q_scilexercpp_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QEvent*) ```
void q_scilexercpp_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* watched, QEvent* event ```
bool q_scilexercpp_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* watched, QEvent* event ```
bool q_scilexercpp_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QObject*, QEvent*) ```
void q_scilexercpp_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QTimerEvent* event ```
void q_scilexercpp_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QTimerEvent* event ```
void q_scilexercpp_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QTimerEvent*) ```
void q_scilexercpp_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QChildEvent* event ```
void q_scilexercpp_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QChildEvent* event ```
void q_scilexercpp_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QChildEvent*) ```
void q_scilexercpp_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
void q_scilexercpp_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
void q_scilexercpp_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QEvent*) ```
void q_scilexercpp_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* text ```
char* q_scilexercpp_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* text ```
char* q_scilexercpp_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, char* (*slot)(QsciLexerCPP*, const char*) ```
void q_scilexercpp_on_text_as_bytes(void* self, char* (*slot)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* bytes, int size ```
const char* q_scilexercpp_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* bytes, int size ```
const char* q_scilexercpp_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* (*slot)(QsciLexerCPP*, const char*, int) ```
void q_scilexercpp_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* (*slot)() ```
void q_scilexercpp_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* signal ```
int32_t q_scilexercpp_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* signal ```
int32_t q_scilexercpp_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)(QsciLexerCPP*, const char*) ```
void q_scilexercpp_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
bool q_scilexercpp_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
bool q_scilexercpp_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, const char*) ```
void q_scilexercpp_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciLexerCPP* self ```
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
