#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexercpp.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerjava.hpp"
#include "libqscilexerjava.h"

QsciLexerJava* q_scilexerjava_new() {
    return QsciLexerJava_new();
}

QsciLexerJava* q_scilexerjava_new2(void* parent) {
    return QsciLexerJava_new2((QObject*)parent);
}

const QMetaObject* q_scilexerjava_meta_object(void* self) {
    return QsciLexerJava_MetaObject((QsciLexerJava*)self);
}

void* q_scilexerjava_metacast(void* self, const char* param1) {
    return QsciLexerJava_Metacast((QsciLexerJava*)self, param1);
}

int32_t q_scilexerjava_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJava_Metacall((QsciLexerJava*)self, param1, param2, param3);
}

void q_scilexerjava_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerJava_OnMetacall((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJava_QBaseMetacall((QsciLexerJava*)self, param1, param2, param3);
}

const char* q_scilexerjava_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_language(void* self) {
    return QsciLexerJava_Language((QsciLexerJava*)self);
}

const char* q_scilexerjava_keywords(void* self, int set) {
    return QsciLexerJava_Keywords((QsciLexerJava*)self, set);
}

const char* q_scilexerjava_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerjava_default_color(void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

QFont* q_scilexerjava_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

QColor* q_scilexerjava_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

bool q_scilexerjava_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexerjava_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexerjava_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjava_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexerjava_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjava_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexerjava_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjava_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjava_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexerjava_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerjava_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerjava_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerjava_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerjava_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerjava_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerjava_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerjava_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerjava_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerjava_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjava_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjava_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjava_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjava_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerjava_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerjava_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerjava_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerjava_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerjava_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerjava_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerjava_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerjava_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerjava_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerjava_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerjava_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerjava_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerjava_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerjava_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerjava_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerjava_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerjava_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerjava_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerjava_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjava_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjava_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjava_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerjava_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerjava_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerjava_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerjava_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerjava_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_dynamic_property_names\n");
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

QBindingStorage* q_scilexerjava_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjava_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjava_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjava_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerjava_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerjava_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerjava_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerjava_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerjava_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerjava_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerjava_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerjava_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerjava_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_at_else(void* self, bool fold) {
    QsciLexerJava_SetFoldAtElse((QsciLexerJava*)self, fold);
}

void q_scilexerjava_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldAtElse((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldAtElse((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_SetFoldComments((QsciLexerJava*)self, fold);
}

void q_scilexerjava_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldComments((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldComments((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_SetFoldCompact((QsciLexerJava*)self, fold);
}

void q_scilexerjava_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldCompact((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldCompact((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_SetFoldPreprocessor((QsciLexerJava*)self, fold);
}

void q_scilexerjava_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_QBaseSetFoldPreprocessor((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldPreprocessor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_SetStylePreprocessor((QsciLexerJava*)self, style);
}

void q_scilexerjava_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_QBaseSetStylePreprocessor((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetStylePreprocessor((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_lexer(void* self) {
    return QsciLexerJava_Lexer((QsciLexerJava*)self);
}

const char* q_scilexerjava_qbase_lexer(void* self) {
    return QsciLexerJava_QBaseLexer((QsciLexerJava*)self);
}

void q_scilexerjava_on_lexer(void* self, const char* (*callback)()) {
    QsciLexerJava_OnLexer((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_lexer_id(void* self) {
    return QsciLexerJava_LexerId((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_lexer_id(void* self) {
    return QsciLexerJava_QBaseLexerId((QsciLexerJava*)self);
}

void q_scilexerjava_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnLexerId((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_auto_completion_fillups(void* self) {
    return QsciLexerJava_AutoCompletionFillups((QsciLexerJava*)self);
}

const char* q_scilexerjava_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJava_QBaseAutoCompletionFillups((QsciLexerJava*)self);
}

void q_scilexerjava_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerJava_OnAutoCompletionFillups((QsciLexerJava*)self, (intptr_t)callback);
}

const char** q_scilexerjava_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJava_AutoCompletionWordSeparators((QsciLexerJava*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_auto_completion_word_separators\n");
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

const char** q_scilexerjava_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJava_QBaseAutoCompletionWordSeparators((QsciLexerJava*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_auto_completion_word_separators\n");
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

void q_scilexerjava_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerJava_OnAutoCompletionWordSeparators((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_end(void* self, int* style) {
    return QsciLexerJava_BlockEnd((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_qbase_block_end(void* self, int* style) {
    return QsciLexerJava_QBaseBlockEnd((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJava_OnBlockEnd((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_block_lookback(void* self) {
    return QsciLexerJava_BlockLookback((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_block_lookback(void* self) {
    return QsciLexerJava_QBaseBlockLookback((QsciLexerJava*)self);
}

void q_scilexerjava_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnBlockLookback((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_start(void* self, int* style) {
    return QsciLexerJava_BlockStart((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_qbase_block_start(void* self, int* style) {
    return QsciLexerJava_QBaseBlockStart((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJava_OnBlockStart((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_start_keyword(void* self, int* style) {
    return QsciLexerJava_BlockStartKeyword((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJava_QBaseBlockStartKeyword((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJava_OnBlockStartKeyword((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_brace_style(void* self) {
    return QsciLexerJava_BraceStyle((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_brace_style(void* self) {
    return QsciLexerJava_QBaseBraceStyle((QsciLexerJava*)self);
}

void q_scilexerjava_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnBraceStyle((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_case_sensitive(void* self) {
    return QsciLexerJava_CaseSensitive((QsciLexerJava*)self);
}

bool q_scilexerjava_qbase_case_sensitive(void* self) {
    return QsciLexerJava_QBaseCaseSensitive((QsciLexerJava*)self);
}

void q_scilexerjava_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerJava_OnCaseSensitive((QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_color(void* self, int style) {
    return QsciLexerJava_Color((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_qbase_color(void* self, int style) {
    return QsciLexerJava_QBaseColor((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJava_OnColor((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_eol_fill(void* self, int style) {
    return QsciLexerJava_EolFill((QsciLexerJava*)self, style);
}

bool q_scilexerjava_qbase_eol_fill(void* self, int style) {
    return QsciLexerJava_QBaseEolFill((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerJava_OnEolFill((QsciLexerJava*)self, (intptr_t)callback);
}

QFont* q_scilexerjava_font(void* self, int style) {
    return QsciLexerJava_Font((QsciLexerJava*)self, style);
}

QFont* q_scilexerjava_qbase_font(void* self, int style) {
    return QsciLexerJava_QBaseFont((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJava_OnFont((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_indentation_guide_view(void* self) {
    return QsciLexerJava_IndentationGuideView((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_indentation_guide_view(void* self) {
    return QsciLexerJava_QBaseIndentationGuideView((QsciLexerJava*)self);
}

void q_scilexerjava_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnIndentationGuideView((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_default_style(void* self) {
    return QsciLexerJava_DefaultStyle((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_default_style(void* self) {
    return QsciLexerJava_QBaseDefaultStyle((QsciLexerJava*)self);
}

void q_scilexerjava_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnDefaultStyle((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_description(void* self, int style) {
    libqt_string _str = QsciLexerJava_Description((QsciLexerJava*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerJava_QBaseDescription((QsciLexerJava*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerJava_OnDescription((QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_paper(void* self, int style) {
    return QsciLexerJava_Paper((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_qbase_paper(void* self, int style) {
    return QsciLexerJava_QBasePaper((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJava_OnPaper((QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_default_color2(void* self, int style) {
    return QsciLexerJava_DefaultColor2((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_qbase_default_color2(void* self, int style) {
    return QsciLexerJava_QBaseDefaultColor2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJava_OnDefaultColor2((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_default_eol_fill(void* self, int style) {
    return QsciLexerJava_DefaultEolFill((QsciLexerJava*)self, style);
}

bool q_scilexerjava_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerJava_QBaseDefaultEolFill((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerJava_OnDefaultEolFill((QsciLexerJava*)self, (intptr_t)callback);
}

QFont* q_scilexerjava_default_font2(void* self, int style) {
    return QsciLexerJava_DefaultFont2((QsciLexerJava*)self, style);
}

QFont* q_scilexerjava_qbase_default_font2(void* self, int style) {
    return QsciLexerJava_QBaseDefaultFont2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJava_OnDefaultFont2((QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_default_paper2(void* self, int style) {
    return QsciLexerJava_DefaultPaper2((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_qbase_default_paper2(void* self, int style) {
    return QsciLexerJava_QBaseDefaultPaper2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJava_OnDefaultPaper2((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_editor(void* self, void* editor) {
    QsciLexerJava_SetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

void q_scilexerjava_qbase_set_editor(void* self, void* editor) {
    QsciLexerJava_QBaseSetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

void q_scilexerjava_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnSetEditor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_refresh_properties(void* self) {
    QsciLexerJava_RefreshProperties((QsciLexerJava*)self);
}

void q_scilexerjava_qbase_refresh_properties(void* self) {
    QsciLexerJava_QBaseRefreshProperties((QsciLexerJava*)self);
}

void q_scilexerjava_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerJava_OnRefreshProperties((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_style_bits_needed(void* self) {
    return QsciLexerJava_StyleBitsNeeded((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_style_bits_needed(void* self) {
    return QsciLexerJava_QBaseStyleBitsNeeded((QsciLexerJava*)self);
}

void q_scilexerjava_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnStyleBitsNeeded((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_word_characters(void* self) {
    return QsciLexerJava_WordCharacters((QsciLexerJava*)self);
}

const char* q_scilexerjava_qbase_word_characters(void* self) {
    return QsciLexerJava_QBaseWordCharacters((QsciLexerJava*)self);
}

void q_scilexerjava_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerJava_OnWordCharacters((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_SetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

void q_scilexerjava_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_QBaseSetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

void q_scilexerjava_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerJava_OnSetAutoIndentStyle((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_color(void* self, void* c, int style) {
    QsciLexerJava_SetColor((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJava_QBaseSetColor((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJava_OnSetColor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_SetEolFill((QsciLexerJava*)self, eoffill, style);
}

void q_scilexerjava_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_QBaseSetEolFill((QsciLexerJava*)self, eoffill, style);
}

void q_scilexerjava_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerJava_OnSetEolFill((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_font(void* self, void* f, int style) {
    QsciLexerJava_SetFont((QsciLexerJava*)self, (QFont*)f, style);
}

void q_scilexerjava_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJava_QBaseSetFont((QsciLexerJava*)self, (QFont*)f, style);
}

void q_scilexerjava_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJava_OnSetFont((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_paper(void* self, void* c, int style) {
    QsciLexerJava_SetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJava_QBaseSetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJava_OnSetPaper((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_ReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjava_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_QBaseReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjava_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJava_OnReadProperties((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_WriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjava_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_QBaseWriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjava_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJava_OnWriteProperties((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_event(void* self, void* event) {
    return QsciLexerJava_Event((QsciLexerJava*)self, (QEvent*)event);
}

bool q_scilexerjava_qbase_event(void* self, void* event) {
    return QsciLexerJava_QBaseEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJava_OnEvent((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_EventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjava_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_QBaseEventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjava_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerJava_OnEventFilter((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_timer_event(void* self, void* event) {
    QsciLexerJava_TimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

void q_scilexerjava_qbase_timer_event(void* self, void* event) {
    QsciLexerJava_QBaseTimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

void q_scilexerjava_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnTimerEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_child_event(void* self, void* event) {
    QsciLexerJava_ChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

void q_scilexerjava_qbase_child_event(void* self, void* event) {
    QsciLexerJava_QBaseChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

void q_scilexerjava_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnChildEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_custom_event(void* self, void* event) {
    QsciLexerJava_CustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_qbase_custom_event(void* self, void* event) {
    QsciLexerJava_QBaseCustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnCustomEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_connect_notify(void* self, void* signal) {
    QsciLexerJava_ConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJava_QBaseConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnConnectNotify((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_disconnect_notify(void* self, void* signal) {
    QsciLexerJava_DisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJava_QBaseDisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnDisconnectNotify((QsciLexerJava*)self, (intptr_t)callback);
}

char* q_scilexerjava_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJava_TextAsBytes((QsciLexerJava*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerjava_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJava_QBaseTextAsBytes((QsciLexerJava*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerJava_OnTextAsBytes((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJava_BytesAsText((QsciLexerJava*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJava_QBaseBytesAsText((QsciLexerJava*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerJava_OnBytesAsText((QsciLexerJava*)self, (intptr_t)callback);
}

QObject* q_scilexerjava_sender(void* self) {
    return QsciLexerJava_Sender((QsciLexerJava*)self);
}

QObject* q_scilexerjava_qbase_sender(void* self) {
    return QsciLexerJava_QBaseSender((QsciLexerJava*)self);
}

void q_scilexerjava_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerJava_OnSender((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_sender_signal_index(void* self) {
    return QsciLexerJava_SenderSignalIndex((QsciLexerJava*)self);
}

int32_t q_scilexerjava_qbase_sender_signal_index(void* self) {
    return QsciLexerJava_QBaseSenderSignalIndex((QsciLexerJava*)self);
}

void q_scilexerjava_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerJava_OnSenderSignalIndex((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_receivers(void* self, const char* signal) {
    return QsciLexerJava_Receivers((QsciLexerJava*)self, signal);
}

int32_t q_scilexerjava_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJava_QBaseReceivers((QsciLexerJava*)self, signal);
}

void q_scilexerjava_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerJava_OnReceivers((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_is_signal_connected(void* self, void* signal) {
    return QsciLexerJava_IsSignalConnected((QsciLexerJava*)self, (QMetaMethod*)signal);
}

bool q_scilexerjava_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJava_QBaseIsSignalConnected((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJava_OnIsSignalConnected((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerjava_delete(void* self) {
    QsciLexerJava_Delete((QsciLexerJava*)(self));
}
