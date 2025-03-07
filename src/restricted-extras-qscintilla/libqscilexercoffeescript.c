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
#include "libqscilexercoffeescript.hpp"
#include "libqscilexercoffeescript.h"

/// https://doc.qt.io/qt-6/qscilexercoffeescript.html

/// q_scilexercoffeescript_new constructs a new QsciLexerCoffeeScript object.
///
///
QsciLexerCoffeeScript* q_scilexercoffeescript_new() {
    return QsciLexerCoffeeScript_new();
}

/// q_scilexercoffeescript_new2 constructs a new QsciLexerCoffeeScript object.
///
/// ``` QObject* parent ```
QsciLexerCoffeeScript* q_scilexercoffeescript_new2(void* parent) {
    return QsciLexerCoffeeScript_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCoffeeScript* self ```
QMetaObject* q_scilexercoffeescript_meta_object(void* self) {
    return QsciLexerCoffeeScript_MetaObject((QsciLexerCoffeeScript*)self);
}

/// ``` QsciLexerCoffeeScript* self, const char* param1 ```
void* q_scilexercoffeescript_metacast(void* self, const char* param1) {
    return QsciLexerCoffeeScript_Metacast((QsciLexerCoffeeScript*)self, param1);
}

/// ``` QsciLexerCoffeeScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercoffeescript_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCoffeeScript_Metacall((QsciLexerCoffeeScript*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)(QsciLexerCoffeeScript*, enum QMetaObject__Call, int, void*) ```
void q_scilexercoffeescript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCoffeeScript_OnMetacall((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercoffeescript_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCoffeeScript_QBaseMetacall((QsciLexerCoffeeScript*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercoffeescript_tr(const char* s) {
    libqt_string _str = QsciLexerCoffeeScript_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#language)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_language(void* self) {
    return QsciLexerCoffeeScript_Language((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#lexer)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_lexer(void* self) {
    return QsciLexerCoffeeScript_Lexer((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerCoffeeScript* self ```
const char** q_scilexercoffeescript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCoffeeScript_AutoCompletionWordSeparators((QsciLexerCoffeeScript*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockEnd)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_end(void* self) {
    return QsciLexerCoffeeScript_BlockEnd((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockStart)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_start(void* self) {
    return QsciLexerCoffeeScript_BlockStart((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockStartKeyword)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_block_start_keyword(void* self) {
    return QsciLexerCoffeeScript_BlockStartKeyword((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#braceStyle)
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_brace_style(void* self) {
    return QsciLexerCoffeeScript_BraceStyle((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#wordCharacters)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_word_characters(void* self) {
    return QsciLexerCoffeeScript_WordCharacters((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#defaultColor)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_color(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultColor((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#defaultEolFill)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_default_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultEolFill((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#defaultFont)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_default_font(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultFont((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#defaultPaper)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_paper(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultPaper((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#keywords)
///
/// ``` QsciLexerCoffeeScript* self, int set ```
const char* q_scilexercoffeescript_keywords(void* self, int set) {
    return QsciLexerCoffeeScript_Keywords((QsciLexerCoffeeScript*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#description)
///
/// ``` QsciLexerCoffeeScript* self, int style ```
const char* q_scilexercoffeescript_description(void* self, int style) {
    libqt_string _str = QsciLexerCoffeeScript_Description((QsciLexerCoffeeScript*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#refreshProperties)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_refresh_properties(void* self) {
    QsciLexerCoffeeScript_RefreshProperties((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#dollarsAllowed)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_dollars_allowed(void* self) {
    return QsciLexerCoffeeScript_DollarsAllowed((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#setDollarsAllowed)
///
/// ``` QsciLexerCoffeeScript* self, bool allowed ```
void q_scilexercoffeescript_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCoffeeScript_SetDollarsAllowed((QsciLexerCoffeeScript*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#foldComments)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_fold_comments(void* self) {
    return QsciLexerCoffeeScript_FoldComments((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#setFoldComments)
///
/// ``` QsciLexerCoffeeScript* self, bool fold ```
void q_scilexercoffeescript_set_fold_comments(void* self, bool fold) {
    QsciLexerCoffeeScript_SetFoldComments((QsciLexerCoffeeScript*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#foldCompact)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_fold_compact(void* self) {
    return QsciLexerCoffeeScript_FoldCompact((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#setFoldCompact)
///
/// ``` QsciLexerCoffeeScript* self, bool fold ```
void q_scilexercoffeescript_set_fold_compact(void* self, bool fold) {
    QsciLexerCoffeeScript_SetFoldCompact((QsciLexerCoffeeScript*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#stylePreprocessor)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_style_preprocessor(void* self) {
    return QsciLexerCoffeeScript_StylePreprocessor((QsciLexerCoffeeScript*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#setStylePreprocessor)
///
/// ``` QsciLexerCoffeeScript* self, bool style ```
void q_scilexercoffeescript_set_style_preprocessor(void* self, bool style) {
    QsciLexerCoffeeScript_SetStylePreprocessor((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#readProperties)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_ReadProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QSettings*, const char*) ```
void q_scilexercoffeescript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCoffeeScript_OnReadProperties((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_QBaseReadProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#writeProperties)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_WriteProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QSettings*, const char*) ```
void q_scilexercoffeescript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCoffeeScript_OnWriteProperties((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_QBaseWriteProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercoffeescript_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCoffeeScript_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercoffeescript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCoffeeScript_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockEnd)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_end1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockEnd1((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockStart)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_start1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockStart1((QsciLexerCoffeeScript*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercoffeescript.html#blockStartKeyword)
///
/// ``` QsciLexerCoffeeScript* self, int* style ```
const char* q_scilexercoffeescript_block_start_keyword1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockStartKeyword1((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerCoffeeScript* self ```
QsciAbstractAPIs* q_scilexercoffeescript_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerCoffeeScript* self ```
QsciScintilla* q_scilexercoffeescript_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerCoffeeScript* self, QsciAbstractAPIs* apis ```
void q_scilexercoffeescript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c ```
void q_scilexercoffeescript_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerCoffeeScript* self, QFont* f ```
void q_scilexercoffeescript_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c ```
void q_scilexercoffeescript_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs ```
bool q_scilexercoffeescript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs ```
bool q_scilexercoffeescript_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercoffeescript_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerCoffeeScript* self, bool eolfilled, int style ```
void q_scilexercoffeescript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercoffeescript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercoffeescript_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercoffeescript_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerCoffeeScript* self, const char* prop, const char* val ```
void q_scilexercoffeescript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercoffeescript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCoffeeScript* self, QSettings* qs, const char* prefix ```
bool q_scilexercoffeescript_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCoffeeScript* self, const char* name ```
void q_scilexercoffeescript_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCoffeeScript* self, bool b ```
bool q_scilexercoffeescript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCoffeeScript* self ```
QThread* q_scilexercoffeescript_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCoffeeScript* self, QThread* thread ```
void q_scilexercoffeescript_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCoffeeScript* self, int interval ```
int32_t q_scilexercoffeescript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCoffeeScript* self, int id ```
void q_scilexercoffeescript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCoffeeScript* self ```
libqt_list /* of QObject* */ q_scilexercoffeescript_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCoffeeScript* self, QObject* parent ```
void q_scilexercoffeescript_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCoffeeScript* self, QObject* filterObj ```
void q_scilexercoffeescript_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCoffeeScript* self, QObject* obj ```
void q_scilexercoffeescript_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercoffeescript_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCoffeeScript* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercoffeescript_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercoffeescript_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercoffeescript_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCoffeeScript* self, const char* name, QVariant* value ```
bool q_scilexercoffeescript_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCoffeeScript* self, const char* name ```
QVariant* q_scilexercoffeescript_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCoffeeScript* self ```
const char** q_scilexercoffeescript_dynamic_property_names(void* self) {
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
/// ``` QsciLexerCoffeeScript* self ```
QBindingStorage* q_scilexercoffeescript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCoffeeScript* self ```
QBindingStorage* q_scilexercoffeescript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QObject*) ```
void q_scilexercoffeescript_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCoffeeScript* self, const char* classname ```
bool q_scilexercoffeescript_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCoffeeScript* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercoffeescript_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercoffeescript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCoffeeScript* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercoffeescript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCoffeeScript* self, QObject* param1 ```
void q_scilexercoffeescript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercoffeescript_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_lexer_id(void* self) {
    return QsciLexerCoffeeScript_LexerId((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_lexer_id(void* self) {
    return QsciLexerCoffeeScript_QBaseLexerId((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnLexerId((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_auto_completion_fillups(void* self) {
    return QsciLexerCoffeeScript_AutoCompletionFillups((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
const char* q_scilexercoffeescript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCoffeeScript_QBaseAutoCompletionFillups((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* (*slot)() ```
void q_scilexercoffeescript_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCoffeeScript_OnAutoCompletionFillups((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_block_lookback(void* self) {
    return QsciLexerCoffeeScript_BlockLookback((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_block_lookback(void* self) {
    return QsciLexerCoffeeScript_QBaseBlockLookback((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnBlockLookback((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_case_sensitive(void* self) {
    return QsciLexerCoffeeScript_CaseSensitive((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
bool q_scilexercoffeescript_qbase_case_sensitive(void* self) {
    return QsciLexerCoffeeScript_QBaseCaseSensitive((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)() ```
void q_scilexercoffeescript_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCoffeeScript_OnCaseSensitive((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_color(void* self, int style) {
    return QsciLexerCoffeeScript_Color((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_color(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseColor((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnColor((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_EolFill((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
bool q_scilexercoffeescript_qbase_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseEolFill((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnEolFill((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_font(void* self, int style) {
    return QsciLexerCoffeeScript_Font((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_qbase_font(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseFont((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnFont((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_indentation_guide_view(void* self) {
    return QsciLexerCoffeeScript_IndentationGuideView((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_indentation_guide_view(void* self) {
    return QsciLexerCoffeeScript_QBaseIndentationGuideView((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnIndentationGuideView((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_default_style(void* self) {
    return QsciLexerCoffeeScript_DefaultStyle((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_default_style(void* self) {
    return QsciLexerCoffeeScript_QBaseDefaultStyle((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnDefaultStyle((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_paper(void* self, int style) {
    return QsciLexerCoffeeScript_Paper((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_paper(void* self, int style) {
    return QsciLexerCoffeeScript_QBasePaper((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnPaper((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_color_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultColorWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultColorWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultColorWithStyle((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_default_font_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultFontWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QFont* q_scilexercoffeescript_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultFontWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultFontWithStyle((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_default_paper_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultPaperWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int style ```
QColor* q_scilexercoffeescript_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultPaperWithStyle((QsciLexerCoffeeScript*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultPaperWithStyle((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QsciScintilla* editor ```
void q_scilexercoffeescript_set_editor(void* self, void* editor) {
    QsciLexerCoffeeScript_SetEditor((QsciLexerCoffeeScript*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QsciScintilla* editor ```
void q_scilexercoffeescript_qbase_set_editor(void* self, void* editor) {
    QsciLexerCoffeeScript_QBaseSetEditor((QsciLexerCoffeeScript*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QsciScintilla*) ```
void q_scilexercoffeescript_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnSetEditor((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_style_bits_needed(void* self) {
    return QsciLexerCoffeeScript_StyleBitsNeeded((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_style_bits_needed(void* self) {
    return QsciLexerCoffeeScript_QBaseStyleBitsNeeded((QsciLexerCoffeeScript*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnStyleBitsNeeded((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int autoindentstyle ```
void q_scilexercoffeescript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCoffeeScript_SetAutoIndentStyle((QsciLexerCoffeeScript*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int autoindentstyle ```
void q_scilexercoffeescript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCoffeeScript_QBaseSetAutoIndentStyle((QsciLexerCoffeeScript*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, int) ```
void q_scilexercoffeescript_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCoffeeScript_OnSetAutoIndentStyle((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_set_color(void* self, void* c, int style) {
    QsciLexerCoffeeScript_SetColor((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCoffeeScript_QBaseSetColor((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QColor*, int) ```
void q_scilexercoffeescript_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetColor((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool eoffill, int style ```
void q_scilexercoffeescript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCoffeeScript_SetEolFill((QsciLexerCoffeeScript*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool eoffill, int style ```
void q_scilexercoffeescript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCoffeeScript_QBaseSetEolFill((QsciLexerCoffeeScript*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, bool, int) ```
void q_scilexercoffeescript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCoffeeScript_OnSetEolFill((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_set_font(void* self, void* f, int style) {
    QsciLexerCoffeeScript_SetFont((QsciLexerCoffeeScript*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QFont* f, int style ```
void q_scilexercoffeescript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCoffeeScript_QBaseSetFont((QsciLexerCoffeeScript*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QFont*, int) ```
void q_scilexercoffeescript_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetFont((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_set_paper(void* self, void* c, int style) {
    QsciLexerCoffeeScript_SetPaper((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QColor* c, int style ```
void q_scilexercoffeescript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCoffeeScript_QBaseSetPaper((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QColor*, int) ```
void q_scilexercoffeescript_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetPaper((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
bool q_scilexercoffeescript_event(void* self, void* event) {
    return QsciLexerCoffeeScript_Event((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
bool q_scilexercoffeescript_qbase_event(void* self, void* event) {
    return QsciLexerCoffeeScript_QBaseEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QEvent*) ```
void q_scilexercoffeescript_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnEvent((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* watched, QEvent* event ```
bool q_scilexercoffeescript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCoffeeScript_EventFilter((QsciLexerCoffeeScript*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* watched, QEvent* event ```
bool q_scilexercoffeescript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCoffeeScript_QBaseEventFilter((QsciLexerCoffeeScript*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QObject*, QEvent*) ```
void q_scilexercoffeescript_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCoffeeScript_OnEventFilter((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QTimerEvent* event ```
void q_scilexercoffeescript_timer_event(void* self, void* event) {
    QsciLexerCoffeeScript_TimerEvent((QsciLexerCoffeeScript*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QTimerEvent* event ```
void q_scilexercoffeescript_qbase_timer_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseTimerEvent((QsciLexerCoffeeScript*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QTimerEvent*) ```
void q_scilexercoffeescript_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnTimerEvent((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QChildEvent* event ```
void q_scilexercoffeescript_child_event(void* self, void* event) {
    QsciLexerCoffeeScript_ChildEvent((QsciLexerCoffeeScript*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QChildEvent* event ```
void q_scilexercoffeescript_qbase_child_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseChildEvent((QsciLexerCoffeeScript*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QChildEvent*) ```
void q_scilexercoffeescript_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnChildEvent((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
void q_scilexercoffeescript_custom_event(void* self, void* event) {
    QsciLexerCoffeeScript_CustomEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QEvent* event ```
void q_scilexercoffeescript_qbase_custom_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseCustomEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QEvent*) ```
void q_scilexercoffeescript_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnCustomEvent((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_connect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_ConnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_QBaseConnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnConnectNotify((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_disconnect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_DisconnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
void q_scilexercoffeescript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_QBaseDisconnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, void (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnDisconnectNotify((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_sender(void* self) {
    return QsciLexerCoffeeScript_Sender((QsciLexerCoffeeScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
QObject* q_scilexercoffeescript_qbase_sender(void* self) {
    return QsciLexerCoffeeScript_QBaseSender((QsciLexerCoffeeScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QObject* (*slot)() ```
void q_scilexercoffeescript_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCoffeeScript_OnSender((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_sender_signal_index(void* self) {
    return QsciLexerCoffeeScript_SenderSignalIndex((QsciLexerCoffeeScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self ```
int32_t q_scilexercoffeescript_qbase_sender_signal_index(void* self) {
    return QsciLexerCoffeeScript_QBaseSenderSignalIndex((QsciLexerCoffeeScript*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)() ```
void q_scilexercoffeescript_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCoffeeScript_OnSenderSignalIndex((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* signal ```
int32_t q_scilexercoffeescript_receivers(void* self, const char* signal) {
    return QsciLexerCoffeeScript_Receivers((QsciLexerCoffeeScript*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, const char* signal ```
int32_t q_scilexercoffeescript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCoffeeScript_QBaseReceivers((QsciLexerCoffeeScript*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, int32_t (*slot)(QsciLexerCoffeeScript*, const char*) ```
void q_scilexercoffeescript_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCoffeeScript_OnReceivers((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
bool q_scilexercoffeescript_is_signal_connected(void* self, void* signal) {
    return QsciLexerCoffeeScript_IsSignalConnected((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, QMetaMethod* signal ```
bool q_scilexercoffeescript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCoffeeScript_QBaseIsSignalConnected((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCoffeeScript* self, bool (*slot)(QsciLexerCoffeeScript*, QMetaMethod*) ```
void q_scilexercoffeescript_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCoffeeScript_OnIsSignalConnected((QsciLexerCoffeeScript*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerCoffeeScript* self ```
void q_scilexercoffeescript_delete(void* self) {
    QsciLexerCoffeeScript_Delete((QsciLexerCoffeeScript*)(self));
}