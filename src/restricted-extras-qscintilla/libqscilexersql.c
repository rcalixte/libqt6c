#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexersql.hpp"
#include "libqscilexersql.h"

QsciLexerSQL* q_scilexersql_new() {
    return QsciLexerSQL_New();
}

QsciLexerSQL* q_scilexersql_new2(void* parent) {
    return QsciLexerSQL_New2((QObject*)parent);
}

const QMetaObject* q_scilexersql_meta_object(const void* self) {
    return QsciLexerSQL_MetaObject((QsciLexerSQL*)self);
}

void q_scilexersql_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerSQL_OnMetaObject((QsciLexerSQL*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexersql_super_meta_object(const void* self) {
    return QsciLexerSQL_SuperMetaObject((QsciLexerSQL*)self);
}

void* q_scilexersql_metacast(void* self, const char* param1) {
    return QsciLexerSQL_Metacast((QsciLexerSQL*)self, param1);
}

void q_scilexersql_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerSQL_OnMetacast((QsciLexerSQL*)self, (intptr_t)callback);
}

void* q_scilexersql_super_metacast(void* self, const char* param1) {
    return QsciLexerSQL_SuperMetacast((QsciLexerSQL*)self, param1);
}

int32_t q_scilexersql_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSQL_Metacall((QsciLexerSQL*)self, param1, param2, param3);
}

void q_scilexersql_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerSQL_OnMetacall((QsciLexerSQL*)self, (intptr_t)callback);
}

int32_t q_scilexersql_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSQL_SuperMetacall((QsciLexerSQL*)self, param1, param2, param3);
}

const char* q_scilexersql_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersql_language(const void* self) {
    return QsciLexerSQL_Language((QsciLexerSQL*)self);
}

const char* q_scilexersql_lexer(const void* self) {
    return QsciLexerSQL_Lexer((QsciLexerSQL*)self);
}

int32_t q_scilexersql_brace_style(const void* self) {
    return QsciLexerSQL_BraceStyle((QsciLexerSQL*)self);
}

QColor* q_scilexersql_default_color(const void* self, int style) {
    return QsciLexerSQL_DefaultColor((QsciLexerSQL*)self, style);
}

bool q_scilexersql_default_eol_fill(const void* self, int style) {
    return QsciLexerSQL_DefaultEolFill((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_default_font(const void* self, int style) {
    return QsciLexerSQL_DefaultFont((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_default_paper(const void* self, int style) {
    return QsciLexerSQL_DefaultPaper((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_keywords(const void* self, int set) {
    return QsciLexerSQL_Keywords((QsciLexerSQL*)self, set);
}

const char* q_scilexersql_description(const void* self, int style) {
    libqt_string _str = QsciLexerSQL_Description((QsciLexerSQL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersql_refresh_properties(void* self) {
    QsciLexerSQL_RefreshProperties((QsciLexerSQL*)self);
}

bool q_scilexersql_backslash_escapes(const void* self) {
    return QsciLexerSQL_BackslashEscapes((QsciLexerSQL*)self);
}

void q_scilexersql_set_dotted_words(void* self, bool enable) {
    QsciLexerSQL_SetDottedWords((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_dotted_words(const void* self) {
    return QsciLexerSQL_DottedWords((QsciLexerSQL*)self);
}

void q_scilexersql_set_fold_at_else(void* self, bool fold) {
    QsciLexerSQL_SetFoldAtElse((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_fold_at_else(const void* self) {
    return QsciLexerSQL_FoldAtElse((QsciLexerSQL*)self);
}

bool q_scilexersql_fold_comments(const void* self) {
    return QsciLexerSQL_FoldComments((QsciLexerSQL*)self);
}

bool q_scilexersql_fold_compact(const void* self) {
    return QsciLexerSQL_FoldCompact((QsciLexerSQL*)self);
}

void q_scilexersql_set_fold_only_begin(void* self, bool fold) {
    QsciLexerSQL_SetFoldOnlyBegin((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_fold_only_begin(const void* self) {
    return QsciLexerSQL_FoldOnlyBegin((QsciLexerSQL*)self);
}

void q_scilexersql_set_hash_comments(void* self, bool enable) {
    QsciLexerSQL_SetHashComments((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_hash_comments(const void* self) {
    return QsciLexerSQL_HashComments((QsciLexerSQL*)self);
}

void q_scilexersql_set_quoted_identifiers(void* self, bool enable) {
    QsciLexerSQL_SetQuotedIdentifiers((QsciLexerSQL*)self, enable);
}

bool q_scilexersql_quoted_identifiers(const void* self) {
    return QsciLexerSQL_QuotedIdentifiers((QsciLexerSQL*)self);
}

void q_scilexersql_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_SetBackslashEscapes((QsciLexerSQL*)self, enable);
}

void q_scilexersql_on_set_backslash_escapes(void* self, void (*callback)(void*, bool)) {
    QsciLexerSQL_OnSetBackslashEscapes((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_super_set_backslash_escapes(void* self, bool enable) {
    QsciLexerSQL_SuperSetBackslashEscapes((QsciLexerSQL*)self, enable);
}

void q_scilexersql_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_SetFoldComments((QsciLexerSQL*)self, fold);
}

void q_scilexersql_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerSQL_OnSetFoldComments((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_super_set_fold_comments(void* self, bool fold) {
    QsciLexerSQL_SuperSetFoldComments((QsciLexerSQL*)self, fold);
}

void q_scilexersql_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_SetFoldCompact((QsciLexerSQL*)self, fold);
}

void q_scilexersql_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerSQL_OnSetFoldCompact((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_super_set_fold_compact(void* self, bool fold) {
    QsciLexerSQL_SuperSetFoldCompact((QsciLexerSQL*)self, fold);
}

bool q_scilexersql_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_ReadProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersql_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerSQL_WriteProperties((QsciLexerSQL*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexersql_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersql_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexersql_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexersql_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexersql_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexersql_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexersql_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexersql_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexersql_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexersql_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexersql_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexersql_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersql_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersql_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexersql_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersql_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexersql_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersql_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersql_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersql_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexersql_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexersql_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexersql_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexersql_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersql_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexersql_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexersql_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexersql_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexersql_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexersql_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexersql_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexersql_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexersql_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexersql_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexersql_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexersql_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexersql_children(const void* self) {
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

QMetaObject__Connection* q_scilexersql_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexersql_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexersql_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexersql_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexersql_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexersql_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexersql_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexersql_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexersql_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexersql_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexersql_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexersql_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexersql_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersql_dynamic_property_names\n");
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

QBindingStorage* q_scilexersql_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexersql_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexersql_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexersql_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexersql_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexersql_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexersql_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexersql_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexersql_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexersql_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexersql_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexersql_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexersql_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexersql_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexersql_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexersql_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexersql_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexersql_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexersql_lexer_id(const void* self) {
    return QsciLexerSQL_LexerId((QsciLexerSQL*)self);
}

int32_t q_scilexersql_super_lexer_id(const void* self) {
    return QsciLexerSQL_SuperLexerId((QsciLexerSQL*)self);
}

void q_scilexersql_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSQL_OnLexerId((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char* q_scilexersql_auto_completion_fillups(const void* self) {
    return QsciLexerSQL_AutoCompletionFillups((QsciLexerSQL*)self);
}

const char* q_scilexersql_super_auto_completion_fillups(const void* self) {
    return QsciLexerSQL_SuperAutoCompletionFillups((QsciLexerSQL*)self);
}

void q_scilexersql_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerSQL_OnAutoCompletionFillups((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char** q_scilexersql_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerSQL_AutoCompletionWordSeparators((QsciLexerSQL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersql_auto_completion_word_separators\n");
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

const char** q_scilexersql_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerSQL_SuperAutoCompletionWordSeparators((QsciLexerSQL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersql_auto_completion_word_separators\n");
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

void q_scilexersql_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerSQL_OnAutoCompletionWordSeparators((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char* q_scilexersql_block_end(const void* self, int* style) {
    return QsciLexerSQL_BlockEnd((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_super_block_end(const void* self, int* style) {
    return QsciLexerSQL_SuperBlockEnd((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSQL_OnBlockEnd((const QsciLexerSQL*)self, (intptr_t)callback);
}

int32_t q_scilexersql_block_lookback(const void* self) {
    return QsciLexerSQL_BlockLookback((QsciLexerSQL*)self);
}

int32_t q_scilexersql_super_block_lookback(const void* self) {
    return QsciLexerSQL_SuperBlockLookback((QsciLexerSQL*)self);
}

void q_scilexersql_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSQL_OnBlockLookback((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char* q_scilexersql_block_start(const void* self, int* style) {
    return QsciLexerSQL_BlockStart((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_super_block_start(const void* self, int* style) {
    return QsciLexerSQL_SuperBlockStart((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSQL_OnBlockStart((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char* q_scilexersql_block_start_keyword(const void* self, int* style) {
    return QsciLexerSQL_BlockStartKeyword((QsciLexerSQL*)self, style);
}

const char* q_scilexersql_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerSQL_SuperBlockStartKeyword((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSQL_OnBlockStartKeyword((const QsciLexerSQL*)self, (intptr_t)callback);
}

bool q_scilexersql_case_sensitive(const void* self) {
    return QsciLexerSQL_CaseSensitive((QsciLexerSQL*)self);
}

bool q_scilexersql_super_case_sensitive(const void* self) {
    return QsciLexerSQL_SuperCaseSensitive((QsciLexerSQL*)self);
}

void q_scilexersql_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerSQL_OnCaseSensitive((const QsciLexerSQL*)self, (intptr_t)callback);
}

QColor* q_scilexersql_color(const void* self, int style) {
    return QsciLexerSQL_Color((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_super_color(const void* self, int style) {
    return QsciLexerSQL_SuperColor((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSQL_OnColor((const QsciLexerSQL*)self, (intptr_t)callback);
}

bool q_scilexersql_eol_fill(const void* self, int style) {
    return QsciLexerSQL_EolFill((QsciLexerSQL*)self, style);
}

bool q_scilexersql_super_eol_fill(const void* self, int style) {
    return QsciLexerSQL_SuperEolFill((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerSQL_OnEolFill((const QsciLexerSQL*)self, (intptr_t)callback);
}

QFont* q_scilexersql_font(const void* self, int style) {
    return QsciLexerSQL_Font((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_super_font(const void* self, int style) {
    return QsciLexerSQL_SuperFont((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerSQL_OnFont((const QsciLexerSQL*)self, (intptr_t)callback);
}

int32_t q_scilexersql_indentation_guide_view(const void* self) {
    return QsciLexerSQL_IndentationGuideView((QsciLexerSQL*)self);
}

int32_t q_scilexersql_super_indentation_guide_view(const void* self) {
    return QsciLexerSQL_SuperIndentationGuideView((QsciLexerSQL*)self);
}

void q_scilexersql_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSQL_OnIndentationGuideView((const QsciLexerSQL*)self, (intptr_t)callback);
}

int32_t q_scilexersql_default_style(const void* self) {
    return QsciLexerSQL_DefaultStyle((QsciLexerSQL*)self);
}

int32_t q_scilexersql_super_default_style(const void* self) {
    return QsciLexerSQL_SuperDefaultStyle((QsciLexerSQL*)self);
}

void q_scilexersql_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSQL_OnDefaultStyle((const QsciLexerSQL*)self, (intptr_t)callback);
}

QColor* q_scilexersql_paper(const void* self, int style) {
    return QsciLexerSQL_Paper((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_super_paper(const void* self, int style) {
    return QsciLexerSQL_SuperPaper((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSQL_OnPaper((const QsciLexerSQL*)self, (intptr_t)callback);
}

QColor* q_scilexersql_default_color2(const void* self, int style) {
    return QsciLexerSQL_DefaultColor2((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_super_default_color2(const void* self, int style) {
    return QsciLexerSQL_SuperDefaultColor2((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSQL_OnDefaultColor2((const QsciLexerSQL*)self, (intptr_t)callback);
}

QFont* q_scilexersql_default_font2(const void* self, int style) {
    return QsciLexerSQL_DefaultFont2((QsciLexerSQL*)self, style);
}

QFont* q_scilexersql_super_default_font2(const void* self, int style) {
    return QsciLexerSQL_SuperDefaultFont2((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerSQL_OnDefaultFont2((const QsciLexerSQL*)self, (intptr_t)callback);
}

QColor* q_scilexersql_default_paper2(const void* self, int style) {
    return QsciLexerSQL_DefaultPaper2((QsciLexerSQL*)self, style);
}

QColor* q_scilexersql_super_default_paper2(const void* self, int style) {
    return QsciLexerSQL_SuperDefaultPaper2((QsciLexerSQL*)self, style);
}

void q_scilexersql_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSQL_OnDefaultPaper2((const QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_editor(void* self, void* editor) {
    QsciLexerSQL_SetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

void q_scilexersql_super_set_editor(void* self, void* editor) {
    QsciLexerSQL_SuperSetEditor((QsciLexerSQL*)self, (QsciScintilla*)editor);
}

void q_scilexersql_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerSQL_OnSetEditor((QsciLexerSQL*)self, (intptr_t)callback);
}

int32_t q_scilexersql_style_bits_needed(const void* self) {
    return QsciLexerSQL_StyleBitsNeeded((QsciLexerSQL*)self);
}

int32_t q_scilexersql_super_style_bits_needed(const void* self) {
    return QsciLexerSQL_SuperStyleBitsNeeded((QsciLexerSQL*)self);
}

void q_scilexersql_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSQL_OnStyleBitsNeeded((const QsciLexerSQL*)self, (intptr_t)callback);
}

const char* q_scilexersql_word_characters(const void* self) {
    return QsciLexerSQL_WordCharacters((QsciLexerSQL*)self);
}

const char* q_scilexersql_super_word_characters(const void* self) {
    return QsciLexerSQL_SuperWordCharacters((QsciLexerSQL*)self);
}

void q_scilexersql_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerSQL_OnWordCharacters((const QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_SetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

void q_scilexersql_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSQL_SuperSetAutoIndentStyle((QsciLexerSQL*)self, autoindentstyle);
}

void q_scilexersql_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerSQL_OnSetAutoIndentStyle((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_color(void* self, const void* c, int style) {
    QsciLexerSQL_SetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_super_set_color(void* self, const void* c, int style) {
    QsciLexerSQL_SuperSetColor((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSQL_OnSetColor((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_SetEolFill((QsciLexerSQL*)self, eoffill, style);
}

void q_scilexersql_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSQL_SuperSetEolFill((QsciLexerSQL*)self, eoffill, style);
}

void q_scilexersql_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerSQL_OnSetEolFill((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_font(void* self, const void* f, int style) {
    QsciLexerSQL_SetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

void q_scilexersql_super_set_font(void* self, const void* f, int style) {
    QsciLexerSQL_SuperSetFont((QsciLexerSQL*)self, (QFont*)f, style);
}

void q_scilexersql_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSQL_OnSetFont((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_set_paper(void* self, const void* c, int style) {
    QsciLexerSQL_SetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_super_set_paper(void* self, const void* c, int style) {
    QsciLexerSQL_SuperSetPaper((QsciLexerSQL*)self, (QColor*)c, style);
}

void q_scilexersql_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSQL_OnSetPaper((QsciLexerSQL*)self, (intptr_t)callback);
}

bool q_scilexersql_event(void* self, void* event) {
    return QsciLexerSQL_Event((QsciLexerSQL*)self, (QEvent*)event);
}

bool q_scilexersql_super_event(void* self, void* event) {
    return QsciLexerSQL_SuperEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSQL_OnEvent((QsciLexerSQL*)self, (intptr_t)callback);
}

bool q_scilexersql_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_EventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexersql_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSQL_SuperEventFilter((QsciLexerSQL*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexersql_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerSQL_OnEventFilter((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_timer_event(void* self, void* event) {
    QsciLexerSQL_TimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

void q_scilexersql_super_timer_event(void* self, void* event) {
    QsciLexerSQL_SuperTimerEvent((QsciLexerSQL*)self, (QTimerEvent*)event);
}

void q_scilexersql_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSQL_OnTimerEvent((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_child_event(void* self, void* event) {
    QsciLexerSQL_ChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

void q_scilexersql_super_child_event(void* self, void* event) {
    QsciLexerSQL_SuperChildEvent((QsciLexerSQL*)self, (QChildEvent*)event);
}

void q_scilexersql_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSQL_OnChildEvent((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_custom_event(void* self, void* event) {
    QsciLexerSQL_CustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_super_custom_event(void* self, void* event) {
    QsciLexerSQL_SuperCustomEvent((QsciLexerSQL*)self, (QEvent*)event);
}

void q_scilexersql_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSQL_OnCustomEvent((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_connect_notify(void* self, const void* signal) {
    QsciLexerSQL_ConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_super_connect_notify(void* self, const void* signal) {
    QsciLexerSQL_SuperConnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerSQL_OnConnectNotify((QsciLexerSQL*)self, (intptr_t)callback);
}

void q_scilexersql_disconnect_notify(void* self, const void* signal) {
    QsciLexerSQL_DisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerSQL_SuperDisconnectNotify((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerSQL_OnDisconnectNotify((QsciLexerSQL*)self, (intptr_t)callback);
}

char* q_scilexersql_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerSQL_TextAsBytes((QsciLexerSQL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersql_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSQL_BytesAsText((QsciLexerSQL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexersql_sender(const void* self) {
    return QsciLexerSQL_Sender((QsciLexerSQL*)self);
}

int32_t q_scilexersql_sender_signal_index(const void* self) {
    return QsciLexerSQL_SenderSignalIndex((QsciLexerSQL*)self);
}

int32_t q_scilexersql_receivers(const void* self, const char* signal) {
    return QsciLexerSQL_Receivers((QsciLexerSQL*)self, signal);
}

bool q_scilexersql_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerSQL_IsSignalConnected((QsciLexerSQL*)self, (QMetaMethod*)signal);
}

void q_scilexersql_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexersql_delete(void* self) {
    QsciLexerSQL_Delete((QsciLexerSQL*)(self));
}
