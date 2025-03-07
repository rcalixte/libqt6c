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
#include "libqscilexerpython.hpp"
#include "libqscilexerpython.h"

/// https://doc.qt.io/qt-6/qscilexerpython.html

/// q_scilexerpython_new constructs a new QsciLexerPython object.
///
///
QsciLexerPython* q_scilexerpython_new() {
    return QsciLexerPython_new();
}

/// q_scilexerpython_new2 constructs a new QsciLexerPython object.
///
/// ``` QObject* parent ```
QsciLexerPython* q_scilexerpython_new2(void* parent) {
    return QsciLexerPython_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerPython* self ```
QMetaObject* q_scilexerpython_meta_object(void* self) {
    return QsciLexerPython_MetaObject((QsciLexerPython*)self);
}

/// ``` QsciLexerPython* self, const char* param1 ```
void* q_scilexerpython_metacast(void* self, const char* param1) {
    return QsciLexerPython_Metacast((QsciLexerPython*)self, param1);
}

/// ``` QsciLexerPython* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpython_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPython_Metacall((QsciLexerPython*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, int32_t (*slot)(QsciLexerPython*, enum QMetaObject__Call, int, void*) ```
void q_scilexerpython_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerPython_OnMetacall((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexerpython_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPython_QBaseMetacall((QsciLexerPython*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexerpython_tr(const char* s) {
    libqt_string _str = QsciLexerPython_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#language)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_language(void* self) {
    return QsciLexerPython_Language((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#lexer)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_lexer(void* self) {
    return QsciLexerPython_Lexer((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerPython* self ```
const char** q_scilexerpython_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPython_AutoCompletionWordSeparators((QsciLexerPython*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockLookback)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_block_lookback(void* self) {
    return QsciLexerPython_BlockLookback((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_block_start(void* self) {
    return QsciLexerPython_BlockStart((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#braceStyle)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_brace_style(void* self) {
    return QsciLexerPython_BraceStyle((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultColor)
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_color(void* self, int style) {
    return QsciLexerPython_DefaultColor((QsciLexerPython*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultEolFill)
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_default_eol_fill(void* self, int style) {
    return QsciLexerPython_DefaultEolFill((QsciLexerPython*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultFont)
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_default_font(void* self, int style) {
    return QsciLexerPython_DefaultFont((QsciLexerPython*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#defaultPaper)
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_paper(void* self, int style) {
    return QsciLexerPython_DefaultPaper((QsciLexerPython*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationGuideView)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_indentation_guide_view(void* self) {
    return QsciLexerPython_IndentationGuideView((QsciLexerPython*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerPython_OnIndentationGuideView((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_indentation_guide_view(void* self) {
    return QsciLexerPython_QBaseIndentationGuideView((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#keywords)
///
/// ``` QsciLexerPython* self, int set ```
const char* q_scilexerpython_keywords(void* self, int set) {
    return QsciLexerPython_Keywords((QsciLexerPython*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#description)
///
/// ``` QsciLexerPython* self, int style ```
const char* q_scilexerpython_description(void* self, int style) {
    libqt_string _str = QsciLexerPython_Description((QsciLexerPython*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#refreshProperties)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_refresh_properties(void* self) {
    QsciLexerPython_RefreshProperties((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldComments)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_comments(void* self) {
    return QsciLexerPython_FoldComments((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldCompact)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_compact(void* self, bool fold) {
    QsciLexerPython_SetFoldCompact((QsciLexerPython*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldCompact)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_compact(void* self) {
    return QsciLexerPython_FoldCompact((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#foldQuotes)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_fold_quotes(void* self) {
    return QsciLexerPython_FoldQuotes((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#indentationWarning)
///
/// ``` QsciLexerPython* self ```
int64_t q_scilexerpython_indentation_warning(void* self) {
    return QsciLexerPython_IndentationWarning((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setHighlightSubidentifiers)
///
/// ``` QsciLexerPython* self, bool enabled ```
void q_scilexerpython_set_highlight_subidentifiers(void* self, bool enabled) {
    QsciLexerPython_SetHighlightSubidentifiers((QsciLexerPython*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#highlightSubidentifiers)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_highlight_subidentifiers(void* self) {
    return QsciLexerPython_HighlightSubidentifiers((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setStringsOverNewlineAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_strings_over_newline_allowed(void* self, bool allowed) {
    QsciLexerPython_SetStringsOverNewlineAllowed((QsciLexerPython*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#stringsOverNewlineAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_strings_over_newline_allowed(void* self) {
    return QsciLexerPython_StringsOverNewlineAllowed((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV2UnicodeAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v2_unicode_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV2UnicodeAllowed((QsciLexerPython*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v2UnicodeAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v2_unicode_allowed(void* self) {
    return QsciLexerPython_V2UnicodeAllowed((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BinaryOctalAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v3_binary_octal_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV3BinaryOctalAllowed((QsciLexerPython*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BinaryOctalAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v3_binary_octal_allowed(void* self) {
    return QsciLexerPython_V3BinaryOctalAllowed((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setV3BytesAllowed)
///
/// ``` QsciLexerPython* self, bool allowed ```
void q_scilexerpython_set_v3_bytes_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV3BytesAllowed((QsciLexerPython*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#v3BytesAllowed)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_v3_bytes_allowed(void* self) {
    return QsciLexerPython_V3BytesAllowed((QsciLexerPython*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldComments)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_comments(void* self, bool fold) {
    QsciLexerPython_SetFoldComments((QsciLexerPython*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool) ```
void q_scilexerpython_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerPython_OnSetFoldComments((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPython_QBaseSetFoldComments((QsciLexerPython*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setFoldQuotes)
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_set_fold_quotes(void* self, bool fold) {
    QsciLexerPython_SetFoldQuotes((QsciLexerPython*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool) ```
void q_scilexerpython_on_set_fold_quotes(void* self, void (*slot)(void*, bool)) {
    QsciLexerPython_OnSetFoldQuotes((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, bool fold ```
void q_scilexerpython_qbase_set_fold_quotes(void* self, bool fold) {
    QsciLexerPython_QBaseSetFoldQuotes((QsciLexerPython*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#setIndentationWarning)
///
/// ``` QsciLexerPython* self, enum QsciLexerPython__IndentationWarning warn ```
void q_scilexerpython_set_indentation_warning(void* self, int64_t warn) {
    QsciLexerPython_SetIndentationWarning((QsciLexerPython*)self, warn);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, enum QsciLexerPython__IndentationWarning) ```
void q_scilexerpython_on_set_indentation_warning(void* self, void (*slot)(void*, int64_t)) {
    QsciLexerPython_OnSetIndentationWarning((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, enum QsciLexerPython__IndentationWarning warn ```
void q_scilexerpython_qbase_set_indentation_warning(void* self, int64_t warn) {
    QsciLexerPython_QBaseSetIndentationWarning((QsciLexerPython*)self, warn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#readProperties)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_ReadProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QSettings*, const char*) ```
void q_scilexerpython_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPython_OnReadProperties((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_QBaseReadProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#writeProperties)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_WriteProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QSettings*, const char*) ```
void q_scilexerpython_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerPython_OnWriteProperties((QsciLexerPython*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_QBaseWriteProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexerpython_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPython_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexerpython_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPython_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexerpython.html#blockStart)
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_start1(void* self, int* style) {
    return QsciLexerPython_BlockStart1((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerPython* self ```
QsciAbstractAPIs* q_scilexerpython_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerPython* self ```
QsciScintilla* q_scilexerpython_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerPython* self, QsciAbstractAPIs* apis ```
void q_scilexerpython_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerPython* self, QColor* c ```
void q_scilexerpython_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerPython* self, QFont* f ```
void q_scilexerpython_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerPython* self, QColor* c ```
void q_scilexerpython_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs ```
bool q_scilexerpython_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs ```
bool q_scilexerpython_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpython_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerPython* self, bool eolfilled, int style ```
void q_scilexerpython_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexerpython_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexerpython_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexerpython_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerPython* self, const char* prop, const char* val ```
void q_scilexerpython_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexerpython_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerPython* self, QSettings* qs, const char* prefix ```
bool q_scilexerpython_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerPython* self, const char* name ```
void q_scilexerpython_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerPython* self, bool b ```
bool q_scilexerpython_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerPython* self ```
QThread* q_scilexerpython_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerPython* self, QThread* thread ```
void q_scilexerpython_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPython* self, int interval ```
int32_t q_scilexerpython_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerPython* self, int id ```
void q_scilexerpython_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerPython* self ```
libqt_list /* of QObject* */ q_scilexerpython_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerPython* self, QObject* parent ```
void q_scilexerpython_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerPython* self, QObject* filterObj ```
void q_scilexerpython_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerPython* self, QObject* obj ```
void q_scilexerpython_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexerpython_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPython* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexerpython_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexerpython_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexerpython_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerPython* self, const char* name, QVariant* value ```
bool q_scilexerpython_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerPython* self, const char* name ```
QVariant* q_scilexerpython_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerPython* self ```
const char** q_scilexerpython_dynamic_property_names(void* self) {
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
/// ``` QsciLexerPython* self ```
QBindingStorage* q_scilexerpython_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerPython* self ```
QBindingStorage* q_scilexerpython_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerPython* self, void (*slot)(QObject*) ```
void q_scilexerpython_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerPython* self, const char* classname ```
bool q_scilexerpython_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerPython* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexerpython_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpython_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerPython* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexerpython_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerPython* self, QObject* param1 ```
void q_scilexerpython_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerPython* self, void (*slot)(QObject*, QObject*) ```
void q_scilexerpython_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_lexer_id(void* self) {
    return QsciLexerPython_LexerId((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_lexer_id(void* self) {
    return QsciLexerPython_QBaseLexerId((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerPython_OnLexerId((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_auto_completion_fillups(void* self) {
    return QsciLexerPython_AutoCompletionFillups((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPython_QBaseAutoCompletionFillups((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)() ```
void q_scilexerpython_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerPython_OnAutoCompletionFillups((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_end(void* self, int* style) {
    return QsciLexerPython_BlockEnd((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_qbase_block_end(void* self, int* style) {
    return QsciLexerPython_QBaseBlockEnd((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)(QsciLexerPython*, int*) ```
void q_scilexerpython_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPython_OnBlockEnd((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_block_start_keyword(void* self, int* style) {
    return QsciLexerPython_BlockStartKeyword((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int* style ```
const char* q_scilexerpython_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPython_QBaseBlockStartKeyword((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)(QsciLexerPython*, int*) ```
void q_scilexerpython_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerPython_OnBlockStartKeyword((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_case_sensitive(void* self) {
    return QsciLexerPython_CaseSensitive((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
bool q_scilexerpython_qbase_case_sensitive(void* self) {
    return QsciLexerPython_QBaseCaseSensitive((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)() ```
void q_scilexerpython_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerPython_OnCaseSensitive((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_color(void* self, int style) {
    return QsciLexerPython_Color((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_color(void* self, int style) {
    return QsciLexerPython_QBaseColor((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPython_OnColor((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_eol_fill(void* self, int style) {
    return QsciLexerPython_EolFill((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
bool q_scilexerpython_qbase_eol_fill(void* self, int style) {
    return QsciLexerPython_QBaseEolFill((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerPython_OnEolFill((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_font(void* self, int style) {
    return QsciLexerPython_Font((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_qbase_font(void* self, int style) {
    return QsciLexerPython_QBaseFont((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPython_OnFont((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_default_style(void* self) {
    return QsciLexerPython_DefaultStyle((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_default_style(void* self) {
    return QsciLexerPython_QBaseDefaultStyle((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerPython_OnDefaultStyle((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_paper(void* self, int style) {
    return QsciLexerPython_Paper((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_paper(void* self, int style) {
    return QsciLexerPython_QBasePaper((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPython_OnPaper((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_color_with_style(void* self, int style) {
    return QsciLexerPython_DefaultColorWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerPython_QBaseDefaultColorWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPython_OnDefaultColorWithStyle((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_default_font_with_style(void* self, int style) {
    return QsciLexerPython_DefaultFontWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QFont* q_scilexerpython_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerPython_QBaseDefaultFontWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerPython_OnDefaultFontWithStyle((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_default_paper_with_style(void* self, int style) {
    return QsciLexerPython_DefaultPaperWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int style ```
QColor* q_scilexerpython_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerPython_QBaseDefaultPaperWithStyle((QsciLexerPython*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerPython_OnDefaultPaperWithStyle((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QsciScintilla* editor ```
void q_scilexerpython_set_editor(void* self, void* editor) {
    QsciLexerPython_SetEditor((QsciLexerPython*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QsciScintilla* editor ```
void q_scilexerpython_qbase_set_editor(void* self, void* editor) {
    QsciLexerPython_QBaseSetEditor((QsciLexerPython*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QsciScintilla*) ```
void q_scilexerpython_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnSetEditor((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_style_bits_needed(void* self) {
    return QsciLexerPython_StyleBitsNeeded((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_style_bits_needed(void* self) {
    return QsciLexerPython_QBaseStyleBitsNeeded((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerPython_OnStyleBitsNeeded((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_word_characters(void* self) {
    return QsciLexerPython_WordCharacters((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
const char* q_scilexerpython_qbase_word_characters(void* self) {
    return QsciLexerPython_QBaseWordCharacters((QsciLexerPython*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* (*slot)() ```
void q_scilexerpython_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerPython_OnWordCharacters((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, int autoindentstyle ```
void q_scilexerpython_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPython_SetAutoIndentStyle((QsciLexerPython*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, int autoindentstyle ```
void q_scilexerpython_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPython_QBaseSetAutoIndentStyle((QsciLexerPython*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, int) ```
void q_scilexerpython_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerPython_OnSetAutoIndentStyle((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_set_color(void* self, void* c, int style) {
    QsciLexerPython_SetColor((QsciLexerPython*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPython_QBaseSetColor((QsciLexerPython*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QColor*, int) ```
void q_scilexerpython_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPython_OnSetColor((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, bool eoffill, int style ```
void q_scilexerpython_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPython_SetEolFill((QsciLexerPython*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool eoffill, int style ```
void q_scilexerpython_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPython_QBaseSetEolFill((QsciLexerPython*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, bool, int) ```
void q_scilexerpython_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerPython_OnSetEolFill((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_set_font(void* self, void* f, int style) {
    QsciLexerPython_SetFont((QsciLexerPython*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QFont* f, int style ```
void q_scilexerpython_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPython_QBaseSetFont((QsciLexerPython*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QFont*, int) ```
void q_scilexerpython_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPython_OnSetFont((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_set_paper(void* self, void* c, int style) {
    QsciLexerPython_SetPaper((QsciLexerPython*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QColor* c, int style ```
void q_scilexerpython_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPython_QBaseSetPaper((QsciLexerPython*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QColor*, int) ```
void q_scilexerpython_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerPython_OnSetPaper((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
bool q_scilexerpython_event(void* self, void* event) {
    return QsciLexerPython_Event((QsciLexerPython*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
bool q_scilexerpython_qbase_event(void* self, void* event) {
    return QsciLexerPython_QBaseEvent((QsciLexerPython*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QEvent*) ```
void q_scilexerpython_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPython_OnEvent((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* watched, QEvent* event ```
bool q_scilexerpython_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPython_EventFilter((QsciLexerPython*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* watched, QEvent* event ```
bool q_scilexerpython_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPython_QBaseEventFilter((QsciLexerPython*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QObject*, QEvent*) ```
void q_scilexerpython_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerPython_OnEventFilter((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QTimerEvent* event ```
void q_scilexerpython_timer_event(void* self, void* event) {
    QsciLexerPython_TimerEvent((QsciLexerPython*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QTimerEvent* event ```
void q_scilexerpython_qbase_timer_event(void* self, void* event) {
    QsciLexerPython_QBaseTimerEvent((QsciLexerPython*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QTimerEvent*) ```
void q_scilexerpython_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnTimerEvent((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QChildEvent* event ```
void q_scilexerpython_child_event(void* self, void* event) {
    QsciLexerPython_ChildEvent((QsciLexerPython*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QChildEvent* event ```
void q_scilexerpython_qbase_child_event(void* self, void* event) {
    QsciLexerPython_QBaseChildEvent((QsciLexerPython*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QChildEvent*) ```
void q_scilexerpython_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnChildEvent((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
void q_scilexerpython_custom_event(void* self, void* event) {
    QsciLexerPython_CustomEvent((QsciLexerPython*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QEvent* event ```
void q_scilexerpython_qbase_custom_event(void* self, void* event) {
    QsciLexerPython_QBaseCustomEvent((QsciLexerPython*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QEvent*) ```
void q_scilexerpython_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnCustomEvent((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_connect_notify(void* self, void* signal) {
    QsciLexerPython_ConnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPython_QBaseConnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnConnectNotify((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_disconnect_notify(void* self, void* signal) {
    QsciLexerPython_DisconnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
void q_scilexerpython_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPython_QBaseDisconnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, void (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerPython_OnDisconnectNotify((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_sender(void* self) {
    return QsciLexerPython_Sender((QsciLexerPython*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
QObject* q_scilexerpython_qbase_sender(void* self) {
    return QsciLexerPython_QBaseSender((QsciLexerPython*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, QObject* (*slot)() ```
void q_scilexerpython_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerPython_OnSender((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_sender_signal_index(void* self) {
    return QsciLexerPython_SenderSignalIndex((QsciLexerPython*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self ```
int32_t q_scilexerpython_qbase_sender_signal_index(void* self) {
    return QsciLexerPython_QBaseSenderSignalIndex((QsciLexerPython*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)() ```
void q_scilexerpython_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerPython_OnSenderSignalIndex((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, const char* signal ```
int32_t q_scilexerpython_receivers(void* self, const char* signal) {
    return QsciLexerPython_Receivers((QsciLexerPython*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, const char* signal ```
int32_t q_scilexerpython_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPython_QBaseReceivers((QsciLexerPython*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, int32_t (*slot)(QsciLexerPython*, const char*) ```
void q_scilexerpython_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerPython_OnReceivers((QsciLexerPython*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
bool q_scilexerpython_is_signal_connected(void* self, void* signal) {
    return QsciLexerPython_IsSignalConnected((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerPython* self, QMetaMethod* signal ```
bool q_scilexerpython_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPython_QBaseIsSignalConnected((QsciLexerPython*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerPython* self, bool (*slot)(QsciLexerPython*, QMetaMethod*) ```
void q_scilexerpython_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerPython_OnIsSignalConnected((QsciLexerPython*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerPython* self ```
void q_scilexerpython_delete(void* self) {
    QsciLexerPython_Delete((QsciLexerPython*)(self));
}