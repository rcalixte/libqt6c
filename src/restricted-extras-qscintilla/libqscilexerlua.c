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
#include "libqscilexerlua.hpp"
#include "libqscilexerlua.h"

/// https://doc.qt.io/qt-6/qscilexerlua.html

/// q_scilexerlua_new constructs a new QsciLexerLua object.
///
///
QsciLexerLua* q_scilexerlua_new() {
    return QsciLexerLua_new();
}

/// q_scilexerlua_new2 constructs a new QsciLexerLua object.
///
/// ``` QObject* parent ```
QsciLexerLua* q_scilexerlua_new2(void* parent) {
    return QsciLexerLua_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerLua* self ```
QMetaObject* q_scilexerlua_meta_object(void* self) {
    return QsciLexerLua_MetaObject((QsciLexerLua*)self);
}

/// ``` QsciLexerLua* self, const char* param1 ```
void* q_scilexerlua_metacast(void* self, const char* param1) {
    return QsciLexerLua_Metacast((QsciLexerLua*)self, param1);
}

/// ``` QsciLexerLua* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerlua_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerLua_Metacall((QsciLexerLua*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerLua* self, int32_t (*slot)(QsciLexerLua*, enum QMetaObject__Call, int, void*) ```
void q_scilexerlua_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerLua_OnMetacall((QsciLexerLua*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerLua* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerlua_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerLua_QBaseMetacall((QsciLexerLua*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerlua_tr(const char* s) {
    libqt_string _str = QsciLexerLua_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#language)
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_language(void* self) {
    return QsciLexerLua_Language((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#lexer)
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_lexer(void* self) {
    return QsciLexerLua_Lexer((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerLua* self ```
const char** q_scilexerlua_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerLua_AutoCompletionWordSeparators((QsciLexerLua*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#blockStart)
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_block_start(void* self) {
    return QsciLexerLua_BlockStart((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#braceStyle)
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_brace_style(void* self) {
    return QsciLexerLua_BraceStyle((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#defaultColor)
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_default_color(void* self, int style) {
    return QsciLexerLua_DefaultColor((QsciLexerLua*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#defaultEolFill)
///
/// ``` QsciLexerLua* self, int style ```
bool q_scilexerlua_default_eol_fill(void* self, int style) {
    return QsciLexerLua_DefaultEolFill((QsciLexerLua*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#defaultFont)
///
/// ``` QsciLexerLua* self, int style ```
QFont* q_scilexerlua_default_font(void* self, int style) {
    return QsciLexerLua_DefaultFont((QsciLexerLua*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#defaultPaper)
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_default_paper(void* self, int style) {
    return QsciLexerLua_DefaultPaper((QsciLexerLua*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#keywords)
///
/// ``` QsciLexerLua* self, int set ```
const char* q_scilexerlua_keywords(void* self, int set) {
    return QsciLexerLua_Keywords((QsciLexerLua*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#description)
///
/// ``` QsciLexerLua* self, int style ```
const char* q_scilexerlua_description(void* self, int style) {
    libqt_string _str = QsciLexerLua_Description((QsciLexerLua*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#refreshProperties)
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_refresh_properties(void* self) {
    QsciLexerLua_RefreshProperties((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#foldCompact)
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_fold_compact(void* self) {
    return QsciLexerLua_FoldCompact((QsciLexerLua*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#setFoldCompact)
///
/// ``` QsciLexerLua* self, bool fold ```
void q_scilexerlua_set_fold_compact(void* self, bool fold) {
    QsciLexerLua_SetFoldCompact((QsciLexerLua*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, bool) ```
void q_scilexerlua_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerLua_OnSetFoldCompact((QsciLexerLua*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerLua* self, bool fold ```
void q_scilexerlua_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerLua_QBaseSetFoldCompact((QsciLexerLua*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#readProperties)
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_ReadProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, QSettings*, const char*) ```
void q_scilexerlua_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerLua_OnReadProperties((QsciLexerLua*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_QBaseReadProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#writeProperties)
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_WriteProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, QSettings*, const char*) ```
void q_scilexerlua_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerLua_OnWriteProperties((QsciLexerLua*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_QBaseWriteProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerlua_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerLua_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerlua_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerLua_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerlua.html#blockStart)
///
/// ``` QsciLexerLua* self, int* style ```
const char* q_scilexerlua_block_start1(void* self, int* style) {
    return QsciLexerLua_BlockStart1((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerLua* self ```
QsciAbstractAPIs* q_scilexerlua_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerLua* self ```
QsciScintilla* q_scilexerlua_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerLua* self, QsciAbstractAPIs* apis ```
void q_scilexerlua_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerLua* self, QColor* c ```
void q_scilexerlua_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerLua* self, QFont* f ```
void q_scilexerlua_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerLua* self, QColor* c ```
void q_scilexerlua_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerLua* self, QSettings* qs ```
bool q_scilexerlua_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerLua* self, QSettings* qs ```
bool q_scilexerlua_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerlua_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerLua* self, bool eolfilled, int style ```
void q_scilexerlua_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerlua_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerLua* self, QFont* f, int style ```
void q_scilexerlua_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerlua_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerlua_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerLua* self, const char* prop, const char* val ```
void q_scilexerlua_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerlua_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerLua* self, QSettings* qs, const char* prefix ```
bool q_scilexerlua_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerLua* self, const char* name ```
void q_scilexerlua_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerLua* self, bool b ```
bool q_scilexerlua_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerLua* self ```
QThread* q_scilexerlua_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerLua* self, QThread* thread ```
void q_scilexerlua_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerLua* self, int interval ```
int32_t q_scilexerlua_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerLua* self, int id ```
void q_scilexerlua_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerLua* self ```
libqt_list /* of QObject* */ q_scilexerlua_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerLua* self, QObject* parent ```
void q_scilexerlua_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerLua* self, QObject* filterObj ```
void q_scilexerlua_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerLua* self, QObject* obj ```
void q_scilexerlua_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerlua_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerLua* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerlua_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerlua_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerlua_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerLua* self, const char* name, QVariant* value ```
bool q_scilexerlua_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerLua* self, const char* name ```
QVariant* q_scilexerlua_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerLua* self ```
const char** q_scilexerlua_dynamic_property_names(void* self) {
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
/// ``` QsciLexerLua* self ```
QBindingStorage* q_scilexerlua_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerLua* self ```
QBindingStorage* q_scilexerlua_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerLua* self, void (*slot)(QObject*) ```
void q_scilexerlua_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerLua* self ```
QObject* q_scilexerlua_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerLua* self, const char* classname ```
bool q_scilexerlua_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerLua* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerlua_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerlua_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerLua* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerlua_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerLua* self, QObject* param1 ```
void q_scilexerlua_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerLua* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerlua_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_lexer_id(void* self) {
    return QsciLexerLua_LexerId((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_lexer_id(void* self) {
    return QsciLexerLua_QBaseLexerId((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnLexerId((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_auto_completion_fillups(void* self) {
    return QsciLexerLua_AutoCompletionFillups((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_qbase_auto_completion_fillups(void* self) {
    return QsciLexerLua_QBaseAutoCompletionFillups((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, const char* (*slot)() ```
void q_scilexerlua_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerLua_OnAutoCompletionFillups((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int* style ```
const char* q_scilexerlua_block_end(void* self, int* style) {
    return QsciLexerLua_BlockEnd((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int* style ```
const char* q_scilexerlua_qbase_block_end(void* self, int* style) {
    return QsciLexerLua_QBaseBlockEnd((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, const char* (*slot)(QsciLexerLua*, int*) ```
void q_scilexerlua_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerLua_OnBlockEnd((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_block_lookback(void* self) {
    return QsciLexerLua_BlockLookback((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_block_lookback(void* self) {
    return QsciLexerLua_QBaseBlockLookback((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnBlockLookback((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int* style ```
const char* q_scilexerlua_block_start_keyword(void* self, int* style) {
    return QsciLexerLua_BlockStartKeyword((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int* style ```
const char* q_scilexerlua_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerLua_QBaseBlockStartKeyword((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, const char* (*slot)(QsciLexerLua*, int*) ```
void q_scilexerlua_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerLua_OnBlockStartKeyword((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_case_sensitive(void* self) {
    return QsciLexerLua_CaseSensitive((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
bool q_scilexerlua_qbase_case_sensitive(void* self) {
    return QsciLexerLua_QBaseCaseSensitive((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool (*slot)() ```
void q_scilexerlua_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerLua_OnCaseSensitive((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_color(void* self, int style) {
    return QsciLexerLua_Color((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_qbase_color(void* self, int style) {
    return QsciLexerLua_QBaseColor((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerLua_OnColor((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
bool q_scilexerlua_eol_fill(void* self, int style) {
    return QsciLexerLua_EolFill((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
bool q_scilexerlua_qbase_eol_fill(void* self, int style) {
    return QsciLexerLua_QBaseEolFill((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerLua_OnEolFill((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QFont* q_scilexerlua_font(void* self, int style) {
    return QsciLexerLua_Font((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QFont* q_scilexerlua_qbase_font(void* self, int style) {
    return QsciLexerLua_QBaseFont((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QFont* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerLua_OnFont((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_indentation_guide_view(void* self) {
    return QsciLexerLua_IndentationGuideView((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_indentation_guide_view(void* self) {
    return QsciLexerLua_QBaseIndentationGuideView((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnIndentationGuideView((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_default_style(void* self) {
    return QsciLexerLua_DefaultStyle((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_default_style(void* self) {
    return QsciLexerLua_QBaseDefaultStyle((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnDefaultStyle((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_paper(void* self, int style) {
    return QsciLexerLua_Paper((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_qbase_paper(void* self, int style) {
    return QsciLexerLua_QBasePaper((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerLua_OnPaper((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_default_color_with_style(void* self, int style) {
    return QsciLexerLua_DefaultColorWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerLua_QBaseDefaultColorWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerLua_OnDefaultColorWithStyle((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QFont* q_scilexerlua_default_font_with_style(void* self, int style) {
    return QsciLexerLua_DefaultFontWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QFont* q_scilexerlua_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerLua_QBaseDefaultFontWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QFont* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerLua_OnDefaultFontWithStyle((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_default_paper_with_style(void* self, int style) {
    return QsciLexerLua_DefaultPaperWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int style ```
QColor* q_scilexerlua_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerLua_QBaseDefaultPaperWithStyle((QsciLexerLua*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerLua_OnDefaultPaperWithStyle((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QsciScintilla* editor ```
void q_scilexerlua_set_editor(void* self, void* editor) {
    QsciLexerLua_SetEditor((QsciLexerLua*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QsciScintilla* editor ```
void q_scilexerlua_qbase_set_editor(void* self, void* editor) {
    QsciLexerLua_QBaseSetEditor((QsciLexerLua*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QsciScintilla*) ```
void q_scilexerlua_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnSetEditor((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_style_bits_needed(void* self) {
    return QsciLexerLua_StyleBitsNeeded((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_style_bits_needed(void* self) {
    return QsciLexerLua_QBaseStyleBitsNeeded((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnStyleBitsNeeded((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_word_characters(void* self) {
    return QsciLexerLua_WordCharacters((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
const char* q_scilexerlua_qbase_word_characters(void* self) {
    return QsciLexerLua_QBaseWordCharacters((QsciLexerLua*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, const char* (*slot)() ```
void q_scilexerlua_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerLua_OnWordCharacters((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, int autoindentstyle ```
void q_scilexerlua_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerLua_SetAutoIndentStyle((QsciLexerLua*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, int autoindentstyle ```
void q_scilexerlua_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerLua_QBaseSetAutoIndentStyle((QsciLexerLua*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, int) ```
void q_scilexerlua_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerLua_OnSetAutoIndentStyle((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_set_color(void* self, void* c, int style) {
    QsciLexerLua_SetColor((QsciLexerLua*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_qbase_set_color(void* self, void* c, int style) {
    QsciLexerLua_QBaseSetColor((QsciLexerLua*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QColor*, int) ```
void q_scilexerlua_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerLua_OnSetColor((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, bool eoffill, int style ```
void q_scilexerlua_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerLua_SetEolFill((QsciLexerLua*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool eoffill, int style ```
void q_scilexerlua_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerLua_QBaseSetEolFill((QsciLexerLua*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, bool, int) ```
void q_scilexerlua_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerLua_OnSetEolFill((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QFont* f, int style ```
void q_scilexerlua_set_font(void* self, void* f, int style) {
    QsciLexerLua_SetFont((QsciLexerLua*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QFont* f, int style ```
void q_scilexerlua_qbase_set_font(void* self, void* f, int style) {
    QsciLexerLua_QBaseSetFont((QsciLexerLua*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QFont*, int) ```
void q_scilexerlua_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerLua_OnSetFont((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_set_paper(void* self, void* c, int style) {
    QsciLexerLua_SetPaper((QsciLexerLua*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QColor* c, int style ```
void q_scilexerlua_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerLua_QBaseSetPaper((QsciLexerLua*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QColor*, int) ```
void q_scilexerlua_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerLua_OnSetPaper((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QEvent* event ```
bool q_scilexerlua_event(void* self, void* event) {
    return QsciLexerLua_Event((QsciLexerLua*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QEvent* event ```
bool q_scilexerlua_qbase_event(void* self, void* event) {
    return QsciLexerLua_QBaseEvent((QsciLexerLua*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, QEvent*) ```
void q_scilexerlua_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerLua_OnEvent((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QObject* watched, QEvent* event ```
bool q_scilexerlua_event_filter(void* self, void* watched, void* event) {
    return QsciLexerLua_EventFilter((QsciLexerLua*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QObject* watched, QEvent* event ```
bool q_scilexerlua_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerLua_QBaseEventFilter((QsciLexerLua*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, QObject*, QEvent*) ```
void q_scilexerlua_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerLua_OnEventFilter((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QTimerEvent* event ```
void q_scilexerlua_timer_event(void* self, void* event) {
    QsciLexerLua_TimerEvent((QsciLexerLua*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QTimerEvent* event ```
void q_scilexerlua_qbase_timer_event(void* self, void* event) {
    QsciLexerLua_QBaseTimerEvent((QsciLexerLua*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QTimerEvent*) ```
void q_scilexerlua_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnTimerEvent((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QChildEvent* event ```
void q_scilexerlua_child_event(void* self, void* event) {
    QsciLexerLua_ChildEvent((QsciLexerLua*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QChildEvent* event ```
void q_scilexerlua_qbase_child_event(void* self, void* event) {
    QsciLexerLua_QBaseChildEvent((QsciLexerLua*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QChildEvent*) ```
void q_scilexerlua_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnChildEvent((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QEvent* event ```
void q_scilexerlua_custom_event(void* self, void* event) {
    QsciLexerLua_CustomEvent((QsciLexerLua*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QEvent* event ```
void q_scilexerlua_qbase_custom_event(void* self, void* event) {
    QsciLexerLua_QBaseCustomEvent((QsciLexerLua*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QEvent*) ```
void q_scilexerlua_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnCustomEvent((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
void q_scilexerlua_connect_notify(void* self, void* signal) {
    QsciLexerLua_ConnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
void q_scilexerlua_qbase_connect_notify(void* self, void* signal) {
    QsciLexerLua_QBaseConnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QMetaMethod*) ```
void q_scilexerlua_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnConnectNotify((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
void q_scilexerlua_disconnect_notify(void* self, void* signal) {
    QsciLexerLua_DisconnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
void q_scilexerlua_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerLua_QBaseDisconnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, void (*slot)(QsciLexerLua*, QMetaMethod*) ```
void q_scilexerlua_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerLua_OnDisconnectNotify((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
QObject* q_scilexerlua_sender(void* self) {
    return QsciLexerLua_Sender((QsciLexerLua*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
QObject* q_scilexerlua_qbase_sender(void* self) {
    return QsciLexerLua_QBaseSender((QsciLexerLua*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, QObject* (*slot)() ```
void q_scilexerlua_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerLua_OnSender((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_sender_signal_index(void* self) {
    return QsciLexerLua_SenderSignalIndex((QsciLexerLua*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self ```
int32_t q_scilexerlua_qbase_sender_signal_index(void* self) {
    return QsciLexerLua_QBaseSenderSignalIndex((QsciLexerLua*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)() ```
void q_scilexerlua_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerLua_OnSenderSignalIndex((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, const char* signal ```
int32_t q_scilexerlua_receivers(void* self, const char* signal) {
    return QsciLexerLua_Receivers((QsciLexerLua*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, const char* signal ```
int32_t q_scilexerlua_qbase_receivers(void* self, const char* signal) {
    return QsciLexerLua_QBaseReceivers((QsciLexerLua*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, int32_t (*slot)(QsciLexerLua*, const char*) ```
void q_scilexerlua_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerLua_OnReceivers((QsciLexerLua*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
bool q_scilexerlua_is_signal_connected(void* self, void* signal) {
    return QsciLexerLua_IsSignalConnected((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerLua* self, QMetaMethod* signal ```
bool q_scilexerlua_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerLua_QBaseIsSignalConnected((QsciLexerLua*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerLua* self, bool (*slot)(QsciLexerLua*, QMetaMethod*) ```
void q_scilexerlua_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerLua_OnIsSignalConnected((QsciLexerLua*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerLua* self ```
void q_scilexerlua_delete(void* self) {
    QsciLexerLua_Delete((QsciLexerLua*)(self));
}