#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "libqscilexercpp.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerjavascript.hpp"
#include "libqscilexerjavascript.h"

QsciLexerJavaScript* q_scilexerjavascript_new() {
    return QsciLexerJavaScript_new();
}

QsciLexerJavaScript* q_scilexerjavascript_new2(void* parent) {
    return QsciLexerJavaScript_new2((QObject*)parent);
}

const QMetaObject* q_scilexerjavascript_meta_object(void* self) {
    return QsciLexerJavaScript_MetaObject((QsciLexerJavaScript*)self);
}

void* q_scilexerjavascript_metacast(void* self, const char* param1) {
    return QsciLexerJavaScript_Metacast((QsciLexerJavaScript*)self, param1);
}

int32_t q_scilexerjavascript_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_Metacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

void q_scilexerjavascript_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerJavaScript_OnMetacall((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_QBaseMetacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

const char* q_scilexerjavascript_tr(const char* s) {
    libqt_string _str = QsciLexerJavaScript_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_language(void* self) {
    return QsciLexerJavaScript_Language((QsciLexerJavaScript*)self);
}

QColor* q_scilexerjavascript_default_color(void* self, int style) {
    return QsciLexerJavaScript_DefaultColor((QsciLexerJavaScript*)self, style);
}

bool q_scilexerjavascript_default_eol_fill(void* self, int style) {
    return QsciLexerJavaScript_DefaultEolFill((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_default_font(void* self, int style) {
    return QsciLexerJavaScript_DefaultFont((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_default_paper(void* self, int style) {
    return QsciLexerJavaScript_DefaultPaper((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_keywords(void* self, int set) {
    return QsciLexerJavaScript_Keywords((QsciLexerJavaScript*)self, set);
}

const char* q_scilexerjavascript_description(void* self, int style) {
    libqt_string _str = QsciLexerJavaScript_Description((QsciLexerJavaScript*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerJavaScript_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerJavaScript_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scilexerjavascript_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjavascript_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjavascript_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexerjavascript_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjavascript_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjavascript_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexerjavascript_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerjavascript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerjavascript_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerjavascript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerjavascript_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerjavascript_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerjavascript_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerjavascript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerjavascript_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerjavascript_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerjavascript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjavascript_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerjavascript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerjavascript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerjavascript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerjavascript_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerjavascript_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerjavascript_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjavascript_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerjavascript_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerjavascript_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerjavascript_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerjavascript_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerjavascript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerjavascript_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexerjavascript_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerjavascript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerjavascript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerjavascript_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerjavascript_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerjavascript_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerjavascript_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerjavascript_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjavascript_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjavascript_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjavascript_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexerjavascript_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerjavascript_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerjavascript_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerjavascript_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerjavascript_dynamic_property_names(void* self) {
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

QBindingStorage* q_scilexerjavascript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjavascript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjavascript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjavascript_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerjavascript_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerjavascript_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerjavascript_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerjavascript_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerjavascript_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerjavascript_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerjavascript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerjavascript_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_fold_at_else(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldAtElse((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldAtElse((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldAtElse((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldComments((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldCompact((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldPreprocessor((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_SetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_QBaseSetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_set_style_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerJavaScript_OnSetStylePreprocessor((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_lexer(void* self) {
    return QsciLexerJavaScript_Lexer((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_lexer(void* self) {
    return QsciLexerJavaScript_QBaseLexer((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerJavaScript_OnLexer((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_lexer_id(void* self) {
    return QsciLexerJavaScript_LexerId((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_lexer_id(void* self) {
    return QsciLexerJavaScript_QBaseLexerId((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnLexerId((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_auto_completion_fillups(void* self) {
    return QsciLexerJavaScript_AutoCompletionFillups((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJavaScript_QBaseAutoCompletionFillups((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerJavaScript_OnAutoCompletionFillups((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char** q_scilexerjavascript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJavaScript_AutoCompletionWordSeparators((QsciLexerJavaScript*)self);
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

const char** q_scilexerjavascript_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJavaScript_QBaseAutoCompletionWordSeparators((QsciLexerJavaScript*)self);
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

void q_scilexerjavascript_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerJavaScript_OnAutoCompletionWordSeparators((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_block_end(void* self, int* style) {
    return QsciLexerJavaScript_BlockEnd((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_end(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockEnd((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJavaScript_OnBlockEnd((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_block_lookback(void* self) {
    return QsciLexerJavaScript_BlockLookback((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_block_lookback(void* self) {
    return QsciLexerJavaScript_QBaseBlockLookback((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnBlockLookback((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_block_start(void* self, int* style) {
    return QsciLexerJavaScript_BlockStart((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_start(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockStart((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJavaScript_OnBlockStart((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_block_start_keyword(void* self, int* style) {
    return QsciLexerJavaScript_BlockStartKeyword((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockStartKeyword((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerJavaScript_OnBlockStartKeyword((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_brace_style(void* self) {
    return QsciLexerJavaScript_BraceStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_brace_style(void* self) {
    return QsciLexerJavaScript_QBaseBraceStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnBraceStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_case_sensitive(void* self) {
    return QsciLexerJavaScript_CaseSensitive((QsciLexerJavaScript*)self);
}

bool q_scilexerjavascript_qbase_case_sensitive(void* self) {
    return QsciLexerJavaScript_QBaseCaseSensitive((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerJavaScript_OnCaseSensitive((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QColor* q_scilexerjavascript_color(void* self, int style) {
    return QsciLexerJavaScript_Color((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_color(void* self, int style) {
    return QsciLexerJavaScript_QBaseColor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnColor((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_eol_fill(void* self, int style) {
    return QsciLexerJavaScript_EolFill((QsciLexerJavaScript*)self, style);
}

bool q_scilexerjavascript_qbase_eol_fill(void* self, int style) {
    return QsciLexerJavaScript_QBaseEolFill((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerJavaScript_OnEolFill((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QFont* q_scilexerjavascript_font(void* self, int style) {
    return QsciLexerJavaScript_Font((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_qbase_font(void* self, int style) {
    return QsciLexerJavaScript_QBaseFont((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnFont((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_indentation_guide_view(void* self) {
    return QsciLexerJavaScript_IndentationGuideView((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_indentation_guide_view(void* self) {
    return QsciLexerJavaScript_QBaseIndentationGuideView((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnIndentationGuideView((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_default_style(void* self) {
    return QsciLexerJavaScript_DefaultStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_default_style(void* self) {
    return QsciLexerJavaScript_QBaseDefaultStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnDefaultStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QColor* q_scilexerjavascript_paper(void* self, int style) {
    return QsciLexerJavaScript_Paper((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_paper(void* self, int style) {
    return QsciLexerJavaScript_QBasePaper((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnPaper((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QColor* q_scilexerjavascript_default_color_with_style(void* self, int style) {
    return QsciLexerJavaScript_DefaultColorWithStyle((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultColorWithStyle((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnDefaultColorWithStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QFont* q_scilexerjavascript_default_font_with_style(void* self, int style) {
    return QsciLexerJavaScript_DefaultFontWithStyle((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultFontWithStyle((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnDefaultFontWithStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QColor* q_scilexerjavascript_default_paper_with_style(void* self, int style) {
    return QsciLexerJavaScript_DefaultPaperWithStyle((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultPaperWithStyle((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerJavaScript_OnDefaultPaperWithStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_SetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_qbase_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_QBaseSetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnSetEditor((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_refresh_properties(void* self) {
    QsciLexerJavaScript_RefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_qbase_refresh_properties(void* self) {
    QsciLexerJavaScript_QBaseRefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerJavaScript_OnRefreshProperties((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_style_bits_needed(void* self) {
    return QsciLexerJavaScript_StyleBitsNeeded((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_style_bits_needed(void* self) {
    return QsciLexerJavaScript_QBaseStyleBitsNeeded((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnStyleBitsNeeded((QsciLexerJavaScript*)self, (intptr_t)slot);
}

const char* q_scilexerjavascript_word_characters(void* self) {
    return QsciLexerJavaScript_WordCharacters((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_word_characters(void* self) {
    return QsciLexerJavaScript_QBaseWordCharacters((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerJavaScript_OnWordCharacters((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_SetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_QBaseSetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerJavaScript_OnSetAutoIndentStyle((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_color(void* self, void* c, int style) {
    QsciLexerJavaScript_SetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJavaScript_QBaseSetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetColor((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_SetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_QBaseSetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerJavaScript_OnSetEolFill((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_font(void* self, void* f, int style) {
    QsciLexerJavaScript_SetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJavaScript_QBaseSetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetFont((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_set_paper(void* self, void* c, int style) {
    QsciLexerJavaScript_SetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJavaScript_QBaseSetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetPaper((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_ReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_QBaseReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJavaScript_OnReadProperties((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_WriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_QBaseWriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerJavaScript_OnWriteProperties((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_event(void* self, void* event) {
    return QsciLexerJavaScript_Event((QsciLexerJavaScript*)self, (QEvent*)event);
}

bool q_scilexerjavascript_qbase_event(void* self, void* event) {
    return QsciLexerJavaScript_QBaseEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnEvent((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_EventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjavascript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_QBaseEventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjavascript_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerJavaScript_OnEventFilter((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_timer_event(void* self, void* event) {
    QsciLexerJavaScript_TimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_qbase_timer_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseTimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnTimerEvent((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_child_event(void* self, void* event) {
    QsciLexerJavaScript_ChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_qbase_child_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnChildEvent((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_custom_event(void* self, void* event) {
    QsciLexerJavaScript_CustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_qbase_custom_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseCustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnCustomEvent((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_connect_notify(void* self, void* signal) {
    QsciLexerJavaScript_ConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJavaScript_QBaseConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnConnectNotify((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_disconnect_notify(void* self, void* signal) {
    QsciLexerJavaScript_DisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJavaScript_QBaseDisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnDisconnectNotify((QsciLexerJavaScript*)self, (intptr_t)slot);
}

QObject* q_scilexerjavascript_sender(void* self) {
    return QsciLexerJavaScript_Sender((QsciLexerJavaScript*)self);
}

QObject* q_scilexerjavascript_qbase_sender(void* self) {
    return QsciLexerJavaScript_QBaseSender((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerJavaScript_OnSender((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_sender_signal_index(void* self) {
    return QsciLexerJavaScript_SenderSignalIndex((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_sender_signal_index(void* self) {
    return QsciLexerJavaScript_QBaseSenderSignalIndex((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerJavaScript_OnSenderSignalIndex((QsciLexerJavaScript*)self, (intptr_t)slot);
}

int32_t q_scilexerjavascript_receivers(void* self, const char* signal) {
    return QsciLexerJavaScript_Receivers((QsciLexerJavaScript*)self, signal);
}

int32_t q_scilexerjavascript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJavaScript_QBaseReceivers((QsciLexerJavaScript*)self, signal);
}

void q_scilexerjavascript_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerJavaScript_OnReceivers((QsciLexerJavaScript*)self, (intptr_t)slot);
}

bool q_scilexerjavascript_is_signal_connected(void* self, void* signal) {
    return QsciLexerJavaScript_IsSignalConnected((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

bool q_scilexerjavascript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJavaScript_QBaseIsSignalConnected((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerJavaScript_OnIsSignalConnected((QsciLexerJavaScript*)self, (intptr_t)slot);
}

void q_scilexerjavascript_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexerjavascript_delete(void* self) {
    QsciLexerJavaScript_Delete((QsciLexerJavaScript*)(self));
}
