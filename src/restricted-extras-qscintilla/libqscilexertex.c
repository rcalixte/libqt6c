#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexertex.hpp"
#include "libqscilexertex.h"

QsciLexerTeX* q_scilexertex_new() {
    return QsciLexerTeX_new();
}

QsciLexerTeX* q_scilexertex_new2(void* parent) {
    return QsciLexerTeX_new2((QObject*)parent);
}

const QMetaObject* q_scilexertex_meta_object(void* self) {
    return QsciLexerTeX_MetaObject((QsciLexerTeX*)self);
}

void q_scilexertex_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerTeX_OnMetaObject((QsciLexerTeX*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexertex_super_meta_object(void* self) {
    return QsciLexerTeX_SuperMetaObject((QsciLexerTeX*)self);
}

void* q_scilexertex_metacast(void* self, const char* param1) {
    return QsciLexerTeX_Metacast((QsciLexerTeX*)self, param1);
}

void q_scilexertex_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerTeX_OnMetacast((QsciLexerTeX*)self, (intptr_t)callback);
}

void* q_scilexertex_super_metacast(void* self, const char* param1) {
    return QsciLexerTeX_SuperMetacast((QsciLexerTeX*)self, param1);
}

int32_t q_scilexertex_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTeX_Metacall((QsciLexerTeX*)self, param1, param2, param3);
}

void q_scilexertex_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerTeX_OnMetacall((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTeX_SuperMetacall((QsciLexerTeX*)self, param1, param2, param3);
}

const char* q_scilexertex_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertex_language(void* self) {
    return QsciLexerTeX_Language((QsciLexerTeX*)self);
}

const char* q_scilexertex_lexer(void* self) {
    return QsciLexerTeX_Lexer((QsciLexerTeX*)self);
}

const char* q_scilexertex_word_characters(void* self) {
    return QsciLexerTeX_WordCharacters((QsciLexerTeX*)self);
}

QColor* q_scilexertex_default_color(void* self, int style) {
    return QsciLexerTeX_DefaultColor((QsciLexerTeX*)self, style);
}

const char* q_scilexertex_keywords(void* self, int set) {
    return QsciLexerTeX_Keywords((QsciLexerTeX*)self, set);
}

const char* q_scilexertex_description(void* self, int style) {
    libqt_string _str = QsciLexerTeX_Description((QsciLexerTeX*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertex_refresh_properties(void* self) {
    QsciLexerTeX_RefreshProperties((QsciLexerTeX*)self);
}

void q_scilexertex_set_fold_comments(void* self, bool fold) {
    QsciLexerTeX_SetFoldComments((QsciLexerTeX*)self, fold);
}

bool q_scilexertex_fold_comments(void* self) {
    return QsciLexerTeX_FoldComments((QsciLexerTeX*)self);
}

void q_scilexertex_set_fold_compact(void* self, bool fold) {
    QsciLexerTeX_SetFoldCompact((QsciLexerTeX*)self, fold);
}

bool q_scilexertex_fold_compact(void* self) {
    return QsciLexerTeX_FoldCompact((QsciLexerTeX*)self);
}

void q_scilexertex_set_process_comments(void* self, bool enable) {
    QsciLexerTeX_SetProcessComments((QsciLexerTeX*)self, enable);
}

bool q_scilexertex_process_comments(void* self) {
    return QsciLexerTeX_ProcessComments((QsciLexerTeX*)self);
}

void q_scilexertex_set_process_if(void* self, bool enable) {
    QsciLexerTeX_SetProcessIf((QsciLexerTeX*)self, enable);
}

bool q_scilexertex_process_if(void* self) {
    return QsciLexerTeX_ProcessIf((QsciLexerTeX*)self);
}

bool q_scilexertex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_ReadProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertex_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTeX_OnReadProperties((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_SuperReadProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertex_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_WriteProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertex_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTeX_OnWriteProperties((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_super_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTeX_SuperWriteProperties((QsciLexerTeX*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexertex_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexertex_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexertex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QFont* q_scilexertex_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

QColor* q_scilexertex_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexertex_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexertex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexertex_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexertex_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexertex_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexertex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexertex_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexertex_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertex_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexertex_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertex_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexertex_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertex_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertex_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexertex_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexertex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexertex_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexertex_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertex_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexertex_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexertex_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexertex_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexertex_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexertex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexertex_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexertex_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexertex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexertex_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexertex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexertex_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexertex_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexertex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexertex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexertex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexertex_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexertex_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexertex_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexertex_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexertex_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexertex_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexertex_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexertex_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexertex_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexertex_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexertex_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexertex_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexertex_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertex_dynamic_property_names\n");
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

QBindingStorage* q_scilexertex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexertex_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexertex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexertex_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexertex_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexertex_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexertex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexertex_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexertex_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexertex_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexertex_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexertex_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexertex_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexertex_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexertex_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexertex_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexertex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexertex_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexertex_lexer_id(void* self) {
    return QsciLexerTeX_LexerId((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_lexer_id(void* self) {
    return QsciLexerTeX_SuperLexerId((QsciLexerTeX*)self);
}

void q_scilexertex_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnLexerId((QsciLexerTeX*)self, (intptr_t)callback);
}

const char* q_scilexertex_auto_completion_fillups(void* self) {
    return QsciLexerTeX_AutoCompletionFillups((QsciLexerTeX*)self);
}

const char* q_scilexertex_super_auto_completion_fillups(void* self) {
    return QsciLexerTeX_SuperAutoCompletionFillups((QsciLexerTeX*)self);
}

void q_scilexertex_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerTeX_OnAutoCompletionFillups((QsciLexerTeX*)self, (intptr_t)callback);
}

const char** q_scilexertex_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTeX_AutoCompletionWordSeparators((QsciLexerTeX*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertex_auto_completion_word_separators\n");
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

const char** q_scilexertex_super_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTeX_SuperAutoCompletionWordSeparators((QsciLexerTeX*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertex_auto_completion_word_separators\n");
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

void q_scilexertex_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerTeX_OnAutoCompletionWordSeparators((QsciLexerTeX*)self, (intptr_t)callback);
}

const char* q_scilexertex_block_end(void* self, int* style) {
    return QsciLexerTeX_BlockEnd((QsciLexerTeX*)self, style);
}

const char* q_scilexertex_super_block_end(void* self, int* style) {
    return QsciLexerTeX_SuperBlockEnd((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTeX_OnBlockEnd((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_block_lookback(void* self) {
    return QsciLexerTeX_BlockLookback((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_block_lookback(void* self) {
    return QsciLexerTeX_SuperBlockLookback((QsciLexerTeX*)self);
}

void q_scilexertex_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnBlockLookback((QsciLexerTeX*)self, (intptr_t)callback);
}

const char* q_scilexertex_block_start(void* self, int* style) {
    return QsciLexerTeX_BlockStart((QsciLexerTeX*)self, style);
}

const char* q_scilexertex_super_block_start(void* self, int* style) {
    return QsciLexerTeX_SuperBlockStart((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTeX_OnBlockStart((QsciLexerTeX*)self, (intptr_t)callback);
}

const char* q_scilexertex_block_start_keyword(void* self, int* style) {
    return QsciLexerTeX_BlockStartKeyword((QsciLexerTeX*)self, style);
}

const char* q_scilexertex_super_block_start_keyword(void* self, int* style) {
    return QsciLexerTeX_SuperBlockStartKeyword((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTeX_OnBlockStartKeyword((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_brace_style(void* self) {
    return QsciLexerTeX_BraceStyle((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_brace_style(void* self) {
    return QsciLexerTeX_SuperBraceStyle((QsciLexerTeX*)self);
}

void q_scilexertex_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnBraceStyle((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_case_sensitive(void* self) {
    return QsciLexerTeX_CaseSensitive((QsciLexerTeX*)self);
}

bool q_scilexertex_super_case_sensitive(void* self) {
    return QsciLexerTeX_SuperCaseSensitive((QsciLexerTeX*)self);
}

void q_scilexertex_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerTeX_OnCaseSensitive((QsciLexerTeX*)self, (intptr_t)callback);
}

QColor* q_scilexertex_color(void* self, int style) {
    return QsciLexerTeX_Color((QsciLexerTeX*)self, style);
}

QColor* q_scilexertex_super_color(void* self, int style) {
    return QsciLexerTeX_SuperColor((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTeX_OnColor((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_eol_fill(void* self, int style) {
    return QsciLexerTeX_EolFill((QsciLexerTeX*)self, style);
}

bool q_scilexertex_super_eol_fill(void* self, int style) {
    return QsciLexerTeX_SuperEolFill((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerTeX_OnEolFill((QsciLexerTeX*)self, (intptr_t)callback);
}

QFont* q_scilexertex_font(void* self, int style) {
    return QsciLexerTeX_Font((QsciLexerTeX*)self, style);
}

QFont* q_scilexertex_super_font(void* self, int style) {
    return QsciLexerTeX_SuperFont((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTeX_OnFont((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_indentation_guide_view(void* self) {
    return QsciLexerTeX_IndentationGuideView((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_indentation_guide_view(void* self) {
    return QsciLexerTeX_SuperIndentationGuideView((QsciLexerTeX*)self);
}

void q_scilexertex_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnIndentationGuideView((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_default_style(void* self) {
    return QsciLexerTeX_DefaultStyle((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_default_style(void* self) {
    return QsciLexerTeX_SuperDefaultStyle((QsciLexerTeX*)self);
}

void q_scilexertex_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnDefaultStyle((QsciLexerTeX*)self, (intptr_t)callback);
}

QColor* q_scilexertex_paper(void* self, int style) {
    return QsciLexerTeX_Paper((QsciLexerTeX*)self, style);
}

QColor* q_scilexertex_super_paper(void* self, int style) {
    return QsciLexerTeX_SuperPaper((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTeX_OnPaper((QsciLexerTeX*)self, (intptr_t)callback);
}

QColor* q_scilexertex_default_color2(void* self, int style) {
    return QsciLexerTeX_DefaultColor2((QsciLexerTeX*)self, style);
}

QColor* q_scilexertex_super_default_color2(void* self, int style) {
    return QsciLexerTeX_SuperDefaultColor2((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTeX_OnDefaultColor2((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_default_eol_fill(void* self, int style) {
    return QsciLexerTeX_DefaultEolFill((QsciLexerTeX*)self, style);
}

bool q_scilexertex_super_default_eol_fill(void* self, int style) {
    return QsciLexerTeX_SuperDefaultEolFill((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerTeX_OnDefaultEolFill((QsciLexerTeX*)self, (intptr_t)callback);
}

QFont* q_scilexertex_default_font2(void* self, int style) {
    return QsciLexerTeX_DefaultFont2((QsciLexerTeX*)self, style);
}

QFont* q_scilexertex_super_default_font2(void* self, int style) {
    return QsciLexerTeX_SuperDefaultFont2((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTeX_OnDefaultFont2((QsciLexerTeX*)self, (intptr_t)callback);
}

QColor* q_scilexertex_default_paper2(void* self, int style) {
    return QsciLexerTeX_DefaultPaper2((QsciLexerTeX*)self, style);
}

QColor* q_scilexertex_super_default_paper2(void* self, int style) {
    return QsciLexerTeX_SuperDefaultPaper2((QsciLexerTeX*)self, style);
}

void q_scilexertex_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTeX_OnDefaultPaper2((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_editor(void* self, void* editor) {
    QsciLexerTeX_SetEditor((QsciLexerTeX*)self, (QsciScintilla*)editor);
}

void q_scilexertex_super_set_editor(void* self, void* editor) {
    QsciLexerTeX_SuperSetEditor((QsciLexerTeX*)self, (QsciScintilla*)editor);
}

void q_scilexertex_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnSetEditor((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_style_bits_needed(void* self) {
    return QsciLexerTeX_StyleBitsNeeded((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_style_bits_needed(void* self) {
    return QsciLexerTeX_SuperStyleBitsNeeded((QsciLexerTeX*)self);
}

void q_scilexertex_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnStyleBitsNeeded((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTeX_SetAutoIndentStyle((QsciLexerTeX*)self, autoindentstyle);
}

void q_scilexertex_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTeX_SuperSetAutoIndentStyle((QsciLexerTeX*)self, autoindentstyle);
}

void q_scilexertex_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerTeX_OnSetAutoIndentStyle((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_color(void* self, void* c, int style) {
    QsciLexerTeX_SetColor((QsciLexerTeX*)self, (QColor*)c, style);
}

void q_scilexertex_super_set_color(void* self, void* c, int style) {
    QsciLexerTeX_SuperSetColor((QsciLexerTeX*)self, (QColor*)c, style);
}

void q_scilexertex_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTeX_OnSetColor((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTeX_SetEolFill((QsciLexerTeX*)self, eoffill, style);
}

void q_scilexertex_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTeX_SuperSetEolFill((QsciLexerTeX*)self, eoffill, style);
}

void q_scilexertex_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerTeX_OnSetEolFill((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_font(void* self, void* f, int style) {
    QsciLexerTeX_SetFont((QsciLexerTeX*)self, (QFont*)f, style);
}

void q_scilexertex_super_set_font(void* self, void* f, int style) {
    QsciLexerTeX_SuperSetFont((QsciLexerTeX*)self, (QFont*)f, style);
}

void q_scilexertex_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTeX_OnSetFont((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_set_paper(void* self, void* c, int style) {
    QsciLexerTeX_SetPaper((QsciLexerTeX*)self, (QColor*)c, style);
}

void q_scilexertex_super_set_paper(void* self, void* c, int style) {
    QsciLexerTeX_SuperSetPaper((QsciLexerTeX*)self, (QColor*)c, style);
}

void q_scilexertex_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTeX_OnSetPaper((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_event(void* self, void* event) {
    return QsciLexerTeX_Event((QsciLexerTeX*)self, (QEvent*)event);
}

bool q_scilexertex_super_event(void* self, void* event) {
    return QsciLexerTeX_SuperEvent((QsciLexerTeX*)self, (QEvent*)event);
}

void q_scilexertex_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTeX_OnEvent((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTeX_EventFilter((QsciLexerTeX*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexertex_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTeX_SuperEventFilter((QsciLexerTeX*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexertex_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerTeX_OnEventFilter((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_timer_event(void* self, void* event) {
    QsciLexerTeX_TimerEvent((QsciLexerTeX*)self, (QTimerEvent*)event);
}

void q_scilexertex_super_timer_event(void* self, void* event) {
    QsciLexerTeX_SuperTimerEvent((QsciLexerTeX*)self, (QTimerEvent*)event);
}

void q_scilexertex_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnTimerEvent((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_child_event(void* self, void* event) {
    QsciLexerTeX_ChildEvent((QsciLexerTeX*)self, (QChildEvent*)event);
}

void q_scilexertex_super_child_event(void* self, void* event) {
    QsciLexerTeX_SuperChildEvent((QsciLexerTeX*)self, (QChildEvent*)event);
}

void q_scilexertex_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnChildEvent((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_custom_event(void* self, void* event) {
    QsciLexerTeX_CustomEvent((QsciLexerTeX*)self, (QEvent*)event);
}

void q_scilexertex_super_custom_event(void* self, void* event) {
    QsciLexerTeX_SuperCustomEvent((QsciLexerTeX*)self, (QEvent*)event);
}

void q_scilexertex_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnCustomEvent((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_connect_notify(void* self, void* signal) {
    QsciLexerTeX_ConnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

void q_scilexertex_super_connect_notify(void* self, void* signal) {
    QsciLexerTeX_SuperConnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

void q_scilexertex_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnConnectNotify((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_disconnect_notify(void* self, void* signal) {
    QsciLexerTeX_DisconnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

void q_scilexertex_super_disconnect_notify(void* self, void* signal) {
    QsciLexerTeX_SuperDisconnectNotify((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

void q_scilexertex_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTeX_OnDisconnectNotify((QsciLexerTeX*)self, (intptr_t)callback);
}

char* q_scilexertex_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTeX_TextAsBytes((QsciLexerTeX*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexertex_super_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTeX_SuperTextAsBytes((QsciLexerTeX*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertex_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*)) {
    QsciLexerTeX_OnTextAsBytes((QsciLexerTeX*)self, (intptr_t)callback);
}

const char* q_scilexertex_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTeX_BytesAsText((QsciLexerTeX*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertex_super_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTeX_SuperBytesAsText((QsciLexerTeX*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertex_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerTeX_OnBytesAsText((QsciLexerTeX*)self, (intptr_t)callback);
}

QObject* q_scilexertex_sender(void* self) {
    return QsciLexerTeX_Sender((QsciLexerTeX*)self);
}

QObject* q_scilexertex_super_sender(void* self) {
    return QsciLexerTeX_SuperSender((QsciLexerTeX*)self);
}

void q_scilexertex_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerTeX_OnSender((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_sender_signal_index(void* self) {
    return QsciLexerTeX_SenderSignalIndex((QsciLexerTeX*)self);
}

int32_t q_scilexertex_super_sender_signal_index(void* self) {
    return QsciLexerTeX_SuperSenderSignalIndex((QsciLexerTeX*)self);
}

void q_scilexertex_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerTeX_OnSenderSignalIndex((QsciLexerTeX*)self, (intptr_t)callback);
}

int32_t q_scilexertex_receivers(void* self, const char* signal) {
    return QsciLexerTeX_Receivers((QsciLexerTeX*)self, signal);
}

int32_t q_scilexertex_super_receivers(void* self, const char* signal) {
    return QsciLexerTeX_SuperReceivers((QsciLexerTeX*)self, signal);
}

void q_scilexertex_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerTeX_OnReceivers((QsciLexerTeX*)self, (intptr_t)callback);
}

bool q_scilexertex_is_signal_connected(void* self, void* signal) {
    return QsciLexerTeX_IsSignalConnected((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

bool q_scilexertex_super_is_signal_connected(void* self, void* signal) {
    return QsciLexerTeX_SuperIsSignalConnected((QsciLexerTeX*)self, (QMetaMethod*)signal);
}

void q_scilexertex_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTeX_OnIsSignalConnected((QsciLexerTeX*)self, (intptr_t)callback);
}

void q_scilexertex_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexertex_delete(void* self) {
    QsciLexerTeX_Delete((QsciLexerTeX*)(self));
}
