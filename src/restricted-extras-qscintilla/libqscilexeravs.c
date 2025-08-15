#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexeravs.hpp"
#include "libqscilexeravs.h"

QsciLexerAVS* q_scilexeravs_new() {
    return QsciLexerAVS_new();
}

QsciLexerAVS* q_scilexeravs_new2(void* parent) {
    return QsciLexerAVS_new2((QObject*)parent);
}

const QMetaObject* q_scilexeravs_meta_object(void* self) {
    return QsciLexerAVS_MetaObject((QsciLexerAVS*)self);
}

void* q_scilexeravs_metacast(void* self, const char* param1) {
    return QsciLexerAVS_Metacast((QsciLexerAVS*)self, param1);
}

int32_t q_scilexeravs_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAVS_Metacall((QsciLexerAVS*)self, param1, param2, param3);
}

void q_scilexeravs_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QsciLexerAVS_OnMetacall((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerAVS_QBaseMetacall((QsciLexerAVS*)self, param1, param2, param3);
}

const char* q_scilexeravs_tr(const char* s) {
    libqt_string _str = QsciLexerAVS_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeravs_language(void* self) {
    return QsciLexerAVS_Language((QsciLexerAVS*)self);
}

const char* q_scilexeravs_lexer(void* self) {
    return QsciLexerAVS_Lexer((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_brace_style(void* self) {
    return QsciLexerAVS_BraceStyle((QsciLexerAVS*)self);
}

const char* q_scilexeravs_word_characters(void* self) {
    return QsciLexerAVS_WordCharacters((QsciLexerAVS*)self);
}

QColor* q_scilexeravs_default_color(void* self, int style) {
    return QsciLexerAVS_DefaultColor((QsciLexerAVS*)self, style);
}

QFont* q_scilexeravs_default_font(void* self, int style) {
    return QsciLexerAVS_DefaultFont((QsciLexerAVS*)self, style);
}

const char* q_scilexeravs_keywords(void* self, int set) {
    return QsciLexerAVS_Keywords((QsciLexerAVS*)self, set);
}

const char* q_scilexeravs_description(void* self, int style) {
    libqt_string _str = QsciLexerAVS_Description((QsciLexerAVS*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeravs_refresh_properties(void* self) {
    QsciLexerAVS_RefreshProperties((QsciLexerAVS*)self);
}

bool q_scilexeravs_fold_comments(void* self) {
    return QsciLexerAVS_FoldComments((QsciLexerAVS*)self);
}

bool q_scilexeravs_fold_compact(void* self) {
    return QsciLexerAVS_FoldCompact((QsciLexerAVS*)self);
}

void q_scilexeravs_set_fold_comments(void* self, bool fold) {
    QsciLexerAVS_SetFoldComments((QsciLexerAVS*)self, fold);
}

void q_scilexeravs_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerAVS_OnSetFoldComments((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerAVS_QBaseSetFoldComments((QsciLexerAVS*)self, fold);
}

void q_scilexeravs_set_fold_compact(void* self, bool fold) {
    QsciLexerAVS_SetFoldCompact((QsciLexerAVS*)self, fold);
}

void q_scilexeravs_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerAVS_OnSetFoldCompact((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerAVS_QBaseSetFoldCompact((QsciLexerAVS*)self, fold);
}

bool q_scilexeravs_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_ReadProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeravs_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerAVS_OnReadProperties((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_QBaseReadProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeravs_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_WriteProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeravs_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerAVS_OnWriteProperties((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerAVS_QBaseWriteProperties((QsciLexerAVS*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexeravs_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerAVS_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeravs_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerAVS_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexeravs_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeravs_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexeravs_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexeravs_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeravs_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeravs_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeravs_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeravs_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeravs_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeravs_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeravs_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeravs_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeravs_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeravs_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeravs_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeravs_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeravs_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeravs_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeravs_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexeravs_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexeravs_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexeravs_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeravs_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeravs_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeravs_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeravs_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeravs_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeravs_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeravs_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeravs_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexeravs_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexeravs_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexeravs_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexeravs_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexeravs_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexeravs_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexeravs_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexeravs_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexeravs_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeravs_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeravs_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeravs_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexeravs_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeravs_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeravs_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeravs_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeravs_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeravs_dynamic_property_names");
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

QBindingStorage* q_scilexeravs_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeravs_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeravs_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeravs_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeravs_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeravs_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeravs_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexeravs_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexeravs_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexeravs_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexeravs_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexeravs_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeravs_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_lexer_id(void* self) {
    return QsciLexerAVS_LexerId((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_lexer_id(void* self) {
    return QsciLexerAVS_QBaseLexerId((QsciLexerAVS*)self);
}

void q_scilexeravs_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnLexerId((QsciLexerAVS*)self, (intptr_t)callback);
}

const char* q_scilexeravs_auto_completion_fillups(void* self) {
    return QsciLexerAVS_AutoCompletionFillups((QsciLexerAVS*)self);
}

const char* q_scilexeravs_qbase_auto_completion_fillups(void* self) {
    return QsciLexerAVS_QBaseAutoCompletionFillups((QsciLexerAVS*)self);
}

void q_scilexeravs_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerAVS_OnAutoCompletionFillups((QsciLexerAVS*)self, (intptr_t)callback);
}

const char** q_scilexeravs_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAVS_AutoCompletionWordSeparators((QsciLexerAVS*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeravs_auto_completion_word_separators");
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

const char** q_scilexeravs_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerAVS_QBaseAutoCompletionWordSeparators((QsciLexerAVS*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexeravs_auto_completion_word_separators");
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

void q_scilexeravs_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerAVS_OnAutoCompletionWordSeparators((QsciLexerAVS*)self, (intptr_t)callback);
}

const char* q_scilexeravs_block_end(void* self, int* style) {
    return QsciLexerAVS_BlockEnd((QsciLexerAVS*)self, style);
}

const char* q_scilexeravs_qbase_block_end(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockEnd((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerAVS_OnBlockEnd((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_block_lookback(void* self) {
    return QsciLexerAVS_BlockLookback((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_block_lookback(void* self) {
    return QsciLexerAVS_QBaseBlockLookback((QsciLexerAVS*)self);
}

void q_scilexeravs_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnBlockLookback((QsciLexerAVS*)self, (intptr_t)callback);
}

const char* q_scilexeravs_block_start(void* self, int* style) {
    return QsciLexerAVS_BlockStart((QsciLexerAVS*)self, style);
}

const char* q_scilexeravs_qbase_block_start(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockStart((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerAVS_OnBlockStart((QsciLexerAVS*)self, (intptr_t)callback);
}

const char* q_scilexeravs_block_start_keyword(void* self, int* style) {
    return QsciLexerAVS_BlockStartKeyword((QsciLexerAVS*)self, style);
}

const char* q_scilexeravs_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerAVS_QBaseBlockStartKeyword((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerAVS_OnBlockStartKeyword((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_case_sensitive(void* self) {
    return QsciLexerAVS_CaseSensitive((QsciLexerAVS*)self);
}

bool q_scilexeravs_qbase_case_sensitive(void* self) {
    return QsciLexerAVS_QBaseCaseSensitive((QsciLexerAVS*)self);
}

void q_scilexeravs_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerAVS_OnCaseSensitive((QsciLexerAVS*)self, (intptr_t)callback);
}

QColor* q_scilexeravs_color(void* self, int style) {
    return QsciLexerAVS_Color((QsciLexerAVS*)self, style);
}

QColor* q_scilexeravs_qbase_color(void* self, int style) {
    return QsciLexerAVS_QBaseColor((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerAVS_OnColor((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_eol_fill(void* self, int style) {
    return QsciLexerAVS_EolFill((QsciLexerAVS*)self, style);
}

bool q_scilexeravs_qbase_eol_fill(void* self, int style) {
    return QsciLexerAVS_QBaseEolFill((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerAVS_OnEolFill((QsciLexerAVS*)self, (intptr_t)callback);
}

QFont* q_scilexeravs_font(void* self, int style) {
    return QsciLexerAVS_Font((QsciLexerAVS*)self, style);
}

QFont* q_scilexeravs_qbase_font(void* self, int style) {
    return QsciLexerAVS_QBaseFont((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerAVS_OnFont((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_indentation_guide_view(void* self) {
    return QsciLexerAVS_IndentationGuideView((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_indentation_guide_view(void* self) {
    return QsciLexerAVS_QBaseIndentationGuideView((QsciLexerAVS*)self);
}

void q_scilexeravs_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnIndentationGuideView((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_default_style(void* self) {
    return QsciLexerAVS_DefaultStyle((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_default_style(void* self) {
    return QsciLexerAVS_QBaseDefaultStyle((QsciLexerAVS*)self);
}

void q_scilexeravs_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnDefaultStyle((QsciLexerAVS*)self, (intptr_t)callback);
}

QColor* q_scilexeravs_paper(void* self, int style) {
    return QsciLexerAVS_Paper((QsciLexerAVS*)self, style);
}

QColor* q_scilexeravs_qbase_paper(void* self, int style) {
    return QsciLexerAVS_QBasePaper((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerAVS_OnPaper((QsciLexerAVS*)self, (intptr_t)callback);
}

QColor* q_scilexeravs_default_color2(void* self, int style) {
    return QsciLexerAVS_DefaultColor2((QsciLexerAVS*)self, style);
}

QColor* q_scilexeravs_qbase_default_color2(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultColor2((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerAVS_OnDefaultColor2((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_default_eol_fill(void* self, int style) {
    return QsciLexerAVS_DefaultEolFill((QsciLexerAVS*)self, style);
}

bool q_scilexeravs_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultEolFill((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerAVS_OnDefaultEolFill((QsciLexerAVS*)self, (intptr_t)callback);
}

QFont* q_scilexeravs_default_font2(void* self, int style) {
    return QsciLexerAVS_DefaultFont2((QsciLexerAVS*)self, style);
}

QFont* q_scilexeravs_qbase_default_font2(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultFont2((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerAVS_OnDefaultFont2((QsciLexerAVS*)self, (intptr_t)callback);
}

QColor* q_scilexeravs_default_paper2(void* self, int style) {
    return QsciLexerAVS_DefaultPaper2((QsciLexerAVS*)self, style);
}

QColor* q_scilexeravs_qbase_default_paper2(void* self, int style) {
    return QsciLexerAVS_QBaseDefaultPaper2((QsciLexerAVS*)self, style);
}

void q_scilexeravs_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerAVS_OnDefaultPaper2((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_editor(void* self, void* editor) {
    QsciLexerAVS_SetEditor((QsciLexerAVS*)self, (QsciScintilla*)editor);
}

void q_scilexeravs_qbase_set_editor(void* self, void* editor) {
    QsciLexerAVS_QBaseSetEditor((QsciLexerAVS*)self, (QsciScintilla*)editor);
}

void q_scilexeravs_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnSetEditor((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_style_bits_needed(void* self) {
    return QsciLexerAVS_StyleBitsNeeded((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_style_bits_needed(void* self) {
    return QsciLexerAVS_QBaseStyleBitsNeeded((QsciLexerAVS*)self);
}

void q_scilexeravs_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnStyleBitsNeeded((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAVS_SetAutoIndentStyle((QsciLexerAVS*)self, autoindentstyle);
}

void q_scilexeravs_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerAVS_QBaseSetAutoIndentStyle((QsciLexerAVS*)self, autoindentstyle);
}

void q_scilexeravs_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerAVS_OnSetAutoIndentStyle((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_color(void* self, void* c, int style) {
    QsciLexerAVS_SetColor((QsciLexerAVS*)self, (QColor*)c, style);
}

void q_scilexeravs_qbase_set_color(void* self, void* c, int style) {
    QsciLexerAVS_QBaseSetColor((QsciLexerAVS*)self, (QColor*)c, style);
}

void q_scilexeravs_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerAVS_OnSetColor((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAVS_SetEolFill((QsciLexerAVS*)self, eoffill, style);
}

void q_scilexeravs_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerAVS_QBaseSetEolFill((QsciLexerAVS*)self, eoffill, style);
}

void q_scilexeravs_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerAVS_OnSetEolFill((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_font(void* self, void* f, int style) {
    QsciLexerAVS_SetFont((QsciLexerAVS*)self, (QFont*)f, style);
}

void q_scilexeravs_qbase_set_font(void* self, void* f, int style) {
    QsciLexerAVS_QBaseSetFont((QsciLexerAVS*)self, (QFont*)f, style);
}

void q_scilexeravs_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerAVS_OnSetFont((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_set_paper(void* self, void* c, int style) {
    QsciLexerAVS_SetPaper((QsciLexerAVS*)self, (QColor*)c, style);
}

void q_scilexeravs_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerAVS_QBaseSetPaper((QsciLexerAVS*)self, (QColor*)c, style);
}

void q_scilexeravs_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerAVS_OnSetPaper((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_event(void* self, void* event) {
    return QsciLexerAVS_Event((QsciLexerAVS*)self, (QEvent*)event);
}

bool q_scilexeravs_qbase_event(void* self, void* event) {
    return QsciLexerAVS_QBaseEvent((QsciLexerAVS*)self, (QEvent*)event);
}

void q_scilexeravs_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerAVS_OnEvent((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAVS_EventFilter((QsciLexerAVS*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeravs_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerAVS_QBaseEventFilter((QsciLexerAVS*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeravs_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerAVS_OnEventFilter((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_timer_event(void* self, void* event) {
    QsciLexerAVS_TimerEvent((QsciLexerAVS*)self, (QTimerEvent*)event);
}

void q_scilexeravs_qbase_timer_event(void* self, void* event) {
    QsciLexerAVS_QBaseTimerEvent((QsciLexerAVS*)self, (QTimerEvent*)event);
}

void q_scilexeravs_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnTimerEvent((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_child_event(void* self, void* event) {
    QsciLexerAVS_ChildEvent((QsciLexerAVS*)self, (QChildEvent*)event);
}

void q_scilexeravs_qbase_child_event(void* self, void* event) {
    QsciLexerAVS_QBaseChildEvent((QsciLexerAVS*)self, (QChildEvent*)event);
}

void q_scilexeravs_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnChildEvent((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_custom_event(void* self, void* event) {
    QsciLexerAVS_CustomEvent((QsciLexerAVS*)self, (QEvent*)event);
}

void q_scilexeravs_qbase_custom_event(void* self, void* event) {
    QsciLexerAVS_QBaseCustomEvent((QsciLexerAVS*)self, (QEvent*)event);
}

void q_scilexeravs_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnCustomEvent((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_connect_notify(void* self, void* signal) {
    QsciLexerAVS_ConnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

void q_scilexeravs_qbase_connect_notify(void* self, void* signal) {
    QsciLexerAVS_QBaseConnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

void q_scilexeravs_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnConnectNotify((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_disconnect_notify(void* self, void* signal) {
    QsciLexerAVS_DisconnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

void q_scilexeravs_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerAVS_QBaseDisconnectNotify((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

void q_scilexeravs_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerAVS_OnDisconnectNotify((QsciLexerAVS*)self, (intptr_t)callback);
}

char* q_scilexeravs_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerAVS_TextAsBytes((QsciLexerAVS*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexeravs_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerAVS_QBaseTextAsBytes((QsciLexerAVS*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeravs_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerAVS_OnTextAsBytes((QsciLexerAVS*)self, (intptr_t)callback);
}

const char* q_scilexeravs_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerAVS_BytesAsText((QsciLexerAVS*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeravs_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerAVS_QBaseBytesAsText((QsciLexerAVS*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeravs_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerAVS_OnBytesAsText((QsciLexerAVS*)self, (intptr_t)callback);
}

QObject* q_scilexeravs_sender(void* self) {
    return QsciLexerAVS_Sender((QsciLexerAVS*)self);
}

QObject* q_scilexeravs_qbase_sender(void* self) {
    return QsciLexerAVS_QBaseSender((QsciLexerAVS*)self);
}

void q_scilexeravs_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerAVS_OnSender((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_sender_signal_index(void* self) {
    return QsciLexerAVS_SenderSignalIndex((QsciLexerAVS*)self);
}

int32_t q_scilexeravs_qbase_sender_signal_index(void* self) {
    return QsciLexerAVS_QBaseSenderSignalIndex((QsciLexerAVS*)self);
}

void q_scilexeravs_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerAVS_OnSenderSignalIndex((QsciLexerAVS*)self, (intptr_t)callback);
}

int32_t q_scilexeravs_receivers(void* self, const char* signal) {
    return QsciLexerAVS_Receivers((QsciLexerAVS*)self, signal);
}

int32_t q_scilexeravs_qbase_receivers(void* self, const char* signal) {
    return QsciLexerAVS_QBaseReceivers((QsciLexerAVS*)self, signal);
}

void q_scilexeravs_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerAVS_OnReceivers((QsciLexerAVS*)self, (intptr_t)callback);
}

bool q_scilexeravs_is_signal_connected(void* self, void* signal) {
    return QsciLexerAVS_IsSignalConnected((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

bool q_scilexeravs_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerAVS_QBaseIsSignalConnected((QsciLexerAVS*)self, (QMetaMethod*)signal);
}

void q_scilexeravs_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerAVS_OnIsSignalConnected((QsciLexerAVS*)self, (intptr_t)callback);
}

void q_scilexeravs_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeravs_delete(void* self) {
    QsciLexerAVS_Delete((QsciLexerAVS*)(self));
}
