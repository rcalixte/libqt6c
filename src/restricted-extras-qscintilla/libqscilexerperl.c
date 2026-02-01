#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerperl.hpp"
#include "libqscilexerperl.h"

QsciLexerPerl* q_scilexerperl_new() {
    return QsciLexerPerl_new();
}

QsciLexerPerl* q_scilexerperl_new2(void* parent) {
    return QsciLexerPerl_new2((QObject*)parent);
}

const QMetaObject* q_scilexerperl_meta_object(void* self) {
    return QsciLexerPerl_MetaObject((QsciLexerPerl*)self);
}

void q_scilexerperl_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerPerl_OnMetaObject((QsciLexerPerl*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerperl_qbase_meta_object(void* self) {
    return QsciLexerPerl_QBaseMetaObject((QsciLexerPerl*)self);
}

void* q_scilexerperl_metacast(void* self, const char* param1) {
    return QsciLexerPerl_Metacast((QsciLexerPerl*)self, param1);
}

void q_scilexerperl_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerPerl_OnMetacast((QsciLexerPerl*)self, (intptr_t)callback);
}

void* q_scilexerperl_qbase_metacast(void* self, const char* param1) {
    return QsciLexerPerl_QBaseMetacast((QsciLexerPerl*)self, param1);
}

int32_t q_scilexerperl_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPerl_Metacall((QsciLexerPerl*)self, param1, param2, param3);
}

void q_scilexerperl_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerPerl_OnMetacall((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPerl_QBaseMetacall((QsciLexerPerl*)self, param1, param2, param3);
}

const char* q_scilexerperl_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerperl_language(void* self) {
    return QsciLexerPerl_Language((QsciLexerPerl*)self);
}

const char* q_scilexerperl_lexer(void* self) {
    return QsciLexerPerl_Lexer((QsciLexerPerl*)self);
}

const char** q_scilexerperl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPerl_AutoCompletionWordSeparators((QsciLexerPerl*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerperl_auto_completion_word_separators\n");
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

const char* q_scilexerperl_block_end(void* self) {
    return QsciLexerPerl_BlockEnd((QsciLexerPerl*)self);
}

const char* q_scilexerperl_block_start(void* self) {
    return QsciLexerPerl_BlockStart((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_brace_style(void* self) {
    return QsciLexerPerl_BraceStyle((QsciLexerPerl*)self);
}

const char* q_scilexerperl_word_characters(void* self) {
    return QsciLexerPerl_WordCharacters((QsciLexerPerl*)self);
}

QColor* q_scilexerperl_default_color(void* self, int style) {
    return QsciLexerPerl_DefaultColor((QsciLexerPerl*)self, style);
}

bool q_scilexerperl_default_eol_fill(void* self, int style) {
    return QsciLexerPerl_DefaultEolFill((QsciLexerPerl*)self, style);
}

QFont* q_scilexerperl_default_font(void* self, int style) {
    return QsciLexerPerl_DefaultFont((QsciLexerPerl*)self, style);
}

QColor* q_scilexerperl_default_paper(void* self, int style) {
    return QsciLexerPerl_DefaultPaper((QsciLexerPerl*)self, style);
}

const char* q_scilexerperl_keywords(void* self, int set) {
    return QsciLexerPerl_Keywords((QsciLexerPerl*)self, set);
}

const char* q_scilexerperl_description(void* self, int style) {
    libqt_string _str = QsciLexerPerl_Description((QsciLexerPerl*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerperl_refresh_properties(void* self) {
    QsciLexerPerl_RefreshProperties((QsciLexerPerl*)self);
}

void q_scilexerperl_set_fold_at_else(void* self, bool fold) {
    QsciLexerPerl_SetFoldAtElse((QsciLexerPerl*)self, fold);
}

bool q_scilexerperl_fold_at_else(void* self) {
    return QsciLexerPerl_FoldAtElse((QsciLexerPerl*)self);
}

bool q_scilexerperl_fold_comments(void* self) {
    return QsciLexerPerl_FoldComments((QsciLexerPerl*)self);
}

bool q_scilexerperl_fold_compact(void* self) {
    return QsciLexerPerl_FoldCompact((QsciLexerPerl*)self);
}

void q_scilexerperl_set_fold_packages(void* self, bool fold) {
    QsciLexerPerl_SetFoldPackages((QsciLexerPerl*)self, fold);
}

bool q_scilexerperl_fold_packages(void* self) {
    return QsciLexerPerl_FoldPackages((QsciLexerPerl*)self);
}

void q_scilexerperl_set_fold_p_o_d_blocks(void* self, bool fold) {
    QsciLexerPerl_SetFoldPODBlocks((QsciLexerPerl*)self, fold);
}

bool q_scilexerperl_fold_p_o_d_blocks(void* self) {
    return QsciLexerPerl_FoldPODBlocks((QsciLexerPerl*)self);
}

void q_scilexerperl_set_fold_comments(void* self, bool fold) {
    QsciLexerPerl_SetFoldComments((QsciLexerPerl*)self, fold);
}

void q_scilexerperl_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerPerl_OnSetFoldComments((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPerl_QBaseSetFoldComments((QsciLexerPerl*)self, fold);
}

void q_scilexerperl_set_fold_compact(void* self, bool fold) {
    QsciLexerPerl_SetFoldCompact((QsciLexerPerl*)self, fold);
}

void q_scilexerperl_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerPerl_OnSetFoldCompact((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPerl_QBaseSetFoldCompact((QsciLexerPerl*)self, fold);
}

bool q_scilexerperl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_ReadProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerperl_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPerl_OnReadProperties((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_QBaseReadProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerperl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_WriteProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerperl_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPerl_OnWriteProperties((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPerl_QBaseWriteProperties((QsciLexerPerl*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerperl_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerperl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerperl_block_end1(void* self, int* style) {
    return QsciLexerPerl_BlockEnd1((QsciLexerPerl*)self, style);
}

const char* q_scilexerperl_block_start1(void* self, int* style) {
    return QsciLexerPerl_BlockStart1((QsciLexerPerl*)self, style);
}

QsciAbstractAPIs* q_scilexerperl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerperl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerperl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerperl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerperl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerperl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerperl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerperl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerperl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerperl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerperl_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerperl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerperl_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerperl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerperl_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerperl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerperl_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerperl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerperl_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerperl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerperl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerperl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerperl_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerperl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerperl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerperl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerperl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerperl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerperl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerperl_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerperl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerperl_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerperl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerperl_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerperl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerperl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerperl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerperl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerperl_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerperl_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerperl_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerperl_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerperl_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerperl_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerperl_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerperl_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerperl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerperl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerperl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerperl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerperl_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerperl_dynamic_property_names\n");
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

QBindingStorage* q_scilexerperl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerperl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerperl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerperl_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerperl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerperl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerperl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerperl_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerperl_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerperl_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerperl_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerperl_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerperl_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerperl_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerperl_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerperl_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerperl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerperl_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_lexer_id(void* self) {
    return QsciLexerPerl_LexerId((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_lexer_id(void* self) {
    return QsciLexerPerl_QBaseLexerId((QsciLexerPerl*)self);
}

void q_scilexerperl_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnLexerId((QsciLexerPerl*)self, (intptr_t)callback);
}

const char* q_scilexerperl_auto_completion_fillups(void* self) {
    return QsciLexerPerl_AutoCompletionFillups((QsciLexerPerl*)self);
}

const char* q_scilexerperl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPerl_QBaseAutoCompletionFillups((QsciLexerPerl*)self);
}

void q_scilexerperl_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPerl_OnAutoCompletionFillups((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_block_lookback(void* self) {
    return QsciLexerPerl_BlockLookback((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_block_lookback(void* self) {
    return QsciLexerPerl_QBaseBlockLookback((QsciLexerPerl*)self);
}

void q_scilexerperl_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnBlockLookback((QsciLexerPerl*)self, (intptr_t)callback);
}

const char* q_scilexerperl_block_start_keyword(void* self, int* style) {
    return QsciLexerPerl_BlockStartKeyword((QsciLexerPerl*)self, style);
}

const char* q_scilexerperl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPerl_QBaseBlockStartKeyword((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPerl_OnBlockStartKeyword((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_case_sensitive(void* self) {
    return QsciLexerPerl_CaseSensitive((QsciLexerPerl*)self);
}

bool q_scilexerperl_qbase_case_sensitive(void* self) {
    return QsciLexerPerl_QBaseCaseSensitive((QsciLexerPerl*)self);
}

void q_scilexerperl_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPerl_OnCaseSensitive((QsciLexerPerl*)self, (intptr_t)callback);
}

QColor* q_scilexerperl_color(void* self, int style) {
    return QsciLexerPerl_Color((QsciLexerPerl*)self, style);
}

QColor* q_scilexerperl_qbase_color(void* self, int style) {
    return QsciLexerPerl_QBaseColor((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPerl_OnColor((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_eol_fill(void* self, int style) {
    return QsciLexerPerl_EolFill((QsciLexerPerl*)self, style);
}

bool q_scilexerperl_qbase_eol_fill(void* self, int style) {
    return QsciLexerPerl_QBaseEolFill((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPerl_OnEolFill((QsciLexerPerl*)self, (intptr_t)callback);
}

QFont* q_scilexerperl_font(void* self, int style) {
    return QsciLexerPerl_Font((QsciLexerPerl*)self, style);
}

QFont* q_scilexerperl_qbase_font(void* self, int style) {
    return QsciLexerPerl_QBaseFont((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPerl_OnFont((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_indentation_guide_view(void* self) {
    return QsciLexerPerl_IndentationGuideView((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_indentation_guide_view(void* self) {
    return QsciLexerPerl_QBaseIndentationGuideView((QsciLexerPerl*)self);
}

void q_scilexerperl_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnIndentationGuideView((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_default_style(void* self) {
    return QsciLexerPerl_DefaultStyle((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_default_style(void* self) {
    return QsciLexerPerl_QBaseDefaultStyle((QsciLexerPerl*)self);
}

void q_scilexerperl_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnDefaultStyle((QsciLexerPerl*)self, (intptr_t)callback);
}

QColor* q_scilexerperl_paper(void* self, int style) {
    return QsciLexerPerl_Paper((QsciLexerPerl*)self, style);
}

QColor* q_scilexerperl_qbase_paper(void* self, int style) {
    return QsciLexerPerl_QBasePaper((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPerl_OnPaper((QsciLexerPerl*)self, (intptr_t)callback);
}

QColor* q_scilexerperl_default_color2(void* self, int style) {
    return QsciLexerPerl_DefaultColor2((QsciLexerPerl*)self, style);
}

QColor* q_scilexerperl_qbase_default_color2(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultColor2((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPerl_OnDefaultColor2((QsciLexerPerl*)self, (intptr_t)callback);
}

QFont* q_scilexerperl_default_font2(void* self, int style) {
    return QsciLexerPerl_DefaultFont2((QsciLexerPerl*)self, style);
}

QFont* q_scilexerperl_qbase_default_font2(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultFont2((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPerl_OnDefaultFont2((QsciLexerPerl*)self, (intptr_t)callback);
}

QColor* q_scilexerperl_default_paper2(void* self, int style) {
    return QsciLexerPerl_DefaultPaper2((QsciLexerPerl*)self, style);
}

QColor* q_scilexerperl_qbase_default_paper2(void* self, int style) {
    return QsciLexerPerl_QBaseDefaultPaper2((QsciLexerPerl*)self, style);
}

void q_scilexerperl_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPerl_OnDefaultPaper2((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_editor(void* self, void* editor) {
    QsciLexerPerl_SetEditor((QsciLexerPerl*)self, (QsciScintilla*)editor);
}

void q_scilexerperl_qbase_set_editor(void* self, void* editor) {
    QsciLexerPerl_QBaseSetEditor((QsciLexerPerl*)self, (QsciScintilla*)editor);
}

void q_scilexerperl_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnSetEditor((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_style_bits_needed(void* self) {
    return QsciLexerPerl_StyleBitsNeeded((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_style_bits_needed(void* self) {
    return QsciLexerPerl_QBaseStyleBitsNeeded((QsciLexerPerl*)self);
}

void q_scilexerperl_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnStyleBitsNeeded((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPerl_SetAutoIndentStyle((QsciLexerPerl*)self, autoindentstyle);
}

void q_scilexerperl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPerl_QBaseSetAutoIndentStyle((QsciLexerPerl*)self, autoindentstyle);
}

void q_scilexerperl_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPerl_OnSetAutoIndentStyle((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_color(void* self, void* c, int style) {
    QsciLexerPerl_SetColor((QsciLexerPerl*)self, (QColor*)c, style);
}

void q_scilexerperl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPerl_QBaseSetColor((QsciLexerPerl*)self, (QColor*)c, style);
}

void q_scilexerperl_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPerl_OnSetColor((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPerl_SetEolFill((QsciLexerPerl*)self, eoffill, style);
}

void q_scilexerperl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPerl_QBaseSetEolFill((QsciLexerPerl*)self, eoffill, style);
}

void q_scilexerperl_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPerl_OnSetEolFill((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_font(void* self, void* f, int style) {
    QsciLexerPerl_SetFont((QsciLexerPerl*)self, (QFont*)f, style);
}

void q_scilexerperl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPerl_QBaseSetFont((QsciLexerPerl*)self, (QFont*)f, style);
}

void q_scilexerperl_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPerl_OnSetFont((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_set_paper(void* self, void* c, int style) {
    QsciLexerPerl_SetPaper((QsciLexerPerl*)self, (QColor*)c, style);
}

void q_scilexerperl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPerl_QBaseSetPaper((QsciLexerPerl*)self, (QColor*)c, style);
}

void q_scilexerperl_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPerl_OnSetPaper((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_event(void* self, void* event) {
    return QsciLexerPerl_Event((QsciLexerPerl*)self, (QEvent*)event);
}

bool q_scilexerperl_qbase_event(void* self, void* event) {
    return QsciLexerPerl_QBaseEvent((QsciLexerPerl*)self, (QEvent*)event);
}

void q_scilexerperl_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPerl_OnEvent((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPerl_EventFilter((QsciLexerPerl*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerperl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPerl_QBaseEventFilter((QsciLexerPerl*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerperl_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPerl_OnEventFilter((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_timer_event(void* self, void* event) {
    QsciLexerPerl_TimerEvent((QsciLexerPerl*)self, (QTimerEvent*)event);
}

void q_scilexerperl_qbase_timer_event(void* self, void* event) {
    QsciLexerPerl_QBaseTimerEvent((QsciLexerPerl*)self, (QTimerEvent*)event);
}

void q_scilexerperl_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnTimerEvent((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_child_event(void* self, void* event) {
    QsciLexerPerl_ChildEvent((QsciLexerPerl*)self, (QChildEvent*)event);
}

void q_scilexerperl_qbase_child_event(void* self, void* event) {
    QsciLexerPerl_QBaseChildEvent((QsciLexerPerl*)self, (QChildEvent*)event);
}

void q_scilexerperl_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnChildEvent((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_custom_event(void* self, void* event) {
    QsciLexerPerl_CustomEvent((QsciLexerPerl*)self, (QEvent*)event);
}

void q_scilexerperl_qbase_custom_event(void* self, void* event) {
    QsciLexerPerl_QBaseCustomEvent((QsciLexerPerl*)self, (QEvent*)event);
}

void q_scilexerperl_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnCustomEvent((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_connect_notify(void* self, void* signal) {
    QsciLexerPerl_ConnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

void q_scilexerperl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPerl_QBaseConnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

void q_scilexerperl_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnConnectNotify((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_disconnect_notify(void* self, void* signal) {
    QsciLexerPerl_DisconnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

void q_scilexerperl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPerl_QBaseDisconnectNotify((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

void q_scilexerperl_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPerl_OnDisconnectNotify((QsciLexerPerl*)self, (intptr_t)callback);
}

char* q_scilexerperl_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPerl_TextAsBytes((QsciLexerPerl*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerperl_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPerl_QBaseTextAsBytes((QsciLexerPerl*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerperl_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPerl_OnTextAsBytes((QsciLexerPerl*)self, (intptr_t)callback);
}

const char* q_scilexerperl_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPerl_BytesAsText((QsciLexerPerl*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerperl_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPerl_QBaseBytesAsText((QsciLexerPerl*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerperl_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPerl_OnBytesAsText((QsciLexerPerl*)self, (intptr_t)callback);
}

QObject* q_scilexerperl_sender(void* self) {
    return QsciLexerPerl_Sender((QsciLexerPerl*)self);
}

QObject* q_scilexerperl_qbase_sender(void* self) {
    return QsciLexerPerl_QBaseSender((QsciLexerPerl*)self);
}

void q_scilexerperl_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPerl_OnSender((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_sender_signal_index(void* self) {
    return QsciLexerPerl_SenderSignalIndex((QsciLexerPerl*)self);
}

int32_t q_scilexerperl_qbase_sender_signal_index(void* self) {
    return QsciLexerPerl_QBaseSenderSignalIndex((QsciLexerPerl*)self);
}

void q_scilexerperl_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPerl_OnSenderSignalIndex((QsciLexerPerl*)self, (intptr_t)callback);
}

int32_t q_scilexerperl_receivers(void* self, const char* signal) {
    return QsciLexerPerl_Receivers((QsciLexerPerl*)self, signal);
}

int32_t q_scilexerperl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPerl_QBaseReceivers((QsciLexerPerl*)self, signal);
}

void q_scilexerperl_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPerl_OnReceivers((QsciLexerPerl*)self, (intptr_t)callback);
}

bool q_scilexerperl_is_signal_connected(void* self, void* signal) {
    return QsciLexerPerl_IsSignalConnected((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

bool q_scilexerperl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPerl_QBaseIsSignalConnected((QsciLexerPerl*)self, (QMetaMethod*)signal);
}

void q_scilexerperl_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPerl_OnIsSignalConnected((QsciLexerPerl*)self, (intptr_t)callback);
}

void q_scilexerperl_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerperl_delete(void* self) {
    QsciLexerPerl_Delete((QsciLexerPerl*)(self));
}
