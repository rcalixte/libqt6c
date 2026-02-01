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
#include "libqscilexermasm.hpp"
#include "libqscilexermasm.h"

QsciLexerMASM* q_scilexermasm_new() {
    return QsciLexerMASM_new();
}

QsciLexerMASM* q_scilexermasm_new2(void* parent) {
    return QsciLexerMASM_new2((QObject*)parent);
}

const QMetaObject* q_scilexermasm_meta_object(void* self) {
    return QsciLexerMASM_MetaObject((QsciLexerMASM*)self);
}

void q_scilexermasm_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerMASM_OnMetaObject((QsciLexerMASM*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexermasm_qbase_meta_object(void* self) {
    return QsciLexerMASM_QBaseMetaObject((QsciLexerMASM*)self);
}

void* q_scilexermasm_metacast(void* self, const char* param1) {
    return QsciLexerMASM_Metacast((QsciLexerMASM*)self, param1);
}

void q_scilexermasm_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerMASM_OnMetacast((QsciLexerMASM*)self, (intptr_t)callback);
}

void* q_scilexermasm_qbase_metacast(void* self, const char* param1) {
    return QsciLexerMASM_QBaseMetacast((QsciLexerMASM*)self, param1);
}

int32_t q_scilexermasm_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerMASM_Metacall((QsciLexerMASM*)self, param1, param2, param3);
}

void q_scilexermasm_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerMASM_OnMetacall((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerMASM_QBaseMetacall((QsciLexerMASM*)self, param1, param2, param3);
}

const char* q_scilexermasm_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermasm_language(void* self) {
    return QsciLexerMASM_Language((QsciLexerMASM*)self);
}

const char* q_scilexermasm_lexer(void* self) {
    return QsciLexerMASM_Lexer((QsciLexerMASM*)self);
}

const char* q_scilexermasm_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermasm_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexermasm_default_color(void* self, int style) {
    return QsciLexerAsm_DefaultColor((QsciLexerAsm*)self, style);
}

QFont* q_scilexermasm_default_font(void* self, int style) {
    return QsciLexerAsm_DefaultFont((QsciLexerAsm*)self, style);
}

QColor* q_scilexermasm_default_paper(void* self, int style) {
    return QsciLexerAsm_DefaultPaper((QsciLexerAsm*)self, style);
}

bool q_scilexermasm_fold_comments(void* self) {
    return QsciLexerAsm_FoldComments((QsciLexerAsm*)self);
}

bool q_scilexermasm_fold_compact(void* self) {
    return QsciLexerAsm_FoldCompact((QsciLexerAsm*)self);
}

QChar* q_scilexermasm_comment_delimiter(void* self) {
    return QsciLexerAsm_CommentDelimiter((QsciLexerAsm*)self);
}

bool q_scilexermasm_fold_syntax_based(void* self) {
    return QsciLexerAsm_FoldSyntaxBased((QsciLexerAsm*)self);
}

QsciAbstractAPIs* q_scilexermasm_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexermasm_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexermasm_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexermasm_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexermasm_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexermasm_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexermasm_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexermasm_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexermasm_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexermasm_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermasm_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermasm_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexermasm_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermasm_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexermasm_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermasm_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermasm_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermasm_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexermasm_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexermasm_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexermasm_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexermasm_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermasm_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexermasm_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexermasm_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexermasm_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexermasm_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexermasm_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexermasm_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexermasm_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexermasm_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexermasm_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexermasm_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexermasm_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexermasm_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexermasm_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexermasm_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexermasm_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexermasm_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexermasm_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexermasm_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexermasm_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexermasm_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexermasm_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexermasm_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexermasm_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexermasm_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexermasm_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexermasm_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexermasm_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexermasm_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexermasm_dynamic_property_names\n");
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

QBindingStorage* q_scilexermasm_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexermasm_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexermasm_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexermasm_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexermasm_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexermasm_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexermasm_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexermasm_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexermasm_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexermasm_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexermasm_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexermasm_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexermasm_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexermasm_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexermasm_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexermasm_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexermasm_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexermasm_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexermasm_set_fold_comments(void* self, bool fold) {
    QsciLexerMASM_SetFoldComments((QsciLexerMASM*)self, fold);
}

void q_scilexermasm_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerMASM_QBaseSetFoldComments((QsciLexerMASM*)self, fold);
}

void q_scilexermasm_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerMASM_OnSetFoldComments((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_fold_compact(void* self, bool fold) {
    QsciLexerMASM_SetFoldCompact((QsciLexerMASM*)self, fold);
}

void q_scilexermasm_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerMASM_QBaseSetFoldCompact((QsciLexerMASM*)self, fold);
}

void q_scilexermasm_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerMASM_OnSetFoldCompact((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerMASM_SetCommentDelimiter((QsciLexerMASM*)self, (QChar*)delimeter);
}

void q_scilexermasm_qbase_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerMASM_QBaseSetCommentDelimiter((QsciLexerMASM*)self, (QChar*)delimeter);
}

void q_scilexermasm_on_set_comment_delimiter(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnSetCommentDelimiter((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerMASM_SetFoldSyntaxBased((QsciLexerMASM*)self, syntax_based);
}

void q_scilexermasm_qbase_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerMASM_QBaseSetFoldSyntaxBased((QsciLexerMASM*)self, syntax_based);
}

void q_scilexermasm_on_set_fold_syntax_based(void* self, void (*callback)(void*, bool)) {
    QsciLexerMASM_OnSetFoldSyntaxBased((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_lexer_id(void* self) {
    return QsciLexerMASM_LexerId((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_lexer_id(void* self) {
    return QsciLexerMASM_QBaseLexerId((QsciLexerMASM*)self);
}

void q_scilexermasm_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnLexerId((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_auto_completion_fillups(void* self) {
    return QsciLexerMASM_AutoCompletionFillups((QsciLexerMASM*)self);
}

const char* q_scilexermasm_qbase_auto_completion_fillups(void* self) {
    return QsciLexerMASM_QBaseAutoCompletionFillups((QsciLexerMASM*)self);
}

void q_scilexermasm_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerMASM_OnAutoCompletionFillups((QsciLexerMASM*)self, (intptr_t)callback);
}

const char** q_scilexermasm_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMASM_AutoCompletionWordSeparators((QsciLexerMASM*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexermasm_auto_completion_word_separators\n");
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

const char** q_scilexermasm_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMASM_QBaseAutoCompletionWordSeparators((QsciLexerMASM*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexermasm_auto_completion_word_separators\n");
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

void q_scilexermasm_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerMASM_OnAutoCompletionWordSeparators((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_block_end(void* self, int* style) {
    return QsciLexerMASM_BlockEnd((QsciLexerMASM*)self, style);
}

const char* q_scilexermasm_qbase_block_end(void* self, int* style) {
    return QsciLexerMASM_QBaseBlockEnd((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMASM_OnBlockEnd((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_block_lookback(void* self) {
    return QsciLexerMASM_BlockLookback((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_block_lookback(void* self) {
    return QsciLexerMASM_QBaseBlockLookback((QsciLexerMASM*)self);
}

void q_scilexermasm_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnBlockLookback((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_block_start(void* self, int* style) {
    return QsciLexerMASM_BlockStart((QsciLexerMASM*)self, style);
}

const char* q_scilexermasm_qbase_block_start(void* self, int* style) {
    return QsciLexerMASM_QBaseBlockStart((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMASM_OnBlockStart((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_block_start_keyword(void* self, int* style) {
    return QsciLexerMASM_BlockStartKeyword((QsciLexerMASM*)self, style);
}

const char* q_scilexermasm_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerMASM_QBaseBlockStartKeyword((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMASM_OnBlockStartKeyword((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_brace_style(void* self) {
    return QsciLexerMASM_BraceStyle((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_brace_style(void* self) {
    return QsciLexerMASM_QBaseBraceStyle((QsciLexerMASM*)self);
}

void q_scilexermasm_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnBraceStyle((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_case_sensitive(void* self) {
    return QsciLexerMASM_CaseSensitive((QsciLexerMASM*)self);
}

bool q_scilexermasm_qbase_case_sensitive(void* self) {
    return QsciLexerMASM_QBaseCaseSensitive((QsciLexerMASM*)self);
}

void q_scilexermasm_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerMASM_OnCaseSensitive((QsciLexerMASM*)self, (intptr_t)callback);
}

QColor* q_scilexermasm_color(void* self, int style) {
    return QsciLexerMASM_Color((QsciLexerMASM*)self, style);
}

QColor* q_scilexermasm_qbase_color(void* self, int style) {
    return QsciLexerMASM_QBaseColor((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMASM_OnColor((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_eol_fill(void* self, int style) {
    return QsciLexerMASM_EolFill((QsciLexerMASM*)self, style);
}

bool q_scilexermasm_qbase_eol_fill(void* self, int style) {
    return QsciLexerMASM_QBaseEolFill((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerMASM_OnEolFill((QsciLexerMASM*)self, (intptr_t)callback);
}

QFont* q_scilexermasm_font(void* self, int style) {
    return QsciLexerMASM_Font((QsciLexerMASM*)self, style);
}

QFont* q_scilexermasm_qbase_font(void* self, int style) {
    return QsciLexerMASM_QBaseFont((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerMASM_OnFont((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_indentation_guide_view(void* self) {
    return QsciLexerMASM_IndentationGuideView((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_indentation_guide_view(void* self) {
    return QsciLexerMASM_QBaseIndentationGuideView((QsciLexerMASM*)self);
}

void q_scilexermasm_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnIndentationGuideView((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_keywords(void* self, int set) {
    return QsciLexerMASM_Keywords((QsciLexerMASM*)self, set);
}

const char* q_scilexermasm_qbase_keywords(void* self, int set) {
    return QsciLexerMASM_QBaseKeywords((QsciLexerMASM*)self, set);
}

void q_scilexermasm_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerMASM_OnKeywords((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_default_style(void* self) {
    return QsciLexerMASM_DefaultStyle((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_default_style(void* self) {
    return QsciLexerMASM_QBaseDefaultStyle((QsciLexerMASM*)self);
}

void q_scilexermasm_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnDefaultStyle((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_description(void* self, int style) {
    libqt_string _str = QsciLexerMASM_Description((QsciLexerMASM*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermasm_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerMASM_QBaseDescription((QsciLexerMASM*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermasm_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerMASM_OnDescription((QsciLexerMASM*)self, (intptr_t)callback);
}

QColor* q_scilexermasm_paper(void* self, int style) {
    return QsciLexerMASM_Paper((QsciLexerMASM*)self, style);
}

QColor* q_scilexermasm_qbase_paper(void* self, int style) {
    return QsciLexerMASM_QBasePaper((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMASM_OnPaper((QsciLexerMASM*)self, (intptr_t)callback);
}

QColor* q_scilexermasm_default_color2(void* self, int style) {
    return QsciLexerMASM_DefaultColor2((QsciLexerMASM*)self, style);
}

QColor* q_scilexermasm_qbase_default_color2(void* self, int style) {
    return QsciLexerMASM_QBaseDefaultColor2((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMASM_OnDefaultColor2((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_default_eol_fill(void* self, int style) {
    return QsciLexerMASM_DefaultEolFill((QsciLexerMASM*)self, style);
}

bool q_scilexermasm_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerMASM_QBaseDefaultEolFill((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerMASM_OnDefaultEolFill((QsciLexerMASM*)self, (intptr_t)callback);
}

QFont* q_scilexermasm_default_font2(void* self, int style) {
    return QsciLexerMASM_DefaultFont2((QsciLexerMASM*)self, style);
}

QFont* q_scilexermasm_qbase_default_font2(void* self, int style) {
    return QsciLexerMASM_QBaseDefaultFont2((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerMASM_OnDefaultFont2((QsciLexerMASM*)self, (intptr_t)callback);
}

QColor* q_scilexermasm_default_paper2(void* self, int style) {
    return QsciLexerMASM_DefaultPaper2((QsciLexerMASM*)self, style);
}

QColor* q_scilexermasm_qbase_default_paper2(void* self, int style) {
    return QsciLexerMASM_QBaseDefaultPaper2((QsciLexerMASM*)self, style);
}

void q_scilexermasm_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMASM_OnDefaultPaper2((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_editor(void* self, void* editor) {
    QsciLexerMASM_SetEditor((QsciLexerMASM*)self, (QsciScintilla*)editor);
}

void q_scilexermasm_qbase_set_editor(void* self, void* editor) {
    QsciLexerMASM_QBaseSetEditor((QsciLexerMASM*)self, (QsciScintilla*)editor);
}

void q_scilexermasm_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnSetEditor((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_refresh_properties(void* self) {
    QsciLexerMASM_RefreshProperties((QsciLexerMASM*)self);
}

void q_scilexermasm_qbase_refresh_properties(void* self) {
    QsciLexerMASM_QBaseRefreshProperties((QsciLexerMASM*)self);
}

void q_scilexermasm_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerMASM_OnRefreshProperties((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_style_bits_needed(void* self) {
    return QsciLexerMASM_StyleBitsNeeded((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_style_bits_needed(void* self) {
    return QsciLexerMASM_QBaseStyleBitsNeeded((QsciLexerMASM*)self);
}

void q_scilexermasm_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnStyleBitsNeeded((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_word_characters(void* self) {
    return QsciLexerMASM_WordCharacters((QsciLexerMASM*)self);
}

const char* q_scilexermasm_qbase_word_characters(void* self) {
    return QsciLexerMASM_QBaseWordCharacters((QsciLexerMASM*)self);
}

void q_scilexermasm_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerMASM_OnWordCharacters((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMASM_SetAutoIndentStyle((QsciLexerMASM*)self, autoindentstyle);
}

void q_scilexermasm_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMASM_QBaseSetAutoIndentStyle((QsciLexerMASM*)self, autoindentstyle);
}

void q_scilexermasm_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerMASM_OnSetAutoIndentStyle((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_color(void* self, void* c, int style) {
    QsciLexerMASM_SetColor((QsciLexerMASM*)self, (QColor*)c, style);
}

void q_scilexermasm_qbase_set_color(void* self, void* c, int style) {
    QsciLexerMASM_QBaseSetColor((QsciLexerMASM*)self, (QColor*)c, style);
}

void q_scilexermasm_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMASM_OnSetColor((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMASM_SetEolFill((QsciLexerMASM*)self, eoffill, style);
}

void q_scilexermasm_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMASM_QBaseSetEolFill((QsciLexerMASM*)self, eoffill, style);
}

void q_scilexermasm_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerMASM_OnSetEolFill((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_font(void* self, void* f, int style) {
    QsciLexerMASM_SetFont((QsciLexerMASM*)self, (QFont*)f, style);
}

void q_scilexermasm_qbase_set_font(void* self, void* f, int style) {
    QsciLexerMASM_QBaseSetFont((QsciLexerMASM*)self, (QFont*)f, style);
}

void q_scilexermasm_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMASM_OnSetFont((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_set_paper(void* self, void* c, int style) {
    QsciLexerMASM_SetPaper((QsciLexerMASM*)self, (QColor*)c, style);
}

void q_scilexermasm_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerMASM_QBaseSetPaper((QsciLexerMASM*)self, (QColor*)c, style);
}

void q_scilexermasm_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMASM_OnSetPaper((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMASM_ReadProperties((QsciLexerMASM*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermasm_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMASM_QBaseReadProperties((QsciLexerMASM*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermasm_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerMASM_OnReadProperties((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMASM_WriteProperties((QsciLexerMASM*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermasm_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMASM_QBaseWriteProperties((QsciLexerMASM*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermasm_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerMASM_OnWriteProperties((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_event(void* self, void* event) {
    return QsciLexerMASM_Event((QsciLexerMASM*)self, (QEvent*)event);
}

bool q_scilexermasm_qbase_event(void* self, void* event) {
    return QsciLexerMASM_QBaseEvent((QsciLexerMASM*)self, (QEvent*)event);
}

void q_scilexermasm_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerMASM_OnEvent((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMASM_EventFilter((QsciLexerMASM*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexermasm_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMASM_QBaseEventFilter((QsciLexerMASM*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexermasm_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerMASM_OnEventFilter((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_timer_event(void* self, void* event) {
    QsciLexerMASM_TimerEvent((QsciLexerMASM*)self, (QTimerEvent*)event);
}

void q_scilexermasm_qbase_timer_event(void* self, void* event) {
    QsciLexerMASM_QBaseTimerEvent((QsciLexerMASM*)self, (QTimerEvent*)event);
}

void q_scilexermasm_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnTimerEvent((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_child_event(void* self, void* event) {
    QsciLexerMASM_ChildEvent((QsciLexerMASM*)self, (QChildEvent*)event);
}

void q_scilexermasm_qbase_child_event(void* self, void* event) {
    QsciLexerMASM_QBaseChildEvent((QsciLexerMASM*)self, (QChildEvent*)event);
}

void q_scilexermasm_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnChildEvent((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_custom_event(void* self, void* event) {
    QsciLexerMASM_CustomEvent((QsciLexerMASM*)self, (QEvent*)event);
}

void q_scilexermasm_qbase_custom_event(void* self, void* event) {
    QsciLexerMASM_QBaseCustomEvent((QsciLexerMASM*)self, (QEvent*)event);
}

void q_scilexermasm_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnCustomEvent((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_connect_notify(void* self, void* signal) {
    QsciLexerMASM_ConnectNotify((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

void q_scilexermasm_qbase_connect_notify(void* self, void* signal) {
    QsciLexerMASM_QBaseConnectNotify((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

void q_scilexermasm_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnConnectNotify((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_disconnect_notify(void* self, void* signal) {
    QsciLexerMASM_DisconnectNotify((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

void q_scilexermasm_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerMASM_QBaseDisconnectNotify((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

void q_scilexermasm_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerMASM_OnDisconnectNotify((QsciLexerMASM*)self, (intptr_t)callback);
}

char* q_scilexermasm_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerMASM_TextAsBytes((QsciLexerMASM*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexermasm_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerMASM_QBaseTextAsBytes((QsciLexerMASM*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermasm_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerMASM_OnTextAsBytes((QsciLexerMASM*)self, (intptr_t)callback);
}

const char* q_scilexermasm_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerMASM_BytesAsText((QsciLexerMASM*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermasm_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerMASM_QBaseBytesAsText((QsciLexerMASM*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermasm_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerMASM_OnBytesAsText((QsciLexerMASM*)self, (intptr_t)callback);
}

QObject* q_scilexermasm_sender(void* self) {
    return QsciLexerMASM_Sender((QsciLexerMASM*)self);
}

QObject* q_scilexermasm_qbase_sender(void* self) {
    return QsciLexerMASM_QBaseSender((QsciLexerMASM*)self);
}

void q_scilexermasm_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerMASM_OnSender((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_sender_signal_index(void* self) {
    return QsciLexerMASM_SenderSignalIndex((QsciLexerMASM*)self);
}

int32_t q_scilexermasm_qbase_sender_signal_index(void* self) {
    return QsciLexerMASM_QBaseSenderSignalIndex((QsciLexerMASM*)self);
}

void q_scilexermasm_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerMASM_OnSenderSignalIndex((QsciLexerMASM*)self, (intptr_t)callback);
}

int32_t q_scilexermasm_receivers(void* self, const char* signal) {
    return QsciLexerMASM_Receivers((QsciLexerMASM*)self, signal);
}

int32_t q_scilexermasm_qbase_receivers(void* self, const char* signal) {
    return QsciLexerMASM_QBaseReceivers((QsciLexerMASM*)self, signal);
}

void q_scilexermasm_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerMASM_OnReceivers((QsciLexerMASM*)self, (intptr_t)callback);
}

bool q_scilexermasm_is_signal_connected(void* self, void* signal) {
    return QsciLexerMASM_IsSignalConnected((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

bool q_scilexermasm_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerMASM_QBaseIsSignalConnected((QsciLexerMASM*)self, (QMetaMethod*)signal);
}

void q_scilexermasm_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerMASM_OnIsSignalConnected((QsciLexerMASM*)self, (intptr_t)callback);
}

void q_scilexermasm_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexermasm_delete(void* self) {
    QsciLexerMASM_Delete((QsciLexerMASM*)(self));
}
