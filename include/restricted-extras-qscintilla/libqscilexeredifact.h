#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)

/// q_scilexeredifact_new constructs a new QsciLexerEDIFACT object.
///
QsciLexerEDIFACT* q_scilexeredifact_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)

/// q_scilexeredifact_new2 constructs a new QsciLexerEDIFACT object.
///
/// @param parent QObject*
///
QsciLexerEDIFACT* q_scilexeredifact_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QsciLexerEDIFACT*
///
const QMetaObject* q_scilexeredifact_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const QMetaObject* func(const QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QsciLexerEDIFACT*
///
const QMetaObject* q_scilexeredifact_super_meta_object(const void* self);

/// @param self QsciLexerEDIFACT*
/// @param param1 const char*
///
void* q_scilexeredifact_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void* func(QsciLexerEDIFACT* self, const char* param1)
///
void q_scilexeredifact_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QsciLexerEDIFACT*
/// @param param1 const char*
///
void* q_scilexeredifact_super_metacast(void* self, const char* param1);

/// @param self QsciLexerEDIFACT*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeredifact_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexeredifact_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerEDIFACT*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeredifact_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexeredifact_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_language(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_lexer(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_default_color(const void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
const char* q_scilexeredifact_description(const void* self, int style);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexeredifact_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexeredifact_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
///
QsciAbstractAPIs* q_scilexeredifact_apis(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
///
QFont* q_scilexeredifact_default_font(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
///
QColor* q_scilexeredifact_default_paper(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
///
QsciScintilla* q_scilexeredifact_editor(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param apis QsciAbstractAPIs*
///
void q_scilexeredifact_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
///
void q_scilexeredifact_set_default_color(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param f QFont*
///
void q_scilexeredifact_set_default_font(void* self, const void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
///
void q_scilexeredifact_set_default_paper(void* self, const void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param qs QSettings*
///
bool q_scilexeredifact_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
/// @param qs QSettings*
///
bool q_scilexeredifact_write_settings(const void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_color_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QColor* c, int style)
///
void q_scilexeredifact_on_color_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param eolfilled bool
/// @param style int
///
void q_scilexeredifact_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, bool eolfilled, int style)
///
void q_scilexeredifact_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param f QFont*
/// @param style int
///
void q_scilexeredifact_font_changed(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QFont* f, int style)
///
void q_scilexeredifact_on_font_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_paper_changed(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QColor* c, int style)
///
void q_scilexeredifact_on_paper_changed(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param prop const char*
/// @param val const char*
///
void q_scilexeredifact_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, const char* prop, const char* val)
///
void q_scilexeredifact_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self const QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_write_settings2(const void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerEDIFACT*
/// @param name const char*
///
void q_scilexeredifact_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerEDIFACT*
/// @param b bool
///
bool q_scilexeredifact_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QsciLexerEDIFACT*
///
QThread* q_scilexeredifact_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerEDIFACT*
/// @param thread QThread*
///
bool q_scilexeredifact_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param interval int
///
int32_t q_scilexeredifact_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexeredifact_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param id int
///
void q_scilexeredifact_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param id enum Qt__TimerId
///
void q_scilexeredifact_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QsciLexerEDIFACT*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexeredifact_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerEDIFACT*
/// @param parent QObject*
///
void q_scilexeredifact_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerEDIFACT*
/// @param filterObj QObject*
///
void q_scilexeredifact_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerEDIFACT*
/// @param obj QObject*
///
void q_scilexeredifact_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexeredifact_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexeredifact_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerEDIFACT*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexeredifact_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeredifact_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexeredifact_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
/// @param receiver QObject*
///
bool q_scilexeredifact_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexeredifact_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QsciLexerEDIFACT*
///
void q_scilexeredifact_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QsciLexerEDIFACT*
///
void q_scilexeredifact_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerEDIFACT*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexeredifact_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QsciLexerEDIFACT*
/// @param name const char*
///
QVariant* q_scilexeredifact_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QsciLexerEDIFACT*
///
const char** q_scilexeredifact_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerEDIFACT*
///
QBindingStorage* q_scilexeredifact_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QsciLexerEDIFACT*
///
const QBindingStorage* q_scilexeredifact_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerEDIFACT*
///
void q_scilexeredifact_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QsciLexerEDIFACT*
///
QObject* q_scilexeredifact_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QsciLexerEDIFACT*
/// @param classname const char*
///
bool q_scilexeredifact_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerEDIFACT*
///
void q_scilexeredifact_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexeredifact_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerEDIFACT*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexeredifact_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexeredifact_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexeredifact_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QsciLexerEDIFACT*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexeredifact_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
/// @param signal const char*
///
bool q_scilexeredifact_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexeredifact_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeredifact_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QsciLexerEDIFACT*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexeredifact_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerEDIFACT*
/// @param param1 QObject*
///
void q_scilexeredifact_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QObject* param1)
///
void q_scilexeredifact_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_lexer_id(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_lexer_id(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_super_auto_completion_fillups(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char** q_scilexeredifact_auto_completion_word_separators(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char** q_scilexeredifact_super_auto_completion_word_separators(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char** func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_block_end(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_super_block_end(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self, int* style)
///
void q_scilexeredifact_on_block_end(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_block_lookback(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_block_lookback(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_block_start(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_super_block_start(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self, int* style)
///
void q_scilexeredifact_on_block_start(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_block_start_keyword(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int*
///
const char* q_scilexeredifact_super_block_start_keyword(const void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self, int* style)
///
void q_scilexeredifact_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_brace_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_brace_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_brace_style(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
bool q_scilexeredifact_super_case_sensitive(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_case_sensitive(const void* self, bool (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_super_color(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QColor* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_color(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
bool q_scilexeredifact_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
bool q_scilexeredifact_super_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, int style)
///
void q_scilexeredifact_on_eol_fill(const void* self, bool (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QFont* q_scilexeredifact_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QFont* q_scilexeredifact_super_font(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QFont* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_font(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_indentation_guide_view(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param set int
///
const char* q_scilexeredifact_keywords(const void* self, int set);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param set int
///
const char* q_scilexeredifact_super_keywords(const void* self, int set);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self, int set)
///
void q_scilexeredifact_on_keywords(const void* self, const char* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_default_style(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_default_style(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_super_paper(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QColor* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_paper(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_super_default_color2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QColor* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_default_color2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
bool q_scilexeredifact_default_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
bool q_scilexeredifact_super_default_eol_fill(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, int style)
///
void q_scilexeredifact_on_default_eol_fill(const void* self, bool (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QFont* q_scilexeredifact_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QFont* q_scilexeredifact_super_default_font2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QFont* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_default_font2(const void* self, QFont* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param style int
///
QColor* q_scilexeredifact_super_default_paper2(const void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QColor* func(QsciLexerEDIFACT* self, int style)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_scilexeredifact_on_default_paper2(const void* self, QColor* (*callback)(const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param editor QsciScintilla*
///
void q_scilexeredifact_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param editor QsciScintilla*
///
void q_scilexeredifact_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QsciScintilla* editor)
///
void q_scilexeredifact_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
///
void q_scilexeredifact_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
///
void q_scilexeredifact_super_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_refresh_properties(void* self, void (*callback)(void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_style_bits_needed(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_style_bits_needed(const void* self, int32_t (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_word_characters(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
const char* q_scilexeredifact_super_word_characters(const void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_word_characters(const void* self, const char* (*callback)(const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param autoindentstyle int
///
void q_scilexeredifact_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param autoindentstyle int
///
void q_scilexeredifact_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, int autoindentstyle)
///
void q_scilexeredifact_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_super_set_color(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QColor* c, int style)
///
void q_scilexeredifact_on_set_color(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param eoffill bool
/// @param style int
///
void q_scilexeredifact_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param eoffill bool
/// @param style int
///
void q_scilexeredifact_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, bool eoffill, int style)
///
void q_scilexeredifact_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param f QFont*
/// @param style int
///
void q_scilexeredifact_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param f QFont*
/// @param style int
///
void q_scilexeredifact_super_set_font(void* self, const void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QFont* f, int style)
///
void q_scilexeredifact_on_set_font(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param c QColor*
/// @param style int
///
void q_scilexeredifact_super_set_paper(void* self, const void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QColor* c, int style)
///
void q_scilexeredifact_on_set_paper(void* self, void (*callback)(void*, const void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_super_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, QSettings* qs, const char* prefix)
///
void q_scilexeredifact_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_write_properties(const void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeredifact_super_write_properties(const void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, QSettings* qs, const char* prefix)
///
void q_scilexeredifact_on_write_properties(const void* self, bool (*callback)(const void*, void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QEvent*
///
bool q_scilexeredifact_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QEvent*
///
bool q_scilexeredifact_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, QEvent* event)
///
void q_scilexeredifact_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeredifact_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeredifact_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, QObject* watched, QEvent* event)
///
void q_scilexeredifact_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QTimerEvent*
///
void q_scilexeredifact_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QTimerEvent*
///
void q_scilexeredifact_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QTimerEvent* event)
///
void q_scilexeredifact_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QChildEvent*
///
void q_scilexeredifact_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QChildEvent*
///
void q_scilexeredifact_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QChildEvent* event)
///
void q_scilexeredifact_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QEvent*
///
void q_scilexeredifact_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param event QEvent*
///
void q_scilexeredifact_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QEvent* event)
///
void q_scilexeredifact_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
void q_scilexeredifact_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
void q_scilexeredifact_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QMetaMethod* signal)
///
void q_scilexeredifact_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
void q_scilexeredifact_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
void q_scilexeredifact_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, QMetaMethod* signal)
///
void q_scilexeredifact_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param text const char*
///
char* q_scilexeredifact_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param text const char*
///
char* q_scilexeredifact_super_text_as_bytes(const void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback libqt_string func(QsciLexerEDIFACT* self, const char* text)
///
void q_scilexeredifact_on_text_as_bytes(const void* self, libqt_string (*callback)(const void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeredifact_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeredifact_super_bytes_as_text(const void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback const char* func(QsciLexerEDIFACT* self, const char* bytes, int size)
///
void q_scilexeredifact_on_bytes_as_text(const void* self, const char* (*callback)(const void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
QObject* q_scilexeredifact_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
QObject* q_scilexeredifact_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback QObject* func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
///
int32_t q_scilexeredifact_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self)
///
void q_scilexeredifact_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param signal const char*
///
int32_t q_scilexeredifact_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param signal const char*
///
int32_t q_scilexeredifact_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback int32_t func(QsciLexerEDIFACT* self, const char* signal)
///
void q_scilexeredifact_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
bool q_scilexeredifact_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param signal QMetaMethod*
///
bool q_scilexeredifact_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QsciLexerEDIFACT*
/// @param callback bool func(QsciLexerEDIFACT* self, QMetaMethod* signal)
///
void q_scilexeredifact_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerEDIFACT*
/// @param callback void func(QsciLexerEDIFACT* self, const char* objectName)
///
void q_scilexeredifact_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerEDIFACT.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerEDIFACT*
///
void q_scilexeredifact_delete(void* self);

typedef enum {
    QSCILEXEREDIFACT__DEFAULT = 0,
    QSCILEXEREDIFACT__SEGMENTSTART = 1,
    QSCILEXEREDIFACT__SEGMENTEND = 2,
    QSCILEXEREDIFACT__ELEMENTSEPARATOR = 3,
    QSCILEXEREDIFACT__COMPOSITESEPARATOR = 4,
    QSCILEXEREDIFACT__RELEASESEPARATOR = 5,
    QSCILEXEREDIFACT__UNASEGMENTHEADER = 6,
    QSCILEXEREDIFACT__UNHSEGMENTHEADER = 7,
    QSCILEXEREDIFACT__BADSEGMENT = 8
} QsciLexerEDIFACT__;

#endif
