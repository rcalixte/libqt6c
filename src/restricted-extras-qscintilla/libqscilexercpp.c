#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexercpp.hpp"
#include "libqscilexercpp.h"

QsciLexerCPP* q_scilexercpp_new() {
    return QsciLexerCPP_new();
}

QsciLexerCPP* q_scilexercpp_new2(void* parent) {
    return QsciLexerCPP_new2((QObject*)parent);
}

QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords) {
    return QsciLexerCPP_new3((QObject*)parent, caseInsensitiveKeywords);
}

const QMetaObject* q_scilexercpp_meta_object(void* self) {
    return QsciLexerCPP_MetaObject((QsciLexerCPP*)self);
}

void* q_scilexercpp_metacast(void* self, const char* param1) {
    return QsciLexerCPP_Metacast((QsciLexerCPP*)self, param1);
}

int32_t q_scilexercpp_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCPP_Metacall((QsciLexerCPP*)self, param1, param2, param3);
}

void q_scilexercpp_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerCPP_OnMetacall((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCPP_QBaseMetacall((QsciLexerCPP*)self, param1, param2, param3);
}

const char* q_scilexercpp_tr(const char* s) {
    libqt_string _str = QsciLexerCPP_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_language(void* self) {
    return QsciLexerCPP_Language((QsciLexerCPP*)self);
}

const char* q_scilexercpp_lexer(void* self) {
    return QsciLexerCPP_Lexer((QsciLexerCPP*)self);
}

const char** q_scilexercpp_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCPP_AutoCompletionWordSeparators((QsciLexerCPP*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexercpp_auto_completion_word_separators");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_scilexercpp_block_end(void* self) {
    return QsciLexerCPP_BlockEnd((QsciLexerCPP*)self);
}

const char* q_scilexercpp_block_start(void* self) {
    return QsciLexerCPP_BlockStart((QsciLexerCPP*)self);
}

const char* q_scilexercpp_block_start_keyword(void* self) {
    return QsciLexerCPP_BlockStartKeyword((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_brace_style(void* self) {
    return QsciLexerCPP_BraceStyle((QsciLexerCPP*)self);
}

const char* q_scilexercpp_word_characters(void* self) {
    return QsciLexerCPP_WordCharacters((QsciLexerCPP*)self);
}

QColor* q_scilexercpp_default_color(void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_default_eol_fill(void* self, int style) {
    return QsciLexerCPP_DefaultEolFill((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_keywords(void* self, int set) {
    return QsciLexerCPP_Keywords((QsciLexerCPP*)self, set);
}

const char* q_scilexercpp_description(void* self, int style) {
    libqt_string _str = QsciLexerCPP_Description((QsciLexerCPP*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_refresh_properties(void* self) {
    QsciLexerCPP_RefreshProperties((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexercpp_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexercpp_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercpp_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercpp_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

void q_scilexercpp_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_SetFoldAtElse((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldAtElse((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldAtElse((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_SetFoldComments((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldComments((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldComments((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_SetFoldCompact((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldCompact((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldCompact((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_SetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldPreprocessor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_QBaseSetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_SetStylePreprocessor((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetStylePreprocessor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_QBaseSetStylePreprocessor((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_ReadProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercpp_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCPP_OnReadProperties((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_QBaseReadProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercpp_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_WriteProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercpp_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCPP_OnWriteProperties((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_QBaseWriteProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexercpp_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCPP_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCPP_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexercpp_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercpp_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexercpp_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercpp_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercpp_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercpp_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercpp_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercpp_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercpp_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercpp_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercpp_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercpp_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercpp_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercpp_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercpp_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexercpp_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercpp_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercpp_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercpp_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercpp_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercpp_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercpp_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercpp_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercpp_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexercpp_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercpp_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexercpp_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexercpp_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercpp_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercpp_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercpp_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercpp_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercpp_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercpp_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercpp_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercpp_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexercpp_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercpp_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercpp_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercpp_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercpp_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexercpp_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexercpp_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercpp_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercpp_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercpp_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexercpp_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercpp_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercpp_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexercpp_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexercpp_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexercpp_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexercpp_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexercpp_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercpp_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_lexer_id(void* self) {
    return QsciLexerCPP_LexerId((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_lexer_id(void* self) {
    return QsciLexerCPP_QBaseLexerId((QsciLexerCPP*)self);
}

void q_scilexercpp_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnLexerId((QsciLexerCPP*)self, (intptr_t)callback);
}

const char* q_scilexercpp_auto_completion_fillups(void* self) {
    return QsciLexerCPP_AutoCompletionFillups((QsciLexerCPP*)self);
}

const char* q_scilexercpp_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCPP_QBaseAutoCompletionFillups((QsciLexerCPP*)self);
}

void q_scilexercpp_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerCPP_OnAutoCompletionFillups((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_block_lookback(void* self) {
    return QsciLexerCPP_BlockLookback((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_block_lookback(void* self) {
    return QsciLexerCPP_QBaseBlockLookback((QsciLexerCPP*)self);
}

void q_scilexercpp_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnBlockLookback((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_case_sensitive(void* self) {
    return QsciLexerCPP_CaseSensitive((QsciLexerCPP*)self);
}

bool q_scilexercpp_qbase_case_sensitive(void* self) {
    return QsciLexerCPP_QBaseCaseSensitive((QsciLexerCPP*)self);
}

void q_scilexercpp_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerCPP_OnCaseSensitive((QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_color(void* self, int style) {
    return QsciLexerCPP_Color((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_qbase_color(void* self, int style) {
    return QsciLexerCPP_QBaseColor((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCPP_OnColor((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_eol_fill(void* self, int style) {
    return QsciLexerCPP_EolFill((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_qbase_eol_fill(void* self, int style) {
    return QsciLexerCPP_QBaseEolFill((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerCPP_OnEolFill((QsciLexerCPP*)self, (intptr_t)callback);
}

QFont* q_scilexercpp_font(void* self, int style) {
    return QsciLexerCPP_Font((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_qbase_font(void* self, int style) {
    return QsciLexerCPP_QBaseFont((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCPP_OnFont((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_indentation_guide_view(void* self) {
    return QsciLexerCPP_IndentationGuideView((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_indentation_guide_view(void* self) {
    return QsciLexerCPP_QBaseIndentationGuideView((QsciLexerCPP*)self);
}

void q_scilexercpp_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnIndentationGuideView((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_default_style(void* self) {
    return QsciLexerCPP_DefaultStyle((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_default_style(void* self) {
    return QsciLexerCPP_QBaseDefaultStyle((QsciLexerCPP*)self);
}

void q_scilexercpp_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnDefaultStyle((QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_paper(void* self, int style) {
    return QsciLexerCPP_Paper((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_qbase_paper(void* self, int style) {
    return QsciLexerCPP_QBasePaper((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCPP_OnPaper((QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_default_color2(void* self, int style) {
    return QsciLexerCPP_DefaultColor2((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_qbase_default_color2(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultColor2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCPP_OnDefaultColor2((QsciLexerCPP*)self, (intptr_t)callback);
}

QFont* q_scilexercpp_default_font2(void* self, int style) {
    return QsciLexerCPP_DefaultFont2((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_qbase_default_font2(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultFont2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCPP_OnDefaultFont2((QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_default_paper2(void* self, int style) {
    return QsciLexerCPP_DefaultPaper2((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_qbase_default_paper2(void* self, int style) {
    return QsciLexerCPP_QBaseDefaultPaper2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCPP_OnDefaultPaper2((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_editor(void* self, void* editor) {
    QsciLexerCPP_SetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

void q_scilexercpp_qbase_set_editor(void* self, void* editor) {
    QsciLexerCPP_QBaseSetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

void q_scilexercpp_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnSetEditor((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_style_bits_needed(void* self) {
    return QsciLexerCPP_StyleBitsNeeded((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_style_bits_needed(void* self) {
    return QsciLexerCPP_QBaseStyleBitsNeeded((QsciLexerCPP*)self);
}

void q_scilexercpp_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnStyleBitsNeeded((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_SetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

void q_scilexercpp_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_QBaseSetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

void q_scilexercpp_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerCPP_OnSetAutoIndentStyle((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_color(void* self, void* c, int style) {
    QsciLexerCPP_SetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCPP_QBaseSetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCPP_OnSetColor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_SetEolFill((QsciLexerCPP*)self, eoffill, style);
}

void q_scilexercpp_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_QBaseSetEolFill((QsciLexerCPP*)self, eoffill, style);
}

void q_scilexercpp_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerCPP_OnSetEolFill((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_font(void* self, void* f, int style) {
    QsciLexerCPP_SetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

void q_scilexercpp_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCPP_QBaseSetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

void q_scilexercpp_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCPP_OnSetFont((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_paper(void* self, void* c, int style) {
    QsciLexerCPP_SetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCPP_QBaseSetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCPP_OnSetPaper((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_event(void* self, void* event) {
    return QsciLexerCPP_Event((QsciLexerCPP*)self, (QEvent*)event);
}

bool q_scilexercpp_qbase_event(void* self, void* event) {
    return QsciLexerCPP_QBaseEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCPP_OnEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_EventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercpp_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_QBaseEventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercpp_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerCPP_OnEventFilter((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_timer_event(void* self, void* event) {
    QsciLexerCPP_TimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

void q_scilexercpp_qbase_timer_event(void* self, void* event) {
    QsciLexerCPP_QBaseTimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

void q_scilexercpp_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnTimerEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_child_event(void* self, void* event) {
    QsciLexerCPP_ChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

void q_scilexercpp_qbase_child_event(void* self, void* event) {
    QsciLexerCPP_QBaseChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

void q_scilexercpp_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnChildEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_custom_event(void* self, void* event) {
    QsciLexerCPP_CustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_qbase_custom_event(void* self, void* event) {
    QsciLexerCPP_QBaseCustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnCustomEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_connect_notify(void* self, void* signal) {
    QsciLexerCPP_ConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCPP_QBaseConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnConnectNotify((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_disconnect_notify(void* self, void* signal) {
    QsciLexerCPP_DisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCPP_QBaseDisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnDisconnectNotify((QsciLexerCPP*)self, (intptr_t)callback);
}

char* q_scilexercpp_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCPP_TextAsBytes((QsciLexerCPP*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexercpp_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCPP_QBaseTextAsBytes((QsciLexerCPP*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerCPP_OnTextAsBytes((QsciLexerCPP*)self, (intptr_t)callback);
}

const char* q_scilexercpp_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCPP_BytesAsText((QsciLexerCPP*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCPP_QBaseBytesAsText((QsciLexerCPP*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerCPP_OnBytesAsText((QsciLexerCPP*)self, (intptr_t)callback);
}

QObject* q_scilexercpp_sender(void* self) {
    return QsciLexerCPP_Sender((QsciLexerCPP*)self);
}

QObject* q_scilexercpp_qbase_sender(void* self) {
    return QsciLexerCPP_QBaseSender((QsciLexerCPP*)self);
}

void q_scilexercpp_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerCPP_OnSender((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_sender_signal_index(void* self) {
    return QsciLexerCPP_SenderSignalIndex((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_qbase_sender_signal_index(void* self) {
    return QsciLexerCPP_QBaseSenderSignalIndex((QsciLexerCPP*)self);
}

void q_scilexercpp_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerCPP_OnSenderSignalIndex((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_receivers(void* self, const char* signal) {
    return QsciLexerCPP_Receivers((QsciLexerCPP*)self, signal);
}

int32_t q_scilexercpp_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCPP_QBaseReceivers((QsciLexerCPP*)self, signal);
}

void q_scilexercpp_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerCPP_OnReceivers((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_is_signal_connected(void* self, void* signal) {
    return QsciLexerCPP_IsSignalConnected((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

bool q_scilexercpp_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCPP_QBaseIsSignalConnected((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCPP_OnIsSignalConnected((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexercpp_delete(void* self) {
    QsciLexerCPP_Delete((QsciLexerCPP*)(self));
}
