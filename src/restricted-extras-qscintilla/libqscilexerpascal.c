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
#include "libqscilexerpascal.hpp"
#include "libqscilexerpascal.h"

/// https://doc.qt.io/qt-6/qscilexerpascal.html

/// q_scilexerpascal_new constructs a new QsciLexerPascal object.
///
///
QsciLexerPascal* q_scilexerpascal_new() {
    return QsciLexerPascal_new();
}

/// q_scilexerpascal_new2 constructs a new QsciLexerPascal object.
///
/// ``` QObject* parent ```
QsciLexerPascal* q_scilexerpascal_new2(void* parent) {
    return QsciLexerPascal_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPascal* self ```
QMetaObject* q_scilexerpascal_meta_object(void* self) {
    return QsciLexerPascal_MetaObject((QsciLexerPascal*)self);
}

/// ``` QsciLexerPascal* self, const char* param1 ```
void* q_scilexerpascal_metacast(void* self, const char* param1) {
    return QsciLexerPascal_Metacast((QsciLexerPascal*)self, param1);
}

/// ``` QsciLexerPascal* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpascal_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPascal_Metacall((QsciLexerPascal*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)(QsciLexerPascal*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpascal_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPascal_OnMetacall((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpascal_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPascal_QBaseMetacall((QsciLexerPascal*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpascal_tr(const char* s) {
    libqt_string _str = QsciLexerPascal_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#language)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_language(void* self) {
    return QsciLexerPascal_Language((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#lexer)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_lexer(void* self) {
    return QsciLexerPascal_Lexer((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerPascal* self ```
const char** q_scilexerpascal_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPascal_AutoCompletionWordSeparators((QsciLexerPascal*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockEnd)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_end(void* self) {
    return QsciLexerPascal_BlockEnd((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockStart)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_start(void* self) {
    return QsciLexerPascal_BlockStart((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockStartKeyword)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_block_start_keyword(void* self) {
    return QsciLexerPascal_BlockStartKeyword((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#braceStyle)
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_brace_style(void* self) {
    return QsciLexerPascal_BraceStyle((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#defaultColor)
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_color(void* self, int style) {
    return QsciLexerPascal_DefaultColor((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#defaultEolFill)
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_default_eol_fill(void* self, int style) {
    return QsciLexerPascal_DefaultEolFill((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#defaultFont)
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_default_font(void* self, int style) {
    return QsciLexerPascal_DefaultFont((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#defaultPaper)
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_paper(void* self, int style) {
    return QsciLexerPascal_DefaultPaper((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#keywords)
///
/// ``` QsciLexerPascal* self, int set ```
const char* q_scilexerpascal_keywords(void* self, int set) {
    return QsciLexerPascal_Keywords((QsciLexerPascal*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#description)
///
/// ``` QsciLexerPascal* self, int style ```
const char* q_scilexerpascal_description(void* self, int style) {
    libqt_string _str = QsciLexerPascal_Description((QsciLexerPascal*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#refreshProperties)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_refresh_properties(void* self) {
    QsciLexerPascal_RefreshProperties((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#foldComments)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_comments(void* self) {
    return QsciLexerPascal_FoldComments((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#foldCompact)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_compact(void* self) {
    return QsciLexerPascal_FoldCompact((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#foldPreprocessor)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_fold_preprocessor(void* self) {
    return QsciLexerPascal_FoldPreprocessor((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#setSmartHighlighting)
///
/// ``` QsciLexerPascal* self, bool enabled ```
void q_scilexerpascal_set_smart_highlighting(void* self, bool enabled) {
    QsciLexerPascal_SetSmartHighlighting((QsciLexerPascal*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#smartHighlighting)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_smart_highlighting(void* self) {
    return QsciLexerPascal_SmartHighlighting((QsciLexerPascal*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#setFoldComments)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_comments(void* self, bool fold) {
    QsciLexerPascal_SetFoldComments((QsciLexerPascal*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerPascal_OnSetFoldComments((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldComments((QsciLexerPascal*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#setFoldCompact)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_compact(void* self, bool fold) {
    QsciLexerPascal_SetFoldCompact((QsciLexerPascal*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerPascal_OnSetFoldCompact((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldCompact((QsciLexerPascal*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#setFoldPreprocessor)
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerPascal_SetFoldPreprocessor((QsciLexerPascal*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool) ```
void q_scilexerpascal_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerPascal_OnSetFoldPreprocessor((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, bool fold ```
void q_scilexerpascal_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldPreprocessor((QsciLexerPascal*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#readProperties)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_ReadProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QSettings*, const char*) ```
void q_scilexerpascal_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPascal_OnReadProperties((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_QBaseReadProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#writeProperties)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_WriteProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QSettings*, const char*) ```
void q_scilexerpascal_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPascal_OnWriteProperties((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_QBaseWriteProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpascal_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPascal_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpascal_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPascal_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockEnd)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_end1(void* self, int* style) {
    return QsciLexerPascal_BlockEnd1((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockStart)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_start1(void* self, int* style) {
    return QsciLexerPascal_BlockStart1((QsciLexerPascal*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpascal.html#blockStartKeyword)
///
/// ``` QsciLexerPascal* self, int* style ```
const char* q_scilexerpascal_block_start_keyword1(void* self, int* style) {
    return QsciLexerPascal_BlockStartKeyword1((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPascal* self ```
QsciAbstractAPIs* q_scilexerpascal_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPascal* self ```
QsciScintilla* q_scilexerpascal_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPascal* self, QsciAbstractAPIs* apis ```
void q_scilexerpascal_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPascal* self, QColor* c ```
void q_scilexerpascal_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPascal* self, QFont* f ```
void q_scilexerpascal_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPascal* self, QColor* c ```
void q_scilexerpascal_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPascal* self, QSettings* qs ```
bool q_scilexerpascal_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPascal* self, QSettings* qs ```
bool q_scilexerpascal_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpascal_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPascal* self, bool eolfilled, int style ```
void q_scilexerpascal_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpascal_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpascal_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpascal_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPascal* self, const char* prop, const char* val ```
void q_scilexerpascal_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpascal_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPascal* self, QSettings* qs, const char* prefix ```
bool q_scilexerpascal_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPascal* self, const char* name ```
void q_scilexerpascal_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPascal* self, bool b ```
bool q_scilexerpascal_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPascal* self ```
QThread* q_scilexerpascal_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPascal* self, QThread* thread ```
void q_scilexerpascal_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPascal* self, int interval ```
int32_t q_scilexerpascal_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPascal* self, int id ```
void q_scilexerpascal_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPascal* self ```
libqt_list /* of QObject* */ q_scilexerpascal_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPascal* self, QObject* parent ```
void q_scilexerpascal_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPascal* self, QObject* filterObj ```
void q_scilexerpascal_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPascal* self, QObject* obj ```
void q_scilexerpascal_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpascal_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPascal* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpascal_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpascal_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpascal_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPascal* self, const char* name, QVariant* value ```
bool q_scilexerpascal_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPascal* self, const char* name ```
QVariant* q_scilexerpascal_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPascal* self ```
const char** q_scilexerpascal_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPascal* self ```
QBindingStorage* q_scilexerpascal_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPascal* self ```
QBindingStorage* q_scilexerpascal_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPascal* self, void (*slot)(QObject*) ```
void q_scilexerpascal_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPascal* self, const char* classname ```
bool q_scilexerpascal_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPascal* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpascal_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpascal_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPascal* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpascal_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPascal* self, QObject* param1 ```
void q_scilexerpascal_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPascal* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpascal_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_lexer_id(void* self) {
    return QsciLexerPascal_LexerId((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_lexer_id(void* self) {
    return QsciLexerPascal_QBaseLexerId((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnLexerId((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_auto_completion_fillups(void* self) {
    return QsciLexerPascal_AutoCompletionFillups((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPascal_QBaseAutoCompletionFillups((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* (*slot)() ```
void q_scilexerpascal_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPascal_OnAutoCompletionFillups((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_block_lookback(void* self) {
    return QsciLexerPascal_BlockLookback((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_block_lookback(void* self) {
    return QsciLexerPascal_QBaseBlockLookback((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnBlockLookback((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_case_sensitive(void* self) {
    return QsciLexerPascal_CaseSensitive((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
bool q_scilexerpascal_qbase_case_sensitive(void* self) {
    return QsciLexerPascal_QBaseCaseSensitive((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)() ```
void q_scilexerpascal_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPascal_OnCaseSensitive((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_color(void* self, int style) {
    return QsciLexerPascal_Color((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_color(void* self, int style) {
    return QsciLexerPascal_QBaseColor((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPascal_OnColor((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_eol_fill(void* self, int style) {
    return QsciLexerPascal_EolFill((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
bool q_scilexerpascal_qbase_eol_fill(void* self, int style) {
    return QsciLexerPascal_QBaseEolFill((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPascal_OnEolFill((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_font(void* self, int style) {
    return QsciLexerPascal_Font((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_qbase_font(void* self, int style) {
    return QsciLexerPascal_QBaseFont((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPascal_OnFont((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_indentation_guide_view(void* self) {
    return QsciLexerPascal_IndentationGuideView((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_indentation_guide_view(void* self) {
    return QsciLexerPascal_QBaseIndentationGuideView((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnIndentationGuideView((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_default_style(void* self) {
    return QsciLexerPascal_DefaultStyle((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_default_style(void* self) {
    return QsciLexerPascal_QBaseDefaultStyle((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnDefaultStyle((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_paper(void* self, int style) {
    return QsciLexerPascal_Paper((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_paper(void* self, int style) {
    return QsciLexerPascal_QBasePaper((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPascal_OnPaper((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_color_with_style(void* self, int style) {
    return QsciLexerPascal_DefaultColorWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultColorWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPascal_OnDefaultColorWithStyle((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_default_font_with_style(void* self, int style) {
    return QsciLexerPascal_DefaultFontWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QFont* q_scilexerpascal_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultFontWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPascal_OnDefaultFontWithStyle((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_default_paper_with_style(void* self, int style) {
    return QsciLexerPascal_DefaultPaperWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int style ```
QColor* q_scilexerpascal_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultPaperWithStyle((QsciLexerPascal*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPascal_OnDefaultPaperWithStyle((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QsciScintilla* editor ```
void q_scilexerpascal_set_editor(void* self, void* editor) {
    QsciLexerPascal_SetEditor((QsciLexerPascal*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QsciScintilla* editor ```
void q_scilexerpascal_qbase_set_editor(void* self, void* editor) {
    QsciLexerPascal_QBaseSetEditor((QsciLexerPascal*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QsciScintilla*) ```
void q_scilexerpascal_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnSetEditor((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_style_bits_needed(void* self) {
    return QsciLexerPascal_StyleBitsNeeded((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_style_bits_needed(void* self) {
    return QsciLexerPascal_QBaseStyleBitsNeeded((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnStyleBitsNeeded((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_word_characters(void* self) {
    return QsciLexerPascal_WordCharacters((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
const char* q_scilexerpascal_qbase_word_characters(void* self) {
    return QsciLexerPascal_QBaseWordCharacters((QsciLexerPascal*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* (*slot)() ```
void q_scilexerpascal_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerPascal_OnWordCharacters((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, int autoindentstyle ```
void q_scilexerpascal_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPascal_SetAutoIndentStyle((QsciLexerPascal*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int autoindentstyle ```
void q_scilexerpascal_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPascal_QBaseSetAutoIndentStyle((QsciLexerPascal*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, int) ```
void q_scilexerpascal_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPascal_OnSetAutoIndentStyle((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_set_color(void* self, void* c, int style) {
    QsciLexerPascal_SetColor((QsciLexerPascal*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPascal_QBaseSetColor((QsciLexerPascal*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPascal_OnSetColor((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, bool eoffill, int style ```
void q_scilexerpascal_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPascal_SetEolFill((QsciLexerPascal*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool eoffill, int style ```
void q_scilexerpascal_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPascal_QBaseSetEolFill((QsciLexerPascal*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, bool, int) ```
void q_scilexerpascal_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPascal_OnSetEolFill((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_set_font(void* self, void* f, int style) {
    QsciLexerPascal_SetFont((QsciLexerPascal*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QFont* f, int style ```
void q_scilexerpascal_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPascal_QBaseSetFont((QsciLexerPascal*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QFont*, int) ```
void q_scilexerpascal_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPascal_OnSetFont((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_set_paper(void* self, void* c, int style) {
    QsciLexerPascal_SetPaper((QsciLexerPascal*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QColor* c, int style ```
void q_scilexerpascal_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPascal_QBaseSetPaper((QsciLexerPascal*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QColor*, int) ```
void q_scilexerpascal_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPascal_OnSetPaper((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
bool q_scilexerpascal_event(void* self, void* event) {
    return QsciLexerPascal_Event((QsciLexerPascal*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
bool q_scilexerpascal_qbase_event(void* self, void* event) {
    return QsciLexerPascal_QBaseEvent((QsciLexerPascal*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QEvent*) ```
void q_scilexerpascal_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPascal_OnEvent((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* watched, QEvent* event ```
bool q_scilexerpascal_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPascal_EventFilter((QsciLexerPascal*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* watched, QEvent* event ```
bool q_scilexerpascal_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPascal_QBaseEventFilter((QsciLexerPascal*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QObject*, QEvent*) ```
void q_scilexerpascal_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPascal_OnEventFilter((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QTimerEvent* event ```
void q_scilexerpascal_timer_event(void* self, void* event) {
    QsciLexerPascal_TimerEvent((QsciLexerPascal*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QTimerEvent* event ```
void q_scilexerpascal_qbase_timer_event(void* self, void* event) {
    QsciLexerPascal_QBaseTimerEvent((QsciLexerPascal*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QTimerEvent*) ```
void q_scilexerpascal_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnTimerEvent((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QChildEvent* event ```
void q_scilexerpascal_child_event(void* self, void* event) {
    QsciLexerPascal_ChildEvent((QsciLexerPascal*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QChildEvent* event ```
void q_scilexerpascal_qbase_child_event(void* self, void* event) {
    QsciLexerPascal_QBaseChildEvent((QsciLexerPascal*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QChildEvent*) ```
void q_scilexerpascal_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnChildEvent((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
void q_scilexerpascal_custom_event(void* self, void* event) {
    QsciLexerPascal_CustomEvent((QsciLexerPascal*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QEvent* event ```
void q_scilexerpascal_qbase_custom_event(void* self, void* event) {
    QsciLexerPascal_QBaseCustomEvent((QsciLexerPascal*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QEvent*) ```
void q_scilexerpascal_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnCustomEvent((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_connect_notify(void* self, void* signal) {
    QsciLexerPascal_ConnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPascal_QBaseConnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnConnectNotify((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_disconnect_notify(void* self, void* signal) {
    QsciLexerPascal_DisconnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
void q_scilexerpascal_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPascal_QBaseDisconnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, void (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPascal_OnDisconnectNotify((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_sender(void* self) {
    return QsciLexerPascal_Sender((QsciLexerPascal*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
QObject* q_scilexerpascal_qbase_sender(void* self) {
    return QsciLexerPascal_QBaseSender((QsciLexerPascal*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QObject* (*slot)() ```
void q_scilexerpascal_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPascal_OnSender((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_sender_signal_index(void* self) {
    return QsciLexerPascal_SenderSignalIndex((QsciLexerPascal*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self ```
int32_t q_scilexerpascal_qbase_sender_signal_index(void* self) {
    return QsciLexerPascal_QBaseSenderSignalIndex((QsciLexerPascal*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)() ```
void q_scilexerpascal_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPascal_OnSenderSignalIndex((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* signal ```
int32_t q_scilexerpascal_receivers(void* self, const char* signal) {
    return QsciLexerPascal_Receivers((QsciLexerPascal*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, const char* signal ```
int32_t q_scilexerpascal_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPascal_QBaseReceivers((QsciLexerPascal*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, int32_t (*slot)(QsciLexerPascal*, const char*) ```
void q_scilexerpascal_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPascal_OnReceivers((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
bool q_scilexerpascal_is_signal_connected(void* self, void* signal) {
    return QsciLexerPascal_IsSignalConnected((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPascal* self, QMetaMethod* signal ```
bool q_scilexerpascal_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPascal_QBaseIsSignalConnected((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPascal* self, bool (*slot)(QsciLexerPascal*, QMetaMethod*) ```
void q_scilexerpascal_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPascal_OnIsSignalConnected((QsciLexerPascal*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPascal* self ```
void q_scilexerpascal_delete(void* self) {
    QsciLexerPascal_Delete((QsciLexerPascal*)(self));
}