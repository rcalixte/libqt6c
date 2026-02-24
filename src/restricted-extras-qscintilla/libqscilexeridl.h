#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERIDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERIDL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)

/// q_scilexeridl_new constructs a new QsciLexerIDL object.
///
QsciLexerIDL* q_scilexeridl_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)

/// q_scilexeridl_new2 constructs a new QsciLexerIDL object.
///
/// @param parent QObject*
///
QsciLexerIDL* q_scilexeridl_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerIDL*
///
const QMetaObject* q_scilexeridl_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerIDL*
/// @param callback const QMetaObject* func()
///
void q_scilexeridl_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_scilexeridl_super_meta_object` instead
///
#define q_scilexeridl_qbase_meta_object q_scilexeridl_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerIDL*
///
const QMetaObject* q_scilexeridl_super_meta_object(void* self);

/// @param self QsciLexerIDL*
/// @param param1 const char*
///
void* q_scilexeridl_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerIDL*
/// @param callback void* func(QsciLexerIDL* self, const char* param1)
///
void q_scilexeridl_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_scilexeridl_super_metacast` instead
///
#define q_scilexeridl_qbase_metacast q_scilexeridl_super_metacast

/// Base class method implementation
///
/// @param self QsciLexerIDL*
/// @param param1 const char*
///
void* q_scilexeridl_super_metacast(void* self, const char* param1);

/// @param self QsciLexerIDL*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeridl_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func(QsciLexerIDL* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexeridl_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_scilexeridl_super_metacall` instead
///
#define q_scilexeridl_qbase_metacall q_scilexeridl_super_metacall

/// Base class method implementation
///
/// @param self QsciLexerIDL*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeridl_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexeridl_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
/// @param set int
///
const char* q_scilexeridl_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
/// @param style int
///
const char* q_scilexeridl_description(void* self, int style);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexeridl_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexeridl_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param style int
///
QFont* q_scilexeridl_default_font(void* self, int style);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_default_paper(void* self, int style);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_fold_at_else(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_fold_comments(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_fold_compact(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_fold_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_style_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param allowed bool
///
void q_scilexeridl_set_dollars_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_dollars_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param enabled bool
///
void q_scilexeridl_set_highlight_triple_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_highlight_triple_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param enabled bool
///
void q_scilexeridl_set_highlight_hash_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_highlight_hash_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param enabled bool
///
void q_scilexeridl_set_highlight_back_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_highlight_back_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param enabled bool
///
void q_scilexeridl_set_highlight_escape_sequences(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_highlight_escape_sequences(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
/// @param allowed bool
///
void q_scilexeridl_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_verbatim_string_escape_sequences_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_end1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_start1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
///
QsciAbstractAPIs* q_scilexeridl_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
///
QsciScintilla* q_scilexeridl_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param apis QsciAbstractAPIs*
///
void q_scilexeridl_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param c QColor*
///
void q_scilexeridl_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param f QFont*
///
void q_scilexeridl_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param c QColor*
///
void q_scilexeridl_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
///
bool q_scilexeridl_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
///
bool q_scilexeridl_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QColor* c, int style)
///
void q_scilexeridl_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param eolfilled bool
/// @param style int
///
void q_scilexeridl_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool eolfilled, int style)
///
void q_scilexeridl_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param f QFont*
/// @param style int
///
void q_scilexeridl_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QFont* f, int style)
///
void q_scilexeridl_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QColor* c, int style)
///
void q_scilexeridl_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param prop const char*
/// @param val const char*
///
void q_scilexeridl_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, const char* prop, const char* val)
///
void q_scilexeridl_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerIDL*
/// @param name const char*
///
void q_scilexeridl_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerIDL*
/// @param b bool
///
bool q_scilexeridl_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerIDL*
///
QThread* q_scilexeridl_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerIDL*
/// @param thread QThread*
///
bool q_scilexeridl_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerIDL*
/// @param interval int
///
int32_t q_scilexeridl_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerIDL*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexeridl_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerIDL*
/// @param id int
///
void q_scilexeridl_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerIDL*
/// @param id enum Qt__TimerId
///
void q_scilexeridl_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerIDL*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexeridl_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerIDL*
/// @param parent QObject*
///
void q_scilexeridl_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerIDL*
/// @param filterObj QObject*
///
void q_scilexeridl_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerIDL*
/// @param obj QObject*
///
void q_scilexeridl_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexeridl_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexeridl_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerIDL*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexeridl_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeridl_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexeridl_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
/// @param receiver QObject*
///
bool q_scilexeridl_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexeridl_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerIDL*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexeridl_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerIDL*
/// @param name const char*
///
QVariant* q_scilexeridl_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerIDL*
///
const char** q_scilexeridl_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerIDL*
///
QBindingStorage* q_scilexeridl_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerIDL*
///
const QBindingStorage* q_scilexeridl_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self)
///
void q_scilexeridl_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerIDL*
///
QObject* q_scilexeridl_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerIDL*
/// @param classname const char*
///
bool q_scilexeridl_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerIDL*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexeridl_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerIDL*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexeridl_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexeridl_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexeridl_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerIDL*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexeridl_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
/// @param signal const char*
///
bool q_scilexeridl_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexeridl_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeridl_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerIDL*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeridl_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerIDL*
/// @param param1 QObject*
///
void q_scilexeridl_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QObject* param1)
///
void q_scilexeridl_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_set_fold_at_else(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_fold_at_else` instead
///
#define q_scilexeridl_qbase_set_fold_at_else q_scilexeridl_super_set_fold_at_else

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_super_set_fold_at_else(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool fold)
///
void q_scilexeridl_on_set_fold_at_else(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_set_fold_comments(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_fold_comments` instead
///
#define q_scilexeridl_qbase_set_fold_comments q_scilexeridl_super_set_fold_comments

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_super_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool fold)
///
void q_scilexeridl_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_set_fold_compact(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_fold_compact` instead
///
#define q_scilexeridl_qbase_set_fold_compact q_scilexeridl_super_set_fold_compact

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_super_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool fold)
///
void q_scilexeridl_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_set_fold_preprocessor(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_fold_preprocessor` instead
///
#define q_scilexeridl_qbase_set_fold_preprocessor q_scilexeridl_super_set_fold_preprocessor

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param fold bool
///
void q_scilexeridl_super_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool fold)
///
void q_scilexeridl_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style bool
///
void q_scilexeridl_set_style_preprocessor(void* self, bool style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_style_preprocessor` instead
///
#define q_scilexeridl_qbase_set_style_preprocessor q_scilexeridl_super_set_style_preprocessor

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style bool
///
void q_scilexeridl_super_set_style_preprocessor(void* self, bool style);

/// Inherited from QsciLexerCPP
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool style)
///
void q_scilexeridl_on_set_style_preprocessor(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_lexer(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_lexer` instead
///
#define q_scilexeridl_qbase_lexer q_scilexeridl_super_lexer

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_super_lexer(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func()
///
void q_scilexeridl_on_lexer(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_lexer_id(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_lexer_id` instead
///
#define q_scilexeridl_qbase_lexer_id q_scilexeridl_super_lexer_id

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_auto_completion_fillups(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_auto_completion_fillups` instead
///
#define q_scilexeridl_qbase_auto_completion_fillups q_scilexeridl_super_auto_completion_fillups

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_super_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func()
///
void q_scilexeridl_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char** q_scilexeridl_auto_completion_word_separators(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_auto_completion_word_separators` instead
///
#define q_scilexeridl_qbase_auto_completion_word_separators q_scilexeridl_super_auto_completion_word_separators

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char** q_scilexeridl_super_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char** func()
///
void q_scilexeridl_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_end(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_block_end` instead
///
#define q_scilexeridl_qbase_block_end q_scilexeridl_super_block_end

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_super_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func(QsciLexerIDL* self, int* style)
///
void q_scilexeridl_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_block_lookback(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_block_lookback` instead
///
#define q_scilexeridl_qbase_block_lookback q_scilexeridl_super_block_lookback

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_start(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_block_start` instead
///
#define q_scilexeridl_qbase_block_start q_scilexeridl_super_block_start

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_super_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func(QsciLexerIDL* self, int* style)
///
void q_scilexeridl_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_block_start_keyword(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_block_start_keyword` instead
///
#define q_scilexeridl_qbase_block_start_keyword q_scilexeridl_super_block_start_keyword

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int*
///
const char* q_scilexeridl_super_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func(QsciLexerIDL* self, int* style)
///
void q_scilexeridl_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_brace_style(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_brace_style` instead
///
#define q_scilexeridl_qbase_brace_style q_scilexeridl_super_brace_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_case_sensitive(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_case_sensitive` instead
///
#define q_scilexeridl_qbase_case_sensitive q_scilexeridl_super_case_sensitive

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
bool q_scilexeridl_super_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func()
///
void q_scilexeridl_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_color(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_color` instead
///
#define q_scilexeridl_qbase_color q_scilexeridl_super_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_super_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QColor* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
bool q_scilexeridl_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_eol_fill` instead
///
#define q_scilexeridl_qbase_eol_fill q_scilexeridl_super_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
bool q_scilexeridl_super_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QFont* q_scilexeridl_font(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_font` instead
///
#define q_scilexeridl_qbase_font q_scilexeridl_super_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QFont* q_scilexeridl_super_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QFont* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_indentation_guide_view(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_indentation_guide_view` instead
///
#define q_scilexeridl_qbase_indentation_guide_view q_scilexeridl_super_indentation_guide_view

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_default_style(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_default_style` instead
///
#define q_scilexeridl_qbase_default_style q_scilexeridl_super_default_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_paper(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_paper` instead
///
#define q_scilexeridl_qbase_paper q_scilexeridl_super_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_super_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QColor* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_default_color2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_default_color2` instead
///
#define q_scilexeridl_qbase_default_color2 q_scilexeridl_super_default_color2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_super_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QColor* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
bool q_scilexeridl_default_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_default_eol_fill` instead
///
#define q_scilexeridl_qbase_default_eol_fill q_scilexeridl_super_default_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
bool q_scilexeridl_super_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QFont* q_scilexeridl_default_font2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_default_font2` instead
///
#define q_scilexeridl_qbase_default_font2 q_scilexeridl_super_default_font2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QFont* q_scilexeridl_super_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QFont* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_default_paper2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_default_paper2` instead
///
#define q_scilexeridl_qbase_default_paper2 q_scilexeridl_super_default_paper2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param style int
///
QColor* q_scilexeridl_super_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QColor* func(QsciLexerIDL* self, int style)
///
void q_scilexeridl_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param editor QsciScintilla*
///
void q_scilexeridl_set_editor(void* self, void* editor);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_editor` instead
///
#define q_scilexeridl_qbase_set_editor q_scilexeridl_super_set_editor

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param editor QsciScintilla*
///
void q_scilexeridl_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QsciScintilla* editor)
///
void q_scilexeridl_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_refresh_properties(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_refresh_properties` instead
///
#define q_scilexeridl_qbase_refresh_properties q_scilexeridl_super_refresh_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_super_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func()
///
void q_scilexeridl_on_refresh_properties(void* self, void (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_style_bits_needed(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_style_bits_needed` instead
///
#define q_scilexeridl_qbase_style_bits_needed q_scilexeridl_super_style_bits_needed

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_word_characters(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_word_characters` instead
///
#define q_scilexeridl_qbase_word_characters q_scilexeridl_super_word_characters

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
const char* q_scilexeridl_super_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func()
///
void q_scilexeridl_on_word_characters(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param autoindentstyle int
///
void q_scilexeridl_set_auto_indent_style(void* self, int autoindentstyle);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_auto_indent_style` instead
///
#define q_scilexeridl_qbase_set_auto_indent_style q_scilexeridl_super_set_auto_indent_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param autoindentstyle int
///
void q_scilexeridl_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, int autoindentstyle)
///
void q_scilexeridl_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_set_color(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_color` instead
///
#define q_scilexeridl_qbase_set_color q_scilexeridl_super_set_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_super_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QColor* c, int style)
///
void q_scilexeridl_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param eoffill bool
/// @param style int
///
void q_scilexeridl_set_eol_fill(void* self, bool eoffill, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_eol_fill` instead
///
#define q_scilexeridl_qbase_set_eol_fill q_scilexeridl_super_set_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param eoffill bool
/// @param style int
///
void q_scilexeridl_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, bool eoffill, int style)
///
void q_scilexeridl_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param f QFont*
/// @param style int
///
void q_scilexeridl_set_font(void* self, void* f, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_font` instead
///
#define q_scilexeridl_qbase_set_font q_scilexeridl_super_set_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param f QFont*
/// @param style int
///
void q_scilexeridl_super_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QFont* f, int style)
///
void q_scilexeridl_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_set_paper(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexeridl_super_set_paper` instead
///
#define q_scilexeridl_qbase_set_paper q_scilexeridl_super_set_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param c QColor*
/// @param style int
///
void q_scilexeridl_super_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QColor* c, int style)
///
void q_scilexeridl_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_read_properties(void* self, void* qs, const char* prefix);

/// @warning DEPRECATED: Use `q_scilexeridl_super_read_properties` instead
///
#define q_scilexeridl_qbase_read_properties q_scilexeridl_super_read_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_super_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, QSettings* qs, const char* prefix)
///
void q_scilexeridl_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_write_properties(void* self, void* qs, const char* prefix);

/// @warning DEPRECATED: Use `q_scilexeridl_super_write_properties` instead
///
#define q_scilexeridl_qbase_write_properties q_scilexeridl_super_write_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeridl_super_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, QSettings* qs, const char* prefix)
///
void q_scilexeridl_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QEvent*
///
bool q_scilexeridl_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexeridl_super_event` instead
///
#define q_scilexeridl_qbase_event q_scilexeridl_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QEvent*
///
bool q_scilexeridl_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, QEvent* event)
///
void q_scilexeridl_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeridl_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_scilexeridl_super_event_filter` instead
///
#define q_scilexeridl_qbase_event_filter q_scilexeridl_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeridl_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, QObject* watched, QEvent* event)
///
void q_scilexeridl_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QTimerEvent*
///
void q_scilexeridl_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexeridl_super_timer_event` instead
///
#define q_scilexeridl_qbase_timer_event q_scilexeridl_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QTimerEvent*
///
void q_scilexeridl_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QTimerEvent* event)
///
void q_scilexeridl_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QChildEvent*
///
void q_scilexeridl_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexeridl_super_child_event` instead
///
#define q_scilexeridl_qbase_child_event q_scilexeridl_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QChildEvent*
///
void q_scilexeridl_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QChildEvent* event)
///
void q_scilexeridl_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QEvent*
///
void q_scilexeridl_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexeridl_super_custom_event` instead
///
#define q_scilexeridl_qbase_custom_event q_scilexeridl_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param event QEvent*
///
void q_scilexeridl_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QEvent* event)
///
void q_scilexeridl_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
void q_scilexeridl_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexeridl_super_connect_notify` instead
///
#define q_scilexeridl_qbase_connect_notify q_scilexeridl_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
void q_scilexeridl_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QMetaMethod* signal)
///
void q_scilexeridl_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
void q_scilexeridl_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexeridl_super_disconnect_notify` instead
///
#define q_scilexeridl_qbase_disconnect_notify q_scilexeridl_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
void q_scilexeridl_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, QMetaMethod* signal)
///
void q_scilexeridl_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param text const char*
///
char* q_scilexeridl_text_as_bytes(void* self, const char* text);

/// @warning DEPRECATED: Use `q_scilexeridl_super_text_as_bytes` instead
///
#define q_scilexeridl_qbase_text_as_bytes q_scilexeridl_super_text_as_bytes

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param text const char*
///
char* q_scilexeridl_super_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback libqt_string func(QsciLexerIDL* self, const char* text)
///
void q_scilexeridl_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeridl_bytes_as_text(void* self, const char* bytes, int size);

/// @warning DEPRECATED: Use `q_scilexeridl_super_bytes_as_text` instead
///
#define q_scilexeridl_qbase_bytes_as_text q_scilexeridl_super_bytes_as_text

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeridl_super_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback const char* func(QsciLexerIDL* self, const char* bytes, int size)
///
void q_scilexeridl_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
QObject* q_scilexeridl_sender(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_sender` instead
///
#define q_scilexeridl_qbase_sender q_scilexeridl_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
QObject* q_scilexeridl_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback QObject* func()
///
void q_scilexeridl_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_scilexeridl_super_sender_signal_index` instead
///
#define q_scilexeridl_qbase_sender_signal_index q_scilexeridl_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
///
int32_t q_scilexeridl_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func()
///
void q_scilexeridl_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal const char*
///
int32_t q_scilexeridl_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_scilexeridl_super_receivers` instead
///
#define q_scilexeridl_qbase_receivers q_scilexeridl_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal const char*
///
int32_t q_scilexeridl_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback int32_t func(QsciLexerIDL* self, const char* signal)
///
void q_scilexeridl_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
bool q_scilexeridl_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexeridl_super_is_signal_connected` instead
///
#define q_scilexeridl_qbase_is_signal_connected q_scilexeridl_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param signal QMetaMethod*
///
bool q_scilexeridl_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerIDL*
/// @param callback bool func(QsciLexerIDL* self, QMetaMethod* signal)
///
void q_scilexeridl_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerIDL*
/// @param callback void func(QsciLexerIDL* self, const char* objectName)
///
void q_scilexeridl_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerIDL.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerIDL*
///
void q_scilexeridl_delete(void* self);

#endif
