#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerruby.hpp"
#include "libqscilexerruby.h"

QsciLexerRuby* q_scilexerruby_new() {
    return QsciLexerRuby_New();
}

QsciLexerRuby* q_scilexerruby_new2(void* parent) {
    return QsciLexerRuby_New2((QObject*)parent);
}

const QMetaObject* q_scilexerruby_meta_object(const void* self) {
    return QsciLexerRuby_MetaObject((QsciLexerRuby*)self);
}

void q_scilexerruby_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerRuby_OnMetaObject((QsciLexerRuby*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerruby_super_meta_object(const void* self) {
    return QsciLexerRuby_SuperMetaObject((QsciLexerRuby*)self);
}

void* q_scilexerruby_metacast(void* self, const char* param1) {
    return QsciLexerRuby_Metacast((QsciLexerRuby*)self, param1);
}

void q_scilexerruby_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerRuby_OnMetacast((QsciLexerRuby*)self, (intptr_t)callback);
}

void* q_scilexerruby_super_metacast(void* self, const char* param1) {
    return QsciLexerRuby_SuperMetacast((QsciLexerRuby*)self, param1);
}

int32_t q_scilexerruby_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerRuby_Metacall((QsciLexerRuby*)self, param1, param2, param3);
}

void q_scilexerruby_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerRuby_OnMetacall((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerRuby_SuperMetacall((QsciLexerRuby*)self, param1, param2, param3);
}

const char* q_scilexerruby_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_language(const void* self) {
    return QsciLexerRuby_Language((QsciLexerRuby*)self);
}

const char* q_scilexerruby_lexer(const void* self) {
    return QsciLexerRuby_Lexer((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_end(const void* self) {
    return QsciLexerRuby_BlockEnd((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_start(const void* self) {
    return QsciLexerRuby_BlockStart((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_start_keyword(const void* self) {
    return QsciLexerRuby_BlockStartKeyword((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_brace_style(const void* self) {
    return QsciLexerRuby_BraceStyle((QsciLexerRuby*)self);
}

QColor* q_scilexerruby_default_color(const void* self, int style) {
    return QsciLexerRuby_DefaultColor((QsciLexerRuby*)self, style);
}

bool q_scilexerruby_default_eol_fill(const void* self, int style) {
    return QsciLexerRuby_DefaultEolFill((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_default_font(const void* self, int style) {
    return QsciLexerRuby_DefaultFont((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_default_paper(const void* self, int style) {
    return QsciLexerRuby_DefaultPaper((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_keywords(const void* self, int set) {
    return QsciLexerRuby_Keywords((QsciLexerRuby*)self, set);
}

const char* q_scilexerruby_description(const void* self, int style) {
    libqt_string _str = QsciLexerRuby_Description((QsciLexerRuby*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_refresh_properties(void* self) {
    QsciLexerRuby_RefreshProperties((QsciLexerRuby*)self);
}

void q_scilexerruby_set_fold_comments(void* self, bool fold) {
    QsciLexerRuby_SetFoldComments((QsciLexerRuby*)self, fold);
}

bool q_scilexerruby_fold_comments(const void* self) {
    return QsciLexerRuby_FoldComments((QsciLexerRuby*)self);
}

void q_scilexerruby_set_fold_compact(void* self, bool fold) {
    QsciLexerRuby_SetFoldCompact((QsciLexerRuby*)self, fold);
}

bool q_scilexerruby_fold_compact(const void* self) {
    return QsciLexerRuby_FoldCompact((QsciLexerRuby*)self);
}

bool q_scilexerruby_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_ReadProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerruby_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_WriteProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerruby_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_block_end1(const void* self, int* style) {
    return QsciLexerRuby_BlockEnd1((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_block_start1(const void* self, int* style) {
    return QsciLexerRuby_BlockStart1((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_block_start_keyword1(const void* self, int* style) {
    return QsciLexerRuby_BlockStartKeyword1((QsciLexerRuby*)self, style);
}

QsciAbstractAPIs* q_scilexerruby_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerruby_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerruby_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerruby_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerruby_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerruby_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerruby_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerruby_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerruby_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerruby_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerruby_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerruby_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerruby_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerruby_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerruby_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerruby_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerruby_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerruby_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerruby_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerruby_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerruby_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerruby_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerruby_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerruby_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerruby_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerruby_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerruby_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerruby_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerruby_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerruby_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerruby_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerruby_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerruby_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerruby_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerruby_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerruby_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerruby_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerruby_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerruby_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerruby_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerruby_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerruby_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerruby_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerruby_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerruby_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerruby_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerruby_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerruby_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerruby_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerruby_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerruby_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerruby_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerruby_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerruby_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerruby_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerruby_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerruby_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerruby_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerruby_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerruby_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerruby_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerruby_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerruby_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerruby_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerruby_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_lexer_id(const void* self) {
    return QsciLexerRuby_LexerId((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_super_lexer_id(const void* self) {
    return QsciLexerRuby_SuperLexerId((QsciLexerRuby*)self);
}

void q_scilexerruby_on_lexer_id(void* self, int32_t (*callback)(const void*)) {
    QsciLexerRuby_OnLexerId((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_auto_completion_fillups(const void* self) {
    return QsciLexerRuby_AutoCompletionFillups((QsciLexerRuby*)self);
}

const char* q_scilexerruby_super_auto_completion_fillups(const void* self) {
    return QsciLexerRuby_SuperAutoCompletionFillups((QsciLexerRuby*)self);
}

void q_scilexerruby_on_auto_completion_fillups(void* self, const char* (*callback)(const void*)) {
    QsciLexerRuby_OnAutoCompletionFillups((QsciLexerRuby*)self, (intptr_t)callback);
}

const char** q_scilexerruby_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerRuby_AutoCompletionWordSeparators((QsciLexerRuby*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerruby_auto_completion_word_separators\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_scilexerruby_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerRuby_SuperAutoCompletionWordSeparators((QsciLexerRuby*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerruby_auto_completion_word_separators\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_scilexerruby_on_auto_completion_word_separators(void* self, const char** (*callback)(const void*)) {
    QsciLexerRuby_OnAutoCompletionWordSeparators((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_block_lookback(const void* self) {
    return QsciLexerRuby_BlockLookback((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_super_block_lookback(const void* self) {
    return QsciLexerRuby_SuperBlockLookback((QsciLexerRuby*)self);
}

void q_scilexerruby_on_block_lookback(void* self, int32_t (*callback)(const void*)) {
    QsciLexerRuby_OnBlockLookback((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_case_sensitive(const void* self) {
    return QsciLexerRuby_CaseSensitive((QsciLexerRuby*)self);
}

bool q_scilexerruby_super_case_sensitive(const void* self) {
    return QsciLexerRuby_SuperCaseSensitive((QsciLexerRuby*)self);
}

void q_scilexerruby_on_case_sensitive(void* self, bool (*callback)(const void*)) {
    QsciLexerRuby_OnCaseSensitive((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_color(const void* self, int style) {
    return QsciLexerRuby_Color((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_super_color(const void* self, int style) {
    return QsciLexerRuby_SuperColor((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_color(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerRuby_OnColor((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_eol_fill(const void* self, int style) {
    return QsciLexerRuby_EolFill((QsciLexerRuby*)self, style);
}

bool q_scilexerruby_super_eol_fill(const void* self, int style) {
    return QsciLexerRuby_SuperEolFill((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_eol_fill(void* self, bool (*callback)(const void*, int)) {
    QsciLexerRuby_OnEolFill((QsciLexerRuby*)self, (intptr_t)callback);
}

QFont* q_scilexerruby_font(const void* self, int style) {
    return QsciLexerRuby_Font((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_super_font(const void* self, int style) {
    return QsciLexerRuby_SuperFont((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_font(void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerRuby_OnFont((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_indentation_guide_view(const void* self) {
    return QsciLexerRuby_IndentationGuideView((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_super_indentation_guide_view(const void* self) {
    return QsciLexerRuby_SuperIndentationGuideView((QsciLexerRuby*)self);
}

void q_scilexerruby_on_indentation_guide_view(void* self, int32_t (*callback)(const void*)) {
    QsciLexerRuby_OnIndentationGuideView((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_default_style(const void* self) {
    return QsciLexerRuby_DefaultStyle((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_super_default_style(const void* self) {
    return QsciLexerRuby_SuperDefaultStyle((QsciLexerRuby*)self);
}

void q_scilexerruby_on_default_style(void* self, int32_t (*callback)(const void*)) {
    QsciLexerRuby_OnDefaultStyle((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_paper(const void* self, int style) {
    return QsciLexerRuby_Paper((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_super_paper(const void* self, int style) {
    return QsciLexerRuby_SuperPaper((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_paper(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerRuby_OnPaper((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_default_color2(const void* self, int style) {
    return QsciLexerRuby_DefaultColor2((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_super_default_color2(const void* self, int style) {
    return QsciLexerRuby_SuperDefaultColor2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_color2(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerRuby_OnDefaultColor2((QsciLexerRuby*)self, (intptr_t)callback);
}

QFont* q_scilexerruby_default_font2(const void* self, int style) {
    return QsciLexerRuby_DefaultFont2((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_super_default_font2(const void* self, int style) {
    return QsciLexerRuby_SuperDefaultFont2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_font2(void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerRuby_OnDefaultFont2((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_default_paper2(const void* self, int style) {
    return QsciLexerRuby_DefaultPaper2((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_super_default_paper2(const void* self, int style) {
    return QsciLexerRuby_SuperDefaultPaper2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_paper2(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerRuby_OnDefaultPaper2((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_editor(void* self, void* editor) {
    QsciLexerRuby_SetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

void q_scilexerruby_super_set_editor(void* self, void* editor) {
    QsciLexerRuby_SuperSetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

void q_scilexerruby_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnSetEditor((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_style_bits_needed(const void* self) {
    return QsciLexerRuby_StyleBitsNeeded((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_super_style_bits_needed(const void* self) {
    return QsciLexerRuby_SuperStyleBitsNeeded((QsciLexerRuby*)self);
}

void q_scilexerruby_on_style_bits_needed(void* self, int32_t (*callback)(const void*)) {
    QsciLexerRuby_OnStyleBitsNeeded((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_word_characters(const void* self) {
    return QsciLexerRuby_WordCharacters((QsciLexerRuby*)self);
}

const char* q_scilexerruby_super_word_characters(const void* self) {
    return QsciLexerRuby_SuperWordCharacters((QsciLexerRuby*)self);
}

void q_scilexerruby_on_word_characters(void* self, const char* (*callback)(const void*)) {
    QsciLexerRuby_OnWordCharacters((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_SetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

void q_scilexerruby_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_SuperSetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

void q_scilexerruby_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerRuby_OnSetAutoIndentStyle((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_color(void* self, const void* c, int style) {
    QsciLexerRuby_SetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_super_set_color(void* self, const void* c, int style) {
    QsciLexerRuby_SuperSetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerRuby_OnSetColor((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_SetEolFill((QsciLexerRuby*)self, eoffill, style);
}

void q_scilexerruby_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_SuperSetEolFill((QsciLexerRuby*)self, eoffill, style);
}

void q_scilexerruby_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerRuby_OnSetEolFill((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_font(void* self, const void* f, int style) {
    QsciLexerRuby_SetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

void q_scilexerruby_super_set_font(void* self, const void* f, int style) {
    QsciLexerRuby_SuperSetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

void q_scilexerruby_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerRuby_OnSetFont((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_paper(void* self, const void* c, int style) {
    QsciLexerRuby_SetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_super_set_paper(void* self, const void* c, int style) {
    QsciLexerRuby_SuperSetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerRuby_OnSetPaper((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_event(void* self, void* event) {
    return QsciLexerRuby_Event((QsciLexerRuby*)self, (QEvent*)event);
}

bool q_scilexerruby_super_event(void* self, void* event) {
    return QsciLexerRuby_SuperEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerRuby_OnEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_EventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerruby_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_SuperEventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerruby_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerRuby_OnEventFilter((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_timer_event(void* self, void* event) {
    QsciLexerRuby_TimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

void q_scilexerruby_super_timer_event(void* self, void* event) {
    QsciLexerRuby_SuperTimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

void q_scilexerruby_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnTimerEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_child_event(void* self, void* event) {
    QsciLexerRuby_ChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

void q_scilexerruby_super_child_event(void* self, void* event) {
    QsciLexerRuby_SuperChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

void q_scilexerruby_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnChildEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_custom_event(void* self, void* event) {
    QsciLexerRuby_CustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_super_custom_event(void* self, void* event) {
    QsciLexerRuby_SuperCustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnCustomEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_connect_notify(void* self, const void* signal) {
    QsciLexerRuby_ConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_super_connect_notify(void* self, const void* signal) {
    QsciLexerRuby_SuperConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerRuby_OnConnectNotify((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_disconnect_notify(void* self, const void* signal) {
    QsciLexerRuby_DisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerRuby_SuperDisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerRuby_OnDisconnectNotify((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerRuby_TextAsBytes((QsciLexerRuby*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerRuby_BytesAsText((QsciLexerRuby*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerruby_sender(const void* self) {
    return QsciLexerRuby_Sender((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_sender_signal_index(const void* self) {
    return QsciLexerRuby_SenderSignalIndex((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_receivers(const void* self, const char* signal) {
    return QsciLexerRuby_Receivers((QsciLexerRuby*)self, signal);
}

bool q_scilexerruby_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerRuby_IsSignalConnected((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerruby_delete(void* self) {
    QsciLexerRuby_Delete((QsciLexerRuby*)(self));
}
