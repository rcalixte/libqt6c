#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPASCAL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPASCAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html

/// q_scilexerpascal_new constructs a new QsciLexerPascal object.
///
///
QsciLexerPascal* q_scilexerpascal_new();

/// q_scilexerpascal_new2 constructs a new QsciLexerPascal object.
///
/// ``` QObject* parent ```
QsciLexerPascal* q_scilexerpascal_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPascal* self ```
const QMetaObject* q_scilexerpascal_meta_object(void* self);

/// ``` QsciLexerPascal* self, const char* param1 ```
void* q_scilexerpascal_metacast(void* self, const char* param1);

/// ``` QsciLexerPascal* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpascal_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)(QsciLexerPascal*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpascal_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpascal_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpascal_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char** q_scilexerpascal_auto_completion_word_separators(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_end(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_start(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_start_keyword(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_brace_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int set ```
const char* q_scilexerpascal_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int style ```
const char* q_scilexerpascal_description(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_compact(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_preprocessor(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, bool enabled ```
void q_scilexerpascal_set_smart_highlighting(void* self, bool enabled);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_smart_highlighting(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QSettings*, const char*) ```
void q_scilexerpascal_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Base class method implementation
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QSettings*, const char*) ```
void q_scilexerpascal_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Base class method implementation
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpascal_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpascal_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_end1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_start1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self ```
QsciAbstractAPIs* q_scilexerpascal_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self ```
QsciScintilla* q_scilexerpascal_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QsciAbstractAPIs* apis ```
void q_scilexerpascal_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QColor* c ```
void q_scilexerpascal_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QFont* f ```
void q_scilexerpascal_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QColor* c ```
void q_scilexerpascal_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs ```
bool q_scilexerpascal_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs ```
bool q_scilexerpascal_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, bool eolfilled, int style ```
void q_scilexerpascal_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool, int) ```
void q_scilexerpascal_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QFont*, int) ```
void q_scilexerpascal_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, const char* prop, const char* val ```
void q_scilexerpascal_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, const char*, const char*) ```
void q_scilexerpascal_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPascal* self, char* name ```
void q_scilexerpascal_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPascal* self, bool b ```
bool q_scilexerpascal_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPascal* self ```
QThread* q_scilexerpascal_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPascal* self, QThread* thread ```
bool q_scilexerpascal_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPascal* self, int interval ```
int32_t q_scilexerpascal_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPascal* self, int id ```
void q_scilexerpascal_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPascal* self, enum Qt__TimerId id ```
void q_scilexerpascal_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPascal* self ```
libqt_list /* of QObject* */ q_scilexerpascal_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPascal* self, QObject* parent ```
void q_scilexerpascal_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPascal* self, QObject* filterObj ```
void q_scilexerpascal_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPascal* self, QObject* obj ```
void q_scilexerpascal_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpascal_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPascal* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpascal_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpascal_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpascal_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPascal* self, const char* name, QVariant* value ```
bool q_scilexerpascal_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPascal* self, const char* name ```
QVariant* q_scilexerpascal_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPascal* self ```
const char** q_scilexerpascal_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPascal* self ```
QBindingStorage* q_scilexerpascal_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPascal* self ```
const QBindingStorage* q_scilexerpascal_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*) ```
void q_scilexerpascal_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPascal* self, const char* classname ```
bool q_scilexerpascal_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPascal* self, QThread* thread, Disambiguated_t* param2 ```
bool q_scilexerpascal_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPascal* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpascal_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpascal_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPascal* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpascal_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self, QObject* param1 ```
void q_scilexerpascal_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QObject*) ```
void q_scilexerpascal_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* (*slot)() ```
void q_scilexerpascal_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)() ```
void q_scilexerpascal_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_default_color2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_color2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_qbase_default_font2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_font2(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_default_paper2(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_paper2(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QsciScintilla* editor ```
void q_scilexerpascal_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QsciScintilla* editor ```
void q_scilexerpascal_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QsciScintilla*) ```
void q_scilexerpascal_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* (*slot)() ```
void q_scilexerpascal_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int autoindentstyle ```
void q_scilexerpascal_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int autoindentstyle ```
void q_scilexerpascal_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, bool eoffill, int style ```
void q_scilexerpascal_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool eoffill, int style ```
void q_scilexerpascal_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool, int) ```
void q_scilexerpascal_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QFont*, int) ```
void q_scilexerpascal_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
bool q_scilexerpascal_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
bool q_scilexerpascal_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QEvent*) ```
void q_scilexerpascal_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* watched, QEvent* event ```
bool q_scilexerpascal_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* watched, QEvent* event ```
bool q_scilexerpascal_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QObject*, QEvent*) ```
void q_scilexerpascal_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QTimerEvent* event ```
void q_scilexerpascal_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QTimerEvent* event ```
void q_scilexerpascal_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QTimerEvent*) ```
void q_scilexerpascal_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QChildEvent* event ```
void q_scilexerpascal_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QChildEvent* event ```
void q_scilexerpascal_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QChildEvent*) ```
void q_scilexerpascal_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
void q_scilexerpascal_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
void q_scilexerpascal_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QEvent*) ```
void q_scilexerpascal_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* text ```
char* q_scilexerpascal_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* text ```
char* q_scilexerpascal_qbase_text_as_bytes(void* self, const char* text);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, char* (*slot)(QsciLexerPascal*, const char*) ```
void q_scilexerpascal_on_text_as_bytes(void* self, char* (*slot)(void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* bytes, int size ```
const char* q_scilexerpascal_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* bytes, int size ```
const char* q_scilexerpascal_qbase_bytes_as_text(void* self, const char* bytes, int size);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* (*slot)(QsciLexerPascal*, const char*, int) ```
void q_scilexerpascal_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* (*slot)() ```
void q_scilexerpascal_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* signal ```
int32_t q_scilexerpascal_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* signal ```
int32_t q_scilexerpascal_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)(QsciLexerPascal*, const char*) ```
void q_scilexerpascal_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
bool q_scilexerpascal_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
bool q_scilexerpascal_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, const char*) ```
void q_scilexerpascal_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerPascal.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_delete(void* self);

typedef enum {
    QSCILEXERPASCAL__DEFAULT = 0,
    QSCILEXERPASCAL__IDENTIFIER = 1,
    QSCILEXERPASCAL__COMMENT = 2,
    QSCILEXERPASCAL__COMMENTPARENTHESIS = 3,
    QSCILEXERPASCAL__COMMENTLINE = 4,
    QSCILEXERPASCAL__PREPROCESSOR = 5,
    QSCILEXERPASCAL__PREPROCESSORPARENTHESIS = 6,
    QSCILEXERPASCAL__NUMBER = 7,
    QSCILEXERPASCAL__HEXNUMBER = 8,
    QSCILEXERPASCAL__KEYWORD = 9,
    QSCILEXERPASCAL__SINGLEQUOTEDSTRING = 10,
    QSCILEXERPASCAL__UNCLOSEDSTRING = 11,
    QSCILEXERPASCAL__CHARACTER = 12,
    QSCILEXERPASCAL__OPERATOR = 13,
    QSCILEXERPASCAL__ASM = 14
} QsciLexerPascal__;

#endif
