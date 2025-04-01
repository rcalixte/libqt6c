#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPO_H

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

/// https://doc.qt.io/qt-6/qscilexerpo.html

/// q_scilexerpo_new constructs a new QsciLexerPO object.
///
///
QsciLexerPO* q_scilexerpo_new();

/// q_scilexerpo_new2 constructs a new QsciLexerPO object.
///
/// ``` QObject* parent ```
QsciLexerPO* q_scilexerpo_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPO* self ```
QMetaObject* q_scilexerpo_meta_object(void* self);

/// ``` QsciLexerPO* self, const char* param1 ```
void* q_scilexerpo_metacast(void* self, const char* param1);

/// ``` QsciLexerPO* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpo_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, int32_t (*slot)(QsciLexerPO*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpo_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerPO* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpo_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpo_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#language)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#lexer)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#defaultColor)
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#defaultFont)
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#description)
///
/// ``` QsciLexerPO* self, int style ```
const char* q_scilexerpo_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#refreshProperties)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#foldComments)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_fold_comments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#foldCompact)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#setFoldComments)
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_set_fold_comments(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool) ```
void q_scilexerpo_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_qbase_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#setFoldCompact)
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_set_fold_compact(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool) ```
void q_scilexerpo_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPO* self, bool fold ```
void q_scilexerpo_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#readProperties)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QSettings*, const char*) ```
void q_scilexerpo_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpo.html#writeProperties)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QSettings*, const char*) ```
void q_scilexerpo_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpo_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpo_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPO* self ```
QsciAbstractAPIs* q_scilexerpo_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexerPO* self ```
QColor* q_scilexerpo_default_paper(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPO* self ```
QsciScintilla* q_scilexerpo_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPO* self, QsciAbstractAPIs* apis ```
void q_scilexerpo_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPO* self, QColor* c ```
void q_scilexerpo_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPO* self, QFont* f ```
void q_scilexerpo_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPO* self, QColor* c ```
void q_scilexerpo_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs ```
bool q_scilexerpo_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs ```
bool q_scilexerpo_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpo_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPO* self, bool eolfilled, int style ```
void q_scilexerpo_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpo_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpo_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpo_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPO* self, const char* prop, const char* val ```
void q_scilexerpo_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpo_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPO* self, QSettings* qs, const char* prefix ```
bool q_scilexerpo_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPO* self, const char* name ```
void q_scilexerpo_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPO* self, bool b ```
bool q_scilexerpo_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPO* self ```
QThread* q_scilexerpo_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPO* self, QThread* thread ```
void q_scilexerpo_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPO* self, int interval ```
int32_t q_scilexerpo_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPO* self, int id ```
void q_scilexerpo_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPO* self ```
libqt_list /* of QObject* */ q_scilexerpo_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPO* self, QObject* parent ```
void q_scilexerpo_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPO* self, QObject* filterObj ```
void q_scilexerpo_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPO* self, QObject* obj ```
void q_scilexerpo_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpo_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPO* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpo_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpo_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpo_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPO* self, const char* name, QVariant* value ```
bool q_scilexerpo_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPO* self, const char* name ```
QVariant* q_scilexerpo_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPO* self ```
QBindingStorage* q_scilexerpo_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPO* self ```
QBindingStorage* q_scilexerpo_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerPO* self, void (*slot)(QObject*) ```
void q_scilexerpo_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPO* self, const char* classname ```
bool q_scilexerpo_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPO* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpo_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpo_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPO* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpo_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPO* self, QObject* param1 ```
void q_scilexerpo_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerPO* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpo_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)() ```
void q_scilexerpo_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char** q_scilexerpo_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char** (*slot)() ```
void q_scilexerpo_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int* style ```
const char* q_scilexerpo_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int*) ```
void q_scilexerpo_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
bool q_scilexerpo_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)() ```
void q_scilexerpo_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int set ```
const char* q_scilexerpo_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int set ```
const char* q_scilexerpo_qbase_keywords(void* self, int set);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_keywords(void* self, const char* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
bool q_scilexerpo_qbase_default_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QFont* q_scilexerpo_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int style ```
QColor* q_scilexerpo_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QsciScintilla* editor ```
void q_scilexerpo_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QsciScintilla* editor ```
void q_scilexerpo_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QsciScintilla*) ```
void q_scilexerpo_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
const char* q_scilexerpo_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* (*slot)() ```
void q_scilexerpo_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, int autoindentstyle ```
void q_scilexerpo_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, int autoindentstyle ```
void q_scilexerpo_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, int) ```
void q_scilexerpo_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QColor*, int) ```
void q_scilexerpo_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, bool eoffill, int style ```
void q_scilexerpo_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool eoffill, int style ```
void q_scilexerpo_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, bool, int) ```
void q_scilexerpo_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QFont* f, int style ```
void q_scilexerpo_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QFont*, int) ```
void q_scilexerpo_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QColor* c, int style ```
void q_scilexerpo_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QColor*, int) ```
void q_scilexerpo_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
bool q_scilexerpo_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
bool q_scilexerpo_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QEvent*) ```
void q_scilexerpo_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* watched, QEvent* event ```
bool q_scilexerpo_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* watched, QEvent* event ```
bool q_scilexerpo_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QObject*, QEvent*) ```
void q_scilexerpo_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QTimerEvent* event ```
void q_scilexerpo_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QTimerEvent* event ```
void q_scilexerpo_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QTimerEvent*) ```
void q_scilexerpo_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QChildEvent* event ```
void q_scilexerpo_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QChildEvent* event ```
void q_scilexerpo_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QChildEvent*) ```
void q_scilexerpo_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
void q_scilexerpo_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QEvent* event ```
void q_scilexerpo_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QEvent*) ```
void q_scilexerpo_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
void q_scilexerpo_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, void (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
QObject* q_scilexerpo_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, QObject* (*slot)() ```
void q_scilexerpo_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self ```
int32_t q_scilexerpo_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)() ```
void q_scilexerpo_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, const char* signal ```
int32_t q_scilexerpo_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, const char* signal ```
int32_t q_scilexerpo_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, int32_t (*slot)(QsciLexerPO*, const char*) ```
void q_scilexerpo_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
bool q_scilexerpo_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPO* self, QMetaMethod* signal ```
bool q_scilexerpo_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPO* self, bool (*slot)(QsciLexerPO*, QMetaMethod*) ```
void q_scilexerpo_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPO* self ```
void q_scilexerpo_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpo.html#types

typedef enum {
    QSCILEXERPO__DEFAULT = 0,
    QSCILEXERPO__COMMENT = 1,
    QSCILEXERPO__MESSAGEID = 2,
    QSCILEXERPO__MESSAGEIDTEXT = 3,
    QSCILEXERPO__MESSAGESTRING = 4,
    QSCILEXERPO__MESSAGESTRINGTEXT = 5,
    QSCILEXERPO__MESSAGECONTEXT = 6,
    QSCILEXERPO__MESSAGECONTEXTTEXT = 7,
    QSCILEXERPO__FUZZY = 8,
    QSCILEXERPO__PROGRAMMERCOMMENT = 9,
    QSCILEXERPO__REFERENCE = 10,
    QSCILEXERPO__FLAGS = 11,
    QSCILEXERPO__MESSAGEIDTEXTEOL = 12,
    QSCILEXERPO__MESSAGESTRINGTEXTEOL = 13,
    QSCILEXERPO__MESSAGECONTEXTTEXTEOL = 14
} QsciLexerPO__;

#endif
