#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerverilog.hpp"
#include "libqscilexerverilog.h"

QsciLexerVerilog* q_scilexerverilog_new() {
    return QsciLexerVerilog_new();
}

QsciLexerVerilog* q_scilexerverilog_new2(void* parent) {
    return QsciLexerVerilog_new2((QObject*)parent);
}

const QMetaObject* q_scilexerverilog_meta_object(void* self) {
    return QsciLexerVerilog_MetaObject((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerVerilog_OnMetaObject((QsciLexerVerilog*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerverilog_super_meta_object(void* self) {
    return QsciLexerVerilog_SuperMetaObject((QsciLexerVerilog*)self);
}

void* q_scilexerverilog_metacast(void* self, const char* param1) {
    return QsciLexerVerilog_Metacast((QsciLexerVerilog*)self, param1);
}

void q_scilexerverilog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerVerilog_OnMetacast((QsciLexerVerilog*)self, (intptr_t)callback);
}

void* q_scilexerverilog_super_metacast(void* self, const char* param1) {
    return QsciLexerVerilog_SuperMetacast((QsciLexerVerilog*)self, param1);
}

int32_t q_scilexerverilog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerVerilog_Metacall((QsciLexerVerilog*)self, param1, param2, param3);
}

void q_scilexerverilog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerVerilog_OnMetacall((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerVerilog_SuperMetacall((QsciLexerVerilog*)self, param1, param2, param3);
}

const char* q_scilexerverilog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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

void q_scilexerverilog_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerVerilog_OnReadProperties((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_SuperReadProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerverilog_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_WriteProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerverilog_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerVerilog_OnWriteProperties((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_super_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVerilog_SuperWriteProperties((QsciLexerVerilog*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerverilog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerverilog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void q_scilexerverilog_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerverilog_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerverilog_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerverilog_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerverilog_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerverilog_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerverilog_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerverilog_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
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
    QObject_SetObjectName((QObject*)self, name);
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

bool q_scilexerverilog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerverilog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerverilog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerverilog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerverilog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
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

QMetaObject__Connection* q_scilexerverilog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerverilog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerverilog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerverilog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerverilog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerverilog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerverilog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerverilog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerverilog_dynamic_property_names\n");
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

QBindingStorage* q_scilexerverilog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerverilog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerverilog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerverilog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
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

int32_t q_scilexerverilog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerverilog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerverilog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerverilog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerverilog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerverilog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerverilog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerverilog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerverilog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerverilog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerverilog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_lexer_id(void* self) {
    return QsciLexerVerilog_LexerId((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_lexer_id(void* self) {
    return QsciLexerVerilog_SuperLexerId((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnLexerId((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char* q_scilexerverilog_auto_completion_fillups(void* self) {
    return QsciLexerVerilog_AutoCompletionFillups((QsciLexerVerilog*)self);
}

const char* q_scilexerverilog_super_auto_completion_fillups(void* self) {
    return QsciLexerVerilog_SuperAutoCompletionFillups((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerVerilog_OnAutoCompletionFillups((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char** q_scilexerverilog_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVerilog_AutoCompletionWordSeparators((QsciLexerVerilog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerverilog_auto_completion_word_separators\n");
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

const char** q_scilexerverilog_super_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVerilog_SuperAutoCompletionWordSeparators((QsciLexerVerilog*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerverilog_auto_completion_word_separators\n");
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

void q_scilexerverilog_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerVerilog_OnAutoCompletionWordSeparators((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char* q_scilexerverilog_block_end(void* self, int* style) {
    return QsciLexerVerilog_BlockEnd((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_super_block_end(void* self, int* style) {
    return QsciLexerVerilog_SuperBlockEnd((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVerilog_OnBlockEnd((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_block_lookback(void* self) {
    return QsciLexerVerilog_BlockLookback((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_block_lookback(void* self) {
    return QsciLexerVerilog_SuperBlockLookback((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnBlockLookback((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char* q_scilexerverilog_block_start(void* self, int* style) {
    return QsciLexerVerilog_BlockStart((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_super_block_start(void* self, int* style) {
    return QsciLexerVerilog_SuperBlockStart((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVerilog_OnBlockStart((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char* q_scilexerverilog_block_start_keyword(void* self, int* style) {
    return QsciLexerVerilog_BlockStartKeyword((QsciLexerVerilog*)self, style);
}

const char* q_scilexerverilog_super_block_start_keyword(void* self, int* style) {
    return QsciLexerVerilog_SuperBlockStartKeyword((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVerilog_OnBlockStartKeyword((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_case_sensitive(void* self) {
    return QsciLexerVerilog_CaseSensitive((QsciLexerVerilog*)self);
}

bool q_scilexerverilog_super_case_sensitive(void* self) {
    return QsciLexerVerilog_SuperCaseSensitive((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerVerilog_OnCaseSensitive((QsciLexerVerilog*)self, (intptr_t)callback);
}

QColor* q_scilexerverilog_color(void* self, int style) {
    return QsciLexerVerilog_Color((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_super_color(void* self, int style) {
    return QsciLexerVerilog_SuperColor((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVerilog_OnColor((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_eol_fill(void* self, int style) {
    return QsciLexerVerilog_EolFill((QsciLexerVerilog*)self, style);
}

bool q_scilexerverilog_super_eol_fill(void* self, int style) {
    return QsciLexerVerilog_SuperEolFill((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerVerilog_OnEolFill((QsciLexerVerilog*)self, (intptr_t)callback);
}

QFont* q_scilexerverilog_font(void* self, int style) {
    return QsciLexerVerilog_Font((QsciLexerVerilog*)self, style);
}

QFont* q_scilexerverilog_super_font(void* self, int style) {
    return QsciLexerVerilog_SuperFont((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerVerilog_OnFont((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_indentation_guide_view(void* self) {
    return QsciLexerVerilog_IndentationGuideView((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_indentation_guide_view(void* self) {
    return QsciLexerVerilog_SuperIndentationGuideView((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnIndentationGuideView((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_default_style(void* self) {
    return QsciLexerVerilog_DefaultStyle((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_default_style(void* self) {
    return QsciLexerVerilog_SuperDefaultStyle((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnDefaultStyle((QsciLexerVerilog*)self, (intptr_t)callback);
}

QColor* q_scilexerverilog_paper(void* self, int style) {
    return QsciLexerVerilog_Paper((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_super_paper(void* self, int style) {
    return QsciLexerVerilog_SuperPaper((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVerilog_OnPaper((QsciLexerVerilog*)self, (intptr_t)callback);
}

QColor* q_scilexerverilog_default_color2(void* self, int style) {
    return QsciLexerVerilog_DefaultColor2((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_super_default_color2(void* self, int style) {
    return QsciLexerVerilog_SuperDefaultColor2((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVerilog_OnDefaultColor2((QsciLexerVerilog*)self, (intptr_t)callback);
}

QFont* q_scilexerverilog_default_font2(void* self, int style) {
    return QsciLexerVerilog_DefaultFont2((QsciLexerVerilog*)self, style);
}

QFont* q_scilexerverilog_super_default_font2(void* self, int style) {
    return QsciLexerVerilog_SuperDefaultFont2((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerVerilog_OnDefaultFont2((QsciLexerVerilog*)self, (intptr_t)callback);
}

QColor* q_scilexerverilog_default_paper2(void* self, int style) {
    return QsciLexerVerilog_DefaultPaper2((QsciLexerVerilog*)self, style);
}

QColor* q_scilexerverilog_super_default_paper2(void* self, int style) {
    return QsciLexerVerilog_SuperDefaultPaper2((QsciLexerVerilog*)self, style);
}

void q_scilexerverilog_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVerilog_OnDefaultPaper2((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_editor(void* self, void* editor) {
    QsciLexerVerilog_SetEditor((QsciLexerVerilog*)self, (QsciScintilla*)editor);
}

void q_scilexerverilog_super_set_editor(void* self, void* editor) {
    QsciLexerVerilog_SuperSetEditor((QsciLexerVerilog*)self, (QsciScintilla*)editor);
}

void q_scilexerverilog_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnSetEditor((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_style_bits_needed(void* self) {
    return QsciLexerVerilog_StyleBitsNeeded((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_style_bits_needed(void* self) {
    return QsciLexerVerilog_SuperStyleBitsNeeded((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnStyleBitsNeeded((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVerilog_SetAutoIndentStyle((QsciLexerVerilog*)self, autoindentstyle);
}

void q_scilexerverilog_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVerilog_SuperSetAutoIndentStyle((QsciLexerVerilog*)self, autoindentstyle);
}

void q_scilexerverilog_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerVerilog_OnSetAutoIndentStyle((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_color(void* self, void* c, int style) {
    QsciLexerVerilog_SetColor((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_super_set_color(void* self, void* c, int style) {
    QsciLexerVerilog_SuperSetColor((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVerilog_OnSetColor((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVerilog_SetEolFill((QsciLexerVerilog*)self, eoffill, style);
}

void q_scilexerverilog_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVerilog_SuperSetEolFill((QsciLexerVerilog*)self, eoffill, style);
}

void q_scilexerverilog_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerVerilog_OnSetEolFill((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_font(void* self, void* f, int style) {
    QsciLexerVerilog_SetFont((QsciLexerVerilog*)self, (QFont*)f, style);
}

void q_scilexerverilog_super_set_font(void* self, void* f, int style) {
    QsciLexerVerilog_SuperSetFont((QsciLexerVerilog*)self, (QFont*)f, style);
}

void q_scilexerverilog_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVerilog_OnSetFont((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_set_paper(void* self, void* c, int style) {
    QsciLexerVerilog_SetPaper((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_super_set_paper(void* self, void* c, int style) {
    QsciLexerVerilog_SuperSetPaper((QsciLexerVerilog*)self, (QColor*)c, style);
}

void q_scilexerverilog_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVerilog_OnSetPaper((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_event(void* self, void* event) {
    return QsciLexerVerilog_Event((QsciLexerVerilog*)self, (QEvent*)event);
}

bool q_scilexerverilog_super_event(void* self, void* event) {
    return QsciLexerVerilog_SuperEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerVerilog_OnEvent((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVerilog_EventFilter((QsciLexerVerilog*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerverilog_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVerilog_SuperEventFilter((QsciLexerVerilog*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerverilog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerVerilog_OnEventFilter((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_timer_event(void* self, void* event) {
    QsciLexerVerilog_TimerEvent((QsciLexerVerilog*)self, (QTimerEvent*)event);
}

void q_scilexerverilog_super_timer_event(void* self, void* event) {
    QsciLexerVerilog_SuperTimerEvent((QsciLexerVerilog*)self, (QTimerEvent*)event);
}

void q_scilexerverilog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnTimerEvent((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_child_event(void* self, void* event) {
    QsciLexerVerilog_ChildEvent((QsciLexerVerilog*)self, (QChildEvent*)event);
}

void q_scilexerverilog_super_child_event(void* self, void* event) {
    QsciLexerVerilog_SuperChildEvent((QsciLexerVerilog*)self, (QChildEvent*)event);
}

void q_scilexerverilog_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnChildEvent((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_custom_event(void* self, void* event) {
    QsciLexerVerilog_CustomEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_super_custom_event(void* self, void* event) {
    QsciLexerVerilog_SuperCustomEvent((QsciLexerVerilog*)self, (QEvent*)event);
}

void q_scilexerverilog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnCustomEvent((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_connect_notify(void* self, void* signal) {
    QsciLexerVerilog_ConnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_super_connect_notify(void* self, void* signal) {
    QsciLexerVerilog_SuperConnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnConnectNotify((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_disconnect_notify(void* self, void* signal) {
    QsciLexerVerilog_DisconnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_super_disconnect_notify(void* self, void* signal) {
    QsciLexerVerilog_SuperDisconnectNotify((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerVerilog_OnDisconnectNotify((QsciLexerVerilog*)self, (intptr_t)callback);
}

char* q_scilexerverilog_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerVerilog_TextAsBytes((QsciLexerVerilog*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerverilog_super_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerVerilog_SuperTextAsBytes((QsciLexerVerilog*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerverilog_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*)) {
    QsciLexerVerilog_OnTextAsBytes((QsciLexerVerilog*)self, (intptr_t)callback);
}

const char* q_scilexerverilog_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerVerilog_BytesAsText((QsciLexerVerilog*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerverilog_super_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerVerilog_SuperBytesAsText((QsciLexerVerilog*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerverilog_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerVerilog_OnBytesAsText((QsciLexerVerilog*)self, (intptr_t)callback);
}

QObject* q_scilexerverilog_sender(void* self) {
    return QsciLexerVerilog_Sender((QsciLexerVerilog*)self);
}

QObject* q_scilexerverilog_super_sender(void* self) {
    return QsciLexerVerilog_SuperSender((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerVerilog_OnSender((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_sender_signal_index(void* self) {
    return QsciLexerVerilog_SenderSignalIndex((QsciLexerVerilog*)self);
}

int32_t q_scilexerverilog_super_sender_signal_index(void* self) {
    return QsciLexerVerilog_SuperSenderSignalIndex((QsciLexerVerilog*)self);
}

void q_scilexerverilog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerVerilog_OnSenderSignalIndex((QsciLexerVerilog*)self, (intptr_t)callback);
}

int32_t q_scilexerverilog_receivers(void* self, const char* signal) {
    return QsciLexerVerilog_Receivers((QsciLexerVerilog*)self, signal);
}

int32_t q_scilexerverilog_super_receivers(void* self, const char* signal) {
    return QsciLexerVerilog_SuperReceivers((QsciLexerVerilog*)self, signal);
}

void q_scilexerverilog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerVerilog_OnReceivers((QsciLexerVerilog*)self, (intptr_t)callback);
}

bool q_scilexerverilog_is_signal_connected(void* self, void* signal) {
    return QsciLexerVerilog_IsSignalConnected((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

bool q_scilexerverilog_super_is_signal_connected(void* self, void* signal) {
    return QsciLexerVerilog_SuperIsSignalConnected((QsciLexerVerilog*)self, (QMetaMethod*)signal);
}

void q_scilexerverilog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerVerilog_OnIsSignalConnected((QsciLexerVerilog*)self, (intptr_t)callback);
}

void q_scilexerverilog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerverilog_delete(void* self) {
    QsciLexerVerilog_Delete((QsciLexerVerilog*)(self));
}
