#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexercmake.hpp"
#include "libqscilexercmake.h"

QsciLexerCMake* q_scilexercmake_new() {
    return QsciLexerCMake_new();
}

QsciLexerCMake* q_scilexercmake_new2(void* parent) {
    return QsciLexerCMake_new2((QObject*)parent);
}

const QMetaObject* q_scilexercmake_meta_object(void* self) {
    return QsciLexerCMake_MetaObject((QsciLexerCMake*)self);
}

void* q_scilexercmake_metacast(void* self, const char* param1) {
    return QsciLexerCMake_Metacast((QsciLexerCMake*)self, param1);
}

int32_t q_scilexercmake_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCMake_Metacall((QsciLexerCMake*)self, param1, param2, param3);
}

void q_scilexercmake_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCMake_OnMetacall((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCMake_QBaseMetacall((QsciLexerCMake*)self, param1, param2, param3);
}

const char* q_scilexercmake_tr(const char* s) {
    libqt_string _str = QsciLexerCMake_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercmake_language(void* self) {
    return QsciLexerCMake_Language((QsciLexerCMake*)self);
}

const char* q_scilexercmake_lexer(void* self) {
    return QsciLexerCMake_Lexer((QsciLexerCMake*)self);
}

QColor* q_scilexercmake_default_color(void* self, int style) {
    return QsciLexerCMake_DefaultColor((QsciLexerCMake*)self, style);
}

QFont* q_scilexercmake_default_font(void* self, int style) {
    return QsciLexerCMake_DefaultFont((QsciLexerCMake*)self, style);
}

QColor* q_scilexercmake_default_paper(void* self, int style) {
    return QsciLexerCMake_DefaultPaper((QsciLexerCMake*)self, style);
}

const char* q_scilexercmake_keywords(void* self, int set) {
    return QsciLexerCMake_Keywords((QsciLexerCMake*)self, set);
}

const char* q_scilexercmake_description(void* self, int style) {
    libqt_string _str = QsciLexerCMake_Description((QsciLexerCMake*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercmake_refresh_properties(void* self) {
    QsciLexerCMake_RefreshProperties((QsciLexerCMake*)self);
}

bool q_scilexercmake_fold_at_else(void* self) {
    return QsciLexerCMake_FoldAtElse((QsciLexerCMake*)self);
}

void q_scilexercmake_set_fold_at_else(void* self, bool fold) {
    QsciLexerCMake_SetFoldAtElse((QsciLexerCMake*)self, fold);
}

void q_scilexercmake_on_set_fold_at_else(void* self, void (*slot)(void*, bool)) {
    QsciLexerCMake_OnSetFoldAtElse((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerCMake_QBaseSetFoldAtElse((QsciLexerCMake*)self, fold);
}

bool q_scilexercmake_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_ReadProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercmake_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCMake_OnReadProperties((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_QBaseReadProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercmake_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_WriteProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercmake_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCMake_OnWriteProperties((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCMake_QBaseWriteProperties((QsciLexerCMake*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexercmake_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCMake_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercmake_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCMake_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexercmake_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercmake_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexercmake_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercmake_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercmake_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercmake_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercmake_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercmake_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercmake_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercmake_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercmake_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercmake_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercmake_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercmake_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercmake_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercmake_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercmake_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercmake_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercmake_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexercmake_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercmake_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercmake_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercmake_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercmake_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercmake_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercmake_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercmake_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercmake_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercmake_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexercmake_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercmake_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexercmake_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexercmake_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercmake_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercmake_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercmake_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercmake_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercmake_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercmake_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercmake_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercmake_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexercmake_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercmake_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercmake_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercmake_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercmake_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexercmake_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercmake_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercmake_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercmake_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexercmake_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercmake_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercmake_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexercmake_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexercmake_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexercmake_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexercmake_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexercmake_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercmake_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_lexer_id(void* self) {
    return QsciLexerCMake_LexerId((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_lexer_id(void* self) {
    return QsciLexerCMake_QBaseLexerId((QsciLexerCMake*)self);
}

void q_scilexercmake_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnLexerId((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_auto_completion_fillups(void* self) {
    return QsciLexerCMake_AutoCompletionFillups((QsciLexerCMake*)self);
}

const char* q_scilexercmake_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCMake_QBaseAutoCompletionFillups((QsciLexerCMake*)self);
}

void q_scilexercmake_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCMake_OnAutoCompletionFillups((QsciLexerCMake*)self, (intptr_t)slot);
}

const char** q_scilexercmake_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCMake_AutoCompletionWordSeparators((QsciLexerCMake*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_scilexercmake_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCMake_QBaseAutoCompletionWordSeparators((QsciLexerCMake*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexercmake_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerCMake_OnAutoCompletionWordSeparators((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_block_end(void* self, int* style) {
    return QsciLexerCMake_BlockEnd((QsciLexerCMake*)self, style);
}

const char* q_scilexercmake_qbase_block_end(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockEnd((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockEnd((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_block_lookback(void* self) {
    return QsciLexerCMake_BlockLookback((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_block_lookback(void* self) {
    return QsciLexerCMake_QBaseBlockLookback((QsciLexerCMake*)self);
}

void q_scilexercmake_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnBlockLookback((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_block_start(void* self, int* style) {
    return QsciLexerCMake_BlockStart((QsciLexerCMake*)self, style);
}

const char* q_scilexercmake_qbase_block_start(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockStart((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockStart((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_block_start_keyword(void* self, int* style) {
    return QsciLexerCMake_BlockStartKeyword((QsciLexerCMake*)self, style);
}

const char* q_scilexercmake_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCMake_QBaseBlockStartKeyword((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCMake_OnBlockStartKeyword((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_brace_style(void* self) {
    return QsciLexerCMake_BraceStyle((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_brace_style(void* self) {
    return QsciLexerCMake_QBaseBraceStyle((QsciLexerCMake*)self);
}

void q_scilexercmake_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnBraceStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_case_sensitive(void* self) {
    return QsciLexerCMake_CaseSensitive((QsciLexerCMake*)self);
}

bool q_scilexercmake_qbase_case_sensitive(void* self) {
    return QsciLexerCMake_QBaseCaseSensitive((QsciLexerCMake*)self);
}

void q_scilexercmake_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCMake_OnCaseSensitive((QsciLexerCMake*)self, (intptr_t)slot);
}

QColor* q_scilexercmake_color(void* self, int style) {
    return QsciLexerCMake_Color((QsciLexerCMake*)self, style);
}

QColor* q_scilexercmake_qbase_color(void* self, int style) {
    return QsciLexerCMake_QBaseColor((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnColor((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_eol_fill(void* self, int style) {
    return QsciLexerCMake_EolFill((QsciLexerCMake*)self, style);
}

bool q_scilexercmake_qbase_eol_fill(void* self, int style) {
    return QsciLexerCMake_QBaseEolFill((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCMake_OnEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

QFont* q_scilexercmake_font(void* self, int style) {
    return QsciLexerCMake_Font((QsciLexerCMake*)self, style);
}

QFont* q_scilexercmake_qbase_font(void* self, int style) {
    return QsciLexerCMake_QBaseFont((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCMake_OnFont((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_indentation_guide_view(void* self) {
    return QsciLexerCMake_IndentationGuideView((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_indentation_guide_view(void* self) {
    return QsciLexerCMake_QBaseIndentationGuideView((QsciLexerCMake*)self);
}

void q_scilexercmake_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnIndentationGuideView((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_default_style(void* self) {
    return QsciLexerCMake_DefaultStyle((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_default_style(void* self) {
    return QsciLexerCMake_QBaseDefaultStyle((QsciLexerCMake*)self);
}

void q_scilexercmake_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnDefaultStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

QColor* q_scilexercmake_paper(void* self, int style) {
    return QsciLexerCMake_Paper((QsciLexerCMake*)self, style);
}

QColor* q_scilexercmake_qbase_paper(void* self, int style) {
    return QsciLexerCMake_QBasePaper((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnPaper((QsciLexerCMake*)self, (intptr_t)slot);
}

QColor* q_scilexercmake_default_color_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultColorWithStyle((QsciLexerCMake*)self, style);
}

QColor* q_scilexercmake_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultColorWithStyle((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultColorWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_default_eol_fill(void* self, int style) {
    return QsciLexerCMake_DefaultEolFill((QsciLexerCMake*)self, style);
}

bool q_scilexercmake_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultEolFill((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

QFont* q_scilexercmake_default_font_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultFontWithStyle((QsciLexerCMake*)self, style);
}

QFont* q_scilexercmake_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultFontWithStyle((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultFontWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

QColor* q_scilexercmake_default_paper_with_style(void* self, int style) {
    return QsciLexerCMake_DefaultPaperWithStyle((QsciLexerCMake*)self, style);
}

QColor* q_scilexercmake_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCMake_QBaseDefaultPaperWithStyle((QsciLexerCMake*)self, style);
}

void q_scilexercmake_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCMake_OnDefaultPaperWithStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_editor(void* self, void* editor) {
    QsciLexerCMake_SetEditor((QsciLexerCMake*)self, (QsciScintilla*)editor);
}

void q_scilexercmake_qbase_set_editor(void* self, void* editor) {
    QsciLexerCMake_QBaseSetEditor((QsciLexerCMake*)self, (QsciScintilla*)editor);
}

void q_scilexercmake_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnSetEditor((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_style_bits_needed(void* self) {
    return QsciLexerCMake_StyleBitsNeeded((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_style_bits_needed(void* self) {
    return QsciLexerCMake_QBaseStyleBitsNeeded((QsciLexerCMake*)self);
}

void q_scilexercmake_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnStyleBitsNeeded((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_word_characters(void* self) {
    return QsciLexerCMake_WordCharacters((QsciLexerCMake*)self);
}

const char* q_scilexercmake_qbase_word_characters(void* self) {
    return QsciLexerCMake_QBaseWordCharacters((QsciLexerCMake*)self);
}

void q_scilexercmake_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerCMake_OnWordCharacters((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCMake_SetAutoIndentStyle((QsciLexerCMake*)self, autoindentstyle);
}

void q_scilexercmake_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCMake_QBaseSetAutoIndentStyle((QsciLexerCMake*)self, autoindentstyle);
}

void q_scilexercmake_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCMake_OnSetAutoIndentStyle((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_color(void* self, void* c, int style) {
    QsciLexerCMake_SetColor((QsciLexerCMake*)self, (QColor*)c, style);
}

void q_scilexercmake_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCMake_QBaseSetColor((QsciLexerCMake*)self, (QColor*)c, style);
}

void q_scilexercmake_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetColor((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCMake_SetEolFill((QsciLexerCMake*)self, eoffill, style);
}

void q_scilexercmake_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCMake_QBaseSetEolFill((QsciLexerCMake*)self, eoffill, style);
}

void q_scilexercmake_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCMake_OnSetEolFill((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_font(void* self, void* f, int style) {
    QsciLexerCMake_SetFont((QsciLexerCMake*)self, (QFont*)f, style);
}

void q_scilexercmake_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCMake_QBaseSetFont((QsciLexerCMake*)self, (QFont*)f, style);
}

void q_scilexercmake_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetFont((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_set_paper(void* self, void* c, int style) {
    QsciLexerCMake_SetPaper((QsciLexerCMake*)self, (QColor*)c, style);
}

void q_scilexercmake_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCMake_QBaseSetPaper((QsciLexerCMake*)self, (QColor*)c, style);
}

void q_scilexercmake_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCMake_OnSetPaper((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_event(void* self, void* event) {
    return QsciLexerCMake_Event((QsciLexerCMake*)self, (QEvent*)event);
}

bool q_scilexercmake_qbase_event(void* self, void* event) {
    return QsciLexerCMake_QBaseEvent((QsciLexerCMake*)self, (QEvent*)event);
}

void q_scilexercmake_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCMake_OnEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCMake_EventFilter((QsciLexerCMake*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercmake_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCMake_QBaseEventFilter((QsciLexerCMake*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercmake_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCMake_OnEventFilter((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_timer_event(void* self, void* event) {
    QsciLexerCMake_TimerEvent((QsciLexerCMake*)self, (QTimerEvent*)event);
}

void q_scilexercmake_qbase_timer_event(void* self, void* event) {
    QsciLexerCMake_QBaseTimerEvent((QsciLexerCMake*)self, (QTimerEvent*)event);
}

void q_scilexercmake_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnTimerEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_child_event(void* self, void* event) {
    QsciLexerCMake_ChildEvent((QsciLexerCMake*)self, (QChildEvent*)event);
}

void q_scilexercmake_qbase_child_event(void* self, void* event) {
    QsciLexerCMake_QBaseChildEvent((QsciLexerCMake*)self, (QChildEvent*)event);
}

void q_scilexercmake_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnChildEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_custom_event(void* self, void* event) {
    QsciLexerCMake_CustomEvent((QsciLexerCMake*)self, (QEvent*)event);
}

void q_scilexercmake_qbase_custom_event(void* self, void* event) {
    QsciLexerCMake_QBaseCustomEvent((QsciLexerCMake*)self, (QEvent*)event);
}

void q_scilexercmake_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnCustomEvent((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_connect_notify(void* self, void* signal) {
    QsciLexerCMake_ConnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

void q_scilexercmake_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCMake_QBaseConnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

void q_scilexercmake_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnConnectNotify((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_disconnect_notify(void* self, void* signal) {
    QsciLexerCMake_DisconnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

void q_scilexercmake_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCMake_QBaseDisconnectNotify((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

void q_scilexercmake_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCMake_OnDisconnectNotify((QsciLexerCMake*)self, (intptr_t)slot);
}

char* q_scilexercmake_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCMake_TextAsBytes((QsciLexerCMake*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexercmake_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCMake_QBaseTextAsBytes((QsciLexerCMake*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercmake_on_text_as_bytes(void* self, char* (*slot)(void*, const char*)) {
    QsciLexerCMake_OnTextAsBytes((QsciLexerCMake*)self, (intptr_t)slot);
}

const char* q_scilexercmake_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCMake_BytesAsText((QsciLexerCMake*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercmake_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCMake_QBaseBytesAsText((QsciLexerCMake*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercmake_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int)) {
    QsciLexerCMake_OnBytesAsText((QsciLexerCMake*)self, (intptr_t)slot);
}

QObject* q_scilexercmake_sender(void* self) {
    return QsciLexerCMake_Sender((QsciLexerCMake*)self);
}

QObject* q_scilexercmake_qbase_sender(void* self) {
    return QsciLexerCMake_QBaseSender((QsciLexerCMake*)self);
}

void q_scilexercmake_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCMake_OnSender((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_sender_signal_index(void* self) {
    return QsciLexerCMake_SenderSignalIndex((QsciLexerCMake*)self);
}

int32_t q_scilexercmake_qbase_sender_signal_index(void* self) {
    return QsciLexerCMake_QBaseSenderSignalIndex((QsciLexerCMake*)self);
}

void q_scilexercmake_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCMake_OnSenderSignalIndex((QsciLexerCMake*)self, (intptr_t)slot);
}

int32_t q_scilexercmake_receivers(void* self, const char* signal) {
    return QsciLexerCMake_Receivers((QsciLexerCMake*)self, signal);
}

int32_t q_scilexercmake_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCMake_QBaseReceivers((QsciLexerCMake*)self, signal);
}

void q_scilexercmake_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCMake_OnReceivers((QsciLexerCMake*)self, (intptr_t)slot);
}

bool q_scilexercmake_is_signal_connected(void* self, void* signal) {
    return QsciLexerCMake_IsSignalConnected((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

bool q_scilexercmake_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCMake_QBaseIsSignalConnected((QsciLexerCMake*)self, (QMetaMethod*)signal);
}

void q_scilexercmake_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCMake_OnIsSignalConnected((QsciLexerCMake*)self, (intptr_t)slot);
}

void q_scilexercmake_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexercmake_delete(void* self) {
    QsciLexerCMake_Delete((QsciLexerCMake*)(self));
}
