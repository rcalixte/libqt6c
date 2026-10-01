#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerbash.hpp"
#include "libqscilexerbash.h"

QsciLexerBash* q_scilexerbash_new() {
    return QsciLexerBash_New();
}

QsciLexerBash* q_scilexerbash_new2(void* parent) {
    return QsciLexerBash_New2((QObject*)parent);
}

const QMetaObject* q_scilexerbash_meta_object(const void* self) {
    return QsciLexerBash_MetaObject((QsciLexerBash*)self);
}

void q_scilexerbash_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerBash_OnMetaObject((QsciLexerBash*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerbash_super_meta_object(const void* self) {
    return QsciLexerBash_SuperMetaObject((QsciLexerBash*)self);
}

void* q_scilexerbash_metacast(void* self, const char* param1) {
    return QsciLexerBash_Metacast((QsciLexerBash*)self, param1);
}

void q_scilexerbash_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerBash_OnMetacast((QsciLexerBash*)self, (intptr_t)callback);
}

void* q_scilexerbash_super_metacast(void* self, const char* param1) {
    return QsciLexerBash_SuperMetacast((QsciLexerBash*)self, param1);
}

int32_t q_scilexerbash_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBash_Metacall((QsciLexerBash*)self, param1, param2, param3);
}

void q_scilexerbash_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerBash_OnMetacall((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBash_SuperMetacall((QsciLexerBash*)self, param1, param2, param3);
}

const char* q_scilexerbash_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_language(const void* self) {
    return QsciLexerBash_Language((QsciLexerBash*)self);
}

const char* q_scilexerbash_lexer(const void* self) {
    return QsciLexerBash_Lexer((QsciLexerBash*)self);
}

int32_t q_scilexerbash_brace_style(const void* self) {
    return QsciLexerBash_BraceStyle((QsciLexerBash*)self);
}

const char* q_scilexerbash_word_characters(const void* self) {
    return QsciLexerBash_WordCharacters((QsciLexerBash*)self);
}

QColor* q_scilexerbash_default_color(const void* self, int style) {
    return QsciLexerBash_DefaultColor((QsciLexerBash*)self, style);
}

bool q_scilexerbash_default_eol_fill(const void* self, int style) {
    return QsciLexerBash_DefaultEolFill((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_default_font(const void* self, int style) {
    return QsciLexerBash_DefaultFont((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_default_paper(const void* self, int style) {
    return QsciLexerBash_DefaultPaper((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_keywords(const void* self, int set) {
    return QsciLexerBash_Keywords((QsciLexerBash*)self, set);
}

const char* q_scilexerbash_description(const void* self, int style) {
    libqt_string _str = QsciLexerBash_Description((QsciLexerBash*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_refresh_properties(void* self) {
    QsciLexerBash_RefreshProperties((QsciLexerBash*)self);
}

bool q_scilexerbash_fold_comments(const void* self) {
    return QsciLexerBash_FoldComments((QsciLexerBash*)self);
}

bool q_scilexerbash_fold_compact(const void* self) {
    return QsciLexerBash_FoldCompact((QsciLexerBash*)self);
}

void q_scilexerbash_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_SetFoldComments((QsciLexerBash*)self, fold);
}

void q_scilexerbash_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerBash_OnSetFoldComments((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_super_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_SuperSetFoldComments((QsciLexerBash*)self, fold);
}

void q_scilexerbash_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_SetFoldCompact((QsciLexerBash*)self, fold);
}

void q_scilexerbash_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerBash_OnSetFoldCompact((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_super_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_SuperSetFoldCompact((QsciLexerBash*)self, fold);
}

bool q_scilexerbash_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_ReadProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerbash_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerBash_WriteProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerbash_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerbash_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerbash_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerbash_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerbash_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerbash_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerbash_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerbash_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerbash_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerbash_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerbash_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbash_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerbash_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerbash_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbash_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerbash_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerbash_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerbash_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerbash_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerbash_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerbash_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerbash_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerbash_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerbash_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerbash_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerbash_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerbash_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerbash_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerbash_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerbash_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerbash_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerbash_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerbash_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerbash_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerbash_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerbash_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerbash_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerbash_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerbash_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerbash_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerbash_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerbash_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerbash_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerbash_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerbash_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerbash_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerbash_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_dynamic_property_names\n");
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

QBindingStorage* q_scilexerbash_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerbash_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerbash_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerbash_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerbash_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerbash_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerbash_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerbash_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerbash_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerbash_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerbash_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerbash_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerbash_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerbash_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerbash_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerbash_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerbash_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerbash_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_lexer_id(const void* self) {
    return QsciLexerBash_LexerId((QsciLexerBash*)self);
}

int32_t q_scilexerbash_super_lexer_id(const void* self) {
    return QsciLexerBash_SuperLexerId((QsciLexerBash*)self);
}

void q_scilexerbash_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerBash_OnLexerId((const QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_auto_completion_fillups(const void* self) {
    return QsciLexerBash_AutoCompletionFillups((QsciLexerBash*)self);
}

const char* q_scilexerbash_super_auto_completion_fillups(const void* self) {
    return QsciLexerBash_SuperAutoCompletionFillups((QsciLexerBash*)self);
}

void q_scilexerbash_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerBash_OnAutoCompletionFillups((const QsciLexerBash*)self, (intptr_t)callback);
}

const char** q_scilexerbash_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerBash_AutoCompletionWordSeparators((QsciLexerBash*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_auto_completion_word_separators\n");
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

const char** q_scilexerbash_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerBash_SuperAutoCompletionWordSeparators((QsciLexerBash*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_auto_completion_word_separators\n");
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

void q_scilexerbash_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerBash_OnAutoCompletionWordSeparators((const QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_end(const void* self, int* style) {
    return QsciLexerBash_BlockEnd((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_super_block_end(const void* self, int* style) {
    return QsciLexerBash_SuperBlockEnd((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerBash_OnBlockEnd((const QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_block_lookback(const void* self) {
    return QsciLexerBash_BlockLookback((QsciLexerBash*)self);
}

int32_t q_scilexerbash_super_block_lookback(const void* self) {
    return QsciLexerBash_SuperBlockLookback((QsciLexerBash*)self);
}

void q_scilexerbash_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerBash_OnBlockLookback((const QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_start(const void* self, int* style) {
    return QsciLexerBash_BlockStart((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_super_block_start(const void* self, int* style) {
    return QsciLexerBash_SuperBlockStart((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerBash_OnBlockStart((const QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_start_keyword(const void* self, int* style) {
    return QsciLexerBash_BlockStartKeyword((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerBash_SuperBlockStartKeyword((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerBash_OnBlockStartKeyword((const QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_case_sensitive(const void* self) {
    return QsciLexerBash_CaseSensitive((QsciLexerBash*)self);
}

bool q_scilexerbash_super_case_sensitive(const void* self) {
    return QsciLexerBash_SuperCaseSensitive((QsciLexerBash*)self);
}

void q_scilexerbash_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerBash_OnCaseSensitive((const QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_color(const void* self, int style) {
    return QsciLexerBash_Color((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_super_color(const void* self, int style) {
    return QsciLexerBash_SuperColor((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerBash_OnColor((const QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_eol_fill(const void* self, int style) {
    return QsciLexerBash_EolFill((QsciLexerBash*)self, style);
}

bool q_scilexerbash_super_eol_fill(const void* self, int style) {
    return QsciLexerBash_SuperEolFill((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerBash_OnEolFill((const QsciLexerBash*)self, (intptr_t)callback);
}

QFont* q_scilexerbash_font(const void* self, int style) {
    return QsciLexerBash_Font((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_super_font(const void* self, int style) {
    return QsciLexerBash_SuperFont((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerBash_OnFont((const QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_indentation_guide_view(const void* self) {
    return QsciLexerBash_IndentationGuideView((QsciLexerBash*)self);
}

int32_t q_scilexerbash_super_indentation_guide_view(const void* self) {
    return QsciLexerBash_SuperIndentationGuideView((QsciLexerBash*)self);
}

void q_scilexerbash_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerBash_OnIndentationGuideView((const QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_default_style(const void* self) {
    return QsciLexerBash_DefaultStyle((QsciLexerBash*)self);
}

int32_t q_scilexerbash_super_default_style(const void* self) {
    return QsciLexerBash_SuperDefaultStyle((QsciLexerBash*)self);
}

void q_scilexerbash_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerBash_OnDefaultStyle((const QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_paper(const void* self, int style) {
    return QsciLexerBash_Paper((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_super_paper(const void* self, int style) {
    return QsciLexerBash_SuperPaper((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerBash_OnPaper((const QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_default_color2(const void* self, int style) {
    return QsciLexerBash_DefaultColor2((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_super_default_color2(const void* self, int style) {
    return QsciLexerBash_SuperDefaultColor2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerBash_OnDefaultColor2((const QsciLexerBash*)self, (intptr_t)callback);
}

QFont* q_scilexerbash_default_font2(const void* self, int style) {
    return QsciLexerBash_DefaultFont2((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_super_default_font2(const void* self, int style) {
    return QsciLexerBash_SuperDefaultFont2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerBash_OnDefaultFont2((const QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_default_paper2(const void* self, int style) {
    return QsciLexerBash_DefaultPaper2((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_super_default_paper2(const void* self, int style) {
    return QsciLexerBash_SuperDefaultPaper2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerBash_OnDefaultPaper2((const QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_editor(void* self, void* editor) {
    QsciLexerBash_SetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

void q_scilexerbash_super_set_editor(void* self, void* editor) {
    QsciLexerBash_SuperSetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

void q_scilexerbash_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnSetEditor((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_style_bits_needed(const void* self) {
    return QsciLexerBash_StyleBitsNeeded((QsciLexerBash*)self);
}

int32_t q_scilexerbash_super_style_bits_needed(const void* self) {
    return QsciLexerBash_SuperStyleBitsNeeded((QsciLexerBash*)self);
}

void q_scilexerbash_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerBash_OnStyleBitsNeeded((const QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_SetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

void q_scilexerbash_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_SuperSetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

void q_scilexerbash_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerBash_OnSetAutoIndentStyle((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_color(void* self, const void* c, int style) {
    QsciLexerBash_SetColor((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_super_set_color(void* self, const void* c, int style) {
    QsciLexerBash_SuperSetColor((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerBash_OnSetColor((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_SetEolFill((QsciLexerBash*)self, eoffill, style);
}

void q_scilexerbash_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_SuperSetEolFill((QsciLexerBash*)self, eoffill, style);
}

void q_scilexerbash_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerBash_OnSetEolFill((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_font(void* self, const void* f, int style) {
    QsciLexerBash_SetFont((QsciLexerBash*)self, (QFont*)f, style);
}

void q_scilexerbash_super_set_font(void* self, const void* f, int style) {
    QsciLexerBash_SuperSetFont((QsciLexerBash*)self, (QFont*)f, style);
}

void q_scilexerbash_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerBash_OnSetFont((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_paper(void* self, const void* c, int style) {
    QsciLexerBash_SetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_super_set_paper(void* self, const void* c, int style) {
    QsciLexerBash_SuperSetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerBash_OnSetPaper((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_event(void* self, void* event) {
    return QsciLexerBash_Event((QsciLexerBash*)self, (QEvent*)event);
}

bool q_scilexerbash_super_event(void* self, void* event) {
    return QsciLexerBash_SuperEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerBash_OnEvent((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_EventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerbash_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_SuperEventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerbash_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerBash_OnEventFilter((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_timer_event(void* self, void* event) {
    QsciLexerBash_TimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

void q_scilexerbash_super_timer_event(void* self, void* event) {
    QsciLexerBash_SuperTimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

void q_scilexerbash_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnTimerEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_child_event(void* self, void* event) {
    QsciLexerBash_ChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

void q_scilexerbash_super_child_event(void* self, void* event) {
    QsciLexerBash_SuperChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

void q_scilexerbash_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnChildEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_custom_event(void* self, void* event) {
    QsciLexerBash_CustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_super_custom_event(void* self, void* event) {
    QsciLexerBash_SuperCustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnCustomEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_connect_notify(void* self, const void* signal) {
    QsciLexerBash_ConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_super_connect_notify(void* self, const void* signal) {
    QsciLexerBash_SuperConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerBash_OnConnectNotify((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_disconnect_notify(void* self, const void* signal) {
    QsciLexerBash_DisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerBash_SuperDisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerBash_OnDisconnectNotify((QsciLexerBash*)self, (intptr_t)callback);
}

char* q_scilexerbash_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerBash_TextAsBytes((QsciLexerBash*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerBash_BytesAsText((QsciLexerBash*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerbash_sender(const void* self) {
    return QsciLexerBash_Sender((QsciLexerBash*)self);
}

int32_t q_scilexerbash_sender_signal_index(const void* self) {
    return QsciLexerBash_SenderSignalIndex((QsciLexerBash*)self);
}

int32_t q_scilexerbash_receivers(const void* self, const char* signal) {
    return QsciLexerBash_Receivers((QsciLexerBash*)self, signal);
}

bool q_scilexerbash_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerBash_IsSignalConnected((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerbash_delete(void* self) {
    QsciLexerBash_Delete((QsciLexerBash*)(self));
}
