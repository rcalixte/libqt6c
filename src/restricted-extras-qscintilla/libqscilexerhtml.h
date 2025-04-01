#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERHTML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCILEXERHTML_H

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

/// https://doc.qt.io/qt-6/qscilexerhtml.html

/// q_scilexerhtml_new constructs a new QsciLexerHTML object.
///
///
QsciLexerHTML* q_scilexerhtml_new();

/// q_scilexerhtml_new2 constructs a new QsciLexerHTML object.
///
/// ``` QObject* parent ```
QsciLexerHTML* q_scilexerhtml_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerHTML* self ```
QMetaObject* q_scilexerhtml_meta_object(void* self);

/// ``` QsciLexerHTML* self, const char* param1 ```
void* q_scilexerhtml_metacast(void* self, const char* param1);

/// ``` QsciLexerHTML* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerhtml_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)(QsciLexerHTML*, enum QMetaObject__Call, int, void*) ```
void q_scilexerhtml_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerhtml_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerhtml_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#language)
///
/// ``` QsciLexerHTML* self ```
const char* q_scilexerhtml_language(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#lexer)
///
/// ``` QsciLexerHTML* self ```
const char* q_scilexerhtml_lexer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#autoCompletionFillups)
///
/// ``` QsciLexerHTML* self ```
const char* q_scilexerhtml_auto_completion_fillups(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#wordCharacters)
///
/// ``` QsciLexerHTML* self ```
const char* q_scilexerhtml_word_characters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#defaultColor)
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_default_color(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#defaultEolFill)
///
/// ``` QsciLexerHTML* self, int style ```
bool q_scilexerhtml_default_eol_fill(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#defaultFont)
///
/// ``` QsciLexerHTML* self, int style ```
QFont* q_scilexerhtml_default_font(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#defaultPaper)
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_default_paper(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#keywords)
///
/// ``` QsciLexerHTML* self, int set ```
const char* q_scilexerhtml_keywords(void* self, int set);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#description)
///
/// ``` QsciLexerHTML* self, int style ```
const char* q_scilexerhtml_description(void* self, int style);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#refreshProperties)
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_refresh_properties(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#caseSensitiveTags)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_case_sensitive_tags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setDjangoTemplates)
///
/// ``` QsciLexerHTML* self, bool enabled ```
void q_scilexerhtml_set_django_templates(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#djangoTemplates)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_django_templates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldCompact)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_fold_compact(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldPreprocessor)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_fold_preprocessor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldScriptComments)
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_set_fold_script_comments(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldScriptComments)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_fold_script_comments(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldScriptHeredocs)
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_set_fold_script_heredocs(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#foldScriptHeredocs)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_fold_script_heredocs(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setMakoTemplates)
///
/// ``` QsciLexerHTML* self, bool enabled ```
void q_scilexerhtml_set_mako_templates(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#makoTemplates)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_mako_templates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldCompact)
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_set_fold_compact(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, bool) ```
void q_scilexerhtml_on_set_fold_compact(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_qbase_set_fold_compact(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setFoldPreprocessor)
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_set_fold_preprocessor(void* self, bool fold);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, bool) ```
void q_scilexerhtml_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, bool fold ```
void q_scilexerhtml_qbase_set_fold_preprocessor(void* self, bool fold);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#setCaseSensitiveTags)
///
/// ``` QsciLexerHTML* self, bool sens ```
void q_scilexerhtml_set_case_sensitive_tags(void* self, bool sens);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, bool) ```
void q_scilexerhtml_on_set_case_sensitive_tags(void* self, void (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, bool sens ```
void q_scilexerhtml_qbase_set_case_sensitive_tags(void* self, bool sens);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#readProperties)
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_read_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, QSettings*, const char*) ```
void q_scilexerhtml_on_read_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_qbase_read_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerhtml.html#writeProperties)
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_write_properties(void* self, void* qs, const char* prefix);

/// Allows for overriding the related default method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, QSettings*, const char*) ```
void q_scilexerhtml_on_write_properties(void* self, bool (*slot)(void*, void*, const char*));

/// Base class method implementation
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_qbase_write_properties(void* self, void* qs, const char* prefix);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerhtml_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerhtml_tr3(const char* s, const char* c, int n);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerHTML* self ```
QsciAbstractAPIs* q_scilexerhtml_apis(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_auto_indent_style(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerHTML* self ```
QsciScintilla* q_scilexerhtml_editor(void* self);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerHTML* self, QsciAbstractAPIs* apis ```
void q_scilexerhtml_set_a_p_is(void* self, void* apis);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerHTML* self, QColor* c ```
void q_scilexerhtml_set_default_color(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerHTML* self, QFont* f ```
void q_scilexerhtml_set_default_font(void* self, void* f);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerHTML* self, QColor* c ```
void q_scilexerhtml_set_default_paper(void* self, void* c);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerHTML* self, QSettings* qs ```
bool q_scilexerhtml_read_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerHTML* self, QSettings* qs ```
bool q_scilexerhtml_write_settings(void* self, void* qs);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_color_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerhtml_on_color_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerHTML* self, bool eolfilled, int style ```
void q_scilexerhtml_eol_fill_changed(void* self, bool eolfilled, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerhtml_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerHTML* self, QFont* f, int style ```
void q_scilexerhtml_font_changed(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerhtml_on_font_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_paper_changed(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerhtml_on_paper_changed(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerHTML* self, const char* prop, const char* val ```
void q_scilexerhtml_property_changed(void* self, const char* prop, const char* val);

/// Inherited from QsciLexer
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerhtml_on_property_changed(void* self, void (*slot)(void*, const char*, const char*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_read_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerHTML* self, QSettings* qs, const char* prefix ```
bool q_scilexerhtml_write_settings2(void* self, void* qs, const char* prefix);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerHTML* self ```
const char* q_scilexerhtml_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerHTML* self, const char* name ```
void q_scilexerhtml_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerHTML* self, bool b ```
bool q_scilexerhtml_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerHTML* self ```
QThread* q_scilexerhtml_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerHTML* self, QThread* thread ```
void q_scilexerhtml_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerHTML* self, int interval ```
int32_t q_scilexerhtml_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerHTML* self, int id ```
void q_scilexerhtml_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerHTML* self ```
libqt_list /* of QObject* */ q_scilexerhtml_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerHTML* self, QObject* parent ```
void q_scilexerhtml_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerHTML* self, QObject* filterObj ```
void q_scilexerhtml_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerHTML* self, QObject* obj ```
void q_scilexerhtml_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerhtml_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerHTML* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerhtml_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerhtml_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerhtml_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerHTML* self, const char* name, QVariant* value ```
bool q_scilexerhtml_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerHTML* self, const char* name ```
QVariant* q_scilexerhtml_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerHTML* self ```
const char** q_scilexerhtml_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerHTML* self ```
QBindingStorage* q_scilexerhtml_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerHTML* self ```
QBindingStorage* q_scilexerhtml_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QsciLexerHTML* self, void (*slot)(QObject*) ```
void q_scilexerhtml_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerHTML* self ```
QObject* q_scilexerhtml_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerHTML* self, const char* classname ```
bool q_scilexerhtml_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerHTML* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerhtml_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerhtml_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerHTML* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerhtml_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerHTML* self, QObject* param1 ```
void q_scilexerhtml_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QsciLexerHTML* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerhtml_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_lexer_id(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_lexer_id(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
const char** q_scilexerhtml_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
const char** q_scilexerhtml_qbase_auto_completion_word_separators(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, const char** (*slot)() ```
void q_scilexerhtml_on_auto_completion_word_separators(void* self, const char** (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_qbase_block_end(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, const char* (*slot)(QsciLexerHTML*, int*) ```
void q_scilexerhtml_on_block_end(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_block_lookback(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_block_lookback(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_qbase_block_start(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, const char* (*slot)(QsciLexerHTML*, int*) ```
void q_scilexerhtml_on_block_start(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int* style ```
const char* q_scilexerhtml_qbase_block_start_keyword(void* self, int* style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, const char* (*slot)(QsciLexerHTML*, int*) ```
void q_scilexerhtml_on_block_start_keyword(void* self, const char* (*slot)(void*, int*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_brace_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_brace_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
bool q_scilexerhtml_qbase_case_sensitive(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool (*slot)() ```
void q_scilexerhtml_on_case_sensitive(void* self, bool (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_qbase_color(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_color(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
bool q_scilexerhtml_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
bool q_scilexerhtml_qbase_eol_fill(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_eol_fill(void* self, bool (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QFont* q_scilexerhtml_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QFont* q_scilexerhtml_qbase_font(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QFont* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_font(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_indentation_guide_view(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_indentation_guide_view(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_default_style(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_default_style(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_qbase_paper(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_paper(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_qbase_default_color_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_default_color_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QFont* q_scilexerhtml_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QFont* q_scilexerhtml_qbase_default_font_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QFont* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_default_font_with_style(void* self, QFont* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int style ```
QColor* q_scilexerhtml_qbase_default_paper_with_style(void* self, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QsciScintilla* editor ```
void q_scilexerhtml_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QsciScintilla* editor ```
void q_scilexerhtml_qbase_set_editor(void* self, void* editor);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QsciScintilla*) ```
void q_scilexerhtml_on_set_editor(void* self, void (*slot)(void*, void*));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_style_bits_needed(void* self);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_style_bits_needed(void* self, int32_t (*slot)());

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, int autoindentstyle ```
void q_scilexerhtml_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int autoindentstyle ```
void q_scilexerhtml_qbase_set_auto_indent_style(void* self, int autoindentstyle);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, int) ```
void q_scilexerhtml_on_set_auto_indent_style(void* self, void (*slot)(void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_qbase_set_color(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QColor*, int) ```
void q_scilexerhtml_on_set_color(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, bool eoffill, int style ```
void q_scilexerhtml_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool eoffill, int style ```
void q_scilexerhtml_qbase_set_eol_fill(void* self, bool eoffill, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, bool, int) ```
void q_scilexerhtml_on_set_eol_fill(void* self, void (*slot)(void*, bool, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QFont* f, int style ```
void q_scilexerhtml_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QFont* f, int style ```
void q_scilexerhtml_qbase_set_font(void* self, void* f, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QFont*, int) ```
void q_scilexerhtml_on_set_font(void* self, void (*slot)(void*, void*, int));

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QColor* c, int style ```
void q_scilexerhtml_qbase_set_paper(void* self, void* c, int style);

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QColor*, int) ```
void q_scilexerhtml_on_set_paper(void* self, void (*slot)(void*, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QEvent* event ```
bool q_scilexerhtml_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QEvent* event ```
bool q_scilexerhtml_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, QEvent*) ```
void q_scilexerhtml_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QObject* watched, QEvent* event ```
bool q_scilexerhtml_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QObject* watched, QEvent* event ```
bool q_scilexerhtml_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, QObject*, QEvent*) ```
void q_scilexerhtml_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QTimerEvent* event ```
void q_scilexerhtml_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QTimerEvent* event ```
void q_scilexerhtml_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QTimerEvent*) ```
void q_scilexerhtml_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QChildEvent* event ```
void q_scilexerhtml_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QChildEvent* event ```
void q_scilexerhtml_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QChildEvent*) ```
void q_scilexerhtml_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QEvent* event ```
void q_scilexerhtml_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QEvent* event ```
void q_scilexerhtml_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QEvent*) ```
void q_scilexerhtml_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
void q_scilexerhtml_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
void q_scilexerhtml_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QMetaMethod*) ```
void q_scilexerhtml_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
void q_scilexerhtml_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
void q_scilexerhtml_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, void (*slot)(QsciLexerHTML*, QMetaMethod*) ```
void q_scilexerhtml_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
QObject* q_scilexerhtml_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
QObject* q_scilexerhtml_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QObject* (*slot)() ```
void q_scilexerhtml_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self ```
int32_t q_scilexerhtml_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)() ```
void q_scilexerhtml_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, const char* signal ```
int32_t q_scilexerhtml_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, const char* signal ```
int32_t q_scilexerhtml_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, int32_t (*slot)(QsciLexerHTML*, const char*) ```
void q_scilexerhtml_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
bool q_scilexerhtml_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerHTML* self, QMetaMethod* signal ```
bool q_scilexerhtml_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerHTML* self, bool (*slot)(QsciLexerHTML*, QMetaMethod*) ```
void q_scilexerhtml_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QsciLexerHTML* self ```
void q_scilexerhtml_delete(void* self);

/// https://doc.qt.io/qt-6/qscilexerhtml.html#types

typedef enum {
    QSCILEXERHTML__DEFAULT = 0,
    QSCILEXERHTML__TAG = 1,
    QSCILEXERHTML__UNKNOWNTAG = 2,
    QSCILEXERHTML__ATTRIBUTE = 3,
    QSCILEXERHTML__UNKNOWNATTRIBUTE = 4,
    QSCILEXERHTML__HTMLNUMBER = 5,
    QSCILEXERHTML__HTMLDOUBLEQUOTEDSTRING = 6,
    QSCILEXERHTML__HTMLSINGLEQUOTEDSTRING = 7,
    QSCILEXERHTML__OTHERINTAG = 8,
    QSCILEXERHTML__HTMLCOMMENT = 9,
    QSCILEXERHTML__ENTITY = 10,
    QSCILEXERHTML__XMLTAGEND = 11,
    QSCILEXERHTML__XMLSTART = 12,
    QSCILEXERHTML__XMLEND = 13,
    QSCILEXERHTML__SCRIPT = 14,
    QSCILEXERHTML__ASPATSTART = 15,
    QSCILEXERHTML__ASPSTART = 16,
    QSCILEXERHTML__CDATA = 17,
    QSCILEXERHTML__PHPSTART = 18,
    QSCILEXERHTML__HTMLVALUE = 19,
    QSCILEXERHTML__ASPXCCOMMENT = 20,
    QSCILEXERHTML__SGMLDEFAULT = 21,
    QSCILEXERHTML__SGMLCOMMAND = 22,
    QSCILEXERHTML__SGMLPARAMETER = 23,
    QSCILEXERHTML__SGMLDOUBLEQUOTEDSTRING = 24,
    QSCILEXERHTML__SGMLSINGLEQUOTEDSTRING = 25,
    QSCILEXERHTML__SGMLERROR = 26,
    QSCILEXERHTML__SGMLSPECIAL = 27,
    QSCILEXERHTML__SGMLENTITY = 28,
    QSCILEXERHTML__SGMLCOMMENT = 29,
    QSCILEXERHTML__SGMLPARAMETERCOMMENT = 30,
    QSCILEXERHTML__SGMLBLOCKDEFAULT = 31,
    QSCILEXERHTML__JAVASCRIPTSTART = 40,
    QSCILEXERHTML__JAVASCRIPTDEFAULT = 41,
    QSCILEXERHTML__JAVASCRIPTCOMMENT = 42,
    QSCILEXERHTML__JAVASCRIPTCOMMENTLINE = 43,
    QSCILEXERHTML__JAVASCRIPTCOMMENTDOC = 44,
    QSCILEXERHTML__JAVASCRIPTNUMBER = 45,
    QSCILEXERHTML__JAVASCRIPTWORD = 46,
    QSCILEXERHTML__JAVASCRIPTKEYWORD = 47,
    QSCILEXERHTML__JAVASCRIPTDOUBLEQUOTEDSTRING = 48,
    QSCILEXERHTML__JAVASCRIPTSINGLEQUOTEDSTRING = 49,
    QSCILEXERHTML__JAVASCRIPTSYMBOL = 50,
    QSCILEXERHTML__JAVASCRIPTUNCLOSEDSTRING = 51,
    QSCILEXERHTML__JAVASCRIPTREGEX = 52,
    QSCILEXERHTML__ASPJAVASCRIPTSTART = 55,
    QSCILEXERHTML__ASPJAVASCRIPTDEFAULT = 56,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENT = 57,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTLINE = 58,
    QSCILEXERHTML__ASPJAVASCRIPTCOMMENTDOC = 59,
    QSCILEXERHTML__ASPJAVASCRIPTNUMBER = 60,
    QSCILEXERHTML__ASPJAVASCRIPTWORD = 61,
    QSCILEXERHTML__ASPJAVASCRIPTKEYWORD = 62,
    QSCILEXERHTML__ASPJAVASCRIPTDOUBLEQUOTEDSTRING = 63,
    QSCILEXERHTML__ASPJAVASCRIPTSINGLEQUOTEDSTRING = 64,
    QSCILEXERHTML__ASPJAVASCRIPTSYMBOL = 65,
    QSCILEXERHTML__ASPJAVASCRIPTUNCLOSEDSTRING = 66,
    QSCILEXERHTML__ASPJAVASCRIPTREGEX = 67,
    QSCILEXERHTML__VBSCRIPTSTART = 70,
    QSCILEXERHTML__VBSCRIPTDEFAULT = 71,
    QSCILEXERHTML__VBSCRIPTCOMMENT = 72,
    QSCILEXERHTML__VBSCRIPTNUMBER = 73,
    QSCILEXERHTML__VBSCRIPTKEYWORD = 74,
    QSCILEXERHTML__VBSCRIPTSTRING = 75,
    QSCILEXERHTML__VBSCRIPTIDENTIFIER = 76,
    QSCILEXERHTML__VBSCRIPTUNCLOSEDSTRING = 77,
    QSCILEXERHTML__ASPVBSCRIPTSTART = 80,
    QSCILEXERHTML__ASPVBSCRIPTDEFAULT = 81,
    QSCILEXERHTML__ASPVBSCRIPTCOMMENT = 82,
    QSCILEXERHTML__ASPVBSCRIPTNUMBER = 83,
    QSCILEXERHTML__ASPVBSCRIPTKEYWORD = 84,
    QSCILEXERHTML__ASPVBSCRIPTSTRING = 85,
    QSCILEXERHTML__ASPVBSCRIPTIDENTIFIER = 86,
    QSCILEXERHTML__ASPVBSCRIPTUNCLOSEDSTRING = 87,
    QSCILEXERHTML__PYTHONSTART = 90,
    QSCILEXERHTML__PYTHONDEFAULT = 91,
    QSCILEXERHTML__PYTHONCOMMENT = 92,
    QSCILEXERHTML__PYTHONNUMBER = 93,
    QSCILEXERHTML__PYTHONDOUBLEQUOTEDSTRING = 94,
    QSCILEXERHTML__PYTHONSINGLEQUOTEDSTRING = 95,
    QSCILEXERHTML__PYTHONKEYWORD = 96,
    QSCILEXERHTML__PYTHONTRIPLESINGLEQUOTEDSTRING = 97,
    QSCILEXERHTML__PYTHONTRIPLEDOUBLEQUOTEDSTRING = 98,
    QSCILEXERHTML__PYTHONCLASSNAME = 99,
    QSCILEXERHTML__PYTHONFUNCTIONMETHODNAME = 100,
    QSCILEXERHTML__PYTHONOPERATOR = 101,
    QSCILEXERHTML__PYTHONIDENTIFIER = 102,
    QSCILEXERHTML__ASPPYTHONSTART = 105,
    QSCILEXERHTML__ASPPYTHONDEFAULT = 106,
    QSCILEXERHTML__ASPPYTHONCOMMENT = 107,
    QSCILEXERHTML__ASPPYTHONNUMBER = 108,
    QSCILEXERHTML__ASPPYTHONDOUBLEQUOTEDSTRING = 109,
    QSCILEXERHTML__ASPPYTHONSINGLEQUOTEDSTRING = 110,
    QSCILEXERHTML__ASPPYTHONKEYWORD = 111,
    QSCILEXERHTML__ASPPYTHONTRIPLESINGLEQUOTEDSTRING = 112,
    QSCILEXERHTML__ASPPYTHONTRIPLEDOUBLEQUOTEDSTRING = 113,
    QSCILEXERHTML__ASPPYTHONCLASSNAME = 114,
    QSCILEXERHTML__ASPPYTHONFUNCTIONMETHODNAME = 115,
    QSCILEXERHTML__ASPPYTHONOPERATOR = 116,
    QSCILEXERHTML__ASPPYTHONIDENTIFIER = 117,
    QSCILEXERHTML__PHPDEFAULT = 118,
    QSCILEXERHTML__PHPDOUBLEQUOTEDSTRING = 119,
    QSCILEXERHTML__PHPSINGLEQUOTEDSTRING = 120,
    QSCILEXERHTML__PHPKEYWORD = 121,
    QSCILEXERHTML__PHPNUMBER = 122,
    QSCILEXERHTML__PHPVARIABLE = 123,
    QSCILEXERHTML__PHPCOMMENT = 124,
    QSCILEXERHTML__PHPCOMMENTLINE = 125,
    QSCILEXERHTML__PHPDOUBLEQUOTEDVARIABLE = 126,
    QSCILEXERHTML__PHPOPERATOR = 127
} QsciLexerHTML__;

#endif
