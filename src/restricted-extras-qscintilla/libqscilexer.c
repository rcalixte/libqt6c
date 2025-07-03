#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqscilexer.hpp"
#include "libqscilexer.h"

QsciLexer* q_scilexer_new() {
    return QsciLexer_new();
}

QsciLexer* q_scilexer_new2(void* parent) {
    return QsciLexer_new2((QObject*)parent);
}

const QMetaObject* q_scilexer_meta_object(void* self) {
    return QsciLexer_MetaObject((QsciLexer*)self);
}

void* q_scilexer_metacast(void* self, const char* param1) {
    return QsciLexer_Metacast((QsciLexer*)self, param1);
}

int32_t q_scilexer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexer_Metacall((QsciLexer*)self, param1, param2, param3);
}

void q_scilexer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexer_OnMetacall((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexer_QBaseMetacall((QsciLexer*)self, param1, param2, param3);
}

const char* q_scilexer_tr(const char* s) {
    libqt_string _str = QsciLexer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexer_language(void* self) {
    return QsciLexer_Language((QsciLexer*)self);
}

void q_scilexer_on_language(void* self, const char* (*slot)()) {
    QsciLexer_OnLanguage((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_language(void* self) {
    return QsciLexer_QBaseLanguage((QsciLexer*)self);
}

const char* q_scilexer_lexer(void* self) {
    return QsciLexer_Lexer((QsciLexer*)self);
}

void q_scilexer_on_lexer(void* self, const char* (*slot)()) {
    QsciLexer_OnLexer((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_lexer(void* self) {
    return QsciLexer_QBaseLexer((QsciLexer*)self);
}

int32_t q_scilexer_lexer_id(void* self) {
    return QsciLexer_LexerId((QsciLexer*)self);
}

void q_scilexer_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexer_OnLexerId((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_lexer_id(void* self) {
    return QsciLexer_QBaseLexerId((QsciLexer*)self);
}

QsciAbstractAPIs* q_scilexer_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

const char* q_scilexer_auto_completion_fillups(void* self) {
    return QsciLexer_AutoCompletionFillups((QsciLexer*)self);
}

void q_scilexer_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexer_OnAutoCompletionFillups((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_auto_completion_fillups(void* self) {
    return QsciLexer_QBaseAutoCompletionFillups((QsciLexer*)self);
}

const char** q_scilexer_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexer_AutoCompletionWordSeparators((QsciLexer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexer_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexer_OnAutoCompletionWordSeparators((QsciLexer*)self, (intptr_t)slot);
}

const char** q_scilexer_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexer_QBaseAutoCompletionWordSeparators((QsciLexer*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

int32_t q_scilexer_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

const char* q_scilexer_block_end(void* self, int* style) {
    return QsciLexer_BlockEnd((QsciLexer*)self, style);
}

void q_scilexer_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockEnd((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_block_end(void* self, int* style) {
    return QsciLexer_QBaseBlockEnd((QsciLexer*)self, style);
}

int32_t q_scilexer_block_lookback(void* self) {
    return QsciLexer_BlockLookback((QsciLexer*)self);
}

void q_scilexer_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexer_OnBlockLookback((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_block_lookback(void* self) {
    return QsciLexer_QBaseBlockLookback((QsciLexer*)self);
}

const char* q_scilexer_block_start(void* self, int* style) {
    return QsciLexer_BlockStart((QsciLexer*)self, style);
}

void q_scilexer_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockStart((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_block_start(void* self, int* style) {
    return QsciLexer_QBaseBlockStart((QsciLexer*)self, style);
}

const char* q_scilexer_block_start_keyword(void* self, int* style) {
    return QsciLexer_BlockStartKeyword((QsciLexer*)self, style);
}

void q_scilexer_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexer_OnBlockStartKeyword((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexer_QBaseBlockStartKeyword((QsciLexer*)self, style);
}

int32_t q_scilexer_brace_style(void* self) {
    return QsciLexer_BraceStyle((QsciLexer*)self);
}

void q_scilexer_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexer_OnBraceStyle((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_brace_style(void* self) {
    return QsciLexer_QBaseBraceStyle((QsciLexer*)self);
}

bool q_scilexer_case_sensitive(void* self) {
    return QsciLexer_CaseSensitive((QsciLexer*)self);
}

void q_scilexer_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexer_OnCaseSensitive((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_qbase_case_sensitive(void* self) {
    return QsciLexer_QBaseCaseSensitive((QsciLexer*)self);
}

QColor* q_scilexer_color(void* self, int style) {
    return QsciLexer_Color((QsciLexer*)self, style);
}

void q_scilexer_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnColor((QsciLexer*)self, (intptr_t)slot);
}

QColor* q_scilexer_qbase_color(void* self, int style) {
    return QsciLexer_QBaseColor((QsciLexer*)self, style);
}

bool q_scilexer_eol_fill(void* self, int style) {
    return QsciLexer_EolFill((QsciLexer*)self, style);
}

void q_scilexer_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexer_OnEolFill((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_qbase_eol_fill(void* self, int style) {
    return QsciLexer_QBaseEolFill((QsciLexer*)self, style);
}

QFont* q_scilexer_font(void* self, int style) {
    return QsciLexer_Font((QsciLexer*)self, style);
}

void q_scilexer_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexer_OnFont((QsciLexer*)self, (intptr_t)slot);
}

QFont* q_scilexer_qbase_font(void* self, int style) {
    return QsciLexer_QBaseFont((QsciLexer*)self, style);
}

int32_t q_scilexer_indentation_guide_view(void* self) {
    return QsciLexer_IndentationGuideView((QsciLexer*)self);
}

void q_scilexer_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexer_OnIndentationGuideView((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_indentation_guide_view(void* self) {
    return QsciLexer_QBaseIndentationGuideView((QsciLexer*)self);
}

const char* q_scilexer_keywords(void* self, int set) {
    return QsciLexer_Keywords((QsciLexer*)self, set);
}

void q_scilexer_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexer_OnKeywords((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_keywords(void* self, int set) {
    return QsciLexer_QBaseKeywords((QsciLexer*)self, set);
}

int32_t q_scilexer_default_style(void* self) {
    return QsciLexer_DefaultStyle((QsciLexer*)self);
}

void q_scilexer_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexer_OnDefaultStyle((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_default_style(void* self) {
    return QsciLexer_QBaseDefaultStyle((QsciLexer*)self);
}

const char* q_scilexer_description(void* self, int style) {
    libqt_string _str = QsciLexer_Description((QsciLexer*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexer_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexer_OnDescription((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexer_QBaseDescription((QsciLexer*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexer_paper(void* self, int style) {
    return QsciLexer_Paper((QsciLexer*)self, style);
}

void q_scilexer_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnPaper((QsciLexer*)self, (intptr_t)slot);
}

QColor* q_scilexer_qbase_paper(void* self, int style) {
    return QsciLexer_QBasePaper((QsciLexer*)self, style);
}

QColor* q_scilexer_default_color(void* self) {
    return QsciLexer_DefaultColor((QsciLexer*)self);
}

QColor* q_scilexer_default_color_with_style(void* self, int style) {
    return QsciLexer_DefaultColorWithStyle((QsciLexer*)self, style);
}

void q_scilexer_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnDefaultColorWithStyle((QsciLexer*)self, (intptr_t)slot);
}

QColor* q_scilexer_qbase_default_color_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultColorWithStyle((QsciLexer*)self, style);
}

bool q_scilexer_default_eol_fill(void* self, int style) {
    return QsciLexer_DefaultEolFill((QsciLexer*)self, style);
}

void q_scilexer_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexer_OnDefaultEolFill((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_qbase_default_eol_fill(void* self, int style) {
    return QsciLexer_QBaseDefaultEolFill((QsciLexer*)self, style);
}

QFont* q_scilexer_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

QFont* q_scilexer_default_font_with_style(void* self, int style) {
    return QsciLexer_DefaultFontWithStyle((QsciLexer*)self, style);
}

void q_scilexer_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexer_OnDefaultFontWithStyle((QsciLexer*)self, (intptr_t)slot);
}

QFont* q_scilexer_qbase_default_font_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultFontWithStyle((QsciLexer*)self, style);
}

QColor* q_scilexer_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QColor* q_scilexer_default_paper_with_style(void* self, int style) {
    return QsciLexer_DefaultPaperWithStyle((QsciLexer*)self, style);
}

void q_scilexer_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexer_OnDefaultPaperWithStyle((QsciLexer*)self, (intptr_t)slot);
}

QColor* q_scilexer_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexer_QBaseDefaultPaperWithStyle((QsciLexer*)self, style);
}

QsciScintilla* q_scilexer_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexer_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexer_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexer_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexer_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

void q_scilexer_set_editor(void* self, void* editor) {
    QsciLexer_SetEditor((QsciLexer*)self, (QsciScintilla*)editor);
}

void q_scilexer_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnSetEditor((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_editor(void* self, void* editor) {
    QsciLexer_QBaseSetEditor((QsciLexer*)self, (QsciScintilla*)editor);
}

bool q_scilexer_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexer_refresh_properties(void* self) {
    QsciLexer_RefreshProperties((QsciLexer*)self);
}

void q_scilexer_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexer_OnRefreshProperties((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_refresh_properties(void* self) {
    QsciLexer_QBaseRefreshProperties((QsciLexer*)self);
}

int32_t q_scilexer_style_bits_needed(void* self) {
    return QsciLexer_StyleBitsNeeded((QsciLexer*)self);
}

void q_scilexer_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexer_OnStyleBitsNeeded((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_qbase_style_bits_needed(void* self) {
    return QsciLexer_QBaseStyleBitsNeeded((QsciLexer*)self);
}

const char* q_scilexer_word_characters(void* self) {
    return QsciLexer_WordCharacters((QsciLexer*)self);
}

void q_scilexer_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexer_OnWordCharacters((QsciLexer*)self, (intptr_t)slot);
}

const char* q_scilexer_qbase_word_characters(void* self) {
    return QsciLexer_QBaseWordCharacters((QsciLexer*)self);
}

bool q_scilexer_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexer_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexer_SetAutoIndentStyle((QsciLexer*)self, autoindentstyle);
}

void q_scilexer_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexer_OnSetAutoIndentStyle((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexer_QBaseSetAutoIndentStyle((QsciLexer*)self, autoindentstyle);
}

void q_scilexer_set_color(void* self, void* c, int style) {
    QsciLexer_SetColor((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetColor((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_color(void* self, void* c, int style) {
    QsciLexer_QBaseSetColor((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexer_SetEolFill((QsciLexer*)self, eoffill, style);
}

void q_scilexer_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_OnSetEolFill((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexer_QBaseSetEolFill((QsciLexer*)self, eoffill, style);
}

void q_scilexer_set_font(void* self, void* f, int style) {
    QsciLexer_SetFont((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexer_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetFont((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_font(void* self, void* f, int style) {
    QsciLexer_QBaseSetFont((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexer_set_paper(void* self, void* c, int style) {
    QsciLexer_SetPaper((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_OnSetPaper((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_qbase_set_paper(void* self, void* c, int style) {
    QsciLexer_QBaseSetPaper((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexer_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexer_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexer_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexer_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexer_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexer_OnReadProperties((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_QBaseReadProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexer_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexer_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexer_OnWriteProperties((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexer_QBaseWriteProperties((QsciLexer*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexer_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scilexer_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexer_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexer_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexer_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_scilexer_event(void* self, void* event) {
    return QsciLexer_Event((QsciLexer*)self, (QEvent*)event);
}

bool q_scilexer_qbase_event(void* self, void* event) {
    return QsciLexer_QBaseEvent((QsciLexer*)self, (QEvent*)event);
}

void q_scilexer_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexer_OnEvent((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_event_filter(void* self, void* watched, void* event) {
    return QsciLexer_EventFilter((QsciLexer*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexer_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexer_QBaseEventFilter((QsciLexer*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexer_OnEventFilter((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_timer_event(void* self, void* event) {
    QsciLexer_TimerEvent((QsciLexer*)self, (QTimerEvent*)event);
}

void q_scilexer_qbase_timer_event(void* self, void* event) {
    QsciLexer_QBaseTimerEvent((QsciLexer*)self, (QTimerEvent*)event);
}

void q_scilexer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnTimerEvent((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_child_event(void* self, void* event) {
    QsciLexer_ChildEvent((QsciLexer*)self, (QChildEvent*)event);
}

void q_scilexer_qbase_child_event(void* self, void* event) {
    QsciLexer_QBaseChildEvent((QsciLexer*)self, (QChildEvent*)event);
}

void q_scilexer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnChildEvent((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_custom_event(void* self, void* event) {
    QsciLexer_CustomEvent((QsciLexer*)self, (QEvent*)event);
}

void q_scilexer_qbase_custom_event(void* self, void* event) {
    QsciLexer_QBaseCustomEvent((QsciLexer*)self, (QEvent*)event);
}

void q_scilexer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnCustomEvent((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_connect_notify(void* self, void* signal) {
    QsciLexer_ConnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

void q_scilexer_qbase_connect_notify(void* self, void* signal) {
    QsciLexer_QBaseConnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

void q_scilexer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnConnectNotify((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_disconnect_notify(void* self, void* signal) {
    QsciLexer_DisconnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

void q_scilexer_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexer_QBaseDisconnectNotify((QsciLexer*)self, (QMetaMethod*)signal);
}

void q_scilexer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexer_OnDisconnectNotify((QsciLexer*)self, (intptr_t)slot);
}

QObject* q_scilexer_sender(void* self) {
    return QsciLexer_Sender((QsciLexer*)self);
}

QObject* q_scilexer_qbase_sender(void* self) {
    return QsciLexer_QBaseSender((QsciLexer*)self);
}

void q_scilexer_on_sender(void* self, QObject* (*slot)()) {
    QsciLexer_OnSender((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_sender_signal_index(void* self) {
    return QsciLexer_SenderSignalIndex((QsciLexer*)self);
}

int32_t q_scilexer_qbase_sender_signal_index(void* self) {
    return QsciLexer_QBaseSenderSignalIndex((QsciLexer*)self);
}

void q_scilexer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexer_OnSenderSignalIndex((QsciLexer*)self, (intptr_t)slot);
}

int32_t q_scilexer_receivers(void* self, const char* signal) {
    return QsciLexer_Receivers((QsciLexer*)self, signal);
}

int32_t q_scilexer_qbase_receivers(void* self, const char* signal) {
    return QsciLexer_QBaseReceivers((QsciLexer*)self, signal);
}

void q_scilexer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexer_OnReceivers((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexer_is_signal_connected(void* self, void* signal) {
    return QsciLexer_IsSignalConnected((QsciLexer*)self, (QMetaMethod*)signal);
}

bool q_scilexer_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexer_QBaseIsSignalConnected((QsciLexer*)self, (QMetaMethod*)signal);
}

void q_scilexer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexer_OnIsSignalConnected((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexer_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexer_delete(void* self) {
    QsciLexer_Delete((QsciLexer*)(self));
}
