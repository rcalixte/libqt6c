#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMAKEFILE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERMAKEFILE_H

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

/// https://doc.qt.io/qt-6/qscilexermakefile.html

/// q_scilexermakefile_new constructs a new QsciLexerMakefile object.
///
///
QsciLexerMakefile* q_scilexermakefile_new();

/// q_scilexermakefile_new2 constructs a new QsciLexerMakefile object.
///
/// ``` QObject* parent ```
QsciLexerMakefile* q_scilexermakefile_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerMakefile* self ```
QMetaObject* q_scilexermakefile_meta_object(void* self);

/// ``` QsciLexerMakefile* self, const char* param1 ```
void* q_scilexermakefile_metacast(void* self, const char* param1);

/// ``` QsciLexerMakefile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermakefile_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)(QsciLexerMakefile*, enum QMetaObject__Call, int, void*) ```
void q_scilexermakefile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerMakefile* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexermakefile_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexermakefile_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#language)
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#lexer)
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#wordCharacters)
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_word_characters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#defaultColor)
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#defaultEolFill)
///
/// ``` QsciLexerMakefile* self, int style ```
bool q_scilexermakefile_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#defaultFont)
///
/// ``` QsciLexerMakefile* self, int style ```
QFont* q_scilexermakefile_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#defaultPaper)
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexermakefile.html#description)
///
/// ``` QsciLexerMakefile* self, int style ```
const char* q_scilexermakefile_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexermakefile_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexermakefile_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerMakefile* self ```
QsciAbstractAPIs* q_scilexermakefile_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerMakefile* self ```
QsciScintilla* q_scilexermakefile_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerMakefile* self, QsciAbstractAPIs* apis ```
void q_scilexermakefile_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerMakefile* self, QColor* c ```
void q_scilexermakefile_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerMakefile* self, QFont* f ```
void q_scilexermakefile_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerMakefile* self, QColor* c ```
void q_scilexermakefile_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMakefile* self, QSettings* qs ```
bool q_scilexermakefile_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMakefile* self, QSettings* qs ```
bool q_scilexermakefile_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermakefile_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerMakefile* self, bool eolfilled, int style ```
void q_scilexermakefile_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexermakefile_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerMakefile* self, QFont* f, int style ```
void q_scilexermakefile_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexermakefile_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexermakefile_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerMakefile* self, const char* prop, const char* val ```
void q_scilexermakefile_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexermakefile_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerMakefile* self, const char* name ```
void q_scilexermakefile_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerMakefile* self, bool b ```
bool q_scilexermakefile_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerMakefile* self ```
QThread* q_scilexermakefile_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerMakefile* self, QThread* thread ```
void q_scilexermakefile_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMakefile* self, int interval ```
int32_t q_scilexermakefile_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerMakefile* self, int id ```
void q_scilexermakefile_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerMakefile* self ```
libqt_list /* of QObject* */ q_scilexermakefile_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerMakefile* self, QObject* parent ```
void q_scilexermakefile_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerMakefile* self, QObject* filterObj ```
void q_scilexermakefile_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerMakefile* self, QObject* obj ```
void q_scilexermakefile_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexermakefile_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMakefile* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexermakefile_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexermakefile_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexermakefile_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerMakefile* self, const char* name, QVariant* value ```
bool q_scilexermakefile_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerMakefile* self, const char* name ```
QVariant* q_scilexermakefile_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerMakefile* self ```
const char** q_scilexermakefile_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMakefile* self ```
QBindingStorage* q_scilexermakefile_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerMakefile* self ```
QBindingStorage* q_scilexermakefile_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerMakefile* self, void (*slot)(QObject*) ```
void q_scilexermakefile_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerMakefile* self ```
QObject* q_scilexermakefile_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerMakefile* self, const char* classname ```
bool q_scilexermakefile_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerMakefile* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexermakefile_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermakefile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerMakefile* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexermakefile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerMakefile* self, QObject* param1 ```
void q_scilexermakefile_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerMakefile* self, void (*slot)(QObject*, QObject*) ```
void q_scilexermakefile_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
const char* q_scilexermakefile_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* (*slot)() ```
void q_scilexermakefile_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
const char** q_scilexermakefile_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
const char** q_scilexermakefile_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char** (*slot)() ```
void q_scilexermakefile_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* (*slot)(QsciLexerMakefile*, int*) ```
void q_scilexermakefile_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* (*slot)(QsciLexerMakefile*, int*) ```
void q_scilexermakefile_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int* style ```
const char* q_scilexermakefile_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* (*slot)(QsciLexerMakefile*, int*) ```
void q_scilexermakefile_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
bool q_scilexermakefile_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)() ```
void q_scilexermakefile_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
bool q_scilexermakefile_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
bool q_scilexermakefile_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QFont* q_scilexermakefile_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QFont* q_scilexermakefile_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QFont* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int set ```
const char* q_scilexermakefile_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int set ```
const char* q_scilexermakefile_qbase_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_keywords(void* self, const char* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QFont* q_scilexermakefile_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QFont* q_scilexermakefile_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QFont* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int style ```
QColor* q_scilexermakefile_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QsciScintilla* editor ```
void q_scilexermakefile_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QsciScintilla* editor ```
void q_scilexermakefile_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QsciScintilla*) ```
void q_scilexermakefile_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_qbase_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)() ```
void q_scilexermakefile_on_refresh_properties(void* self, void (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, int autoindentstyle ```
void q_scilexermakefile_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int autoindentstyle ```
void q_scilexermakefile_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, int) ```
void q_scilexermakefile_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QColor*, int) ```
void q_scilexermakefile_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool eoffill, int style ```
void q_scilexermakefile_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool eoffill, int style ```
void q_scilexermakefile_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, bool, int) ```
void q_scilexermakefile_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QFont* f, int style ```
void q_scilexermakefile_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QFont* f, int style ```
void q_scilexermakefile_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QFont*, int) ```
void q_scilexermakefile_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QColor* c, int style ```
void q_scilexermakefile_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QColor*, int) ```
void q_scilexermakefile_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_qbase_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, QSettings*, const char*) ```
void q_scilexermakefile_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QSettings* qs, const char* prefix ```
bool q_scilexermakefile_qbase_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, QSettings*, const char*) ```
void q_scilexermakefile_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QEvent* event ```
bool q_scilexermakefile_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QEvent* event ```
bool q_scilexermakefile_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, QEvent*) ```
void q_scilexermakefile_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QObject* watched, QEvent* event ```
bool q_scilexermakefile_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QObject* watched, QEvent* event ```
bool q_scilexermakefile_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, QObject*, QEvent*) ```
void q_scilexermakefile_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QTimerEvent* event ```
void q_scilexermakefile_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QTimerEvent* event ```
void q_scilexermakefile_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QTimerEvent*) ```
void q_scilexermakefile_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QChildEvent* event ```
void q_scilexermakefile_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QChildEvent* event ```
void q_scilexermakefile_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QChildEvent*) ```
void q_scilexermakefile_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QEvent* event ```
void q_scilexermakefile_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QEvent* event ```
void q_scilexermakefile_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QEvent*) ```
void q_scilexermakefile_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
void q_scilexermakefile_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
void q_scilexermakefile_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QMetaMethod*) ```
void q_scilexermakefile_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
void q_scilexermakefile_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
void q_scilexermakefile_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, void (*slot)(QsciLexerMakefile*, QMetaMethod*) ```
void q_scilexermakefile_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
QObject* q_scilexermakefile_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
QObject* q_scilexermakefile_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QObject* (*slot)() ```
void q_scilexermakefile_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self ```
int32_t q_scilexermakefile_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)() ```
void q_scilexermakefile_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* signal ```
int32_t q_scilexermakefile_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, const char* signal ```
int32_t q_scilexermakefile_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, int32_t (*slot)(QsciLexerMakefile*, const char*) ```
void q_scilexermakefile_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
bool q_scilexermakefile_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, QMetaMethod* signal ```
bool q_scilexermakefile_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerMakefile* self, bool (*slot)(QsciLexerMakefile*, QMetaMethod*) ```
void q_scilexermakefile_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerMakefile* self ```
void q_scilexermakefile_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexermakefile.html#types

typedef enum {
    QSCILEXERMAKEFILE__DEFAULT = 0,
    QSCILEXERMAKEFILE__COMMENT = 1,
    QSCILEXERMAKEFILE__PREPROCESSOR = 2,
    QSCILEXERMAKEFILE__VARIABLE = 3,
    QSCILEXERMAKEFILE__OPERATOR = 4,
    QSCILEXERMAKEFILE__TARGET = 5,
    QSCILEXERMAKEFILE__ERROR = 9
} QsciLexerMakefile__;

#endif
