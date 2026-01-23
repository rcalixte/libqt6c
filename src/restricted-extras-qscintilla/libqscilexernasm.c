#include "../libqchar.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexerasm.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexernasm.hpp"
#include "libqscilexernasm.h"

QsciLexerNASM* q_scilexernasm_new() {
    return QsciLexerNASM_new();
}

QsciLexerNASM* q_scilexernasm_new2(void* parent) {
    return QsciLexerNASM_new2((QObject*)parent);
}

const QMetaObject* q_scilexernasm_meta_object(void* self) {
    return QsciLexerNASM_MetaObject((QsciLexerNASM*)self);
}

void* q_scilexernasm_metacast(void* self, const char* param1) {
    return QsciLexerNASM_Metacast((QsciLexerNASM*)self, param1);
}

int32_t q_scilexernasm_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerNASM_Metacall((QsciLexerNASM*)self, param1, param2, param3);
}

void q_scilexernasm_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerNASM_OnMetacall((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerNASM_QBaseMetacall((QsciLexerNASM*)self, param1, param2, param3);
}

const char* q_scilexernasm_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexernasm_language(void* self) {
    return QsciLexerNASM_Language((QsciLexerNASM*)self);
}

const char* q_scilexernasm_lexer(void* self) {
    return QsciLexerNASM_Lexer((QsciLexerNASM*)self);
}

const char* q_scilexernasm_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexernasm_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexernasm_default_color(void* self, int style) {
    return QsciLexerAsm_DefaultColor((QsciLexerAsm*)self, style);
}

QFont* q_scilexernasm_default_font(void* self, int style) {
    return QsciLexerAsm_DefaultFont((QsciLexerAsm*)self, style);
}

QColor* q_scilexernasm_default_paper(void* self, int style) {
    return QsciLexerAsm_DefaultPaper((QsciLexerAsm*)self, style);
}

bool q_scilexernasm_fold_comments(void* self) {
    return QsciLexerAsm_FoldComments((QsciLexerAsm*)self);
}

bool q_scilexernasm_fold_compact(void* self) {
    return QsciLexerAsm_FoldCompact((QsciLexerAsm*)self);
}

QChar* q_scilexernasm_comment_delimiter(void* self) {
    return QsciLexerAsm_CommentDelimiter((QsciLexerAsm*)self);
}

bool q_scilexernasm_fold_syntax_based(void* self) {
    return QsciLexerAsm_FoldSyntaxBased((QsciLexerAsm*)self);
}

QsciAbstractAPIs* q_scilexernasm_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexernasm_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexernasm_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexernasm_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexernasm_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexernasm_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexernasm_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexernasm_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexernasm_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexernasm_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexernasm_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexernasm_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexernasm_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexernasm_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexernasm_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexernasm_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexernasm_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexernasm_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexernasm_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexernasm_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexernasm_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexernasm_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexernasm_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexernasm_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexernasm_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexernasm_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexernasm_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexernasm_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexernasm_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexernasm_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexernasm_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexernasm_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexernasm_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexernasm_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexernasm_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexernasm_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexernasm_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexernasm_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexernasm_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexernasm_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexernasm_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexernasm_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexernasm_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexernasm_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexernasm_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexernasm_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexernasm_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexernasm_dynamic_property_names\n");
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

QBindingStorage* q_scilexernasm_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexernasm_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexernasm_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexernasm_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexernasm_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexernasm_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexernasm_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexernasm_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexernasm_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexernasm_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexernasm_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexernasm_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexernasm_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexernasm_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexernasm_set_fold_comments(void* self, bool fold) {
    QsciLexerNASM_SetFoldComments((QsciLexerNASM*)self, fold);
}

void q_scilexernasm_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerNASM_QBaseSetFoldComments((QsciLexerNASM*)self, fold);
}

void q_scilexernasm_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerNASM_OnSetFoldComments((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_fold_compact(void* self, bool fold) {
    QsciLexerNASM_SetFoldCompact((QsciLexerNASM*)self, fold);
}

void q_scilexernasm_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerNASM_QBaseSetFoldCompact((QsciLexerNASM*)self, fold);
}

void q_scilexernasm_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerNASM_OnSetFoldCompact((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerNASM_SetCommentDelimiter((QsciLexerNASM*)self, (QChar*)delimeter);
}

void q_scilexernasm_qbase_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerNASM_QBaseSetCommentDelimiter((QsciLexerNASM*)self, (QChar*)delimeter);
}

void q_scilexernasm_on_set_comment_delimiter(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnSetCommentDelimiter((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerNASM_SetFoldSyntaxBased((QsciLexerNASM*)self, syntax_based);
}

void q_scilexernasm_qbase_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerNASM_QBaseSetFoldSyntaxBased((QsciLexerNASM*)self, syntax_based);
}

void q_scilexernasm_on_set_fold_syntax_based(void* self, void (*callback)(void*, bool)) {
    QsciLexerNASM_OnSetFoldSyntaxBased((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_lexer_id(void* self) {
    return QsciLexerNASM_LexerId((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_lexer_id(void* self) {
    return QsciLexerNASM_QBaseLexerId((QsciLexerNASM*)self);
}

void q_scilexernasm_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnLexerId((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_auto_completion_fillups(void* self) {
    return QsciLexerNASM_AutoCompletionFillups((QsciLexerNASM*)self);
}

const char* q_scilexernasm_qbase_auto_completion_fillups(void* self) {
    return QsciLexerNASM_QBaseAutoCompletionFillups((QsciLexerNASM*)self);
}

void q_scilexernasm_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerNASM_OnAutoCompletionFillups((QsciLexerNASM*)self, (intptr_t)callback);
}

const char** q_scilexernasm_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerNASM_AutoCompletionWordSeparators((QsciLexerNASM*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexernasm_auto_completion_word_separators\n");
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

const char** q_scilexernasm_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerNASM_QBaseAutoCompletionWordSeparators((QsciLexerNASM*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexernasm_auto_completion_word_separators\n");
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

void q_scilexernasm_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerNASM_OnAutoCompletionWordSeparators((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_block_end(void* self, int* style) {
    return QsciLexerNASM_BlockEnd((QsciLexerNASM*)self, style);
}

const char* q_scilexernasm_qbase_block_end(void* self, int* style) {
    return QsciLexerNASM_QBaseBlockEnd((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerNASM_OnBlockEnd((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_block_lookback(void* self) {
    return QsciLexerNASM_BlockLookback((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_block_lookback(void* self) {
    return QsciLexerNASM_QBaseBlockLookback((QsciLexerNASM*)self);
}

void q_scilexernasm_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnBlockLookback((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_block_start(void* self, int* style) {
    return QsciLexerNASM_BlockStart((QsciLexerNASM*)self, style);
}

const char* q_scilexernasm_qbase_block_start(void* self, int* style) {
    return QsciLexerNASM_QBaseBlockStart((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerNASM_OnBlockStart((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_block_start_keyword(void* self, int* style) {
    return QsciLexerNASM_BlockStartKeyword((QsciLexerNASM*)self, style);
}

const char* q_scilexernasm_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerNASM_QBaseBlockStartKeyword((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerNASM_OnBlockStartKeyword((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_brace_style(void* self) {
    return QsciLexerNASM_BraceStyle((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_brace_style(void* self) {
    return QsciLexerNASM_QBaseBraceStyle((QsciLexerNASM*)self);
}

void q_scilexernasm_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnBraceStyle((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_case_sensitive(void* self) {
    return QsciLexerNASM_CaseSensitive((QsciLexerNASM*)self);
}

bool q_scilexernasm_qbase_case_sensitive(void* self) {
    return QsciLexerNASM_QBaseCaseSensitive((QsciLexerNASM*)self);
}

void q_scilexernasm_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerNASM_OnCaseSensitive((QsciLexerNASM*)self, (intptr_t)callback);
}

QColor* q_scilexernasm_color(void* self, int style) {
    return QsciLexerNASM_Color((QsciLexerNASM*)self, style);
}

QColor* q_scilexernasm_qbase_color(void* self, int style) {
    return QsciLexerNASM_QBaseColor((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerNASM_OnColor((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_eol_fill(void* self, int style) {
    return QsciLexerNASM_EolFill((QsciLexerNASM*)self, style);
}

bool q_scilexernasm_qbase_eol_fill(void* self, int style) {
    return QsciLexerNASM_QBaseEolFill((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerNASM_OnEolFill((QsciLexerNASM*)self, (intptr_t)callback);
}

QFont* q_scilexernasm_font(void* self, int style) {
    return QsciLexerNASM_Font((QsciLexerNASM*)self, style);
}

QFont* q_scilexernasm_qbase_font(void* self, int style) {
    return QsciLexerNASM_QBaseFont((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerNASM_OnFont((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_indentation_guide_view(void* self) {
    return QsciLexerNASM_IndentationGuideView((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_indentation_guide_view(void* self) {
    return QsciLexerNASM_QBaseIndentationGuideView((QsciLexerNASM*)self);
}

void q_scilexernasm_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnIndentationGuideView((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_keywords(void* self, int set) {
    return QsciLexerNASM_Keywords((QsciLexerNASM*)self, set);
}

const char* q_scilexernasm_qbase_keywords(void* self, int set) {
    return QsciLexerNASM_QBaseKeywords((QsciLexerNASM*)self, set);
}

void q_scilexernasm_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerNASM_OnKeywords((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_default_style(void* self) {
    return QsciLexerNASM_DefaultStyle((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_default_style(void* self) {
    return QsciLexerNASM_QBaseDefaultStyle((QsciLexerNASM*)self);
}

void q_scilexernasm_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnDefaultStyle((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_description(void* self, int style) {
    libqt_string _str = QsciLexerNASM_Description((QsciLexerNASM*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexernasm_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerNASM_QBaseDescription((QsciLexerNASM*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexernasm_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerNASM_OnDescription((QsciLexerNASM*)self, (intptr_t)callback);
}

QColor* q_scilexernasm_paper(void* self, int style) {
    return QsciLexerNASM_Paper((QsciLexerNASM*)self, style);
}

QColor* q_scilexernasm_qbase_paper(void* self, int style) {
    return QsciLexerNASM_QBasePaper((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerNASM_OnPaper((QsciLexerNASM*)self, (intptr_t)callback);
}

QColor* q_scilexernasm_default_color2(void* self, int style) {
    return QsciLexerNASM_DefaultColor2((QsciLexerNASM*)self, style);
}

QColor* q_scilexernasm_qbase_default_color2(void* self, int style) {
    return QsciLexerNASM_QBaseDefaultColor2((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerNASM_OnDefaultColor2((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_default_eol_fill(void* self, int style) {
    return QsciLexerNASM_DefaultEolFill((QsciLexerNASM*)self, style);
}

bool q_scilexernasm_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerNASM_QBaseDefaultEolFill((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerNASM_OnDefaultEolFill((QsciLexerNASM*)self, (intptr_t)callback);
}

QFont* q_scilexernasm_default_font2(void* self, int style) {
    return QsciLexerNASM_DefaultFont2((QsciLexerNASM*)self, style);
}

QFont* q_scilexernasm_qbase_default_font2(void* self, int style) {
    return QsciLexerNASM_QBaseDefaultFont2((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerNASM_OnDefaultFont2((QsciLexerNASM*)self, (intptr_t)callback);
}

QColor* q_scilexernasm_default_paper2(void* self, int style) {
    return QsciLexerNASM_DefaultPaper2((QsciLexerNASM*)self, style);
}

QColor* q_scilexernasm_qbase_default_paper2(void* self, int style) {
    return QsciLexerNASM_QBaseDefaultPaper2((QsciLexerNASM*)self, style);
}

void q_scilexernasm_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerNASM_OnDefaultPaper2((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_editor(void* self, void* editor) {
    QsciLexerNASM_SetEditor((QsciLexerNASM*)self, (QsciScintilla*)editor);
}

void q_scilexernasm_qbase_set_editor(void* self, void* editor) {
    QsciLexerNASM_QBaseSetEditor((QsciLexerNASM*)self, (QsciScintilla*)editor);
}

void q_scilexernasm_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnSetEditor((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_refresh_properties(void* self) {
    QsciLexerNASM_RefreshProperties((QsciLexerNASM*)self);
}

void q_scilexernasm_qbase_refresh_properties(void* self) {
    QsciLexerNASM_QBaseRefreshProperties((QsciLexerNASM*)self);
}

void q_scilexernasm_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerNASM_OnRefreshProperties((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_style_bits_needed(void* self) {
    return QsciLexerNASM_StyleBitsNeeded((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_style_bits_needed(void* self) {
    return QsciLexerNASM_QBaseStyleBitsNeeded((QsciLexerNASM*)self);
}

void q_scilexernasm_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnStyleBitsNeeded((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_word_characters(void* self) {
    return QsciLexerNASM_WordCharacters((QsciLexerNASM*)self);
}

const char* q_scilexernasm_qbase_word_characters(void* self) {
    return QsciLexerNASM_QBaseWordCharacters((QsciLexerNASM*)self);
}

void q_scilexernasm_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerNASM_OnWordCharacters((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerNASM_SetAutoIndentStyle((QsciLexerNASM*)self, autoindentstyle);
}

void q_scilexernasm_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerNASM_QBaseSetAutoIndentStyle((QsciLexerNASM*)self, autoindentstyle);
}

void q_scilexernasm_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerNASM_OnSetAutoIndentStyle((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_color(void* self, void* c, int style) {
    QsciLexerNASM_SetColor((QsciLexerNASM*)self, (QColor*)c, style);
}

void q_scilexernasm_qbase_set_color(void* self, void* c, int style) {
    QsciLexerNASM_QBaseSetColor((QsciLexerNASM*)self, (QColor*)c, style);
}

void q_scilexernasm_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerNASM_OnSetColor((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerNASM_SetEolFill((QsciLexerNASM*)self, eoffill, style);
}

void q_scilexernasm_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerNASM_QBaseSetEolFill((QsciLexerNASM*)self, eoffill, style);
}

void q_scilexernasm_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerNASM_OnSetEolFill((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_font(void* self, void* f, int style) {
    QsciLexerNASM_SetFont((QsciLexerNASM*)self, (QFont*)f, style);
}

void q_scilexernasm_qbase_set_font(void* self, void* f, int style) {
    QsciLexerNASM_QBaseSetFont((QsciLexerNASM*)self, (QFont*)f, style);
}

void q_scilexernasm_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerNASM_OnSetFont((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_set_paper(void* self, void* c, int style) {
    QsciLexerNASM_SetPaper((QsciLexerNASM*)self, (QColor*)c, style);
}

void q_scilexernasm_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerNASM_QBaseSetPaper((QsciLexerNASM*)self, (QColor*)c, style);
}

void q_scilexernasm_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerNASM_OnSetPaper((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerNASM_ReadProperties((QsciLexerNASM*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexernasm_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerNASM_QBaseReadProperties((QsciLexerNASM*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexernasm_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerNASM_OnReadProperties((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerNASM_WriteProperties((QsciLexerNASM*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexernasm_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerNASM_QBaseWriteProperties((QsciLexerNASM*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexernasm_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerNASM_OnWriteProperties((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_event(void* self, void* event) {
    return QsciLexerNASM_Event((QsciLexerNASM*)self, (QEvent*)event);
}

bool q_scilexernasm_qbase_event(void* self, void* event) {
    return QsciLexerNASM_QBaseEvent((QsciLexerNASM*)self, (QEvent*)event);
}

void q_scilexernasm_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerNASM_OnEvent((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_event_filter(void* self, void* watched, void* event) {
    return QsciLexerNASM_EventFilter((QsciLexerNASM*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexernasm_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerNASM_QBaseEventFilter((QsciLexerNASM*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexernasm_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerNASM_OnEventFilter((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_timer_event(void* self, void* event) {
    QsciLexerNASM_TimerEvent((QsciLexerNASM*)self, (QTimerEvent*)event);
}

void q_scilexernasm_qbase_timer_event(void* self, void* event) {
    QsciLexerNASM_QBaseTimerEvent((QsciLexerNASM*)self, (QTimerEvent*)event);
}

void q_scilexernasm_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnTimerEvent((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_child_event(void* self, void* event) {
    QsciLexerNASM_ChildEvent((QsciLexerNASM*)self, (QChildEvent*)event);
}

void q_scilexernasm_qbase_child_event(void* self, void* event) {
    QsciLexerNASM_QBaseChildEvent((QsciLexerNASM*)self, (QChildEvent*)event);
}

void q_scilexernasm_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnChildEvent((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_custom_event(void* self, void* event) {
    QsciLexerNASM_CustomEvent((QsciLexerNASM*)self, (QEvent*)event);
}

void q_scilexernasm_qbase_custom_event(void* self, void* event) {
    QsciLexerNASM_QBaseCustomEvent((QsciLexerNASM*)self, (QEvent*)event);
}

void q_scilexernasm_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnCustomEvent((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_connect_notify(void* self, void* signal) {
    QsciLexerNASM_ConnectNotify((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

void q_scilexernasm_qbase_connect_notify(void* self, void* signal) {
    QsciLexerNASM_QBaseConnectNotify((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

void q_scilexernasm_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnConnectNotify((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_disconnect_notify(void* self, void* signal) {
    QsciLexerNASM_DisconnectNotify((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

void q_scilexernasm_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerNASM_QBaseDisconnectNotify((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

void q_scilexernasm_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerNASM_OnDisconnectNotify((QsciLexerNASM*)self, (intptr_t)callback);
}

char* q_scilexernasm_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerNASM_TextAsBytes((QsciLexerNASM*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexernasm_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerNASM_QBaseTextAsBytes((QsciLexerNASM*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexernasm_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerNASM_OnTextAsBytes((QsciLexerNASM*)self, (intptr_t)callback);
}

const char* q_scilexernasm_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerNASM_BytesAsText((QsciLexerNASM*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexernasm_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerNASM_QBaseBytesAsText((QsciLexerNASM*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexernasm_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerNASM_OnBytesAsText((QsciLexerNASM*)self, (intptr_t)callback);
}

QObject* q_scilexernasm_sender(void* self) {
    return QsciLexerNASM_Sender((QsciLexerNASM*)self);
}

QObject* q_scilexernasm_qbase_sender(void* self) {
    return QsciLexerNASM_QBaseSender((QsciLexerNASM*)self);
}

void q_scilexernasm_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerNASM_OnSender((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_sender_signal_index(void* self) {
    return QsciLexerNASM_SenderSignalIndex((QsciLexerNASM*)self);
}

int32_t q_scilexernasm_qbase_sender_signal_index(void* self) {
    return QsciLexerNASM_QBaseSenderSignalIndex((QsciLexerNASM*)self);
}

void q_scilexernasm_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerNASM_OnSenderSignalIndex((QsciLexerNASM*)self, (intptr_t)callback);
}

int32_t q_scilexernasm_receivers(void* self, const char* signal) {
    return QsciLexerNASM_Receivers((QsciLexerNASM*)self, signal);
}

int32_t q_scilexernasm_qbase_receivers(void* self, const char* signal) {
    return QsciLexerNASM_QBaseReceivers((QsciLexerNASM*)self, signal);
}

void q_scilexernasm_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerNASM_OnReceivers((QsciLexerNASM*)self, (intptr_t)callback);
}

bool q_scilexernasm_is_signal_connected(void* self, void* signal) {
    return QsciLexerNASM_IsSignalConnected((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

bool q_scilexernasm_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerNASM_QBaseIsSignalConnected((QsciLexerNASM*)self, (QMetaMethod*)signal);
}

void q_scilexernasm_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerNASM_OnIsSignalConnected((QsciLexerNASM*)self, (intptr_t)callback);
}

void q_scilexernasm_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexernasm_delete(void* self) {
    QsciLexerNASM_Delete((QsciLexerNASM*)(self));
}
