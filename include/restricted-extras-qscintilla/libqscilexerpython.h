#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPYTHON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERPYTHON_H

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

/// https://doc.qt.io/qt-6/qscilexerpython.html

/// q_scilexerpython_new constructs a new QsciLexerPython object.
///
///
QsciLexerPython* q_scilexerpython_new();

/// q_scilexerpython_new2 constructs a new QsciLexerPython object.
///
/// ``` QObject* parent ```
QsciLexerPython* q_scilexerpython_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPython* self ```
QMetaObject* q_scilexerpython_meta_object(void* self);

/// ``` QsciLexerPython* self, const char* param1 ```
void* q_scilexerpython_metacast(void* self, const char* param1);

/// ``` QsciLexerPython* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpython_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, int32_t (*slot)(QsciLexerPython*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpython_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpython_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpython_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#language)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#lexer)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerPython* self ```
const char** q_scilexerpython_auto_completion_word_separators(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockLookback)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_block_lookback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_block_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#braceStyle)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_brace_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultColor)
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultEolFill)
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultFont)
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultPaper)
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationGuideView)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_indentation_guide_view(void* self);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_indentation_guide_view(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#keywords)
///
/// ``` QsciLexerPython* self, int set ```
const char* q_scilexerpython_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#description)
///
/// ``` QsciLexerPython* self, int style ```
const char* q_scilexerpython_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#refreshProperties)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldComments)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_comments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldCompact)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldCompact)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldQuotes)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_quotes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationWarning)
///
/// ``` QsciLexerPython* self ```
int64_t q_scilexerpython_indentation_warning(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setHighlightSubidentifiers)
///
/// ``` QsciLexerPython* self, bool enabled ```
void q_scilexerpython_set_highlight_subidentifiers(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#highlightSubidentifiers)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_highlight_subidentifiers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setStringsOverNewlineAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_strings_over_newline_allowed(void* self, bool allowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#stringsOverNewlineAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_strings_over_newline_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV2UnicodeAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v2_unicode_allowed(void* self, bool allowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v2UnicodeAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v2_unicode_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BinaryOctalAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v3_binary_octal_allowed(void* self, bool allowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BinaryOctalAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v3_binary_octal_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BytesAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v3_bytes_allowed(void* self, bool allowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BytesAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v3_bytes_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldComments)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_comments(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool) ```
void q_scilexerpython_on_set_fold_comments(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_qbase_set_fold_comments(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldQuotes)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_quotes(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool) ```
void q_scilexerpython_on_set_fold_quotes(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_qbase_set_fold_quotes(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setIndentationWarning)
///
/// ``` QsciLexerPython* self, enum QsciLexerPython__IndentationWarning warn ```
void q_scilexerpython_set_indentation_warning(void* self, int64_t warn);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, enum QsciLexerPython__IndentationWarning) ```
void q_scilexerpython_on_set_indentation_warning(void* self, void (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, enum QsciLexerPython__IndentationWarning warn ```
void q_scilexerpython_qbase_set_indentation_warning(void* self, int64_t warn);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#readProperties)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QSettings*, const char*) ```
void q_scilexerpython_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#writeProperties)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QSettings*, const char*) ```
void q_scilexerpython_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpython_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpython_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_start1(void* self, int* style);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPython* self ```
QsciAbstractAPIs* q_scilexerpython_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPython* self ```
QsciScintilla* q_scilexerpython_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPython* self, QsciAbstractAPIs* apis ```
void q_scilexerpython_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPython* self, QColor* c ```
void q_scilexerpython_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPython* self, QFont* f ```
void q_scilexerpython_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPython* self, QColor* c ```
void q_scilexerpython_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs ```
bool q_scilexerpython_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs ```
bool q_scilexerpython_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpython_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPython* self, bool eolfilled, int style ```
void q_scilexerpython_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpython_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpython_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpython_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPython* self, const char* prop, const char* val ```
void q_scilexerpython_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpython_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPython* self, char* name ```
void q_scilexerpython_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPython* self, bool b ```
bool q_scilexerpython_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPython* self ```
QThread* q_scilexerpython_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPython* self, QThread* thread ```
void q_scilexerpython_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPython* self, int interval ```
int32_t q_scilexerpython_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPython* self, int id ```
void q_scilexerpython_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPython* self ```
libqt_list /* of QObject* */ q_scilexerpython_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPython* self, QObject* parent ```
void q_scilexerpython_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPython* self, QObject* filterObj ```
void q_scilexerpython_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPython* self, QObject* obj ```
void q_scilexerpython_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpython_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPython* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpython_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpython_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpython_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPython* self, const char* name, QVariant* value ```
bool q_scilexerpython_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPython* self, const char* name ```
QVariant* q_scilexerpython_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPython* self ```
const char** q_scilexerpython_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPython* self ```
QBindingStorage* q_scilexerpython_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPython* self ```
QBindingStorage* q_scilexerpython_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerPython* self, void (*slot)(QObject*) ```
void q_scilexerpython_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPython* self, const char* classname ```
bool q_scilexerpython_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPython* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpython_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpython_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPython* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpython_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPython* self, QObject* param1 ```
void q_scilexerpython_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerPython* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpython_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_qbase_auto_completion_fillups(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)() ```
void q_scilexerpython_on_auto_completion_fillups(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)(QsciLexerPython*, int*) ```
void q_scilexerpython_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)(QsciLexerPython*, int*) ```
void q_scilexerpython_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)() ```
void q_scilexerpython_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QsciScintilla* editor ```
void q_scilexerpython_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QsciScintilla* editor ```
void q_scilexerpython_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QsciScintilla*) ```
void q_scilexerpython_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_qbase_word_characters(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)() ```
void q_scilexerpython_on_word_characters(void* self, const char* (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int autoindentstyle ```
void q_scilexerpython_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int autoindentstyle ```
void q_scilexerpython_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QColor*, int) ```
void q_scilexerpython_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, bool eoffill, int style ```
void q_scilexerpython_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool eoffill, int style ```
void q_scilexerpython_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool, int) ```
void q_scilexerpython_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QFont*, int) ```
void q_scilexerpython_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QColor*, int) ```
void q_scilexerpython_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
bool q_scilexerpython_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
bool q_scilexerpython_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QEvent*) ```
void q_scilexerpython_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* watched, QEvent* event ```
bool q_scilexerpython_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* watched, QEvent* event ```
bool q_scilexerpython_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QObject*, QEvent*) ```
void q_scilexerpython_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QTimerEvent* event ```
void q_scilexerpython_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QTimerEvent* event ```
void q_scilexerpython_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QTimerEvent*) ```
void q_scilexerpython_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QChildEvent* event ```
void q_scilexerpython_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QChildEvent* event ```
void q_scilexerpython_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QChildEvent*) ```
void q_scilexerpython_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
void q_scilexerpython_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
void q_scilexerpython_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QEvent*) ```
void q_scilexerpython_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* (*slot)() ```
void q_scilexerpython_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, const char* signal ```
int32_t q_scilexerpython_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* signal ```
int32_t q_scilexerpython_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)(QsciLexerPython*, const char*) ```
void q_scilexerpython_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
bool q_scilexerpython_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
bool q_scilexerpython_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerpython.html#types

typedef enum {
    QSCILEXERPYTHON__DEFAULT = 0,
    QSCILEXERPYTHON__COMMENT = 1,
    QSCILEXERPYTHON__NUMBER = 2,
    QSCILEXERPYTHON__DOUBLEQUOTEDSTRING = 3,
    QSCILEXERPYTHON__SINGLEQUOTEDSTRING = 4,
    QSCILEXERPYTHON__KEYWORD = 5,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDSTRING = 6,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDSTRING = 7,
    QSCILEXERPYTHON__CLASSNAME = 8,
    QSCILEXERPYTHON__FUNCTIONMETHODNAME = 9,
    QSCILEXERPYTHON__OPERATOR = 10,
    QSCILEXERPYTHON__IDENTIFIER = 11,
    QSCILEXERPYTHON__COMMENTBLOCK = 12,
    QSCILEXERPYTHON__UNCLOSEDSTRING = 13,
    QSCILEXERPYTHON__HIGHLIGHTEDIDENTIFIER = 14,
    QSCILEXERPYTHON__DECORATOR = 15,
    QSCILEXERPYTHON__DOUBLEQUOTEDFSTRING = 16,
    QSCILEXERPYTHON__SINGLEQUOTEDFSTRING = 17,
    QSCILEXERPYTHON__TRIPLESINGLEQUOTEDFSTRING = 18,
    QSCILEXERPYTHON__TRIPLEDOUBLEQUOTEDFSTRING = 19
} QsciLexerPython__;

typedef enum {
    QSCILEXERPYTHON_INDENTATIONWARNING_NOWARNING = 0,
    QSCILEXERPYTHON_INDENTATIONWARNING_INCONSISTENT = 1,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABSAFTERSPACES = 2,
    QSCILEXERPYTHON_INDENTATIONWARNING_SPACES = 3,
    QSCILEXERPYTHON_INDENTATIONWARNING_TABS = 4
} QsciLexerPython__IndentationWarning;

#endif
