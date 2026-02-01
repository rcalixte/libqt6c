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

void q_scilexerjavascript_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerJavaScript_OnMetaObject((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerjavascript_qbase_meta_object(void* self) {
    return QsciLexerJavaScript_QBaseMetaObject((QsciLexerJavaScript*)self);
}

void* q_scilexerjavascript_metacast(void* self, const char* param1) {
    return QsciLexerJavaScript_Metacast((QsciLexerJavaScript*)self, param1);
}

void q_scilexerjavascript_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerJavaScript_OnMetacast((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void* q_scilexerjavascript_qbase_metacast(void* self, const char* param1) {
    return QsciLexerJavaScript_QBaseMetacast((QsciLexerJavaScript*)self, param1);
}

int32_t q_scilexerjavascript_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_Metacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

void q_scilexerjavascript_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerJavaScript_OnMetacall((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_QBaseMetacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

const char* q_scilexerjavascript_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void q_scilexerjavascript_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjavascript_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerjavascript_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
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

bool q_scilexerjavascript_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerjavascript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerjavascript_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerjavascript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerjavascript_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
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

QMetaObject__Connection* q_scilexerjavascript_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerjavascript_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjavascript_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjavascript_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerjavascript_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjavascript_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerjavascript_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerjavascript_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_dynamic_property_names\n");
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

QBindingStorage* q_scilexerjavascript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjavascript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjavascript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjavascript_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
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

int32_t q_scilexerjavascript_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerjavascript_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerjavascript_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerjavascript_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerjavascript_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerjavascript_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerjavascript_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerjavascript_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerjavascript_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerjavascript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerjavascript_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_at_else(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldAtElse((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldAtElse((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldAtElse((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldComments((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldCompact((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_QBaseSetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldPreprocessor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_SetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_QBaseSetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetStylePreprocessor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_lexer(void* self) {
    return QsciLexerJavaScript_Lexer((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_lexer(void* self) {
    return QsciLexerJavaScript_QBaseLexer((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer(void* self, const char* (*callback)()) {
    QsciLexerJavaScript_OnLexer((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_lexer_id(void* self) {
    return QsciLexerJavaScript_LexerId((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_lexer_id(void* self) {
    return QsciLexerJavaScript_QBaseLexerId((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnLexerId((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_auto_completion_fillups(void* self) {
    return QsciLexerJavaScript_AutoCompletionFillups((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJavaScript_QBaseAutoCompletionFillups((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerJavaScript_OnAutoCompletionFillups((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char** q_scilexerjavascript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJavaScript_AutoCompletionWordSeparators((QsciLexerJavaScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_auto_completion_word_separators\n");
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

const char** q_scilexerjavascript_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJavaScript_QBaseAutoCompletionWordSeparators((QsciLexerJavaScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_auto_completion_word_separators\n");
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

void q_scilexerjavascript_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerJavaScript_OnAutoCompletionWordSeparators((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_end(void* self, int* style) {
    return QsciLexerJavaScript_BlockEnd((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_end(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockEnd((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJavaScript_OnBlockEnd((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_block_lookback(void* self) {
    return QsciLexerJavaScript_BlockLookback((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_block_lookback(void* self) {
    return QsciLexerJavaScript_QBaseBlockLookback((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnBlockLookback((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_start(void* self, int* style) {
    return QsciLexerJavaScript_BlockStart((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_start(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockStart((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJavaScript_OnBlockStart((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_start_keyword(void* self, int* style) {
    return QsciLexerJavaScript_BlockStartKeyword((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJavaScript_QBaseBlockStartKeyword((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJavaScript_OnBlockStartKeyword((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_brace_style(void* self) {
    return QsciLexerJavaScript_BraceStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_brace_style(void* self) {
    return QsciLexerJavaScript_QBaseBraceStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnBraceStyle((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_case_sensitive(void* self) {
    return QsciLexerJavaScript_CaseSensitive((QsciLexerJavaScript*)self);
}

bool q_scilexerjavascript_qbase_case_sensitive(void* self) {
    return QsciLexerJavaScript_QBaseCaseSensitive((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerJavaScript_OnCaseSensitive((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_color(void* self, int style) {
    return QsciLexerJavaScript_Color((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_color(void* self, int style) {
    return QsciLexerJavaScript_QBaseColor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnColor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_eol_fill(void* self, int style) {
    return QsciLexerJavaScript_EolFill((QsciLexerJavaScript*)self, style);
}

bool q_scilexerjavascript_qbase_eol_fill(void* self, int style) {
    return QsciLexerJavaScript_QBaseEolFill((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerJavaScript_OnEolFill((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QFont* q_scilexerjavascript_font(void* self, int style) {
    return QsciLexerJavaScript_Font((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_qbase_font(void* self, int style) {
    return QsciLexerJavaScript_QBaseFont((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnFont((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_indentation_guide_view(void* self) {
    return QsciLexerJavaScript_IndentationGuideView((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_indentation_guide_view(void* self) {
    return QsciLexerJavaScript_QBaseIndentationGuideView((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnIndentationGuideView((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_default_style(void* self) {
    return QsciLexerJavaScript_DefaultStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_default_style(void* self) {
    return QsciLexerJavaScript_QBaseDefaultStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnDefaultStyle((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_paper(void* self, int style) {
    return QsciLexerJavaScript_Paper((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_paper(void* self, int style) {
    return QsciLexerJavaScript_QBasePaper((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnPaper((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_default_color2(void* self, int style) {
    return QsciLexerJavaScript_DefaultColor2((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_default_color2(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultColor2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnDefaultColor2((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QFont* q_scilexerjavascript_default_font2(void* self, int style) {
    return QsciLexerJavaScript_DefaultFont2((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_qbase_default_font2(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultFont2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnDefaultFont2((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_default_paper2(void* self, int style) {
    return QsciLexerJavaScript_DefaultPaper2((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_qbase_default_paper2(void* self, int style) {
    return QsciLexerJavaScript_QBaseDefaultPaper2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJavaScript_OnDefaultPaper2((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_SetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_qbase_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_QBaseSetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnSetEditor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_refresh_properties(void* self) {
    QsciLexerJavaScript_RefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_qbase_refresh_properties(void* self) {
    QsciLexerJavaScript_QBaseRefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerJavaScript_OnRefreshProperties((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_style_bits_needed(void* self) {
    return QsciLexerJavaScript_StyleBitsNeeded((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_style_bits_needed(void* self) {
    return QsciLexerJavaScript_QBaseStyleBitsNeeded((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnStyleBitsNeeded((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_word_characters(void* self) {
    return QsciLexerJavaScript_WordCharacters((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_qbase_word_characters(void* self) {
    return QsciLexerJavaScript_QBaseWordCharacters((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerJavaScript_OnWordCharacters((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_SetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_QBaseSetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerJavaScript_OnSetAutoIndentStyle((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_color(void* self, void* c, int style) {
    QsciLexerJavaScript_SetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJavaScript_QBaseSetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetColor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_SetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_QBaseSetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerJavaScript_OnSetEolFill((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_font(void* self, void* f, int style) {
    QsciLexerJavaScript_SetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJavaScript_QBaseSetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetFont((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_paper(void* self, void* c, int style) {
    QsciLexerJavaScript_SetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJavaScript_QBaseSetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJavaScript_OnSetPaper((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_ReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_QBaseReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJavaScript_OnReadProperties((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_WriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_QBaseWriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJavaScript_OnWriteProperties((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_event(void* self, void* event) {
    return QsciLexerJavaScript_Event((QsciLexerJavaScript*)self, (QEvent*)event);
}

bool q_scilexerjavascript_qbase_event(void* self, void* event) {
    return QsciLexerJavaScript_QBaseEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_EventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjavascript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_QBaseEventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjavascript_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerJavaScript_OnEventFilter((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_timer_event(void* self, void* event) {
    QsciLexerJavaScript_TimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_qbase_timer_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseTimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnTimerEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_child_event(void* self, void* event) {
    QsciLexerJavaScript_ChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_qbase_child_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnChildEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_custom_event(void* self, void* event) {
    QsciLexerJavaScript_CustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_qbase_custom_event(void* self, void* event) {
    QsciLexerJavaScript_QBaseCustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnCustomEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_connect_notify(void* self, void* signal) {
    QsciLexerJavaScript_ConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJavaScript_QBaseConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnConnectNotify((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_disconnect_notify(void* self, void* signal) {
    QsciLexerJavaScript_DisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJavaScript_QBaseDisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnDisconnectNotify((QsciLexerJavaScript*)self, (intptr_t)callback);
}

char* q_scilexerjavascript_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJavaScript_TextAsBytes((QsciLexerJavaScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerjavascript_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJavaScript_QBaseTextAsBytes((QsciLexerJavaScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjavascript_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerJavaScript_OnTextAsBytes((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJavaScript_BytesAsText((QsciLexerJavaScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJavaScript_QBaseBytesAsText((QsciLexerJavaScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjavascript_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerJavaScript_OnBytesAsText((QsciLexerJavaScript*)self, (intptr_t)callback);
}

QObject* q_scilexerjavascript_sender(void* self) {
    return QsciLexerJavaScript_Sender((QsciLexerJavaScript*)self);
}

QObject* q_scilexerjavascript_qbase_sender(void* self) {
    return QsciLexerJavaScript_QBaseSender((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerJavaScript_OnSender((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_sender_signal_index(void* self) {
    return QsciLexerJavaScript_SenderSignalIndex((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_qbase_sender_signal_index(void* self) {
    return QsciLexerJavaScript_QBaseSenderSignalIndex((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerJavaScript_OnSenderSignalIndex((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_receivers(void* self, const char* signal) {
    return QsciLexerJavaScript_Receivers((QsciLexerJavaScript*)self, signal);
}

int32_t q_scilexerjavascript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJavaScript_QBaseReceivers((QsciLexerJavaScript*)self, signal);
}

void q_scilexerjavascript_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerJavaScript_OnReceivers((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_is_signal_connected(void* self, void* signal) {
    return QsciLexerJavaScript_IsSignalConnected((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

bool q_scilexerjavascript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJavaScript_QBaseIsSignalConnected((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnIsSignalConnected((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerjavascript_delete(void* self) {
    QsciLexerJavaScript_Delete((QsciLexerJavaScript*)(self));
}
