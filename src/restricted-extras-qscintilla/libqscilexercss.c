#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexercss.hpp"
#include "libqscilexercss.h"

QsciLexerCSS* q_scilexercss_new() {
    return QsciLexerCSS_new();
}

QsciLexerCSS* q_scilexercss_new2(void* parent) {
    return QsciLexerCSS_new2((QObject*)parent);
}

const QMetaObject* q_scilexercss_meta_object(void* self) {
    return QsciLexerCSS_MetaObject((QsciLexerCSS*)self);
}

void* q_scilexercss_metacast(void* self, const char* param1) {
    return QsciLexerCSS_Metacast((QsciLexerCSS*)self, param1);
}

int32_t q_scilexercss_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCSS_Metacall((QsciLexerCSS*)self, param1, param2, param3);
}

void q_scilexercss_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCSS_OnMetacall((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCSS_QBaseMetacall((QsciLexerCSS*)self, param1, param2, param3);
}

const char* q_scilexercss_tr(const char* s) {
    libqt_string _str = QsciLexerCSS_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercss_language(void* self) {
    return QsciLexerCSS_Language((QsciLexerCSS*)self);
}

const char* q_scilexercss_lexer(void* self) {
    return QsciLexerCSS_Lexer((QsciLexerCSS*)self);
}

const char* q_scilexercss_block_end(void* self) {
    return QsciLexerCSS_BlockEnd((QsciLexerCSS*)self);
}

const char* q_scilexercss_block_start(void* self) {
    return QsciLexerCSS_BlockStart((QsciLexerCSS*)self);
}

const char* q_scilexercss_word_characters(void* self) {
    return QsciLexerCSS_WordCharacters((QsciLexerCSS*)self);
}

QColor* q_scilexercss_default_color(void* self, int style) {
    return QsciLexerCSS_DefaultColor((QsciLexerCSS*)self, style);
}

QFont* q_scilexercss_default_font(void* self, int style) {
    return QsciLexerCSS_DefaultFont((QsciLexerCSS*)self, style);
}

const char* q_scilexercss_keywords(void* self, int set) {
    return QsciLexerCSS_Keywords((QsciLexerCSS*)self, set);
}

const char* q_scilexercss_description(void* self, int style) {
    libqt_string _str = QsciLexerCSS_Description((QsciLexerCSS*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercss_refresh_properties(void* self) {
    QsciLexerCSS_RefreshProperties((QsciLexerCSS*)self);
}

bool q_scilexercss_fold_comments(void* self) {
    return QsciLexerCSS_FoldComments((QsciLexerCSS*)self);
}

bool q_scilexercss_fold_compact(void* self) {
    return QsciLexerCSS_FoldCompact((QsciLexerCSS*)self);
}

void q_scilexercss_set_h_s_s_language(void* self, bool enabled) {
    QsciLexerCSS_SetHSSLanguage((QsciLexerCSS*)self, enabled);
}

bool q_scilexercss_h_s_s_language(void* self) {
    return QsciLexerCSS_HSSLanguage((QsciLexerCSS*)self);
}

void q_scilexercss_set_less_language(void* self, bool enabled) {
    QsciLexerCSS_SetLessLanguage((QsciLexerCSS*)self, enabled);
}

bool q_scilexercss_less_language(void* self) {
    return QsciLexerCSS_LessLanguage((QsciLexerCSS*)self);
}

void q_scilexercss_set_s_c_s_s_language(void* self, bool enabled) {
    QsciLexerCSS_SetSCSSLanguage((QsciLexerCSS*)self, enabled);
}

bool q_scilexercss_s_c_s_s_language(void* self) {
    return QsciLexerCSS_SCSSLanguage((QsciLexerCSS*)self);
}

void q_scilexercss_set_fold_comments(void* self, bool fold) {
    QsciLexerCSS_SetFoldComments((QsciLexerCSS*)self, fold);
}

void q_scilexercss_on_set_fold_comments(void* self, void (*slot)(void*, bool)) {
    QsciLexerCSS_OnSetFoldComments((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerCSS_QBaseSetFoldComments((QsciLexerCSS*)self, fold);
}

void q_scilexercss_set_fold_compact(void* self, bool fold) {
    QsciLexerCSS_SetFoldCompact((QsciLexerCSS*)self, fold);
}

void q_scilexercss_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerCSS_OnSetFoldCompact((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerCSS_QBaseSetFoldCompact((QsciLexerCSS*)self, fold);
}

bool q_scilexercss_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSS_ReadProperties((QsciLexerCSS*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercss_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCSS_OnReadProperties((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSS_QBaseReadProperties((QsciLexerCSS*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercss_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSS_WriteProperties((QsciLexerCSS*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercss_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCSS_OnWriteProperties((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCSS_QBaseWriteProperties((QsciLexerCSS*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexercss_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCSS_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercss_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCSS_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercss_block_end1(void* self, int* style) {
    return QsciLexerCSS_BlockEnd1((QsciLexerCSS*)self, style);
}

const char* q_scilexercss_block_start1(void* self, int* style) {
    return QsciLexerCSS_BlockStart1((QsciLexerCSS*)self, style);
}

QsciAbstractAPIs* q_scilexercss_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercss_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexercss_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexercss_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercss_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercss_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercss_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercss_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercss_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercss_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercss_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercss_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercss_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercss_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercss_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercss_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercss_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercss_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercss_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercss_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexercss_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercss_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercss_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercss_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercss_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercss_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercss_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercss_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercss_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercss_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexercss_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercss_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexercss_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_scilexercss_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercss_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercss_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercss_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercss_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercss_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercss_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercss_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexercss_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercss_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercss_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercss_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercss_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexercss_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercss_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercss_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercss_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexercss_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercss_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercss_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexercss_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexercss_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexercss_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexercss_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercss_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexercss_lexer_id(void* self) {
    return QsciLexerCSS_LexerId((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_lexer_id(void* self) {
    return QsciLexerCSS_QBaseLexerId((QsciLexerCSS*)self);
}

void q_scilexercss_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnLexerId((QsciLexerCSS*)self, (intptr_t)slot);
}

const char* q_scilexercss_auto_completion_fillups(void* self) {
    return QsciLexerCSS_AutoCompletionFillups((QsciLexerCSS*)self);
}

const char* q_scilexercss_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCSS_QBaseAutoCompletionFillups((QsciLexerCSS*)self);
}

void q_scilexercss_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCSS_OnAutoCompletionFillups((QsciLexerCSS*)self, (intptr_t)slot);
}

const char** q_scilexercss_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCSS_AutoCompletionWordSeparators((QsciLexerCSS*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_scilexercss_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCSS_QBaseAutoCompletionWordSeparators((QsciLexerCSS*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexercss_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerCSS_OnAutoCompletionWordSeparators((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_block_lookback(void* self) {
    return QsciLexerCSS_BlockLookback((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_block_lookback(void* self) {
    return QsciLexerCSS_QBaseBlockLookback((QsciLexerCSS*)self);
}

void q_scilexercss_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnBlockLookback((QsciLexerCSS*)self, (intptr_t)slot);
}

const char* q_scilexercss_block_start_keyword(void* self, int* style) {
    return QsciLexerCSS_BlockStartKeyword((QsciLexerCSS*)self, style);
}

const char* q_scilexercss_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCSS_QBaseBlockStartKeyword((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCSS_OnBlockStartKeyword((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_brace_style(void* self) {
    return QsciLexerCSS_BraceStyle((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_brace_style(void* self) {
    return QsciLexerCSS_QBaseBraceStyle((QsciLexerCSS*)self);
}

void q_scilexercss_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnBraceStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_case_sensitive(void* self) {
    return QsciLexerCSS_CaseSensitive((QsciLexerCSS*)self);
}

bool q_scilexercss_qbase_case_sensitive(void* self) {
    return QsciLexerCSS_QBaseCaseSensitive((QsciLexerCSS*)self);
}

void q_scilexercss_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCSS_OnCaseSensitive((QsciLexerCSS*)self, (intptr_t)slot);
}

QColor* q_scilexercss_color(void* self, int style) {
    return QsciLexerCSS_Color((QsciLexerCSS*)self, style);
}

QColor* q_scilexercss_qbase_color(void* self, int style) {
    return QsciLexerCSS_QBaseColor((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCSS_OnColor((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_eol_fill(void* self, int style) {
    return QsciLexerCSS_EolFill((QsciLexerCSS*)self, style);
}

bool q_scilexercss_qbase_eol_fill(void* self, int style) {
    return QsciLexerCSS_QBaseEolFill((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCSS_OnEolFill((QsciLexerCSS*)self, (intptr_t)slot);
}

QFont* q_scilexercss_font(void* self, int style) {
    return QsciLexerCSS_Font((QsciLexerCSS*)self, style);
}

QFont* q_scilexercss_qbase_font(void* self, int style) {
    return QsciLexerCSS_QBaseFont((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCSS_OnFont((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_indentation_guide_view(void* self) {
    return QsciLexerCSS_IndentationGuideView((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_indentation_guide_view(void* self) {
    return QsciLexerCSS_QBaseIndentationGuideView((QsciLexerCSS*)self);
}

void q_scilexercss_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnIndentationGuideView((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_default_style(void* self) {
    return QsciLexerCSS_DefaultStyle((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_default_style(void* self) {
    return QsciLexerCSS_QBaseDefaultStyle((QsciLexerCSS*)self);
}

void q_scilexercss_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnDefaultStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

QColor* q_scilexercss_paper(void* self, int style) {
    return QsciLexerCSS_Paper((QsciLexerCSS*)self, style);
}

QColor* q_scilexercss_qbase_paper(void* self, int style) {
    return QsciLexerCSS_QBasePaper((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCSS_OnPaper((QsciLexerCSS*)self, (intptr_t)slot);
}

QColor* q_scilexercss_default_color_with_style(void* self, int style) {
    return QsciLexerCSS_DefaultColorWithStyle((QsciLexerCSS*)self, style);
}

QColor* q_scilexercss_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCSS_QBaseDefaultColorWithStyle((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCSS_OnDefaultColorWithStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_default_eol_fill(void* self, int style) {
    return QsciLexerCSS_DefaultEolFill((QsciLexerCSS*)self, style);
}

bool q_scilexercss_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerCSS_QBaseDefaultEolFill((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCSS_OnDefaultEolFill((QsciLexerCSS*)self, (intptr_t)slot);
}

QFont* q_scilexercss_default_font_with_style(void* self, int style) {
    return QsciLexerCSS_DefaultFontWithStyle((QsciLexerCSS*)self, style);
}

QFont* q_scilexercss_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCSS_QBaseDefaultFontWithStyle((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCSS_OnDefaultFontWithStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

QColor* q_scilexercss_default_paper_with_style(void* self, int style) {
    return QsciLexerCSS_DefaultPaperWithStyle((QsciLexerCSS*)self, style);
}

QColor* q_scilexercss_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCSS_QBaseDefaultPaperWithStyle((QsciLexerCSS*)self, style);
}

void q_scilexercss_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCSS_OnDefaultPaperWithStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_editor(void* self, void* editor) {
    QsciLexerCSS_SetEditor((QsciLexerCSS*)self, (QsciScintilla*)editor);
}

void q_scilexercss_qbase_set_editor(void* self, void* editor) {
    QsciLexerCSS_QBaseSetEditor((QsciLexerCSS*)self, (QsciScintilla*)editor);
}

void q_scilexercss_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnSetEditor((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_style_bits_needed(void* self) {
    return QsciLexerCSS_StyleBitsNeeded((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_style_bits_needed(void* self) {
    return QsciLexerCSS_QBaseStyleBitsNeeded((QsciLexerCSS*)self);
}

void q_scilexercss_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnStyleBitsNeeded((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCSS_SetAutoIndentStyle((QsciLexerCSS*)self, autoindentstyle);
}

void q_scilexercss_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCSS_QBaseSetAutoIndentStyle((QsciLexerCSS*)self, autoindentstyle);
}

void q_scilexercss_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCSS_OnSetAutoIndentStyle((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_color(void* self, void* c, int style) {
    QsciLexerCSS_SetColor((QsciLexerCSS*)self, (QColor*)c, style);
}

void q_scilexercss_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCSS_QBaseSetColor((QsciLexerCSS*)self, (QColor*)c, style);
}

void q_scilexercss_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCSS_OnSetColor((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCSS_SetEolFill((QsciLexerCSS*)self, eoffill, style);
}

void q_scilexercss_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCSS_QBaseSetEolFill((QsciLexerCSS*)self, eoffill, style);
}

void q_scilexercss_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCSS_OnSetEolFill((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_font(void* self, void* f, int style) {
    QsciLexerCSS_SetFont((QsciLexerCSS*)self, (QFont*)f, style);
}

void q_scilexercss_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCSS_QBaseSetFont((QsciLexerCSS*)self, (QFont*)f, style);
}

void q_scilexercss_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCSS_OnSetFont((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_set_paper(void* self, void* c, int style) {
    QsciLexerCSS_SetPaper((QsciLexerCSS*)self, (QColor*)c, style);
}

void q_scilexercss_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCSS_QBaseSetPaper((QsciLexerCSS*)self, (QColor*)c, style);
}

void q_scilexercss_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCSS_OnSetPaper((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_event(void* self, void* event) {
    return QsciLexerCSS_Event((QsciLexerCSS*)self, (QEvent*)event);
}

bool q_scilexercss_qbase_event(void* self, void* event) {
    return QsciLexerCSS_QBaseEvent((QsciLexerCSS*)self, (QEvent*)event);
}

void q_scilexercss_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCSS_OnEvent((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCSS_EventFilter((QsciLexerCSS*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercss_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCSS_QBaseEventFilter((QsciLexerCSS*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercss_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCSS_OnEventFilter((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_timer_event(void* self, void* event) {
    QsciLexerCSS_TimerEvent((QsciLexerCSS*)self, (QTimerEvent*)event);
}

void q_scilexercss_qbase_timer_event(void* self, void* event) {
    QsciLexerCSS_QBaseTimerEvent((QsciLexerCSS*)self, (QTimerEvent*)event);
}

void q_scilexercss_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnTimerEvent((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_child_event(void* self, void* event) {
    QsciLexerCSS_ChildEvent((QsciLexerCSS*)self, (QChildEvent*)event);
}

void q_scilexercss_qbase_child_event(void* self, void* event) {
    QsciLexerCSS_QBaseChildEvent((QsciLexerCSS*)self, (QChildEvent*)event);
}

void q_scilexercss_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnChildEvent((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_custom_event(void* self, void* event) {
    QsciLexerCSS_CustomEvent((QsciLexerCSS*)self, (QEvent*)event);
}

void q_scilexercss_qbase_custom_event(void* self, void* event) {
    QsciLexerCSS_QBaseCustomEvent((QsciLexerCSS*)self, (QEvent*)event);
}

void q_scilexercss_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnCustomEvent((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_connect_notify(void* self, void* signal) {
    QsciLexerCSS_ConnectNotify((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

void q_scilexercss_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCSS_QBaseConnectNotify((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

void q_scilexercss_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnConnectNotify((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_disconnect_notify(void* self, void* signal) {
    QsciLexerCSS_DisconnectNotify((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

void q_scilexercss_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCSS_QBaseDisconnectNotify((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

void q_scilexercss_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCSS_OnDisconnectNotify((QsciLexerCSS*)self, (intptr_t)slot);
}

QObject* q_scilexercss_sender(void* self) {
    return QsciLexerCSS_Sender((QsciLexerCSS*)self);
}

QObject* q_scilexercss_qbase_sender(void* self) {
    return QsciLexerCSS_QBaseSender((QsciLexerCSS*)self);
}

void q_scilexercss_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCSS_OnSender((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_sender_signal_index(void* self) {
    return QsciLexerCSS_SenderSignalIndex((QsciLexerCSS*)self);
}

int32_t q_scilexercss_qbase_sender_signal_index(void* self) {
    return QsciLexerCSS_QBaseSenderSignalIndex((QsciLexerCSS*)self);
}

void q_scilexercss_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCSS_OnSenderSignalIndex((QsciLexerCSS*)self, (intptr_t)slot);
}

int32_t q_scilexercss_receivers(void* self, const char* signal) {
    return QsciLexerCSS_Receivers((QsciLexerCSS*)self, signal);
}

int32_t q_scilexercss_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCSS_QBaseReceivers((QsciLexerCSS*)self, signal);
}

void q_scilexercss_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCSS_OnReceivers((QsciLexerCSS*)self, (intptr_t)slot);
}

bool q_scilexercss_is_signal_connected(void* self, void* signal) {
    return QsciLexerCSS_IsSignalConnected((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

bool q_scilexercss_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCSS_QBaseIsSignalConnected((QsciLexerCSS*)self, (QMetaMethod*)signal);
}

void q_scilexercss_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCSS_OnIsSignalConnected((QsciLexerCSS*)self, (intptr_t)slot);
}

void q_scilexercss_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexercss_delete(void* self) {
    QsciLexerCSS_Delete((QsciLexerCSS*)(self));
}
