#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerjson.hpp"
#include "libqscilexerjson.h"

/// https://doc.qt.io/qt-6/qscilexerjson.html

/// q_scilexerjson_new constructs a new QsciLexerJSON object.
///
///
QsciLexerJSON* q_scilexerjson_new() {
    return QsciLexerJSON_new();
}

/// q_scilexerjson_new2 constructs a new QsciLexerJSON object.
///
/// ``` QObject* parent ```
QsciLexerJSON* q_scilexerjson_new2(void* parent) {
    return QsciLexerJSON_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerJSON* self ```
QMetaObject* q_scilexerjson_meta_object(void* self) {
    return QsciLexerJSON_MetaObject((QsciLexerJSON*)self);
}

/// ``` QsciLexerJSON* self, const char* param1 ```
void* q_scilexerjson_metacast(void* self, const char* param1) {
    return QsciLexerJSON_Metacast((QsciLexerJSON*)self, param1);
}

/// ``` QsciLexerJSON* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjson_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJSON_Metacall((QsciLexerJSON*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)(QsciLexerJSON*, enum QMetaObject__Call, int, void*) ```
void q_scilexerjson_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerJSON_OnMetacall((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerJSON* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerjson_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJSON_QBaseMetacall((QsciLexerJSON*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerjson_tr(const char* s) {
    libqt_string _str = QsciLexerJSON_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#language)
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_language(void* self) {
    return QsciLexerJSON_Language((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#lexer)
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_lexer(void* self) {
    return QsciLexerJSON_Lexer((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#defaultColor)
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_default_color(void* self, int style) {
    return QsciLexerJSON_DefaultColor((QsciLexerJSON*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#defaultEolFill)
///
/// ``` QsciLexerJSON* self, int style ```
bool q_scilexerjson_default_eol_fill(void* self, int style) {
    return QsciLexerJSON_DefaultEolFill((QsciLexerJSON*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#defaultFont)
///
/// ``` QsciLexerJSON* self, int style ```
QFont* q_scilexerjson_default_font(void* self, int style) {
    return QsciLexerJSON_DefaultFont((QsciLexerJSON*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#defaultPaper)
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_default_paper(void* self, int style) {
    return QsciLexerJSON_DefaultPaper((QsciLexerJSON*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#keywords)
///
/// ``` QsciLexerJSON* self, int set ```
const char* q_scilexerjson_keywords(void* self, int set) {
    return QsciLexerJSON_Keywords((QsciLexerJSON*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#description)
///
/// ``` QsciLexerJSON* self, int style ```
const char* q_scilexerjson_description(void* self, int style) {
    libqt_string _str = QsciLexerJSON_Description((QsciLexerJSON*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#refreshProperties)
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_refresh_properties(void* self) {
    QsciLexerJSON_RefreshProperties((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#setHighlightComments)
///
/// ``` QsciLexerJSON* self, bool highlight ```
void q_scilexerjson_set_highlight_comments(void* self, bool highlight) {
    QsciLexerJSON_SetHighlightComments((QsciLexerJSON*)self, highlight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#highlightComments)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_highlight_comments(void* self) {
    return QsciLexerJSON_HighlightComments((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#setHighlightEscapeSequences)
///
/// ``` QsciLexerJSON* self, bool highlight ```
void q_scilexerjson_set_highlight_escape_sequences(void* self, bool highlight) {
    QsciLexerJSON_SetHighlightEscapeSequences((QsciLexerJSON*)self, highlight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#highlightEscapeSequences)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_highlight_escape_sequences(void* self) {
    return QsciLexerJSON_HighlightEscapeSequences((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#setFoldCompact)
///
/// ``` QsciLexerJSON* self, bool fold ```
void q_scilexerjson_set_fold_compact(void* self, bool fold) {
    QsciLexerJSON_SetFoldCompact((QsciLexerJSON*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#foldCompact)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_fold_compact(void* self) {
    return QsciLexerJSON_FoldCompact((QsciLexerJSON*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#readProperties)
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_ReadProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, QSettings*, const char*) ```
void q_scilexerjson_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJSON_OnReadProperties((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_QBaseReadProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerjson.html#writeProperties)
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_WriteProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, QSettings*, const char*) ```
void q_scilexerjson_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJSON_OnWriteProperties((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_QBaseWriteProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerjson_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerJSON_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerjson_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerJSON_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerJSON* self ```
QsciAbstractAPIs* q_scilexerjson_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerJSON* self ```
QsciScintilla* q_scilexerjson_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerJSON* self, QsciAbstractAPIs* apis ```
void q_scilexerjson_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerJSON* self, QColor* c ```
void q_scilexerjson_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerJSON* self, QFont* f ```
void q_scilexerjson_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerJSON* self, QColor* c ```
void q_scilexerjson_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerJSON* self, QSettings* qs ```
bool q_scilexerjson_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerJSON* self, QSettings* qs ```
bool q_scilexerjson_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerjson_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerJSON* self, bool eolfilled, int style ```
void q_scilexerjson_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerjson_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerJSON* self, QFont* f, int style ```
void q_scilexerjson_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerjson_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerjson_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerJSON* self, const char* prop, const char* val ```
void q_scilexerjson_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerjson_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerJSON* self, QSettings* qs, const char* prefix ```
bool q_scilexerjson_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerJSON* self, const char* name ```
void q_scilexerjson_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerJSON* self, bool b ```
bool q_scilexerjson_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerJSON* self ```
QThread* q_scilexerjson_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerJSON* self, QThread* thread ```
void q_scilexerjson_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJSON* self, int interval ```
int32_t q_scilexerjson_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerJSON* self, int id ```
void q_scilexerjson_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerJSON* self ```
libqt_list /* of QObject* */ q_scilexerjson_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerJSON* self, QObject* parent ```
void q_scilexerjson_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerJSON* self, QObject* filterObj ```
void q_scilexerjson_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerJSON* self, QObject* obj ```
void q_scilexerjson_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerjson_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJSON* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerjson_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerjson_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerjson_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerJSON* self, const char* name, QVariant* value ```
bool q_scilexerjson_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerJSON* self, const char* name ```
QVariant* q_scilexerjson_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerJSON* self ```
const char** q_scilexerjson_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerJSON* self ```
QBindingStorage* q_scilexerjson_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerJSON* self ```
QBindingStorage* q_scilexerjson_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerJSON* self, void (*slot)(QObject*) ```
void q_scilexerjson_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerJSON* self ```
QObject* q_scilexerjson_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerJSON* self, const char* classname ```
bool q_scilexerjson_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerJSON* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerjson_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjson_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerJSON* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerjson_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerJSON* self, QObject* param1 ```
void q_scilexerjson_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerJSON* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerjson_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_lexer_id(void* self) {
    return QsciLexerJSON_LexerId((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_lexer_id(void* self) {
    return QsciLexerJSON_QBaseLexerId((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnLexerId((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_auto_completion_fillups(void* self) {
    return QsciLexerJSON_AutoCompletionFillups((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJSON_QBaseAutoCompletionFillups((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* (*slot)() ```
void q_scilexerjson_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerJSON_OnAutoCompletionFillups((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char** q_scilexerjson_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJSON_AutoCompletionWordSeparators((QsciLexerJSON*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char** q_scilexerjson_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJSON_QBaseAutoCompletionWordSeparators((QsciLexerJSON*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char** (*slot)() ```
void q_scilexerjson_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerJSON_OnAutoCompletionWordSeparators((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_block_end(void* self, int* style) {
    return QsciLexerJSON_BlockEnd((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_qbase_block_end(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockEnd((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* (*slot)(QsciLexerJSON*, int*) ```
void q_scilexerjson_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJSON_OnBlockEnd((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_block_lookback(void* self) {
    return QsciLexerJSON_BlockLookback((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_block_lookback(void* self) {
    return QsciLexerJSON_QBaseBlockLookback((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnBlockLookback((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_block_start(void* self, int* style) {
    return QsciLexerJSON_BlockStart((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_qbase_block_start(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockStart((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* (*slot)(QsciLexerJSON*, int*) ```
void q_scilexerjson_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJSON_OnBlockStart((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_block_start_keyword(void* self, int* style) {
    return QsciLexerJSON_BlockStartKeyword((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int* style ```
const char* q_scilexerjson_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockStartKeyword((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* (*slot)(QsciLexerJSON*, int*) ```
void q_scilexerjson_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJSON_OnBlockStartKeyword((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_brace_style(void* self) {
    return QsciLexerJSON_BraceStyle((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_brace_style(void* self) {
    return QsciLexerJSON_QBaseBraceStyle((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnBraceStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_case_sensitive(void* self) {
    return QsciLexerJSON_CaseSensitive((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
bool q_scilexerjson_qbase_case_sensitive(void* self) {
    return QsciLexerJSON_QBaseCaseSensitive((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool (*slot)() ```
void q_scilexerjson_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerJSON_OnCaseSensitive((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_color(void* self, int style) {
    return QsciLexerJSON_Color((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_qbase_color(void* self, int style) {
    return QsciLexerJSON_QBaseColor((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJSON_OnColor((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
bool q_scilexerjson_eol_fill(void* self, int style) {
    return QsciLexerJSON_EolFill((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
bool q_scilexerjson_qbase_eol_fill(void* self, int style) {
    return QsciLexerJSON_QBaseEolFill((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerJSON_OnEolFill((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QFont* q_scilexerjson_font(void* self, int style) {
    return QsciLexerJSON_Font((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QFont* q_scilexerjson_qbase_font(void* self, int style) {
    return QsciLexerJSON_QBaseFont((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QFont* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJSON_OnFont((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_indentation_guide_view(void* self) {
    return QsciLexerJSON_IndentationGuideView((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_indentation_guide_view(void* self) {
    return QsciLexerJSON_QBaseIndentationGuideView((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnIndentationGuideView((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_default_style(void* self) {
    return QsciLexerJSON_DefaultStyle((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_default_style(void* self) {
    return QsciLexerJSON_QBaseDefaultStyle((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnDefaultStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_paper(void* self, int style) {
    return QsciLexerJSON_Paper((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_qbase_paper(void* self, int style) {
    return QsciLexerJSON_QBasePaper((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJSON_OnPaper((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_default_color_with_style(void* self, int style) {
    return QsciLexerJSON_DefaultColorWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultColorWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJSON_OnDefaultColorWithStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QFont* q_scilexerjson_default_font_with_style(void* self, int style) {
    return QsciLexerJSON_DefaultFontWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QFont* q_scilexerjson_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultFontWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QFont* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJSON_OnDefaultFontWithStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_default_paper_with_style(void* self, int style) {
    return QsciLexerJSON_DefaultPaperWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int style ```
QColor* q_scilexerjson_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultPaperWithStyle((QsciLexerJSON*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJSON_OnDefaultPaperWithStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QsciScintilla* editor ```
void q_scilexerjson_set_editor(void* self, void* editor) {
    QsciLexerJSON_SetEditor((QsciLexerJSON*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QsciScintilla* editor ```
void q_scilexerjson_qbase_set_editor(void* self, void* editor) {
    QsciLexerJSON_QBaseSetEditor((QsciLexerJSON*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QsciScintilla*) ```
void q_scilexerjson_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnSetEditor((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_style_bits_needed(void* self) {
    return QsciLexerJSON_StyleBitsNeeded((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_style_bits_needed(void* self) {
    return QsciLexerJSON_QBaseStyleBitsNeeded((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnStyleBitsNeeded((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_word_characters(void* self) {
    return QsciLexerJSON_WordCharacters((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
const char* q_scilexerjson_qbase_word_characters(void* self) {
    return QsciLexerJSON_QBaseWordCharacters((QsciLexerJSON*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* (*slot)() ```
void q_scilexerjson_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerJSON_OnWordCharacters((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, int autoindentstyle ```
void q_scilexerjson_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJSON_SetAutoIndentStyle((QsciLexerJSON*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int autoindentstyle ```
void q_scilexerjson_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJSON_QBaseSetAutoIndentStyle((QsciLexerJSON*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, int) ```
void q_scilexerjson_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerJSON_OnSetAutoIndentStyle((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_set_color(void* self, void* c, int style) {
    QsciLexerJSON_SetColor((QsciLexerJSON*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJSON_QBaseSetColor((QsciLexerJSON*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QColor*, int) ```
void q_scilexerjson_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJSON_OnSetColor((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, bool eoffill, int style ```
void q_scilexerjson_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJSON_SetEolFill((QsciLexerJSON*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool eoffill, int style ```
void q_scilexerjson_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJSON_QBaseSetEolFill((QsciLexerJSON*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, bool, int) ```
void q_scilexerjson_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerJSON_OnSetEolFill((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QFont* f, int style ```
void q_scilexerjson_set_font(void* self, void* f, int style) {
    QsciLexerJSON_SetFont((QsciLexerJSON*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QFont* f, int style ```
void q_scilexerjson_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJSON_QBaseSetFont((QsciLexerJSON*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QFont*, int) ```
void q_scilexerjson_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJSON_OnSetFont((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_set_paper(void* self, void* c, int style) {
    QsciLexerJSON_SetPaper((QsciLexerJSON*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QColor* c, int style ```
void q_scilexerjson_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJSON_QBaseSetPaper((QsciLexerJSON*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QColor*, int) ```
void q_scilexerjson_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJSON_OnSetPaper((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QEvent* event ```
bool q_scilexerjson_event(void* self, void* event) {
    return QsciLexerJSON_Event((QsciLexerJSON*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QEvent* event ```
bool q_scilexerjson_qbase_event(void* self, void* event) {
    return QsciLexerJSON_QBaseEvent((QsciLexerJSON*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, QEvent*) ```
void q_scilexerjson_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJSON_OnEvent((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QObject* watched, QEvent* event ```
bool q_scilexerjson_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJSON_EventFilter((QsciLexerJSON*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QObject* watched, QEvent* event ```
bool q_scilexerjson_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJSON_QBaseEventFilter((QsciLexerJSON*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, QObject*, QEvent*) ```
void q_scilexerjson_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerJSON_OnEventFilter((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QTimerEvent* event ```
void q_scilexerjson_timer_event(void* self, void* event) {
    QsciLexerJSON_TimerEvent((QsciLexerJSON*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QTimerEvent* event ```
void q_scilexerjson_qbase_timer_event(void* self, void* event) {
    QsciLexerJSON_QBaseTimerEvent((QsciLexerJSON*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QTimerEvent*) ```
void q_scilexerjson_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnTimerEvent((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QChildEvent* event ```
void q_scilexerjson_child_event(void* self, void* event) {
    QsciLexerJSON_ChildEvent((QsciLexerJSON*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QChildEvent* event ```
void q_scilexerjson_qbase_child_event(void* self, void* event) {
    QsciLexerJSON_QBaseChildEvent((QsciLexerJSON*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QChildEvent*) ```
void q_scilexerjson_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnChildEvent((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QEvent* event ```
void q_scilexerjson_custom_event(void* self, void* event) {
    QsciLexerJSON_CustomEvent((QsciLexerJSON*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QEvent* event ```
void q_scilexerjson_qbase_custom_event(void* self, void* event) {
    QsciLexerJSON_QBaseCustomEvent((QsciLexerJSON*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QEvent*) ```
void q_scilexerjson_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnCustomEvent((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
void q_scilexerjson_connect_notify(void* self, void* signal) {
    QsciLexerJSON_ConnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
void q_scilexerjson_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJSON_QBaseConnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QMetaMethod*) ```
void q_scilexerjson_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnConnectNotify((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
void q_scilexerjson_disconnect_notify(void* self, void* signal) {
    QsciLexerJSON_DisconnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
void q_scilexerjson_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJSON_QBaseDisconnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, void (*slot)(QsciLexerJSON*, QMetaMethod*) ```
void q_scilexerjson_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJSON_OnDisconnectNotify((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
QObject* q_scilexerjson_sender(void* self) {
    return QsciLexerJSON_Sender((QsciLexerJSON*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
QObject* q_scilexerjson_qbase_sender(void* self) {
    return QsciLexerJSON_QBaseSender((QsciLexerJSON*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QObject* (*slot)() ```
void q_scilexerjson_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerJSON_OnSender((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_sender_signal_index(void* self) {
    return QsciLexerJSON_SenderSignalIndex((QsciLexerJSON*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self ```
int32_t q_scilexerjson_qbase_sender_signal_index(void* self) {
    return QsciLexerJSON_QBaseSenderSignalIndex((QsciLexerJSON*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)() ```
void q_scilexerjson_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerJSON_OnSenderSignalIndex((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* signal ```
int32_t q_scilexerjson_receivers(void* self, const char* signal) {
    return QsciLexerJSON_Receivers((QsciLexerJSON*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, const char* signal ```
int32_t q_scilexerjson_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJSON_QBaseReceivers((QsciLexerJSON*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, int32_t (*slot)(QsciLexerJSON*, const char*) ```
void q_scilexerjson_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerJSON_OnReceivers((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
bool q_scilexerjson_is_signal_connected(void* self, void* signal) {
    return QsciLexerJSON_IsSignalConnected((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerJSON* self, QMetaMethod* signal ```
bool q_scilexerjson_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJSON_QBaseIsSignalConnected((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerJSON* self, bool (*slot)(QsciLexerJSON*, QMetaMethod*) ```
void q_scilexerjson_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJSON_OnIsSignalConnected((QsciLexerJSON*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerJSON* self ```
void q_scilexerjson_delete(void* self) {
    QsciLexerJSON_Delete((QsciLexerJSON*)(self));
}