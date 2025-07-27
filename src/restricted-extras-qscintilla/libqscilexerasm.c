#include "../libqchar.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerasm.hpp"
#include "libqscilexerasm.h"

QsciLexerAsm* q_scilexerasm_new() {
    return QsciLexerAsm_new();
}

QsciLexerAsm* q_scilexerasm_new2(void* parent) {
    return QsciLexerAsm_new2((QObject*)parent);
}

const QMetaObject* q_scilexerasm_meta_object(void* self) {
    return QsciLexerAsm_MetaObject((QsciLexerAsm*)self);
}

void* q_scilexerasm_metacast(void* self, const char* param1) {
    return QsciLexerAsm_Metacast((QsciLexerAsm*)self, param1);
}

int32_t q_scilexerasm_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAsm_Metacall((QsciLexerAsm*)self, param1, param2, param3);
}

void q_scilexerasm_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerAsm_OnMetacall((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAsm_QBaseMetacall((QsciLexerAsm*)self, param1, param2, param3);
}

const char* q_scilexerasm_tr(const char* s) {
    libqt_string _str = QsciLexerAsm_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerasm_default_color(void* self, int style) {
    return QsciLexerAsm_DefaultColor((QsciLexerAsm*)self, style);
}

bool q_scilexerasm_default_eol_fill(void* self, int style) {
    return QsciLexerAsm_DefaultEolFill((QsciLexerAsm*)self, style);
}

QFont* q_scilexerasm_default_font(void* self, int style) {
    return QsciLexerAsm_DefaultFont((QsciLexerAsm*)self, style);
}

QColor* q_scilexerasm_default_paper(void* self, int style) {
    return QsciLexerAsm_DefaultPaper((QsciLexerAsm*)self, style);
}

const char* q_scilexerasm_keywords(void* self, int set) {
    return QsciLexerAsm_Keywords((QsciLexerAsm*)self, set);
}

const char* q_scilexerasm_description(void* self, int style) {
    libqt_string _str = QsciLexerAsm_Description((QsciLexerAsm*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerasm_refresh_properties(void* self) {
    QsciLexerAsm_RefreshProperties((QsciLexerAsm*)self);
}

bool q_scilexerasm_fold_comments(void* self) {
    return QsciLexerAsm_FoldComments((QsciLexerAsm*)self);
}

bool q_scilexerasm_fold_compact(void* self) {
    return QsciLexerAsm_FoldCompact((QsciLexerAsm*)self);
}

QChar* q_scilexerasm_comment_delimiter(void* self) {
    return QsciLexerAsm_CommentDelimiter((QsciLexerAsm*)self);
}

bool q_scilexerasm_fold_syntax_based(void* self) {
    return QsciLexerAsm_FoldSyntaxBased((QsciLexerAsm*)self);
}

void q_scilexerasm_set_fold_comments(void* self, bool fold) {
    QsciLexerAsm_SetFoldComments((QsciLexerAsm*)self, fold);
}

void q_scilexerasm_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerAsm_OnSetFoldComments((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerAsm_QBaseSetFoldComments((QsciLexerAsm*)self, fold);
}

void q_scilexerasm_set_fold_compact(void* self, bool fold) {
    QsciLexerAsm_SetFoldCompact((QsciLexerAsm*)self, fold);
}

void q_scilexerasm_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerAsm_OnSetFoldCompact((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerAsm_QBaseSetFoldCompact((QsciLexerAsm*)self, fold);
}

void q_scilexerasm_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerAsm_SetCommentDelimiter((QsciLexerAsm*)self, (QChar*)delimeter);
}

void q_scilexerasm_on_set_comment_delimiter(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnSetCommentDelimiter((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_qbase_set_comment_delimiter(void* self, void* delimeter) {
    QsciLexerAsm_QBaseSetCommentDelimiter((QsciLexerAsm*)self, (QChar*)delimeter);
}

void q_scilexerasm_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerAsm_SetFoldSyntaxBased((QsciLexerAsm*)self, syntax_based);
}

void q_scilexerasm_on_set_fold_syntax_based(void* self, void (*slot)(void*, bool)) {
    QsciLexerAsm_OnSetFoldSyntaxBased((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_qbase_set_fold_syntax_based(void* self, bool syntax_based) {
    QsciLexerAsm_QBaseSetFoldSyntaxBased((QsciLexerAsm*)self, syntax_based);
}

bool q_scilexerasm_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAsm_ReadProperties((QsciLexerAsm*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerasm_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerAsm_OnReadProperties((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAsm_QBaseReadProperties((QsciLexerAsm*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerasm_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAsm_WriteProperties((QsciLexerAsm*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerasm_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerAsm_OnWriteProperties((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAsm_QBaseWriteProperties((QsciLexerAsm*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerasm_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerAsm_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerasm_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerAsm_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerasm_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerasm_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerasm_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerasm_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerasm_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerasm_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerasm_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerasm_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerasm_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerasm_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerasm_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerasm_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerasm_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerasm_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerasm_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerasm_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerasm_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerasm_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerasm_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerasm_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerasm_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerasm_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerasm_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerasm_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerasm_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerasm_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerasm_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerasm_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerasm_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerasm_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerasm_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerasm_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerasm_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerasm_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerasm_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerasm_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerasm_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerasm_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerasm_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerasm_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerasm_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerasm_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerasm_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerasm_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerasm_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerasm_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerasm_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerasm_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerasm_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerasm_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerasm_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerasm_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerasm_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerasm_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerasm_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerasm_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerasm_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerasm_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerasm_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

const char* q_scilexerasm_language(void* self) {
    return QsciLexerAsm_Language((QsciLexerAsm*)self);
}

const char* q_scilexerasm_qbase_language(void* self) {
    return QsciLexerAsm_QBaseLanguage((QsciLexerAsm*)self);
}

void q_scilexerasm_on_language(void* self, const char* (*slot)()) {
    QsciLexerAsm_OnLanguage((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_lexer(void* self) {
    return QsciLexerAsm_Lexer((QsciLexerAsm*)self);
}

const char* q_scilexerasm_qbase_lexer(void* self) {
    return QsciLexerAsm_QBaseLexer((QsciLexerAsm*)self);
}

void q_scilexerasm_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerAsm_OnLexer((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_lexer_id(void* self) {
    return QsciLexerAsm_LexerId((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_lexer_id(void* self) {
    return QsciLexerAsm_QBaseLexerId((QsciLexerAsm*)self);
}

void q_scilexerasm_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnLexerId((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_auto_completion_fillups(void* self) {
    return QsciLexerAsm_AutoCompletionFillups((QsciLexerAsm*)self);
}

const char* q_scilexerasm_qbase_auto_completion_fillups(void* self) {
    return QsciLexerAsm_QBaseAutoCompletionFillups((QsciLexerAsm*)self);
}

void q_scilexerasm_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerAsm_OnAutoCompletionFillups((QsciLexerAsm*)self, (intptr_t)slot);
}

const char** q_scilexerasm_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAsm_AutoCompletionWordSeparators((QsciLexerAsm*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_scilexerasm_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAsm_QBaseAutoCompletionWordSeparators((QsciLexerAsm*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_scilexerasm_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerAsm_OnAutoCompletionWordSeparators((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_block_end(void* self, int* style) {
    return QsciLexerAsm_BlockEnd((QsciLexerAsm*)self, style);
}

const char* q_scilexerasm_qbase_block_end(void* self, int* style) {
    return QsciLexerAsm_QBaseBlockEnd((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAsm_OnBlockEnd((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_block_lookback(void* self) {
    return QsciLexerAsm_BlockLookback((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_block_lookback(void* self) {
    return QsciLexerAsm_QBaseBlockLookback((QsciLexerAsm*)self);
}

void q_scilexerasm_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnBlockLookback((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_block_start(void* self, int* style) {
    return QsciLexerAsm_BlockStart((QsciLexerAsm*)self, style);
}

const char* q_scilexerasm_qbase_block_start(void* self, int* style) {
    return QsciLexerAsm_QBaseBlockStart((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAsm_OnBlockStart((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_block_start_keyword(void* self, int* style) {
    return QsciLexerAsm_BlockStartKeyword((QsciLexerAsm*)self, style);
}

const char* q_scilexerasm_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerAsm_QBaseBlockStartKeyword((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerAsm_OnBlockStartKeyword((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_brace_style(void* self) {
    return QsciLexerAsm_BraceStyle((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_brace_style(void* self) {
    return QsciLexerAsm_QBaseBraceStyle((QsciLexerAsm*)self);
}

void q_scilexerasm_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnBraceStyle((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_case_sensitive(void* self) {
    return QsciLexerAsm_CaseSensitive((QsciLexerAsm*)self);
}

bool q_scilexerasm_qbase_case_sensitive(void* self) {
    return QsciLexerAsm_QBaseCaseSensitive((QsciLexerAsm*)self);
}

void q_scilexerasm_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerAsm_OnCaseSensitive((QsciLexerAsm*)self, (intptr_t)slot);
}

QColor* q_scilexerasm_color(void* self, int style) {
    return QsciLexerAsm_Color((QsciLexerAsm*)self, style);
}

QColor* q_scilexerasm_qbase_color(void* self, int style) {
    return QsciLexerAsm_QBaseColor((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAsm_OnColor((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_eol_fill(void* self, int style) {
    return QsciLexerAsm_EolFill((QsciLexerAsm*)self, style);
}

bool q_scilexerasm_qbase_eol_fill(void* self, int style) {
    return QsciLexerAsm_QBaseEolFill((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerAsm_OnEolFill((QsciLexerAsm*)self, (intptr_t)slot);
}

QFont* q_scilexerasm_font(void* self, int style) {
    return QsciLexerAsm_Font((QsciLexerAsm*)self, style);
}

QFont* q_scilexerasm_qbase_font(void* self, int style) {
    return QsciLexerAsm_QBaseFont((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerAsm_OnFont((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_indentation_guide_view(void* self) {
    return QsciLexerAsm_IndentationGuideView((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_indentation_guide_view(void* self) {
    return QsciLexerAsm_QBaseIndentationGuideView((QsciLexerAsm*)self);
}

void q_scilexerasm_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnIndentationGuideView((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_default_style(void* self) {
    return QsciLexerAsm_DefaultStyle((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_default_style(void* self) {
    return QsciLexerAsm_QBaseDefaultStyle((QsciLexerAsm*)self);
}

void q_scilexerasm_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnDefaultStyle((QsciLexerAsm*)self, (intptr_t)slot);
}

QColor* q_scilexerasm_paper(void* self, int style) {
    return QsciLexerAsm_Paper((QsciLexerAsm*)self, style);
}

QColor* q_scilexerasm_qbase_paper(void* self, int style) {
    return QsciLexerAsm_QBasePaper((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAsm_OnPaper((QsciLexerAsm*)self, (intptr_t)slot);
}

QColor* q_scilexerasm_default_color2(void* self, int style) {
    return QsciLexerAsm_DefaultColor2((QsciLexerAsm*)self, style);
}

QColor* q_scilexerasm_qbase_default_color2(void* self, int style) {
    return QsciLexerAsm_QBaseDefaultColor2((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_default_color2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAsm_OnDefaultColor2((QsciLexerAsm*)self, (intptr_t)slot);
}

QFont* q_scilexerasm_default_font2(void* self, int style) {
    return QsciLexerAsm_DefaultFont2((QsciLexerAsm*)self, style);
}

QFont* q_scilexerasm_qbase_default_font2(void* self, int style) {
    return QsciLexerAsm_QBaseDefaultFont2((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_default_font2(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerAsm_OnDefaultFont2((QsciLexerAsm*)self, (intptr_t)slot);
}

QColor* q_scilexerasm_default_paper2(void* self, int style) {
    return QsciLexerAsm_DefaultPaper2((QsciLexerAsm*)self, style);
}

QColor* q_scilexerasm_qbase_default_paper2(void* self, int style) {
    return QsciLexerAsm_QBaseDefaultPaper2((QsciLexerAsm*)self, style);
}

void q_scilexerasm_on_default_paper2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerAsm_OnDefaultPaper2((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_editor(void* self, void* editor) {
    QsciLexerAsm_SetEditor((QsciLexerAsm*)self, (QsciScintilla*)editor);
}

void q_scilexerasm_qbase_set_editor(void* self, void* editor) {
    QsciLexerAsm_QBaseSetEditor((QsciLexerAsm*)self, (QsciScintilla*)editor);
}

void q_scilexerasm_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnSetEditor((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_style_bits_needed(void* self) {
    return QsciLexerAsm_StyleBitsNeeded((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_style_bits_needed(void* self) {
    return QsciLexerAsm_QBaseStyleBitsNeeded((QsciLexerAsm*)self);
}

void q_scilexerasm_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnStyleBitsNeeded((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_word_characters(void* self) {
    return QsciLexerAsm_WordCharacters((QsciLexerAsm*)self);
}

const char* q_scilexerasm_qbase_word_characters(void* self) {
    return QsciLexerAsm_QBaseWordCharacters((QsciLexerAsm*)self);
}

void q_scilexerasm_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerAsm_OnWordCharacters((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAsm_SetAutoIndentStyle((QsciLexerAsm*)self, autoindentstyle);
}

void q_scilexerasm_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAsm_QBaseSetAutoIndentStyle((QsciLexerAsm*)self, autoindentstyle);
}

void q_scilexerasm_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerAsm_OnSetAutoIndentStyle((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_color(void* self, void* c, int style) {
    QsciLexerAsm_SetColor((QsciLexerAsm*)self, (QColor*)c, style);
}

void q_scilexerasm_qbase_set_color(void* self, void* c, int style) {
    QsciLexerAsm_QBaseSetColor((QsciLexerAsm*)self, (QColor*)c, style);
}

void q_scilexerasm_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAsm_OnSetColor((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAsm_SetEolFill((QsciLexerAsm*)self, eoffill, style);
}

void q_scilexerasm_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAsm_QBaseSetEolFill((QsciLexerAsm*)self, eoffill, style);
}

void q_scilexerasm_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerAsm_OnSetEolFill((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_font(void* self, void* f, int style) {
    QsciLexerAsm_SetFont((QsciLexerAsm*)self, (QFont*)f, style);
}

void q_scilexerasm_qbase_set_font(void* self, void* f, int style) {
    QsciLexerAsm_QBaseSetFont((QsciLexerAsm*)self, (QFont*)f, style);
}

void q_scilexerasm_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAsm_OnSetFont((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_set_paper(void* self, void* c, int style) {
    QsciLexerAsm_SetPaper((QsciLexerAsm*)self, (QColor*)c, style);
}

void q_scilexerasm_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerAsm_QBaseSetPaper((QsciLexerAsm*)self, (QColor*)c, style);
}

void q_scilexerasm_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerAsm_OnSetPaper((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_event(void* self, void* event) {
    return QsciLexerAsm_Event((QsciLexerAsm*)self, (QEvent*)event);
}

bool q_scilexerasm_qbase_event(void* self, void* event) {
    return QsciLexerAsm_QBaseEvent((QsciLexerAsm*)self, (QEvent*)event);
}

void q_scilexerasm_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerAsm_OnEvent((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAsm_EventFilter((QsciLexerAsm*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerasm_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAsm_QBaseEventFilter((QsciLexerAsm*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerasm_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerAsm_OnEventFilter((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_timer_event(void* self, void* event) {
    QsciLexerAsm_TimerEvent((QsciLexerAsm*)self, (QTimerEvent*)event);
}

void q_scilexerasm_qbase_timer_event(void* self, void* event) {
    QsciLexerAsm_QBaseTimerEvent((QsciLexerAsm*)self, (QTimerEvent*)event);
}

void q_scilexerasm_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnTimerEvent((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_child_event(void* self, void* event) {
    QsciLexerAsm_ChildEvent((QsciLexerAsm*)self, (QChildEvent*)event);
}

void q_scilexerasm_qbase_child_event(void* self, void* event) {
    QsciLexerAsm_QBaseChildEvent((QsciLexerAsm*)self, (QChildEvent*)event);
}

void q_scilexerasm_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnChildEvent((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_custom_event(void* self, void* event) {
    QsciLexerAsm_CustomEvent((QsciLexerAsm*)self, (QEvent*)event);
}

void q_scilexerasm_qbase_custom_event(void* self, void* event) {
    QsciLexerAsm_QBaseCustomEvent((QsciLexerAsm*)self, (QEvent*)event);
}

void q_scilexerasm_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnCustomEvent((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_connect_notify(void* self, void* signal) {
    QsciLexerAsm_ConnectNotify((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

void q_scilexerasm_qbase_connect_notify(void* self, void* signal) {
    QsciLexerAsm_QBaseConnectNotify((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

void q_scilexerasm_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnConnectNotify((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_disconnect_notify(void* self, void* signal) {
    QsciLexerAsm_DisconnectNotify((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

void q_scilexerasm_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerAsm_QBaseDisconnectNotify((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

void q_scilexerasm_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerAsm_OnDisconnectNotify((QsciLexerAsm*)self, (intptr_t)slot);
}

char* q_scilexerasm_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerAsm_TextAsBytes((QsciLexerAsm*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerasm_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerAsm_QBaseTextAsBytes((QsciLexerAsm*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerasm_on_text_as_bytes(void* self, char* (*slot)(void*, const char*)) {
    QsciLexerAsm_OnTextAsBytes((QsciLexerAsm*)self, (intptr_t)slot);
}

const char* q_scilexerasm_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerAsm_BytesAsText((QsciLexerAsm*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerasm_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerAsm_QBaseBytesAsText((QsciLexerAsm*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerasm_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int)) {
    QsciLexerAsm_OnBytesAsText((QsciLexerAsm*)self, (intptr_t)slot);
}

QObject* q_scilexerasm_sender(void* self) {
    return QsciLexerAsm_Sender((QsciLexerAsm*)self);
}

QObject* q_scilexerasm_qbase_sender(void* self) {
    return QsciLexerAsm_QBaseSender((QsciLexerAsm*)self);
}

void q_scilexerasm_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerAsm_OnSender((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_sender_signal_index(void* self) {
    return QsciLexerAsm_SenderSignalIndex((QsciLexerAsm*)self);
}

int32_t q_scilexerasm_qbase_sender_signal_index(void* self) {
    return QsciLexerAsm_QBaseSenderSignalIndex((QsciLexerAsm*)self);
}

void q_scilexerasm_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerAsm_OnSenderSignalIndex((QsciLexerAsm*)self, (intptr_t)slot);
}

int32_t q_scilexerasm_receivers(void* self, const char* signal) {
    return QsciLexerAsm_Receivers((QsciLexerAsm*)self, signal);
}

int32_t q_scilexerasm_qbase_receivers(void* self, const char* signal) {
    return QsciLexerAsm_QBaseReceivers((QsciLexerAsm*)self, signal);
}

void q_scilexerasm_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerAsm_OnReceivers((QsciLexerAsm*)self, (intptr_t)slot);
}

bool q_scilexerasm_is_signal_connected(void* self, void* signal) {
    return QsciLexerAsm_IsSignalConnected((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

bool q_scilexerasm_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerAsm_QBaseIsSignalConnected((QsciLexerAsm*)self, (QMetaMethod*)signal);
}

void q_scilexerasm_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerAsm_OnIsSignalConnected((QsciLexerAsm*)self, (intptr_t)slot);
}

void q_scilexerasm_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexerasm_delete(void* self) {
    QsciLexerAsm_Delete((QsciLexerAsm*)(self));
}
