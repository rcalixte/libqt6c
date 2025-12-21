#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERAVS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCILEXERAVS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)

/// q_scilexeravs_new constructs a new QsciLexerAVS object.
///
QsciLexerAVS* q_scilexeravs_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)

/// q_scilexeravs_new2 constructs a new QsciLexerAVS object.
///
/// @param parent QObject*
///
QsciLexerAVS* q_scilexeravs_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerAVS*
///
const QMetaObject* q_scilexeravs_meta_object(void* self);

/// @param self QsciLexerAVS*
/// @param param1 const char*
///
void* q_scilexeravs_metacast(void* self, const char* param1);

/// @param self QsciLexerAVS*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeravs_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func(QsciLexerAVS* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_scilexeravs_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerAVS*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_scilexeravs_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_scilexeravs_tr(const char* s);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_language(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_lexer(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_brace_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_word_characters(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_default_color(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param style int
///
QFont* q_scilexeravs_default_font(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
/// @param set int
///
const char* q_scilexeravs_keywords(void* self, int set);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
/// @param style int
///
const char* q_scilexeravs_description(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_refresh_properties(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_fold_comments(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_fold_compact(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param fold bool
///
void q_scilexeravs_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, bool fold)
///
void q_scilexeravs_on_set_fold_comments(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAVS*
/// @param fold bool
///
void q_scilexeravs_qbase_set_fold_comments(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param fold bool
///
void q_scilexeravs_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, bool fold)
///
void q_scilexeravs_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAVS*
/// @param fold bool
///
void q_scilexeravs_qbase_set_fold_compact(void* self, bool fold);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, QSettings* qs, const char* prefix)
///
void q_scilexeravs_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, QSettings* qs, const char* prefix)
///
void q_scilexeravs_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Base class method implementation
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_scilexeravs_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_scilexeravs_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
///
QsciAbstractAPIs* q_scilexeravs_apis(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
///
QColor* q_scilexeravs_default_paper(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
///
QsciScintilla* q_scilexeravs_editor(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param apis QsciAbstractAPIs*
///
void q_scilexeravs_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param c QColor*
///
void q_scilexeravs_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param f QFont*
///
void q_scilexeravs_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param c QColor*
///
void q_scilexeravs_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
///
bool q_scilexeravs_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
///
bool q_scilexeravs_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QColor* c, int style)
///
void q_scilexeravs_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param eolfilled bool
/// @param style int
///
void q_scilexeravs_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, bool eolfilled, int style)
///
void q_scilexeravs_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param f QFont*
/// @param style int
///
void q_scilexeravs_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QFont* f, int style)
///
void q_scilexeravs_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QColor* c, int style)
///
void q_scilexeravs_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param prop const char*
/// @param val const char*
///
void q_scilexeravs_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, const char* prop, const char* val)
///
void q_scilexeravs_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerAVS*
/// @param qs QSettings*
/// @param prefix const char*
///
bool q_scilexeravs_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerAVS*
/// @param name char*
///
void q_scilexeravs_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerAVS*
/// @param b bool
///
bool q_scilexeravs_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerAVS*
///
QThread* q_scilexeravs_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerAVS*
/// @param thread QThread*
///
bool q_scilexeravs_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAVS*
/// @param interval int
///
int32_t q_scilexeravs_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerAVS*
/// @param id int
///
void q_scilexeravs_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerAVS*
/// @param id enum Qt__TimerId
///
void q_scilexeravs_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerAVS*
///
libqt_list /* of QObject* */ q_scilexeravs_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerAVS*
/// @param parent QObject*
///
void q_scilexeravs_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerAVS*
/// @param filterObj QObject*
///
void q_scilexeravs_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerAVS*
/// @param obj QObject*
///
void q_scilexeravs_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_scilexeravs_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerAVS*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_scilexeravs_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_scilexeravs_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_scilexeravs_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerAVS*
/// @param name const char*
/// @param value QVariant*
///
bool q_scilexeravs_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerAVS*
/// @param name const char*
///
QVariant* q_scilexeravs_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerAVS*
///
const char** q_scilexeravs_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerAVS*
///
QBindingStorage* q_scilexeravs_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerAVS*
///
const QBindingStorage* q_scilexeravs_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self)
///
void q_scilexeravs_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerAVS*
///
QObject* q_scilexeravs_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerAVS*
/// @param classname const char*
///
bool q_scilexeravs_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerAVS*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_scilexeravs_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerAVS*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_scilexeravs_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_scilexeravs_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerAVS*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_scilexeravs_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAVS*
/// @param param1 QObject*
///
void q_scilexeravs_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QObject* param1)
///
void q_scilexeravs_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
const char* q_scilexeravs_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char* func()
///
void q_scilexeravs_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
const char** q_scilexeravs_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
const char** q_scilexeravs_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char** func()
///
void q_scilexeravs_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char* func(QsciLexerAVS* self, int* style)
///
void q_scilexeravs_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char* func(QsciLexerAVS* self, int* style)
///
void q_scilexeravs_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int*
///
const char* q_scilexeravs_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char* func(QsciLexerAVS* self, int* style)
///
void q_scilexeravs_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
bool q_scilexeravs_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func()
///
void q_scilexeravs_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QColor* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
bool q_scilexeravs_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
bool q_scilexeravs_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QFont* q_scilexeravs_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QFont* q_scilexeravs_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QFont* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QColor* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QColor* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
bool q_scilexeravs_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
bool q_scilexeravs_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_default_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QFont* q_scilexeravs_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QFont* q_scilexeravs_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QFont* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param style int
///
QColor* q_scilexeravs_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QColor* func(QsciLexerAVS* self, int style)
///
void q_scilexeravs_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param editor QsciScintilla*
///
void q_scilexeravs_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param editor QsciScintilla*
///
void q_scilexeravs_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QsciScintilla* editor)
///
void q_scilexeravs_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param autoindentstyle int
///
void q_scilexeravs_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param autoindentstyle int
///
void q_scilexeravs_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, int autoindentstyle)
///
void q_scilexeravs_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QColor* c, int style)
///
void q_scilexeravs_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param eoffill bool
/// @param style int
///
void q_scilexeravs_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param eoffill bool
/// @param style int
///
void q_scilexeravs_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, bool eoffill, int style)
///
void q_scilexeravs_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param f QFont*
/// @param style int
///
void q_scilexeravs_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param f QFont*
/// @param style int
///
void q_scilexeravs_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QFont* f, int style)
///
void q_scilexeravs_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param c QColor*
/// @param style int
///
void q_scilexeravs_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QColor* c, int style)
///
void q_scilexeravs_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QEvent*
///
bool q_scilexeravs_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QEvent*
///
bool q_scilexeravs_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, QEvent* event)
///
void q_scilexeravs_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeravs_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_scilexeravs_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, QObject* watched, QEvent* event)
///
void q_scilexeravs_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QTimerEvent*
///
void q_scilexeravs_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QTimerEvent*
///
void q_scilexeravs_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QTimerEvent* event)
///
void q_scilexeravs_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QChildEvent*
///
void q_scilexeravs_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QChildEvent*
///
void q_scilexeravs_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QChildEvent* event)
///
void q_scilexeravs_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QEvent*
///
void q_scilexeravs_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param event QEvent*
///
void q_scilexeravs_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QEvent* event)
///
void q_scilexeravs_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
void q_scilexeravs_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
void q_scilexeravs_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QMetaMethod* signal)
///
void q_scilexeravs_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
void q_scilexeravs_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
void q_scilexeravs_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, QMetaMethod* signal)
///
void q_scilexeravs_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param text const char*
///
char* q_scilexeravs_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param text const char*
///
char* q_scilexeravs_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback char* func(QsciLexerAVS* self, const char* text)
///
void q_scilexeravs_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeravs_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param bytes const char*
/// @param size int
///
const char* q_scilexeravs_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback const char* func(QsciLexerAVS* self, const char* bytes, int size)
///
void q_scilexeravs_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
QObject* q_scilexeravs_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
QObject* q_scilexeravs_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback QObject* func()
///
void q_scilexeravs_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
///
int32_t q_scilexeravs_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func()
///
void q_scilexeravs_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal const char*
///
int32_t q_scilexeravs_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal const char*
///
int32_t q_scilexeravs_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback int32_t func(QsciLexerAVS* self, const char* signal)
///
void q_scilexeravs_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
bool q_scilexeravs_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param signal QMetaMethod*
///
bool q_scilexeravs_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerAVS*
/// @param callback bool func(QsciLexerAVS* self, QMetaMethod* signal)
///
void q_scilexeravs_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerAVS*
/// @param callback void func(QsciLexerAVS* self, const char* objectName)
///
void q_scilexeravs_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerAVS.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerAVS*
///
void q_scilexeravs_delete(void* self);

typedef enum {
    QSCILEXERAVS__DEFAULT = 0,
    QSCILEXERAVS__BLOCKCOMMENT = 1,
    QSCILEXERAVS__NESTEDBLOCKCOMMENT = 2,
    QSCILEXERAVS__LINECOMMENT = 3,
    QSCILEXERAVS__NUMBER = 4,
    QSCILEXERAVS__OPERATOR = 5,
    QSCILEXERAVS__IDENTIFIER = 6,
    QSCILEXERAVS__STRING = 7,
    QSCILEXERAVS__TRIPLESTRING = 8,
    QSCILEXERAVS__KEYWORD = 9,
    QSCILEXERAVS__FILTER = 10,
    QSCILEXERAVS__PLUGIN = 11,
    QSCILEXERAVS__FUNCTION = 12,
    QSCILEXERAVS__CLIPPROPERTY = 13,
    QSCILEXERAVS__KEYWORDSET6 = 14
} QsciLexerAVS__;

#endif
