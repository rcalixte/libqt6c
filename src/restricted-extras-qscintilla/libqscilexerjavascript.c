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
    return QsciLexerJavaScript_New();
}

QsciLexerJavaScript* q_scilexerjavascript_new2(void* parent) {
    return QsciLexerJavaScript_New2((QObject*)parent);
}

const QMetaObject* q_scilexerjavascript_meta_object(const void* self) {
    return QsciLexerJavaScript_MetaObject((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerJavaScript_OnMetaObject((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerjavascript_super_meta_object(const void* self) {
    return QsciLexerJavaScript_SuperMetaObject((QsciLexerJavaScript*)self);
}

void* q_scilexerjavascript_metacast(void* self, const char* param1) {
    return QsciLexerJavaScript_Metacast((QsciLexerJavaScript*)self, param1);
}

void q_scilexerjavascript_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerJavaScript_OnMetacast((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void* q_scilexerjavascript_super_metacast(void* self, const char* param1) {
    return QsciLexerJavaScript_SuperMetacast((QsciLexerJavaScript*)self, param1);
}

int32_t q_scilexerjavascript_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_Metacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

void q_scilexerjavascript_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerJavaScript_OnMetacall((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJavaScript_SuperMetacall((QsciLexerJavaScript*)self, param1, param2, param3);
}

const char* q_scilexerjavascript_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_language(const void* self) {
    return QsciLexerJavaScript_Language((QsciLexerJavaScript*)self);
}

QColor* q_scilexerjavascript_default_color(const void* self, int style) {
    return QsciLexerJavaScript_DefaultColor((QsciLexerJavaScript*)self, style);
}

bool q_scilexerjavascript_default_eol_fill(const void* self, int style) {
    return QsciLexerJavaScript_DefaultEolFill((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_default_font(const void* self, int style) {
    return QsciLexerJavaScript_DefaultFont((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_default_paper(const void* self, int style) {
    return QsciLexerJavaScript_DefaultPaper((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_keywords(const void* self, int set) {
    return QsciLexerJavaScript_Keywords((QsciLexerJavaScript*)self, set);
}

const char* q_scilexerjavascript_description(const void* self, int style) {
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

bool q_scilexerjavascript_fold_at_else(const void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_comments(const void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_compact(const void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_fold_preprocessor(const void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexerjavascript_style_preprocessor(const void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjavascript_dollars_allowed(const void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_triple_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_hash_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_back_quoted_strings(const void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexerjavascript_highlight_escape_sequences(const void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexerjavascript_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexerjavascript_verbatim_string_escape_sequences_allowed(const void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexerjavascript_block_end1(const void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjavascript_block_start1(const void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexerjavascript_block_start_keyword1(const void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexerjavascript_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerjavascript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerjavascript_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerjavascript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerjavascript_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerjavascript_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerjavascript_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerjavascript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerjavascript_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerjavascript_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjavascript_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjavascript_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
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

bool q_scilexerjavascript_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerjavascript_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjavascript_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerjavascript_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerjavascript_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerjavascript_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerjavascript_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerjavascript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerjavascript_thread(const void* self) {
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

libqt_list /* of QObject* */ q_scilexerjavascript_children(const void* self) {
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

QMetaObject__Connection* q_scilexerjavascript_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerjavascript_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjavascript_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjavascript_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerjavascript_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjavascript_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerjavascript_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerjavascript_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerjavascript_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerjavascript_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerjavascript_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerjavascript_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerjavascript_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_dynamic_property_names\n");
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

QBindingStorage* q_scilexerjavascript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjavascript_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjavascript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjavascript_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerjavascript_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerjavascript_inherits(const void* self, const char* classname) {
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

QMetaObject__Connection* q_scilexerjavascript_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerjavascript_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerjavascript_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerjavascript_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerjavascript_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerjavascript_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerjavascript_disconnect23(const void* self, const void* receiver, const char* member) {
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

void q_scilexerjavascript_super_set_fold_at_else(void* self, bool fold) {
    QsciLexerJavaScript_SuperSetFoldAtElse((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldAtElse((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_super_set_fold_comments(void* self, bool fold) {
    QsciLexerJavaScript_SuperSetFoldComments((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldComments((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_super_set_fold_compact(void* self, bool fold) {
    QsciLexerJavaScript_SuperSetFoldCompact((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldCompact((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_SetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_super_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerJavaScript_SuperSetFoldPreprocessor((QsciLexerJavaScript*)self, fold);
}

void q_scilexerjavascript_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetFoldPreprocessor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_SetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_super_set_style_preprocessor(void* self, bool style) {
    QsciLexerJavaScript_SuperSetStylePreprocessor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerJavaScript_OnSetStylePreprocessor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_lexer(const void* self) {
    return QsciLexerJavaScript_Lexer((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_super_lexer(const void* self) {
    return QsciLexerJavaScript_SuperLexer((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJavaScript_OnLexer((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_lexer_id(const void* self) {
    return QsciLexerJavaScript_LexerId((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_lexer_id(const void* self) {
    return QsciLexerJavaScript_SuperLexerId((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnLexerId((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_auto_completion_fillups(const void* self) {
    return QsciLexerJavaScript_AutoCompletionFillups((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_super_auto_completion_fillups(const void* self) {
    return QsciLexerJavaScript_SuperAutoCompletionFillups((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJavaScript_OnAutoCompletionFillups((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char** q_scilexerjavascript_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerJavaScript_AutoCompletionWordSeparators((QsciLexerJavaScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_auto_completion_word_separators\n");
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

const char** q_scilexerjavascript_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerJavaScript_SuperAutoCompletionWordSeparators((QsciLexerJavaScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerjavascript_auto_completion_word_separators\n");
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

void q_scilexerjavascript_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerJavaScript_OnAutoCompletionWordSeparators((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_end(const void* self, int* style) {
    return QsciLexerJavaScript_BlockEnd((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_super_block_end(const void* self, int* style) {
    return QsciLexerJavaScript_SuperBlockEnd((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJavaScript_OnBlockEnd((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_block_lookback(const void* self) {
    return QsciLexerJavaScript_BlockLookback((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_block_lookback(const void* self) {
    return QsciLexerJavaScript_SuperBlockLookback((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnBlockLookback((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_start(const void* self, int* style) {
    return QsciLexerJavaScript_BlockStart((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_super_block_start(const void* self, int* style) {
    return QsciLexerJavaScript_SuperBlockStart((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJavaScript_OnBlockStart((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_block_start_keyword(const void* self, int* style) {
    return QsciLexerJavaScript_BlockStartKeyword((QsciLexerJavaScript*)self, style);
}

const char* q_scilexerjavascript_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerJavaScript_SuperBlockStartKeyword((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerJavaScript_OnBlockStartKeyword((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_brace_style(const void* self) {
    return QsciLexerJavaScript_BraceStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_brace_style(const void* self) {
    return QsciLexerJavaScript_SuperBraceStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_brace_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnBraceStyle((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_case_sensitive(const void* self) {
    return QsciLexerJavaScript_CaseSensitive((QsciLexerJavaScript*)self);
}

bool q_scilexerjavascript_super_case_sensitive(const void* self) {
    return QsciLexerJavaScript_SuperCaseSensitive((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerJavaScript_OnCaseSensitive((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_color(const void* self, int style) {
    return QsciLexerJavaScript_Color((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_super_color(const void* self, int style) {
    return QsciLexerJavaScript_SuperColor((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnColor((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_eol_fill(const void* self, int style) {
    return QsciLexerJavaScript_EolFill((QsciLexerJavaScript*)self, style);
}

bool q_scilexerjavascript_super_eol_fill(const void* self, int style) {
    return QsciLexerJavaScript_SuperEolFill((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnEolFill((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QFont* q_scilexerjavascript_font(const void* self, int style) {
    return QsciLexerJavaScript_Font((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_super_font(const void* self, int style) {
    return QsciLexerJavaScript_SuperFont((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnFont((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_indentation_guide_view(const void* self) {
    return QsciLexerJavaScript_IndentationGuideView((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_indentation_guide_view(const void* self) {
    return QsciLexerJavaScript_SuperIndentationGuideView((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnIndentationGuideView((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_default_style(const void* self) {
    return QsciLexerJavaScript_DefaultStyle((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_default_style(const void* self) {
    return QsciLexerJavaScript_SuperDefaultStyle((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnDefaultStyle((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_paper(const void* self, int style) {
    return QsciLexerJavaScript_Paper((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_super_paper(const void* self, int style) {
    return QsciLexerJavaScript_SuperPaper((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnPaper((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_default_color2(const void* self, int style) {
    return QsciLexerJavaScript_DefaultColor2((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_super_default_color2(const void* self, int style) {
    return QsciLexerJavaScript_SuperDefaultColor2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnDefaultColor2((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QFont* q_scilexerjavascript_default_font2(const void* self, int style) {
    return QsciLexerJavaScript_DefaultFont2((QsciLexerJavaScript*)self, style);
}

QFont* q_scilexerjavascript_super_default_font2(const void* self, int style) {
    return QsciLexerJavaScript_SuperDefaultFont2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnDefaultFont2((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

QColor* q_scilexerjavascript_default_paper2(const void* self, int style) {
    return QsciLexerJavaScript_DefaultPaper2((QsciLexerJavaScript*)self, style);
}

QColor* q_scilexerjavascript_super_default_paper2(const void* self, int style) {
    return QsciLexerJavaScript_SuperDefaultPaper2((QsciLexerJavaScript*)self, style);
}

void q_scilexerjavascript_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerJavaScript_OnDefaultPaper2((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_SetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_super_set_editor(void* self, void* editor) {
    QsciLexerJavaScript_SuperSetEditor((QsciLexerJavaScript*)self, (QsciScintilla*)editor);
}

void q_scilexerjavascript_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnSetEditor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_refresh_properties(void* self) {
    QsciLexerJavaScript_RefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_super_refresh_properties(void* self) {
    QsciLexerJavaScript_SuperRefreshProperties((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_refresh_properties(void* self, void (*callback)(void*)) {
    QsciLexerJavaScript_OnRefreshProperties((QsciLexerJavaScript*)self, (intptr_t)callback);
}

int32_t q_scilexerjavascript_style_bits_needed(const void* self) {
    return QsciLexerJavaScript_StyleBitsNeeded((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_super_style_bits_needed(const void* self) {
    return QsciLexerJavaScript_SuperStyleBitsNeeded((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerJavaScript_OnStyleBitsNeeded((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

const char* q_scilexerjavascript_word_characters(const void* self) {
    return QsciLexerJavaScript_WordCharacters((QsciLexerJavaScript*)self);
}

const char* q_scilexerjavascript_super_word_characters(const void* self) {
    return QsciLexerJavaScript_SuperWordCharacters((QsciLexerJavaScript*)self);
}

void q_scilexerjavascript_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerJavaScript_OnWordCharacters((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_SetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJavaScript_SuperSetAutoIndentStyle((QsciLexerJavaScript*)self, autoindentstyle);
}

void q_scilexerjavascript_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerJavaScript_OnSetAutoIndentStyle((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_color(void* self, const void* c, int style) {
    QsciLexerJavaScript_SetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_super_set_color(void* self, const void* c, int style) {
    QsciLexerJavaScript_SuperSetColor((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJavaScript_OnSetColor((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_SetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJavaScript_SuperSetEolFill((QsciLexerJavaScript*)self, eoffill, style);
}

void q_scilexerjavascript_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerJavaScript_OnSetEolFill((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_font(void* self, const void* f, int style) {
    QsciLexerJavaScript_SetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_super_set_font(void* self, const void* f, int style) {
    QsciLexerJavaScript_SuperSetFont((QsciLexerJavaScript*)self, (QFont*)f, style);
}

void q_scilexerjavascript_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJavaScript_OnSetFont((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_set_paper(void* self, const void* c, int style) {
    QsciLexerJavaScript_SetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_super_set_paper(void* self, const void* c, int style) {
    QsciLexerJavaScript_SuperSetPaper((QsciLexerJavaScript*)self, (QColor*)c, style);
}

void q_scilexerjavascript_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerJavaScript_OnSetPaper((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_ReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_SuperReadProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJavaScript_OnReadProperties((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_WriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjavascript_super_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerJavaScript_SuperWriteProperties((QsciLexerJavaScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjavascript_on_write_properties(const void* self, bool (*callback)(const void*, void*, const char*)) {
    QsciLexerJavaScript_OnWriteProperties((const QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_event(void* self, void* event) {
    return QsciLexerJavaScript_Event((QsciLexerJavaScript*)self, (QEvent*)event);
}

bool q_scilexerjavascript_super_event(void* self, void* event) {
    return QsciLexerJavaScript_SuperEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

bool q_scilexerjavascript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_EventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjavascript_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJavaScript_SuperEventFilter((QsciLexerJavaScript*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjavascript_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerJavaScript_OnEventFilter((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_timer_event(void* self, void* event) {
    QsciLexerJavaScript_TimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_super_timer_event(void* self, void* event) {
    QsciLexerJavaScript_SuperTimerEvent((QsciLexerJavaScript*)self, (QTimerEvent*)event);
}

void q_scilexerjavascript_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnTimerEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_child_event(void* self, void* event) {
    QsciLexerJavaScript_ChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_super_child_event(void* self, void* event) {
    QsciLexerJavaScript_SuperChildEvent((QsciLexerJavaScript*)self, (QChildEvent*)event);
}

void q_scilexerjavascript_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnChildEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_custom_event(void* self, void* event) {
    QsciLexerJavaScript_CustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_super_custom_event(void* self, void* event) {
    QsciLexerJavaScript_SuperCustomEvent((QsciLexerJavaScript*)self, (QEvent*)event);
}

void q_scilexerjavascript_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJavaScript_OnCustomEvent((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_connect_notify(void* self, const void* signal) {
    QsciLexerJavaScript_ConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_super_connect_notify(void* self, const void* signal) {
    QsciLexerJavaScript_SuperConnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerJavaScript_OnConnectNotify((QsciLexerJavaScript*)self, (intptr_t)callback);
}

void q_scilexerjavascript_disconnect_notify(void* self, const void* signal) {
    QsciLexerJavaScript_DisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerJavaScript_SuperDisconnectNotify((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerJavaScript_OnDisconnectNotify((QsciLexerJavaScript*)self, (intptr_t)callback);
}

char* q_scilexerjavascript_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerJavaScript_TextAsBytes((QsciLexerJavaScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjavascript_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJavaScript_BytesAsText((QsciLexerJavaScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerjavascript_sender(const void* self) {
    return QsciLexerJavaScript_Sender((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_sender_signal_index(const void* self) {
    return QsciLexerJavaScript_SenderSignalIndex((QsciLexerJavaScript*)self);
}

int32_t q_scilexerjavascript_receivers(const void* self, const char* signal) {
    return QsciLexerJavaScript_Receivers((QsciLexerJavaScript*)self, signal);
}

bool q_scilexerjavascript_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerJavaScript_IsSignalConnected((QsciLexerJavaScript*)self, (QMetaMethod*)signal);
}

void q_scilexerjavascript_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerjavascript_delete(void* self) {
    QsciLexerJavaScript_Delete((QsciLexerJavaScript*)(self));
}
