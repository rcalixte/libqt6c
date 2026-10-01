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
    return QsciLexerJava_New();
}

QsciLexerJava* q_scilexerjava_new2(void* parent) {
    return QsciLexerJava_New2((QObject*)parent);
}

const QMetaObject* q_scilexerjava_meta_object(const void* self) {
    return QsciLexerJava_MetaObject((QsciLexerJava*)self);
}

void q_scilexerjava_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerJava_OnMetaObject((QsciLexerJava*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerjava_super_meta_object(const void* self) {
    return QsciLexerJava_SuperMetaObject((QsciLexerJava*)self);
}

void* q_scilexerjava_metacast(void* self, const char* param1) {
    return QsciLexerJava_Metacast((QsciLexerJava*)self, param1);
}

void q_scilexerjava_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerJava_OnMetacast((QsciLexerJava*)self, (intptr_t)callback);
}

void* q_scilexerjava_super_metacast(void* self, const char* param1) {
    return QsciLexerJava_SuperMetacast((QsciLexerJava*)self, param1);
}

int32_t q_scilexerjava_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJava_Metacall((QsciLexerJava*)self, param1, param2, param3);
}

void q_scilexerjava_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerJava_OnMetacall((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJava_SuperMetacall((QsciLexerJava*)self, param1, param2, param3);
}

const char* q_scilexerjava_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_language(const void* self) {
    return QsciLexerJava_Language((QsciLexerJava*)self);
}

const char* q_scilexerjava_keywords(const void* self, int set) {
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

QColor* q_scilexerjava_default_color(const void* self, int style) {
    return QsciLexerCPP_DefaultColor((QsciLexerCPP*)self, style);
}

QFont* q_scilexerjava_default_font(const void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

QColor* q_scilexerjava_default_paper(const void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

bool q_scilexerjava_fold_at_else(const void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_comments(const void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_compact(const void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexerjava_fold_preprocessor(const void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexerjava_style_preprocessor(const void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexerjava_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjava_dollars_allowed(const void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_triple_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_hash_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_back_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjava_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjava_highlight_escape_sequences(const void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexerjava_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjava_verbatim_string_escape_sequences_allowed(const void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexerjava_block_end1(const void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjava_block_start1(const void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjava_block_start_keyword1(const void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexerjava_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerjava_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerjava_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerjava_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerjava_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerjava_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerjava_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerjava_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerjava_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerjava_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjava_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjava_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjava_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjava_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjava_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
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

bool q_scilexerjava_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerjava_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerjava_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerjava_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerjava_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerjava_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerjava_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerjava_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerjava_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerjava_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerjava_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerjava_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerjava_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerjava_children(const void* self) {
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

QMetaObject__Connection* q_scilexerjava_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerjava_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjava_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjava_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerjava_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjava_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerjava_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerjava_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerjava_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerjava_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerjava_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerjava_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerjava_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_dynamic_property_names\n");
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

QBindingStorage* q_scilexerjava_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjava_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjava_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjava_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerjava_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerjava_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerjava_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerjava_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerjava_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerjava_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerjava_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerjava_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerjava_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerjava_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerjava_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerjava_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

void q_scilexerjava_super_set_fold_at_else(void* self, bool fold) {
    QsciLexerJava_SuperSetFoldAtElse((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldAtElse((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_SetFoldComments((QsciLexerJava*)self, fold);
}

void q_scilexerjava_super_set_fold_comments(void* self, bool fold) {
    QsciLexerJava_SuperSetFoldComments((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldComments((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_SetFoldCompact((QsciLexerJava*)self, fold);
}

void q_scilexerjava_super_set_fold_compact(void* self, bool fold) {
    QsciLexerJava_SuperSetFoldCompact((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldCompact((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_SetFoldPreprocessor((QsciLexerJava*)self, fold);
}

void q_scilexerjava_super_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJava_SuperSetFoldPreprocessor((QsciLexerJava*)self, fold);
}

void q_scilexerjava_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetFoldPreprocessor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_SetStylePreprocessor((QsciLexerJava*)self, style);
}

void q_scilexerjava_super_set_style_preprocessor(void* self, bool style) {
    QsciLexerJava_SuperSetStylePreprocessor((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJava_OnSetStylePreprocessor((QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_lexer(const void* self) {
    return QsciLexerJava_Lexer((QsciLexerJava*)self);
}

const char* q_scilexerjava_super_lexer(const void* self) {
    return QsciLexerJava_SuperLexer((QsciLexerJava*)self);
}

void q_scilexerjava_on_lexer(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJava_OnLexer((const QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_lexer_id(const void* self) {
    return QsciLexerJava_LexerId((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_lexer_id(const void* self) {
    return QsciLexerJava_SuperLexerId((QsciLexerJava*)self);
}

void q_scilexerjava_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnLexerId((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_auto_completion_fillups(const void* self) {
    return QsciLexerJava_AutoCompletionFillups((QsciLexerJava*)self);
}

const char* q_scilexerjava_super_auto_completion_fillups(const void* self) {
    return QsciLexerJava_SuperAutoCompletionFillups((QsciLexerJava*)self);
}

void q_scilexerjava_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJava_OnAutoCompletionFillups((const QsciLexerJava*)self, (intptr_t)callback);
}

const char** q_scilexerjava_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerJava_AutoCompletionWordSeparators((QsciLexerJava*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_auto_completion_word_separators\n");
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

const char** q_scilexerjava_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerJava_SuperAutoCompletionWordSeparators((QsciLexerJava*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjava_auto_completion_word_separators\n");
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

void q_scilexerjava_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerJava_OnAutoCompletionWordSeparators((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_end(const void* self, int* style) {
    return QsciLexerJava_BlockEnd((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_super_block_end(const void* self, int* style) {
    return QsciLexerJava_SuperBlockEnd((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJava_OnBlockEnd((const QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_block_lookback(const void* self) {
    return QsciLexerJava_BlockLookback((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_block_lookback(const void* self) {
    return QsciLexerJava_SuperBlockLookback((QsciLexerJava*)self);
}

void q_scilexerjava_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnBlockLookback((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_start(const void* self, int* style) {
    return QsciLexerJava_BlockStart((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_super_block_start(const void* self, int* style) {
    return QsciLexerJava_SuperBlockStart((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJava_OnBlockStart((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_block_start_keyword(const void* self, int* style) {
    return QsciLexerJava_BlockStartKeyword((QsciLexerJava*)self, style);
}

const char* q_scilexerjava_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerJava_SuperBlockStartKeyword((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJava_OnBlockStartKeyword((const QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_brace_style(const void* self) {
    return QsciLexerJava_BraceStyle((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_brace_style(const void* self) {
    return QsciLexerJava_SuperBraceStyle((QsciLexerJava*)self);
}

void q_scilexerjava_on_brace_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnBraceStyle((const QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_case_sensitive(const void* self) {
    return QsciLexerJava_CaseSensitive((QsciLexerJava*)self);
}

bool q_scilexerjava_super_case_sensitive(const void* self) {
    return QsciLexerJava_SuperCaseSensitive((QsciLexerJava*)self);
}

void q_scilexerjava_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerJava_OnCaseSensitive((const QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_color(const void* self, int style) {
    return QsciLexerJava_Color((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_super_color(const void* self, int style) {
    return QsciLexerJava_SuperColor((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJava_OnColor((const QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_eol_fill(const void* self, int style) {
    return QsciLexerJava_EolFill((QsciLexerJava*)self, style);
}

bool q_scilexerjava_super_eol_fill(const void* self, int style) {
    return QsciLexerJava_SuperEolFill((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerJava_OnEolFill((const QsciLexerJava*)self, (intptr_t)callback);
}

QFont* q_scilexerjava_font(const void* self, int style) {
    return QsciLexerJava_Font((QsciLexerJava*)self, style);
}

QFont* q_scilexerjava_super_font(const void* self, int style) {
    return QsciLexerJava_SuperFont((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerJava_OnFont((const QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_indentation_guide_view(const void* self) {
    return QsciLexerJava_IndentationGuideView((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_indentation_guide_view(const void* self) {
    return QsciLexerJava_SuperIndentationGuideView((QsciLexerJava*)self);
}

void q_scilexerjava_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnIndentationGuideView((const QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_default_style(const void* self) {
    return QsciLexerJava_DefaultStyle((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_default_style(const void* self) {
    return QsciLexerJava_SuperDefaultStyle((QsciLexerJava*)self);
}

void q_scilexerjava_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnDefaultStyle((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_description(const void* self, int style) {
    libqt_string _str = QsciLexerJava_Description((QsciLexerJava*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjava_on_description(const void* self, const char* (*callback)(const void*, int)) {
    QsciLexerJava_OnDescription((const QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_paper(const void* self, int style) {
    return QsciLexerJava_Paper((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_super_paper(const void* self, int style) {
    return QsciLexerJava_SuperPaper((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJava_OnPaper((const QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_default_color2(const void* self, int style) {
    return QsciLexerJava_DefaultColor2((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_super_default_color2(const void* self, int style) {
    return QsciLexerJava_SuperDefaultColor2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJava_OnDefaultColor2((const QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_default_eol_fill(const void* self, int style) {
    return QsciLexerJava_DefaultEolFill((QsciLexerJava*)self, style);
}

bool q_scilexerjava_super_default_eol_fill(const void* self, int style) {
    return QsciLexerJava_SuperDefaultEolFill((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerJava_OnDefaultEolFill((const QsciLexerJava*)self, (intptr_t)callback);
}

QFont* q_scilexerjava_default_font2(const void* self, int style) {
    return QsciLexerJava_DefaultFont2((QsciLexerJava*)self, style);
}

QFont* q_scilexerjava_super_default_font2(const void* self, int style) {
    return QsciLexerJava_SuperDefaultFont2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerJava_OnDefaultFont2((const QsciLexerJava*)self, (intptr_t)callback);
}

QColor* q_scilexerjava_default_paper2(const void* self, int style) {
    return QsciLexerJava_DefaultPaper2((QsciLexerJava*)self, style);
}

QColor* q_scilexerjava_super_default_paper2(const void* self, int style) {
    return QsciLexerJava_SuperDefaultPaper2((QsciLexerJava*)self, style);
}

void q_scilexerjava_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJava_OnDefaultPaper2((const QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_editor(void* self, void* editor) {
    QsciLexerJava_SetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

void q_scilexerjava_super_set_editor(void* self, void* editor) {
    QsciLexerJava_SuperSetEditor((QsciLexerJava*)self, (QsciScintilla*)editor);
}

void q_scilexerjava_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnSetEditor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_refresh_properties(void* self) {
    QsciLexerJava_RefreshProperties((QsciLexerJava*)self);
}

void q_scilexerjava_super_refresh_properties(void* self) {
    QsciLexerJava_SuperRefreshProperties((QsciLexerJava*)self);
}

void q_scilexerjava_on_refresh_properties(void* self, void (*callback)(void*)) {
    QsciLexerJava_OnRefreshProperties((QsciLexerJava*)self, (intptr_t)callback);
}

int32_t q_scilexerjava_style_bits_needed(const void* self) {
    return QsciLexerJava_StyleBitsNeeded((QsciLexerJava*)self);
}

int32_t q_scilexerjava_super_style_bits_needed(const void* self) {
    return QsciLexerJava_SuperStyleBitsNeeded((QsciLexerJava*)self);
}

void q_scilexerjava_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJava_OnStyleBitsNeeded((const QsciLexerJava*)self, (intptr_t)callback);
}

const char* q_scilexerjava_word_characters(const void* self) {
    return QsciLexerJava_WordCharacters((QsciLexerJava*)self);
}

const char* q_scilexerjava_super_word_characters(const void* self) {
    return QsciLexerJava_SuperWordCharacters((QsciLexerJava*)self);
}

void q_scilexerjava_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJava_OnWordCharacters((const QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_SetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

void q_scilexerjava_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJava_SuperSetAutoIndentStyle((QsciLexerJava*)self, autoindentstyle);
}

void q_scilexerjava_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerJava_OnSetAutoIndentStyle((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_color(void* self, const void* c, int style) {
    QsciLexerJava_SetColor((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_super_set_color(void* self, const void* c, int style) {
    QsciLexerJava_SuperSetColor((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJava_OnSetColor((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_SetEolFill((QsciLexerJava*)self, eoffill, style);
}

void q_scilexerjava_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJava_SuperSetEolFill((QsciLexerJava*)self, eoffill, style);
}

void q_scilexerjava_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerJava_OnSetEolFill((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_font(void* self, const void* f, int style) {
    QsciLexerJava_SetFont((QsciLexerJava*)self, (QFont*)f, style);
}

void q_scilexerjava_super_set_font(void* self, const void* f, int style) {
    QsciLexerJava_SuperSetFont((QsciLexerJava*)self, (QFont*)f, style);
}

void q_scilexerjava_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJava_OnSetFont((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_set_paper(void* self, const void* c, int style) {
    QsciLexerJava_SetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_super_set_paper(void* self, const void* c, int style) {
    QsciLexerJava_SuperSetPaper((QsciLexerJava*)self, (QColor*)c, style);
}

void q_scilexerjava_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJava_OnSetPaper((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_ReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjava_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJava_SuperReadProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjava_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJava_OnReadProperties((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerJava_WriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjava_super_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerJava_SuperWriteProperties((QsciLexerJava*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjava_on_write_properties(const void* self, bool (*callback)(const void*, void*, const char*)) {
    QsciLexerJava_OnWriteProperties((const QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_event(void* self, void* event) {
    return QsciLexerJava_Event((QsciLexerJava*)self, (QEvent*)event);
}

bool q_scilexerjava_super_event(void* self, void* event) {
    return QsciLexerJava_SuperEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJava_OnEvent((QsciLexerJava*)self, (intptr_t)callback);
}

bool q_scilexerjava_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_EventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjava_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJava_SuperEventFilter((QsciLexerJava*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjava_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerJava_OnEventFilter((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_timer_event(void* self, void* event) {
    QsciLexerJava_TimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

void q_scilexerjava_super_timer_event(void* self, void* event) {
    QsciLexerJava_SuperTimerEvent((QsciLexerJava*)self, (QTimerEvent*)event);
}

void q_scilexerjava_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnTimerEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_child_event(void* self, void* event) {
    QsciLexerJava_ChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

void q_scilexerjava_super_child_event(void* self, void* event) {
    QsciLexerJava_SuperChildEvent((QsciLexerJava*)self, (QChildEvent*)event);
}

void q_scilexerjava_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnChildEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_custom_event(void* self, void* event) {
    QsciLexerJava_CustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_super_custom_event(void* self, void* event) {
    QsciLexerJava_SuperCustomEvent((QsciLexerJava*)self, (QEvent*)event);
}

void q_scilexerjava_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJava_OnCustomEvent((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_connect_notify(void* self, const void* signal) {
    QsciLexerJava_ConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_super_connect_notify(void* self, const void* signal) {
    QsciLexerJava_SuperConnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerJava_OnConnectNotify((QsciLexerJava*)self, (intptr_t)callback);
}

void q_scilexerjava_disconnect_notify(void* self, const void* signal) {
    QsciLexerJava_DisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerJava_SuperDisconnectNotify((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerJava_OnDisconnectNotify((QsciLexerJava*)self, (intptr_t)callback);
}

char* q_scilexerjava_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerJava_TextAsBytes((QsciLexerJava*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjava_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJava_BytesAsText((QsciLexerJava*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerjava_sender(const void* self) {
    return QsciLexerJava_Sender((QsciLexerJava*)self);
}

int32_t q_scilexerjava_sender_signal_index(const void* self) {
    return QsciLexerJava_SenderSignalIndex((QsciLexerJava*)self);
}

int32_t q_scilexerjava_receivers(const void* self, const char* signal) {
    return QsciLexerJava_Receivers((QsciLexerJava*)self, signal);
}

bool q_scilexerjava_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerJava_IsSignalConnected((QsciLexerJava*)self, (QMetaMethod*)signal);
}

void q_scilexerjava_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerjava_delete(void* self) {
    QsciLexerJava_Delete((QsciLexerJava*)(self));
}
