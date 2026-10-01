#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERASM_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERASM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)

/// q_scilexerasm_new constructs a new QsciLexerAsm object.
///
QsciLexerAsm* q_scilexerasm_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)

/// q_scilexerasm_new2 constructs a new QsciLexerAsm object.
///
/// @param parent QObject*
///
QsciLexerAsm* q_scilexerasm_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QsciLexerAsm*
///
const QMetaObject* q_scilexerasm_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QsciLexerAsm*
/// @param callback const QMetaObject* func(const QsciLexerAsm* self)
///
void q_scilexerasm_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QsciLexerAsm*
///
const QMetaObject* q_scilexerasm_super_meta_object(const void* self);

/// @param self QsciLexerAsm*
/// @param param1 const char*
///
void* q_scilexerasm_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback void* func(QsciLexerAsm* self, const char* param1)
///
void q_scilexerasm_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param param1 const char*
///
void* q_scilexerasm_super_metacast(void* self, const char* param1);

/// @param self QsciLexerAsm*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerasm_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexerasm_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexerasm_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexerasm_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_default_color(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
/// @param style int
///
bool q_scilexerasm_default_eol_fill(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QFont* q_scilexerasm_default_font(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_default_paper(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerAsm*
/// @param set int
///
const char* q_scilexerasm_keywords(const void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerAsm*
/// @param style int
///
const char* q_scilexerasm_description(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
///
void q_scilexerasm_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_fold_comments(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_fold_compact(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
///
QChar* q_scilexerasm_comment_delimiter(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_fold_syntax_based(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
/// @param fold bool
///
void q_scilexerasm_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, bool fold)
///
void q_scilexerasm_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param fold bool
///
void q_scilexerasm_super_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
/// @param fold bool
///
void q_scilexerasm_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, bool fold)
///
void q_scilexerasm_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param fold bool
///
void q_scilexerasm_super_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
/// @param delimeter QChar*
///
void q_scilexerasm_set_comment_delimiter(void* self, void* delimeter);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QChar* delimeter)
///
void q_scilexerasm_on_set_comment_delimiter(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param delimeter QChar*
///
void q_scilexerasm_super_set_comment_delimiter(void* self, void* delimeter);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
/// @param syntax_based bool
///
void q_scilexerasm_set_fold_syntax_based(void* self, bool syntax_based);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, bool syntax_based)
///
void q_scilexerasm_on_set_fold_syntax_based(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAsm*
/// @param syntax_based bool
///
void q_scilexerasm_super_set_fold_syntax_based(void* self, bool syntax_based);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerAsm*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerasm_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self const QsciLexerAsm*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerasm_write_properties(const void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexerasm_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexerasm_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerAsm*
///
QsciAbstractAPIs* q_scilexerasm_apis(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
///
int32_t q_scilexerasm_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerAsm*
///
QsciScintilla* q_scilexerasm_editor(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param apis QsciAbstractAPIs*
///
void q_scilexerasm_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param c QColor*
///
void q_scilexerasm_set_default_color(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param f QFont*
///
void q_scilexerasm_set_default_font(void* self, const void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param c QColor*
///
void q_scilexerasm_set_default_paper(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param qs QSettings*
///
bool q_scilexerasm_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerAsm*
/// @param qs QSettings*
///
bool q_scilexerasm_write_settings(const void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_color_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QColor* c, int style)
///
void q_scilexerasm_on_color_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param eolfilled bool
/// @param style int
///
void q_scilexerasm_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, bool eolfilled, int style)
///
void q_scilexerasm_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param f QFont*
/// @param style int
///
void q_scilexerasm_font_changed(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QFont* f, int style)
///
void q_scilexerasm_on_font_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_paper_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QColor* c, int style)
///
void q_scilexerasm_on_paper_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param prop const char*
/// @param val const char*
///
void q_scilexerasm_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, const char* prop, const char* val)
///
void q_scilexerasm_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAsm*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerasm_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerAsm*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexerasm_write_settings2(const void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerAsm*
/// @param name const char*
///
void q_scilexerasm_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerAsm*
/// @param b bool
///
bool q_scilexerasm_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QsciLexerAsm*
///
QThread* q_scilexerasm_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerAsm*
/// @param thread QThread*
///
bool q_scilexerasm_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAsm*
/// @param interval int
///
int32_t q_scilexerasm_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAsm*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexerasm_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerAsm*
/// @param id int
///
void q_scilexerasm_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerAsm*
/// @param id enum Qt__TimerId
///
void q_scilexerasm_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QsciLexerAsm*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexerasm_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerAsm*
/// @param parent QObject*
///
void q_scilexerasm_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerAsm*
/// @param filterObj QObject*
///
void q_scilexerasm_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerAsm*
/// @param obj QObject*
///
void q_scilexerasm_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexerasm_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexerasm_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerAsm*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexerasm_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerasm_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexerasm_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
/// @param receiver QObject*
///
bool q_scilexerasm_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexerasm_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QsciLexerAsm*
///
void q_scilexerasm_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QsciLexerAsm*
///
void q_scilexerasm_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerAsm*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexerasm_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QsciLexerAsm*
/// @param name const char*
///
QVariant* q_scilexerasm_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QsciLexerAsm*
///
const char** q_scilexerasm_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerAsm*
///
QBindingStorage* q_scilexerasm_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QsciLexerAsm*
///
const QBindingStorage* q_scilexerasm_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAsm*
///
void q_scilexerasm_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self)
///
void q_scilexerasm_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QsciLexerAsm*
///
QObject* q_scilexerasm_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QsciLexerAsm*
/// @param classname const char*
///
bool q_scilexerasm_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerAsm*
///
void q_scilexerasm_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAsm*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerasm_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAsm*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexerasm_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexerasm_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexerasm_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerAsm*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexerasm_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
/// @param signal const char*
///
bool q_scilexerasm_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexerasm_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerasm_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerAsm*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexerasm_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAsm*
/// @param param1 QObject*
///
void q_scilexerasm_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QObject* param1)
///
void q_scilexerasm_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_scilexerasm_on_language` before it can be called.
////// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_language(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self)
///
void q_scilexerasm_on_language(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_lexer(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_super_lexer(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self)
///
void q_scilexerasm_on_lexer(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_lexer_id(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_super_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self)
///
void q_scilexerasm_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char** q_scilexerasm_auto_completion_word_separators(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char** q_scilexerasm_super_auto_completion_word_separators(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char** func(QsciLexerAsm* self)
///
void q_scilexerasm_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_block_end(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_super_block_end(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self, int* style)
///
void q_scilexerasm_on_block_end(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_block_lookback(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_block_start(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_super_block_start(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self, int* style)
///
void q_scilexerasm_on_block_start(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_block_start_keyword(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int*
///
const char* q_scilexerasm_super_block_start_keyword(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self, int* style)
///
void q_scilexerasm_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_brace_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_brace_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_brace_style(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
bool q_scilexerasm_super_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback bool func(QsciLexerAsm* self)
///
void q_scilexerasm_on_case_sensitive(const void* self, bool (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_super_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QColor* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_color(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
bool q_scilexerasm_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
bool q_scilexerasm_super_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback bool func(QsciLexerAsm* self, int style)
///
void q_scilexerasm_on_eol_fill(const void* self, bool (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QFont* q_scilexerasm_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QFont* q_scilexerasm_super_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QFont* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_font(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_default_style(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_super_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QColor* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_paper(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_super_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QColor* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_default_color2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QFont* q_scilexerasm_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QFont* q_scilexerasm_super_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QFont* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_default_font2(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param style int
///
QColor* q_scilexerasm_super_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QColor* func(QsciLexerAsm* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexerasm_on_default_paper2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param editor QsciScintilla*
///
void q_scilexerasm_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param editor QsciScintilla*
///
void q_scilexerasm_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QsciScintilla* editor)
///
void q_scilexerasm_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_style_bits_needed(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_word_characters(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
const char* q_scilexerasm_super_word_characters(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self)
///
void q_scilexerasm_on_word_characters(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param autoindentstyle int
///
void q_scilexerasm_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param autoindentstyle int
///
void q_scilexerasm_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, int autoindentstyle)
///
void q_scilexerasm_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_super_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QColor* c, int style)
///
void q_scilexerasm_on_set_color(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param eoffill bool
/// @param style int
///
void q_scilexerasm_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param eoffill bool
/// @param style int
///
void q_scilexerasm_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, bool eoffill, int style)
///
void q_scilexerasm_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param f QFont*
/// @param style int
///
void q_scilexerasm_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param f QFont*
/// @param style int
///
void q_scilexerasm_super_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QFont* f, int style)
///
void q_scilexerasm_on_set_font(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param c QColor*
/// @param style int
///
void q_scilexerasm_super_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QColor* c, int style)
///
void q_scilexerasm_on_set_paper(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QEvent*
///
bool q_scilexerasm_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QEvent*
///
bool q_scilexerasm_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback bool func(QsciLexerAsm* self, QEvent* event)
///
void q_scilexerasm_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerasm_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexerasm_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback bool func(QsciLexerAsm* self, QObject* watched, QEvent* event)
///
void q_scilexerasm_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QTimerEvent*
///
void q_scilexerasm_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QTimerEvent*
///
void q_scilexerasm_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QTimerEvent* event)
///
void q_scilexerasm_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QChildEvent*
///
void q_scilexerasm_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QChildEvent*
///
void q_scilexerasm_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QChildEvent* event)
///
void q_scilexerasm_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QEvent*
///
void q_scilexerasm_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param event QEvent*
///
void q_scilexerasm_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QEvent* event)
///
void q_scilexerasm_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param signal QMetaMethod*
///
void q_scilexerasm_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param signal QMetaMethod*
///
void q_scilexerasm_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QMetaMethod* signal)
///
void q_scilexerasm_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param signal QMetaMethod*
///
void q_scilexerasm_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param signal QMetaMethod*
///
void q_scilexerasm_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, QMetaMethod* signal)
///
void q_scilexerasm_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param text const char*
///
char* q_scilexerasm_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param text const char*
///
char* q_scilexerasm_super_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback libqt_string func(QsciLexerAsm* self, const char* text)
///
void q_scilexerasm_on_text_as_bytes(const void* self, libqt_string (*callback)(const void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerasm_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexerasm_super_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback const char* func(QsciLexerAsm* self, const char* bytes, int size)
///
void q_scilexerasm_on_bytes_as_text(const void* self, const char* (*callback)(const void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
QObject* q_scilexerasm_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
QObject* q_scilexerasm_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback QObject* func(QsciLexerAsm* self)
///
void q_scilexerasm_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
///
int32_t q_scilexerasm_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self)
///
void q_scilexerasm_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param signal const char*
///
int32_t q_scilexerasm_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param signal const char*
///
int32_t q_scilexerasm_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback int32_t func(QsciLexerAsm* self, const char* signal)
///
void q_scilexerasm_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param signal QMetaMethod*
///
bool q_scilexerasm_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param signal QMetaMethod*
///
bool q_scilexerasm_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerAsm*
/// @param callback bool func(QsciLexerAsm* self, QMetaMethod* signal)
///
void q_scilexerasm_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerAsm*
/// @param callback void func(QsciLexerAsm* self, const char* objectName)
///
void q_scilexerasm_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerAsm*
///
void q_scilexerasm_delete(void* self);

typedef enum {
    QSCILEXERASM__DEFAULT = 0,
    QSCILEXERASM__COMMENT = 1,
    QSCILEXERASM__NUMBER = 2,
    QSCILEXERASM__DOUBLEQUOTEDSTRING = 3,
    QSCILEXERASM__OPERATOR = 4,
    QSCILEXERASM__IDENTIFIER = 5,
    QSCILEXERASM__CPUINSTRUCTION = 6,
    QSCILEXERASM__FPUINSTRUCTION = 7,
    QSCILEXERASM__REGISTER = 8,
    QSCILEXERASM__DIRECTIVE = 9,
    QSCILEXERASM__DIRECTIVEOPERAND = 11,
    QSCILEXERASM__BLOCKCOMMENT = 12,
    QSCILEXERASM__SINGLEQUOTEDSTRING = 13,
    QSCILEXERASM__UNCLOSEDSTRING = 14,
    QSCILEXERASM__EXTENDEDINSTRUCTION = 16,
    QSCILEXERASM__COMMENTDIRECTIVE = 17
} QsciLexerAsm__;

#endif
