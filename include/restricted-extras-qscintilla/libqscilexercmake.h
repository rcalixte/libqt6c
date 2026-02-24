#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERCMAKE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERCMAKE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)

/// q_scilexercmake_new constructs a new QsciLexerCMake object.
///
QsciLexerCMake* q_scilexercmake_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)

/// q_scilexercmake_new2 constructs a new QsciLexerCMake object.
///
/// @param parent QObject*
///
QsciLexerCMake* q_scilexercmake_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerCMake*
///
const QMetaObject* q_scilexercmake_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback const QMetaObject* func()
///
void q_scilexercmake_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_scilexercmake_super_meta_object` instead
///
#define q_scilexercmake_qbase_meta_object q_scilexercmake_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerCMake*
///
const QMetaObject* q_scilexercmake_super_meta_object(void* self);

/// @param self QsciLexerCMake*
/// @param param1 const char*
///
void* q_scilexercmake_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback void* func(QsciLexerCMake* self, const char* param1)
///
void q_scilexercmake_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercmake_super_metacast` instead
///
#define q_scilexercmake_qbase_metacast q_scilexercmake_super_metacast

/// Base class method implementation
///
/// @param self QsciLexerCMake*
/// @param param1 const char*
///
void* q_scilexercmake_super_metacast(void* self, const char* param1);

/// @param self QsciLexerCMake*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercmake_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func(QsciLexerCMake* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexercmake_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_scilexercmake_super_metacall` instead
///
#define q_scilexercmake_qbase_metacall q_scilexercmake_super_metacall

/// Base class method implementation
///
/// @param self QsciLexerCMake*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexercmake_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexercmake_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param style int
///
QFont* q_scilexercmake_default_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_default_paper(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCMake*
/// @param set int
///
const char* q_scilexercmake_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCMake*
/// @param style int
///
const char* q_scilexercmake_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_fold_at_else(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param fold bool
///
void q_scilexercmake_set_fold_at_else(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, bool fold)
///
void q_scilexercmake_on_set_fold_at_else(void* self, void (*callback)(void*, bool));

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_fold_at_else` instead
///
#define q_scilexercmake_qbase_set_fold_at_else q_scilexercmake_super_set_fold_at_else

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCMake*
/// @param fold bool
///
void q_scilexercmake_super_set_fold_at_else(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, QSettings* qs, const char* prefix)
///
void q_scilexercmake_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercmake_super_read_properties` instead
///
#define q_scilexercmake_qbase_read_properties q_scilexercmake_super_read_properties

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_super_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, QSettings* qs, const char* prefix)
///
void q_scilexercmake_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// @warning DEPRECATED: Use `q_scilexercmake_super_write_properties` instead
///
#define q_scilexercmake_qbase_write_properties q_scilexercmake_super_write_properties

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Base class method implementation
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_super_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexercmake_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexercmake_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
///
QsciAbstractAPIs* q_scilexercmake_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
///
QsciScintilla* q_scilexercmake_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param apis QsciAbstractAPIs*
///
void q_scilexercmake_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param c QColor*
///
void q_scilexercmake_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param f QFont*
///
void q_scilexercmake_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param c QColor*
///
void q_scilexercmake_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
///
bool q_scilexercmake_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
///
bool q_scilexercmake_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QColor* c, int style)
///
void q_scilexercmake_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param eolfilled bool
/// @param style int
///
void q_scilexercmake_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, bool eolfilled, int style)
///
void q_scilexercmake_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param f QFont*
/// @param style int
///
void q_scilexercmake_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QFont* f, int style)
///
void q_scilexercmake_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QColor* c, int style)
///
void q_scilexercmake_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param prop const char*
/// @param val const char*
///
void q_scilexercmake_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, const char* prop, const char* val)
///
void q_scilexercmake_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerCMake*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexercmake_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerCMake*
/// @param name const char*
///
void q_scilexercmake_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerCMake*
/// @param b bool
///
bool q_scilexercmake_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerCMake*
///
QThread* q_scilexercmake_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerCMake*
/// @param thread QThread*
///
bool q_scilexercmake_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCMake*
/// @param interval int
///
int32_t q_scilexercmake_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCMake*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexercmake_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCMake*
/// @param id int
///
void q_scilexercmake_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerCMake*
/// @param id enum Qt__TimerId
///
void q_scilexercmake_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerCMake*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexercmake_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerCMake*
/// @param parent QObject*
///
void q_scilexercmake_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerCMake*
/// @param filterObj QObject*
///
void q_scilexercmake_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerCMake*
/// @param obj QObject*
///
void q_scilexercmake_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercmake_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexercmake_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerCMake*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexercmake_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercmake_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexercmake_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
/// @param receiver QObject*
///
bool q_scilexercmake_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexercmake_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerCMake*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexercmake_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerCMake*
/// @param name const char*
///
QVariant* q_scilexercmake_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerCMake*
///
const char** q_scilexercmake_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerCMake*
///
QBindingStorage* q_scilexercmake_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerCMake*
///
const QBindingStorage* q_scilexercmake_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self)
///
void q_scilexercmake_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerCMake*
///
QObject* q_scilexercmake_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerCMake*
/// @param classname const char*
///
bool q_scilexercmake_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCMake*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercmake_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerCMake*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexercmake_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexercmake_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexercmake_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerCMake*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexercmake_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
/// @param signal const char*
///
bool q_scilexercmake_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexercmake_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercmake_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerCMake*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexercmake_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCMake*
/// @param param1 QObject*
///
void q_scilexercmake_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QObject* param1)
///
void q_scilexercmake_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_lexer_id(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_lexer_id` instead
///
#define q_scilexercmake_qbase_lexer_id q_scilexercmake_super_lexer_id

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_auto_completion_fillups(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_auto_completion_fillups` instead
///
#define q_scilexercmake_qbase_auto_completion_fillups q_scilexercmake_super_auto_completion_fillups

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_super_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func()
///
void q_scilexercmake_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char** q_scilexercmake_auto_completion_word_separators(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_auto_completion_word_separators` instead
///
#define q_scilexercmake_qbase_auto_completion_word_separators q_scilexercmake_super_auto_completion_word_separators

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char** q_scilexercmake_super_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char** func()
///
void q_scilexercmake_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_block_end(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_block_end` instead
///
#define q_scilexercmake_qbase_block_end q_scilexercmake_super_block_end

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_super_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func(QsciLexerCMake* self, int* style)
///
void q_scilexercmake_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_block_lookback(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_block_lookback` instead
///
#define q_scilexercmake_qbase_block_lookback q_scilexercmake_super_block_lookback

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_block_start(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_block_start` instead
///
#define q_scilexercmake_qbase_block_start q_scilexercmake_super_block_start

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_super_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func(QsciLexerCMake* self, int* style)
///
void q_scilexercmake_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_block_start_keyword(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_block_start_keyword` instead
///
#define q_scilexercmake_qbase_block_start_keyword q_scilexercmake_super_block_start_keyword

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int*
///
const char* q_scilexercmake_super_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func(QsciLexerCMake* self, int* style)
///
void q_scilexercmake_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_brace_style(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_brace_style` instead
///
#define q_scilexercmake_qbase_brace_style q_scilexercmake_super_brace_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_case_sensitive(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_case_sensitive` instead
///
#define q_scilexercmake_qbase_case_sensitive q_scilexercmake_super_case_sensitive

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
bool q_scilexercmake_super_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func()
///
void q_scilexercmake_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_color(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_color` instead
///
#define q_scilexercmake_qbase_color q_scilexercmake_super_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_super_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QColor* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
bool q_scilexercmake_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_eol_fill` instead
///
#define q_scilexercmake_qbase_eol_fill q_scilexercmake_super_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
bool q_scilexercmake_super_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QFont* q_scilexercmake_font(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_font` instead
///
#define q_scilexercmake_qbase_font q_scilexercmake_super_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QFont* q_scilexercmake_super_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QFont* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_indentation_guide_view(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_indentation_guide_view` instead
///
#define q_scilexercmake_qbase_indentation_guide_view q_scilexercmake_super_indentation_guide_view

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_default_style(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_default_style` instead
///
#define q_scilexercmake_qbase_default_style q_scilexercmake_super_default_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_paper(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_paper` instead
///
#define q_scilexercmake_qbase_paper q_scilexercmake_super_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_super_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QColor* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_default_color2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_default_color2` instead
///
#define q_scilexercmake_qbase_default_color2 q_scilexercmake_super_default_color2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_super_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QColor* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
bool q_scilexercmake_default_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_default_eol_fill` instead
///
#define q_scilexercmake_qbase_default_eol_fill q_scilexercmake_super_default_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
bool q_scilexercmake_super_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QFont* q_scilexercmake_default_font2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_default_font2` instead
///
#define q_scilexercmake_qbase_default_font2 q_scilexercmake_super_default_font2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QFont* q_scilexercmake_super_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QFont* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_default_paper2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_default_paper2` instead
///
#define q_scilexercmake_qbase_default_paper2 q_scilexercmake_super_default_paper2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param style int
///
QColor* q_scilexercmake_super_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QColor* func(QsciLexerCMake* self, int style)
///
void q_scilexercmake_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param editor QsciScintilla*
///
void q_scilexercmake_set_editor(void* self, void* editor);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_editor` instead
///
#define q_scilexercmake_qbase_set_editor q_scilexercmake_super_set_editor

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param editor QsciScintilla*
///
void q_scilexercmake_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QsciScintilla* editor)
///
void q_scilexercmake_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_style_bits_needed(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_style_bits_needed` instead
///
#define q_scilexercmake_qbase_style_bits_needed q_scilexercmake_super_style_bits_needed

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_word_characters(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_word_characters` instead
///
#define q_scilexercmake_qbase_word_characters q_scilexercmake_super_word_characters

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
const char* q_scilexercmake_super_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func()
///
void q_scilexercmake_on_word_characters(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param autoindentstyle int
///
void q_scilexercmake_set_auto_indent_style(void* self, int autoindentstyle);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_auto_indent_style` instead
///
#define q_scilexercmake_qbase_set_auto_indent_style q_scilexercmake_super_set_auto_indent_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param autoindentstyle int
///
void q_scilexercmake_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, int autoindentstyle)
///
void q_scilexercmake_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_set_color(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_color` instead
///
#define q_scilexercmake_qbase_set_color q_scilexercmake_super_set_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_super_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QColor* c, int style)
///
void q_scilexercmake_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param eoffill bool
/// @param style int
///
void q_scilexercmake_set_eol_fill(void* self, bool eoffill, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_eol_fill` instead
///
#define q_scilexercmake_qbase_set_eol_fill q_scilexercmake_super_set_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param eoffill bool
/// @param style int
///
void q_scilexercmake_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, bool eoffill, int style)
///
void q_scilexercmake_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param f QFont*
/// @param style int
///
void q_scilexercmake_set_font(void* self, void* f, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_font` instead
///
#define q_scilexercmake_qbase_set_font q_scilexercmake_super_set_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param f QFont*
/// @param style int
///
void q_scilexercmake_super_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QFont* f, int style)
///
void q_scilexercmake_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_set_paper(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexercmake_super_set_paper` instead
///
#define q_scilexercmake_qbase_set_paper q_scilexercmake_super_set_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param c QColor*
/// @param style int
///
void q_scilexercmake_super_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QColor* c, int style)
///
void q_scilexercmake_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QEvent*
///
bool q_scilexercmake_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercmake_super_event` instead
///
#define q_scilexercmake_qbase_event q_scilexercmake_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QEvent*
///
bool q_scilexercmake_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, QEvent* event)
///
void q_scilexercmake_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercmake_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_scilexercmake_super_event_filter` instead
///
#define q_scilexercmake_qbase_event_filter q_scilexercmake_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexercmake_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, QObject* watched, QEvent* event)
///
void q_scilexercmake_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QTimerEvent*
///
void q_scilexercmake_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercmake_super_timer_event` instead
///
#define q_scilexercmake_qbase_timer_event q_scilexercmake_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QTimerEvent*
///
void q_scilexercmake_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QTimerEvent* event)
///
void q_scilexercmake_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QChildEvent*
///
void q_scilexercmake_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercmake_super_child_event` instead
///
#define q_scilexercmake_qbase_child_event q_scilexercmake_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QChildEvent*
///
void q_scilexercmake_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QChildEvent* event)
///
void q_scilexercmake_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QEvent*
///
void q_scilexercmake_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexercmake_super_custom_event` instead
///
#define q_scilexercmake_qbase_custom_event q_scilexercmake_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param event QEvent*
///
void q_scilexercmake_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QEvent* event)
///
void q_scilexercmake_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
void q_scilexercmake_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercmake_super_connect_notify` instead
///
#define q_scilexercmake_qbase_connect_notify q_scilexercmake_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
void q_scilexercmake_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QMetaMethod* signal)
///
void q_scilexercmake_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
void q_scilexercmake_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercmake_super_disconnect_notify` instead
///
#define q_scilexercmake_qbase_disconnect_notify q_scilexercmake_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
void q_scilexercmake_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, QMetaMethod* signal)
///
void q_scilexercmake_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param text const char*
///
char* q_scilexercmake_text_as_bytes(void* self, const char* text);

/// @warning DEPRECATED: Use `q_scilexercmake_super_text_as_bytes` instead
///
#define q_scilexercmake_qbase_text_as_bytes q_scilexercmake_super_text_as_bytes

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param text const char*
///
char* q_scilexercmake_super_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback libqt_string func(QsciLexerCMake* self, const char* text)
///
void q_scilexercmake_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercmake_bytes_as_text(void* self, const char* bytes, int size);

/// @warning DEPRECATED: Use `q_scilexercmake_super_bytes_as_text` instead
///
#define q_scilexercmake_qbase_bytes_as_text q_scilexercmake_super_bytes_as_text

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexercmake_super_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback const char* func(QsciLexerCMake* self, const char* bytes, int size)
///
void q_scilexercmake_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
QObject* q_scilexercmake_sender(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_sender` instead
///
#define q_scilexercmake_qbase_sender q_scilexercmake_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
QObject* q_scilexercmake_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback QObject* func()
///
void q_scilexercmake_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_scilexercmake_super_sender_signal_index` instead
///
#define q_scilexercmake_qbase_sender_signal_index q_scilexercmake_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
///
int32_t q_scilexercmake_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func()
///
void q_scilexercmake_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal const char*
///
int32_t q_scilexercmake_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_scilexercmake_super_receivers` instead
///
#define q_scilexercmake_qbase_receivers q_scilexercmake_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal const char*
///
int32_t q_scilexercmake_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback int32_t func(QsciLexerCMake* self, const char* signal)
///
void q_scilexercmake_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
bool q_scilexercmake_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexercmake_super_is_signal_connected` instead
///
#define q_scilexercmake_qbase_is_signal_connected q_scilexercmake_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param signal QMetaMethod*
///
bool q_scilexercmake_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerCMake*
/// @param callback bool func(QsciLexerCMake* self, QMetaMethod* signal)
///
void q_scilexercmake_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerCMake*
/// @param callback void func(QsciLexerCMake* self, const char* objectName)
///
void q_scilexercmake_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCMake.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerCMake*
///
void q_scilexercmake_delete(void* self);

typedef enum {
    QSCILEXERCMAKE__DEFAULT = 0,
    QSCILEXERCMAKE__COMMENT = 1,
    QSCILEXERCMAKE__STRING = 2,
    QSCILEXERCMAKE__STRINGLEFTQUOTE = 3,
    QSCILEXERCMAKE__STRINGRIGHTQUOTE = 4,
    QSCILEXERCMAKE__FUNCTION = 5,
    QSCILEXERCMAKE__VARIABLE = 6,
    QSCILEXERCMAKE__LABEL = 7,
    QSCILEXERCMAKE__KEYWORDSET3 = 8,
    QSCILEXERCMAKE__BLOCKWHILE = 9,
    QSCILEXERCMAKE__BLOCKFOREACH = 10,
    QSCILEXERCMAKE__BLOCKIF = 11,
    QSCILEXERCMAKE__BLOCKMACRO = 12,
    QSCILEXERCMAKE__STRINGVARIABLE = 13,
    QSCILEXERCMAKE__NUMBER = 14
} QsciLexerCMake__;

#endif
