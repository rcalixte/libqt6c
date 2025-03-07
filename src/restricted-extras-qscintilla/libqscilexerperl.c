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
#include "libqscilexerperl.hpp"
#include "libqscilexerperl.h"

/// https://doc.qt.io/qt-6/qscilexerperl.html

/// q_scilexerperl_new constructs a new QsciLexerPerl object.
///
///
QsciLexerPerl* q_scilexerperl_new() {
    return QsciLexerPerl_new();
}

/// q_scilexerperl_new2 constructs a new QsciLexerPerl object.
///
/// ``` QObject* parent ```
QsciLexerPerl* q_scilexerperl_new2(void* parent) {
    return QsciLexerPerl_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPerl* self ```
QMetaObject* q_scilexerperl_meta_object(void* self) {
    return QsciLexerPerl_MetaObject((QsciLexerPerl*)self);
}

/// ``` QsciLexerPerl* self, const char* param1 ```
void* q_scilexerperl_metacast(void* self, const char* param1) {
    return QsciLexerPerl_Metacast((QsciLexerPerl*)self, param1);
}

/// ``` QsciLexerPerl* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerperl_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPerl_Metacall((QsciLexerPerl*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)(QsciLexerPerl*, enum QMetaObject__Call, int, void*) ```
void q_scilexerperl_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPerl_OnMetacall((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPerl* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerperl_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPerl_QBaseMetacall((QsciLexerPerl*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerperl_tr(const char* s) {
    libqt_string _str = QsciLexerPerl_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#language)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_language(void* self) {
    return QsciLexerPerl_Language((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#lexer)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_lexer(void* self) {
    return QsciLexerPerl_Lexer((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerPerl* self ```
const char** q_scilexerperl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPerl_AutoCompletionWordSeparators((QsciLexerPerl*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#blockEnd)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_block_end(void* self) {
    return QsciLexerPerl_BlockEnd((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#blockStart)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_block_start(void* self) {
    return QsciLexerPerl_BlockStart((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#braceStyle)
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_brace_style(void* self) {
    return QsciLexerPerl_BraceStyle((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#wordCharacters)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_word_characters(void* self) {
    return QsciLexerPerl_WordCharacters((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#defaultColor)
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_default_color(void* self, int style) {
    return QsciLexerPerl_DefaultColor((QsciLexerPerl*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#defaultEolFill)
///
/// ``` QsciLexerPerl* self, int style ```
bool q_scilexerperl_default_eol_fill(void* self, int style) {
    return QsciLexerPerl_DefaultEolFill((QsciLexerPerl*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#defaultFont)
///
/// ``` QsciLexerPerl* self, int style ```
QFont* q_scilexerperl_default_font(void* self, int style) {
    return QsciLexerPerl_DefaultFont((QsciLexerPerl*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#defaultPaper)
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_default_paper(void* self, int style) {
    return QsciLexerPerl_DefaultPaper((QsciLexerPerl*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#keywords)
///
/// ``` QsciLexerPerl* self, int set ```
const char* q_scilexerperl_keywords(void* self, int set) {
    return QsciLexerPerl_Keywords((QsciLexerPerl*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#description)
///
/// ``` QsciLexerPerl* self, int style ```
const char* q_scilexerperl_description(void* self, int style) {
    libqt_string _str = QsciLexerPerl_Description((QsciLexerPerl*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#refreshProperties)
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_refresh_properties(void* self) {
    QsciLexerPerl_RefreshProperties((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#setFoldAtElse)
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_set_fold_at_else(void* self, bool fold) {
    QsciLexerPerl_SetFoldAtElse((QsciLexerPerl*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#foldAtElse)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_fold_at_else(void* self) {
    return QsciLexerPerl_FoldAtElse((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#foldComments)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_fold_comments(void* self) {
    return QsciLexerPerl_FoldComments((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#foldCompact)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_fold_compact(void* self) {
    return QsciLexerPerl_FoldCompact((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#setFoldPackages)
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_set_fold_packages(void* self, bool fold) {
    QsciLexerPerl_SetFoldPackages((QsciLexerPerl*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#foldPackages)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_fold_packages(void* self) {
    return QsciLexerPerl_FoldPackages((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#setFoldPODBlocks)
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_set_fold_p_o_d_blocks(void* self, bool fold) {
    QsciLexerPerl_SetFoldPODBlocks((QsciLexerPerl*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#foldPODBlocks)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_fold_p_o_d_blocks(void* self) {
    return QsciLexerPerl_FoldPODBlocks((QsciLexerPerl*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#setFoldComments)
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_set_fold_comments(void* self, bool fold) {
    QsciLexerPerl_SetFoldComments((QsciLexerPerl*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, bool) ```
void q_scilexerperl_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerPerl_OnSetFoldComments((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPerl_QBaseSetFoldComments((QsciLexerPerl*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#setFoldCompact)
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_set_fold_compact(void* self, bool fold) {
    QsciLexerPerl_SetFoldCompact((QsciLexerPerl*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, bool) ```
void q_scilexerperl_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerPerl_OnSetFoldCompact((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPerl* self, bool fold ```
void q_scilexerperl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPerl_QBaseSetFoldCompact((QsciLexerPerl*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#readProperties)
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_ReadProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, QSettings*, const char*) ```
void q_scilexerperl_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPerl_OnReadProperties((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_QBaseReadProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#writeProperties)
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_WriteProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, QSettings*, const char*) ```
void q_scilexerperl_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPerl_OnWriteProperties((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_QBaseWriteProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerperl_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPerl_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerperl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPerl_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#blockEnd)
///
/// ``` QsciLexerPerl* self, int* style ```
const char* q_scilexerperl_block_end1(void* self, int* style) {
    return QsciLexerPerl_BlockEnd1((QsciLexerPerl*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerperl.html#blockStart)
///
/// ``` QsciLexerPerl* self, int* style ```
const char* q_scilexerperl_block_start1(void* self, int* style) {
    return QsciLexerPerl_BlockStart1((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPerl* self ```
QsciAbstractAPIs* q_scilexerperl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPerl* self ```
QsciScintilla* q_scilexerperl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPerl* self, QsciAbstractAPIs* apis ```
void q_scilexerperl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPerl* self, QColor* c ```
void q_scilexerperl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPerl* self, QFont* f ```
void q_scilexerperl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPerl* self, QColor* c ```
void q_scilexerperl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPerl* self, QSettings* qs ```
bool q_scilexerperl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPerl* self, QSettings* qs ```
bool q_scilexerperl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerperl_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPerl* self, bool eolfilled, int style ```
void q_scilexerperl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerperl_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPerl* self, QFont* f, int style ```
void q_scilexerperl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerperl_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerperl_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPerl* self, const char* prop, const char* val ```
void q_scilexerperl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerperl_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPerl* self, QSettings* qs, const char* prefix ```
bool q_scilexerperl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPerl* self, const char* name ```
void q_scilexerperl_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPerl* self, bool b ```
bool q_scilexerperl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPerl* self ```
QThread* q_scilexerperl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPerl* self, QThread* thread ```
void q_scilexerperl_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPerl* self, int interval ```
int32_t q_scilexerperl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPerl* self, int id ```
void q_scilexerperl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPerl* self ```
libqt_list /* of QObject* */ q_scilexerperl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPerl* self, QObject* parent ```
void q_scilexerperl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPerl* self, QObject* filterObj ```
void q_scilexerperl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPerl* self, QObject* obj ```
void q_scilexerperl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerperl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPerl* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerperl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerperl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerperl_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPerl* self, const char* name, QVariant* value ```
bool q_scilexerperl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPerl* self, const char* name ```
QVariant* q_scilexerperl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPerl* self ```
const char** q_scilexerperl_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPerl* self ```
QBindingStorage* q_scilexerperl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPerl* self ```
QBindingStorage* q_scilexerperl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPerl* self, void (*slot)(QObject*) ```
void q_scilexerperl_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPerl* self ```
QObject* q_scilexerperl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPerl* self, const char* classname ```
bool q_scilexerperl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPerl* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerperl_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerperl_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPerl* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerperl_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPerl* self, QObject* param1 ```
void q_scilexerperl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPerl* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerperl_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_lexer_id(void* self) {
    return QsciLexerPerl_LexerId((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_lexer_id(void* self) {
    return QsciLexerPerl_QBaseLexerId((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnLexerId((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_auto_completion_fillups(void* self) {
    return QsciLexerPerl_AutoCompletionFillups((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
const char* q_scilexerperl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPerl_QBaseAutoCompletionFillups((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, const char* (*slot)() ```
void q_scilexerperl_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPerl_OnAutoCompletionFillups((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_block_lookback(void* self) {
    return QsciLexerPerl_BlockLookback((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_block_lookback(void* self) {
    return QsciLexerPerl_QBaseBlockLookback((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnBlockLookback((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int* style ```
const char* q_scilexerperl_block_start_keyword(void* self, int* style) {
    return QsciLexerPerl_BlockStartKeyword((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int* style ```
const char* q_scilexerperl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPerl_QBaseBlockStartKeyword((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, const char* (*slot)(QsciLexerPerl*, int*) ```
void q_scilexerperl_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPerl_OnBlockStartKeyword((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_case_sensitive(void* self) {
    return QsciLexerPerl_CaseSensitive((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
bool q_scilexerperl_qbase_case_sensitive(void* self) {
    return QsciLexerPerl_QBaseCaseSensitive((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool (*slot)() ```
void q_scilexerperl_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPerl_OnCaseSensitive((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_color(void* self, int style) {
    return QsciLexerPerl_Color((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_qbase_color(void* self, int style) {
    return QsciLexerPerl_QBaseColor((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPerl_OnColor((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
bool q_scilexerperl_eol_fill(void* self, int style) {
    return QsciLexerPerl_EolFill((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
bool q_scilexerperl_qbase_eol_fill(void* self, int style) {
    return QsciLexerPerl_QBaseEolFill((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPerl_OnEolFill((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QFont* q_scilexerperl_font(void* self, int style) {
    return QsciLexerPerl_Font((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QFont* q_scilexerperl_qbase_font(void* self, int style) {
    return QsciLexerPerl_QBaseFont((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QFont* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPerl_OnFont((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_indentation_guide_view(void* self) {
    return QsciLexerPerl_IndentationGuideView((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_indentation_guide_view(void* self) {
    return QsciLexerPerl_QBaseIndentationGuideView((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnIndentationGuideView((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_default_style(void* self) {
    return QsciLexerPerl_DefaultStyle((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_default_style(void* self) {
    return QsciLexerPerl_QBaseDefaultStyle((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnDefaultStyle((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_paper(void* self, int style) {
    return QsciLexerPerl_Paper((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_qbase_paper(void* self, int style) {
    return QsciLexerPerl_QBasePaper((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPerl_OnPaper((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_default_color_with_style(void* self, int style) {
    return QsciLexerPerl_DefaultColorWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultColorWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPerl_OnDefaultColorWithStyle((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QFont* q_scilexerperl_default_font_with_style(void* self, int style) {
    return QsciLexerPerl_DefaultFontWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QFont* q_scilexerperl_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultFontWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QFont* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPerl_OnDefaultFontWithStyle((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_default_paper_with_style(void* self, int style) {
    return QsciLexerPerl_DefaultPaperWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int style ```
QColor* q_scilexerperl_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultPaperWithStyle((QsciLexerPerl*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPerl_OnDefaultPaperWithStyle((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QsciScintilla* editor ```
void q_scilexerperl_set_editor(void* self, void* editor) {
    QsciLexerPerl_SetEditor((QsciLexerPerl*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QsciScintilla* editor ```
void q_scilexerperl_qbase_set_editor(void* self, void* editor) {
    QsciLexerPerl_QBaseSetEditor((QsciLexerPerl*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QsciScintilla*) ```
void q_scilexerperl_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnSetEditor((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_style_bits_needed(void* self) {
    return QsciLexerPerl_StyleBitsNeeded((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_style_bits_needed(void* self) {
    return QsciLexerPerl_QBaseStyleBitsNeeded((QsciLexerPerl*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnStyleBitsNeeded((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, int autoindentstyle ```
void q_scilexerperl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPerl_SetAutoIndentStyle((QsciLexerPerl*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int autoindentstyle ```
void q_scilexerperl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPerl_QBaseSetAutoIndentStyle((QsciLexerPerl*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, int) ```
void q_scilexerperl_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPerl_OnSetAutoIndentStyle((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_set_color(void* self, void* c, int style) {
    QsciLexerPerl_SetColor((QsciLexerPerl*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPerl_QBaseSetColor((QsciLexerPerl*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QColor*, int) ```
void q_scilexerperl_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPerl_OnSetColor((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, bool eoffill, int style ```
void q_scilexerperl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPerl_SetEolFill((QsciLexerPerl*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool eoffill, int style ```
void q_scilexerperl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPerl_QBaseSetEolFill((QsciLexerPerl*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, bool, int) ```
void q_scilexerperl_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPerl_OnSetEolFill((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QFont* f, int style ```
void q_scilexerperl_set_font(void* self, void* f, int style) {
    QsciLexerPerl_SetFont((QsciLexerPerl*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QFont* f, int style ```
void q_scilexerperl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPerl_QBaseSetFont((QsciLexerPerl*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QFont*, int) ```
void q_scilexerperl_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPerl_OnSetFont((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_set_paper(void* self, void* c, int style) {
    QsciLexerPerl_SetPaper((QsciLexerPerl*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QColor* c, int style ```
void q_scilexerperl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPerl_QBaseSetPaper((QsciLexerPerl*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QColor*, int) ```
void q_scilexerperl_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPerl_OnSetPaper((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QEvent* event ```
bool q_scilexerperl_event(void* self, void* event) {
    return QsciLexerPerl_Event((QsciLexerPerl*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QEvent* event ```
bool q_scilexerperl_qbase_event(void* self, void* event) {
    return QsciLexerPerl_QBaseEvent((QsciLexerPerl*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, QEvent*) ```
void q_scilexerperl_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPerl_OnEvent((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QObject* watched, QEvent* event ```
bool q_scilexerperl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPerl_EventFilter((QsciLexerPerl*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QObject* watched, QEvent* event ```
bool q_scilexerperl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPerl_QBaseEventFilter((QsciLexerPerl*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, QObject*, QEvent*) ```
void q_scilexerperl_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPerl_OnEventFilter((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QTimerEvent* event ```
void q_scilexerperl_timer_event(void* self, void* event) {
    QsciLexerPerl_TimerEvent((QsciLexerPerl*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QTimerEvent* event ```
void q_scilexerperl_qbase_timer_event(void* self, void* event) {
    QsciLexerPerl_QBaseTimerEvent((QsciLexerPerl*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QTimerEvent*) ```
void q_scilexerperl_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnTimerEvent((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QChildEvent* event ```
void q_scilexerperl_child_event(void* self, void* event) {
    QsciLexerPerl_ChildEvent((QsciLexerPerl*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QChildEvent* event ```
void q_scilexerperl_qbase_child_event(void* self, void* event) {
    QsciLexerPerl_QBaseChildEvent((QsciLexerPerl*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QChildEvent*) ```
void q_scilexerperl_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnChildEvent((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QEvent* event ```
void q_scilexerperl_custom_event(void* self, void* event) {
    QsciLexerPerl_CustomEvent((QsciLexerPerl*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QEvent* event ```
void q_scilexerperl_qbase_custom_event(void* self, void* event) {
    QsciLexerPerl_QBaseCustomEvent((QsciLexerPerl*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QEvent*) ```
void q_scilexerperl_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnCustomEvent((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
void q_scilexerperl_connect_notify(void* self, void* signal) {
    QsciLexerPerl_ConnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
void q_scilexerperl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPerl_QBaseConnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QMetaMethod*) ```
void q_scilexerperl_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnConnectNotify((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
void q_scilexerperl_disconnect_notify(void* self, void* signal) {
    QsciLexerPerl_DisconnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
void q_scilexerperl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPerl_QBaseDisconnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, void (*slot)(QsciLexerPerl*, QMetaMethod*) ```
void q_scilexerperl_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPerl_OnDisconnectNotify((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
QObject* q_scilexerperl_sender(void* self) {
    return QsciLexerPerl_Sender((QsciLexerPerl*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
QObject* q_scilexerperl_qbase_sender(void* self) {
    return QsciLexerPerl_QBaseSender((QsciLexerPerl*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QObject* (*slot)() ```
void q_scilexerperl_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPerl_OnSender((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_sender_signal_index(void* self) {
    return QsciLexerPerl_SenderSignalIndex((QsciLexerPerl*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self ```
int32_t q_scilexerperl_qbase_sender_signal_index(void* self) {
    return QsciLexerPerl_QBaseSenderSignalIndex((QsciLexerPerl*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)() ```
void q_scilexerperl_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPerl_OnSenderSignalIndex((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, const char* signal ```
int32_t q_scilexerperl_receivers(void* self, const char* signal) {
    return QsciLexerPerl_Receivers((QsciLexerPerl*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, const char* signal ```
int32_t q_scilexerperl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPerl_QBaseReceivers((QsciLexerPerl*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, int32_t (*slot)(QsciLexerPerl*, const char*) ```
void q_scilexerperl_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPerl_OnReceivers((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
bool q_scilexerperl_is_signal_connected(void* self, void* signal) {
    return QsciLexerPerl_IsSignalConnected((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPerl* self, QMetaMethod* signal ```
bool q_scilexerperl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPerl_QBaseIsSignalConnected((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPerl* self, bool (*slot)(QsciLexerPerl*, QMetaMethod*) ```
void q_scilexerperl_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPerl_OnIsSignalConnected((QsciLexerPerl*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPerl* self ```
void q_scilexerperl_delete(void* self) {
    QsciLexerPerl_Delete((QsciLexerPerl*)(self));
}