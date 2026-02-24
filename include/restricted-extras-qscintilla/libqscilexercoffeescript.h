#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERCOFFEESCRIPT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)

/// q_scilexercoffeescript_new constructs a new QsciLexerCoffeeScript object.
///
QsciLexerCoffeeScript* q_scilexercoffeescript_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)

/// q_scilexercoffeescript_new2 constructs a new QsciLexerCoffeeScript object.
///
/// @param parent QObject*
///
QsciLexerCoffeeScript* q_scilexercoffeescript_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerCoffeeScript*
///
const QMetaObject* q_scilexercoffeescript_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback const QMetaObject* func()
///
void q_scilexercoffeescript_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_meta_object` instead
///
#define q_scilexercoffeescript_qbase_meta_object q_scilexercoffeescript_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerCoffeeScript*
///
const QMetaObject* q_scilexercoffeescript_super_meta_object(void* self);

/// @param self QsciLexerCoffeeScript*
/// @param param1 const char*
///
void* q_scilexercoffeescript_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void* func(QsciLexerCoffeeScript* self, const char* param1)
///
void q_scilexercoffeescript_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_metacast` instead
///
#define q_scilexercoffeescript_qbase_metacast q_scilexercoffeescript_super_metacast

/// Base class method implementation
///
/// @param self QsciLexerCoffeeScript*
/// @param param1 const char*
///
void* q_scilexercoffeescript_super_metacast(void* self, const char* param1);

/// @param self QsciLexerCoffeeScript*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercoffeescript_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func(QsciLexerCoffeeScript* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexercoffeescript_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_metacall` instead
///
#define q_scilexercoffeescript_qbase_metacall q_scilexercoffeescript_super_metacall

/// Base class method implementation
///
/// @param self QsciLexerCoffeeScript*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercoffeescript_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexercoffeescript_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char** q_scilexercoffeescript_auto_completion_word_separators(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_block_end(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_block_start(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_block_start_keyword(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_brace_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
bool q_scilexercoffeescript_default_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QFont* q_scilexercoffeescript_default_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_default_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
/// @param set int
///
const char* q_scilexercoffeescript_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
const char* q_scilexercoffeescript_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_dollars_allowed(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param allowed bool
///
void q_scilexercoffeescript_set_dollars_allowed(void* self, bool allowed);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_fold_comments(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param fold bool
///
void q_scilexercoffeescript_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_fold_compact(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param fold bool
///
void q_scilexercoffeescript_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_style_preprocessor(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param style bool
///
void q_scilexercoffeescript_set_style_preprocessor(void* self, bool style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix)
///
void q_scilexercoffeescript_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_read_properties` instead
///
#define q_scilexercoffeescript_qbase_read_properties q_scilexercoffeescript_super_read_properties

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_super_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix)
///
void q_scilexercoffeescript_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_write_properties` instead
///
#define q_scilexercoffeescript_qbase_write_properties q_scilexercoffeescript_super_write_properties

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_super_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexercoffeescript_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexercoffeescript_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
/// @param style int*
///
const char* q_scilexercoffeescript_block_end1(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
/// @param style int*
///
const char* q_scilexercoffeescript_block_start1(void* self, int* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
/// @param style int*
///
const char* q_scilexercoffeescript_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
///
QsciAbstractAPIs* q_scilexercoffeescript_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
///
QsciScintilla* q_scilexercoffeescript_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param apis QsciAbstractAPIs*
///
void q_scilexercoffeescript_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
///
void q_scilexercoffeescript_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param f QFont*
///
void q_scilexercoffeescript_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
///
void q_scilexercoffeescript_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
///
bool q_scilexercoffeescript_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
///
bool q_scilexercoffeescript_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QColor* c, int style)
///
void q_scilexercoffeescript_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param eolfilled bool
/// @param style int
///
void q_scilexercoffeescript_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, bool eolfilled, int style)
///
void q_scilexercoffeescript_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param f QFont*
/// @param style int
///
void q_scilexercoffeescript_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QFont* f, int style)
///
void q_scilexercoffeescript_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QColor* c, int style)
///
void q_scilexercoffeescript_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param prop const char*
/// @param val const char*
///
void q_scilexercoffeescript_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, const char* prop, const char* val)
///
void q_scilexercoffeescript_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCoffeeScript*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercoffeescript_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerCoffeeScript*
/// @param name const char*
///
void q_scilexercoffeescript_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerCoffeeScript*
/// @param b bool
///
bool q_scilexercoffeescript_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerCoffeeScript*
///
QThread* q_scilexercoffeescript_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerCoffeeScript*
/// @param thread QThread*
///
bool q_scilexercoffeescript_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param interval int
///
int32_t q_scilexercoffeescript_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexercoffeescript_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param id int
///
void q_scilexercoffeescript_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param id enum Qt__TimerId
///
void q_scilexercoffeescript_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerCoffeeScript*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexercoffeescript_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerCoffeeScript*
/// @param parent QObject*
///
void q_scilexercoffeescript_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerCoffeeScript*
/// @param filterObj QObject*
///
void q_scilexercoffeescript_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerCoffeeScript*
/// @param obj QObject*
///
void q_scilexercoffeescript_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercoffeescript_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexercoffeescript_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerCoffeeScript*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercoffeescript_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercoffeescript_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexercoffeescript_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
/// @param receiver QObject*
///
bool q_scilexercoffeescript_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexercoffeescript_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerCoffeeScript*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexercoffeescript_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerCoffeeScript*
/// @param name const char*
///
QVariant* q_scilexercoffeescript_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerCoffeeScript*
///
const char** q_scilexercoffeescript_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerCoffeeScript*
///
QBindingStorage* q_scilexercoffeescript_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerCoffeeScript*
///
const QBindingStorage* q_scilexercoffeescript_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self)
///
void q_scilexercoffeescript_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerCoffeeScript*
///
QObject* q_scilexercoffeescript_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerCoffeeScript*
/// @param classname const char*
///
bool q_scilexercoffeescript_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercoffeescript_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCoffeeScript*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercoffeescript_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexercoffeescript_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexercoffeescript_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerCoffeeScript*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexercoffeescript_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
/// @param signal const char*
///
bool q_scilexercoffeescript_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexercoffeescript_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercoffeescript_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCoffeeScript*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercoffeescript_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCoffeeScript*
/// @param param1 QObject*
///
void q_scilexercoffeescript_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QObject* param1)
///
void q_scilexercoffeescript_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_lexer_id(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_lexer_id` instead
///
#define q_scilexercoffeescript_qbase_lexer_id q_scilexercoffeescript_super_lexer_id

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_auto_completion_fillups(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_auto_completion_fillups` instead
///
#define q_scilexercoffeescript_qbase_auto_completion_fillups q_scilexercoffeescript_super_auto_completion_fillups

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
const char* q_scilexercoffeescript_super_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback const char* func()
///
void q_scilexercoffeescript_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_block_lookback(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_block_lookback` instead
///
#define q_scilexercoffeescript_qbase_block_lookback q_scilexercoffeescript_super_block_lookback

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_case_sensitive(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_case_sensitive` instead
///
#define q_scilexercoffeescript_qbase_case_sensitive q_scilexercoffeescript_super_case_sensitive

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
bool q_scilexercoffeescript_super_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func()
///
void q_scilexercoffeescript_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_color(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_color` instead
///
#define q_scilexercoffeescript_qbase_color q_scilexercoffeescript_super_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_super_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QColor* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
bool q_scilexercoffeescript_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_eol_fill` instead
///
#define q_scilexercoffeescript_qbase_eol_fill q_scilexercoffeescript_super_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
bool q_scilexercoffeescript_super_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QFont* q_scilexercoffeescript_font(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_font` instead
///
#define q_scilexercoffeescript_qbase_font q_scilexercoffeescript_super_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QFont* q_scilexercoffeescript_super_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QFont* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_indentation_guide_view(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_indentation_guide_view` instead
///
#define q_scilexercoffeescript_qbase_indentation_guide_view q_scilexercoffeescript_super_indentation_guide_view

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_default_style(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_default_style` instead
///
#define q_scilexercoffeescript_qbase_default_style q_scilexercoffeescript_super_default_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_paper(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_paper` instead
///
#define q_scilexercoffeescript_qbase_paper q_scilexercoffeescript_super_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_super_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QColor* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_default_color2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_default_color2` instead
///
#define q_scilexercoffeescript_qbase_default_color2 q_scilexercoffeescript_super_default_color2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_super_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QColor* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QFont* q_scilexercoffeescript_default_font2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_default_font2` instead
///
#define q_scilexercoffeescript_qbase_default_font2 q_scilexercoffeescript_super_default_font2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QFont* q_scilexercoffeescript_super_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QFont* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_default_paper2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_default_paper2` instead
///
#define q_scilexercoffeescript_qbase_default_paper2 q_scilexercoffeescript_super_default_paper2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param style int
///
QColor* q_scilexercoffeescript_super_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QColor* func(QsciLexerCoffeeScript* self, int style)
///
void q_scilexercoffeescript_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param editor QsciScintilla*
///
void q_scilexercoffeescript_set_editor(void* self, void* editor);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_editor` instead
///
#define q_scilexercoffeescript_qbase_set_editor q_scilexercoffeescript_super_set_editor

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param editor QsciScintilla*
///
void q_scilexercoffeescript_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QsciScintilla* editor)
///
void q_scilexercoffeescript_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_style_bits_needed(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_style_bits_needed` instead
///
#define q_scilexercoffeescript_qbase_style_bits_needed q_scilexercoffeescript_super_style_bits_needed

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param autoindentstyle int
///
void q_scilexercoffeescript_set_auto_indent_style(void* self, int autoindentstyle);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_auto_indent_style` instead
///
#define q_scilexercoffeescript_qbase_set_auto_indent_style q_scilexercoffeescript_super_set_auto_indent_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param autoindentstyle int
///
void q_scilexercoffeescript_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, int autoindentstyle)
///
void q_scilexercoffeescript_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_set_color(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_color` instead
///
#define q_scilexercoffeescript_qbase_set_color q_scilexercoffeescript_super_set_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_super_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QColor* c, int style)
///
void q_scilexercoffeescript_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param eoffill bool
/// @param style int
///
void q_scilexercoffeescript_set_eol_fill(void* self, bool eoffill, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_eol_fill` instead
///
#define q_scilexercoffeescript_qbase_set_eol_fill q_scilexercoffeescript_super_set_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param eoffill bool
/// @param style int
///
void q_scilexercoffeescript_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, bool eoffill, int style)
///
void q_scilexercoffeescript_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param f QFont*
/// @param style int
///
void q_scilexercoffeescript_set_font(void* self, void* f, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_font` instead
///
#define q_scilexercoffeescript_qbase_set_font q_scilexercoffeescript_super_set_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param f QFont*
/// @param style int
///
void q_scilexercoffeescript_super_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QFont* f, int style)
///
void q_scilexercoffeescript_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_set_paper(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_set_paper` instead
///
#define q_scilexercoffeescript_qbase_set_paper q_scilexercoffeescript_super_set_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param c QColor*
/// @param style int
///
void q_scilexercoffeescript_super_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QColor* c, int style)
///
void q_scilexercoffeescript_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QEvent*
///
bool q_scilexercoffeescript_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_event` instead
///
#define q_scilexercoffeescript_qbase_event q_scilexercoffeescript_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QEvent*
///
bool q_scilexercoffeescript_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, QEvent* event)
///
void q_scilexercoffeescript_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercoffeescript_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_event_filter` instead
///
#define q_scilexercoffeescript_qbase_event_filter q_scilexercoffeescript_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercoffeescript_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event)
///
void q_scilexercoffeescript_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QTimerEvent*
///
void q_scilexercoffeescript_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_timer_event` instead
///
#define q_scilexercoffeescript_qbase_timer_event q_scilexercoffeescript_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QTimerEvent*
///
void q_scilexercoffeescript_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QTimerEvent* event)
///
void q_scilexercoffeescript_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QChildEvent*
///
void q_scilexercoffeescript_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_child_event` instead
///
#define q_scilexercoffeescript_qbase_child_event q_scilexercoffeescript_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QChildEvent*
///
void q_scilexercoffeescript_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QChildEvent* event)
///
void q_scilexercoffeescript_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QEvent*
///
void q_scilexercoffeescript_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_custom_event` instead
///
#define q_scilexercoffeescript_qbase_custom_event q_scilexercoffeescript_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param event QEvent*
///
void q_scilexercoffeescript_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QEvent* event)
///
void q_scilexercoffeescript_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
void q_scilexercoffeescript_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_connect_notify` instead
///
#define q_scilexercoffeescript_qbase_connect_notify q_scilexercoffeescript_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
void q_scilexercoffeescript_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QMetaMethod* signal)
///
void q_scilexercoffeescript_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
void q_scilexercoffeescript_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_disconnect_notify` instead
///
#define q_scilexercoffeescript_qbase_disconnect_notify q_scilexercoffeescript_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
void q_scilexercoffeescript_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, QMetaMethod* signal)
///
void q_scilexercoffeescript_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param text const char*
///
char* q_scilexercoffeescript_text_as_bytes(void* self, const char* text);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_text_as_bytes` instead
///
#define q_scilexercoffeescript_qbase_text_as_bytes q_scilexercoffeescript_super_text_as_bytes

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param text const char*
///
char* q_scilexercoffeescript_super_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback libqt_string func(QsciLexerCoffeeScript* self, const char* text)
///
void q_scilexercoffeescript_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercoffeescript_bytes_as_text(void* self, const char* bytes, int size);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_bytes_as_text` instead
///
#define q_scilexercoffeescript_qbase_bytes_as_text q_scilexercoffeescript_super_bytes_as_text

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercoffeescript_super_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback const char* func(QsciLexerCoffeeScript* self, const char* bytes, int size)
///
void q_scilexercoffeescript_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
QObject* q_scilexercoffeescript_sender(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_sender` instead
///
#define q_scilexercoffeescript_qbase_sender q_scilexercoffeescript_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
QObject* q_scilexercoffeescript_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback QObject* func()
///
void q_scilexercoffeescript_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_sender_signal_index` instead
///
#define q_scilexercoffeescript_qbase_sender_signal_index q_scilexercoffeescript_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
///
int32_t q_scilexercoffeescript_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func()
///
void q_scilexercoffeescript_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal const char*
///
int32_t q_scilexercoffeescript_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_receivers` instead
///
#define q_scilexercoffeescript_qbase_receivers q_scilexercoffeescript_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal const char*
///
int32_t q_scilexercoffeescript_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback int32_t func(QsciLexerCoffeeScript* self, const char* signal)
///
void q_scilexercoffeescript_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
bool q_scilexercoffeescript_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercoffeescript_super_is_signal_connected` instead
///
#define q_scilexercoffeescript_qbase_is_signal_connected q_scilexercoffeescript_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param signal QMetaMethod*
///
bool q_scilexercoffeescript_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCoffeeScript*
/// @param callback bool func(QsciLexerCoffeeScript* self, QMetaMethod* signal)
///
void q_scilexercoffeescript_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerCoffeeScript*
/// @param callback void func(QsciLexerCoffeeScript* self, const char* objectName)
///
void q_scilexercoffeescript_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerCoffeeScript*
///
void q_scilexercoffeescript_delete(void* self);

typedef enum {
    QSCILEXERCOFFEESCRIPT__DEFAULT = 0,
    QSCILEXERCOFFEESCRIPT__COMMENT = 1,
    QSCILEXERCOFFEESCRIPT__COMMENTLINE = 2,
    QSCILEXERCOFFEESCRIPT__COMMENTDOC = 3,
    QSCILEXERCOFFEESCRIPT__NUMBER = 4,
    QSCILEXERCOFFEESCRIPT__KEYWORD = 5,
    QSCILEXERCOFFEESCRIPT__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERCOFFEESCRIPT__SINGLEQUOTEDSTRING = 7,
    QSCILEXERCOFFEESCRIPT__UUID = 8,
    QSCILEXERCOFFEESCRIPT__PREPROCESSOR = 9,
    QSCILEXERCOFFEESCRIPT__OPERATOR = 10,
    QSCILEXERCOFFEESCRIPT__IDENTIFIER = 11,
    QSCILEXERCOFFEESCRIPT__UNCLOSEDSTRING = 12,
    QSCILEXERCOFFEESCRIPT__VERBATIMSTRING = 13,
    QSCILEXERCOFFEESCRIPT__REGEX = 14,
    QSCILEXERCOFFEESCRIPT__COMMENTLINEDOC = 15,
    QSCILEXERCOFFEESCRIPT__KEYWORDSET2 = 16,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORD = 17,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERCOFFEESCRIPT__GLOBALCLASS = 19,
    QSCILEXERCOFFEESCRIPT__COMMENTBLOCK = 22,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEX = 23,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEXCOMMENT = 24,
    QSCILEXERCOFFEESCRIPT__INSTANCEPROPERTY = 25
} QsciLexerCoffeeScript__;

#endif
