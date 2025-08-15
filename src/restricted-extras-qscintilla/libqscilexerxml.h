#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERXML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERXML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html

/// q_scilexerxml_new constructs a new QsciLexerXML object.
///
QsciLexerXML* q_scilexerxml_new();

/// q_scilexerxml_new2 constructs a new QsciLexerXML object.
///
/// @param parent QObject*
QsciLexerXML* q_scilexerxml_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QsciLexerXML*
const QMetaObject* q_scilexerxml_meta_object(void* self);

/// @param self QsciLexerXML*
/// @param param1 const char*
void* q_scilexerxml_metacast(void* self, const char* param1);

/// @param self QsciLexerXML*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexerxml_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn(QsciLexerXML*, enum QMetaObject__Call, int, void*)
void q_scilexerxml_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QsciLexerXML*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_scilexerxml_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_scilexerxml_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param style int
bool q_scilexerxml_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param style int
QFont* q_scilexerxml_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerXML*
/// @param set int
const char* q_scilexerxml_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
void q_scilexerxml_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param styled bool
void q_scilexerxml_set_scripts_styled(void* self, bool styled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_scripts_styled(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, QSettings*, const char*)
void q_scilexerxml_on_read_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, QSettings*, const char*)
void q_scilexerxml_on_write_properties(void* self, bool (*callback)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Base class method implementation
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_scilexerxml_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_scilexerxml_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_case_sensitive_tags(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
/// @param enabled bool
void q_scilexerxml_set_django_templates(void* self, bool enabled);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_django_templates(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_fold_compact(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_fold_preprocessor(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_set_fold_script_comments(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_fold_script_comments(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_set_fold_script_heredocs(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_fold_script_heredocs(void* self);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
/// @param enabled bool
void q_scilexerxml_set_mako_templates(void* self, bool enabled);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_mako_templates(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
QsciAbstractAPIs* q_scilexerxml_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
QsciScintilla* q_scilexerxml_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param apis QsciAbstractAPIs*
void q_scilexerxml_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param c QColor*
void q_scilexerxml_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param f QFont*
void q_scilexerxml_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param c QColor*
void q_scilexerxml_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
bool q_scilexerxml_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
bool q_scilexerxml_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QColor*, int)
void q_scilexerxml_on_color_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param eolfilled bool
/// @param style int
void q_scilexerxml_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, bool, int)
void q_scilexerxml_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param f QFont*
/// @param style int
void q_scilexerxml_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QFont*, int)
void q_scilexerxml_on_font_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QColor*, int)
void q_scilexerxml_on_paper_changed(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param prop const char*
/// @param val const char*
void q_scilexerxml_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, const char*, const char*)
void q_scilexerxml_on_property_changed(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// @param self QsciLexerXML*
/// @param qs QSettings*
/// @param prefix const char*
bool q_scilexerxml_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QsciLexerXML*
/// @param name char*
void q_scilexerxml_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QsciLexerXML*
bool q_scilexerxml_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QsciLexerXML*
/// @param b bool
bool q_scilexerxml_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QsciLexerXML*
QThread* q_scilexerxml_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerXML*
/// @param thread QThread*
bool q_scilexerxml_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerXML*
/// @param interval int
int32_t q_scilexerxml_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerXML*
/// @param id int
void q_scilexerxml_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QsciLexerXML*
/// @param id enum Qt__TimerId
void q_scilexerxml_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QsciLexerXML*
libqt_list /* of QObject* */ q_scilexerxml_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QsciLexerXML*
/// @param parent QObject*
void q_scilexerxml_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QsciLexerXML*
/// @param filterObj QObject*
void q_scilexerxml_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QsciLexerXML*
/// @param obj QObject*
void q_scilexerxml_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_scilexerxml_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerXML*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_scilexerxml_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_scilexerxml_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_scilexerxml_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QsciLexerXML*
void q_scilexerxml_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QsciLexerXML*
void q_scilexerxml_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QsciLexerXML*
/// @param name const char*
/// @param value QVariant*
bool q_scilexerxml_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QsciLexerXML*
/// @param name const char*
QVariant* q_scilexerxml_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciLexerXML*
const char** q_scilexerxml_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerXML*
QBindingStorage* q_scilexerxml_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QsciLexerXML*
const QBindingStorage* q_scilexerxml_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerXML*
void q_scilexerxml_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*)
void q_scilexerxml_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QsciLexerXML*
QObject* q_scilexerxml_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QsciLexerXML*
/// @param classname const char*
bool q_scilexerxml_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QsciLexerXML*
void q_scilexerxml_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QsciLexerXML*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_scilexerxml_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QsciLexerXML*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_scilexerxml_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_scilexerxml_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QsciLexerXML*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_scilexerxml_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerXML*
/// @param param1 QObject*
void q_scilexerxml_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QObject*)
void q_scilexerxml_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_qbase_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, bool)
void q_scilexerxml_on_set_fold_compact(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param fold bool
void q_scilexerxml_qbase_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, bool)
void q_scilexerxml_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param sens bool
void q_scilexerxml_set_case_sensitive_tags(void* self, bool sens);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param sens bool
void q_scilexerxml_qbase_set_case_sensitive_tags(void* self, bool sens);

/// Inherited from QsciLexerHTML
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerHTML.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, bool)
void q_scilexerxml_on_set_case_sensitive_tags(void* self, void (*callback)(void*, bool));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_lexer_id(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn()
void q_scilexerxml_on_auto_completion_fillups(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
const char** q_scilexerxml_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
const char** q_scilexerxml_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char** fn()
void q_scilexerxml_on_auto_completion_word_separators(void* self, const char** (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn(QsciLexerXML*, int*)
void q_scilexerxml_on_block_end(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_block_lookback(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn(QsciLexerXML*, int*)
void q_scilexerxml_on_block_start(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int*
const char* q_scilexerxml_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn(QsciLexerXML*, int*)
void q_scilexerxml_on_block_start_keyword(void* self, const char* (*callback)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_brace_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
bool q_scilexerxml_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
bool q_scilexerxml_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback bool fn()
void q_scilexerxml_on_case_sensitive(void* self, bool (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QColor* fn(QsciLexerXML*, int)
void q_scilexerxml_on_color(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
bool q_scilexerxml_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
bool q_scilexerxml_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, int)
void q_scilexerxml_on_eol_fill(void* self, bool (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QFont* q_scilexerxml_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QFont* q_scilexerxml_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QFont* fn(QsciLexerXML*, int)
void q_scilexerxml_on_font(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_indentation_guide_view(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_default_style(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
const char* q_scilexerxml_description(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
const char* q_scilexerxml_qbase_description(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn(QsciLexerXML*, int)
void q_scilexerxml_on_description(void* self, const char* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QColor* fn(QsciLexerXML*, int)
void q_scilexerxml_on_paper(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QColor* fn(QsciLexerXML*, int)
void q_scilexerxml_on_default_color2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QFont* q_scilexerxml_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QFont* q_scilexerxml_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QFont* fn(QsciLexerXML*, int)
void q_scilexerxml_on_default_font2(void* self, QFont* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param style int
QColor* q_scilexerxml_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QColor* fn(QsciLexerXML*, int)
void q_scilexerxml_on_default_paper2(void* self, QColor* (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param editor QsciScintilla*
void q_scilexerxml_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param editor QsciScintilla*
void q_scilexerxml_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QsciScintilla*)
void q_scilexerxml_on_set_editor(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_style_bits_needed(void* self, int32_t (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
const char* q_scilexerxml_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn()
void q_scilexerxml_on_word_characters(void* self, const char* (*callback)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param autoindentstyle int
void q_scilexerxml_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param autoindentstyle int
void q_scilexerxml_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, int)
void q_scilexerxml_on_set_auto_indent_style(void* self, void (*callback)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QColor*, int)
void q_scilexerxml_on_set_color(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param eoffill bool
/// @param style int
void q_scilexerxml_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param eoffill bool
/// @param style int
void q_scilexerxml_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, bool, int)
void q_scilexerxml_on_set_eol_fill(void* self, void (*callback)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param f QFont*
/// @param style int
void q_scilexerxml_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param f QFont*
/// @param style int
void q_scilexerxml_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QFont*, int)
void q_scilexerxml_on_set_font(void* self, void (*callback)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param c QColor*
/// @param style int
void q_scilexerxml_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QColor*, int)
void q_scilexerxml_on_set_paper(void* self, void (*callback)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QEvent*
bool q_scilexerxml_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QEvent*
bool q_scilexerxml_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, QEvent*)
void q_scilexerxml_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexerxml_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param watched QObject*
/// @param event QEvent*
bool q_scilexerxml_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, QObject*, QEvent*)
void q_scilexerxml_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QTimerEvent*
void q_scilexerxml_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QTimerEvent*
void q_scilexerxml_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QTimerEvent*)
void q_scilexerxml_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QChildEvent*
void q_scilexerxml_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QChildEvent*
void q_scilexerxml_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QChildEvent*)
void q_scilexerxml_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QEvent*
void q_scilexerxml_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param event QEvent*
void q_scilexerxml_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QEvent*)
void q_scilexerxml_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
void q_scilexerxml_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
void q_scilexerxml_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QMetaMethod*)
void q_scilexerxml_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
void q_scilexerxml_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
void q_scilexerxml_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, QMetaMethod*)
void q_scilexerxml_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param text const char*
char* q_scilexerxml_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param text const char*
char* q_scilexerxml_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback char* fn(QsciLexerXML*, const char*)
void q_scilexerxml_on_text_as_bytes(void* self, char* (*callback)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param bytes const char*
/// @param size int
const char* q_scilexerxml_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param bytes const char*
/// @param size int
const char* q_scilexerxml_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback const char* fn(QsciLexerXML*, const char*, int)
void q_scilexerxml_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
QObject* q_scilexerxml_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
QObject* q_scilexerxml_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback QObject* fn()
void q_scilexerxml_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
int32_t q_scilexerxml_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn()
void q_scilexerxml_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal const char*
int32_t q_scilexerxml_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal const char*
int32_t q_scilexerxml_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback int32_t fn(QsciLexerXML*, const char*)
void q_scilexerxml_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
bool q_scilexerxml_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param signal QMetaMethod*
bool q_scilexerxml_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciLexerXML*
/// @param callback bool fn(QsciLexerXML*, QMetaMethod*)
void q_scilexerxml_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QsciLexerXML*
/// @param callback void fn(QsciLexerXML*, const char*)
void q_scilexerxml_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerXML.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciLexerXML*
void q_scilexerxml_delete(void* self);

#endif
