#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerpostscript.hpp"
#include "libqscilexerpostscript.h"

QsciLexerPostScript* q_scilexerpostscript_new() {
    return QsciLexerPostScript_new();
}

QsciLexerPostScript* q_scilexerpostscript_new2(void* parent) {
    return QsciLexerPostScript_new2((QObject*)parent);
}

const QMetaObject* q_scilexerpostscript_meta_object(void* self) {
    return QsciLexerPostScript_MetaObject((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerPostScript_OnMetaObject((QsciLexerPostScript*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerpostscript_qbase_meta_object(void* self) {
    return QsciLexerPostScript_QBaseMetaObject((QsciLexerPostScript*)self);
}

void* q_scilexerpostscript_metacast(void* self, const char* param1) {
    return QsciLexerPostScript_Metacast((QsciLexerPostScript*)self, param1);
}

void q_scilexerpostscript_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerPostScript_OnMetacast((QsciLexerPostScript*)self, (intptr_t)callback);
}

void* q_scilexerpostscript_qbase_metacast(void* self, const char* param1) {
    return QsciLexerPostScript_QBaseMetacast((QsciLexerPostScript*)self, param1);
}

int32_t q_scilexerpostscript_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPostScript_Metacall((QsciLexerPostScript*)self, param1, param2, param3);
}

void q_scilexerpostscript_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerPostScript_OnMetacall((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPostScript_QBaseMetacall((QsciLexerPostScript*)self, param1, param2, param3);
}

const char* q_scilexerpostscript_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpostscript_language(void* self) {
    return QsciLexerPostScript_Language((QsciLexerPostScript*)self);
}

const char* q_scilexerpostscript_lexer(void* self) {
    return QsciLexerPostScript_Lexer((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_brace_style(void* self) {
    return QsciLexerPostScript_BraceStyle((QsciLexerPostScript*)self);
}

QColor* q_scilexerpostscript_default_color(void* self, int style) {
    return QsciLexerPostScript_DefaultColor((QsciLexerPostScript*)self, style);
}

QFont* q_scilexerpostscript_default_font(void* self, int style) {
    return QsciLexerPostScript_DefaultFont((QsciLexerPostScript*)self, style);
}

QColor* q_scilexerpostscript_default_paper(void* self, int style) {
    return QsciLexerPostScript_DefaultPaper((QsciLexerPostScript*)self, style);
}

const char* q_scilexerpostscript_keywords(void* self, int set) {
    return QsciLexerPostScript_Keywords((QsciLexerPostScript*)self, set);
}

const char* q_scilexerpostscript_description(void* self, int style) {
    libqt_string _str = QsciLexerPostScript_Description((QsciLexerPostScript*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpostscript_refresh_properties(void* self) {
    QsciLexerPostScript_RefreshProperties((QsciLexerPostScript*)self);
}

bool q_scilexerpostscript_tokenize(void* self) {
    return QsciLexerPostScript_Tokenize((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_level(void* self) {
    return QsciLexerPostScript_Level((QsciLexerPostScript*)self);
}

bool q_scilexerpostscript_fold_compact(void* self) {
    return QsciLexerPostScript_FoldCompact((QsciLexerPostScript*)self);
}

bool q_scilexerpostscript_fold_at_else(void* self) {
    return QsciLexerPostScript_FoldAtElse((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_set_tokenize(void* self, bool tokenize) {
    QsciLexerPostScript_SetTokenize((QsciLexerPostScript*)self, tokenize);
}

void q_scilexerpostscript_on_set_tokenize(void* self, void (*callback)(void*, bool)) {
    QsciLexerPostScript_OnSetTokenize((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_qbase_set_tokenize(void* self, bool tokenize) {
    QsciLexerPostScript_QBaseSetTokenize((QsciLexerPostScript*)self, tokenize);
}

void q_scilexerpostscript_set_level(void* self, int level) {
    QsciLexerPostScript_SetLevel((QsciLexerPostScript*)self, level);
}

void q_scilexerpostscript_on_set_level(void* self, void (*callback)(void*, int)) {
    QsciLexerPostScript_OnSetLevel((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_qbase_set_level(void* self, int level) {
    QsciLexerPostScript_QBaseSetLevel((QsciLexerPostScript*)self, level);
}

void q_scilexerpostscript_set_fold_compact(void* self, bool fold) {
    QsciLexerPostScript_SetFoldCompact((QsciLexerPostScript*)self, fold);
}

void q_scilexerpostscript_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerPostScript_OnSetFoldCompact((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPostScript_QBaseSetFoldCompact((QsciLexerPostScript*)self, fold);
}

void q_scilexerpostscript_set_fold_at_else(void* self, bool fold) {
    QsciLexerPostScript_SetFoldAtElse((QsciLexerPostScript*)self, fold);
}

void q_scilexerpostscript_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerPostScript_OnSetFoldAtElse((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerPostScript_QBaseSetFoldAtElse((QsciLexerPostScript*)self, fold);
}

bool q_scilexerpostscript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_ReadProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpostscript_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPostScript_OnReadProperties((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_QBaseReadProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerpostscript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_WriteProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpostscript_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPostScript_OnWriteProperties((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPostScript_QBaseWriteProperties((QsciLexerPostScript*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerpostscript_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpostscript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerpostscript_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerpostscript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerpostscript_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerpostscript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerpostscript_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerpostscript_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerpostscript_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerpostscript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerpostscript_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerpostscript_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpostscript_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpostscript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerpostscript_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpostscript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerpostscript_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpostscript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpostscript_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpostscript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerpostscript_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerpostscript_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerpostscript_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpostscript_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerpostscript_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerpostscript_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerpostscript_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerpostscript_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerpostscript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerpostscript_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerpostscript_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerpostscript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerpostscript_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerpostscript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerpostscript_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerpostscript_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerpostscript_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerpostscript_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerpostscript_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerpostscript_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerpostscript_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerpostscript_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerpostscript_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerpostscript_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerpostscript_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerpostscript_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerpostscript_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerpostscript_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpostscript_dynamic_property_names\n");
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

QBindingStorage* q_scilexerpostscript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerpostscript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerpostscript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerpostscript_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerpostscript_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerpostscript_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerpostscript_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerpostscript_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerpostscript_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerpostscript_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerpostscript_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerpostscript_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerpostscript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerpostscript_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_lexer_id(void* self) {
    return QsciLexerPostScript_LexerId((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_lexer_id(void* self) {
    return QsciLexerPostScript_QBaseLexerId((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnLexerId((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_auto_completion_fillups(void* self) {
    return QsciLexerPostScript_AutoCompletionFillups((QsciLexerPostScript*)self);
}

const char* q_scilexerpostscript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPostScript_QBaseAutoCompletionFillups((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPostScript_OnAutoCompletionFillups((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char** q_scilexerpostscript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPostScript_AutoCompletionWordSeparators((QsciLexerPostScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpostscript_auto_completion_word_separators\n");
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

const char** q_scilexerpostscript_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPostScript_QBaseAutoCompletionWordSeparators((QsciLexerPostScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpostscript_auto_completion_word_separators\n");
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

void q_scilexerpostscript_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerPostScript_OnAutoCompletionWordSeparators((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_block_end(void* self, int* style) {
    return QsciLexerPostScript_BlockEnd((QsciLexerPostScript*)self, style);
}

const char* q_scilexerpostscript_qbase_block_end(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockEnd((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPostScript_OnBlockEnd((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_block_lookback(void* self) {
    return QsciLexerPostScript_BlockLookback((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_block_lookback(void* self) {
    return QsciLexerPostScript_QBaseBlockLookback((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnBlockLookback((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_block_start(void* self, int* style) {
    return QsciLexerPostScript_BlockStart((QsciLexerPostScript*)self, style);
}

const char* q_scilexerpostscript_qbase_block_start(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockStart((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPostScript_OnBlockStart((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_block_start_keyword(void* self, int* style) {
    return QsciLexerPostScript_BlockStartKeyword((QsciLexerPostScript*)self, style);
}

const char* q_scilexerpostscript_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPostScript_QBaseBlockStartKeyword((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPostScript_OnBlockStartKeyword((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_case_sensitive(void* self) {
    return QsciLexerPostScript_CaseSensitive((QsciLexerPostScript*)self);
}

bool q_scilexerpostscript_qbase_case_sensitive(void* self) {
    return QsciLexerPostScript_QBaseCaseSensitive((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPostScript_OnCaseSensitive((QsciLexerPostScript*)self, (intptr_t)callback);
}

QColor* q_scilexerpostscript_color(void* self, int style) {
    return QsciLexerPostScript_Color((QsciLexerPostScript*)self, style);
}

QColor* q_scilexerpostscript_qbase_color(void* self, int style) {
    return QsciLexerPostScript_QBaseColor((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPostScript_OnColor((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_eol_fill(void* self, int style) {
    return QsciLexerPostScript_EolFill((QsciLexerPostScript*)self, style);
}

bool q_scilexerpostscript_qbase_eol_fill(void* self, int style) {
    return QsciLexerPostScript_QBaseEolFill((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPostScript_OnEolFill((QsciLexerPostScript*)self, (intptr_t)callback);
}

QFont* q_scilexerpostscript_font(void* self, int style) {
    return QsciLexerPostScript_Font((QsciLexerPostScript*)self, style);
}

QFont* q_scilexerpostscript_qbase_font(void* self, int style) {
    return QsciLexerPostScript_QBaseFont((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPostScript_OnFont((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_indentation_guide_view(void* self) {
    return QsciLexerPostScript_IndentationGuideView((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_indentation_guide_view(void* self) {
    return QsciLexerPostScript_QBaseIndentationGuideView((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnIndentationGuideView((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_default_style(void* self) {
    return QsciLexerPostScript_DefaultStyle((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_default_style(void* self) {
    return QsciLexerPostScript_QBaseDefaultStyle((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnDefaultStyle((QsciLexerPostScript*)self, (intptr_t)callback);
}

QColor* q_scilexerpostscript_paper(void* self, int style) {
    return QsciLexerPostScript_Paper((QsciLexerPostScript*)self, style);
}

QColor* q_scilexerpostscript_qbase_paper(void* self, int style) {
    return QsciLexerPostScript_QBasePaper((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPostScript_OnPaper((QsciLexerPostScript*)self, (intptr_t)callback);
}

QColor* q_scilexerpostscript_default_color2(void* self, int style) {
    return QsciLexerPostScript_DefaultColor2((QsciLexerPostScript*)self, style);
}

QColor* q_scilexerpostscript_qbase_default_color2(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultColor2((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPostScript_OnDefaultColor2((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_default_eol_fill(void* self, int style) {
    return QsciLexerPostScript_DefaultEolFill((QsciLexerPostScript*)self, style);
}

bool q_scilexerpostscript_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultEolFill((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPostScript_OnDefaultEolFill((QsciLexerPostScript*)self, (intptr_t)callback);
}

QFont* q_scilexerpostscript_default_font2(void* self, int style) {
    return QsciLexerPostScript_DefaultFont2((QsciLexerPostScript*)self, style);
}

QFont* q_scilexerpostscript_qbase_default_font2(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultFont2((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPostScript_OnDefaultFont2((QsciLexerPostScript*)self, (intptr_t)callback);
}

QColor* q_scilexerpostscript_default_paper2(void* self, int style) {
    return QsciLexerPostScript_DefaultPaper2((QsciLexerPostScript*)self, style);
}

QColor* q_scilexerpostscript_qbase_default_paper2(void* self, int style) {
    return QsciLexerPostScript_QBaseDefaultPaper2((QsciLexerPostScript*)self, style);
}

void q_scilexerpostscript_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPostScript_OnDefaultPaper2((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_editor(void* self, void* editor) {
    QsciLexerPostScript_SetEditor((QsciLexerPostScript*)self, (QsciScintilla*)editor);
}

void q_scilexerpostscript_qbase_set_editor(void* self, void* editor) {
    QsciLexerPostScript_QBaseSetEditor((QsciLexerPostScript*)self, (QsciScintilla*)editor);
}

void q_scilexerpostscript_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnSetEditor((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_style_bits_needed(void* self) {
    return QsciLexerPostScript_StyleBitsNeeded((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_style_bits_needed(void* self) {
    return QsciLexerPostScript_QBaseStyleBitsNeeded((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnStyleBitsNeeded((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_word_characters(void* self) {
    return QsciLexerPostScript_WordCharacters((QsciLexerPostScript*)self);
}

const char* q_scilexerpostscript_qbase_word_characters(void* self) {
    return QsciLexerPostScript_QBaseWordCharacters((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerPostScript_OnWordCharacters((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPostScript_SetAutoIndentStyle((QsciLexerPostScript*)self, autoindentstyle);
}

void q_scilexerpostscript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPostScript_QBaseSetAutoIndentStyle((QsciLexerPostScript*)self, autoindentstyle);
}

void q_scilexerpostscript_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPostScript_OnSetAutoIndentStyle((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_color(void* self, void* c, int style) {
    QsciLexerPostScript_SetColor((QsciLexerPostScript*)self, (QColor*)c, style);
}

void q_scilexerpostscript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPostScript_QBaseSetColor((QsciLexerPostScript*)self, (QColor*)c, style);
}

void q_scilexerpostscript_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPostScript_OnSetColor((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPostScript_SetEolFill((QsciLexerPostScript*)self, eoffill, style);
}

void q_scilexerpostscript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPostScript_QBaseSetEolFill((QsciLexerPostScript*)self, eoffill, style);
}

void q_scilexerpostscript_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPostScript_OnSetEolFill((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_font(void* self, void* f, int style) {
    QsciLexerPostScript_SetFont((QsciLexerPostScript*)self, (QFont*)f, style);
}

void q_scilexerpostscript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPostScript_QBaseSetFont((QsciLexerPostScript*)self, (QFont*)f, style);
}

void q_scilexerpostscript_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPostScript_OnSetFont((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_set_paper(void* self, void* c, int style) {
    QsciLexerPostScript_SetPaper((QsciLexerPostScript*)self, (QColor*)c, style);
}

void q_scilexerpostscript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPostScript_QBaseSetPaper((QsciLexerPostScript*)self, (QColor*)c, style);
}

void q_scilexerpostscript_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPostScript_OnSetPaper((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_event(void* self, void* event) {
    return QsciLexerPostScript_Event((QsciLexerPostScript*)self, (QEvent*)event);
}

bool q_scilexerpostscript_qbase_event(void* self, void* event) {
    return QsciLexerPostScript_QBaseEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

void q_scilexerpostscript_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPostScript_OnEvent((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPostScript_EventFilter((QsciLexerPostScript*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerpostscript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPostScript_QBaseEventFilter((QsciLexerPostScript*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerpostscript_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPostScript_OnEventFilter((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_timer_event(void* self, void* event) {
    QsciLexerPostScript_TimerEvent((QsciLexerPostScript*)self, (QTimerEvent*)event);
}

void q_scilexerpostscript_qbase_timer_event(void* self, void* event) {
    QsciLexerPostScript_QBaseTimerEvent((QsciLexerPostScript*)self, (QTimerEvent*)event);
}

void q_scilexerpostscript_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnTimerEvent((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_child_event(void* self, void* event) {
    QsciLexerPostScript_ChildEvent((QsciLexerPostScript*)self, (QChildEvent*)event);
}

void q_scilexerpostscript_qbase_child_event(void* self, void* event) {
    QsciLexerPostScript_QBaseChildEvent((QsciLexerPostScript*)self, (QChildEvent*)event);
}

void q_scilexerpostscript_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnChildEvent((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_custom_event(void* self, void* event) {
    QsciLexerPostScript_CustomEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

void q_scilexerpostscript_qbase_custom_event(void* self, void* event) {
    QsciLexerPostScript_QBaseCustomEvent((QsciLexerPostScript*)self, (QEvent*)event);
}

void q_scilexerpostscript_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnCustomEvent((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_connect_notify(void* self, void* signal) {
    QsciLexerPostScript_ConnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

void q_scilexerpostscript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPostScript_QBaseConnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

void q_scilexerpostscript_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnConnectNotify((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_disconnect_notify(void* self, void* signal) {
    QsciLexerPostScript_DisconnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

void q_scilexerpostscript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPostScript_QBaseDisconnectNotify((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

void q_scilexerpostscript_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPostScript_OnDisconnectNotify((QsciLexerPostScript*)self, (intptr_t)callback);
}

char* q_scilexerpostscript_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPostScript_TextAsBytes((QsciLexerPostScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerpostscript_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPostScript_QBaseTextAsBytes((QsciLexerPostScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpostscript_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPostScript_OnTextAsBytes((QsciLexerPostScript*)self, (intptr_t)callback);
}

const char* q_scilexerpostscript_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPostScript_BytesAsText((QsciLexerPostScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpostscript_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPostScript_QBaseBytesAsText((QsciLexerPostScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpostscript_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPostScript_OnBytesAsText((QsciLexerPostScript*)self, (intptr_t)callback);
}

QObject* q_scilexerpostscript_sender(void* self) {
    return QsciLexerPostScript_Sender((QsciLexerPostScript*)self);
}

QObject* q_scilexerpostscript_qbase_sender(void* self) {
    return QsciLexerPostScript_QBaseSender((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPostScript_OnSender((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_sender_signal_index(void* self) {
    return QsciLexerPostScript_SenderSignalIndex((QsciLexerPostScript*)self);
}

int32_t q_scilexerpostscript_qbase_sender_signal_index(void* self) {
    return QsciLexerPostScript_QBaseSenderSignalIndex((QsciLexerPostScript*)self);
}

void q_scilexerpostscript_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPostScript_OnSenderSignalIndex((QsciLexerPostScript*)self, (intptr_t)callback);
}

int32_t q_scilexerpostscript_receivers(void* self, const char* signal) {
    return QsciLexerPostScript_Receivers((QsciLexerPostScript*)self, signal);
}

int32_t q_scilexerpostscript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPostScript_QBaseReceivers((QsciLexerPostScript*)self, signal);
}

void q_scilexerpostscript_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPostScript_OnReceivers((QsciLexerPostScript*)self, (intptr_t)callback);
}

bool q_scilexerpostscript_is_signal_connected(void* self, void* signal) {
    return QsciLexerPostScript_IsSignalConnected((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

bool q_scilexerpostscript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPostScript_QBaseIsSignalConnected((QsciLexerPostScript*)self, (QMetaMethod*)signal);
}

void q_scilexerpostscript_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPostScript_OnIsSignalConnected((QsciLexerPostScript*)self, (intptr_t)callback);
}

void q_scilexerpostscript_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerpostscript_delete(void* self) {
    QsciLexerPostScript_Delete((QsciLexerPostScript*)(self));
}
