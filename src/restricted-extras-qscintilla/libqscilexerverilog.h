#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVERILOG_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERVERILOG_H

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

/// https://doc.qt.io/qt-6/qscilexerverilog.html

/// q_scilexerverilog_new constructs a new QsciLexerVerilog object.
///
///
QsciLexerVerilog* q_scilexerverilog_new();

/// q_scilexerverilog_new2 constructs a new QsciLexerVerilog object.
///
/// ``` QObject* parent ```
QsciLexerVerilog* q_scilexerverilog_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerVerilog* self ```
QMetaObject* q_scilexerverilog_meta_object(void* self);

/// ``` QsciLexerVerilog* self, const char* param1 ```
void* q_scilexerverilog_metacast(void* self, const char* param1);

/// ``` QsciLexerVerilog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerverilog_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)(QsciLexerVerilog*, enum QMetaObject__Call, int, void*) ```
void q_scilexerverilog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerVerilog* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerverilog_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerverilog_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#language)
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#lexer)
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#braceStyle)
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#wordCharacters)
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_word_characters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#defaultColor)
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#defaultEolFill)
///
/// ``` QsciLexerVerilog* self, int style ```
bool q_scilexerverilog_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#defaultFont)
///
/// ``` QsciLexerVerilog* self, int style ```
QFont* q_scilexerverilog_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#defaultPaper)
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#keywords)
///
/// ``` QsciLexerVerilog* self, int set ```
const char* q_scilexerverilog_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#description)
///
/// ``` QsciLexerVerilog* self, int style ```
const char* q_scilexerverilog_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#refreshProperties)
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#setFoldAtElse)
///
/// ``` QsciLexerVerilog* self, bool fold ```
void q_scilexerverilog_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#foldAtElse)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_fold_at_else(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#setFoldComments)
///
/// ``` QsciLexerVerilog* self, bool fold ```
void q_scilexerverilog_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#foldComments)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_fold_comments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#setFoldCompact)
///
/// ``` QsciLexerVerilog* self, bool fold ```
void q_scilexerverilog_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#foldCompact)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#setFoldPreprocessor)
///
/// ``` QsciLexerVerilog* self, bool fold ```
void q_scilexerverilog_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#foldPreprocessor)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_fold_preprocessor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#setFoldAtModule)
///
/// ``` QsciLexerVerilog* self, bool fold ```
void q_scilexerverilog_set_fold_at_module(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#foldAtModule)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_fold_at_module(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#readProperties)
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, QSettings*, const char*) ```
void q_scilexerverilog_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerverilog.html#writeProperties)
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, QSettings*, const char*) ```
void q_scilexerverilog_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerverilog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerverilog_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerVerilog* self ```
QsciAbstractAPIs* q_scilexerverilog_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerVerilog* self ```
QsciScintilla* q_scilexerverilog_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerVerilog* self, QsciAbstractAPIs* apis ```
void q_scilexerverilog_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerVerilog* self, QColor* c ```
void q_scilexerverilog_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerVerilog* self, QFont* f ```
void q_scilexerverilog_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerVerilog* self, QColor* c ```
void q_scilexerverilog_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerVerilog* self, QSettings* qs ```
bool q_scilexerverilog_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerVerilog* self, QSettings* qs ```
bool q_scilexerverilog_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerverilog_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerVerilog* self, bool eolfilled, int style ```
void q_scilexerverilog_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerverilog_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerVerilog* self, QFont* f, int style ```
void q_scilexerverilog_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerverilog_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerverilog_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerVerilog* self, const char* prop, const char* val ```
void q_scilexerverilog_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerverilog_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerVerilog* self, QSettings* qs, const char* prefix ```
bool q_scilexerverilog_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerVerilog* self, const char* name ```
void q_scilexerverilog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerVerilog* self, bool b ```
bool q_scilexerverilog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerVerilog* self ```
QThread* q_scilexerverilog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerVerilog* self, QThread* thread ```
void q_scilexerverilog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVerilog* self, int interval ```
int32_t q_scilexerverilog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerVerilog* self, int id ```
void q_scilexerverilog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerVerilog* self ```
libqt_list /* of QObject* */ q_scilexerverilog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerVerilog* self, QObject* parent ```
void q_scilexerverilog_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerVerilog* self, QObject* filterObj ```
void q_scilexerverilog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerVerilog* self, QObject* obj ```
void q_scilexerverilog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerverilog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVerilog* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerverilog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerverilog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerverilog_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerVerilog* self, const char* name, QVariant* value ```
bool q_scilexerverilog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerVerilog* self, const char* name ```
QVariant* q_scilexerverilog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerVerilog* self ```
const char** q_scilexerverilog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerVerilog* self ```
QBindingStorage* q_scilexerverilog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerVerilog* self ```
QBindingStorage* q_scilexerverilog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerVerilog* self, void (*slot)(QObject*) ```
void q_scilexerverilog_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerVerilog* self ```
QObject* q_scilexerverilog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerVerilog* self, const char* classname ```
bool q_scilexerverilog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerVerilog* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerverilog_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerverilog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerVerilog* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerverilog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerVerilog* self, QObject* param1 ```
void q_scilexerverilog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerVerilog* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerverilog_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
const char* q_scilexerverilog_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* (*slot)() ```
void q_scilexerverilog_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
const char** q_scilexerverilog_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
const char** q_scilexerverilog_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char** (*slot)() ```
void q_scilexerverilog_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* (*slot)(QsciLexerVerilog*, int*) ```
void q_scilexerverilog_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* (*slot)(QsciLexerVerilog*, int*) ```
void q_scilexerverilog_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int* style ```
const char* q_scilexerverilog_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* (*slot)(QsciLexerVerilog*, int*) ```
void q_scilexerverilog_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
bool q_scilexerverilog_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool (*slot)() ```
void q_scilexerverilog_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
bool q_scilexerverilog_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
bool q_scilexerverilog_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QFont* q_scilexerverilog_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QFont* q_scilexerverilog_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QFont* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QFont* q_scilexerverilog_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QFont* q_scilexerverilog_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QFont* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int style ```
QColor* q_scilexerverilog_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QsciScintilla* editor ```
void q_scilexerverilog_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QsciScintilla* editor ```
void q_scilexerverilog_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QsciScintilla*) ```
void q_scilexerverilog_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, int autoindentstyle ```
void q_scilexerverilog_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int autoindentstyle ```
void q_scilexerverilog_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, int) ```
void q_scilexerverilog_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QColor*, int) ```
void q_scilexerverilog_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool eoffill, int style ```
void q_scilexerverilog_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool eoffill, int style ```
void q_scilexerverilog_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, bool, int) ```
void q_scilexerverilog_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QFont* f, int style ```
void q_scilexerverilog_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QFont* f, int style ```
void q_scilexerverilog_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QFont*, int) ```
void q_scilexerverilog_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QColor* c, int style ```
void q_scilexerverilog_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QColor*, int) ```
void q_scilexerverilog_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QEvent* event ```
bool q_scilexerverilog_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QEvent* event ```
bool q_scilexerverilog_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, QEvent*) ```
void q_scilexerverilog_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QObject* watched, QEvent* event ```
bool q_scilexerverilog_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QObject* watched, QEvent* event ```
bool q_scilexerverilog_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, QObject*, QEvent*) ```
void q_scilexerverilog_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QTimerEvent* event ```
void q_scilexerverilog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QTimerEvent* event ```
void q_scilexerverilog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QTimerEvent*) ```
void q_scilexerverilog_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QChildEvent* event ```
void q_scilexerverilog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QChildEvent* event ```
void q_scilexerverilog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QChildEvent*) ```
void q_scilexerverilog_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QEvent* event ```
void q_scilexerverilog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QEvent* event ```
void q_scilexerverilog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QEvent*) ```
void q_scilexerverilog_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
void q_scilexerverilog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
void q_scilexerverilog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QMetaMethod*) ```
void q_scilexerverilog_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
void q_scilexerverilog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
void q_scilexerverilog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, void (*slot)(QsciLexerVerilog*, QMetaMethod*) ```
void q_scilexerverilog_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
QObject* q_scilexerverilog_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
QObject* q_scilexerverilog_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QObject* (*slot)() ```
void q_scilexerverilog_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self ```
int32_t q_scilexerverilog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)() ```
void q_scilexerverilog_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* signal ```
int32_t q_scilexerverilog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, const char* signal ```
int32_t q_scilexerverilog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, int32_t (*slot)(QsciLexerVerilog*, const char*) ```
void q_scilexerverilog_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
bool q_scilexerverilog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, QMetaMethod* signal ```
bool q_scilexerverilog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerVerilog* self, bool (*slot)(QsciLexerVerilog*, QMetaMethod*) ```
void q_scilexerverilog_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerVerilog* self ```
void q_scilexerverilog_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerverilog.html#types

typedef enum {
    QSCILEXERVERILOG__DEFAULT = 0,
    QSCILEXERVERILOG__INACTIVEDEFAULT = 64,
    QSCILEXERVERILOG__COMMENT = 1,
    QSCILEXERVERILOG__INACTIVECOMMENT = 65,
    QSCILEXERVERILOG__COMMENTLINE = 2,
    QSCILEXERVERILOG__INACTIVECOMMENTLINE = 66,
    QSCILEXERVERILOG__COMMENTBANG = 3,
    QSCILEXERVERILOG__INACTIVECOMMENTBANG = 67,
    QSCILEXERVERILOG__NUMBER = 4,
    QSCILEXERVERILOG__INACTIVENUMBER = 68,
    QSCILEXERVERILOG__KEYWORD = 5,
    QSCILEXERVERILOG__INACTIVEKEYWORD = 69,
    QSCILEXERVERILOG__STRING = 6,
    QSCILEXERVERILOG__INACTIVESTRING = 70,
    QSCILEXERVERILOG__KEYWORDSET2 = 7,
    QSCILEXERVERILOG__INACTIVEKEYWORDSET2 = 71,
    QSCILEXERVERILOG__SYSTEMTASK = 8,
    QSCILEXERVERILOG__INACTIVESYSTEMTASK = 72,
    QSCILEXERVERILOG__PREPROCESSOR = 9,
    QSCILEXERVERILOG__INACTIVEPREPROCESSOR = 73,
    QSCILEXERVERILOG__OPERATOR = 10,
    QSCILEXERVERILOG__INACTIVEOPERATOR = 74,
    QSCILEXERVERILOG__IDENTIFIER = 11,
    QSCILEXERVERILOG__INACTIVEIDENTIFIER = 75,
    QSCILEXERVERILOG__UNCLOSEDSTRING = 12,
    QSCILEXERVERILOG__INACTIVEUNCLOSEDSTRING = 76,
    QSCILEXERVERILOG__USERKEYWORDSET = 19,
    QSCILEXERVERILOG__INACTIVEUSERKEYWORDSET = 83,
    QSCILEXERVERILOG__COMMENTKEYWORD = 20,
    QSCILEXERVERILOG__INACTIVECOMMENTKEYWORD = 84,
    QSCILEXERVERILOG__DECLAREINPUTPORT = 21,
    QSCILEXERVERILOG__INACTIVEDECLAREINPUTPORT = 85,
    QSCILEXERVERILOG__DECLAREOUTPUTPORT = 22,
    QSCILEXERVERILOG__INACTIVEDECLAREOUTPUTPORT = 86,
    QSCILEXERVERILOG__DECLAREINPUTOUTPUTPORT = 23,
    QSCILEXERVERILOG__INACTIVEDECLAREINPUTOUTPUTPORT = 87,
    QSCILEXERVERILOG__PORTCONNECTION = 24,
    QSCILEXERVERILOG__INACTIVEPORTCONNECTION = 88
} QsciLexerVerilog__;

#endif
