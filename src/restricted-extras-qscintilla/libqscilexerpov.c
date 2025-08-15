#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerpov.hpp"
#include "libqscilexerpov.h"

QsciLexerPOV* q_scilexerpov_new() {
    return QsciLexerPOV_new();
}

QsciLexerPOV* q_scilexerpov_new2(void* parent) {
    return QsciLexerPOV_new2((QObject*)parent);
}

const QMetaObject* q_scilexerpov_meta_object(void* self) {
    return QsciLexerPOV_MetaObject((QsciLexerPOV*)self);
}

void* q_scilexerpov_metacast(void* self, const char* param1) {
    return QsciLexerPOV_Metacast((QsciLexerPOV*)self, param1);
}

int32_t q_scilexerpov_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPOV_Metacall((QsciLexerPOV*)self, param1, param2, param3);
}

void q_scilexerpov_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QsciLexerPOV_OnMetacall((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerPOV_QBaseMetacall((QsciLexerPOV*)self, param1, param2, param3);
}

const char* q_scilexerpov_tr(const char* s) {
    libqt_string _str = QsciLexerPOV_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpov_language(void* self) {
    return QsciLexerPOV_Language((QsciLexerPOV*)self);
}

const char* q_scilexerpov_lexer(void* self) {
    return QsciLexerPOV_Lexer((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_brace_style(void* self) {
    return QsciLexerPOV_BraceStyle((QsciLexerPOV*)self);
}

const char* q_scilexerpov_word_characters(void* self) {
    return QsciLexerPOV_WordCharacters((QsciLexerPOV*)self);
}

QColor* q_scilexerpov_default_color(void* self, int style) {
    return QsciLexerPOV_DefaultColor((QsciLexerPOV*)self, style);
}

bool q_scilexerpov_default_eol_fill(void* self, int style) {
    return QsciLexerPOV_DefaultEolFill((QsciLexerPOV*)self, style);
}

QFont* q_scilexerpov_default_font(void* self, int style) {
    return QsciLexerPOV_DefaultFont((QsciLexerPOV*)self, style);
}

QColor* q_scilexerpov_default_paper(void* self, int style) {
    return QsciLexerPOV_DefaultPaper((QsciLexerPOV*)self, style);
}

const char* q_scilexerpov_keywords(void* self, int set) {
    return QsciLexerPOV_Keywords((QsciLexerPOV*)self, set);
}

const char* q_scilexerpov_description(void* self, int style) {
    libqt_string _str = QsciLexerPOV_Description((QsciLexerPOV*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpov_refresh_properties(void* self) {
    QsciLexerPOV_RefreshProperties((QsciLexerPOV*)self);
}

bool q_scilexerpov_fold_comments(void* self) {
    return QsciLexerPOV_FoldComments((QsciLexerPOV*)self);
}

bool q_scilexerpov_fold_compact(void* self) {
    return QsciLexerPOV_FoldCompact((QsciLexerPOV*)self);
}

bool q_scilexerpov_fold_directives(void* self) {
    return QsciLexerPOV_FoldDirectives((QsciLexerPOV*)self);
}

void q_scilexerpov_set_fold_comments(void* self, bool fold) {
    QsciLexerPOV_SetFoldComments((QsciLexerPOV*)self, fold);
}

void q_scilexerpov_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerPOV_OnSetFoldComments((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldComments((QsciLexerPOV*)self, fold);
}

void q_scilexerpov_set_fold_compact(void* self, bool fold) {
    QsciLexerPOV_SetFoldCompact((QsciLexerPOV*)self, fold);
}

void q_scilexerpov_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerPOV_OnSetFoldCompact((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldCompact((QsciLexerPOV*)self, fold);
}

void q_scilexerpov_set_fold_directives(void* self, bool fold) {
    QsciLexerPOV_SetFoldDirectives((QsciLexerPOV*)self, fold);
}

void q_scilexerpov_on_set_fold_directives(void* self, void (*callback)(void*, bool)) {
    QsciLexerPOV_OnSetFoldDirectives((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_qbase_set_fold_directives(void* self, bool fold) {
    QsciLexerPOV_QBaseSetFoldDirectives((QsciLexerPOV*)self, fold);
}

bool q_scilexerpov_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_ReadProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpov_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPOV_OnReadProperties((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_QBaseReadProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerpov_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_WriteProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpov_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPOV_OnWriteProperties((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPOV_QBaseWriteProperties((QsciLexerPOV*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerpov_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPOV_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpov_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPOV_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerpov_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerpov_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerpov_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerpov_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerpov_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerpov_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerpov_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerpov_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerpov_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerpov_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpov_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpov_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerpov_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpov_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerpov_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpov_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpov_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpov_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerpov_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerpov_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerpov_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerpov_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpov_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerpov_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerpov_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerpov_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerpov_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerpov_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerpov_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerpov_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerpov_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerpov_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerpov_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerpov_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerpov_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerpov_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerpov_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerpov_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerpov_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerpov_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerpov_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerpov_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerpov_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerpov_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerpov_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerpov_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerpov_dynamic_property_names");
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

QBindingStorage* q_scilexerpov_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerpov_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerpov_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerpov_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerpov_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerpov_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerpov_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerpov_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerpov_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerpov_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerpov_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerpov_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerpov_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_lexer_id(void* self) {
    return QsciLexerPOV_LexerId((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_lexer_id(void* self) {
    return QsciLexerPOV_QBaseLexerId((QsciLexerPOV*)self);
}

void q_scilexerpov_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnLexerId((QsciLexerPOV*)self, (intptr_t)callback);
}

const char* q_scilexerpov_auto_completion_fillups(void* self) {
    return QsciLexerPOV_AutoCompletionFillups((QsciLexerPOV*)self);
}

const char* q_scilexerpov_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPOV_QBaseAutoCompletionFillups((QsciLexerPOV*)self);
}

void q_scilexerpov_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPOV_OnAutoCompletionFillups((QsciLexerPOV*)self, (intptr_t)callback);
}

const char** q_scilexerpov_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPOV_AutoCompletionWordSeparators((QsciLexerPOV*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerpov_auto_completion_word_separators");
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

const char** q_scilexerpov_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPOV_QBaseAutoCompletionWordSeparators((QsciLexerPOV*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerpov_auto_completion_word_separators");
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

void q_scilexerpov_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerPOV_OnAutoCompletionWordSeparators((QsciLexerPOV*)self, (intptr_t)callback);
}

const char* q_scilexerpov_block_end(void* self, int* style) {
    return QsciLexerPOV_BlockEnd((QsciLexerPOV*)self, style);
}

const char* q_scilexerpov_qbase_block_end(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockEnd((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPOV_OnBlockEnd((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_block_lookback(void* self) {
    return QsciLexerPOV_BlockLookback((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_block_lookback(void* self) {
    return QsciLexerPOV_QBaseBlockLookback((QsciLexerPOV*)self);
}

void q_scilexerpov_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnBlockLookback((QsciLexerPOV*)self, (intptr_t)callback);
}

const char* q_scilexerpov_block_start(void* self, int* style) {
    return QsciLexerPOV_BlockStart((QsciLexerPOV*)self, style);
}

const char* q_scilexerpov_qbase_block_start(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockStart((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPOV_OnBlockStart((QsciLexerPOV*)self, (intptr_t)callback);
}

const char* q_scilexerpov_block_start_keyword(void* self, int* style) {
    return QsciLexerPOV_BlockStartKeyword((QsciLexerPOV*)self, style);
}

const char* q_scilexerpov_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPOV_QBaseBlockStartKeyword((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPOV_OnBlockStartKeyword((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_case_sensitive(void* self) {
    return QsciLexerPOV_CaseSensitive((QsciLexerPOV*)self);
}

bool q_scilexerpov_qbase_case_sensitive(void* self) {
    return QsciLexerPOV_QBaseCaseSensitive((QsciLexerPOV*)self);
}

void q_scilexerpov_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPOV_OnCaseSensitive((QsciLexerPOV*)self, (intptr_t)callback);
}

QColor* q_scilexerpov_color(void* self, int style) {
    return QsciLexerPOV_Color((QsciLexerPOV*)self, style);
}

QColor* q_scilexerpov_qbase_color(void* self, int style) {
    return QsciLexerPOV_QBaseColor((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPOV_OnColor((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_eol_fill(void* self, int style) {
    return QsciLexerPOV_EolFill((QsciLexerPOV*)self, style);
}

bool q_scilexerpov_qbase_eol_fill(void* self, int style) {
    return QsciLexerPOV_QBaseEolFill((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPOV_OnEolFill((QsciLexerPOV*)self, (intptr_t)callback);
}

QFont* q_scilexerpov_font(void* self, int style) {
    return QsciLexerPOV_Font((QsciLexerPOV*)self, style);
}

QFont* q_scilexerpov_qbase_font(void* self, int style) {
    return QsciLexerPOV_QBaseFont((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPOV_OnFont((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_indentation_guide_view(void* self) {
    return QsciLexerPOV_IndentationGuideView((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_indentation_guide_view(void* self) {
    return QsciLexerPOV_QBaseIndentationGuideView((QsciLexerPOV*)self);
}

void q_scilexerpov_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnIndentationGuideView((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_default_style(void* self) {
    return QsciLexerPOV_DefaultStyle((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_default_style(void* self) {
    return QsciLexerPOV_QBaseDefaultStyle((QsciLexerPOV*)self);
}

void q_scilexerpov_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnDefaultStyle((QsciLexerPOV*)self, (intptr_t)callback);
}

QColor* q_scilexerpov_paper(void* self, int style) {
    return QsciLexerPOV_Paper((QsciLexerPOV*)self, style);
}

QColor* q_scilexerpov_qbase_paper(void* self, int style) {
    return QsciLexerPOV_QBasePaper((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPOV_OnPaper((QsciLexerPOV*)self, (intptr_t)callback);
}

QColor* q_scilexerpov_default_color2(void* self, int style) {
    return QsciLexerPOV_DefaultColor2((QsciLexerPOV*)self, style);
}

QColor* q_scilexerpov_qbase_default_color2(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultColor2((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPOV_OnDefaultColor2((QsciLexerPOV*)self, (intptr_t)callback);
}

QFont* q_scilexerpov_default_font2(void* self, int style) {
    return QsciLexerPOV_DefaultFont2((QsciLexerPOV*)self, style);
}

QFont* q_scilexerpov_qbase_default_font2(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultFont2((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPOV_OnDefaultFont2((QsciLexerPOV*)self, (intptr_t)callback);
}

QColor* q_scilexerpov_default_paper2(void* self, int style) {
    return QsciLexerPOV_DefaultPaper2((QsciLexerPOV*)self, style);
}

QColor* q_scilexerpov_qbase_default_paper2(void* self, int style) {
    return QsciLexerPOV_QBaseDefaultPaper2((QsciLexerPOV*)self, style);
}

void q_scilexerpov_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPOV_OnDefaultPaper2((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_editor(void* self, void* editor) {
    QsciLexerPOV_SetEditor((QsciLexerPOV*)self, (QsciScintilla*)editor);
}

void q_scilexerpov_qbase_set_editor(void* self, void* editor) {
    QsciLexerPOV_QBaseSetEditor((QsciLexerPOV*)self, (QsciScintilla*)editor);
}

void q_scilexerpov_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnSetEditor((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_style_bits_needed(void* self) {
    return QsciLexerPOV_StyleBitsNeeded((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_style_bits_needed(void* self) {
    return QsciLexerPOV_QBaseStyleBitsNeeded((QsciLexerPOV*)self);
}

void q_scilexerpov_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnStyleBitsNeeded((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPOV_SetAutoIndentStyle((QsciLexerPOV*)self, autoindentstyle);
}

void q_scilexerpov_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPOV_QBaseSetAutoIndentStyle((QsciLexerPOV*)self, autoindentstyle);
}

void q_scilexerpov_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPOV_OnSetAutoIndentStyle((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_color(void* self, void* c, int style) {
    QsciLexerPOV_SetColor((QsciLexerPOV*)self, (QColor*)c, style);
}

void q_scilexerpov_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPOV_QBaseSetColor((QsciLexerPOV*)self, (QColor*)c, style);
}

void q_scilexerpov_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPOV_OnSetColor((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPOV_SetEolFill((QsciLexerPOV*)self, eoffill, style);
}

void q_scilexerpov_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPOV_QBaseSetEolFill((QsciLexerPOV*)self, eoffill, style);
}

void q_scilexerpov_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPOV_OnSetEolFill((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_font(void* self, void* f, int style) {
    QsciLexerPOV_SetFont((QsciLexerPOV*)self, (QFont*)f, style);
}

void q_scilexerpov_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPOV_QBaseSetFont((QsciLexerPOV*)self, (QFont*)f, style);
}

void q_scilexerpov_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPOV_OnSetFont((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_set_paper(void* self, void* c, int style) {
    QsciLexerPOV_SetPaper((QsciLexerPOV*)self, (QColor*)c, style);
}

void q_scilexerpov_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPOV_QBaseSetPaper((QsciLexerPOV*)self, (QColor*)c, style);
}

void q_scilexerpov_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPOV_OnSetPaper((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_event(void* self, void* event) {
    return QsciLexerPOV_Event((QsciLexerPOV*)self, (QEvent*)event);
}

bool q_scilexerpov_qbase_event(void* self, void* event) {
    return QsciLexerPOV_QBaseEvent((QsciLexerPOV*)self, (QEvent*)event);
}

void q_scilexerpov_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPOV_OnEvent((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPOV_EventFilter((QsciLexerPOV*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerpov_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPOV_QBaseEventFilter((QsciLexerPOV*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerpov_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPOV_OnEventFilter((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_timer_event(void* self, void* event) {
    QsciLexerPOV_TimerEvent((QsciLexerPOV*)self, (QTimerEvent*)event);
}

void q_scilexerpov_qbase_timer_event(void* self, void* event) {
    QsciLexerPOV_QBaseTimerEvent((QsciLexerPOV*)self, (QTimerEvent*)event);
}

void q_scilexerpov_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnTimerEvent((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_child_event(void* self, void* event) {
    QsciLexerPOV_ChildEvent((QsciLexerPOV*)self, (QChildEvent*)event);
}

void q_scilexerpov_qbase_child_event(void* self, void* event) {
    QsciLexerPOV_QBaseChildEvent((QsciLexerPOV*)self, (QChildEvent*)event);
}

void q_scilexerpov_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnChildEvent((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_custom_event(void* self, void* event) {
    QsciLexerPOV_CustomEvent((QsciLexerPOV*)self, (QEvent*)event);
}

void q_scilexerpov_qbase_custom_event(void* self, void* event) {
    QsciLexerPOV_QBaseCustomEvent((QsciLexerPOV*)self, (QEvent*)event);
}

void q_scilexerpov_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnCustomEvent((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_connect_notify(void* self, void* signal) {
    QsciLexerPOV_ConnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

void q_scilexerpov_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPOV_QBaseConnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

void q_scilexerpov_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnConnectNotify((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_disconnect_notify(void* self, void* signal) {
    QsciLexerPOV_DisconnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

void q_scilexerpov_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPOV_QBaseDisconnectNotify((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

void q_scilexerpov_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPOV_OnDisconnectNotify((QsciLexerPOV*)self, (intptr_t)callback);
}

char* q_scilexerpov_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPOV_TextAsBytes((QsciLexerPOV*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerpov_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPOV_QBaseTextAsBytes((QsciLexerPOV*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpov_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPOV_OnTextAsBytes((QsciLexerPOV*)self, (intptr_t)callback);
}

const char* q_scilexerpov_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPOV_BytesAsText((QsciLexerPOV*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpov_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPOV_QBaseBytesAsText((QsciLexerPOV*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpov_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPOV_OnBytesAsText((QsciLexerPOV*)self, (intptr_t)callback);
}

QObject* q_scilexerpov_sender(void* self) {
    return QsciLexerPOV_Sender((QsciLexerPOV*)self);
}

QObject* q_scilexerpov_qbase_sender(void* self) {
    return QsciLexerPOV_QBaseSender((QsciLexerPOV*)self);
}

void q_scilexerpov_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPOV_OnSender((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_sender_signal_index(void* self) {
    return QsciLexerPOV_SenderSignalIndex((QsciLexerPOV*)self);
}

int32_t q_scilexerpov_qbase_sender_signal_index(void* self) {
    return QsciLexerPOV_QBaseSenderSignalIndex((QsciLexerPOV*)self);
}

void q_scilexerpov_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPOV_OnSenderSignalIndex((QsciLexerPOV*)self, (intptr_t)callback);
}

int32_t q_scilexerpov_receivers(void* self, const char* signal) {
    return QsciLexerPOV_Receivers((QsciLexerPOV*)self, signal);
}

int32_t q_scilexerpov_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPOV_QBaseReceivers((QsciLexerPOV*)self, signal);
}

void q_scilexerpov_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPOV_OnReceivers((QsciLexerPOV*)self, (intptr_t)callback);
}

bool q_scilexerpov_is_signal_connected(void* self, void* signal) {
    return QsciLexerPOV_IsSignalConnected((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

bool q_scilexerpov_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPOV_QBaseIsSignalConnected((QsciLexerPOV*)self, (QMetaMethod*)signal);
}

void q_scilexerpov_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPOV_OnIsSignalConnected((QsciLexerPOV*)self, (intptr_t)callback);
}

void q_scilexerpov_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerpov_delete(void* self) {
    QsciLexerPOV_Delete((QsciLexerPOV*)(self));
}
