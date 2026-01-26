#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERHTML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERHTML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)

/// q_scilexerhtml_new constructs a new QsciLexerHTML object.
///
QsciLexerHTML* q_scilexerhtml_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)

/// q_scilexerhtml_new2 constructs a new QsciLexerHTML object.
///
/// @param parent QObject*
///
QsciLexerHTML* q_scilexerhtml_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerHTML*
///
const QMetaObject* q_scilexerhtml_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback const QMetaObject* func()
///
void q_scilexerhtml_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
///
const QMetaObject* q_scilexerhtml_qbase_meta_object(void* self);

/// @param self QsciLexerHTML*
/// @param param1 const char*
///
void* q_scilexerhtml_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback void* func(QsciLexerHTML* self, const char* param1)
///
void q_scilexerhtml_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param param1 const char*
///
void* q_scilexerhtml_qbase_metacast(void* self, const char* param1);

/// @param self QsciLexerHTML*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerhtml_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func(QsciLexerHTML* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexerhtml_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerhtml_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexerhtml_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
///
const char* q_scilexerhtml_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
///
const char* q_scilexerhtml_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
///
const char* q_scilexerhtml_auto_completion_fillups(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
///
const char* q_scilexerhtml_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param style int
///
bool q_scilexerhtml_default_eol_fill(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param style int
///
QFont* q_scilexerhtml_default_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_default_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
/// @param set int
///
const char* q_scilexerhtml_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
/// @param style int
///
const char* q_scilexerhtml_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_case_sensitive_tags(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param enabled bool
///
void q_scilexerhtml_set_django_templates(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_django_templates(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_fold_compact(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_fold_preprocessor(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_set_fold_script_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_fold_script_comments(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_set_fold_script_heredocs(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_fold_script_heredocs(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param enabled bool
///
void q_scilexerhtml_set_mako_templates(void* self, bool enabled);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_mako_templates(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, bool fold)
///
void q_scilexerhtml_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_qbase_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_set_fold_preprocessor(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, bool fold)
///
void q_scilexerhtml_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param fold bool
///
void q_scilexerhtml_qbase_set_fold_preprocessor(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param sens bool
///
void q_scilexerhtml_set_case_sensitive_tags(void* self, bool sens);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, bool sens)
///
void q_scilexerhtml_on_set_case_sensitive_tags(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param sens bool
///
void q_scilexerhtml_qbase_set_case_sensitive_tags(void* self, bool sens);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, QSettings* qs, const char* prefix)
///
void q_scilexerhtml_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, QSettings* qs, const char* prefix)
///
void q_scilexerhtml_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexerhtml_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexerhtml_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
///
QsciAbstractAPIs* q_scilexerhtml_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
///
QsciScintilla* q_scilexerhtml_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param apis QsciAbstractAPIs*
///
void q_scilexerhtml_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param c QColor*
///
void q_scilexerhtml_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param f QFont*
///
void q_scilexerhtml_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param c QColor*
///
void q_scilexerhtml_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
///
bool q_scilexerhtml_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
///
bool q_scilexerhtml_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QColor* c, int style)
///
void q_scilexerhtml_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param eolfilled bool
/// @param style int
///
void q_scilexerhtml_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, bool eolfilled, int style)
///
void q_scilexerhtml_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param f QFont*
/// @param style int
///
void q_scilexerhtml_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QFont* f, int style)
///
void q_scilexerhtml_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QColor* c, int style)
///
void q_scilexerhtml_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param prop const char*
/// @param val const char*
///
void q_scilexerhtml_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, const char* prop, const char* val)
///
void q_scilexerhtml_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerHTML*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerhtml_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerHTML*
///
const char* q_scilexerhtml_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerHTML*
/// @param name char*
///
void q_scilexerhtml_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerHTML*
/// @param b bool
///
bool q_scilexerhtml_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerHTML*
///
QThread* q_scilexerhtml_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerHTML*
/// @param thread QThread*
///
bool q_scilexerhtml_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerHTML*
/// @param interval int
///
int32_t q_scilexerhtml_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerHTML*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexerhtml_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerHTML*
/// @param id int
///
void q_scilexerhtml_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerHTML*
/// @param id enum Qt__TimerId
///
void q_scilexerhtml_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerHTML*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexerhtml_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerHTML*
/// @param parent QObject*
///
void q_scilexerhtml_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerHTML*
/// @param filterObj QObject*
///
void q_scilexerhtml_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerHTML*
/// @param obj QObject*
///
void q_scilexerhtml_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexerhtml_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerHTML*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexerhtml_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexerhtml_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexerhtml_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerHTML*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexerhtml_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerHTML*
/// @param name const char*
///
QVariant* q_scilexerhtml_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerHTML*
///
const char** q_scilexerhtml_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerHTML*
///
QBindingStorage* q_scilexerhtml_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerHTML*
///
const QBindingStorage* q_scilexerhtml_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self)
///
void q_scilexerhtml_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerHTML*
///
QObject* q_scilexerhtml_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerHTML*
/// @param classname const char*
///
bool q_scilexerhtml_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerHTML*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_scilexerhtml_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerHTML*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerhtml_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerHTML*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerhtml_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexerhtml_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerHTML*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexerhtml_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerHTML*
/// @param param1 QObject*
///
void q_scilexerhtml_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QObject* param1)
///
void q_scilexerhtml_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
const char** q_scilexerhtml_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
const char** q_scilexerhtml_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback const char** func()
///
void q_scilexerhtml_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback const char* func(QsciLexerHTML* self, int* style)
///
void q_scilexerhtml_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback const char* func(QsciLexerHTML* self, int* style)
///
void q_scilexerhtml_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int*
///
const char* q_scilexerhtml_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback const char* func(QsciLexerHTML* self, int* style)
///
void q_scilexerhtml_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
bool q_scilexerhtml_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback bool func()
///
void q_scilexerhtml_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QColor* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
bool q_scilexerhtml_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
bool q_scilexerhtml_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QFont* q_scilexerhtml_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QFont* q_scilexerhtml_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QFont* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QColor* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QColor* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QFont* q_scilexerhtml_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QFont* q_scilexerhtml_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QFont* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param style int
///
QColor* q_scilexerhtml_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QColor* func(QsciLexerHTML* self, int style)
///
void q_scilexerhtml_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param editor QsciScintilla*
///
void q_scilexerhtml_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param editor QsciScintilla*
///
void q_scilexerhtml_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QsciScintilla* editor)
///
void q_scilexerhtml_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param autoindentstyle int
///
void q_scilexerhtml_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param autoindentstyle int
///
void q_scilexerhtml_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, int autoindentstyle)
///
void q_scilexerhtml_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QColor* c, int style)
///
void q_scilexerhtml_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param eoffill bool
/// @param style int
///
void q_scilexerhtml_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param eoffill bool
/// @param style int
///
void q_scilexerhtml_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, bool eoffill, int style)
///
void q_scilexerhtml_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param f QFont*
/// @param style int
///
void q_scilexerhtml_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param f QFont*
/// @param style int
///
void q_scilexerhtml_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QFont* f, int style)
///
void q_scilexerhtml_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param c QColor*
/// @param style int
///
void q_scilexerhtml_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QColor* c, int style)
///
void q_scilexerhtml_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QEvent*
///
bool q_scilexerhtml_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QEvent*
///
bool q_scilexerhtml_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, QEvent* event)
///
void q_scilexerhtml_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerhtml_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerhtml_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, QObject* watched, QEvent* event)
///
void q_scilexerhtml_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QTimerEvent*
///
void q_scilexerhtml_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QTimerEvent*
///
void q_scilexerhtml_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QTimerEvent* event)
///
void q_scilexerhtml_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QChildEvent*
///
void q_scilexerhtml_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QChildEvent*
///
void q_scilexerhtml_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QChildEvent* event)
///
void q_scilexerhtml_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QEvent*
///
void q_scilexerhtml_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param event QEvent*
///
void q_scilexerhtml_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QEvent* event)
///
void q_scilexerhtml_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
void q_scilexerhtml_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
void q_scilexerhtml_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QMetaMethod* signal)
///
void q_scilexerhtml_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
void q_scilexerhtml_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
void q_scilexerhtml_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, QMetaMethod* signal)
///
void q_scilexerhtml_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param text const char*
///
char* q_scilexerhtml_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param text const char*
///
char* q_scilexerhtml_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback char* func(QsciLexerHTML* self, const char* text)
///
void q_scilexerhtml_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerhtml_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerhtml_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback const char* func(QsciLexerHTML* self, const char* bytes, int size)
///
void q_scilexerhtml_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
QObject* q_scilexerhtml_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
QObject* q_scilexerhtml_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback QObject* func()
///
void q_scilexerhtml_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
///
int32_t q_scilexerhtml_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func()
///
void q_scilexerhtml_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal const char*
///
int32_t q_scilexerhtml_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal const char*
///
int32_t q_scilexerhtml_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback int32_t func(QsciLexerHTML* self, const char* signal)
///
void q_scilexerhtml_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
bool q_scilexerhtml_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param signal QMetaMethod*
///
bool q_scilexerhtml_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerHTML*
/// @param callback bool func(QsciLexerHTML* self, QMetaMethod* signal)
///
void q_scilexerhtml_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerHTML*
/// @param callback void func(QsciLexerHTML* self, const char* objectName)
///
void q_scilexerhtml_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerHTML*
///
void q_scilexerhtml_delete(void* self);

typedef enum {
    QSCILEXERHTML__DEFAULT = 0,
    QSCILEXERHTML__TAG = 1,
    QSCILEXERHTML__UNKNOWNTAG = 2,
    QSCILEXERHTML__ATTRIBUTE = 3,
    QSCILEXERHTML__UNKNOWNATTRIBUTE = 4,
    QSCILEXERHTML__HTMLNUMBER = 5,
    QSCILEXERHTML__HTMLDOUBLEQUOTEDSTRING = 6,
    QSCILEXERHTML__HTMLSINGLEQUOTEDSTRING = 7,
    QSCILEXERHTML__OTHERINTAG = 8,
    QSCILEXERHTML__HTMLCOMMENT = 9,
    QSCILEXERHTML__ENTITY = 10,
    QSCILEXERHTML__XMLTAGEND = 11,
    QSCILEXERHTML__XMLSTART = 12,
    QSCILEXERHTML__XMLEND = 13,
    QSCILEXERHTML__SCRIPT = 14,
    QSCILEXERHTML__ASPATSTART = 15,
    QSCILEXERHTML__ASPSTART = 16,
    QSCILEXERHTML__CDATA = 17,
    QSCILEXERHTML__PHPSTART = 18,
    QSCILEXERHTML__HTMLVALUE = 19,
    QSCILEXERHTML__ASPXCCOMMENT = 20,
    QSCILEXERHTML__SGMLDEFAULT = 21,
    QSCILEXERHTML__SGMLCOMMAND = 22,
    QSCILEXERHTML__SGMLPARAMETER = 23,
    QSCILEXERHTML__SGMLDOUBLEQUOTEDSTRING = 24,
    QSCILEXERHTML__SGMLSINGLEQUOTEDSTRING = 25,
    QSCILEXERHTML__SGMLERROR = 26,
    QSCILEXERHTML__SGMLSPECIAL = 27,
    QSCILEXERHTML__SGMLENTITY = 28,
    QSCILEXERHTML__SGMLCOMMENT = 29,
    QSCILEXERHTML__SGMLPARAMETERCOMMENT = 30,
    QSCILEXERHTML__SGMLBLOCKDEFAULT = 31,
    QSCILEXERHTML__JAVASCRIPTSTART = 40,
    QSCILEXERHTML__JAVASCRIPTDEFAULT = 41,
    QSCILEXERHTML__JAVASCRIPTCOMMENT = 42,
    QSCILEXERHTML__JAVASCRIPTCOMMENTLINE = 43,
    QSCILEXERHTML__JAVASCRIPTCOMMENTDOC = 44,
    QSCILEXERHTML__JAVASCRIPTNUMBER = 45,
    QSCILEXERHTML__JAVASCRIPTWORD = 46,
    QSCILEXERHTML__JAVASCRIPTKEYWORD = 47,
    QSCILEXERHTML__JAVASCRIPTDOUBLEQUOTEDSTRING = 48,
    QSCILEXERHTML__JAVASCRIPTSINGLEQUOTEDSTRING = 49,
    QSCILEXERHTML__JAVASCRIPTSYMBOL = 50,
    QSCILEXERHTML__JAVASCRIPTUNCLOSEDSTRING = 51,
    QSCILEXERHTML__JAVASCRIPTREGEX = 52,
    QSCILEXERHTML__ASPJAVASCRIPTSTART = 55,
    QSCILEXERHTML__ASPJAVASCRIPTDEFAULT = 56,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENT = 57,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTLINE = 58,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTDOC = 59,
    QSCILEXERHTML__ASPJAVASCRIPTNUMBER = 60,
    QSCILEXERHTML__ASPJAVASCRIPTWORD = 61,
    QSCILEXERHTML__ASPJAVASCRIPTKEYWORD = 62,
    QSCILEXERHTML__ASPJAVASCRIPTDOUBLEQUOTEDSTRING = 63,
    QSCILEXERHTML__ASPJAVASCRIPTSINGLEQUOTEDSTRING = 64,
    QSCILEXERHTML__ASPJAVASCRIPTSYMBOL = 65,
    QSCILEXERHTML__ASPJAVASCRIPTUNCLOSEDSTRING = 66,
    QSCILEXERHTML__ASPJAVASCRIPTREGEX = 67,
    QSCILEXERHTML__VBSCRIPTSTART = 70,
    QSCILEXERHTML__VBSCRIPTDEFAULT = 71,
    QSCILEXERHTML__VBSCRIPTCOMMENT = 72,
    QSCILEXERHTML__VBSCRIPTNUMBER = 73,
    QSCILEXERHTML__VBSCRIPTKEYWORD = 74,
    QSCILEXERHTML__VBSCRIPTSTRING = 75,
    QSCILEXERHTML__VBSCRIPTIDENTIFIER = 76,
    QSCILEXERHTML__VBSCRIPTUNCLOSEDSTRING = 77,
    QSCILEXERHTML__ASPVBSCRIPTSTART = 80,
    QSCILEXERHTML__ASPVBSCRIPTDEFAULT = 81,
    QSCILEXERHTML__ASPVBSCRIPTCOMMENT = 82,
    QSCILEXERHTML__ASPVBSCRIPTNUMBER = 83,
    QSCILEXERHTML__ASPVBSCRIPTKEYWORD = 84,
    QSCILEXERHTML__ASPVBSCRIPTSTRING = 85,
    QSCILEXERHTML__ASPVBSCRIPTIDENTIFIER = 86,
    QSCILEXERHTML__ASPVBSCRIPTUNCLOSEDSTRING = 87,
    QSCILEXERHTML__PYTHONSTART = 90,
    QSCILEXERHTML__PYTHONDEFAULT = 91,
    QSCILEXERHTML__PYTHONCOMMENT = 92,
    QSCILEXERHTML__PYTHONNUMBER = 93,
    QSCILEXERHTML__PYTHONDOUBLEQUOTEDSTRING = 94,
    QSCILEXERHTML__PYTHONSINGLEQUOTEDSTRING = 95,
    QSCILEXERHTML__PYTHONKEYWORD = 96,
    QSCILEXERHTML__PYTHONTRIPLESINGLEQUOTEDSTRING = 97,
    QSCILEXERHTML__PYTHONTRIPLEDOUBLEQUOTEDSTRING = 98,
    QSCILEXERHTML__PYTHONCLASSNAME = 99,
    QSCILEXERHTML__PYTHONFUNCTIONMETHODNAME = 100,
    QSCILEXERHTML__PYTHONOPERATOR = 101,
    QSCILEXERHTML__PYTHONIDENTIFIER = 102,
    QSCILEXERHTML__ASPPYTHONSTART = 105,
    QSCILEXERHTML__ASPPYTHONDEFAULT = 106,
    QSCILEXERHTML__ASPPYTHONCOMMENT = 107,
    QSCILEXERHTML__ASPPYTHONNUMBER = 108,
    QSCILEXERHTML__ASPPYTHONDOUBLEQUOTEDSTRING = 109,
    QSCILEXERHTML__ASPPYTHONSINGLEQUOTEDSTRING = 110,
    QSCILEXERHTML__ASPPYTHONKEYWORD = 111,
    QSCILEXERHTML__ASPPYTHONTRIPLESINGLEQUOTEDSTRING = 112,
    QSCILEXERHTML__ASPPYTHONTRIPLEDOUBLEQUOTEDSTRING = 113,
    QSCILEXERHTML__ASPPYTHONCLASSNAME = 114,
    QSCILEXERHTML__ASPPYTHONFUNCTIONMETHODNAME = 115,
    QSCILEXERHTML__ASPPYTHONOPERATOR = 116,
    QSCILEXERHTML__ASPPYTHONIDENTIFIER = 117,
    QSCILEXERHTML__PHPDEFAULT = 118,
    QSCILEXERHTML__PHPDOUBLEQUOTEDSTRING = 119,
    QSCILEXERHTML__PHPSINGLEQUOTEDSTRING = 120,
    QSCILEXERHTML__PHPKEYWORD = 121,
    QSCILEXERHTML__PHPNUMBER = 122,
    QSCILEXERHTML__PHPVARIABLE = 123,
    QSCILEXERHTML__PHPCOMMENT = 124,
    QSCILEXERHTML__PHPCOMMENTLINE = 125,
    QSCILEXERHTML__PHPDOUBLEQUOTEDVARIABLE = 126,
    QSCILEXERHTML__PHPOPERATOR = 127
} QsciLexerHTML__;

#endif
