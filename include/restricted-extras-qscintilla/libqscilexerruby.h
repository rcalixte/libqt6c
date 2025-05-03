#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERRUBY_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERRUBY_H

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

/// https://doc.qt.io/qt-6/qscilexerruby.html

/// q_scilexerruby_new constructs a new QsciLexerRuby object.
///
///
QsciLexerRuby* q_scilexerruby_new();

/// q_scilexerruby_new2 constructs a new QsciLexerRuby object.
///
/// ``` QObject* parent ```
QsciLexerRuby* q_scilexerruby_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerRuby* self ```
QMetaObject* q_scilexerruby_meta_object(void* self);

/// ``` QsciLexerRuby* self, const char* param1 ```
void* q_scilexerruby_metacast(void* self, const char* param1);

/// ``` QsciLexerRuby* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerruby_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)(QsciLexerRuby*, enum QMetaObject__Call, int, void*) ```
void q_scilexerruby_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerruby_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerruby_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#language)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#lexer)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockEnd)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStart)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStartKeyword)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_block_start_keyword(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#braceStyle)
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultColor)
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultEolFill)
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultFont)
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#defaultPaper)
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#keywords)
///
/// ``` QsciLexerRuby* self, int set ```
const char* q_scilexerruby_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#description)
///
/// ``` QsciLexerRuby* self, int style ```
const char* q_scilexerruby_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#refreshProperties)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#setFoldComments)
///
/// ``` QsciLexerRuby* self, bool fold ```
void q_scilexerruby_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#foldComments)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_fold_comments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#setFoldCompact)
///
/// ``` QsciLexerRuby* self, bool fold ```
void q_scilexerruby_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#foldCompact)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#readProperties)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QSettings*, const char*) ```
void q_scilexerruby_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#writeProperties)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QSettings*, const char*) ```
void q_scilexerruby_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerruby_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerruby_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockEnd)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_end1(void* self, int* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStart)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_start1(void* self, int* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerruby.html#blockStartKeyword)
///
/// ``` QsciLexerRuby* self, int* style ```
const char* q_scilexerruby_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerRuby* self ```
QsciAbstractAPIs* q_scilexerruby_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerRuby* self ```
QsciScintilla* q_scilexerruby_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerRuby* self, QsciAbstractAPIs* apis ```
void q_scilexerruby_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerRuby* self, QColor* c ```
void q_scilexerruby_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerRuby* self, QFont* f ```
void q_scilexerruby_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerRuby* self, QColor* c ```
void q_scilexerruby_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs ```
bool q_scilexerruby_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs ```
bool q_scilexerruby_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerruby_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerRuby* self, bool eolfilled, int style ```
void q_scilexerruby_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerruby_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerruby_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerruby_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerRuby* self, const char* prop, const char* val ```
void q_scilexerruby_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerruby_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerRuby* self, QSettings* qs, const char* prefix ```
bool q_scilexerruby_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerRuby* self, char* name ```
void q_scilexerruby_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerRuby* self, bool b ```
bool q_scilexerruby_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerRuby* self ```
QThread* q_scilexerruby_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerRuby* self, QThread* thread ```
void q_scilexerruby_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerRuby* self, int interval ```
int32_t q_scilexerruby_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerRuby* self, int id ```
void q_scilexerruby_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerRuby* self ```
libqt_list /* of QObject* */ q_scilexerruby_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerRuby* self, QObject* parent ```
void q_scilexerruby_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerRuby* self, QObject* filterObj ```
void q_scilexerruby_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerRuby* self, QObject* obj ```
void q_scilexerruby_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerruby_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerRuby* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerruby_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerruby_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerruby_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerRuby* self, const char* name, QVariant* value ```
bool q_scilexerruby_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerRuby* self, const char* name ```
QVariant* q_scilexerruby_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerRuby* self ```
QBindingStorage* q_scilexerruby_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerRuby* self ```
QBindingStorage* q_scilexerruby_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerRuby* self, void (*slot)(QObject*) ```
void q_scilexerruby_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerRuby* self, const char* classname ```
bool q_scilexerruby_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerRuby* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerruby_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerruby_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerRuby* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerruby_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerRuby* self, QObject* param1 ```
void q_scilexerruby_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerRuby* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerruby_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* (*slot)() ```
void q_scilexerruby_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char** q_scilexerruby_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char** (*slot)() ```
void q_scilexerruby_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
bool q_scilexerruby_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)() ```
void q_scilexerruby_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
bool q_scilexerruby_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QFont* q_scilexerruby_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int style ```
QColor* q_scilexerruby_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QsciScintilla* editor ```
void q_scilexerruby_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QsciScintilla* editor ```
void q_scilexerruby_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QsciScintilla*) ```
void q_scilexerruby_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
const char* q_scilexerruby_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* (*slot)() ```
void q_scilexerruby_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, int autoindentstyle ```
void q_scilexerruby_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int autoindentstyle ```
void q_scilexerruby_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, int) ```
void q_scilexerruby_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QColor*, int) ```
void q_scilexerruby_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, bool eoffill, int style ```
void q_scilexerruby_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool eoffill, int style ```
void q_scilexerruby_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, bool, int) ```
void q_scilexerruby_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QFont* f, int style ```
void q_scilexerruby_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QFont*, int) ```
void q_scilexerruby_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QColor* c, int style ```
void q_scilexerruby_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QColor*, int) ```
void q_scilexerruby_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
bool q_scilexerruby_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
bool q_scilexerruby_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QEvent*) ```
void q_scilexerruby_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* watched, QEvent* event ```
bool q_scilexerruby_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* watched, QEvent* event ```
bool q_scilexerruby_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QObject*, QEvent*) ```
void q_scilexerruby_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QTimerEvent* event ```
void q_scilexerruby_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QTimerEvent* event ```
void q_scilexerruby_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QTimerEvent*) ```
void q_scilexerruby_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QChildEvent* event ```
void q_scilexerruby_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QChildEvent* event ```
void q_scilexerruby_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QChildEvent*) ```
void q_scilexerruby_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
void q_scilexerruby_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QEvent* event ```
void q_scilexerruby_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QEvent*) ```
void q_scilexerruby_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
void q_scilexerruby_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, void (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
QObject* q_scilexerruby_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QObject* (*slot)() ```
void q_scilexerruby_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self ```
int32_t q_scilexerruby_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)() ```
void q_scilexerruby_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* signal ```
int32_t q_scilexerruby_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, const char* signal ```
int32_t q_scilexerruby_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, int32_t (*slot)(QsciLexerRuby*, const char*) ```
void q_scilexerruby_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
bool q_scilexerruby_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerRuby* self, QMetaMethod* signal ```
bool q_scilexerruby_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerRuby* self, bool (*slot)(QsciLexerRuby*, QMetaMethod*) ```
void q_scilexerruby_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerRuby* self ```
void q_scilexerruby_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerruby.html#types

typedef enum {
    QSCILEXERRUBY__DEFAULT = 0,
    QSCILEXERRUBY__ERROR = 1,
    QSCILEXERRUBY__COMMENT = 2,
    QSCILEXERRUBY__POD = 3,
    QSCILEXERRUBY__NUMBER = 4,
    QSCILEXERRUBY__KEYWORD = 5,
    QSCILEXERRUBY__DOUBLEQUOTEDSTRING = 6,
    QSCILEXERRUBY__SINGLEQUOTEDSTRING = 7,
    QSCILEXERRUBY__CLASSNAME = 8,
    QSCILEXERRUBY__FUNCTIONMETHODNAME = 9,
    QSCILEXERRUBY__OPERATOR = 10,
    QSCILEXERRUBY__IDENTIFIER = 11,
    QSCILEXERRUBY__REGEX = 12,
    QSCILEXERRUBY__GLOBAL = 13,
    QSCILEXERRUBY__SYMBOL = 14,
    QSCILEXERRUBY__MODULENAME = 15,
    QSCILEXERRUBY__INSTANCEVARIABLE = 16,
    QSCILEXERRUBY__CLASSVARIABLE = 17,
    QSCILEXERRUBY__BACKTICKS = 18,
    QSCILEXERRUBY__DATASECTION = 19,
    QSCILEXERRUBY__HEREDOCUMENTDELIMITER = 20,
    QSCILEXERRUBY__HEREDOCUMENT = 21,
    /// Workaround for duplicate enum value: PERCENTSTRINGQ
    QSCILEXERRUBY__PERCENTSTRINGQ_4 = 24,
    /// Workaround for duplicate enum value: PERCENTSTRINGQ
    QSCILEXERRUBY__PERCENTSTRINGQ_5 = 25,
    QSCILEXERRUBY__PERCENTSTRINGX = 26,
    QSCILEXERRUBY__PERCENTSTRINGR = 27,
    QSCILEXERRUBY__PERCENTSTRINGW = 28,
    QSCILEXERRUBY__DEMOTEDKEYWORD = 29,
    QSCILEXERRUBY__STDIN = 30,
    QSCILEXERRUBY__STDOUT = 31,
    QSCILEXERRUBY__STDERR = 40
} QsciLexerRuby__;

#endif
