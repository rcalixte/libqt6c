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
#include "libqscilexerpostscript.hpp"
#include "libqscilexerpostscript.h"

/// https://doc.qt.io/qt-6/qscilexerpostscript.html

/// q_scilexerpostscript_new constructs a new QsciLexerPostScript object.
///
///
QsciLexerPostScript* q_scilexerpostscript_new() {
    return QsciLexerPostScript_new();
}

/// q_scilexerpostscript_new2 constructs a new QsciLexerPostScript object.
///
/// ``` QObject* parent ```
QsciLexerPostScript* q_scilexerpostscript_new2(void* parent) {
    return QsciLexerPostScript_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPostScript* self ```
QMetaObject* q_scilexerpostscript_meta_object(void* self) {
    return QsciLexerPostScript_MetaObject((QsciLexerPostScript*)self);
}

/// ``` QsciLexerPostScript* self, const char* param1 ```
void* q_scilexerpostscript_metacast(void* self, const char* param1) {
    return QsciLexerPostScript_Metacast((QsciLexerPostScript*)self, param1);
}

/// ``` QsciLexerPostScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpostscript_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPostScript_Metacall((QsciLexerPostScript*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)(QsciLexerPostScript*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpostscript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPostScript_OnMetacall((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpostscript_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPostScript_QBaseMetacall((QsciLexerPostScript*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpostscript_tr(const char* s) {
    libqt_string _str = QsciLexerPostScript_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#language)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_language(void* self) {
    return QsciLexerPostScript_Language((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#lexer)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_lexer(void* self) {
    return QsciLexerPostScript_Lexer((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#braceStyle)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_brace_style(void* self) {
    return QsciLexerPostScript_BraceStyle((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultColor)
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_color(void* self, int style) {
    return QsciLexerPostScript_DefaultColor((QsciLexerPostScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultFont)
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_default_font(void* self, int style) {
    return QsciLexerPostScript_DefaultFont((QsciLexerPostScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#defaultPaper)
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_paper(void* self, int style) {
    return QsciLexerPostScript_DefaultPaper((QsciLexerPostScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#keywords)
///
/// ``` QsciLexerPostScript* self, int set ```
const char* q_scilexerpostscript_keywords(void* self, int set) {
    return QsciLexerPostScript_Keywords((QsciLexerPostScript*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#description)
///
/// ``` QsciLexerPostScript* self, int style ```
const char* q_scilexerpostscript_description(void* self, int style) {
    libqt_string _str = QsciLexerPostScript_Description((QsciLexerPostScript*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#refreshProperties)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_refresh_properties(void* self) {
    QsciLexerPostScript_RefreshProperties((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#tokenize)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_tokenize(void* self) {
    return QsciLexerPostScript_Tokenize((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#level)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_level(void* self) {
    return QsciLexerPostScript_Level((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#foldCompact)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_fold_compact(void* self) {
    return QsciLexerPostScript_FoldCompact((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#foldAtElse)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_fold_at_else(void* self) {
    return QsciLexerPostScript_FoldAtElse((QsciLexerPostScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setTokenize)
///
/// ``` QsciLexerPostScript* self, bool tokenize ```
void q_scilexerpostscript_set_tokenize(void* self, bool tokenize) {
    QsciLexerPostScript_SetTokenize((QsciLexerPostScript*)self, tokenize);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_tokenize(void* self, void (*slot)(void*, bool)) {
    QsciLexerPostScript_OnSetTokenize((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool tokenize ```
void q_scilexerpostscript_qbase_set_tokenize(void* self, bool tokenize) {
    QsciLexerPostScript_QBaseSetTokenize((QsciLexerPostScript*)self, tokenize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setLevel)
///
/// ``` QsciLexerPostScript* self, int level ```
void q_scilexerpostscript_set_level(void* self, int level) {
    QsciLexerPostScript_SetLevel((QsciLexerPostScript*)self, level);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_set_level(void* self, void (*slot)(void*, int)) {
    QsciLexerPostScript_OnSetLevel((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, int level ```
void q_scilexerpostscript_qbase_set_level(void* self, int level) {
    QsciLexerPostScript_QBaseSetLevel((QsciLexerPostScript*)self, level);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setFoldCompact)
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_set_fold_compact(void* self, bool fold) {
    QsciLexerPostScript_SetFoldCompact((QsciLexerPostScript*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerPostScript_OnSetFoldCompact((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPostScript_QBaseSetFoldCompact((QsciLexerPostScript*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#setFoldAtElse)
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_set_fold_at_else(void* self, bool fold) {
    QsciLexerPostScript_SetFoldAtElse((QsciLexerPostScript*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool) ```
void q_scilexerpostscript_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerPostScript_OnSetFoldAtElse((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, bool fold ```
void q_scilexerpostscript_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerPostScript_QBaseSetFoldAtElse((QsciLexerPostScript*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#readProperties)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_ReadProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QSettings*, const char*) ```
void q_scilexerpostscript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPostScript_OnReadProperties((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_QBaseReadProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpostscript.html#writeProperties)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_WriteProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QSettings*, const char*) ```
void q_scilexerpostscript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPostScript_OnWriteProperties((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_QBaseWriteProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpostscript_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPostScript_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpostscript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPostScript_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPostScript* self ```
QsciAbstractAPIs* q_scilexerpostscript_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPostScript* self ```
QsciScintilla* q_scilexerpostscript_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPostScript* self, QsciAbstractAPIs* apis ```
void q_scilexerpostscript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPostScript* self, QColor* c ```
void q_scilexerpostscript_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPostScript* self, QFont* f ```
void q_scilexerpostscript_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPostScript* self, QColor* c ```
void q_scilexerpostscript_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs ```
bool q_scilexerpostscript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs ```
bool q_scilexerpostscript_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpostscript_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPostScript* self, bool eolfilled, int style ```
void q_scilexerpostscript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpostscript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpostscript_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpostscript_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPostScript* self, const char* prop, const char* val ```
void q_scilexerpostscript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpostscript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPostScript* self, QSettings* qs, const char* prefix ```
bool q_scilexerpostscript_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPostScript* self, const char* name ```
void q_scilexerpostscript_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPostScript* self, bool b ```
bool q_scilexerpostscript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPostScript* self ```
QThread* q_scilexerpostscript_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPostScript* self, QThread* thread ```
void q_scilexerpostscript_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPostScript* self, int interval ```
int32_t q_scilexerpostscript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPostScript* self, int id ```
void q_scilexerpostscript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPostScript* self ```
libqt_list /* of QObject* */ q_scilexerpostscript_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPostScript* self, QObject* parent ```
void q_scilexerpostscript_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPostScript* self, QObject* filterObj ```
void q_scilexerpostscript_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPostScript* self, QObject* obj ```
void q_scilexerpostscript_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpostscript_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPostScript* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpostscript_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpostscript_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpostscript_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPostScript* self, const char* name, QVariant* value ```
bool q_scilexerpostscript_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPostScript* self, const char* name ```
QVariant* q_scilexerpostscript_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPostScript* self ```
QBindingStorage* q_scilexerpostscript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPostScript* self ```
QBindingStorage* q_scilexerpostscript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPostScript* self, void (*slot)(QObject*) ```
void q_scilexerpostscript_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPostScript* self, const char* classname ```
bool q_scilexerpostscript_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPostScript* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpostscript_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpostscript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPostScript* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpostscript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPostScript* self, QObject* param1 ```
void q_scilexerpostscript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPostScript* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpostscript_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_lexer_id(void* self) {
    return QsciLexerPostScript_LexerId((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_lexer_id(void* self) {
    return QsciLexerPostScript_QBaseLexerId((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnLexerId((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_auto_completion_fillups(void* self) {
    return QsciLexerPostScript_AutoCompletionFillups((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPostScript_QBaseAutoCompletionFillups((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)() ```
void q_scilexerpostscript_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPostScript_OnAutoCompletionFillups((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPostScript_AutoCompletionWordSeparators((QsciLexerPostScript*)self);
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
/// ``` QsciLexerPostScript* self ```
const char** q_scilexerpostscript_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPostScript_QBaseAutoCompletionWordSeparators((QsciLexerPostScript*)self);
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
/// ``` QsciLexerPostScript* self, const char** (*slot)() ```
void q_scilexerpostscript_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerPostScript_OnAutoCompletionWordSeparators((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_end(void* self, int* style) {
    return QsciLexerPostScript_BlockEnd((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_end(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockEnd((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPostScript_OnBlockEnd((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_block_lookback(void* self) {
    return QsciLexerPostScript_BlockLookback((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_block_lookback(void* self) {
    return QsciLexerPostScript_QBaseBlockLookback((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnBlockLookback((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_start(void* self, int* style) {
    return QsciLexerPostScript_BlockStart((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_start(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockStart((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPostScript_OnBlockStart((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_block_start_keyword(void* self, int* style) {
    return QsciLexerPostScript_BlockStartKeyword((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int* style ```
const char* q_scilexerpostscript_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockStartKeyword((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)(QsciLexerPostScript*, int*) ```
void q_scilexerpostscript_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPostScript_OnBlockStartKeyword((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_case_sensitive(void* self) {
    return QsciLexerPostScript_CaseSensitive((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
bool q_scilexerpostscript_qbase_case_sensitive(void* self) {
    return QsciLexerPostScript_QBaseCaseSensitive((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)() ```
void q_scilexerpostscript_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPostScript_OnCaseSensitive((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_color(void* self, int style) {
    return QsciLexerPostScript_Color((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_color(void* self, int style) {
    return QsciLexerPostScript_QBaseColor((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPostScript_OnColor((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_eol_fill(void* self, int style) {
    return QsciLexerPostScript_EolFill((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_qbase_eol_fill(void* self, int style) {
    return QsciLexerPostScript_QBaseEolFill((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPostScript_OnEolFill((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_font(void* self, int style) {
    return QsciLexerPostScript_Font((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_qbase_font(void* self, int style) {
    return QsciLexerPostScript_QBaseFont((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPostScript_OnFont((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_indentation_guide_view(void* self) {
    return QsciLexerPostScript_IndentationGuideView((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_indentation_guide_view(void* self) {
    return QsciLexerPostScript_QBaseIndentationGuideView((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnIndentationGuideView((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_default_style(void* self) {
    return QsciLexerPostScript_DefaultStyle((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_default_style(void* self) {
    return QsciLexerPostScript_QBaseDefaultStyle((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnDefaultStyle((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_paper(void* self, int style) {
    return QsciLexerPostScript_Paper((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_paper(void* self, int style) {
    return QsciLexerPostScript_QBasePaper((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPostScript_OnPaper((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_color_with_style(void* self, int style) {
    return QsciLexerPostScript_DefaultColorWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultColorWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPostScript_OnDefaultColorWithStyle((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_default_eol_fill(void* self, int style) {
    return QsciLexerPostScript_DefaultEolFill((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
bool q_scilexerpostscript_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultEolFill((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPostScript_OnDefaultEolFill((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_default_font_with_style(void* self, int style) {
    return QsciLexerPostScript_DefaultFontWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QFont* q_scilexerpostscript_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultFontWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPostScript_OnDefaultFontWithStyle((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_default_paper_with_style(void* self, int style) {
    return QsciLexerPostScript_DefaultPaperWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int style ```
QColor* q_scilexerpostscript_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultPaperWithStyle((QsciLexerPostScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPostScript_OnDefaultPaperWithStyle((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QsciScintilla* editor ```
void q_scilexerpostscript_set_editor(void* self, void* editor) {
    QsciLexerPostScript_SetEditor((QsciLexerPostScript*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QsciScintilla* editor ```
void q_scilexerpostscript_qbase_set_editor(void* self, void* editor) {
    QsciLexerPostScript_QBaseSetEditor((QsciLexerPostScript*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QsciScintilla*) ```
void q_scilexerpostscript_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnSetEditor((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_style_bits_needed(void* self) {
    return QsciLexerPostScript_StyleBitsNeeded((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_style_bits_needed(void* self) {
    return QsciLexerPostScript_QBaseStyleBitsNeeded((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnStyleBitsNeeded((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_word_characters(void* self) {
    return QsciLexerPostScript_WordCharacters((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
const char* q_scilexerpostscript_qbase_word_characters(void* self) {
    return QsciLexerPostScript_QBaseWordCharacters((QsciLexerPostScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* (*slot)() ```
void q_scilexerpostscript_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerPostScript_OnWordCharacters((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, int autoindentstyle ```
void q_scilexerpostscript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPostScript_SetAutoIndentStyle((QsciLexerPostScript*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int autoindentstyle ```
void q_scilexerpostscript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPostScript_QBaseSetAutoIndentStyle((QsciLexerPostScript*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, int) ```
void q_scilexerpostscript_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPostScript_OnSetAutoIndentStyle((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_set_color(void* self, void* c, int style) {
    QsciLexerPostScript_SetColor((QsciLexerPostScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPostScript_QBaseSetColor((QsciLexerPostScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QColor*, int) ```
void q_scilexerpostscript_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPostScript_OnSetColor((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool eoffill, int style ```
void q_scilexerpostscript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPostScript_SetEolFill((QsciLexerPostScript*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool eoffill, int style ```
void q_scilexerpostscript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPostScript_QBaseSetEolFill((QsciLexerPostScript*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, bool, int) ```
void q_scilexerpostscript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPostScript_OnSetEolFill((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_set_font(void* self, void* f, int style) {
    QsciLexerPostScript_SetFont((QsciLexerPostScript*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QFont* f, int style ```
void q_scilexerpostscript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPostScript_QBaseSetFont((QsciLexerPostScript*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QFont*, int) ```
void q_scilexerpostscript_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPostScript_OnSetFont((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_set_paper(void* self, void* c, int style) {
    QsciLexerPostScript_SetPaper((QsciLexerPostScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QColor* c, int style ```
void q_scilexerpostscript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPostScript_QBaseSetPaper((QsciLexerPostScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QColor*, int) ```
void q_scilexerpostscript_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPostScript_OnSetPaper((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
bool q_scilexerpostscript_event(void* self, void* event) {
    return QsciLexerPostScript_Event((QsciLexerPostScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
bool q_scilexerpostscript_qbase_event(void* self, void* event) {
    return QsciLexerPostScript_QBaseEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QEvent*) ```
void q_scilexerpostscript_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPostScript_OnEvent((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* watched, QEvent* event ```
bool q_scilexerpostscript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPostScript_EventFilter((QsciLexerPostScript*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* watched, QEvent* event ```
bool q_scilexerpostscript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPostScript_QBaseEventFilter((QsciLexerPostScript*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QObject*, QEvent*) ```
void q_scilexerpostscript_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPostScript_OnEventFilter((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QTimerEvent* event ```
void q_scilexerpostscript_timer_event(void* self, void* event) {
    QsciLexerPostScript_TimerEvent((QsciLexerPostScript*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QTimerEvent* event ```
void q_scilexerpostscript_qbase_timer_event(void* self, void* event) {
    QsciLexerPostScript_QBaseTimerEvent((QsciLexerPostScript*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QTimerEvent*) ```
void q_scilexerpostscript_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnTimerEvent((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QChildEvent* event ```
void q_scilexerpostscript_child_event(void* self, void* event) {
    QsciLexerPostScript_ChildEvent((QsciLexerPostScript*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QChildEvent* event ```
void q_scilexerpostscript_qbase_child_event(void* self, void* event) {
    QsciLexerPostScript_QBaseChildEvent((QsciLexerPostScript*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QChildEvent*) ```
void q_scilexerpostscript_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnChildEvent((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
void q_scilexerpostscript_custom_event(void* self, void* event) {
    QsciLexerPostScript_CustomEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QEvent* event ```
void q_scilexerpostscript_qbase_custom_event(void* self, void* event) {
    QsciLexerPostScript_QBaseCustomEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QEvent*) ```
void q_scilexerpostscript_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnCustomEvent((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_connect_notify(void* self, void* signal) {
    QsciLexerPostScript_ConnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPostScript_QBaseConnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnConnectNotify((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_disconnect_notify(void* self, void* signal) {
    QsciLexerPostScript_DisconnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
void q_scilexerpostscript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPostScript_QBaseDisconnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, void (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPostScript_OnDisconnectNotify((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_sender(void* self) {
    return QsciLexerPostScript_Sender((QsciLexerPostScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
QObject* q_scilexerpostscript_qbase_sender(void* self) {
    return QsciLexerPostScript_QBaseSender((QsciLexerPostScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QObject* (*slot)() ```
void q_scilexerpostscript_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPostScript_OnSender((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_sender_signal_index(void* self) {
    return QsciLexerPostScript_SenderSignalIndex((QsciLexerPostScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self ```
int32_t q_scilexerpostscript_qbase_sender_signal_index(void* self) {
    return QsciLexerPostScript_QBaseSenderSignalIndex((QsciLexerPostScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)() ```
void q_scilexerpostscript_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPostScript_OnSenderSignalIndex((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* signal ```
int32_t q_scilexerpostscript_receivers(void* self, const char* signal) {
    return QsciLexerPostScript_Receivers((QsciLexerPostScript*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, const char* signal ```
int32_t q_scilexerpostscript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPostScript_QBaseReceivers((QsciLexerPostScript*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, int32_t (*slot)(QsciLexerPostScript*, const char*) ```
void q_scilexerpostscript_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPostScript_OnReceivers((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
bool q_scilexerpostscript_is_signal_connected(void* self, void* signal) {
    return QsciLexerPostScript_IsSignalConnected((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, QMetaMethod* signal ```
bool q_scilexerpostscript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPostScript_QBaseIsSignalConnected((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPostScript* self, bool (*slot)(QsciLexerPostScript*, QMetaMethod*) ```
void q_scilexerpostscript_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPostScript_OnIsSignalConnected((QsciLexerPostScript*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPostScript* self ```
void q_scilexerpostscript_delete(void* self) {
    QsciLexerPostScript_Delete((QsciLexerPostScript*)(self));
}