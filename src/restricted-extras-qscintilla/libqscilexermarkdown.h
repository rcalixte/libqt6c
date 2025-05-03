#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMARKDOWN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMARKDOWN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsettings.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qscilexermarkdown.html

/// q_scilexermarkdown_new constructs a new QsciLexerMarkdown object.
///
///
QsciLexerMarkdown* q_scilexermarkdown_new();

/// q_scilexermarkdown_new2 constructs a new QsciLexerMarkdown object.
///
/// ``` QObject* parent ```
QsciLexerMarkdown* q_scilexermarkdown_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerMarkdown* self ```
QMetaObject* q_scilexermarkdown_meta_object(void* self);

/// ``` QsciLexerMarkdown* self, const char* param1 ```
void* q_scilexermarkdown_metacast(void* self, const char* param1);

/// ``` QsciLexerMarkdown* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermarkdown_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)(QsciLexerMarkdown*, enum QMetaObject__Call, int, void*) ```
void q_scilexermarkdown_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerMarkdown* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermarkdown_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexermarkdown_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#language)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#lexer)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultColor)
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultFont)
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#defaultPaper)
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermarkdown.html#description)
///
/// ``` QsciLexerMarkdown* self, int style ```
const char* q_scilexermarkdown_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexermarkdown_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexermarkdown_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerMarkdown* self ```
QsciAbstractAPIs* q_scilexermarkdown_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerMarkdown* self ```
QsciScintilla* q_scilexermarkdown_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerMarkdown* self, QsciAbstractAPIs* apis ```
void q_scilexermarkdown_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerMarkdown* self, QColor* c ```
void q_scilexermarkdown_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerMarkdown* self, QFont* f ```
void q_scilexermarkdown_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerMarkdown* self, QColor* c ```
void q_scilexermarkdown_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs ```
bool q_scilexermarkdown_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs ```
bool q_scilexermarkdown_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermarkdown_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerMarkdown* self, bool eolfilled, int style ```
void q_scilexermarkdown_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexermarkdown_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexermarkdown_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermarkdown_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerMarkdown* self, const char* prop, const char* val ```
void q_scilexermarkdown_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexermarkdown_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerMarkdown* self, char* name ```
void q_scilexermarkdown_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerMarkdown* self, bool b ```
bool q_scilexermarkdown_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerMarkdown* self ```
QThread* q_scilexermarkdown_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerMarkdown* self, QThread* thread ```
void q_scilexermarkdown_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMarkdown* self, int interval ```
int32_t q_scilexermarkdown_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerMarkdown* self, int id ```
void q_scilexermarkdown_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerMarkdown* self ```
libqt_list /* of QObject* */ q_scilexermarkdown_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerMarkdown* self, QObject* parent ```
void q_scilexermarkdown_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerMarkdown* self, QObject* filterObj ```
void q_scilexermarkdown_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerMarkdown* self, QObject* obj ```
void q_scilexermarkdown_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexermarkdown_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMarkdown* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexermarkdown_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexermarkdown_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexermarkdown_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerMarkdown* self, const char* name, QVariant* value ```
bool q_scilexermarkdown_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerMarkdown* self, const char* name ```
QVariant* q_scilexermarkdown_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMarkdown* self ```
QBindingStorage* q_scilexermarkdown_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMarkdown* self ```
QBindingStorage* q_scilexermarkdown_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QObject*) ```
void q_scilexermarkdown_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerMarkdown* self, const char* classname ```
bool q_scilexermarkdown_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMarkdown* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexermarkdown_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermarkdown_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMarkdown* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermarkdown_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMarkdown* self, QObject* param1 ```
void q_scilexermarkdown_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QObject*, QObject*) ```
void q_scilexermarkdown_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)() ```
void q_scilexermarkdown_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char** q_scilexermarkdown_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char** (*slot)() ```
void q_scilexermarkdown_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int* style ```
const char* q_scilexermarkdown_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int*) ```
void q_scilexermarkdown_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
bool q_scilexermarkdown_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)() ```
void q_scilexermarkdown_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int set ```
const char* q_scilexermarkdown_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int set ```
const char* q_scilexermarkdown_qbase_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_keywords(void* self, const char* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
bool q_scilexermarkdown_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QFont* q_scilexermarkdown_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int style ```
QColor* q_scilexermarkdown_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QsciScintilla* editor ```
void q_scilexermarkdown_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QsciScintilla* editor ```
void q_scilexermarkdown_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QsciScintilla*) ```
void q_scilexermarkdown_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_qbase_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)() ```
void q_scilexermarkdown_on_refresh_properties(void* self, void (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
const char* q_scilexermarkdown_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* (*slot)() ```
void q_scilexermarkdown_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int autoindentstyle ```
void q_scilexermarkdown_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int autoindentstyle ```
void q_scilexermarkdown_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, int) ```
void q_scilexermarkdown_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QColor*, int) ```
void q_scilexermarkdown_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool eoffill, int style ```
void q_scilexermarkdown_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool eoffill, int style ```
void q_scilexermarkdown_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, bool, int) ```
void q_scilexermarkdown_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QFont* f, int style ```
void q_scilexermarkdown_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QFont*, int) ```
void q_scilexermarkdown_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QColor* c, int style ```
void q_scilexermarkdown_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QColor*, int) ```
void q_scilexermarkdown_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_qbase_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QSettings*, const char*) ```
void q_scilexermarkdown_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QSettings* qs, const char* prefix ```
bool q_scilexermarkdown_qbase_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QSettings*, const char*) ```
void q_scilexermarkdown_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
bool q_scilexermarkdown_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
bool q_scilexermarkdown_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QEvent*) ```
void q_scilexermarkdown_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* watched, QEvent* event ```
bool q_scilexermarkdown_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* watched, QEvent* event ```
bool q_scilexermarkdown_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QObject*, QEvent*) ```
void q_scilexermarkdown_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QTimerEvent* event ```
void q_scilexermarkdown_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QTimerEvent* event ```
void q_scilexermarkdown_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QTimerEvent*) ```
void q_scilexermarkdown_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QChildEvent* event ```
void q_scilexermarkdown_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QChildEvent* event ```
void q_scilexermarkdown_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QChildEvent*) ```
void q_scilexermarkdown_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
void q_scilexermarkdown_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QEvent* event ```
void q_scilexermarkdown_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QEvent*) ```
void q_scilexermarkdown_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
void q_scilexermarkdown_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, void (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
QObject* q_scilexermarkdown_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QObject* (*slot)() ```
void q_scilexermarkdown_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self ```
int32_t q_scilexermarkdown_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)() ```
void q_scilexermarkdown_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* signal ```
int32_t q_scilexermarkdown_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, const char* signal ```
int32_t q_scilexermarkdown_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, int32_t (*slot)(QsciLexerMarkdown*, const char*) ```
void q_scilexermarkdown_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
bool q_scilexermarkdown_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, QMetaMethod* signal ```
bool q_scilexermarkdown_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMarkdown* self, bool (*slot)(QsciLexerMarkdown*, QMetaMethod*) ```
void q_scilexermarkdown_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerMarkdown* self ```
void q_scilexermarkdown_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexermarkdown.html#types

typedef enum {
    QSCILEXERMARKDOWN__DEFAULT = 0,
    QSCILEXERMARKDOWN__SPECIAL = 1,
    QSCILEXERMARKDOWN__STRONGEMPHASISASTERISKS = 2,
    QSCILEXERMARKDOWN__STRONGEMPHASISUNDERSCORES = 3,
    QSCILEXERMARKDOWN__EMPHASISASTERISKS = 4,
    QSCILEXERMARKDOWN__EMPHASISUNDERSCORES = 5,
    QSCILEXERMARKDOWN__HEADER1 = 6,
    QSCILEXERMARKDOWN__HEADER2 = 7,
    QSCILEXERMARKDOWN__HEADER3 = 8,
    QSCILEXERMARKDOWN__HEADER4 = 9,
    QSCILEXERMARKDOWN__HEADER5 = 10,
    QSCILEXERMARKDOWN__HEADER6 = 11,
    QSCILEXERMARKDOWN__PRECHAR = 12,
    QSCILEXERMARKDOWN__UNORDEREDLISTITEM = 13,
    QSCILEXERMARKDOWN__ORDEREDLISTITEM = 14,
    QSCILEXERMARKDOWN__BLOCKQUOTE = 15,
    QSCILEXERMARKDOWN__STRIKEOUT = 16,
    QSCILEXERMARKDOWN__HORIZONTALRULE = 17,
    QSCILEXERMARKDOWN__LINK = 18,
    QSCILEXERMARKDOWN__CODEBACKTICKS = 19,
    QSCILEXERMARKDOWN__CODEDOUBLEBACKTICKS = 20,
    QSCILEXERMARKDOWN__CODEBLOCK = 21
} QsciLexerMarkdown__;

#endif
