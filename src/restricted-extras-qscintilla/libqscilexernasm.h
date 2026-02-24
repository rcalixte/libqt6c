#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERNASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERNASM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerNASM.html)

/// q_scilexernasm_new constructs a new QsciLexerNASM object.
///
QsciLexerNASM* q_scilexernasm_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerNASM.html)

/// q_scilexernasm_new2 constructs a new QsciLexerNASM object.
///
/// @param parent QObject*
///
QsciLexerNASM* q_scilexernasm_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerNASM*
///
const QMetaObject* q_scilexernasm_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerNASM*
/// @param callback const QMetaObject* func()
///
void q_scilexernasm_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_scilexernasm_super_meta_object` instead
///
#define q_scilexernasm_qbase_meta_object q_scilexernasm_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QsciLexerNASM*
///
const QMetaObject* q_scilexernasm_super_meta_object(void* self);

/// @param self QsciLexerNASM*
/// @param param1 const char*
///
void* q_scilexernasm_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QsciLexerNASM*
/// @param callback void* func(QsciLexerNASM* self, const char* param1)
///
void q_scilexernasm_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_scilexernasm_super_metacast` instead
///
#define q_scilexernasm_qbase_metacast q_scilexernasm_super_metacast

/// Base class method implementation
///
/// @param self QsciLexerNASM*
/// @param param1 const char*
///
void* q_scilexernasm_super_metacast(void* self, const char* param1);

/// @param self QsciLexerNASM*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexernasm_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func(QsciLexerNASM* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexernasm_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_scilexernasm_super_metacall` instead
///
#define q_scilexernasm_qbase_metacall q_scilexernasm_super_metacall

/// Base class method implementation
///
/// @param self QsciLexerNASM*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexernasm_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_scilexernasm_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerNASM.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerNASM.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_lexer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexernasm_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexernasm_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_default_color(void* self, int style);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
/// @param style int
///
QFont* q_scilexernasm_default_font(void* self, int style);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_default_paper(void* self, int style);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_fold_comments(void* self);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_fold_compact(void* self);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
///
QChar* q_scilexernasm_comment_delimiter(void* self);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_fold_syntax_based(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
///
QsciAbstractAPIs* q_scilexernasm_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
///
QsciScintilla* q_scilexernasm_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param apis QsciAbstractAPIs*
///
void q_scilexernasm_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param c QColor*
///
void q_scilexernasm_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param f QFont*
///
void q_scilexernasm_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param c QColor*
///
void q_scilexernasm_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
///
bool q_scilexernasm_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
///
bool q_scilexernasm_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QColor* c, int style)
///
void q_scilexernasm_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param eolfilled bool
/// @param style int
///
void q_scilexernasm_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, bool eolfilled, int style)
///
void q_scilexernasm_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param f QFont*
/// @param style int
///
void q_scilexernasm_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QFont* f, int style)
///
void q_scilexernasm_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QColor* c, int style)
///
void q_scilexernasm_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param prop const char*
/// @param val const char*
///
void q_scilexernasm_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, const char* prop, const char* val)
///
void q_scilexernasm_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerNASM*
/// @param name const char*
///
void q_scilexernasm_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerNASM*
/// @param b bool
///
bool q_scilexernasm_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerNASM*
///
QThread* q_scilexernasm_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerNASM*
/// @param thread QThread*
///
bool q_scilexernasm_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerNASM*
/// @param interval int
///
int32_t q_scilexernasm_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerNASM*
/// @param time int64_t of nanoseconds
///
int32_t q_scilexernasm_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerNASM*
/// @param id int
///
void q_scilexernasm_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerNASM*
/// @param id enum Qt__TimerId
///
void q_scilexernasm_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerNASM*
///
/// @return libqt_list of QObject*
///
libqt_list q_scilexernasm_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerNASM*
/// @param parent QObject*
///
void q_scilexernasm_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerNASM*
/// @param filterObj QObject*
///
void q_scilexernasm_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerNASM*
/// @param obj QObject*
///
void q_scilexernasm_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_scilexernasm_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexernasm_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerNASM*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexernasm_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexernasm_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexernasm_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
/// @param receiver QObject*
///
bool q_scilexernasm_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexernasm_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerNASM*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexernasm_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerNASM*
/// @param name const char*
///
QVariant* q_scilexernasm_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QsciLexerNASM*
///
const char** q_scilexernasm_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerNASM*
///
QBindingStorage* q_scilexernasm_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerNASM*
///
const QBindingStorage* q_scilexernasm_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self)
///
void q_scilexernasm_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerNASM*
///
QObject* q_scilexernasm_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerNASM*
/// @param classname const char*
///
bool q_scilexernasm_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerNASM*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexernasm_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerNASM*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexernasm_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_scilexernasm_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_scilexernasm_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerNASM*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexernasm_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
/// @param signal const char*
///
bool q_scilexernasm_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_scilexernasm_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexernasm_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QsciLexerNASM*
/// @param receiver QObject*
/// @param member const char*
///
bool q_scilexernasm_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerNASM*
/// @param param1 QObject*
///
void q_scilexernasm_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QObject* param1)
///
void q_scilexernasm_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param fold bool
///
void q_scilexernasm_set_fold_comments(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_fold_comments` instead
///
#define q_scilexernasm_qbase_set_fold_comments q_scilexernasm_super_set_fold_comments

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param fold bool
///
void q_scilexernasm_super_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, bool fold)
///
void q_scilexernasm_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param fold bool
///
void q_scilexernasm_set_fold_compact(void* self, bool fold);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_fold_compact` instead
///
#define q_scilexernasm_qbase_set_fold_compact q_scilexernasm_super_set_fold_compact

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param fold bool
///
void q_scilexernasm_super_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, bool fold)
///
void q_scilexernasm_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param delimeter QChar*
///
void q_scilexernasm_set_comment_delimiter(void* self, void* delimeter);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_comment_delimiter` instead
///
#define q_scilexernasm_qbase_set_comment_delimiter q_scilexernasm_super_set_comment_delimiter

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param delimeter QChar*
///
void q_scilexernasm_super_set_comment_delimiter(void* self, void* delimeter);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QChar* delimeter)
///
void q_scilexernasm_on_set_comment_delimiter(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param syntax_based bool
///
void q_scilexernasm_set_fold_syntax_based(void* self, bool syntax_based);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_fold_syntax_based` instead
///
#define q_scilexernasm_qbase_set_fold_syntax_based q_scilexernasm_super_set_fold_syntax_based

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param syntax_based bool
///
void q_scilexernasm_super_set_fold_syntax_based(void* self, bool syntax_based);

/// Inherited from QsciLexerAsm
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAsm.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, bool syntax_based)
///
void q_scilexernasm_on_set_fold_syntax_based(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_lexer_id(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_lexer_id` instead
///
#define q_scilexernasm_qbase_lexer_id q_scilexernasm_super_lexer_id

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_auto_completion_fillups(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_auto_completion_fillups` instead
///
#define q_scilexernasm_qbase_auto_completion_fillups q_scilexernasm_super_auto_completion_fillups

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_super_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func()
///
void q_scilexernasm_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char** q_scilexernasm_auto_completion_word_separators(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_auto_completion_word_separators` instead
///
#define q_scilexernasm_qbase_auto_completion_word_separators q_scilexernasm_super_auto_completion_word_separators

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char** q_scilexernasm_super_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char** func()
///
void q_scilexernasm_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_block_end(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_block_end` instead
///
#define q_scilexernasm_qbase_block_end q_scilexernasm_super_block_end

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_super_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, int* style)
///
void q_scilexernasm_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_block_lookback(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_block_lookback` instead
///
#define q_scilexernasm_qbase_block_lookback q_scilexernasm_super_block_lookback

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_block_start(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_block_start` instead
///
#define q_scilexernasm_qbase_block_start q_scilexernasm_super_block_start

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_super_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, int* style)
///
void q_scilexernasm_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_block_start_keyword(void* self, int* style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_block_start_keyword` instead
///
#define q_scilexernasm_qbase_block_start_keyword q_scilexernasm_super_block_start_keyword

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int*
///
const char* q_scilexernasm_super_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, int* style)
///
void q_scilexernasm_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_brace_style(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_brace_style` instead
///
#define q_scilexernasm_qbase_brace_style q_scilexernasm_super_brace_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_case_sensitive(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_case_sensitive` instead
///
#define q_scilexernasm_qbase_case_sensitive q_scilexernasm_super_case_sensitive

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
bool q_scilexernasm_super_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func()
///
void q_scilexernasm_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_color(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_color` instead
///
#define q_scilexernasm_qbase_color q_scilexernasm_super_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_super_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QColor* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
bool q_scilexernasm_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_eol_fill` instead
///
#define q_scilexernasm_qbase_eol_fill q_scilexernasm_super_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
bool q_scilexernasm_super_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QFont* q_scilexernasm_font(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_font` instead
///
#define q_scilexernasm_qbase_font q_scilexernasm_super_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QFont* q_scilexernasm_super_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QFont* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_indentation_guide_view(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_indentation_guide_view` instead
///
#define q_scilexernasm_qbase_indentation_guide_view q_scilexernasm_super_indentation_guide_view

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param set int
///
const char* q_scilexernasm_keywords(void* self, int set);

/// @warning DEPRECATED: Use `q_scilexernasm_super_keywords` instead
///
#define q_scilexernasm_qbase_keywords q_scilexernasm_super_keywords

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param set int
///
const char* q_scilexernasm_super_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, int set)
///
void q_scilexernasm_on_keywords(void* self, const char* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_default_style(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_default_style` instead
///
#define q_scilexernasm_qbase_default_style q_scilexernasm_super_default_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
const char* q_scilexernasm_description(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_description` instead
///
#define q_scilexernasm_qbase_description q_scilexernasm_super_description

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
const char* q_scilexernasm_super_description(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_description(void* self, const char* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_paper(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_paper` instead
///
#define q_scilexernasm_qbase_paper q_scilexernasm_super_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_super_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QColor* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_default_color2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_default_color2` instead
///
#define q_scilexernasm_qbase_default_color2 q_scilexernasm_super_default_color2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_super_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QColor* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
bool q_scilexernasm_default_eol_fill(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_default_eol_fill` instead
///
#define q_scilexernasm_qbase_default_eol_fill q_scilexernasm_super_default_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
bool q_scilexernasm_super_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QFont* q_scilexernasm_default_font2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_default_font2` instead
///
#define q_scilexernasm_qbase_default_font2 q_scilexernasm_super_default_font2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QFont* q_scilexernasm_super_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QFont* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_default_paper2(void* self, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_default_paper2` instead
///
#define q_scilexernasm_qbase_default_paper2 q_scilexernasm_super_default_paper2

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param style int
///
QColor* q_scilexernasm_super_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QColor* func(QsciLexerNASM* self, int style)
///
void q_scilexernasm_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param editor QsciScintilla*
///
void q_scilexernasm_set_editor(void* self, void* editor);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_editor` instead
///
#define q_scilexernasm_qbase_set_editor q_scilexernasm_super_set_editor

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param editor QsciScintilla*
///
void q_scilexernasm_super_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QsciScintilla* editor)
///
void q_scilexernasm_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_refresh_properties(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_refresh_properties` instead
///
#define q_scilexernasm_qbase_refresh_properties q_scilexernasm_super_refresh_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_super_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func()
///
void q_scilexernasm_on_refresh_properties(void* self, void (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_style_bits_needed(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_style_bits_needed` instead
///
#define q_scilexernasm_qbase_style_bits_needed q_scilexernasm_super_style_bits_needed

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_word_characters(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_word_characters` instead
///
#define q_scilexernasm_qbase_word_characters q_scilexernasm_super_word_characters

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
const char* q_scilexernasm_super_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func()
///
void q_scilexernasm_on_word_characters(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param autoindentstyle int
///
void q_scilexernasm_set_auto_indent_style(void* self, int autoindentstyle);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_auto_indent_style` instead
///
#define q_scilexernasm_qbase_set_auto_indent_style q_scilexernasm_super_set_auto_indent_style

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param autoindentstyle int
///
void q_scilexernasm_super_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, int autoindentstyle)
///
void q_scilexernasm_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_set_color(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_color` instead
///
#define q_scilexernasm_qbase_set_color q_scilexernasm_super_set_color

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_super_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QColor* c, int style)
///
void q_scilexernasm_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param eoffill bool
/// @param style int
///
void q_scilexernasm_set_eol_fill(void* self, bool eoffill, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_eol_fill` instead
///
#define q_scilexernasm_qbase_set_eol_fill q_scilexernasm_super_set_eol_fill

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param eoffill bool
/// @param style int
///
void q_scilexernasm_super_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, bool eoffill, int style)
///
void q_scilexernasm_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param f QFont*
/// @param style int
///
void q_scilexernasm_set_font(void* self, void* f, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_font` instead
///
#define q_scilexernasm_qbase_set_font q_scilexernasm_super_set_font

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param f QFont*
/// @param style int
///
void q_scilexernasm_super_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QFont* f, int style)
///
void q_scilexernasm_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_set_paper(void* self, void* c, int style);

/// @warning DEPRECATED: Use `q_scilexernasm_super_set_paper` instead
///
#define q_scilexernasm_qbase_set_paper q_scilexernasm_super_set_paper

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param c QColor*
/// @param style int
///
void q_scilexernasm_super_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QColor* c, int style)
///
void q_scilexernasm_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_read_properties(void* self, void* qs, const char* prefix);

/// @warning DEPRECATED: Use `q_scilexernasm_super_read_properties` instead
///
#define q_scilexernasm_qbase_read_properties q_scilexernasm_super_read_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_super_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, QSettings* qs, const char* prefix)
///
void q_scilexernasm_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_write_properties(void* self, void* qs, const char* prefix);

/// @warning DEPRECATED: Use `q_scilexernasm_super_write_properties` instead
///
#define q_scilexernasm_qbase_write_properties q_scilexernasm_super_write_properties

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexernasm_super_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, QSettings* qs, const char* prefix)
///
void q_scilexernasm_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QEvent*
///
bool q_scilexernasm_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexernasm_super_event` instead
///
#define q_scilexernasm_qbase_event q_scilexernasm_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QEvent*
///
bool q_scilexernasm_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, QEvent* event)
///
void q_scilexernasm_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexernasm_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_scilexernasm_super_event_filter` instead
///
#define q_scilexernasm_qbase_event_filter q_scilexernasm_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexernasm_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, QObject* watched, QEvent* event)
///
void q_scilexernasm_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QTimerEvent*
///
void q_scilexernasm_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexernasm_super_timer_event` instead
///
#define q_scilexernasm_qbase_timer_event q_scilexernasm_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QTimerEvent*
///
void q_scilexernasm_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QTimerEvent* event)
///
void q_scilexernasm_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QChildEvent*
///
void q_scilexernasm_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexernasm_super_child_event` instead
///
#define q_scilexernasm_qbase_child_event q_scilexernasm_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QChildEvent*
///
void q_scilexernasm_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QChildEvent* event)
///
void q_scilexernasm_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QEvent*
///
void q_scilexernasm_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_scilexernasm_super_custom_event` instead
///
#define q_scilexernasm_qbase_custom_event q_scilexernasm_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param event QEvent*
///
void q_scilexernasm_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QEvent* event)
///
void q_scilexernasm_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
void q_scilexernasm_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexernasm_super_connect_notify` instead
///
#define q_scilexernasm_qbase_connect_notify q_scilexernasm_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
void q_scilexernasm_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QMetaMethod* signal)
///
void q_scilexernasm_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
void q_scilexernasm_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexernasm_super_disconnect_notify` instead
///
#define q_scilexernasm_qbase_disconnect_notify q_scilexernasm_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
void q_scilexernasm_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, QMetaMethod* signal)
///
void q_scilexernasm_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param text const char*
///
char* q_scilexernasm_text_as_bytes(void* self, const char* text);

/// @warning DEPRECATED: Use `q_scilexernasm_super_text_as_bytes` instead
///
#define q_scilexernasm_qbase_text_as_bytes q_scilexernasm_super_text_as_bytes

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param text const char*
///
char* q_scilexernasm_super_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback libqt_string func(QsciLexerNASM* self, const char* text)
///
void q_scilexernasm_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexernasm_bytes_as_text(void* self, const char* bytes, int size);

/// @warning DEPRECATED: Use `q_scilexernasm_super_bytes_as_text` instead
///
#define q_scilexernasm_qbase_bytes_as_text q_scilexernasm_super_bytes_as_text

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexernasm_super_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback const char* func(QsciLexerNASM* self, const char* bytes, int size)
///
void q_scilexernasm_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
QObject* q_scilexernasm_sender(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_sender` instead
///
#define q_scilexernasm_qbase_sender q_scilexernasm_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
QObject* q_scilexernasm_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback QObject* func()
///
void q_scilexernasm_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_scilexernasm_super_sender_signal_index` instead
///
#define q_scilexernasm_qbase_sender_signal_index q_scilexernasm_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
///
int32_t q_scilexernasm_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func()
///
void q_scilexernasm_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal const char*
///
int32_t q_scilexernasm_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_scilexernasm_super_receivers` instead
///
#define q_scilexernasm_qbase_receivers q_scilexernasm_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal const char*
///
int32_t q_scilexernasm_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback int32_t func(QsciLexerNASM* self, const char* signal)
///
void q_scilexernasm_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
bool q_scilexernasm_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_scilexernasm_super_is_signal_connected` instead
///
#define q_scilexernasm_qbase_is_signal_connected q_scilexernasm_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param signal QMetaMethod*
///
bool q_scilexernasm_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerNASM*
/// @param callback bool func(QsciLexerNASM* self, QMetaMethod* signal)
///
void q_scilexernasm_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerNASM*
/// @param callback void func(QsciLexerNASM* self, const char* objectName)
///
void q_scilexernasm_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerNASM.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerNASM*
///
void q_scilexernasm_delete(void* self);

#endif
