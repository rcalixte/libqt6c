#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMATLAB_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMATLAB_H

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

/// https://doc.qt.io/qt-6/qscilexermatlab.html

/// q_scilexermatlab_new constructs a new QsciLexerMatlab object.
///
///
QsciLexerMatlab* q_scilexermatlab_new();

/// q_scilexermatlab_new2 constructs a new QsciLexerMatlab object.
///
/// ``` QObject* parent ```
QsciLexerMatlab* q_scilexermatlab_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerMatlab* self ```
QMetaObject* q_scilexermatlab_meta_object(void* self);

/// ``` QsciLexerMatlab* self, const char* param1 ```
void* q_scilexermatlab_metacast(void* self, const char* param1);

/// ``` QsciLexerMatlab* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermatlab_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)(QsciLexerMatlab*, enum QMetaObject__Call, int, void*) ```
void q_scilexermatlab_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerMatlab* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermatlab_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexermatlab_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#language)
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#lexer)
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#defaultColor)
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#defaultFont)
///
/// ``` QsciLexerMatlab* self, int style ```
QFont* q_scilexermatlab_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#keywords)
///
/// ``` QsciLexerMatlab* self, int set ```
const char* q_scilexermatlab_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermatlab.html#description)
///
/// ``` QsciLexerMatlab* self, int style ```
const char* q_scilexermatlab_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexermatlab_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexermatlab_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerMatlab* self ```
QsciAbstractAPIs* q_scilexermatlab_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerMatlab* self ```
QColor* q_scilexermatlab_default_paper(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerMatlab* self ```
QsciScintilla* q_scilexermatlab_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerMatlab* self, QsciAbstractAPIs* apis ```
void q_scilexermatlab_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerMatlab* self, QColor* c ```
void q_scilexermatlab_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerMatlab* self, QFont* f ```
void q_scilexermatlab_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerMatlab* self, QColor* c ```
void q_scilexermatlab_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMatlab* self, QSettings* qs ```
bool q_scilexermatlab_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMatlab* self, QSettings* qs ```
bool q_scilexermatlab_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermatlab_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerMatlab* self, bool eolfilled, int style ```
void q_scilexermatlab_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexermatlab_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerMatlab* self, QFont* f, int style ```
void q_scilexermatlab_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexermatlab_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermatlab_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerMatlab* self, const char* prop, const char* val ```
void q_scilexermatlab_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexermatlab_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerMatlab* self, const char* name ```
void q_scilexermatlab_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerMatlab* self, bool b ```
bool q_scilexermatlab_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerMatlab* self ```
QThread* q_scilexermatlab_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerMatlab* self, QThread* thread ```
void q_scilexermatlab_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMatlab* self, int interval ```
int32_t q_scilexermatlab_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerMatlab* self, int id ```
void q_scilexermatlab_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerMatlab* self ```
libqt_list /* of QObject* */ q_scilexermatlab_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerMatlab* self, QObject* parent ```
void q_scilexermatlab_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerMatlab* self, QObject* filterObj ```
void q_scilexermatlab_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerMatlab* self, QObject* obj ```
void q_scilexermatlab_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexermatlab_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMatlab* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexermatlab_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexermatlab_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexermatlab_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerMatlab* self, const char* name, QVariant* value ```
bool q_scilexermatlab_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerMatlab* self, const char* name ```
QVariant* q_scilexermatlab_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerMatlab* self ```
const char** q_scilexermatlab_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMatlab* self ```
QBindingStorage* q_scilexermatlab_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMatlab* self ```
QBindingStorage* q_scilexermatlab_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerMatlab* self, void (*slot)(QObject*) ```
void q_scilexermatlab_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerMatlab* self ```
QObject* q_scilexermatlab_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerMatlab* self, const char* classname ```
bool q_scilexermatlab_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMatlab* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexermatlab_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermatlab_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMatlab* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermatlab_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMatlab* self, QObject* param1 ```
void q_scilexermatlab_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerMatlab* self, void (*slot)(QObject*, QObject*) ```
void q_scilexermatlab_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* (*slot)() ```
void q_scilexermatlab_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char** q_scilexermatlab_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char** q_scilexermatlab_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char** (*slot)() ```
void q_scilexermatlab_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* (*slot)(QsciLexerMatlab*, int*) ```
void q_scilexermatlab_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* (*slot)(QsciLexerMatlab*, int*) ```
void q_scilexermatlab_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int* style ```
const char* q_scilexermatlab_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* (*slot)(QsciLexerMatlab*, int*) ```
void q_scilexermatlab_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
bool q_scilexermatlab_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)() ```
void q_scilexermatlab_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
bool q_scilexermatlab_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
bool q_scilexermatlab_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QFont* q_scilexermatlab_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QFont* q_scilexermatlab_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QFont* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
bool q_scilexermatlab_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
bool q_scilexermatlab_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_default_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QFont* q_scilexermatlab_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QFont* q_scilexermatlab_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QFont* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int style ```
QColor* q_scilexermatlab_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QsciScintilla* editor ```
void q_scilexermatlab_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QsciScintilla* editor ```
void q_scilexermatlab_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QsciScintilla*) ```
void q_scilexermatlab_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_qbase_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)() ```
void q_scilexermatlab_on_refresh_properties(void* self, void (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
const char* q_scilexermatlab_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* (*slot)() ```
void q_scilexermatlab_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, int autoindentstyle ```
void q_scilexermatlab_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int autoindentstyle ```
void q_scilexermatlab_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, int) ```
void q_scilexermatlab_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QColor*, int) ```
void q_scilexermatlab_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool eoffill, int style ```
void q_scilexermatlab_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool eoffill, int style ```
void q_scilexermatlab_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, bool, int) ```
void q_scilexermatlab_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QFont* f, int style ```
void q_scilexermatlab_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QFont* f, int style ```
void q_scilexermatlab_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QFont*, int) ```
void q_scilexermatlab_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QColor* c, int style ```
void q_scilexermatlab_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QColor*, int) ```
void q_scilexermatlab_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_qbase_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, QSettings*, const char*) ```
void q_scilexermatlab_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QSettings* qs, const char* prefix ```
bool q_scilexermatlab_qbase_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, QSettings*, const char*) ```
void q_scilexermatlab_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QEvent* event ```
bool q_scilexermatlab_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QEvent* event ```
bool q_scilexermatlab_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, QEvent*) ```
void q_scilexermatlab_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QObject* watched, QEvent* event ```
bool q_scilexermatlab_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QObject* watched, QEvent* event ```
bool q_scilexermatlab_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, QObject*, QEvent*) ```
void q_scilexermatlab_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QTimerEvent* event ```
void q_scilexermatlab_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QTimerEvent* event ```
void q_scilexermatlab_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QTimerEvent*) ```
void q_scilexermatlab_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QChildEvent* event ```
void q_scilexermatlab_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QChildEvent* event ```
void q_scilexermatlab_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QChildEvent*) ```
void q_scilexermatlab_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QEvent* event ```
void q_scilexermatlab_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QEvent* event ```
void q_scilexermatlab_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QEvent*) ```
void q_scilexermatlab_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
void q_scilexermatlab_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
void q_scilexermatlab_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QMetaMethod*) ```
void q_scilexermatlab_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
void q_scilexermatlab_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
void q_scilexermatlab_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, void (*slot)(QsciLexerMatlab*, QMetaMethod*) ```
void q_scilexermatlab_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
QObject* q_scilexermatlab_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
QObject* q_scilexermatlab_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QObject* (*slot)() ```
void q_scilexermatlab_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self ```
int32_t q_scilexermatlab_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)() ```
void q_scilexermatlab_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* signal ```
int32_t q_scilexermatlab_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, const char* signal ```
int32_t q_scilexermatlab_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, int32_t (*slot)(QsciLexerMatlab*, const char*) ```
void q_scilexermatlab_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
bool q_scilexermatlab_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, QMetaMethod* signal ```
bool q_scilexermatlab_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMatlab* self, bool (*slot)(QsciLexerMatlab*, QMetaMethod*) ```
void q_scilexermatlab_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerMatlab* self ```
void q_scilexermatlab_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexermatlab.html#types

typedef enum {
    QSCILEXERMATLAB__DEFAULT = 0,
    QSCILEXERMATLAB__COMMENT = 1,
    QSCILEXERMATLAB__COMMAND = 2,
    QSCILEXERMATLAB__NUMBER = 3,
    QSCILEXERMATLAB__KEYWORD = 4,
    QSCILEXERMATLAB__SINGLEQUOTEDSTRING = 5,
    QSCILEXERMATLAB__OPERATOR = 6,
    QSCILEXERMATLAB__IDENTIFIER = 7,
    QSCILEXERMATLAB__DOUBLEQUOTEDSTRING = 8
} QsciLexerMatlab__;

#endif
