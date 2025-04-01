#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerverilog.hpp"
#include "libqscilexerverilog.h"

QsciLexerVerilog* q_scilexerverilog_new() {
    return QsciLexerVerilog_new();
}

QsciLexerVerilog* q_scilexerverilog_new2(void* parent) {
    return QsciLexerVerilog_new2((QObject*)parent);
}

QMetaObject* q_scilexerverilog_meta_object(void* self) {
    return QsciLexerVerilog_MetaObject((QsciLexerVerilog*)self);
}

void* q_scilexerverilog_metacast(void* self, const char* param1) {
    return QsciLexerVerilog_Metacast((QsciLexerVerilog*)self, param1);
}

int32_t q_scilexerverilog_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerVerilog_Metacall((QsciLexerVerilog*)self, param1, param2, param3);
}

void q_scilexerverilog_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerVerilog_OnMetacall((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerVerilog_QBaseMetacall((QsciLexerVerilog*)self, param1, param2, param3);
}

const char* q_scilexerverilog_tr(const char* s) {
    libqt_string _str = QsciLexerVerilog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerverilog_language(void* self) {
    return QsciLexerVerilog_Language((QsciLexerVerilog*)self);
}

const char* q_scilexerverilog_lexer(void* self) {
    return QsciLexerVerilog_Lexer((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_brace_style(void* self) {
    return QsciLexerVerilog_BraceStyle((QsciLexerVerilog*)self);
}

const char* q_scilexerverilog_word_characters(void* self) {
    return QsciLexerVerilog_WordCharacters((QsciLexerVerilog*)self);
}

QColor* q_scilexerverilog_default_color(void* self, int style) {
    return QsciLexerVerilog_DefaultColor((QsciLexerVerilog*)self, style);
}

bool q_scilexerverilog_default_eol_fill(void* self, int style) {
    return QsciLexerVerilog_DefaultEolFill((QsciLexerVerilog*)self, style);
}

QFont* q_scilexerverilog_default_font(void* self, int style) {
    return QsciLexerVerilog_DefaultFont((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_default_paper(void* self, int style) {
    return QsciLexerVerilog_DefaultPaper((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_keywords(void* self, int set) {
    return QsciLexerVerilog_Keywords((QsciLexerVerilog*)self, set);
}

const char* q_scilexerverilog_description(void* self, int style) {
    libqt_string _str = QsciLexerVerilog_Description((QsciLexerVerilog*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerverilog_refresh_properties(void* self) {
    QsciLexerVerilog_RefreshProperties((QsciLexerVerilog*)self);
}

void q_scilexerverilog_set_fold_at_else(void* self, bool fold) {
    QsciLexerVerilog_SetFoldAtElse((QsciLexerVerilog*)self, fold);
}

bool q_scilexerverilog_fold_at_else(void* self) {
    return QsciLexerVerilog_FoldAtElse((QsciLexerVerilog*)self);
}

void q_scilexerverilog_set_fold_comments(void* self, bool fold) {
    QsciLexerVerilog_SetFoldComments((QsciLexerVerilog*)self, fold);
}

bool q_scilexerverilog_fold_comments(void* self) {
    return QsciLexerVerilog_FoldComments((QsciLexerVerilog*)self);
}

void q_scilexerverilog_set_fold_compact(void* self, bool fold) {
    QsciLexerVerilog_SetFoldCompact((QsciLexerVerilog*)self, fold);
}

bool q_scilexerverilog_fold_compact(void* self) {
    return QsciLexerVerilog_FoldCompact((QsciLexerVerilog*)self);
}

void q_scilexerverilog_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerVerilog_SetFoldPreprocessor((QsciLexerVerilog*)self, fold);
}

bool q_scilexerverilog_fold_preprocessor(void* self) {
    return QsciLexerVerilog_FoldPreprocessor((QsciLexerVerilog*)self);
}

void q_scilexerverilog_set_fold_at_module(void* self, bool fold) {
    QsciLexerVerilog_SetFoldAtModule((QsciLexerVerilog*)self, fold);
}

bool q_scilexerverilog_fold_at_module(void* self) {
    return QsciLexerVerilog_FoldAtModule((QsciLexerVerilog*)self);
}

bool q_scilexerverilog_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_ReadProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerverilog_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerVerilog_OnReadProperties((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_QBaseReadProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerverilog_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_WriteProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerverilog_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerVerilog_OnWriteProperties((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_QBaseWriteProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerverilog_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerVerilog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerverilog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerVerilog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerverilog_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerverilog_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerverilog_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerverilog_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerverilog_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerverilog_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerverilog_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerverilog_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerverilog_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerverilog_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerverilog_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerverilog_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerverilog_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerverilog_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerverilog_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerverilog_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerverilog_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerverilog_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerverilog_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerverilog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerverilog_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_scilexerverilog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerverilog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerverilog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerverilog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerverilog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerverilog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexerverilog_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerverilog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerverilog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerverilog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerverilog_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerverilog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerverilog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerverilog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerverilog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerverilog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerverilog_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexerverilog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerverilog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerverilog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerverilog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerverilog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerverilog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_scilexerverilog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerverilog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerverilog_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerverilog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerverilog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerverilog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerverilog_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerverilog_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerverilog_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerverilog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerverilog_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_lexer_id(void* self) {
    return QsciLexerVerilog_LexerId((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_lexer_id(void* self) {
    return QsciLexerVerilog_QBaseLexerId((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnLexerId((QsciLexerVerilog*)self, (intptr_t)slot);
}

const char* q_scilexerverilog_auto_completion_fillups(void* self) {
    return QsciLexerVerilog_AutoCompletionFillups((QsciLexerVerilog*)self);
}

const char* q_scilexerverilog_qbase_auto_completion_fillups(void* self) {
    return QsciLexerVerilog_QBaseAutoCompletionFillups((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerVerilog_OnAutoCompletionFillups((QsciLexerVerilog*)self, (intptr_t)slot);
}

const char** q_scilexerverilog_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVerilog_AutoCompletionWordSeparators((QsciLexerVerilog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_scilexerverilog_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVerilog_QBaseAutoCompletionWordSeparators((QsciLexerVerilog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexerverilog_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerVerilog_OnAutoCompletionWordSeparators((QsciLexerVerilog*)self, (intptr_t)slot);
}

const char* q_scilexerverilog_block_end(void* self, int* style) {
    return QsciLexerVerilog_BlockEnd((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_qbase_block_end(void* self, int* style) {
    return QsciLexerVerilog_QBaseBlockEnd((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVerilog_OnBlockEnd((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_block_lookback(void* self) {
    return QsciLexerVerilog_BlockLookback((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_block_lookback(void* self) {
    return QsciLexerVerilog_QBaseBlockLookback((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnBlockLookback((QsciLexerVerilog*)self, (intptr_t)slot);
}

const char* q_scilexerverilog_block_start(void* self, int* style) {
    return QsciLexerVerilog_BlockStart((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_qbase_block_start(void* self, int* style) {
    return QsciLexerVerilog_QBaseBlockStart((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVerilog_OnBlockStart((QsciLexerVerilog*)self, (intptr_t)slot);
}

const char* q_scilexerverilog_block_start_keyword(void* self, int* style) {
    return QsciLexerVerilog_BlockStartKeyword((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerVerilog_QBaseBlockStartKeyword((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerVerilog_OnBlockStartKeyword((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_case_sensitive(void* self) {
    return QsciLexerVerilog_CaseSensitive((QsciLexerVerilog*)self);
}

bool q_scilexerverilog_qbase_case_sensitive(void* self) {
    return QsciLexerVerilog_QBaseCaseSensitive((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerVerilog_OnCaseSensitive((QsciLexerVerilog*)self, (intptr_t)slot);
}

QColor* q_scilexerverilog_color(void* self, int style) {
    return QsciLexerVerilog_Color((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_qbase_color(void* self, int style) {
    return QsciLexerVerilog_QBaseColor((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVerilog_OnColor((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_eol_fill(void* self, int style) {
    return QsciLexerVerilog_EolFill((QsciLexerVerilog*)self, style);
}

bool q_scilexerverilog_qbase_eol_fill(void* self, int style) {
    return QsciLexerVerilog_QBaseEolFill((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerVerilog_OnEolFill((QsciLexerVerilog*)self, (intptr_t)slot);
}

QFont* q_scilexerverilog_font(void* self, int style) {
    return QsciLexerVerilog_Font((QsciLexerVerilog*)self, style);
}

QFont* q_scilexerverilog_qbase_font(void* self, int style) {
    return QsciLexerVerilog_QBaseFont((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerVerilog_OnFont((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_indentation_guide_view(void* self) {
    return QsciLexerVerilog_IndentationGuideView((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_indentation_guide_view(void* self) {
    return QsciLexerVerilog_QBaseIndentationGuideView((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnIndentationGuideView((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_default_style(void* self) {
    return QsciLexerVerilog_DefaultStyle((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_default_style(void* self) {
    return QsciLexerVerilog_QBaseDefaultStyle((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnDefaultStyle((QsciLexerVerilog*)self, (intptr_t)slot);
}

QColor* q_scilexerverilog_paper(void* self, int style) {
    return QsciLexerVerilog_Paper((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_qbase_paper(void* self, int style) {
    return QsciLexerVerilog_QBasePaper((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVerilog_OnPaper((QsciLexerVerilog*)self, (intptr_t)slot);
}

QColor* q_scilexerverilog_default_color_with_style(void* self, int style) {
    return QsciLexerVerilog_DefaultColorWithStyle((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerVerilog_QBaseDefaultColorWithStyle((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVerilog_OnDefaultColorWithStyle((QsciLexerVerilog*)self, (intptr_t)slot);
}

QFont* q_scilexerverilog_default_font_with_style(void* self, int style) {
    return QsciLexerVerilog_DefaultFontWithStyle((QsciLexerVerilog*)self, style);
}

QFont* q_scilexerverilog_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerVerilog_QBaseDefaultFontWithStyle((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerVerilog_OnDefaultFontWithStyle((QsciLexerVerilog*)self, (intptr_t)slot);
}

QColor* q_scilexerverilog_default_paper_with_style(void* self, int style) {
    return QsciLexerVerilog_DefaultPaperWithStyle((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerVerilog_QBaseDefaultPaperWithStyle((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerVerilog_OnDefaultPaperWithStyle((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_editor(void* self, void* editor) {
    QsciLexerVerilog_SetEditor((QsciLexerVerilog*)self, (QsciScintilla*)editor);
}

void q_scilexerverilog_qbase_set_editor(void* self, void* editor) {
    QsciLexerVerilog_QBaseSetEditor((QsciLexerVerilog*)self, (QsciScintilla*)editor);
}

void q_scilexerverilog_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnSetEditor((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_style_bits_needed(void* self) {
    return QsciLexerVerilog_StyleBitsNeeded((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_style_bits_needed(void* self) {
    return QsciLexerVerilog_QBaseStyleBitsNeeded((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnStyleBitsNeeded((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVerilog_SetAutoIndentStyle((QsciLexerVerilog*)self, autoindentstyle);
}

void q_scilexerverilog_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVerilog_QBaseSetAutoIndentStyle((QsciLexerVerilog*)self, autoindentstyle);
}

void q_scilexerverilog_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerVerilog_OnSetAutoIndentStyle((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_color(void* self, void* c, int style) {
    QsciLexerVerilog_SetColor((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_qbase_set_color(void* self, void* c, int style) {
    QsciLexerVerilog_QBaseSetColor((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVerilog_OnSetColor((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVerilog_SetEolFill((QsciLexerVerilog*)self, eoffill, style);
}

void q_scilexerverilog_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVerilog_QBaseSetEolFill((QsciLexerVerilog*)self, eoffill, style);
}

void q_scilexerverilog_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerVerilog_OnSetEolFill((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_font(void* self, void* f, int style) {
    QsciLexerVerilog_SetFont((QsciLexerVerilog*)self, (QFont*)f, style);
}

void q_scilexerverilog_qbase_set_font(void* self, void* f, int style) {
    QsciLexerVerilog_QBaseSetFont((QsciLexerVerilog*)self, (QFont*)f, style);
}

void q_scilexerverilog_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVerilog_OnSetFont((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_set_paper(void* self, void* c, int style) {
    QsciLexerVerilog_SetPaper((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerVerilog_QBaseSetPaper((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerVerilog_OnSetPaper((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_event(void* self, void* event) {
    return QsciLexerVerilog_Event((QsciLexerVerilog*)self, (QEvent*)event);
}

bool q_scilexerverilog_qbase_event(void* self, void* event) {
    return QsciLexerVerilog_QBaseEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerVerilog_OnEvent((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVerilog_EventFilter((QsciLexerVerilog*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerverilog_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVerilog_QBaseEventFilter((QsciLexerVerilog*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerverilog_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerVerilog_OnEventFilter((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_timer_event(void* self, void* event) {
    QsciLexerVerilog_TimerEvent((QsciLexerVerilog*)self, (QTimerEvent*)event);
}

void q_scilexerverilog_qbase_timer_event(void* self, void* event) {
    QsciLexerVerilog_QBaseTimerEvent((QsciLexerVerilog*)self, (QTimerEvent*)event);
}

void q_scilexerverilog_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnTimerEvent((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_child_event(void* self, void* event) {
    QsciLexerVerilog_ChildEvent((QsciLexerVerilog*)self, (QChildEvent*)event);
}

void q_scilexerverilog_qbase_child_event(void* self, void* event) {
    QsciLexerVerilog_QBaseChildEvent((QsciLexerVerilog*)self, (QChildEvent*)event);
}

void q_scilexerverilog_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnChildEvent((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_custom_event(void* self, void* event) {
    QsciLexerVerilog_CustomEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_qbase_custom_event(void* self, void* event) {
    QsciLexerVerilog_QBaseCustomEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnCustomEvent((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_connect_notify(void* self, void* signal) {
    QsciLexerVerilog_ConnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_qbase_connect_notify(void* self, void* signal) {
    QsciLexerVerilog_QBaseConnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnConnectNotify((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_disconnect_notify(void* self, void* signal) {
    QsciLexerVerilog_DisconnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerVerilog_QBaseDisconnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerVerilog_OnDisconnectNotify((QsciLexerVerilog*)self, (intptr_t)slot);
}

QObject* q_scilexerverilog_sender(void* self) {
    return QsciLexerVerilog_Sender((QsciLexerVerilog*)self);
}

QObject* q_scilexerverilog_qbase_sender(void* self) {
    return QsciLexerVerilog_QBaseSender((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerVerilog_OnSender((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_sender_signal_index(void* self) {
    return QsciLexerVerilog_SenderSignalIndex((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_qbase_sender_signal_index(void* self) {
    return QsciLexerVerilog_QBaseSenderSignalIndex((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerVerilog_OnSenderSignalIndex((QsciLexerVerilog*)self, (intptr_t)slot);
}

int32_t q_scilexerverilog_receivers(void* self, const char* signal) {
    return QsciLexerVerilog_Receivers((QsciLexerVerilog*)self, signal);
}

int32_t q_scilexerverilog_qbase_receivers(void* self, const char* signal) {
    return QsciLexerVerilog_QBaseReceivers((QsciLexerVerilog*)self, signal);
}

void q_scilexerverilog_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerVerilog_OnReceivers((QsciLexerVerilog*)self, (intptr_t)slot);
}

bool q_scilexerverilog_is_signal_connected(void* self, void* signal) {
    return QsciLexerVerilog_IsSignalConnected((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

bool q_scilexerverilog_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerVerilog_QBaseIsSignalConnected((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerVerilog_OnIsSignalConnected((QsciLexerVerilog*)self, (intptr_t)slot);
}

void q_scilexerverilog_delete(void* self) {
    QsciLexerVerilog_Delete((QsciLexerVerilog*)(self));
}
