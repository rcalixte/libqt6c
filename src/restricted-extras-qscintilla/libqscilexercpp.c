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
    return QsciLexerCPP_New();
}

QsciLexerCPP* q_scilexercpp_new2(void* parent) {
    return QsciLexerCPP_New2((QObject*)parent);
}

QsciLexerCPP* q_scilexercpp_new3(void* parent, bool caseInsensitiveKeywords) {
    return QsciLexerCPP_New3((QObject*)parent, caseInsensitiveKeywords);
}

const QMetaObject* q_scilexercpp_meta_object(const void* self) {
    return QsciLexerCPP_MetaObject((QsciLexerCPP*)self);
}

void q_scilexercpp_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerCPP_OnMetaObject((QsciLexerCPP*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexercpp_super_meta_object(const void* self) {
    return QsciLexerCPP_SuperMetaObject((QsciLexerCPP*)self);
}

void* q_scilexercpp_metacast(void* self, const char* param1) {
    return QsciLexerCPP_Metacast((QsciLexerCPP*)self, param1);
}

void q_scilexercpp_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerCPP_OnMetacast((QsciLexerCPP*)self, (intptr_t)callback);
}

void* q_scilexercpp_super_metacast(void* self, const char* param1) {
    return QsciLexerCPP_SuperMetacast((QsciLexerCPP*)self, param1);
}

int32_t q_scilexercpp_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCPP_Metacall((QsciLexerCPP*)self, param1, param2, param3);
}

void q_scilexercpp_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerCPP_OnMetacall((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCPP_SuperMetacall((QsciLexerCPP*)self, param1, param2, param3);
}

const char* q_scilexercpp_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_language(const void* self) {
    return QsciLexerCPP_Language((QsciLexerCPP*)self);
}

const char* q_scilexercpp_lexer(const void* self) {
    return QsciLexerCPP_Lexer((QsciLexerCPP*)self);
}

const char** q_scilexercpp_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerCPP_AutoCompletionWordSeparators((QsciLexerCPP*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercpp_auto_completion_word_separators\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_scilexercpp_block_end(const void* self) {
    return QsciLexerCPP_BlockEnd((QsciLexerCPP*)self);
}

const char* q_scilexercpp_block_start(const void* self) {
    return QsciLexerCPP_BlockStart((QsciLexerCPP*)self);
}

const char* q_scilexercpp_block_start_keyword(const void* self) {
    return QsciLexerCPP_BlockStartKeyword((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_brace_style(const void* self) {
    return QsciLexerCPP_BraceStyle((QsciLexerCPP*)self);
}

const char* q_scilexercpp_word_characters(const void* self) {
    return QsciLexerCPP_WordCharacters((QsciLexerCPP*)self);
}

QColor* q_scilexercpp_default_color(const void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_default_eol_fill(const void* self, int style) {
    return QsciLexerCPP_DefaultEolFill((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_default_font(const void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_default_paper(const void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_keywords(const void* self, int set) {
    return QsciLexerCPP_Keywords((QsciLexerCPP*)self, set);
}

const char* q_scilexercpp_description(const void* self, int style) {
    libqt_string _str = QsciLexerCPP_Description((QsciLexerCPP*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_refresh_properties(void* self) {
    QsciLexerCPP_RefreshProperties((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_at_else(const void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_comments(const void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_compact(const void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexercpp_fold_preprocessor(const void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexercpp_style_preprocessor(const void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexercpp_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercpp_dollars_allowed(const void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_triple_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_hash_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_back_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercpp_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexercpp_highlight_escape_sequences(const void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexercpp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercpp_verbatim_string_escape_sequences_allowed(const void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

void q_scilexercpp_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_SetFoldAtElse((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldAtElse((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_super_set_fold_at_else(void* self, bool fold) {
    QsciLexerCPP_SuperSetFoldAtElse((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_SetFoldComments((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldComments((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_super_set_fold_comments(void* self, bool fold) {
    QsciLexerCPP_SuperSetFoldComments((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_SetFoldCompact((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldCompact((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_super_set_fold_compact(void* self, bool fold) {
    QsciLexerCPP_SuperSetFoldCompact((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_SetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetFoldPreprocessor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_super_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCPP_SuperSetFoldPreprocessor((QsciLexerCPP*)self, fold);
}

void q_scilexercpp_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_SetStylePreprocessor((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCPP_OnSetStylePreprocessor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_super_set_style_preprocessor(void* self, bool style) {
    QsciLexerCPP_SuperSetStylePreprocessor((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_ReadProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercpp_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerCPP_WriteProperties((QsciLexerCPP*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexercpp_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_block_end1(const void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_block_start1(const void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexercpp_block_start_keyword1(const void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexercpp_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercpp_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexercpp_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercpp_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercpp_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercpp_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercpp_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercpp_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercpp_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercpp_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercpp_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercpp_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercpp_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercpp_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercpp_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
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

bool q_scilexercpp_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercpp_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercpp_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercpp_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercpp_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercpp_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercpp_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercpp_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercpp_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexercpp_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercpp_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexercpp_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexercpp_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexercpp_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercpp_children(const void* self) {
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

QMetaObject__Connection* q_scilexercpp_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexercpp_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercpp_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercpp_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexercpp_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercpp_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexercpp_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexercpp_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexercpp_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercpp_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercpp_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercpp_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercpp_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercpp_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexercpp_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercpp_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercpp_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercpp_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexercpp_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercpp_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercpp_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexercpp_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexercpp_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexercpp_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexercpp_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexercpp_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexercpp_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexercpp_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexercpp_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexercpp_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexercpp_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercpp_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_lexer_id(const void* self) {
    return QsciLexerCPP_LexerId((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_super_lexer_id(const void* self) {
    return QsciLexerCPP_SuperLexerId((QsciLexerCPP*)self);
}

void q_scilexercpp_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerCPP_OnLexerId((const QsciLexerCPP*)self, (intptr_t)callback);
}

const char* q_scilexercpp_auto_completion_fillups(const void* self) {
    return QsciLexerCPP_AutoCompletionFillups((QsciLexerCPP*)self);
}

const char* q_scilexercpp_super_auto_completion_fillups(const void* self) {
    return QsciLexerCPP_SuperAutoCompletionFillups((QsciLexerCPP*)self);
}

void q_scilexercpp_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerCPP_OnAutoCompletionFillups((const QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_block_lookback(const void* self) {
    return QsciLexerCPP_BlockLookback((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_super_block_lookback(const void* self) {
    return QsciLexerCPP_SuperBlockLookback((QsciLexerCPP*)self);
}

void q_scilexercpp_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerCPP_OnBlockLookback((const QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_case_sensitive(const void* self) {
    return QsciLexerCPP_CaseSensitive((QsciLexerCPP*)self);
}

bool q_scilexercpp_super_case_sensitive(const void* self) {
    return QsciLexerCPP_SuperCaseSensitive((QsciLexerCPP*)self);
}

void q_scilexercpp_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerCPP_OnCaseSensitive((const QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_color(const void* self, int style) {
    return QsciLexerCPP_Color((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_super_color(const void* self, int style) {
    return QsciLexerCPP_SuperColor((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerCPP_OnColor((const QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_eol_fill(const void* self, int style) {
    return QsciLexerCPP_EolFill((QsciLexerCPP*)self, style);
}

bool q_scilexercpp_super_eol_fill(const void* self, int style) {
    return QsciLexerCPP_SuperEolFill((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerCPP_OnEolFill((const QsciLexerCPP*)self, (intptr_t)callback);
}

QFont* q_scilexercpp_font(const void* self, int style) {
    return QsciLexerCPP_Font((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_super_font(const void* self, int style) {
    return QsciLexerCPP_SuperFont((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerCPP_OnFont((const QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_indentation_guide_view(const void* self) {
    return QsciLexerCPP_IndentationGuideView((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_super_indentation_guide_view(const void* self) {
    return QsciLexerCPP_SuperIndentationGuideView((QsciLexerCPP*)self);
}

void q_scilexercpp_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerCPP_OnIndentationGuideView((const QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_default_style(const void* self) {
    return QsciLexerCPP_DefaultStyle((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_super_default_style(const void* self) {
    return QsciLexerCPP_SuperDefaultStyle((QsciLexerCPP*)self);
}

void q_scilexercpp_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerCPP_OnDefaultStyle((const QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_paper(const void* self, int style) {
    return QsciLexerCPP_Paper((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_super_paper(const void* self, int style) {
    return QsciLexerCPP_SuperPaper((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerCPP_OnPaper((const QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_default_color2(const void* self, int style) {
    return QsciLexerCPP_DefaultColor2((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_super_default_color2(const void* self, int style) {
    return QsciLexerCPP_SuperDefaultColor2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerCPP_OnDefaultColor2((const QsciLexerCPP*)self, (intptr_t)callback);
}

QFont* q_scilexercpp_default_font2(const void* self, int style) {
    return QsciLexerCPP_DefaultFont2((QsciLexerCPP*)self, style);
}

QFont* q_scilexercpp_super_default_font2(const void* self, int style) {
    return QsciLexerCPP_SuperDefaultFont2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerCPP_OnDefaultFont2((const QsciLexerCPP*)self, (intptr_t)callback);
}

QColor* q_scilexercpp_default_paper2(const void* self, int style) {
    return QsciLexerCPP_DefaultPaper2((QsciLexerCPP*)self, style);
}

QColor* q_scilexercpp_super_default_paper2(const void* self, int style) {
    return QsciLexerCPP_SuperDefaultPaper2((QsciLexerCPP*)self, style);
}

void q_scilexercpp_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerCPP_OnDefaultPaper2((const QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_editor(void* self, void* editor) {
    QsciLexerCPP_SetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

void q_scilexercpp_super_set_editor(void* self, void* editor) {
    QsciLexerCPP_SuperSetEditor((QsciLexerCPP*)self, (QsciScintilla*)editor);
}

void q_scilexercpp_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnSetEditor((QsciLexerCPP*)self, (intptr_t)callback);
}

int32_t q_scilexercpp_style_bits_needed(const void* self) {
    return QsciLexerCPP_StyleBitsNeeded((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_super_style_bits_needed(const void* self) {
    return QsciLexerCPP_SuperStyleBitsNeeded((QsciLexerCPP*)self);
}

void q_scilexercpp_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerCPP_OnStyleBitsNeeded((const QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_SetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

void q_scilexercpp_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCPP_SuperSetAutoIndentStyle((QsciLexerCPP*)self, autoindentstyle);
}

void q_scilexercpp_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerCPP_OnSetAutoIndentStyle((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_color(void* self, const void* c, int style) {
    QsciLexerCPP_SetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_super_set_color(void* self, const void* c, int style) {
    QsciLexerCPP_SuperSetColor((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerCPP_OnSetColor((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_SetEolFill((QsciLexerCPP*)self, eoffill, style);
}

void q_scilexercpp_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCPP_SuperSetEolFill((QsciLexerCPP*)self, eoffill, style);
}

void q_scilexercpp_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerCPP_OnSetEolFill((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_font(void* self, const void* f, int style) {
    QsciLexerCPP_SetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

void q_scilexercpp_super_set_font(void* self, const void* f, int style) {
    QsciLexerCPP_SuperSetFont((QsciLexerCPP*)self, (QFont*)f, style);
}

void q_scilexercpp_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerCPP_OnSetFont((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_set_paper(void* self, const void* c, int style) {
    QsciLexerCPP_SetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_super_set_paper(void* self, const void* c, int style) {
    QsciLexerCPP_SuperSetPaper((QsciLexerCPP*)self, (QColor*)c, style);
}

void q_scilexercpp_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerCPP_OnSetPaper((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_event(void* self, void* event) {
    return QsciLexerCPP_Event((QsciLexerCPP*)self, (QEvent*)event);
}

bool q_scilexercpp_super_event(void* self, void* event) {
    return QsciLexerCPP_SuperEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCPP_OnEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

bool q_scilexercpp_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_EventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercpp_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCPP_SuperEventFilter((QsciLexerCPP*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercpp_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerCPP_OnEventFilter((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_timer_event(void* self, void* event) {
    QsciLexerCPP_TimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

void q_scilexercpp_super_timer_event(void* self, void* event) {
    QsciLexerCPP_SuperTimerEvent((QsciLexerCPP*)self, (QTimerEvent*)event);
}

void q_scilexercpp_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnTimerEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_child_event(void* self, void* event) {
    QsciLexerCPP_ChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

void q_scilexercpp_super_child_event(void* self, void* event) {
    QsciLexerCPP_SuperChildEvent((QsciLexerCPP*)self, (QChildEvent*)event);
}

void q_scilexercpp_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnChildEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_custom_event(void* self, void* event) {
    QsciLexerCPP_CustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_super_custom_event(void* self, void* event) {
    QsciLexerCPP_SuperCustomEvent((QsciLexerCPP*)self, (QEvent*)event);
}

void q_scilexercpp_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCPP_OnCustomEvent((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_connect_notify(void* self, const void* signal) {
    QsciLexerCPP_ConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_super_connect_notify(void* self, const void* signal) {
    QsciLexerCPP_SuperConnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerCPP_OnConnectNotify((QsciLexerCPP*)self, (intptr_t)callback);
}

void q_scilexercpp_disconnect_notify(void* self, const void* signal) {
    QsciLexerCPP_DisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerCPP_SuperDisconnectNotify((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerCPP_OnDisconnectNotify((QsciLexerCPP*)self, (intptr_t)callback);
}

char* q_scilexercpp_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerCPP_TextAsBytes((QsciLexerCPP*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercpp_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCPP_BytesAsText((QsciLexerCPP*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexercpp_sender(const void* self) {
    return QsciLexerCPP_Sender((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_sender_signal_index(const void* self) {
    return QsciLexerCPP_SenderSignalIndex((QsciLexerCPP*)self);
}

int32_t q_scilexercpp_receivers(const void* self, const char* signal) {
    return QsciLexerCPP_Receivers((QsciLexerCPP*)self, signal);
}

bool q_scilexercpp_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerCPP_IsSignalConnected((QsciLexerCPP*)self, (QMetaMethod*)signal);
}

void q_scilexercpp_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexercpp_delete(void* self) {
    QsciLexerCPP_Delete((QsciLexerCPP*)(self));
}
