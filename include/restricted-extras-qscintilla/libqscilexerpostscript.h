#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPOSTSCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPOSTSCRIPT_H

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

/// https://doc.qt.io/qt-6/qscilexerpostscript.html

/// q_scilexerpostscript_new constructs a new QsciLexerPostScript object.
///
///
QsciLexerPostScript* q_scilexerpostscript_new();

/// q_scilexerpostscript_new2 constructs a new QsciLexerPostScript object.
///
/// ``` QObject* parent ```
QsciLexerPostScript* q_scilexerpostscript_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPostScript* self ```
QMetaObject* q_scilexerpostscript_meta_object(void* self);

/// ``` QsciLexerPostScript* self, const char* param1 ```
void* q_scilexerpostscript_metacast(void* self, const char* param1);

/// ``` QsciLexerPostScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpostscript_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)(QsciLexerPostScript*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpostscript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpostscript_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpostscript_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#language)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#lexer)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#braceStyle)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultColor)
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultFont)
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultPaper)
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#keywords)
///
/// ``` QsciLexerPostScript* self, int set ```
const char* q_scilexerpostscript_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#description)
///
/// ``` QsciLexerPostScript* self, int style ```
const char* q_scilexerpostscript_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#refreshProperties)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#tokenize)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_tokenize(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#level)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#foldCompact)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#foldAtElse)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_fold_at_else(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setTokenize)
///
/// ``` QsciLexerPostScript* self, bool tokenize ```
void q_scilexerpostscript_set_tokenize(void* self, bool tokenize);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_tokenize(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool tokenize ```
void q_scilexerpostscript_qbase_set_tokenize(void* self, bool tokenize);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setLevel)
///
/// ``` QsciLexerPostScript* self, int level ```
void q_scilexerpostscript_set_level(void* self, int level);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_set_level(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, int level ```
void q_scilexerpostscript_qbase_set_level(void* self, int level);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setFoldCompact)
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_set_fold_compact(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setFoldAtElse)
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_set_fold_at_else(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_fold_at_else(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_qbase_set_fold_at_else(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#readProperties)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QSettings*, const char*) ```
void q_scilexerpostscript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#writeProperties)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QSettings*, const char*) ```
void q_scilexerpostscript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpostscript_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpostscript_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPostScript* self ```
QsciAbstractAPIs* q_scilexerpostscript_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPostScript* self ```
QsciScintilla* q_scilexerpostscript_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPostScript* self, QsciAbstractAPIs* apis ```
void q_scilexerpostscript_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPostScript* self, QColor* c ```
void q_scilexerpostscript_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPostScript* self, QFont* f ```
void q_scilexerpostscript_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPostScript* self, QColor* c ```
void q_scilexerpostscript_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs ```
bool q_scilexerpostscript_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs ```
bool q_scilexerpostscript_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpostscript_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPostScript* self, bool eolfilled, int style ```
void q_scilexerpostscript_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpostscript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpostscript_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpostscript_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPostScript* self, const char* prop, const char* val ```
void q_scilexerpostscript_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpostscript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPostScript* self, char* name ```
void q_scilexerpostscript_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPostScript* self, bool b ```
bool q_scilexerpostscript_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPostScript* self ```
QThread* q_scilexerpostscript_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPostScript* self, QThread* thread ```
void q_scilexerpostscript_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPostScript* self, int interval ```
int32_t q_scilexerpostscript_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPostScript* self, int id ```
void q_scilexerpostscript_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPostScript* self ```
libqt_list /* of QObject* */ q_scilexerpostscript_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPostScript* self, QObject* parent ```
void q_scilexerpostscript_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPostScript* self, QObject* filterObj ```
void q_scilexerpostscript_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPostScript* self, QObject* obj ```
void q_scilexerpostscript_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpostscript_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPostScript* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpostscript_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpostscript_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpostscript_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPostScript* self, const char* name, QVariant* value ```
bool q_scilexerpostscript_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPostScript* self, const char* name ```
QVariant* q_scilexerpostscript_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPostScript* self ```
QBindingStorage* q_scilexerpostscript_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPostScript* self ```
QBindingStorage* q_scilexerpostscript_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerPostScript* self, void (*slot)(QObject*) ```
void q_scilexerpostscript_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPostScript* self, const char* classname ```
bool q_scilexerpostscript_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPostScript* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpostscript_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpostscript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPostScript* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpostscript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPostScript* self, QObject* param1 ```
void q_scilexerpostscript_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerPostScript* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpostscript_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)() ```
void q_scilexerpostscript_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char** (*slot)() ```
void q_scilexerpostscript_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)() ```
void q_scilexerpostscript_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QsciScintilla* editor ```
void q_scilexerpostscript_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QsciScintilla* editor ```
void q_scilexerpostscript_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QsciScintilla*) ```
void q_scilexerpostscript_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)() ```
void q_scilexerpostscript_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int autoindentstyle ```
void q_scilexerpostscript_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int autoindentstyle ```
void q_scilexerpostscript_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QColor*, int) ```
void q_scilexerpostscript_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool eoffill, int style ```
void q_scilexerpostscript_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool eoffill, int style ```
void q_scilexerpostscript_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool, int) ```
void q_scilexerpostscript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QFont*, int) ```
void q_scilexerpostscript_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QColor*, int) ```
void q_scilexerpostscript_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
bool q_scilexerpostscript_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
bool q_scilexerpostscript_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QEvent*) ```
void q_scilexerpostscript_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* watched, QEvent* event ```
bool q_scilexerpostscript_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* watched, QEvent* event ```
bool q_scilexerpostscript_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QObject*, QEvent*) ```
void q_scilexerpostscript_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QTimerEvent* event ```
void q_scilexerpostscript_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QTimerEvent* event ```
void q_scilexerpostscript_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QTimerEvent*) ```
void q_scilexerpostscript_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QChildEvent* event ```
void q_scilexerpostscript_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QChildEvent* event ```
void q_scilexerpostscript_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QChildEvent*) ```
void q_scilexerpostscript_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
void q_scilexerpostscript_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
void q_scilexerpostscript_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QEvent*) ```
void q_scilexerpostscript_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* (*slot)() ```
void q_scilexerpostscript_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* signal ```
int32_t q_scilexerpostscript_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* signal ```
int32_t q_scilexerpostscript_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)(QsciLexerPostScript*, const char*) ```
void q_scilexerpostscript_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
bool q_scilexerpostscript_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
bool q_scilexerpostscript_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpostscript.html#types

typedef enum {
    QSCILEXERPOSTSCRIPT__DEFAULT = 0,
    QSCILEXERPOSTSCRIPT__COMMENT = 1,
    QSCILEXERPOSTSCRIPT__DSCCOMMENT = 2,
    QSCILEXERPOSTSCRIPT__DSCCOMMENTVALUE = 3,
    QSCILEXERPOSTSCRIPT__NUMBER = 4,
    QSCILEXERPOSTSCRIPT__NAME = 5,
    QSCILEXERPOSTSCRIPT__KEYWORD = 6,
    QSCILEXERPOSTSCRIPT__LITERAL = 7,
    QSCILEXERPOSTSCRIPT__IMMEDIATEEVALLITERAL = 8,
    QSCILEXERPOSTSCRIPT__ARRAYPARENTHESIS = 9,
    QSCILEXERPOSTSCRIPT__DICTIONARYPARENTHESIS = 10,
    QSCILEXERPOSTSCRIPT__PROCEDUREPARENTHESIS = 11,
    QSCILEXERPOSTSCRIPT__TEXT = 12,
    QSCILEXERPOSTSCRIPT__HEXSTRING = 13,
    QSCILEXERPOSTSCRIPT__BASE85STRING = 14,
    QSCILEXERPOSTSCRIPT__BADSTRINGCHARACTER = 15
} QsciLexerPostScript__;

#endif
