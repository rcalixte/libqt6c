#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSHARP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERCSHARP_H

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

/// https://doc.qt.io/qt-6/qscilexercsharp.html

/// q_scilexercsharp_new constructs a new QsciLexerCSharp object.
///
///
QsciLexerCSharp* q_scilexercsharp_new();

/// q_scilexercsharp_new2 constructs a new QsciLexerCSharp object.
///
/// ``` QObject* parent ```
QsciLexerCSharp* q_scilexercsharp_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCSharp* self ```
QMetaObject* q_scilexercsharp_meta_object(void* self);

/// ``` QsciLexerCSharp* self, const char* param1 ```
void* q_scilexercsharp_metacast(void* self, const char* param1);

/// ``` QsciLexerCSharp* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercsharp_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)(QsciLexerCSharp*, enum QMetaObject__Call, int, void*) ```
void q_scilexercsharp_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerCSharp* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercsharp_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercsharp_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#language)
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#defaultColor)
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#defaultEolFill)
///
/// ``` QsciLexerCSharp* self, int style ```
bool q_scilexercsharp_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#defaultFont)
///
/// ``` QsciLexerCSharp* self, int style ```
QFont* q_scilexercsharp_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#defaultPaper)
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#keywords)
///
/// ``` QsciLexerCSharp* self, int set ```
const char* q_scilexercsharp_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercsharp.html#description)
///
/// ``` QsciLexerCSharp* self, int style ```
const char* q_scilexercsharp_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercsharp_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercsharp_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldAtElse)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_fold_at_else(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldComments)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_fold_comments(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldCompact)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_fold_compact(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldPreprocessor)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_fold_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#stylePreprocessor)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_style_preprocessor(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setDollarsAllowed)
///
/// ``` QsciLexerCSharp* self, bool allowed ```
void q_scilexercsharp_set_dollars_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#dollarsAllowed)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_dollars_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightTripleQuotedStrings)
///
/// ``` QsciLexerCSharp* self, bool enabled ```
void q_scilexercsharp_set_highlight_triple_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightTripleQuotedStrings)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_highlight_triple_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightHashQuotedStrings)
///
/// ``` QsciLexerCSharp* self, bool enabled ```
void q_scilexercsharp_set_highlight_hash_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightHashQuotedStrings)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_highlight_hash_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightBackQuotedStrings)
///
/// ``` QsciLexerCSharp* self, bool enabled ```
void q_scilexercsharp_set_highlight_back_quoted_strings(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightBackQuotedStrings)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_highlight_back_quoted_strings(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightEscapeSequences)
///
/// ``` QsciLexerCSharp* self, bool enabled ```
void q_scilexercsharp_set_highlight_escape_sequences(void* self, bool enabled);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightEscapeSequences)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_highlight_escape_sequences(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setVerbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerCSharp* self, bool allowed ```
void q_scilexercsharp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#verbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_verbatim_string_escape_sequences_allowed(void* self);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_end1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_start1(void* self, int* style);

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_start_keyword1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerCSharp* self ```
QsciAbstractAPIs* q_scilexercsharp_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerCSharp* self ```
QsciScintilla* q_scilexercsharp_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerCSharp* self, QsciAbstractAPIs* apis ```
void q_scilexercsharp_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerCSharp* self, QColor* c ```
void q_scilexercsharp_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerCSharp* self, QFont* f ```
void q_scilexercsharp_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerCSharp* self, QColor* c ```
void q_scilexercsharp_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCSharp* self, QSettings* qs ```
bool q_scilexercsharp_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCSharp* self, QSettings* qs ```
bool q_scilexercsharp_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercsharp_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerCSharp* self, bool eolfilled, int style ```
void q_scilexercsharp_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercsharp_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerCSharp* self, QFont* f, int style ```
void q_scilexercsharp_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercsharp_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercsharp_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerCSharp* self, const char* prop, const char* val ```
void q_scilexercsharp_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercsharp_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCSharp* self, const char* name ```
void q_scilexercsharp_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCSharp* self, bool b ```
bool q_scilexercsharp_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCSharp* self ```
QThread* q_scilexercsharp_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCSharp* self, QThread* thread ```
void q_scilexercsharp_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCSharp* self, int interval ```
int32_t q_scilexercsharp_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCSharp* self, int id ```
void q_scilexercsharp_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCSharp* self ```
libqt_list /* of QObject* */ q_scilexercsharp_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCSharp* self, QObject* parent ```
void q_scilexercsharp_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCSharp* self, QObject* filterObj ```
void q_scilexercsharp_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCSharp* self, QObject* obj ```
void q_scilexercsharp_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercsharp_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCSharp* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercsharp_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercsharp_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercsharp_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCSharp* self, const char* name, QVariant* value ```
bool q_scilexercsharp_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCSharp* self, const char* name ```
QVariant* q_scilexercsharp_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCSharp* self ```
const char** q_scilexercsharp_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCSharp* self ```
QBindingStorage* q_scilexercsharp_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCSharp* self ```
QBindingStorage* q_scilexercsharp_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerCSharp* self, void (*slot)(QObject*) ```
void q_scilexercsharp_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCSharp* self ```
QObject* q_scilexercsharp_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCSharp* self, const char* classname ```
bool q_scilexercsharp_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCSharp* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercsharp_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercsharp_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCSharp* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercsharp_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCSharp* self, QObject* param1 ```
void q_scilexercsharp_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerCSharp* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercsharp_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldAtElse)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_set_fold_at_else(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_qbase_set_fold_at_else(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool) ```
void q_scilexercsharp_on_set_fold_at_else(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldComments)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_qbase_set_fold_comments(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool) ```
void q_scilexercsharp_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldCompact)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_qbase_set_fold_compact(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool) ```
void q_scilexercsharp_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldPreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool fold ```
void q_scilexercsharp_qbase_set_fold_preprocessor(void* self, bool fold);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool) ```
void q_scilexercsharp_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexerCPP
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setStylePreprocessor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool style ```
void q_scilexercsharp_set_style_preprocessor(void* self, bool style);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool style ```
void q_scilexercsharp_qbase_set_style_preprocessor(void* self, bool style);

/// Inherited from QsciLexerCPP
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool) ```
void q_scilexercsharp_on_set_style_preprocessor(void* self, void (*slot)(void*, bool));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_lexer(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_qbase_lexer(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)() ```
void q_scilexercsharp_on_lexer(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)() ```
void q_scilexercsharp_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char** q_scilexercsharp_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char** q_scilexercsharp_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char** (*slot)() ```
void q_scilexercsharp_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)(QsciLexerCSharp*, int*) ```
void q_scilexercsharp_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)(QsciLexerCSharp*, int*) ```
void q_scilexercsharp_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int* style ```
const char* q_scilexercsharp_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)(QsciLexerCSharp*, int*) ```
void q_scilexercsharp_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
bool q_scilexercsharp_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)() ```
void q_scilexercsharp_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
bool q_scilexercsharp_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
bool q_scilexercsharp_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QFont* q_scilexercsharp_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QFont* q_scilexercsharp_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QFont* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QFont* q_scilexercsharp_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QFont* q_scilexercsharp_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QFont* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int style ```
QColor* q_scilexercsharp_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QsciScintilla* editor ```
void q_scilexercsharp_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QsciScintilla* editor ```
void q_scilexercsharp_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QsciScintilla*) ```
void q_scilexercsharp_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_qbase_refresh_properties(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)() ```
void q_scilexercsharp_on_refresh_properties(void* self, void (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
const char* q_scilexercsharp_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* (*slot)() ```
void q_scilexercsharp_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, int autoindentstyle ```
void q_scilexercsharp_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int autoindentstyle ```
void q_scilexercsharp_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, int) ```
void q_scilexercsharp_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QColor*, int) ```
void q_scilexercsharp_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool eoffill, int style ```
void q_scilexercsharp_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool eoffill, int style ```
void q_scilexercsharp_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, bool, int) ```
void q_scilexercsharp_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QFont* f, int style ```
void q_scilexercsharp_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QFont* f, int style ```
void q_scilexercsharp_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QFont*, int) ```
void q_scilexercsharp_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QColor* c, int style ```
void q_scilexercsharp_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QColor*, int) ```
void q_scilexercsharp_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_qbase_read_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, QSettings*, const char*) ```
void q_scilexercsharp_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QSettings* qs, const char* prefix ```
bool q_scilexercsharp_qbase_write_properties(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, QSettings*, const char*) ```
void q_scilexercsharp_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QEvent* event ```
bool q_scilexercsharp_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QEvent* event ```
bool q_scilexercsharp_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, QEvent*) ```
void q_scilexercsharp_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QObject* watched, QEvent* event ```
bool q_scilexercsharp_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QObject* watched, QEvent* event ```
bool q_scilexercsharp_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, QObject*, QEvent*) ```
void q_scilexercsharp_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QTimerEvent* event ```
void q_scilexercsharp_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QTimerEvent* event ```
void q_scilexercsharp_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QTimerEvent*) ```
void q_scilexercsharp_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QChildEvent* event ```
void q_scilexercsharp_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QChildEvent* event ```
void q_scilexercsharp_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QChildEvent*) ```
void q_scilexercsharp_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QEvent* event ```
void q_scilexercsharp_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QEvent* event ```
void q_scilexercsharp_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QEvent*) ```
void q_scilexercsharp_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
void q_scilexercsharp_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
void q_scilexercsharp_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QMetaMethod*) ```
void q_scilexercsharp_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
void q_scilexercsharp_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
void q_scilexercsharp_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, void (*slot)(QsciLexerCSharp*, QMetaMethod*) ```
void q_scilexercsharp_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
QObject* q_scilexercsharp_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
QObject* q_scilexercsharp_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QObject* (*slot)() ```
void q_scilexercsharp_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self ```
int32_t q_scilexercsharp_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)() ```
void q_scilexercsharp_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* signal ```
int32_t q_scilexercsharp_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, const char* signal ```
int32_t q_scilexercsharp_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, int32_t (*slot)(QsciLexerCSharp*, const char*) ```
void q_scilexercsharp_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
bool q_scilexercsharp_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, QMetaMethod* signal ```
bool q_scilexercsharp_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCSharp* self, bool (*slot)(QsciLexerCSharp*, QMetaMethod*) ```
void q_scilexercsharp_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerCSharp* self ```
void q_scilexercsharp_delete(void* self);

#endif
