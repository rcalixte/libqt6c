#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERTEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERTEX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html

/// q_scilexertex_new constructs a new QsciLexerTeX object.
///
QsciLexerTeX* q_scilexertex_new();

/// q_scilexertex_new2 constructs a new QsciLexerTeX object.
///
/// @param parent QObject*
QsciLexerTeX* q_scilexertex_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerTeX*
const QMetaObject* q_scilexertex_meta_object(void* self);

/// @param self QsciLexerTeX*
/// @param param1 const char*
void* q_scilexertex_metacast(void* self, const char* param1);

/// @param self QsciLexerTeX*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexertex_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func(QsciLexerTeX* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_scilexertex_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerTeX*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexertex_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_scilexertex_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_word_characters(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
/// @param set int
const char* q_scilexertex_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
/// @param style int
const char* q_scilexertex_description(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
void q_scilexertex_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param fold bool
void q_scilexertex_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_fold_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param fold bool
void q_scilexertex_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_fold_compact(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param enable bool
void q_scilexertex_set_process_comments(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_process_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param enable bool
void q_scilexertex_set_process_if(void* self, bool enable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_process_if(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, QSettings* qs, const char* prefix)
void q_scilexertex_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Base class method implementation
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, QSettings* qs, const char* prefix)
void q_scilexertex_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Base class method implementation
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_scilexertex_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_scilexertex_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
QsciAbstractAPIs* q_scilexertex_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
QFont* q_scilexertex_default_font(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
QColor* q_scilexertex_default_paper(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
QsciScintilla* q_scilexertex_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param apis QsciAbstractAPIs*
void q_scilexertex_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param c QColor*
void q_scilexertex_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param f QFont*
void q_scilexertex_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param c QColor*
void q_scilexertex_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
bool q_scilexertex_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
bool q_scilexertex_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QColor* c, int style)
void q_scilexertex_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param eolfilled bool
/// @param style int
void q_scilexertex_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, bool eolfilled, int style)
void q_scilexertex_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param f QFont*
/// @param style int
void q_scilexertex_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QFont* f, int style)
void q_scilexertex_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QColor* c, int style)
void q_scilexertex_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param prop const char*
/// @param val const char*
void q_scilexertex_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, const char* prop, const char* val)
void q_scilexertex_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerTeX*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexertex_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerTeX*
/// @param name char*
void q_scilexertex_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerTeX*
bool q_scilexertex_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerTeX*
/// @param b bool
bool q_scilexertex_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerTeX*
QThread* q_scilexertex_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerTeX*
/// @param thread QThread*
bool q_scilexertex_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerTeX*
/// @param interval int
int32_t q_scilexertex_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerTeX*
/// @param id int
void q_scilexertex_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerTeX*
/// @param id enum Qt__TimerId
void q_scilexertex_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerTeX*
libqt_list /* of QObject* */ q_scilexertex_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerTeX*
/// @param parent QObject*
void q_scilexertex_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerTeX*
/// @param filterObj QObject*
void q_scilexertex_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerTeX*
/// @param obj QObject*
void q_scilexertex_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_scilexertex_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerTeX*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_scilexertex_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_scilexertex_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_scilexertex_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerTeX*
void q_scilexertex_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerTeX*
void q_scilexertex_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerTeX*
/// @param name const char*
/// @param value QVariant*
bool q_scilexertex_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerTeX*
/// @param name const char*
QVariant* q_scilexertex_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerTeX*
const char** q_scilexertex_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerTeX*
QBindingStorage* q_scilexertex_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerTeX*
const QBindingStorage* q_scilexertex_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerTeX*
void q_scilexertex_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self)
void q_scilexertex_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerTeX*
QObject* q_scilexertex_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerTeX*
/// @param classname const char*
bool q_scilexertex_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerTeX*
void q_scilexertex_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerTeX*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_scilexertex_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerTeX*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_scilexertex_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_scilexertex_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerTeX*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_scilexertex_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerTeX*
/// @param param1 QObject*
void q_scilexertex_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QObject* param1)
void q_scilexertex_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
const char* q_scilexertex_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char* func()
void q_scilexertex_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
const char** q_scilexertex_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
const char** q_scilexertex_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char** func()
void q_scilexertex_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char* func(QsciLexerTeX* self, int* style)
void q_scilexertex_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char* func(QsciLexerTeX* self, int* style)
void q_scilexertex_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int*
const char* q_scilexertex_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char* func(QsciLexerTeX* self, int* style)
void q_scilexertex_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
bool q_scilexertex_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
bool q_scilexertex_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func()
void q_scilexertex_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QColor* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
bool q_scilexertex_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
bool q_scilexertex_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, int style)
void q_scilexertex_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QFont* q_scilexertex_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QFont* q_scilexertex_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QFont* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QColor* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QColor* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
bool q_scilexertex_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
bool q_scilexertex_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, int style)
void q_scilexertex_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QFont* q_scilexertex_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QFont* q_scilexertex_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QFont* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param style int
QColor* q_scilexertex_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QColor* func(QsciLexerTeX* self, int style)
void q_scilexertex_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param editor QsciScintilla*
void q_scilexertex_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param editor QsciScintilla*
void q_scilexertex_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QsciScintilla* editor)
void q_scilexertex_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param autoindentstyle int
void q_scilexertex_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param autoindentstyle int
void q_scilexertex_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, int autoindentstyle)
void q_scilexertex_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QColor* c, int style)
void q_scilexertex_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param eoffill bool
/// @param style int
void q_scilexertex_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param eoffill bool
/// @param style int
void q_scilexertex_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, bool eoffill, int style)
void q_scilexertex_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param f QFont*
/// @param style int
void q_scilexertex_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param f QFont*
/// @param style int
void q_scilexertex_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QFont* f, int style)
void q_scilexertex_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param c QColor*
/// @param style int
void q_scilexertex_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QColor* c, int style)
void q_scilexertex_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QEvent*
bool q_scilexertex_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QEvent*
bool q_scilexertex_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, QEvent* event)
void q_scilexertex_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexertex_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexertex_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, QObject* watched, QEvent* event)
void q_scilexertex_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QTimerEvent*
void q_scilexertex_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QTimerEvent*
void q_scilexertex_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QTimerEvent* event)
void q_scilexertex_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QChildEvent*
void q_scilexertex_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QChildEvent*
void q_scilexertex_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QChildEvent* event)
void q_scilexertex_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QEvent*
void q_scilexertex_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param event QEvent*
void q_scilexertex_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QEvent* event)
void q_scilexertex_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
void q_scilexertex_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
void q_scilexertex_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QMetaMethod* signal)
void q_scilexertex_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
void q_scilexertex_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
void q_scilexertex_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, QMetaMethod* signal)
void q_scilexertex_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param text const char*
char* q_scilexertex_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param text const char*
char* q_scilexertex_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback char* func(QsciLexerTeX* self, const char* text)
void q_scilexertex_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param bytes const char*
/// @param size int
const char* q_scilexertex_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param bytes const char*
/// @param size int
const char* q_scilexertex_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback const char* func(QsciLexerTeX* self, const char* bytes, int size)
void q_scilexertex_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
QObject* q_scilexertex_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
QObject* q_scilexertex_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback QObject* func()
void q_scilexertex_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
int32_t q_scilexertex_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func()
void q_scilexertex_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal const char*
int32_t q_scilexertex_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal const char*
int32_t q_scilexertex_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback int32_t func(QsciLexerTeX* self, const char* signal)
void q_scilexertex_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
bool q_scilexertex_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param signal QMetaMethod*
bool q_scilexertex_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerTeX*
/// @param callback bool func(QsciLexerTeX* self, QMetaMethod* signal)
void q_scilexertex_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerTeX*
/// @param callback void func(QsciLexerTeX* self, const char* objectName)
void q_scilexertex_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerTeX.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerTeX*
void q_scilexertex_delete(void* self);

typedef enum {
    QSCILEXERTEX__DEFAULT = 0,
    QSCILEXERTEX__SPECIAL = 1,
    QSCILEXERTEX__GROUP = 2,
    QSCILEXERTEX__SYMBOL = 3,
    QSCILEXERTEX__COMMAND = 4,
    QSCILEXERTEX__TEXT = 5
} QsciLexerTeX__;

#endif
