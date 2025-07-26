#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERJAVASCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERJAVASCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html

/// q_scilexerjavascript_new constructs a new QsciLexerJavaScript object.
///
///
QsciLexerJavaScript* q_scilexerjavascript_new();

/// q_scilexerjavascript_new2 constructs a new QsciLexerJavaScript object.
///
/// ``` QObject* parent ```
QsciLexerJavaScript* q_scilexerjavascript_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerJavaScript* self ```
const QMetaObject* q_scilexerjavascript_meta_object(void* self);

/// ``` QsciLexerJavaScript* self, const char* param1 ```
void* q_scilexerjavascript_metacast(void* self, const char* param1);

/// ``` QsciLexerJavaScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjavascript_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)(QsciLexerJavaScript*, enum QMetaObject__Call, int, void*) ```
void q_scilexerjavascript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerJavaScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjavascript_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerjavascript_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int style ```
bool q_scilexerjavascript_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int style ```
QFont* q_scilexerjavascript_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int set ```
const char* q_scilexerjavascript_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// ``` QsciLexerJavaScript* self, int style ```
const char* q_scilexerjavascript_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerjavascript_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerjavascript_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_fold_at_else(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_fold_comments(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_fold_compact(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_fold_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_style_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool allowed ```
void q_scilexerjavascript_set_dollars_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_dollars_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool enabled ```
void q_scilexerjavascript_set_highlight_triple_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_highlight_triple_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool enabled ```
void q_scilexerjavascript_set_highlight_hash_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_highlight_hash_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool enabled ```
void q_scilexerjavascript_set_highlight_back_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_highlight_back_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool enabled ```
void q_scilexerjavascript_set_highlight_escape_sequences(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_highlight_escape_sequences(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, bool allowed ```
void q_scilexerjavascript_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_verbatim_string_escape_sequences_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_end1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_start1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self ```
QsciAbstractAPIs* q_scilexerjavascript_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self ```
QsciScintilla* q_scilexerjavascript_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QsciAbstractAPIs* apis ```
void q_scilexerjavascript_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QColor* c ```
void q_scilexerjavascript_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QFont* f ```
void q_scilexerjavascript_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QColor* c ```
void q_scilexerjavascript_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QSettings* qs ```
bool q_scilexerjavascript_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QSettings* qs ```
bool q_scilexerjavascript_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QColor*, int) ```
void q_scilexerjavascript_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, bool eolfilled, int style ```
void q_scilexerjavascript_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool, int) ```
void q_scilexerjavascript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QFont* f, int style ```
void q_scilexerjavascript_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QFont*, int) ```
void q_scilexerjavascript_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QColor*, int) ```
void q_scilexerjavascript_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, const char* prop, const char* val ```
void q_scilexerjavascript_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, const char*, const char*) ```
void q_scilexerjavascript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerJavaScript* self, char* name ```
void q_scilexerjavascript_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerJavaScript* self, bool b ```
bool q_scilexerjavascript_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerJavaScript* self ```
QThread* q_scilexerjavascript_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerJavaScript* self, QThread* thread ```
bool q_scilexerjavascript_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJavaScript* self, int interval ```
int32_t q_scilexerjavascript_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerJavaScript* self, int id ```
void q_scilexerjavascript_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerJavaScript* self, enum Qt__TimerId id ```
void q_scilexerjavascript_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerJavaScript* self ```
libqt_list /* of QObject* */ q_scilexerjavascript_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerJavaScript* self, QObject* parent ```
void q_scilexerjavascript_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerJavaScript* self, QObject* filterObj ```
void q_scilexerjavascript_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerJavaScript* self, QObject* obj ```
void q_scilexerjavascript_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerjavascript_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJavaScript* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerjavascript_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerjavascript_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerjavascript_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerJavaScript* self, const char* name, QVariant* value ```
bool q_scilexerjavascript_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerJavaScript* self, const char* name ```
QVariant* q_scilexerjavascript_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerJavaScript* self ```
const char** q_scilexerjavascript_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerJavaScript* self ```
QBindingStorage* q_scilexerjavascript_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerJavaScript* self ```
const QBindingStorage* q_scilexerjavascript_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*) ```
void q_scilexerjavascript_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerJavaScript* self ```
QObject* q_scilexerjavascript_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerJavaScript* self, const char* classname ```
bool q_scilexerjavascript_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerJavaScript* self, QThread* thread, Disambiguated_t* param2 ```
bool q_scilexerjavascript_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJavaScript* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerjavascript_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjavascript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJavaScript* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjavascript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJavaScript* self, QObject* param1 ```
void q_scilexerjavascript_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QObject*) ```
void q_scilexerjavascript_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_set_fold_at_else(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_qbase_set_fold_at_else(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool) ```
void q_scilexerjavascript_on_set_fold_at_else(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_qbase_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool) ```
void q_scilexerjavascript_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_qbase_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool) ```
void q_scilexerjavascript_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool fold ```
void q_scilexerjavascript_qbase_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool) ```
void q_scilexerjavascript_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool style ```
void q_scilexerjavascript_set_style_preprocessor(void* self, bool style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool style ```
void q_scilexerjavascript_qbase_set_style_preprocessor(void* self, bool style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCPP.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool) ```
void q_scilexerjavascript_on_set_style_preprocessor(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_lexer(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_qbase_lexer(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)() ```
void q_scilexerjavascript_on_lexer(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)() ```
void q_scilexerjavascript_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char** q_scilexerjavascript_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char** q_scilexerjavascript_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char** (*slot)() ```
void q_scilexerjavascript_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)(QsciLexerJavaScript*, int*) ```
void q_scilexerjavascript_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)(QsciLexerJavaScript*, int*) ```
void q_scilexerjavascript_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int* style ```
const char* q_scilexerjavascript_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)(QsciLexerJavaScript*, int*) ```
void q_scilexerjavascript_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
bool q_scilexerjavascript_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)() ```
void q_scilexerjavascript_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
bool q_scilexerjavascript_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
bool q_scilexerjavascript_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QFont* q_scilexerjavascript_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QFont* q_scilexerjavascript_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QFont* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_default_color2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QFont* q_scilexerjavascript_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QFont* q_scilexerjavascript_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QFont* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_default_font2(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int style ```
QColor* q_scilexerjavascript_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_default_paper2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QsciScintilla* editor ```
void q_scilexerjavascript_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QsciScintilla* editor ```
void q_scilexerjavascript_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QsciScintilla*) ```
void q_scilexerjavascript_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_qbase_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)() ```
void q_scilexerjavascript_on_refresh_properties(void* self, void (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
const char* q_scilexerjavascript_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)() ```
void q_scilexerjavascript_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int autoindentstyle ```
void q_scilexerjavascript_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int autoindentstyle ```
void q_scilexerjavascript_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, int) ```
void q_scilexerjavascript_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QColor*, int) ```
void q_scilexerjavascript_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool eoffill, int style ```
void q_scilexerjavascript_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool eoffill, int style ```
void q_scilexerjavascript_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, bool, int) ```
void q_scilexerjavascript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QFont* f, int style ```
void q_scilexerjavascript_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QFont* f, int style ```
void q_scilexerjavascript_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QFont*, int) ```
void q_scilexerjavascript_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QColor* c, int style ```
void q_scilexerjavascript_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QColor*, int) ```
void q_scilexerjavascript_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_qbase_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, QSettings*, const char*) ```
void q_scilexerjavascript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerjavascript_qbase_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, QSettings*, const char*) ```
void q_scilexerjavascript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QEvent* event ```
bool q_scilexerjavascript_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QEvent* event ```
bool q_scilexerjavascript_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, QEvent*) ```
void q_scilexerjavascript_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QObject* watched, QEvent* event ```
bool q_scilexerjavascript_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QObject* watched, QEvent* event ```
bool q_scilexerjavascript_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, QObject*, QEvent*) ```
void q_scilexerjavascript_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QTimerEvent* event ```
void q_scilexerjavascript_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QTimerEvent* event ```
void q_scilexerjavascript_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QTimerEvent*) ```
void q_scilexerjavascript_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QChildEvent* event ```
void q_scilexerjavascript_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QChildEvent* event ```
void q_scilexerjavascript_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QChildEvent*) ```
void q_scilexerjavascript_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QEvent* event ```
void q_scilexerjavascript_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QEvent* event ```
void q_scilexerjavascript_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QEvent*) ```
void q_scilexerjavascript_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
void q_scilexerjavascript_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
void q_scilexerjavascript_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QMetaMethod*) ```
void q_scilexerjavascript_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
void q_scilexerjavascript_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
void q_scilexerjavascript_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, QMetaMethod*) ```
void q_scilexerjavascript_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* text ```
char* q_scilexerjavascript_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* text ```
char* q_scilexerjavascript_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, char* (*slot)(QsciLexerJavaScript*, const char*) ```
void q_scilexerjavascript_on_text_as_bytes(void* self, char* (*slot)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* bytes, int size ```
const char* q_scilexerjavascript_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* bytes, int size ```
const char* q_scilexerjavascript_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* (*slot)(QsciLexerJavaScript*, const char*, int) ```
void q_scilexerjavascript_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
QObject* q_scilexerjavascript_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
QObject* q_scilexerjavascript_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QObject* (*slot)() ```
void q_scilexerjavascript_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self ```
int32_t q_scilexerjavascript_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)() ```
void q_scilexerjavascript_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* signal ```
int32_t q_scilexerjavascript_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, const char* signal ```
int32_t q_scilexerjavascript_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, int32_t (*slot)(QsciLexerJavaScript*, const char*) ```
void q_scilexerjavascript_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
bool q_scilexerjavascript_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, QMetaMethod* signal ```
bool q_scilexerjavascript_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJavaScript* self, bool (*slot)(QsciLexerJavaScript*, QMetaMethod*) ```
void q_scilexerjavascript_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciLexerJavaScript* self, void (*slot)(QsciLexerJavaScript*, const char*) ```
void q_scilexerjavascript_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerJavaScript.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciLexerJavaScript* self ```
void q_scilexerjavascript_delete(void* self);

#endif
