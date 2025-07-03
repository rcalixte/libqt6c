#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCOFFEESCRIPT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsettings.h"
#include <string.h>

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html

/// q_scilexercoffeescript_new constructs a new QsciLexerCoffeeScript object.
///
///
QsciLexerCoffeeScript* q_scilexercoffeescript_new();

/// q_scilexercoffeescript_new2 constructs a new QsciLexerCoffeeScript object.
///
/// ``` QObject* parent ```
QsciLexerCoffeeScript* q_scilexercoffeescript_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCoffeeScript* self ```
const QMetaObject* q_scilexercoffeescript_meta_object(void* self);

/// ``` QsciLexerCoffeeScript* self, const char* param1 ```
void* q_scilexercoffeescript_metacast(void* self, const char* param1);

/// ``` QsciLexerCoffeeScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercoffeescript_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)(QsciLexerCoffeeScript*, enum QMetaObject__Call, int, void*) ```
void q_scilexercoffeescript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercoffeescript_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercoffeescript_tr(const char* s);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_language(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_lexer(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char** q_scilexercoffeescript_auto_completion_word_separators(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_end(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_start(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_start_keyword(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_brace_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_word_characters(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_color(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_default_eol_fill(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_default_font(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_paper(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int set ```
const char* q_scilexercoffeescript_keywords(void* self, int set);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
const char* q_scilexercoffeescript_description(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_refresh_properties(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_dollars_allowed(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, bool allowed ```
void q_scilexercoffeescript_set_dollars_allowed(void* self, bool allowed);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_fold_comments(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, bool fold ```
void q_scilexercoffeescript_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_fold_compact(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, bool fold ```
void q_scilexercoffeescript_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_style_preprocessor(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, bool style ```
void q_scilexercoffeescript_set_style_preprocessor(void* self, bool style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QSettings*, const char*) ```
void q_scilexercoffeescript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QSettings*, const char*) ```
void q_scilexercoffeescript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercoffeescript_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercoffeescript_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_end1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_start1(void* self, int* style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self ```
QsciAbstractAPIs* q_scilexercoffeescript_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self ```
QsciScintilla* q_scilexercoffeescript_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QsciAbstractAPIs* apis ```
void q_scilexercoffeescript_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c ```
void q_scilexercoffeescript_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QFont* f ```
void q_scilexercoffeescript_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c ```
void q_scilexercoffeescript_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs ```
bool q_scilexercoffeescript_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs ```
bool q_scilexercoffeescript_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercoffeescript_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, bool eolfilled, int style ```
void q_scilexercoffeescript_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercoffeescript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercoffeescript_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercoffeescript_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, const char* prop, const char* val ```
void q_scilexercoffeescript_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercoffeescript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCoffeeScript* self, char* name ```
void q_scilexercoffeescript_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCoffeeScript* self, bool b ```
bool q_scilexercoffeescript_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCoffeeScript* self ```
QThread* q_scilexercoffeescript_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCoffeeScript* self, QThread* thread ```
void q_scilexercoffeescript_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCoffeeScript* self, int interval ```
int32_t q_scilexercoffeescript_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCoffeeScript* self, int id ```
void q_scilexercoffeescript_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCoffeeScript* self ```
libqt_list /* of QObject* */ q_scilexercoffeescript_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCoffeeScript* self, QObject* parent ```
void q_scilexercoffeescript_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCoffeeScript* self, QObject* filterObj ```
void q_scilexercoffeescript_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCoffeeScript* self, QObject* obj ```
void q_scilexercoffeescript_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercoffeescript_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCoffeeScript* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercoffeescript_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercoffeescript_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercoffeescript_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCoffeeScript* self, const char* name, QVariant* value ```
bool q_scilexercoffeescript_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCoffeeScript* self, const char* name ```
QVariant* q_scilexercoffeescript_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCoffeeScript* self ```
const char** q_scilexercoffeescript_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCoffeeScript* self ```
QBindingStorage* q_scilexercoffeescript_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCoffeeScript* self ```
const QBindingStorage* q_scilexercoffeescript_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QObject*) ```
void q_scilexercoffeescript_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCoffeeScript* self, const char* classname ```
bool q_scilexercoffeescript_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCoffeeScript* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercoffeescript_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercoffeescript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCoffeeScript* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercoffeescript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self, QObject* param1 ```
void q_scilexercoffeescript_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercoffeescript_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* (*slot)() ```
void q_scilexercoffeescript_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)() ```
void q_scilexercoffeescript_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QsciScintilla* editor ```
void q_scilexercoffeescript_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QsciScintilla* editor ```
void q_scilexercoffeescript_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QsciScintilla*) ```
void q_scilexercoffeescript_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int autoindentstyle ```
void q_scilexercoffeescript_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int autoindentstyle ```
void q_scilexercoffeescript_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QColor*, int) ```
void q_scilexercoffeescript_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool eoffill, int style ```
void q_scilexercoffeescript_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool eoffill, int style ```
void q_scilexercoffeescript_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, bool, int) ```
void q_scilexercoffeescript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QFont*, int) ```
void q_scilexercoffeescript_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexer.html)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QColor*, int) ```
void q_scilexercoffeescript_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
bool q_scilexercoffeescript_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
bool q_scilexercoffeescript_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QEvent*) ```
void q_scilexercoffeescript_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* watched, QEvent* event ```
bool q_scilexercoffeescript_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* watched, QEvent* event ```
bool q_scilexercoffeescript_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QObject*, QEvent*) ```
void q_scilexercoffeescript_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QTimerEvent* event ```
void q_scilexercoffeescript_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QTimerEvent* event ```
void q_scilexercoffeescript_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QTimerEvent*) ```
void q_scilexercoffeescript_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QChildEvent* event ```
void q_scilexercoffeescript_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QChildEvent* event ```
void q_scilexercoffeescript_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QChildEvent*) ```
void q_scilexercoffeescript_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
void q_scilexercoffeescript_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
void q_scilexercoffeescript_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QEvent*) ```
void q_scilexercoffeescript_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* (*slot)() ```
void q_scilexercoffeescript_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* signal ```
int32_t q_scilexercoffeescript_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* signal ```
int32_t q_scilexercoffeescript_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)(QsciLexerCoffeeScript*, const char*) ```
void q_scilexercoffeescript_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
bool q_scilexercoffeescript_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
bool q_scilexercoffeescript_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QObject*, const char*) ```
void q_scilexercoffeescript_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciLexerCoffeeScript.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_delete(void* self);

typedef enum {
    QSCILEXERCOFFEESCRIPT__DEFAULT = 0,
    QSCILEXERCOFFEESCRIPT__COMMENT = 1,
    QSCILEXERCOFFEESCRIPT__COMMENTLINE = 2,
    QSCILEXERCOFFEESCRIPT__COMMENTDOC = 3,
    QSCILEXERCOFFEESCRIPT__NUMBER = 4,
    QSCILEXERCOFFEESCRIPT__KEYWORD = 5,
    QSCILEXERCOFFEESCRIPT__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERCOFFEESCRIPT__SINGLEQUOTEDSTRING = 7,
    QSCILEXERCOFFEESCRIPT__UUID = 8,
    QSCILEXERCOFFEESCRIPT__PREPROCESSOR = 9,
    QSCILEXERCOFFEESCRIPT__OPERATOR = 10,
    QSCILEXERCOFFEESCRIPT__IDENTIFIER = 11,
    QSCILEXERCOFFEESCRIPT__UNCLOSEDSTRING = 12,
    QSCILEXERCOFFEESCRIPT__VERBATIMSTRING = 13,
    QSCILEXERCOFFEESCRIPT__REGEX = 14,
    QSCILEXERCOFFEESCRIPT__COMMENTLINEDOC = 15,
    QSCILEXERCOFFEESCRIPT__KEYWORDSET2 = 16,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORD = 17,
    QSCILEXERCOFFEESCRIPT__COMMENTDOCKEYWORDERROR = 18,
    QSCILEXERCOFFEESCRIPT__GLOBALCLASS = 19,
    QSCILEXERCOFFEESCRIPT__COMMENTBLOCK = 22,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEX = 23,
    QSCILEXERCOFFEESCRIPT__BLOCKREGEXCOMMENT = 24,
    QSCILEXERCOFFEESCRIPT__INSTANCEPROPERTY = 25
} QsciLexerCoffeeScript__;

#endif
