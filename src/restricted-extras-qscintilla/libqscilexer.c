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
#include "../libqcoreevent.hpp"
#include "libqscilexer.hpp"
#include "libqscilexer.h"

/// https://doc.qt.io/qt-6/qscilexer.html

/// q_scilexer_new constructs a new QsciLexer object.
///
///
QsciLexer* q_scilexer_new() {
    return QsciLexer_new();
}

/// q_scilexer_new2 constructs a new QsciLexer object.
///
/// ``` QObject* parent ```
QsciLexer* q_scilexer_new2(void* parent) {
    return QsciLexer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexer* self ```
QMetaObject* q_scilexer_meta_object(void* self) {
    return QsciLexer_MetaObject((QsciLexer*)self);
}

/// ``` QsciLexer* self, const char* param1 ```
void* q_scilexer_metacast(void* self, const char* param1) {
    return QsciLexer_Metacast((QsciLexer*)self, param1);
}

/// ``` QsciLexer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexer_Metacall((QsciLexer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)(QsciLexer*, enum QMetaObject__Call, int, void*) ```
void q_scilexer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexer_OnMetacall((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexer_QBaseMetacall((QsciLexer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexer_tr(const char* s) {
    libqt_string _str = QsciLexer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#language)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_language(void* self) {
    return QsciLexer_Language((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_language(void* self, const char* (*slot)()) {
    QsciLexer_OnLanguage((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_language(void* self) {
    return QsciLexer_QBaseLanguage((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexer)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_lexer(void* self) {
    return QsciLexer_Lexer((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_lexer(void* self, const char* (*slot)()) {
    QsciLexer_OnLexer((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_lexer(void* self) {
    return QsciLexer_QBaseLexer((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_lexer_id(void* self) {
    return QsciLexer_LexerId((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexer_OnLexerId((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_lexer_id(void* self) {
    return QsciLexer_QBaseLexerId((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexer* self ```
QsciAbstractAPIs* q_scilexer_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_auto_completion_fillups(void* self) {
    return QsciLexer_AutoCompletionFillups((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexer_OnAutoCompletionFillups((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_auto_completion_fillups(void* self) {
    return QsciLexer_QBaseAutoCompletionFillups((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionWordSeparators)
///
/// ``` QsciLexer* self ```
const char** q_scilexer_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexer_AutoCompletionWordSeparators((QsciLexer*)self);
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

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char** (*slot)() ```
void q_scilexer_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexer_OnAutoCompletionWordSeparators((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char** q_scilexer_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexer_QBaseAutoCompletionWordSeparators((QsciLexer*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockEnd)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_end(void* self, int* style) {
    return QsciLexer_BlockEnd((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockEnd((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_end(void* self, int* style) {
    return QsciLexer_QBaseBlockEnd((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_block_lookback(void* self) {
    return QsciLexer_BlockLookback((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexer_OnBlockLookback((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_block_lookback(void* self) {
    return QsciLexer_QBaseBlockLookback((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStart)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_start(void* self, int* style) {
    return QsciLexer_BlockStart((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockStart((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_start(void* self, int* style) {
    return QsciLexer_QBaseBlockStart((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockStartKeyword)
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_block_start_keyword(void* self, int* style) {
    return QsciLexer_BlockStartKeyword((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int*) ```
void q_scilexer_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockStartKeyword((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int* style ```
const char* q_scilexer_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexer_QBaseBlockStartKeyword((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#braceStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_brace_style(void* self) {
    return QsciLexer_BraceStyle((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexer_OnBraceStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_brace_style(void* self) {
    return QsciLexer_QBaseBraceStyle((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// ``` QsciLexer* self ```
bool q_scilexer_case_sensitive(void* self) {
    return QsciLexer_CaseSensitive((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)() ```
void q_scilexer_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexer_OnCaseSensitive((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
bool q_scilexer_qbase_case_sensitive(void* self) {
    return QsciLexer_QBaseCaseSensitive((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_color(void* self, int style) {
    return QsciLexer_Color((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnColor((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_color(void* self, int style) {
    return QsciLexer_QBaseColor((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_eol_fill(void* self, int style) {
    return QsciLexer_EolFill((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, int) ```
void q_scilexer_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexer_OnEolFill((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_qbase_eol_fill(void* self, int style) {
    return QsciLexer_QBaseEolFill((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_font(void* self, int style) {
    return QsciLexer_Font((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QFont* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexer_OnFont((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_qbase_font(void* self, int style) {
    return QsciLexer_QBaseFont((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_indentation_guide_view(void* self) {
    return QsciLexer_IndentationGuideView((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexer_OnIndentationGuideView((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_indentation_guide_view(void* self) {
    return QsciLexer_QBaseIndentationGuideView((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#keywords)
///
/// ``` QsciLexer* self, int set ```
const char* q_scilexer_keywords(void* self, int set) {
    return QsciLexer_Keywords((QsciLexer*)self, set);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexer_OnKeywords((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int set ```
const char* q_scilexer_qbase_keywords(void* self, int set) {
    return QsciLexer_QBaseKeywords((QsciLexer*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_default_style(void* self) {
    return QsciLexer_DefaultStyle((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexer_OnDefaultStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_default_style(void* self) {
    return QsciLexer_QBaseDefaultStyle((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#description)
///
/// ``` QsciLexer* self, int style ```
const char* q_scilexer_description(void* self, int style) {
    libqt_string _str = QsciLexer_Description((QsciLexer*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexer_OnDescription((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
const char* q_scilexer_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexer_QBaseDescription((QsciLexer*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_paper(void* self, int style) {
    return QsciLexer_Paper((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnPaper((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_paper(void* self, int style) {
    return QsciLexer_QBasePaper((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// ``` QsciLexer* self ```
QColor* q_scilexer_default_color(void* self) {
    return QsciLexer_DefaultColor((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_default_color_with_style(void* self, int style) {
    return QsciLexer_DefaultColorWithStyle((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnDefaultColorWithStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_default_color_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultColorWithStyle((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultEolFill)
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_default_eol_fill(void* self, int style) {
    return QsciLexer_DefaultEolFill((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexer_OnDefaultEolFill((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
bool q_scilexer_qbase_default_eol_fill(void* self, int style) {
    return QsciLexer_QBaseDefaultEolFill((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexer* self ```
QFont* q_scilexer_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_default_font_with_style(void* self, int style) {
    return QsciLexer_DefaultFontWithStyle((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QFont* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexer_OnDefaultFontWithStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QFont* q_scilexer_qbase_default_font_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultFontWithStyle((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexer* self ```
QColor* q_scilexer_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_default_paper_with_style(void* self, int style) {
    return QsciLexer_DefaultPaperWithStyle((QsciLexer*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, QColor* (*slot)(QsciLexer*, int) ```
void q_scilexer_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnDefaultPaperWithStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int style ```
QColor* q_scilexer_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultPaperWithStyle((QsciLexer*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexer* self ```
QsciScintilla* q_scilexer_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexer* self, QsciAbstractAPIs* apis ```
void q_scilexer_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexer* self, QColor* c ```
void q_scilexer_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexer* self, QFont* f ```
void q_scilexer_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexer* self, QColor* c ```
void q_scilexer_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// ``` QsciLexer* self, QsciScintilla* editor ```
void q_scilexer_set_editor(void* self, void* editor) {
    QsciLexer_SetEditor((QsciLexer*)self, (QsciScintilla*)editor);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QsciScintilla*) ```
void q_scilexer_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnSetEditor((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QsciScintilla* editor ```
void q_scilexer_qbase_set_editor(void* self, void* editor) {
    QsciLexer_QBaseSetEditor((QsciLexer*)self, (QsciScintilla*)editor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexer* self, QSettings* qs ```
bool q_scilexer_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#refreshProperties)
///
/// ``` QsciLexer* self ```
void q_scilexer_refresh_properties(void* self) {
    QsciLexer_RefreshProperties((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)() ```
void q_scilexer_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexer_OnRefreshProperties((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
void q_scilexer_qbase_refresh_properties(void* self) {
    QsciLexer_QBaseRefreshProperties((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_style_bits_needed(void* self) {
    return QsciLexer_StyleBitsNeeded((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexer_OnStyleBitsNeeded((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_style_bits_needed(void* self) {
    return QsciLexer_QBaseStyleBitsNeeded((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#wordCharacters)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_word_characters(void* self) {
    return QsciLexer_WordCharacters((QsciLexer*)self);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, const char* (*slot)() ```
void q_scilexer_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexer_OnWordCharacters((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self ```
const char* q_scilexer_qbase_word_characters(void* self) {
    return QsciLexer_QBaseWordCharacters((QsciLexer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexer* self, QSettings* qs ```
bool q_scilexer_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// ``` QsciLexer* self, int autoindentstyle ```
void q_scilexer_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexer_SetAutoIndentStyle((QsciLexer*)self, autoindentstyle);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, int) ```
void q_scilexer_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexer_OnSetAutoIndentStyle((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, int autoindentstyle ```
void q_scilexer_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexer_QBaseSetAutoIndentStyle((QsciLexer*)self, autoindentstyle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_set_color(void* self, void* c, int style) {
    QsciLexer_SetColor((QsciLexer*)self, (QColor*)c, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetColor((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_qbase_set_color(void* self, void* c, int style) {
    QsciLexer_QBaseSetColor((QsciLexer*)self, (QColor*)c, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// ``` QsciLexer* self, bool eoffill, int style ```
void q_scilexer_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexer_SetEolFill((QsciLexer*)self, eoffill, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexer_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_OnSetEolFill((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, bool eoffill, int style ```
void q_scilexer_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexer_QBaseSetEolFill((QsciLexer*)self, eoffill, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_set_font(void* self, void* f, int style) {
    QsciLexer_SetFont((QsciLexer*)self, (QFont*)f, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexer_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetFont((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_qbase_set_font(void* self, void* f, int style) {
    QsciLexer_QBaseSetFont((QsciLexer*)self, (QFont*)f, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_set_paper(void* self, void* c, int style) {
    QsciLexer_SetPaper((QsciLexer*)self, (QColor*)c, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetPaper((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_qbase_set_paper(void* self, void* c, int style) {
    QsciLexer_QBaseSetPaper((QsciLexer*)self, (QColor*)c, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexer* self, bool eolfilled, int style ```
void q_scilexer_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexer_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexer* self, QFont* f, int style ```
void q_scilexer_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexer_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexer* self, QColor* c, int style ```
void q_scilexer_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexer_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexer* self, const char* prop, const char* val ```
void q_scilexer_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// ``` QsciLexer* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexer_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readProperties)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QSettings*, const char*) ```
void q_scilexer_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexer_OnReadProperties((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_QBaseReadProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeProperties)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QSettings*, const char*) ```
void q_scilexer_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexer_OnWriteProperties((QsciLexer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_QBaseWriteProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexer_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexer* self, QSettings* qs, const char* prefix ```
bool q_scilexer_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexer* self ```
const char* q_scilexer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexer* self, const char* name ```
void q_scilexer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexer* self ```
bool q_scilexer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexer* self ```
bool q_scilexer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexer* self, bool b ```
bool q_scilexer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexer* self ```
QThread* q_scilexer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexer* self, QThread* thread ```
void q_scilexer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexer* self, int interval ```
int32_t q_scilexer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexer* self, int id ```
void q_scilexer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexer* self ```
libqt_list /* of QObject* */ q_scilexer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexer* self, QObject* parent ```
void q_scilexer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexer* self, QObject* filterObj ```
void q_scilexer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexer* self, QObject* obj ```
void q_scilexer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexer* self ```
void q_scilexer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexer* self ```
void q_scilexer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexer* self, const char* name, QVariant* value ```
bool q_scilexer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexer* self, const char* name ```
QVariant* q_scilexer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexer* self ```
const char** q_scilexer_dynamic_property_names(void* self) {
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
/// ``` QsciLexer* self ```
QBindingStorage* q_scilexer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexer* self ```
QBindingStorage* q_scilexer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexer* self ```
void q_scilexer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexer* self, void (*slot)(QObject*) ```
void q_scilexer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexer* self, const char* classname ```
bool q_scilexer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexer* self ```
void q_scilexer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexer* self, QObject* param1 ```
void q_scilexer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexer* self, void (*slot)(QObject*, QObject*) ```
void q_scilexer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
bool q_scilexer_event(void* self, void* event) {
    return QsciLexer_Event((QsciLexer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
bool q_scilexer_qbase_event(void* self, void* event) {
    return QsciLexer_QBaseEvent((QsciLexer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QEvent*) ```
void q_scilexer_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexer_OnEvent((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QObject* watched, QEvent* event ```
bool q_scilexer_event_filter(void* self, void* watched, void* event) {
    return QsciLexer_EventFilter((QsciLexer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QObject* watched, QEvent* event ```
bool q_scilexer_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexer_QBaseEventFilter((QsciLexer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QObject*, QEvent*) ```
void q_scilexer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexer_OnEventFilter((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QTimerEvent* event ```
void q_scilexer_timer_event(void* self, void* event) {
    QsciLexer_TimerEvent((QsciLexer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QTimerEvent* event ```
void q_scilexer_qbase_timer_event(void* self, void* event) {
    QsciLexer_QBaseTimerEvent((QsciLexer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QTimerEvent*) ```
void q_scilexer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnTimerEvent((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QChildEvent* event ```
void q_scilexer_child_event(void* self, void* event) {
    QsciLexer_ChildEvent((QsciLexer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QChildEvent* event ```
void q_scilexer_qbase_child_event(void* self, void* event) {
    QsciLexer_QBaseChildEvent((QsciLexer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QChildEvent*) ```
void q_scilexer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnChildEvent((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
void q_scilexer_custom_event(void* self, void* event) {
    QsciLexer_CustomEvent((QsciLexer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QEvent* event ```
void q_scilexer_qbase_custom_event(void* self, void* event) {
    QsciLexer_QBaseCustomEvent((QsciLexer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QEvent*) ```
void q_scilexer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnCustomEvent((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_connect_notify(void* self, void* signal) {
    QsciLexer_ConnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_qbase_connect_notify(void* self, void* signal) {
    QsciLexer_QBaseConnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnConnectNotify((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_disconnect_notify(void* self, void* signal) {
    QsciLexer_DisconnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
void q_scilexer_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexer_QBaseDisconnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, void (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnDisconnectNotify((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_sender(void* self) {
    return QsciLexer_Sender((QsciLexer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self ```
QObject* q_scilexer_qbase_sender(void* self) {
    return QsciLexer_QBaseSender((QsciLexer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, QObject* (*slot)() ```
void q_scilexer_on_sender(void* self, QObject* (*slot)()) {
    QsciLexer_OnSender((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_sender_signal_index(void* self) {
    return QsciLexer_SenderSignalIndex((QsciLexer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self ```
int32_t q_scilexer_qbase_sender_signal_index(void* self) {
    return QsciLexer_QBaseSenderSignalIndex((QsciLexer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, int32_t (*slot)() ```
void q_scilexer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexer_OnSenderSignalIndex((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, const char* signal ```
int32_t q_scilexer_receivers(void* self, const char* signal) {
    return QsciLexer_Receivers((QsciLexer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, const char* signal ```
int32_t q_scilexer_qbase_receivers(void* self, const char* signal) {
    return QsciLexer_QBaseReceivers((QsciLexer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, int32_t (*slot)(QsciLexer*, const char*) ```
void q_scilexer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexer_OnReceivers((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
bool q_scilexer_is_signal_connected(void* self, void* signal) {
    return QsciLexer_IsSignalConnected((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexer* self, QMetaMethod* signal ```
bool q_scilexer_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexer_QBaseIsSignalConnected((QsciLexer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexer* self, bool (*slot)(QsciLexer*, QMetaMethod*) ```
void q_scilexer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexer_OnIsSignalConnected((QsciLexer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexer* self ```
void q_scilexer_delete(void* self) {
    QsciLexer_Delete((QsciLexer*)(self));
}