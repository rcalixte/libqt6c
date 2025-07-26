#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVHDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVHDL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html

/// q_scilexervhdl_new constructs a new QsciLexerVHDL object.
///
///
QsciLexerVHDL* q_scilexervhdl_new();

/// q_scilexervhdl_new2 constructs a new QsciLexerVHDL object.
///
/// ``` QObject* parent ```
QsciLexerVHDL* q_scilexervhdl_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerVHDL* self ```
const QMetaObject* q_scilexervhdl_meta_object(void* self);

/// ``` QsciLexerVHDL* self, const char* param1 ```
void* q_scilexervhdl_metacast(void* self, const char* param1);

/// ``` QsciLexerVHDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexervhdl_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)(QsciLexerVHDL*, enum QMetaObject__Call, int, void*) ```
void q_scilexervhdl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexervhdl_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexervhdl_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_brace_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int set ```
const char* q_scilexervhdl_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, int style ```
const char* q_scilexervhdl_description(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_compact(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_else(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_begin(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_fold_at_parenthesis(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_else(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_begin(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_begin(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_begin(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_set_fold_at_parenthesis(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool) ```
void q_scilexervhdl_on_set_fold_at_parenthesis(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, bool fold ```
void q_scilexervhdl_qbase_set_fold_at_parenthesis(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QSettings*, const char*) ```
void q_scilexervhdl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QSettings*, const char*) ```
void q_scilexervhdl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Base class method implementation
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexervhdl_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexervhdl_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self ```
QsciAbstractAPIs* q_scilexervhdl_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self ```
QsciScintilla* q_scilexervhdl_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QsciAbstractAPIs* apis ```
void q_scilexervhdl_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QColor* c ```
void q_scilexervhdl_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QFont* f ```
void q_scilexervhdl_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QColor* c ```
void q_scilexervhdl_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs ```
bool q_scilexervhdl_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs ```
bool q_scilexervhdl_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, bool eolfilled, int style ```
void q_scilexervhdl_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool, int) ```
void q_scilexervhdl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QFont*, int) ```
void q_scilexervhdl_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, const char* prop, const char* val ```
void q_scilexervhdl_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, const char*, const char*) ```
void q_scilexervhdl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerVHDL* self, QSettings* qs, const char* prefix ```
bool q_scilexervhdl_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerVHDL* self, char* name ```
void q_scilexervhdl_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerVHDL* self, bool b ```
bool q_scilexervhdl_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerVHDL* self ```
QThread* q_scilexervhdl_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerVHDL* self, QThread* thread ```
bool q_scilexervhdl_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVHDL* self, int interval ```
int32_t q_scilexervhdl_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerVHDL* self, int id ```
void q_scilexervhdl_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerVHDL* self, enum Qt__TimerId id ```
void q_scilexervhdl_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerVHDL* self ```
libqt_list /* of QObject* */ q_scilexervhdl_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerVHDL* self, QObject* parent ```
void q_scilexervhdl_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerVHDL* self, QObject* filterObj ```
void q_scilexervhdl_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerVHDL* self, QObject* obj ```
void q_scilexervhdl_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexervhdl_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVHDL* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexervhdl_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexervhdl_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexervhdl_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerVHDL* self, const char* name, QVariant* value ```
bool q_scilexervhdl_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerVHDL* self, const char* name ```
QVariant* q_scilexervhdl_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerVHDL* self ```
QBindingStorage* q_scilexervhdl_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerVHDL* self ```
const QBindingStorage* q_scilexervhdl_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*) ```
void q_scilexervhdl_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerVHDL* self, const char* classname ```
bool q_scilexervhdl_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerVHDL* self, QThread* thread, Disambiguated_t* param2 ```
bool q_scilexervhdl_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVHDL* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexervhdl_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexervhdl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVHDL* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexervhdl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self, QObject* param1 ```
void q_scilexervhdl_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QObject*) ```
void q_scilexervhdl_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)() ```
void q_scilexervhdl_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char** q_scilexervhdl_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char** (*slot)() ```
void q_scilexervhdl_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int* style ```
const char* q_scilexervhdl_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, int*) ```
void q_scilexervhdl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
bool q_scilexervhdl_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)() ```
void q_scilexervhdl_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
bool q_scilexervhdl_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_color2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QFont* q_scilexervhdl_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_font2(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int style ```
QColor* q_scilexervhdl_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_default_paper2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QsciScintilla* editor ```
void q_scilexervhdl_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QsciScintilla* editor ```
void q_scilexervhdl_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QsciScintilla*) ```
void q_scilexervhdl_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
const char* q_scilexervhdl_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)() ```
void q_scilexervhdl_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, int autoindentstyle ```
void q_scilexervhdl_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int autoindentstyle ```
void q_scilexervhdl_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, int) ```
void q_scilexervhdl_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool eoffill, int style ```
void q_scilexervhdl_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool eoffill, int style ```
void q_scilexervhdl_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, bool, int) ```
void q_scilexervhdl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QFont* f, int style ```
void q_scilexervhdl_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QFont*, int) ```
void q_scilexervhdl_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QColor* c, int style ```
void q_scilexervhdl_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QColor*, int) ```
void q_scilexervhdl_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
bool q_scilexervhdl_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
bool q_scilexervhdl_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QEvent*) ```
void q_scilexervhdl_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* watched, QEvent* event ```
bool q_scilexervhdl_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* watched, QEvent* event ```
bool q_scilexervhdl_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QObject*, QEvent*) ```
void q_scilexervhdl_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QTimerEvent* event ```
void q_scilexervhdl_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QTimerEvent* event ```
void q_scilexervhdl_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QTimerEvent*) ```
void q_scilexervhdl_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QChildEvent* event ```
void q_scilexervhdl_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QChildEvent* event ```
void q_scilexervhdl_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QChildEvent*) ```
void q_scilexervhdl_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
void q_scilexervhdl_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QEvent* event ```
void q_scilexervhdl_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QEvent*) ```
void q_scilexervhdl_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
void q_scilexervhdl_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* text ```
char* q_scilexervhdl_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* text ```
char* q_scilexervhdl_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, char* (*slot)(QsciLexerVHDL*, const char*) ```
void q_scilexervhdl_on_text_as_bytes(void* self, char* (*slot)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* bytes, int size ```
const char* q_scilexervhdl_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* bytes, int size ```
const char* q_scilexervhdl_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* (*slot)(QsciLexerVHDL*, const char*, int) ```
void q_scilexervhdl_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
QObject* q_scilexervhdl_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QObject* (*slot)() ```
void q_scilexervhdl_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self ```
int32_t q_scilexervhdl_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)() ```
void q_scilexervhdl_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* signal ```
int32_t q_scilexervhdl_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, const char* signal ```
int32_t q_scilexervhdl_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, int32_t (*slot)(QsciLexerVHDL*, const char*) ```
void q_scilexervhdl_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
bool q_scilexervhdl_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, QMetaMethod* signal ```
bool q_scilexervhdl_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVHDL* self, bool (*slot)(QsciLexerVHDL*, QMetaMethod*) ```
void q_scilexervhdl_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciLexerVHDL* self, void (*slot)(QsciLexerVHDL*, const char*) ```
void q_scilexervhdl_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerVHDL.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciLexerVHDL* self ```
void q_scilexervhdl_delete(void* self);

typedef enum {
    QSCILEXERVHDL__DEFAULT = 0,
    QSCILEXERVHDL__COMMENT = 1,
    QSCILEXERVHDL__COMMENTLINE = 2,
    QSCILEXERVHDL__NUMBER = 3,
    QSCILEXERVHDL__STRING = 4,
    QSCILEXERVHDL__OPERATOR = 5,
    QSCILEXERVHDL__IDENTIFIER = 6,
    QSCILEXERVHDL__UNCLOSEDSTRING = 7,
    QSCILEXERVHDL__KEYWORD = 8,
    QSCILEXERVHDL__STANDARDOPERATOR = 9,
    QSCILEXERVHDL__ATTRIBUTE = 10,
    QSCILEXERVHDL__STANDARDFUNCTION = 11,
    QSCILEXERVHDL__STANDARDPACKAGE = 12,
    QSCILEXERVHDL__STANDARDTYPE = 13,
    QSCILEXERVHDL__KEYWORDSET7 = 14,
    QSCILEXERVHDL__COMMENTBLOCK = 15
} QsciLexerVHDL__;

#endif
