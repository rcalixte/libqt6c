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
#include "libqscilexercpp.hpp"
#include "libqscilexercpp.h"

/// https://doc.qt.io/qt-6/qscilexercpp.html

/// q_scilexercpp_new constructs a new QsciLexerCPP object.
///
///
QsciLexerCPP* q_scilexercpp_new() {
    return QsciLexerCPP_new();
}

/// q_scilexercpp_new2 constructs a new QsciLexerCPP object.
///
/// ``` QObject* parent ```
QsciLexerCPP* q_scilexercpp_new2(void* parent) {
    return QsciLexerCPP_new2((QObject*)parent);
}

/// q_scilexercpp_new3 constructs a new QsciLexerCPP object.
///
/// ``` QObject* parent, bool caseInsensitiveKeywords ```
QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords) {
    return QsciLexerCPP_new3((QObject*)parent, caseInsensitiveKeywords);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QsciLexerCPP* self ```
QMetaObject* q_scilexercpp_meta_object(void* self) {
    return QsciLexerCPP_MetaObject((QsciLexerCPP*)self);
}

/// ``` QsciLexerCPP* self, const char* param1 ```
void* q_scilexercpp_metacast(void* self, const char* param1) {
    return QsciLexerCPP_Metacast((QsciLexerCPP*)self, param1);
}

/// ``` QsciLexerCPP* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercpp_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCPP_Metacall((QsciLexerCPP*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)(QsciLexerCPP*, enum QMetaObject__Call, int, void*) ```
void q_scilexercpp_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCPP_OnMetacall((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scilexercpp_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCPP_QBaseMetacall((QsciLexerCPP*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scilexercpp_tr(const char* s) {
    libqt_string _str = QsciLexerCPP_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#language)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_language(void* self) {
    return QsciLexerCPP_Language((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#lexer)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_lexer(void* self) {
    return QsciLexerCPP_Lexer((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#autoCompletionWordSeparators)
///
/// ``` QsciLexerCPP* self ```
const char** q_scilexercpp_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCPP_AutoCompletionWordSeparators((QsciLexerCPP*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_end(void* self) {
    return QsciLexerCPP_BlockEnd((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_start(void* self) {
    return QsciLexerCPP_BlockStart((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_block_start_keyword(void* self) {
    return QsciLexerCPP_BlockStartKeyword((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#braceStyle)
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_brace_style(void* self) {
    return QsciLexerCPP_BraceStyle((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#wordCharacters)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_word_characters(void* self) {
    return QsciLexerCPP_WordCharacters((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultColor)
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_color(void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultEolFill)
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_default_eol_fill(void* self, int style) {
    return QsciLexerCPP_DefaultEolFill((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultFont)
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#defaultPaper)
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#keywords)
///
/// ``` QsciLexerCPP* self, int set ```
const char* q_scilexercpp_keywords(void* self, int set) {
    return QsciLexerCPP_Keywords((QsciLexerCPP*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#description)
///
/// ``` QsciLexerCPP* self, int style ```
const char* q_scilexercpp_description(void* self, int style) {
    libqt_string _str = QsciLexerCPP_Description((QsciLexerCPP*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#refreshProperties)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_refresh_properties(void* self) {
    QsciLexerCPP_RefreshProperties((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldAtElse)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldComments)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldCompact)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#foldPreprocessor)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#stylePreprocessor)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setDollarsAllowed)
///
/// ``` QsciLexerCPP* self, bool allowed ```
void q_scilexercpp_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#dollarsAllowed)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightTripleQuotedStrings)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightTripleQuotedStrings)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightHashQuotedStrings)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightHashQuotedStrings)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightBackQuotedStrings)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightBackQuotedStrings)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setHighlightEscapeSequences)
///
/// ``` QsciLexerCPP* self, bool enabled ```
void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#highlightEscapeSequences)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setVerbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerCPP* self, bool allowed ```
void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#verbatimStringEscapeSequencesAllowed)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldAtElse)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_SetFoldAtElse((QsciLexerCPP*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerCPP_OnSetFoldAtElse((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldAtElse((QsciLexerCPP*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldComments)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_SetFoldComments((QsciLexerCPP*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerCPP_OnSetFoldComments((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldComments((QsciLexerCPP*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldCompact)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_SetFoldCompact((QsciLexerCPP*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerCPP_OnSetFoldCompact((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldCompact((QsciLexerCPP*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setFoldPreprocessor)
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_SetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerCPP_OnSetFoldPreprocessor((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool fold ```
void q_scilexercpp_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#setStylePreprocessor)
///
/// ``` QsciLexerCPP* self, bool style ```
void q_scilexercpp_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_SetStylePreprocessor((QsciLexerCPP*)self, style);
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool) ```
void q_scilexercpp_on_set_style_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerCPP_OnSetStylePreprocessor((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, bool style ```
void q_scilexercpp_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_QBaseSetStylePreprocessor((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#readProperties)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_ReadProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QSettings*, const char*) ```
void q_scilexercpp_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCPP_OnReadProperties((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_QBaseReadProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#writeProperties)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_WriteProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

/// Allows for overriding the related default method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QSettings*, const char*) ```
void q_scilexercpp_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCPP_OnWriteProperties((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_QBaseWriteProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scilexercpp_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCPP_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scilexercpp_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCPP_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockEnd)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStart)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscilexercpp.html#blockStartKeyword)
///
/// ``` QsciLexerCPP* self, int* style ```
const char* q_scilexercpp_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#apis)
///
/// ``` QsciLexerCPP* self ```
QsciAbstractAPIs* q_scilexercpp_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoIndentStyle)
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#editor)
///
/// ``` QsciLexerCPP* self ```
QsciScintilla* q_scilexercpp_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAPIs)
///
/// ``` QsciLexerCPP* self, QsciAbstractAPIs* apis ```
void q_scilexercpp_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultColor)
///
/// ``` QsciLexerCPP* self, QColor* c ```
void q_scilexercpp_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultFont)
///
/// ``` QsciLexerCPP* self, QFont* f ```
void q_scilexercpp_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setDefaultPaper)
///
/// ``` QsciLexerCPP* self, QColor* c ```
void q_scilexercpp_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCPP* self, QSettings* qs ```
bool q_scilexercpp_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCPP* self, QSettings* qs ```
bool q_scilexercpp_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#colorChanged)
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercpp_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFillChanged)
///
/// ``` QsciLexerCPP* self, bool eolfilled, int style ```
void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexer*, bool, int) ```
void q_scilexercpp_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#fontChanged)
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexer*, QFont*, int) ```
void q_scilexercpp_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paperChanged)
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexer*, QColor*, int) ```
void q_scilexercpp_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#propertyChanged)
///
/// ``` QsciLexerCPP* self, const char* prop, const char* val ```
void q_scilexercpp_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

/// Inherited from QsciLexer
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexer*, const char*, const char*) ```
void q_scilexercpp_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#readSettings)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#writeSettings)
///
/// ``` QsciLexerCPP* self, QSettings* qs, const char* prefix ```
bool q_scilexercpp_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QsciLexerCPP* self, const char* name ```
void q_scilexercpp_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QsciLexerCPP* self, bool b ```
bool q_scilexercpp_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QsciLexerCPP* self ```
QThread* q_scilexercpp_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QsciLexerCPP* self, QThread* thread ```
void q_scilexercpp_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCPP* self, int interval ```
int32_t q_scilexercpp_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QsciLexerCPP* self, int id ```
void q_scilexercpp_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QsciLexerCPP* self ```
libqt_list /* of QObject* */ q_scilexercpp_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QsciLexerCPP* self, QObject* parent ```
void q_scilexercpp_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QsciLexerCPP* self, QObject* filterObj ```
void q_scilexercpp_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QsciLexerCPP* self, QObject* obj ```
void q_scilexercpp_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scilexercpp_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCPP* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scilexercpp_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scilexercpp_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scilexercpp_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QsciLexerCPP* self, const char* name, QVariant* value ```
bool q_scilexercpp_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QsciLexerCPP* self, const char* name ```
QVariant* q_scilexercpp_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QsciLexerCPP* self ```
const char** q_scilexercpp_dynamic_property_names(void* self) {
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
/// ``` QsciLexerCPP* self ```
QBindingStorage* q_scilexercpp_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QsciLexerCPP* self ```
QBindingStorage* q_scilexercpp_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QsciLexerCPP* self, void (*slot)(QObject*) ```
void q_scilexercpp_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QsciLexerCPP* self, const char* classname ```
bool q_scilexercpp_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QsciLexerCPP* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scilexercpp_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercpp_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QsciLexerCPP* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scilexercpp_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QsciLexerCPP* self, QObject* param1 ```
void q_scilexercpp_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QsciLexerCPP* self, void (*slot)(QObject*, QObject*) ```
void q_scilexercpp_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#lexerId)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_lexer_id(void* self) {
    return QsciLexerCPP_LexerId((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_lexer_id(void* self) {
    return QsciLexerCPP_QBaseLexerId((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnLexerId((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#autoCompletionFillups)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_auto_completion_fillups(void* self) {
    return QsciLexerCPP_AutoCompletionFillups((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
const char* q_scilexercpp_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCPP_QBaseAutoCompletionFillups((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* (*slot)() ```
void q_scilexercpp_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCPP_OnAutoCompletionFillups((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#blockLookback)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_block_lookback(void* self) {
    return QsciLexerCPP_BlockLookback((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_block_lookback(void* self) {
    return QsciLexerCPP_QBaseBlockLookback((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnBlockLookback((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#caseSensitive)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_case_sensitive(void* self) {
    return QsciLexerCPP_CaseSensitive((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
bool q_scilexercpp_qbase_case_sensitive(void* self) {
    return QsciLexerCPP_QBaseCaseSensitive((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)() ```
void q_scilexercpp_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCPP_OnCaseSensitive((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#color)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_color(void* self, int style) {
    return QsciLexerCPP_Color((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_color(void* self, int style) {
    return QsciLexerCPP_QBaseColor((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCPP_OnColor((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#eolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_eol_fill(void* self, int style) {
    return QsciLexerCPP_EolFill((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
bool q_scilexercpp_qbase_eol_fill(void* self, int style) {
    return QsciLexerCPP_QBaseEolFill((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCPP_OnEolFill((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#font)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_font(void* self, int style) {
    return QsciLexerCPP_Font((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_qbase_font(void* self, int style) {
    return QsciLexerCPP_QBaseFont((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCPP_OnFont((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#indentationGuideView)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_indentation_guide_view(void* self) {
    return QsciLexerCPP_IndentationGuideView((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_indentation_guide_view(void* self) {
    return QsciLexerCPP_QBaseIndentationGuideView((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnIndentationGuideView((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_default_style(void* self) {
    return QsciLexerCPP_DefaultStyle((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_default_style(void* self) {
    return QsciLexerCPP_QBaseDefaultStyle((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnDefaultStyle((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#paper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_paper(void* self, int style) {
    return QsciLexerCPP_Paper((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_paper(void* self, int style) {
    return QsciLexerCPP_QBasePaper((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCPP_OnPaper((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_color_with_style(void* self, int style) {
    return QsciLexerCPP_DefaultColorWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultColorWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCPP_OnDefaultColorWithStyle((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_default_font_with_style(void* self, int style) {
    return QsciLexerCPP_DefaultFontWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QFont* q_scilexercpp_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultFontWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCPP_OnDefaultFontWithStyle((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#defaultPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_default_paper_with_style(void* self, int style) {
    return QsciLexerCPP_DefaultPaperWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int style ```
QColor* q_scilexercpp_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultPaperWithStyle((QsciLexerCPP*)self, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCPP_OnDefaultPaperWithStyle((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QsciScintilla* editor ```
void q_scilexercpp_set_editor(void* self, void* editor) {
    QsciLexerCPP_SetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QsciScintilla* editor ```
void q_scilexercpp_qbase_set_editor(void* self, void* editor) {
    QsciLexerCPP_QBaseSetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QsciScintilla*) ```
void q_scilexercpp_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnSetEditor((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#styleBitsNeeded)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_style_bits_needed(void* self) {
    return QsciLexerCPP_StyleBitsNeeded((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_style_bits_needed(void* self) {
    return QsciLexerCPP_QBaseStyleBitsNeeded((QsciLexerCPP*)self);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnStyleBitsNeeded((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setAutoIndentStyle)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, int autoindentstyle ```
void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_SetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int autoindentstyle ```
void q_scilexercpp_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_QBaseSetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, int) ```
void q_scilexercpp_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCPP_OnSetAutoIndentStyle((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setColor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_set_color(void* self, void* c, int style) {
    QsciLexerCPP_SetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCPP_QBaseSetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCPP_OnSetColor((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setEolFill)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, bool eoffill, int style ```
void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_SetEolFill((QsciLexerCPP*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool eoffill, int style ```
void q_scilexercpp_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_QBaseSetEolFill((QsciLexerCPP*)self, eoffill, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, bool, int) ```
void q_scilexercpp_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCPP_OnSetEolFill((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setFont)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_set_font(void* self, void* f, int style) {
    QsciLexerCPP_SetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QFont* f, int style ```
void q_scilexercpp_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCPP_QBaseSetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QFont*, int) ```
void q_scilexercpp_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCPP_OnSetFont((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QsciLexer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qscilexer.html#setPaper)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_set_paper(void* self, void* c, int style) {
    QsciLexerCPP_SetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QColor* c, int style ```
void q_scilexercpp_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCPP_QBaseSetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

/// Inherited from QsciLexer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QColor*, int) ```
void q_scilexercpp_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCPP_OnSetPaper((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
bool q_scilexercpp_event(void* self, void* event) {
    return QsciLexerCPP_Event((QsciLexerCPP*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
bool q_scilexercpp_qbase_event(void* self, void* event) {
    return QsciLexerCPP_QBaseEvent((QsciLexerCPP*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QEvent*) ```
void q_scilexercpp_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCPP_OnEvent((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* watched, QEvent* event ```
bool q_scilexercpp_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_EventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* watched, QEvent* event ```
bool q_scilexercpp_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_QBaseEventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QObject*, QEvent*) ```
void q_scilexercpp_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCPP_OnEventFilter((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QTimerEvent* event ```
void q_scilexercpp_timer_event(void* self, void* event) {
    QsciLexerCPP_TimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QTimerEvent* event ```
void q_scilexercpp_qbase_timer_event(void* self, void* event) {
    QsciLexerCPP_QBaseTimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QTimerEvent*) ```
void q_scilexercpp_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnTimerEvent((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QChildEvent* event ```
void q_scilexercpp_child_event(void* self, void* event) {
    QsciLexerCPP_ChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QChildEvent* event ```
void q_scilexercpp_qbase_child_event(void* self, void* event) {
    QsciLexerCPP_QBaseChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QChildEvent*) ```
void q_scilexercpp_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnChildEvent((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
void q_scilexercpp_custom_event(void* self, void* event) {
    QsciLexerCPP_CustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QEvent* event ```
void q_scilexercpp_qbase_custom_event(void* self, void* event) {
    QsciLexerCPP_QBaseCustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QEvent*) ```
void q_scilexercpp_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnCustomEvent((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_connect_notify(void* self, void* signal) {
    QsciLexerCPP_ConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCPP_QBaseConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnConnectNotify((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_disconnect_notify(void* self, void* signal) {
    QsciLexerCPP_DisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
void q_scilexercpp_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCPP_QBaseDisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, void (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCPP_OnDisconnectNotify((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_sender(void* self) {
    return QsciLexerCPP_Sender((QsciLexerCPP*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
QObject* q_scilexercpp_qbase_sender(void* self) {
    return QsciLexerCPP_QBaseSender((QsciLexerCPP*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QObject* (*slot)() ```
void q_scilexercpp_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCPP_OnSender((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_sender_signal_index(void* self) {
    return QsciLexerCPP_SenderSignalIndex((QsciLexerCPP*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self ```
int32_t q_scilexercpp_qbase_sender_signal_index(void* self) {
    return QsciLexerCPP_QBaseSenderSignalIndex((QsciLexerCPP*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)() ```
void q_scilexercpp_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCPP_OnSenderSignalIndex((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* signal ```
int32_t q_scilexercpp_receivers(void* self, const char* signal) {
    return QsciLexerCPP_Receivers((QsciLexerCPP*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, const char* signal ```
int32_t q_scilexercpp_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCPP_QBaseReceivers((QsciLexerCPP*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, int32_t (*slot)(QsciLexerCPP*, const char*) ```
void q_scilexercpp_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCPP_OnReceivers((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
bool q_scilexercpp_is_signal_connected(void* self, void* signal) {
    return QsciLexerCPP_IsSignalConnected((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciLexerCPP* self, QMetaMethod* signal ```
bool q_scilexercpp_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCPP_QBaseIsSignalConnected((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciLexerCPP* self, bool (*slot)(QsciLexerCPP*, QMetaMethod*) ```
void q_scilexercpp_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCPP_OnIsSignalConnected((QsciLexerCPP*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciLexerCPP* self ```
void q_scilexercpp_delete(void* self) {
    QsciLexerCPP_Delete((QsciLexerCPP*)(self));
}