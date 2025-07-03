#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexersql.hpp"
#include "libqscilexersql.h"

QsciLexerSQL* q_scilexersql_new() {
    return QsciLexerSQL_new();
}

QsciLexerSQL* q_scilexersql_new2(void* parent) {
    return QsciLexerSQL_new2((QObject*)parent);
}

const QMetaObject* q_scilexersql_meta_object(void* self) {
    return QsciLexerSQL_MetaObject((QsciLexerSQL*)self);
}

void* q_scilexersql_metacast(void* self, const char* param1) {
    return QsciLexerSQL_Metacast((QsciLexerSQL*)self, param1);
}

int32_t q_scilexersql_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSQL_Metacall((QsciLexerSQL*)self, param1, param2, param3);
}

void q_scilexersql_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerSQL_OnMetacall((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerSQL_QBaseMetacall((QsciLexerSQL*)self, param1, param2, param3);
}

const char* q_scilexersql_tr(const char* s) {
    libqt_string _str = QsciLexerSQL_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersql_language(void* self) {
    return QsciLexerSQL_Language((QsciLexerSQL*)self);
}

const char* q_scilexersql_lexer(void* self) {
    return QsciLexerSQL_Lexer((QsciLexerSQL*)self);
}

int32_t q_scilexersql_brace_style(void* self) {
    return QsciLexerSQL_BraceStyle((QsciLexerSQL*)self);
}

QColor* q_scilexersql_default_color(void* self, int style) {
    return QsciLexerSQL_DefaultColor((QsciLexerSQL*)self, style);
}

bool q_scilexersql_default_eol_fill(void* self, int style) {
    return QsciLexerSQL_DefaultEolFill((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_default_font(void* self, int style) {
    return QsciLexerSQL_DefaultFont((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_default_paper(void* self, int style) {
    return QsciLexerSQL_DefaultPaper((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_keywords(void* self, int set) {
    return QsciLexerSQL_Keywords((QsciLexerSQL*)self, set);
}

const char* q_scilexersql_description(void* self, int style) {
    libqt_string _str = QsciLexerSQL_Description((QsciLexerSQL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersql_refresh_properties(void* self) {
    QsciLexerSQL_RefreshProperties((QsciLexerSQL*)self);
}

bool q_scilexersql_backslash_escapes(void* self) {
    return QsciLexerSQL_BackslashEscapes((QsciLexerSQL*)self);
}

void q_scilexersql_set_dotted_words(void* self, bool enable) {
    QsciLexerSQL_SetDottedWords((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_dotted_words(void* self) {
    return QsciLexerSQL_DottedWords((QsciLexerSQL*)self);
}

void q_scilexersql_set_fold_at_else(void* self, bool fold) {
    QsciLexerSQL_SetFoldAtElse((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_fold_at_else(void* self) {
    return QsciLexerSQL_FoldAtElse((QsciLexerSQL*)self);
}

bool q_scilexersql_fold_comments(void* self) {
    return QsciLexerSQL_FoldComments((QsciLexerSQL*)self);
}

bool q_scilexersql_fold_compact(void* self) {
    return QsciLexerSQL_FoldCompact((QsciLexerSQL*)self);
}

void q_scilexersql_set_fold_only_begin(void* self, bool fold) {
    QsciLexerSQL_SetFoldOnlyBegin((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_fold_only_begin(void* self) {
    return QsciLexerSQL_FoldOnlyBegin((QsciLexerSQL*)self);
}

void q_scilexersql_set_hash_comments(void* self, bool enable) {
    QsciLexerSQL_SetHashComments((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_hash_comments(void* self) {
    return QsciLexerSQL_HashComments((QsciLexerSQL*)self);
}

void q_scilexersql_set_quoted_identifiers(void* self, bool enable) {
    QsciLexerSQL_SetQuotedIdentifiers((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_quoted_identifiers(void* self) {
    return QsciLexerSQL_QuotedIdentifiers((QsciLexerSQL*)self);
}

void q_scilexersql_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_SetBackslashEscapes((QsciLexerSQL*)self, enable);
}

void q_scilexersql_on_set_backslash_escapes(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetBackslashEscapes((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_qbase_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_QBaseSetBackslashEscapes((QsciLexerSQL*)self, enable);
}

void q_scilexersql_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_SetFoldComments((QsciLexerSQL*)self, fold);
}

void q_scilexersql_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetFoldComments((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_QBaseSetFoldComments((QsciLexerSQL*)self, fold);
}

void q_scilexersql_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_SetFoldCompact((QsciLexerSQL*)self, fold);
}

void q_scilexersql_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerSQL_OnSetFoldCompact((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_QBaseSetFoldCompact((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_ReadProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersql_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSQL_OnReadProperties((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_QBaseReadProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersql_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_WriteProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersql_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerSQL_OnWriteProperties((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_QBaseWriteProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexersql_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerSQL_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersql_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerSQL_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexersql_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexersql_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexersql_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexersql_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexersql_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexersql_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexersql_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexersql_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexersql_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexersql_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersql_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexersql_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexersql_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexersql_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexersql_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexersql_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersql_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexersql_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexersql_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexersql_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexersql_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexersql_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersql_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexersql_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexersql_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexersql_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexersql_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexersql_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexersql_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexersql_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexersql_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexersql_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexersql_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexersql_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexersql_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexersql_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexersql_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexersql_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexersql_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexersql_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexersql_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexersql_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexersql_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexersql_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexersql_dynamic_property_names(void* self) {
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

QBindingStorage* q_scilexersql_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexersql_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexersql_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexersql_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexersql_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexersql_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexersql_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexersql_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexersql_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexersql_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexersql_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexersql_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexersql_lexer_id(void* self) {
    return QsciLexerSQL_LexerId((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_lexer_id(void* self) {
    return QsciLexerSQL_QBaseLexerId((QsciLexerSQL*)self);
}

void q_scilexersql_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnLexerId((QsciLexerSQL*)self, (intptr_t)slot);
}

const char* q_scilexersql_auto_completion_fillups(void* self) {
    return QsciLexerSQL_AutoCompletionFillups((QsciLexerSQL*)self);
}

const char* q_scilexersql_qbase_auto_completion_fillups(void* self) {
    return QsciLexerSQL_QBaseAutoCompletionFillups((QsciLexerSQL*)self);
}

void q_scilexersql_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerSQL_OnAutoCompletionFillups((QsciLexerSQL*)self, (intptr_t)slot);
}

const char** q_scilexersql_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSQL_AutoCompletionWordSeparators((QsciLexerSQL*)self);
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

const char** q_scilexersql_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSQL_QBaseAutoCompletionWordSeparators((QsciLexerSQL*)self);
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

void q_scilexersql_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerSQL_OnAutoCompletionWordSeparators((QsciLexerSQL*)self, (intptr_t)slot);
}

const char* q_scilexersql_block_end(void* self, int* style) {
    return QsciLexerSQL_BlockEnd((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_qbase_block_end(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockEnd((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockEnd((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_block_lookback(void* self) {
    return QsciLexerSQL_BlockLookback((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_block_lookback(void* self) {
    return QsciLexerSQL_QBaseBlockLookback((QsciLexerSQL*)self);
}

void q_scilexersql_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnBlockLookback((QsciLexerSQL*)self, (intptr_t)slot);
}

const char* q_scilexersql_block_start(void* self, int* style) {
    return QsciLexerSQL_BlockStart((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_qbase_block_start(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockStart((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockStart((QsciLexerSQL*)self, (intptr_t)slot);
}

const char* q_scilexersql_block_start_keyword(void* self, int* style) {
    return QsciLexerSQL_BlockStartKeyword((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerSQL_QBaseBlockStartKeyword((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerSQL_OnBlockStartKeyword((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_case_sensitive(void* self) {
    return QsciLexerSQL_CaseSensitive((QsciLexerSQL*)self);
}

bool q_scilexersql_qbase_case_sensitive(void* self) {
    return QsciLexerSQL_QBaseCaseSensitive((QsciLexerSQL*)self);
}

void q_scilexersql_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerSQL_OnCaseSensitive((QsciLexerSQL*)self, (intptr_t)slot);
}

QColor* q_scilexersql_color(void* self, int style) {
    return QsciLexerSQL_Color((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_qbase_color(void* self, int style) {
    return QsciLexerSQL_QBaseColor((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnColor((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_eol_fill(void* self, int style) {
    return QsciLexerSQL_EolFill((QsciLexerSQL*)self, style);
}

bool q_scilexersql_qbase_eol_fill(void* self, int style) {
    return QsciLexerSQL_QBaseEolFill((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerSQL_OnEolFill((QsciLexerSQL*)self, (intptr_t)slot);
}

QFont* q_scilexersql_font(void* self, int style) {
    return QsciLexerSQL_Font((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_qbase_font(void* self, int style) {
    return QsciLexerSQL_QBaseFont((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSQL_OnFont((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_indentation_guide_view(void* self) {
    return QsciLexerSQL_IndentationGuideView((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_indentation_guide_view(void* self) {
    return QsciLexerSQL_QBaseIndentationGuideView((QsciLexerSQL*)self);
}

void q_scilexersql_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnIndentationGuideView((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_default_style(void* self) {
    return QsciLexerSQL_DefaultStyle((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_default_style(void* self) {
    return QsciLexerSQL_QBaseDefaultStyle((QsciLexerSQL*)self);
}

void q_scilexersql_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnDefaultStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

QColor* q_scilexersql_paper(void* self, int style) {
    return QsciLexerSQL_Paper((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_qbase_paper(void* self, int style) {
    return QsciLexerSQL_QBasePaper((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnPaper((QsciLexerSQL*)self, (intptr_t)slot);
}

QColor* q_scilexersql_default_color_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultColorWithStyle((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultColorWithStyle((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultColorWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

QFont* q_scilexersql_default_font_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultFontWithStyle((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultFontWithStyle((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultFontWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

QColor* q_scilexersql_default_paper_with_style(void* self, int style) {
    return QsciLexerSQL_DefaultPaperWithStyle((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerSQL_QBaseDefaultPaperWithStyle((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerSQL_OnDefaultPaperWithStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_editor(void* self, void* editor) {
    QsciLexerSQL_SetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

void q_scilexersql_qbase_set_editor(void* self, void* editor) {
    QsciLexerSQL_QBaseSetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

void q_scilexersql_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnSetEditor((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_style_bits_needed(void* self) {
    return QsciLexerSQL_StyleBitsNeeded((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_style_bits_needed(void* self) {
    return QsciLexerSQL_QBaseStyleBitsNeeded((QsciLexerSQL*)self);
}

void q_scilexersql_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnStyleBitsNeeded((QsciLexerSQL*)self, (intptr_t)slot);
}

const char* q_scilexersql_word_characters(void* self) {
    return QsciLexerSQL_WordCharacters((QsciLexerSQL*)self);
}

const char* q_scilexersql_qbase_word_characters(void* self) {
    return QsciLexerSQL_QBaseWordCharacters((QsciLexerSQL*)self);
}

void q_scilexersql_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerSQL_OnWordCharacters((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_SetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

void q_scilexersql_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_QBaseSetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

void q_scilexersql_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerSQL_OnSetAutoIndentStyle((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_color(void* self, void* c, int style) {
    QsciLexerSQL_SetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_qbase_set_color(void* self, void* c, int style) {
    QsciLexerSQL_QBaseSetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetColor((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_SetEolFill((QsciLexerSQL*)self, eoffill, style);
}

void q_scilexersql_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_QBaseSetEolFill((QsciLexerSQL*)self, eoffill, style);
}

void q_scilexersql_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerSQL_OnSetEolFill((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_font(void* self, void* f, int style) {
    QsciLexerSQL_SetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

void q_scilexersql_qbase_set_font(void* self, void* f, int style) {
    QsciLexerSQL_QBaseSetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

void q_scilexersql_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetFont((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_set_paper(void* self, void* c, int style) {
    QsciLexerSQL_SetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerSQL_QBaseSetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerSQL_OnSetPaper((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_event(void* self, void* event) {
    return QsciLexerSQL_Event((QsciLexerSQL*)self, (QEvent*)event);
}

bool q_scilexersql_qbase_event(void* self, void* event) {
    return QsciLexerSQL_QBaseEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSQL_OnEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_EventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexersql_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_QBaseEventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexersql_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerSQL_OnEventFilter((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_timer_event(void* self, void* event) {
    QsciLexerSQL_TimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

void q_scilexersql_qbase_timer_event(void* self, void* event) {
    QsciLexerSQL_QBaseTimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

void q_scilexersql_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnTimerEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_child_event(void* self, void* event) {
    QsciLexerSQL_ChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

void q_scilexersql_qbase_child_event(void* self, void* event) {
    QsciLexerSQL_QBaseChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

void q_scilexersql_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnChildEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_custom_event(void* self, void* event) {
    QsciLexerSQL_CustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_qbase_custom_event(void* self, void* event) {
    QsciLexerSQL_QBaseCustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnCustomEvent((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_connect_notify(void* self, void* signal) {
    QsciLexerSQL_ConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_qbase_connect_notify(void* self, void* signal) {
    QsciLexerSQL_QBaseConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnConnectNotify((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_disconnect_notify(void* self, void* signal) {
    QsciLexerSQL_DisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerSQL_QBaseDisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerSQL_OnDisconnectNotify((QsciLexerSQL*)self, (intptr_t)slot);
}

QObject* q_scilexersql_sender(void* self) {
    return QsciLexerSQL_Sender((QsciLexerSQL*)self);
}

QObject* q_scilexersql_qbase_sender(void* self) {
    return QsciLexerSQL_QBaseSender((QsciLexerSQL*)self);
}

void q_scilexersql_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerSQL_OnSender((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_sender_signal_index(void* self) {
    return QsciLexerSQL_SenderSignalIndex((QsciLexerSQL*)self);
}

int32_t q_scilexersql_qbase_sender_signal_index(void* self) {
    return QsciLexerSQL_QBaseSenderSignalIndex((QsciLexerSQL*)self);
}

void q_scilexersql_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerSQL_OnSenderSignalIndex((QsciLexerSQL*)self, (intptr_t)slot);
}

int32_t q_scilexersql_receivers(void* self, const char* signal) {
    return QsciLexerSQL_Receivers((QsciLexerSQL*)self, signal);
}

int32_t q_scilexersql_qbase_receivers(void* self, const char* signal) {
    return QsciLexerSQL_QBaseReceivers((QsciLexerSQL*)self, signal);
}

void q_scilexersql_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerSQL_OnReceivers((QsciLexerSQL*)self, (intptr_t)slot);
}

bool q_scilexersql_is_signal_connected(void* self, void* signal) {
    return QsciLexerSQL_IsSignalConnected((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

bool q_scilexersql_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerSQL_QBaseIsSignalConnected((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerSQL_OnIsSignalConnected((QsciLexerSQL*)self, (intptr_t)slot);
}

void q_scilexersql_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexersql_delete(void* self) {
    QsciLexerSQL_Delete((QsciLexerSQL*)(self));
}
