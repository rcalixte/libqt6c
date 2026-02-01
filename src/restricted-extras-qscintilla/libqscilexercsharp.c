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
#include "libqscilexercsharp.hpp"
#include "libqscilexercsharp.h"

QsciLexerCSharp* q_scilexercsharp_new() {
    return QsciLexerCSharp_new();
}

QsciLexerCSharp* q_scilexercsharp_new2(void* parent) {
    return QsciLexerCSharp_new2((QObject*)parent);
}

const QMetaObject* q_scilexercsharp_meta_object(void* self) {
    return QsciLexerCSharp_MetaObject((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerCSharp_OnMetaObject((QsciLexerCSharp*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexercsharp_qbase_meta_object(void* self) {
    return QsciLexerCSharp_QBaseMetaObject((QsciLexerCSharp*)self);
}

void* q_scilexercsharp_metacast(void* self, const char* param1) {
    return QsciLexerCSharp_Metacast((QsciLexerCSharp*)self, param1);
}

void q_scilexercsharp_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerCSharp_OnMetacast((QsciLexerCSharp*)self, (intptr_t)callback);
}

void* q_scilexercsharp_qbase_metacast(void* self, const char* param1) {
    return QsciLexerCSharp_QBaseMetacast((QsciLexerCSharp*)self, param1);
}

int32_t q_scilexercsharp_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCSharp_Metacall((QsciLexerCSharp*)self, param1, param2, param3);
}

void q_scilexercsharp_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerCSharp_OnMetacall((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCSharp_QBaseMetacall((QsciLexerCSharp*)self, param1, param2, param3);
}

const char* q_scilexercsharp_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercsharp_language(void* self) {
    return QsciLexerCSharp_Language((QsciLexerCSharp*)self);
}

QColor* q_scilexercsharp_default_color(void* self, int style) {
    return QsciLexerCSharp_DefaultColor((QsciLexerCSharp*)self, style);
}

bool q_scilexercsharp_default_eol_fill(void* self, int style) {
    return QsciLexerCSharp_DefaultEolFill((QsciLexerCSharp*)self, style);
}

QFont* q_scilexercsharp_default_font(void* self, int style) {
    return QsciLexerCSharp_DefaultFont((QsciLexerCSharp*)self, style);
}

QColor* q_scilexercsharp_default_paper(void* self, int style) {
    return QsciLexerCSharp_DefaultPaper((QsciLexerCSharp*)self, style);
}

const char* q_scilexercsharp_keywords(void* self, int set) {
    return QsciLexerCSharp_Keywords((QsciLexerCSharp*)self, set);
}

const char* q_scilexercsharp_description(void* self, int style) {
    libqt_string _str = QsciLexerCSharp_Description((QsciLexerCSharp*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercsharp_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercsharp_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scilexercsharp_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexercsharp_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexercsharp_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexercsharp_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexercsharp_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercsharp_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercsharp_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercsharp_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexercsharp_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexercsharp_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexercsharp_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexercsharp_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexercsharp_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexercsharp_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexercsharp_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexercsharp_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercsharp_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexercsharp_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercsharp_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercsharp_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercsharp_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercsharp_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercsharp_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercsharp_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercsharp_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercsharp_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercsharp_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercsharp_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercsharp_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercsharp_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercsharp_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercsharp_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercsharp_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercsharp_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexercsharp_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercsharp_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercsharp_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercsharp_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercsharp_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercsharp_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercsharp_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercsharp_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercsharp_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercsharp_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexercsharp_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercsharp_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexercsharp_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexercsharp_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexercsharp_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercsharp_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercsharp_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercsharp_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercsharp_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercsharp_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexercsharp_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercsharp_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercsharp_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexercsharp_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercsharp_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexercsharp_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexercsharp_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexercsharp_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercsharp_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercsharp_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercsharp_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercsharp_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercsharp_dynamic_property_names\n");
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

QBindingStorage* q_scilexercsharp_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercsharp_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercsharp_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercsharp_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexercsharp_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercsharp_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercsharp_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexercsharp_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexercsharp_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexercsharp_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexercsharp_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexercsharp_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexercsharp_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexercsharp_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexercsharp_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexercsharp_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexercsharp_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercsharp_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_fold_at_else(void* self, bool fold) {
    QsciLexerCSharp_SetFoldAtElse((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerCSharp_QBaseSetFoldAtElse((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerCSharp_OnSetFoldAtElse((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_fold_comments(void* self, bool fold) {
    QsciLexerCSharp_SetFoldComments((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerCSharp_QBaseSetFoldComments((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerCSharp_OnSetFoldComments((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_fold_compact(void* self, bool fold) {
    QsciLexerCSharp_SetFoldCompact((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerCSharp_QBaseSetFoldCompact((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerCSharp_OnSetFoldCompact((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCSharp_SetFoldPreprocessor((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerCSharp_QBaseSetFoldPreprocessor((QsciLexerCSharp*)self, fold);
}

void q_scilexercsharp_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCSharp_OnSetFoldPreprocessor((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_style_preprocessor(void* self, bool style) {
    QsciLexerCSharp_SetStylePreprocessor((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerCSharp_QBaseSetStylePreprocessor((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerCSharp_OnSetStylePreprocessor((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_lexer(void* self) {
    return QsciLexerCSharp_Lexer((QsciLexerCSharp*)self);
}

const char* q_scilexercsharp_qbase_lexer(void* self) {
    return QsciLexerCSharp_QBaseLexer((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_lexer(void* self, const char* (*callback)()) {
    QsciLexerCSharp_OnLexer((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_lexer_id(void* self) {
    return QsciLexerCSharp_LexerId((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_lexer_id(void* self) {
    return QsciLexerCSharp_QBaseLexerId((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnLexerId((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_auto_completion_fillups(void* self) {
    return QsciLexerCSharp_AutoCompletionFillups((QsciLexerCSharp*)self);
}

const char* q_scilexercsharp_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCSharp_QBaseAutoCompletionFillups((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerCSharp_OnAutoCompletionFillups((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char** q_scilexercsharp_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCSharp_AutoCompletionWordSeparators((QsciLexerCSharp*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercsharp_auto_completion_word_separators\n");
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

const char** q_scilexercsharp_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCSharp_QBaseAutoCompletionWordSeparators((QsciLexerCSharp*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercsharp_auto_completion_word_separators\n");
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

void q_scilexercsharp_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerCSharp_OnAutoCompletionWordSeparators((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_block_end(void* self, int* style) {
    return QsciLexerCSharp_BlockEnd((QsciLexerCSharp*)self, style);
}

const char* q_scilexercsharp_qbase_block_end(void* self, int* style) {
    return QsciLexerCSharp_QBaseBlockEnd((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerCSharp_OnBlockEnd((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_block_lookback(void* self) {
    return QsciLexerCSharp_BlockLookback((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_block_lookback(void* self) {
    return QsciLexerCSharp_QBaseBlockLookback((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnBlockLookback((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_block_start(void* self, int* style) {
    return QsciLexerCSharp_BlockStart((QsciLexerCSharp*)self, style);
}

const char* q_scilexercsharp_qbase_block_start(void* self, int* style) {
    return QsciLexerCSharp_QBaseBlockStart((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerCSharp_OnBlockStart((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_block_start_keyword(void* self, int* style) {
    return QsciLexerCSharp_BlockStartKeyword((QsciLexerCSharp*)self, style);
}

const char* q_scilexercsharp_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCSharp_QBaseBlockStartKeyword((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerCSharp_OnBlockStartKeyword((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_brace_style(void* self) {
    return QsciLexerCSharp_BraceStyle((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_brace_style(void* self) {
    return QsciLexerCSharp_QBaseBraceStyle((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnBraceStyle((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_case_sensitive(void* self) {
    return QsciLexerCSharp_CaseSensitive((QsciLexerCSharp*)self);
}

bool q_scilexercsharp_qbase_case_sensitive(void* self) {
    return QsciLexerCSharp_QBaseCaseSensitive((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerCSharp_OnCaseSensitive((QsciLexerCSharp*)self, (intptr_t)callback);
}

QColor* q_scilexercsharp_color(void* self, int style) {
    return QsciLexerCSharp_Color((QsciLexerCSharp*)self, style);
}

QColor* q_scilexercsharp_qbase_color(void* self, int style) {
    return QsciLexerCSharp_QBaseColor((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCSharp_OnColor((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_eol_fill(void* self, int style) {
    return QsciLexerCSharp_EolFill((QsciLexerCSharp*)self, style);
}

bool q_scilexercsharp_qbase_eol_fill(void* self, int style) {
    return QsciLexerCSharp_QBaseEolFill((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerCSharp_OnEolFill((QsciLexerCSharp*)self, (intptr_t)callback);
}

QFont* q_scilexercsharp_font(void* self, int style) {
    return QsciLexerCSharp_Font((QsciLexerCSharp*)self, style);
}

QFont* q_scilexercsharp_qbase_font(void* self, int style) {
    return QsciLexerCSharp_QBaseFont((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCSharp_OnFont((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_indentation_guide_view(void* self) {
    return QsciLexerCSharp_IndentationGuideView((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_indentation_guide_view(void* self) {
    return QsciLexerCSharp_QBaseIndentationGuideView((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnIndentationGuideView((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_default_style(void* self) {
    return QsciLexerCSharp_DefaultStyle((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_default_style(void* self) {
    return QsciLexerCSharp_QBaseDefaultStyle((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnDefaultStyle((QsciLexerCSharp*)self, (intptr_t)callback);
}

QColor* q_scilexercsharp_paper(void* self, int style) {
    return QsciLexerCSharp_Paper((QsciLexerCSharp*)self, style);
}

QColor* q_scilexercsharp_qbase_paper(void* self, int style) {
    return QsciLexerCSharp_QBasePaper((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCSharp_OnPaper((QsciLexerCSharp*)self, (intptr_t)callback);
}

QColor* q_scilexercsharp_default_color2(void* self, int style) {
    return QsciLexerCSharp_DefaultColor2((QsciLexerCSharp*)self, style);
}

QColor* q_scilexercsharp_qbase_default_color2(void* self, int style) {
    return QsciLexerCSharp_QBaseDefaultColor2((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCSharp_OnDefaultColor2((QsciLexerCSharp*)self, (intptr_t)callback);
}

QFont* q_scilexercsharp_default_font2(void* self, int style) {
    return QsciLexerCSharp_DefaultFont2((QsciLexerCSharp*)self, style);
}

QFont* q_scilexercsharp_qbase_default_font2(void* self, int style) {
    return QsciLexerCSharp_QBaseDefaultFont2((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCSharp_OnDefaultFont2((QsciLexerCSharp*)self, (intptr_t)callback);
}

QColor* q_scilexercsharp_default_paper2(void* self, int style) {
    return QsciLexerCSharp_DefaultPaper2((QsciLexerCSharp*)self, style);
}

QColor* q_scilexercsharp_qbase_default_paper2(void* self, int style) {
    return QsciLexerCSharp_QBaseDefaultPaper2((QsciLexerCSharp*)self, style);
}

void q_scilexercsharp_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCSharp_OnDefaultPaper2((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_editor(void* self, void* editor) {
    QsciLexerCSharp_SetEditor((QsciLexerCSharp*)self, (QsciScintilla*)editor);
}

void q_scilexercsharp_qbase_set_editor(void* self, void* editor) {
    QsciLexerCSharp_QBaseSetEditor((QsciLexerCSharp*)self, (QsciScintilla*)editor);
}

void q_scilexercsharp_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnSetEditor((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_refresh_properties(void* self) {
    QsciLexerCSharp_RefreshProperties((QsciLexerCSharp*)self);
}

void q_scilexercsharp_qbase_refresh_properties(void* self) {
    QsciLexerCSharp_QBaseRefreshProperties((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerCSharp_OnRefreshProperties((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_style_bits_needed(void* self) {
    return QsciLexerCSharp_StyleBitsNeeded((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_style_bits_needed(void* self) {
    return QsciLexerCSharp_QBaseStyleBitsNeeded((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnStyleBitsNeeded((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_word_characters(void* self) {
    return QsciLexerCSharp_WordCharacters((QsciLexerCSharp*)self);
}

const char* q_scilexercsharp_qbase_word_characters(void* self) {
    return QsciLexerCSharp_QBaseWordCharacters((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerCSharp_OnWordCharacters((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCSharp_SetAutoIndentStyle((QsciLexerCSharp*)self, autoindentstyle);
}

void q_scilexercsharp_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCSharp_QBaseSetAutoIndentStyle((QsciLexerCSharp*)self, autoindentstyle);
}

void q_scilexercsharp_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerCSharp_OnSetAutoIndentStyle((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_color(void* self, void* c, int style) {
    QsciLexerCSharp_SetColor((QsciLexerCSharp*)self, (QColor*)c, style);
}

void q_scilexercsharp_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCSharp_QBaseSetColor((QsciLexerCSharp*)self, (QColor*)c, style);
}

void q_scilexercsharp_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCSharp_OnSetColor((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCSharp_SetEolFill((QsciLexerCSharp*)self, eoffill, style);
}

void q_scilexercsharp_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCSharp_QBaseSetEolFill((QsciLexerCSharp*)self, eoffill, style);
}

void q_scilexercsharp_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerCSharp_OnSetEolFill((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_font(void* self, void* f, int style) {
    QsciLexerCSharp_SetFont((QsciLexerCSharp*)self, (QFont*)f, style);
}

void q_scilexercsharp_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCSharp_QBaseSetFont((QsciLexerCSharp*)self, (QFont*)f, style);
}

void q_scilexercsharp_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCSharp_OnSetFont((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_set_paper(void* self, void* c, int style) {
    QsciLexerCSharp_SetPaper((QsciLexerCSharp*)self, (QColor*)c, style);
}

void q_scilexercsharp_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCSharp_QBaseSetPaper((QsciLexerCSharp*)self, (QColor*)c, style);
}

void q_scilexercsharp_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCSharp_OnSetPaper((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSharp_ReadProperties((QsciLexerCSharp*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercsharp_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSharp_QBaseReadProperties((QsciLexerCSharp*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercsharp_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCSharp_OnReadProperties((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSharp_WriteProperties((QsciLexerCSharp*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercsharp_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSharp_QBaseWriteProperties((QsciLexerCSharp*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercsharp_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCSharp_OnWriteProperties((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_event(void* self, void* event) {
    return QsciLexerCSharp_Event((QsciLexerCSharp*)self, (QEvent*)event);
}

bool q_scilexercsharp_qbase_event(void* self, void* event) {
    return QsciLexerCSharp_QBaseEvent((QsciLexerCSharp*)self, (QEvent*)event);
}

void q_scilexercsharp_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCSharp_OnEvent((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCSharp_EventFilter((QsciLexerCSharp*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercsharp_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCSharp_QBaseEventFilter((QsciLexerCSharp*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercsharp_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerCSharp_OnEventFilter((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_timer_event(void* self, void* event) {
    QsciLexerCSharp_TimerEvent((QsciLexerCSharp*)self, (QTimerEvent*)event);
}

void q_scilexercsharp_qbase_timer_event(void* self, void* event) {
    QsciLexerCSharp_QBaseTimerEvent((QsciLexerCSharp*)self, (QTimerEvent*)event);
}

void q_scilexercsharp_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnTimerEvent((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_child_event(void* self, void* event) {
    QsciLexerCSharp_ChildEvent((QsciLexerCSharp*)self, (QChildEvent*)event);
}

void q_scilexercsharp_qbase_child_event(void* self, void* event) {
    QsciLexerCSharp_QBaseChildEvent((QsciLexerCSharp*)self, (QChildEvent*)event);
}

void q_scilexercsharp_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnChildEvent((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_custom_event(void* self, void* event) {
    QsciLexerCSharp_CustomEvent((QsciLexerCSharp*)self, (QEvent*)event);
}

void q_scilexercsharp_qbase_custom_event(void* self, void* event) {
    QsciLexerCSharp_QBaseCustomEvent((QsciLexerCSharp*)self, (QEvent*)event);
}

void q_scilexercsharp_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnCustomEvent((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_connect_notify(void* self, void* signal) {
    QsciLexerCSharp_ConnectNotify((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

void q_scilexercsharp_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCSharp_QBaseConnectNotify((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

void q_scilexercsharp_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnConnectNotify((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_disconnect_notify(void* self, void* signal) {
    QsciLexerCSharp_DisconnectNotify((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

void q_scilexercsharp_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCSharp_QBaseDisconnectNotify((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

void q_scilexercsharp_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCSharp_OnDisconnectNotify((QsciLexerCSharp*)self, (intptr_t)callback);
}

char* q_scilexercsharp_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCSharp_TextAsBytes((QsciLexerCSharp*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexercsharp_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCSharp_QBaseTextAsBytes((QsciLexerCSharp*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercsharp_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerCSharp_OnTextAsBytes((QsciLexerCSharp*)self, (intptr_t)callback);
}

const char* q_scilexercsharp_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCSharp_BytesAsText((QsciLexerCSharp*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercsharp_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCSharp_QBaseBytesAsText((QsciLexerCSharp*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercsharp_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerCSharp_OnBytesAsText((QsciLexerCSharp*)self, (intptr_t)callback);
}

QObject* q_scilexercsharp_sender(void* self) {
    return QsciLexerCSharp_Sender((QsciLexerCSharp*)self);
}

QObject* q_scilexercsharp_qbase_sender(void* self) {
    return QsciLexerCSharp_QBaseSender((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerCSharp_OnSender((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_sender_signal_index(void* self) {
    return QsciLexerCSharp_SenderSignalIndex((QsciLexerCSharp*)self);
}

int32_t q_scilexercsharp_qbase_sender_signal_index(void* self) {
    return QsciLexerCSharp_QBaseSenderSignalIndex((QsciLexerCSharp*)self);
}

void q_scilexercsharp_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerCSharp_OnSenderSignalIndex((QsciLexerCSharp*)self, (intptr_t)callback);
}

int32_t q_scilexercsharp_receivers(void* self, const char* signal) {
    return QsciLexerCSharp_Receivers((QsciLexerCSharp*)self, signal);
}

int32_t q_scilexercsharp_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCSharp_QBaseReceivers((QsciLexerCSharp*)self, signal);
}

void q_scilexercsharp_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerCSharp_OnReceivers((QsciLexerCSharp*)self, (intptr_t)callback);
}

bool q_scilexercsharp_is_signal_connected(void* self, void* signal) {
    return QsciLexerCSharp_IsSignalConnected((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

bool q_scilexercsharp_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCSharp_QBaseIsSignalConnected((QsciLexerCSharp*)self, (QMetaMethod*)signal);
}

void q_scilexercsharp_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCSharp_OnIsSignalConnected((QsciLexerCSharp*)self, (intptr_t)callback);
}

void q_scilexercsharp_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexercsharp_delete(void* self) {
    QsciLexerCSharp_Delete((QsciLexerCSharp*)(self));
}
