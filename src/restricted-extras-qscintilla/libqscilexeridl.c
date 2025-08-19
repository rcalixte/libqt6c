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
#include "libqscilexeridl.hpp"
#include "libqscilexeridl.h"

QsciLexerIDL* q_scilexeridl_new() {
    return QsciLexerIDL_new();
}

QsciLexerIDL* q_scilexeridl_new2(void* parent) {
    return QsciLexerIDL_new2((QObject*)parent);
}

const QMetaObject* q_scilexeridl_meta_object(void* self) {
    return QsciLexerIDL_MetaObject((QsciLexerIDL*)self);
}

void* q_scilexeridl_metacast(void* self, const char* param1) {
    return QsciLexerIDL_Metacast((QsciLexerIDL*)self, param1);
}

int32_t q_scilexeridl_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerIDL_Metacall((QsciLexerIDL*)self, param1, param2, param3);
}

void q_scilexeridl_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerIDL_OnMetacall((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerIDL_QBaseMetacall((QsciLexerIDL*)self, param1, param2, param3);
}

const char* q_scilexeridl_tr(const char* s) {
    libqt_string _str = QsciLexerIDL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeridl_language(void* self) {
    return QsciLexerIDL_Language((QsciLexerIDL*)self);
}

QColor* q_scilexeridl_default_color(void* self, int style) {
    return QsciLexerIDL_DefaultColor((QsciLexerIDL*)self, style);
}

const char* q_scilexeridl_keywords(void* self, int set) {
    return QsciLexerIDL_Keywords((QsciLexerIDL*)self, set);
}

const char* q_scilexeridl_description(void* self, int style) {
    libqt_string _str = QsciLexerIDL_Description((QsciLexerIDL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeridl_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerIDL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeridl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerIDL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFont* q_scilexeridl_default_font(void* self, int style) {
    return QsciLexerCPP_DefaultFont((QsciLexerCPP*)self, style);
}

QColor* q_scilexeridl_default_paper(void* self, int style) {
    return QsciLexerCPP_DefaultPaper((QsciLexerCPP*)self, style);
}

bool q_scilexeridl_fold_at_else(void* self) {
    return QsciLexerCPP_FoldAtElse((QsciLexerCPP*)self);
}

bool q_scilexeridl_fold_comments(void* self) {
    return QsciLexerCPP_FoldComments((QsciLexerCPP*)self);
}

bool q_scilexeridl_fold_compact(void* self) {
    return QsciLexerCPP_FoldCompact((QsciLexerCPP*)self);
}

bool q_scilexeridl_fold_preprocessor(void* self) {
    return QsciLexerCPP_FoldPreprocessor((QsciLexerCPP*)self);
}

bool q_scilexeridl_style_preprocessor(void* self) {
    return QsciLexerCPP_StylePreprocessor((QsciLexerCPP*)self);
}

void q_scilexeridl_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetDollarsAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexeridl_dollars_allowed(void* self) {
    return QsciLexerCPP_DollarsAllowed((QsciLexerCPP*)self);
}

void q_scilexeridl_set_highlight_triple_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightTripleQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexeridl_highlight_triple_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightTripleQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexeridl_set_highlight_hash_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightHashQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexeridl_highlight_hash_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightHashQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexeridl_set_highlight_back_quoted_strings(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightBackQuotedStrings((QsciLexerCPP*)self, enabled);
}

bool q_scilexeridl_highlight_back_quoted_strings(void* self) {
    return QsciLexerCPP_HighlightBackQuotedStrings((QsciLexerCPP*)self);
}

void q_scilexeridl_set_highlight_escape_sequences(void* self, bool enabled) {
    QsciLexerCPP_SetHighlightEscapeSequences((QsciLexerCPP*)self, enabled);
}

bool q_scilexeridl_highlight_escape_sequences(void* self) {
    return QsciLexerCPP_HighlightEscapeSequences((QsciLexerCPP*)self);
}

void q_scilexeridl_set_verbatim_string_escape_sequences_allowed(void* self, bool allowed) {
    QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self, allowed);
}

bool q_scilexeridl_verbatim_string_escape_sequences_allowed(void* self) {
    return QsciLexerCPP_VerbatimStringEscapeSequencesAllowed((QsciLexerCPP*)self);
}

const char* q_scilexeridl_block_end1(void* self, int* style) {
    return QsciLexerCPP_BlockEnd1((QsciLexerCPP*)self, style);
}

const char* q_scilexeridl_block_start1(void* self, int* style) {
    return QsciLexerCPP_BlockStart1((QsciLexerCPP*)self, style);
}

const char* q_scilexeridl_block_start_keyword1(void* self, int* style) {
    return QsciLexerCPP_BlockStartKeyword1((QsciLexerCPP*)self, style);
}

QsciAbstractAPIs* q_scilexeridl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeridl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexeridl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeridl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeridl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeridl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeridl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeridl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeridl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeridl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeridl_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeridl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeridl_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeridl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeridl_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeridl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeridl_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeridl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexeridl_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexeridl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexeridl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeridl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeridl_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeridl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeridl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeridl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeridl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeridl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeridl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexeridl_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexeridl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexeridl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexeridl_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexeridl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexeridl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexeridl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexeridl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexeridl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeridl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeridl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeridl_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexeridl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeridl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeridl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeridl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeridl_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeridl_dynamic_property_names");
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

QBindingStorage* q_scilexeridl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeridl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeridl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeridl_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeridl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeridl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeridl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexeridl_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexeridl_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexeridl_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexeridl_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexeridl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeridl_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexeridl_set_fold_at_else(void* self, bool fold) {
    QsciLexerIDL_SetFoldAtElse((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldAtElse((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerIDL_OnSetFoldAtElse((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_fold_comments(void* self, bool fold) {
    QsciLexerIDL_SetFoldComments((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldComments((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerIDL_OnSetFoldComments((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_fold_compact(void* self, bool fold) {
    QsciLexerIDL_SetFoldCompact((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldCompact((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerIDL_OnSetFoldCompact((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerIDL_SetFoldPreprocessor((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerIDL_QBaseSetFoldPreprocessor((QsciLexerIDL*)self, fold);
}

void q_scilexeridl_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerIDL_OnSetFoldPreprocessor((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_style_preprocessor(void* self, bool style) {
    QsciLexerIDL_SetStylePreprocessor((QsciLexerIDL*)self, style);
}

void q_scilexeridl_qbase_set_style_preprocessor(void* self, bool style) {
    QsciLexerIDL_QBaseSetStylePreprocessor((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_set_style_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerIDL_OnSetStylePreprocessor((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_lexer(void* self) {
    return QsciLexerIDL_Lexer((QsciLexerIDL*)self);
}

const char* q_scilexeridl_qbase_lexer(void* self) {
    return QsciLexerIDL_QBaseLexer((QsciLexerIDL*)self);
}

void q_scilexeridl_on_lexer(void* self, const char* (*callback)()) {
    QsciLexerIDL_OnLexer((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_lexer_id(void* self) {
    return QsciLexerIDL_LexerId((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_lexer_id(void* self) {
    return QsciLexerIDL_QBaseLexerId((QsciLexerIDL*)self);
}

void q_scilexeridl_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnLexerId((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_auto_completion_fillups(void* self) {
    return QsciLexerIDL_AutoCompletionFillups((QsciLexerIDL*)self);
}

const char* q_scilexeridl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerIDL_QBaseAutoCompletionFillups((QsciLexerIDL*)self);
}

void q_scilexeridl_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerIDL_OnAutoCompletionFillups((QsciLexerIDL*)self, (intptr_t)callback);
}

const char** q_scilexeridl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIDL_AutoCompletionWordSeparators((QsciLexerIDL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeridl_auto_completion_word_separators");
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

const char** q_scilexeridl_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIDL_QBaseAutoCompletionWordSeparators((QsciLexerIDL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeridl_auto_completion_word_separators");
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

void q_scilexeridl_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerIDL_OnAutoCompletionWordSeparators((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_block_end(void* self, int* style) {
    return QsciLexerIDL_BlockEnd((QsciLexerIDL*)self, style);
}

const char* q_scilexeridl_qbase_block_end(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockEnd((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerIDL_OnBlockEnd((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_block_lookback(void* self) {
    return QsciLexerIDL_BlockLookback((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_block_lookback(void* self) {
    return QsciLexerIDL_QBaseBlockLookback((QsciLexerIDL*)self);
}

void q_scilexeridl_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnBlockLookback((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_block_start(void* self, int* style) {
    return QsciLexerIDL_BlockStart((QsciLexerIDL*)self, style);
}

const char* q_scilexeridl_qbase_block_start(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockStart((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerIDL_OnBlockStart((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_block_start_keyword(void* self, int* style) {
    return QsciLexerIDL_BlockStartKeyword((QsciLexerIDL*)self, style);
}

const char* q_scilexeridl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerIDL_QBaseBlockStartKeyword((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerIDL_OnBlockStartKeyword((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_brace_style(void* self) {
    return QsciLexerIDL_BraceStyle((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_brace_style(void* self) {
    return QsciLexerIDL_QBaseBraceStyle((QsciLexerIDL*)self);
}

void q_scilexeridl_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnBraceStyle((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_case_sensitive(void* self) {
    return QsciLexerIDL_CaseSensitive((QsciLexerIDL*)self);
}

bool q_scilexeridl_qbase_case_sensitive(void* self) {
    return QsciLexerIDL_QBaseCaseSensitive((QsciLexerIDL*)self);
}

void q_scilexeridl_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerIDL_OnCaseSensitive((QsciLexerIDL*)self, (intptr_t)callback);
}

QColor* q_scilexeridl_color(void* self, int style) {
    return QsciLexerIDL_Color((QsciLexerIDL*)self, style);
}

QColor* q_scilexeridl_qbase_color(void* self, int style) {
    return QsciLexerIDL_QBaseColor((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerIDL_OnColor((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_eol_fill(void* self, int style) {
    return QsciLexerIDL_EolFill((QsciLexerIDL*)self, style);
}

bool q_scilexeridl_qbase_eol_fill(void* self, int style) {
    return QsciLexerIDL_QBaseEolFill((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerIDL_OnEolFill((QsciLexerIDL*)self, (intptr_t)callback);
}

QFont* q_scilexeridl_font(void* self, int style) {
    return QsciLexerIDL_Font((QsciLexerIDL*)self, style);
}

QFont* q_scilexeridl_qbase_font(void* self, int style) {
    return QsciLexerIDL_QBaseFont((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerIDL_OnFont((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_indentation_guide_view(void* self) {
    return QsciLexerIDL_IndentationGuideView((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_indentation_guide_view(void* self) {
    return QsciLexerIDL_QBaseIndentationGuideView((QsciLexerIDL*)self);
}

void q_scilexeridl_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnIndentationGuideView((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_default_style(void* self) {
    return QsciLexerIDL_DefaultStyle((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_default_style(void* self) {
    return QsciLexerIDL_QBaseDefaultStyle((QsciLexerIDL*)self);
}

void q_scilexeridl_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnDefaultStyle((QsciLexerIDL*)self, (intptr_t)callback);
}

QColor* q_scilexeridl_paper(void* self, int style) {
    return QsciLexerIDL_Paper((QsciLexerIDL*)self, style);
}

QColor* q_scilexeridl_qbase_paper(void* self, int style) {
    return QsciLexerIDL_QBasePaper((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerIDL_OnPaper((QsciLexerIDL*)self, (intptr_t)callback);
}

QColor* q_scilexeridl_default_color2(void* self, int style) {
    return QsciLexerIDL_DefaultColor2((QsciLexerIDL*)self, style);
}

QColor* q_scilexeridl_qbase_default_color2(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultColor2((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerIDL_OnDefaultColor2((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_default_eol_fill(void* self, int style) {
    return QsciLexerIDL_DefaultEolFill((QsciLexerIDL*)self, style);
}

bool q_scilexeridl_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultEolFill((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerIDL_OnDefaultEolFill((QsciLexerIDL*)self, (intptr_t)callback);
}

QFont* q_scilexeridl_default_font2(void* self, int style) {
    return QsciLexerIDL_DefaultFont2((QsciLexerIDL*)self, style);
}

QFont* q_scilexeridl_qbase_default_font2(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultFont2((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerIDL_OnDefaultFont2((QsciLexerIDL*)self, (intptr_t)callback);
}

QColor* q_scilexeridl_default_paper2(void* self, int style) {
    return QsciLexerIDL_DefaultPaper2((QsciLexerIDL*)self, style);
}

QColor* q_scilexeridl_qbase_default_paper2(void* self, int style) {
    return QsciLexerIDL_QBaseDefaultPaper2((QsciLexerIDL*)self, style);
}

void q_scilexeridl_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerIDL_OnDefaultPaper2((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_editor(void* self, void* editor) {
    QsciLexerIDL_SetEditor((QsciLexerIDL*)self, (QsciScintilla*)editor);
}

void q_scilexeridl_qbase_set_editor(void* self, void* editor) {
    QsciLexerIDL_QBaseSetEditor((QsciLexerIDL*)self, (QsciScintilla*)editor);
}

void q_scilexeridl_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnSetEditor((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_refresh_properties(void* self) {
    QsciLexerIDL_RefreshProperties((QsciLexerIDL*)self);
}

void q_scilexeridl_qbase_refresh_properties(void* self) {
    QsciLexerIDL_QBaseRefreshProperties((QsciLexerIDL*)self);
}

void q_scilexeridl_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerIDL_OnRefreshProperties((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_style_bits_needed(void* self) {
    return QsciLexerIDL_StyleBitsNeeded((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_style_bits_needed(void* self) {
    return QsciLexerIDL_QBaseStyleBitsNeeded((QsciLexerIDL*)self);
}

void q_scilexeridl_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnStyleBitsNeeded((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_word_characters(void* self) {
    return QsciLexerIDL_WordCharacters((QsciLexerIDL*)self);
}

const char* q_scilexeridl_qbase_word_characters(void* self) {
    return QsciLexerIDL_QBaseWordCharacters((QsciLexerIDL*)self);
}

void q_scilexeridl_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerIDL_OnWordCharacters((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIDL_SetAutoIndentStyle((QsciLexerIDL*)self, autoindentstyle);
}

void q_scilexeridl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIDL_QBaseSetAutoIndentStyle((QsciLexerIDL*)self, autoindentstyle);
}

void q_scilexeridl_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerIDL_OnSetAutoIndentStyle((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_color(void* self, void* c, int style) {
    QsciLexerIDL_SetColor((QsciLexerIDL*)self, (QColor*)c, style);
}

void q_scilexeridl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerIDL_QBaseSetColor((QsciLexerIDL*)self, (QColor*)c, style);
}

void q_scilexeridl_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerIDL_OnSetColor((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIDL_SetEolFill((QsciLexerIDL*)self, eoffill, style);
}

void q_scilexeridl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIDL_QBaseSetEolFill((QsciLexerIDL*)self, eoffill, style);
}

void q_scilexeridl_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerIDL_OnSetEolFill((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_font(void* self, void* f, int style) {
    QsciLexerIDL_SetFont((QsciLexerIDL*)self, (QFont*)f, style);
}

void q_scilexeridl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerIDL_QBaseSetFont((QsciLexerIDL*)self, (QFont*)f, style);
}

void q_scilexeridl_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerIDL_OnSetFont((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_set_paper(void* self, void* c, int style) {
    QsciLexerIDL_SetPaper((QsciLexerIDL*)self, (QColor*)c, style);
}

void q_scilexeridl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerIDL_QBaseSetPaper((QsciLexerIDL*)self, (QColor*)c, style);
}

void q_scilexeridl_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerIDL_OnSetPaper((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_ReadProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeridl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_QBaseReadProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeridl_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerIDL_OnReadProperties((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_WriteProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeridl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIDL_QBaseWriteProperties((QsciLexerIDL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeridl_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerIDL_OnWriteProperties((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_event(void* self, void* event) {
    return QsciLexerIDL_Event((QsciLexerIDL*)self, (QEvent*)event);
}

bool q_scilexeridl_qbase_event(void* self, void* event) {
    return QsciLexerIDL_QBaseEvent((QsciLexerIDL*)self, (QEvent*)event);
}

void q_scilexeridl_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerIDL_OnEvent((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIDL_EventFilter((QsciLexerIDL*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeridl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIDL_QBaseEventFilter((QsciLexerIDL*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeridl_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerIDL_OnEventFilter((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_timer_event(void* self, void* event) {
    QsciLexerIDL_TimerEvent((QsciLexerIDL*)self, (QTimerEvent*)event);
}

void q_scilexeridl_qbase_timer_event(void* self, void* event) {
    QsciLexerIDL_QBaseTimerEvent((QsciLexerIDL*)self, (QTimerEvent*)event);
}

void q_scilexeridl_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnTimerEvent((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_child_event(void* self, void* event) {
    QsciLexerIDL_ChildEvent((QsciLexerIDL*)self, (QChildEvent*)event);
}

void q_scilexeridl_qbase_child_event(void* self, void* event) {
    QsciLexerIDL_QBaseChildEvent((QsciLexerIDL*)self, (QChildEvent*)event);
}

void q_scilexeridl_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnChildEvent((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_custom_event(void* self, void* event) {
    QsciLexerIDL_CustomEvent((QsciLexerIDL*)self, (QEvent*)event);
}

void q_scilexeridl_qbase_custom_event(void* self, void* event) {
    QsciLexerIDL_QBaseCustomEvent((QsciLexerIDL*)self, (QEvent*)event);
}

void q_scilexeridl_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnCustomEvent((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_connect_notify(void* self, void* signal) {
    QsciLexerIDL_ConnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

void q_scilexeridl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerIDL_QBaseConnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

void q_scilexeridl_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnConnectNotify((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_disconnect_notify(void* self, void* signal) {
    QsciLexerIDL_DisconnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

void q_scilexeridl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerIDL_QBaseDisconnectNotify((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

void q_scilexeridl_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerIDL_OnDisconnectNotify((QsciLexerIDL*)self, (intptr_t)callback);
}

char* q_scilexeridl_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerIDL_TextAsBytes((QsciLexerIDL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexeridl_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerIDL_QBaseTextAsBytes((QsciLexerIDL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeridl_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerIDL_OnTextAsBytes((QsciLexerIDL*)self, (intptr_t)callback);
}

const char* q_scilexeridl_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerIDL_BytesAsText((QsciLexerIDL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeridl_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerIDL_QBaseBytesAsText((QsciLexerIDL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeridl_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerIDL_OnBytesAsText((QsciLexerIDL*)self, (intptr_t)callback);
}

QObject* q_scilexeridl_sender(void* self) {
    return QsciLexerIDL_Sender((QsciLexerIDL*)self);
}

QObject* q_scilexeridl_qbase_sender(void* self) {
    return QsciLexerIDL_QBaseSender((QsciLexerIDL*)self);
}

void q_scilexeridl_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerIDL_OnSender((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_sender_signal_index(void* self) {
    return QsciLexerIDL_SenderSignalIndex((QsciLexerIDL*)self);
}

int32_t q_scilexeridl_qbase_sender_signal_index(void* self) {
    return QsciLexerIDL_QBaseSenderSignalIndex((QsciLexerIDL*)self);
}

void q_scilexeridl_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerIDL_OnSenderSignalIndex((QsciLexerIDL*)self, (intptr_t)callback);
}

int32_t q_scilexeridl_receivers(void* self, const char* signal) {
    return QsciLexerIDL_Receivers((QsciLexerIDL*)self, signal);
}

int32_t q_scilexeridl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerIDL_QBaseReceivers((QsciLexerIDL*)self, signal);
}

void q_scilexeridl_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerIDL_OnReceivers((QsciLexerIDL*)self, (intptr_t)callback);
}

bool q_scilexeridl_is_signal_connected(void* self, void* signal) {
    return QsciLexerIDL_IsSignalConnected((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

bool q_scilexeridl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerIDL_QBaseIsSignalConnected((QsciLexerIDL*)self, (QMetaMethod*)signal);
}

void q_scilexeridl_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerIDL_OnIsSignalConnected((QsciLexerIDL*)self, (intptr_t)callback);
}

void q_scilexeridl_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeridl_delete(void* self) {
    QsciLexerIDL_Delete((QsciLexerIDL*)(self));
}
