#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexervhdl.hpp"
#include "libqscilexervhdl.h"

QsciLexerVHDL* q_scilexervhdl_new() {
    return QsciLexerVHDL_new();
}

QsciLexerVHDL* q_scilexervhdl_new2(void* parent) {
    return QsciLexerVHDL_new2((QObject*)parent);
}

const QMetaObject* q_scilexervhdl_meta_object(void* self) {
    return QsciLexerVHDL_MetaObject((QsciLexerVHDL*)self);
}

void* q_scilexervhdl_metacast(void* self, const char* param1) {
    return QsciLexerVHDL_Metacast((QsciLexerVHDL*)self, param1);
}

int32_t q_scilexervhdl_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerVHDL_Metacall((QsciLexerVHDL*)self, param1, param2, param3);
}

void q_scilexervhdl_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerVHDL_OnMetacall((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerVHDL_QBaseMetacall((QsciLexerVHDL*)self, param1, param2, param3);
}

const char* q_scilexervhdl_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexervhdl_language(void* self) {
    return QsciLexerVHDL_Language((QsciLexerVHDL*)self);
}

const char* q_scilexervhdl_lexer(void* self) {
    return QsciLexerVHDL_Lexer((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_brace_style(void* self) {
    return QsciLexerVHDL_BraceStyle((QsciLexerVHDL*)self);
}

QColor* q_scilexervhdl_default_color(void* self, int style) {
    return QsciLexerVHDL_DefaultColor((QsciLexerVHDL*)self, style);
}

bool q_scilexervhdl_default_eol_fill(void* self, int style) {
    return QsciLexerVHDL_DefaultEolFill((QsciLexerVHDL*)self, style);
}

QFont* q_scilexervhdl_default_font(void* self, int style) {
    return QsciLexerVHDL_DefaultFont((QsciLexerVHDL*)self, style);
}

QColor* q_scilexervhdl_default_paper(void* self, int style) {
    return QsciLexerVHDL_DefaultPaper((QsciLexerVHDL*)self, style);
}

const char* q_scilexervhdl_keywords(void* self, int set) {
    return QsciLexerVHDL_Keywords((QsciLexerVHDL*)self, set);
}

const char* q_scilexervhdl_description(void* self, int style) {
    libqt_string _str = QsciLexerVHDL_Description((QsciLexerVHDL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexervhdl_refresh_properties(void* self) {
    QsciLexerVHDL_RefreshProperties((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_fold_comments(void* self) {
    return QsciLexerVHDL_FoldComments((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_fold_compact(void* self) {
    return QsciLexerVHDL_FoldCompact((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_fold_at_else(void* self) {
    return QsciLexerVHDL_FoldAtElse((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_fold_at_begin(void* self) {
    return QsciLexerVHDL_FoldAtBegin((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_fold_at_parenthesis(void* self) {
    return QsciLexerVHDL_FoldAtParenthesis((QsciLexerVHDL*)self);
}

void q_scilexervhdl_set_fold_comments(void* self, bool fold) {
    QsciLexerVHDL_SetFoldComments((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldComments((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldComments((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_set_fold_compact(void* self, bool fold) {
    QsciLexerVHDL_SetFoldCompact((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldCompact((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldCompact((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_set_fold_at_else(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtElse((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtElse((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtElse((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_set_fold_at_begin(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtBegin((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_on_set_fold_at_begin(void* self, void (*callback)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtBegin((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_qbase_set_fold_at_begin(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtBegin((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_set_fold_at_parenthesis(void* self, bool fold) {
    QsciLexerVHDL_SetFoldAtParenthesis((QsciLexerVHDL*)self, fold);
}

void q_scilexervhdl_on_set_fold_at_parenthesis(void* self, void (*callback)(void*, bool)) {
    QsciLexerVHDL_OnSetFoldAtParenthesis((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_qbase_set_fold_at_parenthesis(void* self, bool fold) {
    QsciLexerVHDL_QBaseSetFoldAtParenthesis((QsciLexerVHDL*)self, fold);
}

bool q_scilexervhdl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_ReadProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexervhdl_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerVHDL_OnReadProperties((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_QBaseReadProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexervhdl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_WriteProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexervhdl_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerVHDL_OnWriteProperties((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerVHDL_QBaseWriteProperties((QsciLexerVHDL*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexervhdl_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexervhdl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexervhdl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexervhdl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexervhdl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexervhdl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexervhdl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexervhdl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexervhdl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexervhdl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexervhdl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexervhdl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexervhdl_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexervhdl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexervhdl_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexervhdl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexervhdl_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexervhdl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexervhdl_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexervhdl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexervhdl_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexervhdl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexervhdl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexervhdl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexervhdl_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexervhdl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexervhdl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexervhdl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexervhdl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexervhdl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexervhdl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexervhdl_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexervhdl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexervhdl_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexervhdl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexervhdl_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexervhdl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexervhdl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexervhdl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexervhdl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexervhdl_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexervhdl_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexervhdl_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexervhdl_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexervhdl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexervhdl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexervhdl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexervhdl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexervhdl_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexervhdl_dynamic_property_names\n");
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

QBindingStorage* q_scilexervhdl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexervhdl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexervhdl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexervhdl_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexervhdl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexervhdl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexervhdl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexervhdl_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexervhdl_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexervhdl_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexervhdl_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexervhdl_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexervhdl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexervhdl_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_lexer_id(void* self) {
    return QsciLexerVHDL_LexerId((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_lexer_id(void* self) {
    return QsciLexerVHDL_QBaseLexerId((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnLexerId((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_auto_completion_fillups(void* self) {
    return QsciLexerVHDL_AutoCompletionFillups((QsciLexerVHDL*)self);
}

const char* q_scilexervhdl_qbase_auto_completion_fillups(void* self) {
    return QsciLexerVHDL_QBaseAutoCompletionFillups((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerVHDL_OnAutoCompletionFillups((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char** q_scilexervhdl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVHDL_AutoCompletionWordSeparators((QsciLexerVHDL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexervhdl_auto_completion_word_separators\n");
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

const char** q_scilexervhdl_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerVHDL_QBaseAutoCompletionWordSeparators((QsciLexerVHDL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexervhdl_auto_completion_word_separators\n");
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

void q_scilexervhdl_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerVHDL_OnAutoCompletionWordSeparators((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_block_end(void* self, int* style) {
    return QsciLexerVHDL_BlockEnd((QsciLexerVHDL*)self, style);
}

const char* q_scilexervhdl_qbase_block_end(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockEnd((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVHDL_OnBlockEnd((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_block_lookback(void* self) {
    return QsciLexerVHDL_BlockLookback((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_block_lookback(void* self) {
    return QsciLexerVHDL_QBaseBlockLookback((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnBlockLookback((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_block_start(void* self, int* style) {
    return QsciLexerVHDL_BlockStart((QsciLexerVHDL*)self, style);
}

const char* q_scilexervhdl_qbase_block_start(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockStart((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVHDL_OnBlockStart((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_block_start_keyword(void* self, int* style) {
    return QsciLexerVHDL_BlockStartKeyword((QsciLexerVHDL*)self, style);
}

const char* q_scilexervhdl_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerVHDL_QBaseBlockStartKeyword((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerVHDL_OnBlockStartKeyword((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_case_sensitive(void* self) {
    return QsciLexerVHDL_CaseSensitive((QsciLexerVHDL*)self);
}

bool q_scilexervhdl_qbase_case_sensitive(void* self) {
    return QsciLexerVHDL_QBaseCaseSensitive((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerVHDL_OnCaseSensitive((QsciLexerVHDL*)self, (intptr_t)callback);
}

QColor* q_scilexervhdl_color(void* self, int style) {
    return QsciLexerVHDL_Color((QsciLexerVHDL*)self, style);
}

QColor* q_scilexervhdl_qbase_color(void* self, int style) {
    return QsciLexerVHDL_QBaseColor((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVHDL_OnColor((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_eol_fill(void* self, int style) {
    return QsciLexerVHDL_EolFill((QsciLexerVHDL*)self, style);
}

bool q_scilexervhdl_qbase_eol_fill(void* self, int style) {
    return QsciLexerVHDL_QBaseEolFill((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerVHDL_OnEolFill((QsciLexerVHDL*)self, (intptr_t)callback);
}

QFont* q_scilexervhdl_font(void* self, int style) {
    return QsciLexerVHDL_Font((QsciLexerVHDL*)self, style);
}

QFont* q_scilexervhdl_qbase_font(void* self, int style) {
    return QsciLexerVHDL_QBaseFont((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerVHDL_OnFont((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_indentation_guide_view(void* self) {
    return QsciLexerVHDL_IndentationGuideView((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_indentation_guide_view(void* self) {
    return QsciLexerVHDL_QBaseIndentationGuideView((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnIndentationGuideView((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_default_style(void* self) {
    return QsciLexerVHDL_DefaultStyle((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_default_style(void* self) {
    return QsciLexerVHDL_QBaseDefaultStyle((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnDefaultStyle((QsciLexerVHDL*)self, (intptr_t)callback);
}

QColor* q_scilexervhdl_paper(void* self, int style) {
    return QsciLexerVHDL_Paper((QsciLexerVHDL*)self, style);
}

QColor* q_scilexervhdl_qbase_paper(void* self, int style) {
    return QsciLexerVHDL_QBasePaper((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVHDL_OnPaper((QsciLexerVHDL*)self, (intptr_t)callback);
}

QColor* q_scilexervhdl_default_color2(void* self, int style) {
    return QsciLexerVHDL_DefaultColor2((QsciLexerVHDL*)self, style);
}

QColor* q_scilexervhdl_qbase_default_color2(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultColor2((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVHDL_OnDefaultColor2((QsciLexerVHDL*)self, (intptr_t)callback);
}

QFont* q_scilexervhdl_default_font2(void* self, int style) {
    return QsciLexerVHDL_DefaultFont2((QsciLexerVHDL*)self, style);
}

QFont* q_scilexervhdl_qbase_default_font2(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultFont2((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerVHDL_OnDefaultFont2((QsciLexerVHDL*)self, (intptr_t)callback);
}

QColor* q_scilexervhdl_default_paper2(void* self, int style) {
    return QsciLexerVHDL_DefaultPaper2((QsciLexerVHDL*)self, style);
}

QColor* q_scilexervhdl_qbase_default_paper2(void* self, int style) {
    return QsciLexerVHDL_QBaseDefaultPaper2((QsciLexerVHDL*)self, style);
}

void q_scilexervhdl_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerVHDL_OnDefaultPaper2((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_editor(void* self, void* editor) {
    QsciLexerVHDL_SetEditor((QsciLexerVHDL*)self, (QsciScintilla*)editor);
}

void q_scilexervhdl_qbase_set_editor(void* self, void* editor) {
    QsciLexerVHDL_QBaseSetEditor((QsciLexerVHDL*)self, (QsciScintilla*)editor);
}

void q_scilexervhdl_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnSetEditor((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_style_bits_needed(void* self) {
    return QsciLexerVHDL_StyleBitsNeeded((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_style_bits_needed(void* self) {
    return QsciLexerVHDL_QBaseStyleBitsNeeded((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnStyleBitsNeeded((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_word_characters(void* self) {
    return QsciLexerVHDL_WordCharacters((QsciLexerVHDL*)self);
}

const char* q_scilexervhdl_qbase_word_characters(void* self) {
    return QsciLexerVHDL_QBaseWordCharacters((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerVHDL_OnWordCharacters((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVHDL_SetAutoIndentStyle((QsciLexerVHDL*)self, autoindentstyle);
}

void q_scilexervhdl_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerVHDL_QBaseSetAutoIndentStyle((QsciLexerVHDL*)self, autoindentstyle);
}

void q_scilexervhdl_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerVHDL_OnSetAutoIndentStyle((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_color(void* self, void* c, int style) {
    QsciLexerVHDL_SetColor((QsciLexerVHDL*)self, (QColor*)c, style);
}

void q_scilexervhdl_qbase_set_color(void* self, void* c, int style) {
    QsciLexerVHDL_QBaseSetColor((QsciLexerVHDL*)self, (QColor*)c, style);
}

void q_scilexervhdl_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVHDL_OnSetColor((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVHDL_SetEolFill((QsciLexerVHDL*)self, eoffill, style);
}

void q_scilexervhdl_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerVHDL_QBaseSetEolFill((QsciLexerVHDL*)self, eoffill, style);
}

void q_scilexervhdl_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerVHDL_OnSetEolFill((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_font(void* self, void* f, int style) {
    QsciLexerVHDL_SetFont((QsciLexerVHDL*)self, (QFont*)f, style);
}

void q_scilexervhdl_qbase_set_font(void* self, void* f, int style) {
    QsciLexerVHDL_QBaseSetFont((QsciLexerVHDL*)self, (QFont*)f, style);
}

void q_scilexervhdl_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVHDL_OnSetFont((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_set_paper(void* self, void* c, int style) {
    QsciLexerVHDL_SetPaper((QsciLexerVHDL*)self, (QColor*)c, style);
}

void q_scilexervhdl_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerVHDL_QBaseSetPaper((QsciLexerVHDL*)self, (QColor*)c, style);
}

void q_scilexervhdl_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerVHDL_OnSetPaper((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_event(void* self, void* event) {
    return QsciLexerVHDL_Event((QsciLexerVHDL*)self, (QEvent*)event);
}

bool q_scilexervhdl_qbase_event(void* self, void* event) {
    return QsciLexerVHDL_QBaseEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

void q_scilexervhdl_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerVHDL_OnEvent((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVHDL_EventFilter((QsciLexerVHDL*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexervhdl_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerVHDL_QBaseEventFilter((QsciLexerVHDL*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexervhdl_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerVHDL_OnEventFilter((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_timer_event(void* self, void* event) {
    QsciLexerVHDL_TimerEvent((QsciLexerVHDL*)self, (QTimerEvent*)event);
}

void q_scilexervhdl_qbase_timer_event(void* self, void* event) {
    QsciLexerVHDL_QBaseTimerEvent((QsciLexerVHDL*)self, (QTimerEvent*)event);
}

void q_scilexervhdl_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnTimerEvent((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_child_event(void* self, void* event) {
    QsciLexerVHDL_ChildEvent((QsciLexerVHDL*)self, (QChildEvent*)event);
}

void q_scilexervhdl_qbase_child_event(void* self, void* event) {
    QsciLexerVHDL_QBaseChildEvent((QsciLexerVHDL*)self, (QChildEvent*)event);
}

void q_scilexervhdl_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnChildEvent((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_custom_event(void* self, void* event) {
    QsciLexerVHDL_CustomEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

void q_scilexervhdl_qbase_custom_event(void* self, void* event) {
    QsciLexerVHDL_QBaseCustomEvent((QsciLexerVHDL*)self, (QEvent*)event);
}

void q_scilexervhdl_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnCustomEvent((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_connect_notify(void* self, void* signal) {
    QsciLexerVHDL_ConnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

void q_scilexervhdl_qbase_connect_notify(void* self, void* signal) {
    QsciLexerVHDL_QBaseConnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

void q_scilexervhdl_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnConnectNotify((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_disconnect_notify(void* self, void* signal) {
    QsciLexerVHDL_DisconnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

void q_scilexervhdl_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerVHDL_QBaseDisconnectNotify((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

void q_scilexervhdl_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerVHDL_OnDisconnectNotify((QsciLexerVHDL*)self, (intptr_t)callback);
}

char* q_scilexervhdl_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerVHDL_TextAsBytes((QsciLexerVHDL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexervhdl_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerVHDL_QBaseTextAsBytes((QsciLexerVHDL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexervhdl_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerVHDL_OnTextAsBytes((QsciLexerVHDL*)self, (intptr_t)callback);
}

const char* q_scilexervhdl_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerVHDL_BytesAsText((QsciLexerVHDL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexervhdl_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerVHDL_QBaseBytesAsText((QsciLexerVHDL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexervhdl_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerVHDL_OnBytesAsText((QsciLexerVHDL*)self, (intptr_t)callback);
}

QObject* q_scilexervhdl_sender(void* self) {
    return QsciLexerVHDL_Sender((QsciLexerVHDL*)self);
}

QObject* q_scilexervhdl_qbase_sender(void* self) {
    return QsciLexerVHDL_QBaseSender((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerVHDL_OnSender((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_sender_signal_index(void* self) {
    return QsciLexerVHDL_SenderSignalIndex((QsciLexerVHDL*)self);
}

int32_t q_scilexervhdl_qbase_sender_signal_index(void* self) {
    return QsciLexerVHDL_QBaseSenderSignalIndex((QsciLexerVHDL*)self);
}

void q_scilexervhdl_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerVHDL_OnSenderSignalIndex((QsciLexerVHDL*)self, (intptr_t)callback);
}

int32_t q_scilexervhdl_receivers(void* self, const char* signal) {
    return QsciLexerVHDL_Receivers((QsciLexerVHDL*)self, signal);
}

int32_t q_scilexervhdl_qbase_receivers(void* self, const char* signal) {
    return QsciLexerVHDL_QBaseReceivers((QsciLexerVHDL*)self, signal);
}

void q_scilexervhdl_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerVHDL_OnReceivers((QsciLexerVHDL*)self, (intptr_t)callback);
}

bool q_scilexervhdl_is_signal_connected(void* self, void* signal) {
    return QsciLexerVHDL_IsSignalConnected((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

bool q_scilexervhdl_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerVHDL_QBaseIsSignalConnected((QsciLexerVHDL*)self, (QMetaMethod*)signal);
}

void q_scilexervhdl_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerVHDL_OnIsSignalConnected((QsciLexerVHDL*)self, (intptr_t)callback);
}

void q_scilexervhdl_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexervhdl_delete(void* self) {
    QsciLexerVHDL_Delete((QsciLexerVHDL*)(self));
}
