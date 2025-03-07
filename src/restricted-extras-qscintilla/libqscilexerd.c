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
#include "libqscilexerd.hpp"
#include "libqscilexerd.h"

/// https://doc.qt.io/qt-6/qscilexerd.html

/// q_scilexerd_new constructs a new QsciLexerD object.
///
///
QsciLexerD* q_scilexerd_new() {
    return QsciLexerD_new();
}

/// q_scilexerd_new2 constructs a new QsciLexerD object.
///
/// ``` QObject* parent ```
QsciLexerD* q_scilexerd_new2(void* parent) {
    return QsciLexerD_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerD* self ```
QMetaObject* q_scilexerd_meta_object(void* self) {
    return QsciLexerD_MetaObject((QsciLexerD*)self);
}

/// ``` QsciLexerD* self, const char* param1 ```
void* q_scilexerd_metacast(void* self, const char* param1) {
    return QsciLexerD_Metacast((QsciLexerD*)self, param1);
}

/// ``` QsciLexerD* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerd_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerD_Metacall((QsciLexerD*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, int32_t (*slot)(QsciLexerD*, enum QMetaObject__Call, int, void*) ```
void q_scilexerd_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerD_OnMetacall((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerd_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerD_QBaseMetacall((QsciLexerD*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerd_tr(const char* s) {
    libqt_string _str = QsciLexerD_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#language)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_language(void* self) {
    return QsciLexerD_Language((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#lexer)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_lexer(void* self) {
    return QsciLexerD_Lexer((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerD* self ```
const char** q_scilexerd_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerD_AutoCompletionWordSeparators((QsciLexerD*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockEnd)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_block_end(void* self) {
    return QsciLexerD_BlockEnd((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStart)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_block_start(void* self) {
    return QsciLexerD_BlockStart((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStartKeyword)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_block_start_keyword(void* self) {
    return QsciLexerD_BlockStartKeyword((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#braceStyle)
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_brace_style(void* self) {
    return QsciLexerD_BraceStyle((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#wordCharacters)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_word_characters(void* self) {
    return QsciLexerD_WordCharacters((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultColor)
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_default_color(void* self, int style) {
    return QsciLexerD_DefaultColor((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultEolFill)
///
/// ``` QsciLexerD* self, int style ```
bool q_scilexerd_default_eol_fill(void* self, int style) {
    return QsciLexerD_DefaultEolFill((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultFont)
///
/// ``` QsciLexerD* self, int style ```
QFont* q_scilexerd_default_font(void* self, int style) {
    return QsciLexerD_DefaultFont((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#defaultPaper)
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_default_paper(void* self, int style) {
    return QsciLexerD_DefaultPaper((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#keywords)
///
/// ``` QsciLexerD* self, int set ```
const char* q_scilexerd_keywords(void* self, int set) {
    return QsciLexerD_Keywords((QsciLexerD*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#description)
///
/// ``` QsciLexerD* self, int style ```
const char* q_scilexerd_description(void* self, int style) {
    libqt_string _str = QsciLexerD_Description((QsciLexerD*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#refreshProperties)
///
/// ``` QsciLexerD* self ```
void q_scilexerd_refresh_properties(void* self) {
    QsciLexerD_RefreshProperties((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldAtElse)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_fold_at_else(void* self) {
    return QsciLexerD_FoldAtElse((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldComments)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_fold_comments(void* self) {
    return QsciLexerD_FoldComments((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#foldCompact)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_fold_compact(void* self) {
    return QsciLexerD_FoldCompact((QsciLexerD*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldAtElse)
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_set_fold_at_else(void* self, bool fold) {
    QsciLexerD_SetFoldAtElse((QsciLexerD*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, bool) ```
void q_scilexerd_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerD_OnSetFoldAtElse((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldAtElse((QsciLexerD*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldComments)
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_set_fold_comments(void* self, bool fold) {
    QsciLexerD_SetFoldComments((QsciLexerD*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, bool) ```
void q_scilexerd_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerD_OnSetFoldComments((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldComments((QsciLexerD*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#setFoldCompact)
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_set_fold_compact(void* self, bool fold) {
    QsciLexerD_SetFoldCompact((QsciLexerD*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, bool) ```
void q_scilexerd_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerD_OnSetFoldCompact((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, bool fold ```
void q_scilexerd_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldCompact((QsciLexerD*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#readProperties)
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_ReadProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, QSettings*, const char*) ```
void q_scilexerd_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerD_OnReadProperties((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_QBaseReadProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#writeProperties)
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_WriteProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, QSettings*, const char*) ```
void q_scilexerd_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerD_OnWriteProperties((QsciLexerD*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_QBaseWriteProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerd_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerD_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerd_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerD_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockEnd)
///
/// ``` QsciLexerD* self, int* style ```
const char* q_scilexerd_block_end1(void* self, int* style) {
    return QsciLexerD_BlockEnd1((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStart)
///
/// ``` QsciLexerD* self, int* style ```
const char* q_scilexerd_block_start1(void* self, int* style) {
    return QsciLexerD_BlockStart1((QsciLexerD*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerd.html#blockStartKeyword)
///
/// ``` QsciLexerD* self, int* style ```
const char* q_scilexerd_block_start_keyword1(void* self, int* style) {
    return QsciLexerD_BlockStartKeyword1((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerD* self ```
QsciAbstractAPIs* q_scilexerd_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerD* self ```
QsciScintilla* q_scilexerd_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerD* self, QsciAbstractAPIs* apis ```
void q_scilexerd_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerD* self, QColor* c ```
void q_scilexerd_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerD* self, QFont* f ```
void q_scilexerd_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerD* self, QColor* c ```
void q_scilexerd_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerD* self, QSettings* qs ```
bool q_scilexerd_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerD* self, QSettings* qs ```
bool q_scilexerd_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerd_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerD* self, bool eolfilled, int style ```
void q_scilexerd_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerd_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerD* self, QFont* f, int style ```
void q_scilexerd_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerd_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerd_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerD* self, const char* prop, const char* val ```
void q_scilexerd_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerd_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerD* self, QSettings* qs, const char* prefix ```
bool q_scilexerd_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerD* self, const char* name ```
void q_scilexerd_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerD* self, bool b ```
bool q_scilexerd_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerD* self ```
QThread* q_scilexerd_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerD* self, QThread* thread ```
void q_scilexerd_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerD* self, int interval ```
int32_t q_scilexerd_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerD* self, int id ```
void q_scilexerd_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerD* self ```
libqt_list /* of QObject* */ q_scilexerd_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerD* self, QObject* parent ```
void q_scilexerd_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerD* self, QObject* filterObj ```
void q_scilexerd_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerD* self, QObject* obj ```
void q_scilexerd_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerd_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerD* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerd_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerd_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerd_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerD* self ```
void q_scilexerd_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerD* self ```
void q_scilexerd_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerD* self, const char* name, QVariant* value ```
bool q_scilexerd_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerD* self, const char* name ```
QVariant* q_scilexerd_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerD* self ```
const char** q_scilexerd_dynamic_property_names(void* self) {
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
/// ``` QsciLexerD* self ```
QBindingStorage* q_scilexerd_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerD* self ```
QBindingStorage* q_scilexerd_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerD* self ```
void q_scilexerd_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerD* self, void (*slot)(QObject*) ```
void q_scilexerd_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerD* self ```
QObject* q_scilexerd_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerD* self, const char* classname ```
bool q_scilexerd_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerD* self ```
void q_scilexerd_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerD* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerd_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerd_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerD* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerd_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerD* self, QObject* param1 ```
void q_scilexerd_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerD* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerd_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_lexer_id(void* self) {
    return QsciLexerD_LexerId((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_lexer_id(void* self) {
    return QsciLexerD_QBaseLexerId((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerD_OnLexerId((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_auto_completion_fillups(void* self) {
    return QsciLexerD_AutoCompletionFillups((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
const char* q_scilexerd_qbase_auto_completion_fillups(void* self) {
    return QsciLexerD_QBaseAutoCompletionFillups((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, const char* (*slot)() ```
void q_scilexerd_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerD_OnAutoCompletionFillups((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_block_lookback(void* self) {
    return QsciLexerD_BlockLookback((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_block_lookback(void* self) {
    return QsciLexerD_QBaseBlockLookback((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerD_OnBlockLookback((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_case_sensitive(void* self) {
    return QsciLexerD_CaseSensitive((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
bool q_scilexerd_qbase_case_sensitive(void* self) {
    return QsciLexerD_QBaseCaseSensitive((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, bool (*slot)() ```
void q_scilexerd_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerD_OnCaseSensitive((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_color(void* self, int style) {
    return QsciLexerD_Color((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_qbase_color(void* self, int style) {
    return QsciLexerD_QBaseColor((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerD_OnColor((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
bool q_scilexerd_eol_fill(void* self, int style) {
    return QsciLexerD_EolFill((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
bool q_scilexerd_qbase_eol_fill(void* self, int style) {
    return QsciLexerD_QBaseEolFill((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerD_OnEolFill((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QFont* q_scilexerd_font(void* self, int style) {
    return QsciLexerD_Font((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QFont* q_scilexerd_qbase_font(void* self, int style) {
    return QsciLexerD_QBaseFont((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QFont* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerD_OnFont((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_indentation_guide_view(void* self) {
    return QsciLexerD_IndentationGuideView((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_indentation_guide_view(void* self) {
    return QsciLexerD_QBaseIndentationGuideView((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerD_OnIndentationGuideView((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_default_style(void* self) {
    return QsciLexerD_DefaultStyle((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_default_style(void* self) {
    return QsciLexerD_QBaseDefaultStyle((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerD_OnDefaultStyle((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_paper(void* self, int style) {
    return QsciLexerD_Paper((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_qbase_paper(void* self, int style) {
    return QsciLexerD_QBasePaper((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerD_OnPaper((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_default_color_with_style(void* self, int style) {
    return QsciLexerD_DefaultColorWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerD_QBaseDefaultColorWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerD_OnDefaultColorWithStyle((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QFont* q_scilexerd_default_font_with_style(void* self, int style) {
    return QsciLexerD_DefaultFontWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QFont* q_scilexerd_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerD_QBaseDefaultFontWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QFont* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerD_OnDefaultFontWithStyle((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_default_paper_with_style(void* self, int style) {
    return QsciLexerD_DefaultPaperWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int style ```
QColor* q_scilexerd_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerD_QBaseDefaultPaperWithStyle((QsciLexerD*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerD_OnDefaultPaperWithStyle((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QsciScintilla* editor ```
void q_scilexerd_set_editor(void* self, void* editor) {
    QsciLexerD_SetEditor((QsciLexerD*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QsciScintilla* editor ```
void q_scilexerd_qbase_set_editor(void* self, void* editor) {
    QsciLexerD_QBaseSetEditor((QsciLexerD*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QsciScintilla*) ```
void q_scilexerd_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnSetEditor((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_style_bits_needed(void* self) {
    return QsciLexerD_StyleBitsNeeded((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_style_bits_needed(void* self) {
    return QsciLexerD_QBaseStyleBitsNeeded((QsciLexerD*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerD_OnStyleBitsNeeded((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, int autoindentstyle ```
void q_scilexerd_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerD_SetAutoIndentStyle((QsciLexerD*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, int autoindentstyle ```
void q_scilexerd_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerD_QBaseSetAutoIndentStyle((QsciLexerD*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, int) ```
void q_scilexerd_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerD_OnSetAutoIndentStyle((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_set_color(void* self, void* c, int style) {
    QsciLexerD_SetColor((QsciLexerD*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_qbase_set_color(void* self, void* c, int style) {
    QsciLexerD_QBaseSetColor((QsciLexerD*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QColor*, int) ```
void q_scilexerd_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerD_OnSetColor((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, bool eoffill, int style ```
void q_scilexerd_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerD_SetEolFill((QsciLexerD*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, bool eoffill, int style ```
void q_scilexerd_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerD_QBaseSetEolFill((QsciLexerD*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, bool, int) ```
void q_scilexerd_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerD_OnSetEolFill((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QFont* f, int style ```
void q_scilexerd_set_font(void* self, void* f, int style) {
    QsciLexerD_SetFont((QsciLexerD*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QFont* f, int style ```
void q_scilexerd_qbase_set_font(void* self, void* f, int style) {
    QsciLexerD_QBaseSetFont((QsciLexerD*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QFont*, int) ```
void q_scilexerd_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerD_OnSetFont((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_set_paper(void* self, void* c, int style) {
    QsciLexerD_SetPaper((QsciLexerD*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QColor* c, int style ```
void q_scilexerd_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerD_QBaseSetPaper((QsciLexerD*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QColor*, int) ```
void q_scilexerd_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerD_OnSetPaper((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QEvent* event ```
bool q_scilexerd_event(void* self, void* event) {
    return QsciLexerD_Event((QsciLexerD*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QEvent* event ```
bool q_scilexerd_qbase_event(void* self, void* event) {
    return QsciLexerD_QBaseEvent((QsciLexerD*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, QEvent*) ```
void q_scilexerd_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerD_OnEvent((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QObject* watched, QEvent* event ```
bool q_scilexerd_event_filter(void* self, void* watched, void* event) {
    return QsciLexerD_EventFilter((QsciLexerD*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QObject* watched, QEvent* event ```
bool q_scilexerd_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerD_QBaseEventFilter((QsciLexerD*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, QObject*, QEvent*) ```
void q_scilexerd_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerD_OnEventFilter((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QTimerEvent* event ```
void q_scilexerd_timer_event(void* self, void* event) {
    QsciLexerD_TimerEvent((QsciLexerD*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QTimerEvent* event ```
void q_scilexerd_qbase_timer_event(void* self, void* event) {
    QsciLexerD_QBaseTimerEvent((QsciLexerD*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QTimerEvent*) ```
void q_scilexerd_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnTimerEvent((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QChildEvent* event ```
void q_scilexerd_child_event(void* self, void* event) {
    QsciLexerD_ChildEvent((QsciLexerD*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QChildEvent* event ```
void q_scilexerd_qbase_child_event(void* self, void* event) {
    QsciLexerD_QBaseChildEvent((QsciLexerD*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QChildEvent*) ```
void q_scilexerd_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnChildEvent((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QEvent* event ```
void q_scilexerd_custom_event(void* self, void* event) {
    QsciLexerD_CustomEvent((QsciLexerD*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QEvent* event ```
void q_scilexerd_qbase_custom_event(void* self, void* event) {
    QsciLexerD_QBaseCustomEvent((QsciLexerD*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QEvent*) ```
void q_scilexerd_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnCustomEvent((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
void q_scilexerd_connect_notify(void* self, void* signal) {
    QsciLexerD_ConnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
void q_scilexerd_qbase_connect_notify(void* self, void* signal) {
    QsciLexerD_QBaseConnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QMetaMethod*) ```
void q_scilexerd_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnConnectNotify((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
void q_scilexerd_disconnect_notify(void* self, void* signal) {
    QsciLexerD_DisconnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
void q_scilexerd_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerD_QBaseDisconnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, void (*slot)(QsciLexerD*, QMetaMethod*) ```
void q_scilexerd_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerD_OnDisconnectNotify((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
QObject* q_scilexerd_sender(void* self) {
    return QsciLexerD_Sender((QsciLexerD*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
QObject* q_scilexerd_qbase_sender(void* self) {
    return QsciLexerD_QBaseSender((QsciLexerD*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, QObject* (*slot)() ```
void q_scilexerd_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerD_OnSender((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_sender_signal_index(void* self) {
    return QsciLexerD_SenderSignalIndex((QsciLexerD*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self ```
int32_t q_scilexerd_qbase_sender_signal_index(void* self) {
    return QsciLexerD_QBaseSenderSignalIndex((QsciLexerD*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)() ```
void q_scilexerd_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerD_OnSenderSignalIndex((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, const char* signal ```
int32_t q_scilexerd_receivers(void* self, const char* signal) {
    return QsciLexerD_Receivers((QsciLexerD*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, const char* signal ```
int32_t q_scilexerd_qbase_receivers(void* self, const char* signal) {
    return QsciLexerD_QBaseReceivers((QsciLexerD*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, int32_t (*slot)(QsciLexerD*, const char*) ```
void q_scilexerd_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerD_OnReceivers((QsciLexerD*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
bool q_scilexerd_is_signal_connected(void* self, void* signal) {
    return QsciLexerD_IsSignalConnected((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerD* self, QMetaMethod* signal ```
bool q_scilexerd_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerD_QBaseIsSignalConnected((QsciLexerD*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerD* self, bool (*slot)(QsciLexerD*, QMetaMethod*) ```
void q_scilexerd_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerD_OnIsSignalConnected((QsciLexerD*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerD* self ```
void q_scilexerd_delete(void* self) {
    QsciLexerD_Delete((QsciLexerD*)(self));
}