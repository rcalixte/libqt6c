#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERFORTRAN77_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERFORTRAN77_H

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

/// https://doc.qt.io/qt-6/qscilexerfortran77.html

/// q_scilexerfortran77_new constructs a new QsciLexerFortran77 object.
///
///
QsciLexerFortran77* q_scilexerfortran77_new();

/// q_scilexerfortran77_new2 constructs a new QsciLexerFortran77 object.
///
/// ``` QObject* parent ```
QsciLexerFortran77* q_scilexerfortran77_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerFortran77* self ```
QMetaObject* q_scilexerfortran77_meta_object(void* self);

/// ``` QsciLexerFortran77* self, const char* param1 ```
void* q_scilexerfortran77_metacast(void* self, const char* param1);

/// ``` QsciLexerFortran77* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran77_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)(QsciLexerFortran77*, enum QMetaObject__Call, int, void*) ```
void q_scilexerfortran77_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerfortran77_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerfortran77_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#language)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#lexer)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#braceStyle)
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultColor)
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultEolFill)
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultFont)
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#defaultPaper)
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#keywords)
///
/// ``` QsciLexerFortran77* self, int set ```
const char* q_scilexerfortran77_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#description)
///
/// ``` QsciLexerFortran77* self, int style ```
const char* q_scilexerfortran77_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#refreshProperties)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#foldCompact)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#setFoldCompact)
///
/// ``` QsciLexerFortran77* self, bool fold ```
void q_scilexerfortran77_set_fold_compact(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, bool) ```
void q_scilexerfortran77_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, bool fold ```
void q_scilexerfortran77_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#readProperties)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QSettings*, const char*) ```
void q_scilexerfortran77_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerfortran77.html#writeProperties)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QSettings*, const char*) ```
void q_scilexerfortran77_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerfortran77_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerfortran77_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerFortran77* self ```
QsciAbstractAPIs* q_scilexerfortran77_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerFortran77* self ```
QsciScintilla* q_scilexerfortran77_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerFortran77* self, QsciAbstractAPIs* apis ```
void q_scilexerfortran77_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerFortran77* self, QColor* c ```
void q_scilexerfortran77_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerFortran77* self, QFont* f ```
void q_scilexerfortran77_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerFortran77* self, QColor* c ```
void q_scilexerfortran77_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs ```
bool q_scilexerfortran77_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs ```
bool q_scilexerfortran77_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran77_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerFortran77* self, bool eolfilled, int style ```
void q_scilexerfortran77_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerfortran77_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerfortran77_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerfortran77_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerFortran77* self, const char* prop, const char* val ```
void q_scilexerfortran77_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerfortran77_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerFortran77* self, QSettings* qs, const char* prefix ```
bool q_scilexerfortran77_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerFortran77* self, const char* name ```
void q_scilexerfortran77_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerFortran77* self, bool b ```
bool q_scilexerfortran77_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerFortran77* self ```
QThread* q_scilexerfortran77_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerFortran77* self, QThread* thread ```
void q_scilexerfortran77_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran77* self, int interval ```
int32_t q_scilexerfortran77_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerFortran77* self, int id ```
void q_scilexerfortran77_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerFortran77* self ```
libqt_list /* of QObject* */ q_scilexerfortran77_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerFortran77* self, QObject* parent ```
void q_scilexerfortran77_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerFortran77* self, QObject* filterObj ```
void q_scilexerfortran77_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerFortran77* self, QObject* obj ```
void q_scilexerfortran77_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerfortran77_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran77* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerfortran77_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerfortran77_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerfortran77_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerFortran77* self, const char* name, QVariant* value ```
bool q_scilexerfortran77_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerFortran77* self, const char* name ```
QVariant* q_scilexerfortran77_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerFortran77* self ```
QBindingStorage* q_scilexerfortran77_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerFortran77* self ```
QBindingStorage* q_scilexerfortran77_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerFortran77* self, void (*slot)(QObject*) ```
void q_scilexerfortran77_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerFortran77* self, const char* classname ```
bool q_scilexerfortran77_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerFortran77* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerfortran77_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran77_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerFortran77* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerfortran77_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerFortran77* self, QObject* param1 ```
void q_scilexerfortran77_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerFortran77* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerfortran77_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)() ```
void q_scilexerfortran77_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char** q_scilexerfortran77_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char** (*slot)() ```
void q_scilexerfortran77_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int* style ```
const char* q_scilexerfortran77_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)(QsciLexerFortran77*, int*) ```
void q_scilexerfortran77_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
bool q_scilexerfortran77_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)() ```
void q_scilexerfortran77_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
bool q_scilexerfortran77_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QFont* q_scilexerfortran77_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int style ```
QColor* q_scilexerfortran77_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QsciScintilla* editor ```
void q_scilexerfortran77_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QsciScintilla* editor ```
void q_scilexerfortran77_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QsciScintilla*) ```
void q_scilexerfortran77_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
const char* q_scilexerfortran77_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* (*slot)() ```
void q_scilexerfortran77_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, int autoindentstyle ```
void q_scilexerfortran77_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int autoindentstyle ```
void q_scilexerfortran77_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, int) ```
void q_scilexerfortran77_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QColor*, int) ```
void q_scilexerfortran77_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool eoffill, int style ```
void q_scilexerfortran77_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool eoffill, int style ```
void q_scilexerfortran77_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, bool, int) ```
void q_scilexerfortran77_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QFont* f, int style ```
void q_scilexerfortran77_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QFont*, int) ```
void q_scilexerfortran77_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QColor* c, int style ```
void q_scilexerfortran77_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QColor*, int) ```
void q_scilexerfortran77_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
bool q_scilexerfortran77_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
bool q_scilexerfortran77_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QEvent*) ```
void q_scilexerfortran77_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran77_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* watched, QEvent* event ```
bool q_scilexerfortran77_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QObject*, QEvent*) ```
void q_scilexerfortran77_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QTimerEvent* event ```
void q_scilexerfortran77_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QTimerEvent* event ```
void q_scilexerfortran77_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QTimerEvent*) ```
void q_scilexerfortran77_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QChildEvent* event ```
void q_scilexerfortran77_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QChildEvent* event ```
void q_scilexerfortran77_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QChildEvent*) ```
void q_scilexerfortran77_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
void q_scilexerfortran77_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QEvent* event ```
void q_scilexerfortran77_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QEvent*) ```
void q_scilexerfortran77_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
void q_scilexerfortran77_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, void (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
QObject* q_scilexerfortran77_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QObject* (*slot)() ```
void q_scilexerfortran77_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self ```
int32_t q_scilexerfortran77_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)() ```
void q_scilexerfortran77_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* signal ```
int32_t q_scilexerfortran77_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, const char* signal ```
int32_t q_scilexerfortran77_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, int32_t (*slot)(QsciLexerFortran77*, const char*) ```
void q_scilexerfortran77_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
bool q_scilexerfortran77_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, QMetaMethod* signal ```
bool q_scilexerfortran77_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerFortran77* self, bool (*slot)(QsciLexerFortran77*, QMetaMethod*) ```
void q_scilexerfortran77_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerFortran77* self ```
void q_scilexerfortran77_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerfortran77.html#types

typedef enum {
    QSCILEXERFORTRAN77__DEFAULT = 0,
    QSCILEXERFORTRAN77__COMMENT = 1,
    QSCILEXERFORTRAN77__NUMBER = 2,
    QSCILEXERFORTRAN77__SINGLEQUOTEDSTRING = 3,
    QSCILEXERFORTRAN77__DOUBLEQUOTEDSTRING = 4,
    QSCILEXERFORTRAN77__UNCLOSEDSTRING = 5,
    QSCILEXERFORTRAN77__OPERATOR = 6,
    QSCILEXERFORTRAN77__IDENTIFIER = 7,
    QSCILEXERFORTRAN77__KEYWORD = 8,
    QSCILEXERFORTRAN77__INTRINSICFUNCTION = 9,
    QSCILEXERFORTRAN77__EXTENDEDFUNCTION = 10,
    QSCILEXERFORTRAN77__PREPROCESSOR = 11,
    QSCILEXERFORTRAN77__DOTTEDOPERATOR = 12,
    QSCILEXERFORTRAN77__LABEL = 13,
    QSCILEXERFORTRAN77__CONTINUATION = 14
} QsciLexerFortran77__;

#endif
