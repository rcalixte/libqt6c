#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerhtml.hpp"
#include "libqscilexerhtml.h"

QsciLexerHTML* q_scilexerhtml_new() {
    return QsciLexerHTML_new();
}

QsciLexerHTML* q_scilexerhtml_new2(void* parent) {
    return QsciLexerHTML_new2((QObject*)parent);
}

const QMetaObject* q_scilexerhtml_meta_object(void* self) {
    return QsciLexerHTML_MetaObject((QsciLexerHTML*)self);
}

void* q_scilexerhtml_metacast(void* self, const char* param1) {
    return QsciLexerHTML_Metacast((QsciLexerHTML*)self, param1);
}

int32_t q_scilexerhtml_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerHTML_Metacall((QsciLexerHTML*)self, param1, param2, param3);
}

void q_scilexerhtml_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerHTML_OnMetacall((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerHTML_QBaseMetacall((QsciLexerHTML*)self, param1, param2, param3);
}

const char* q_scilexerhtml_tr(const char* s) {
    libqt_string _str = QsciLexerHTML_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhtml_language(void* self) {
    return QsciLexerHTML_Language((QsciLexerHTML*)self);
}

const char* q_scilexerhtml_lexer(void* self) {
    return QsciLexerHTML_Lexer((QsciLexerHTML*)self);
}

const char* q_scilexerhtml_auto_completion_fillups(void* self) {
    return QsciLexerHTML_AutoCompletionFillups((QsciLexerHTML*)self);
}

const char* q_scilexerhtml_word_characters(void* self) {
    return QsciLexerHTML_WordCharacters((QsciLexerHTML*)self);
}

QColor* q_scilexerhtml_default_color(void* self, int style) {
    return QsciLexerHTML_DefaultColor((QsciLexerHTML*)self, style);
}

bool q_scilexerhtml_default_eol_fill(void* self, int style) {
    return QsciLexerHTML_DefaultEolFill((QsciLexerHTML*)self, style);
}

QFont* q_scilexerhtml_default_font(void* self, int style) {
    return QsciLexerHTML_DefaultFont((QsciLexerHTML*)self, style);
}

QColor* q_scilexerhtml_default_paper(void* self, int style) {
    return QsciLexerHTML_DefaultPaper((QsciLexerHTML*)self, style);
}

const char* q_scilexerhtml_keywords(void* self, int set) {
    return QsciLexerHTML_Keywords((QsciLexerHTML*)self, set);
}

const char* q_scilexerhtml_description(void* self, int style) {
    libqt_string _str = QsciLexerHTML_Description((QsciLexerHTML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhtml_refresh_properties(void* self) {
    QsciLexerHTML_RefreshProperties((QsciLexerHTML*)self);
}

bool q_scilexerhtml_case_sensitive_tags(void* self) {
    return QsciLexerHTML_CaseSensitiveTags((QsciLexerHTML*)self);
}

void q_scilexerhtml_set_django_templates(void* self, bool enabled) {
    QsciLexerHTML_SetDjangoTemplates((QsciLexerHTML*)self, enabled);
}

bool q_scilexerhtml_django_templates(void* self) {
    return QsciLexerHTML_DjangoTemplates((QsciLexerHTML*)self);
}

bool q_scilexerhtml_fold_compact(void* self) {
    return QsciLexerHTML_FoldCompact((QsciLexerHTML*)self);
}

bool q_scilexerhtml_fold_preprocessor(void* self) {
    return QsciLexerHTML_FoldPreprocessor((QsciLexerHTML*)self);
}

void q_scilexerhtml_set_fold_script_comments(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptComments((QsciLexerHTML*)self, fold);
}

bool q_scilexerhtml_fold_script_comments(void* self) {
    return QsciLexerHTML_FoldScriptComments((QsciLexerHTML*)self);
}

void q_scilexerhtml_set_fold_script_heredocs(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptHeredocs((QsciLexerHTML*)self, fold);
}

bool q_scilexerhtml_fold_script_heredocs(void* self) {
    return QsciLexerHTML_FoldScriptHeredocs((QsciLexerHTML*)self);
}

void q_scilexerhtml_set_mako_templates(void* self, bool enabled) {
    QsciLexerHTML_SetMakoTemplates((QsciLexerHTML*)self, enabled);
}

bool q_scilexerhtml_mako_templates(void* self) {
    return QsciLexerHTML_MakoTemplates((QsciLexerHTML*)self);
}

void q_scilexerhtml_set_fold_compact(void* self, bool fold) {
    QsciLexerHTML_SetFoldCompact((QsciLexerHTML*)self, fold);
}

void q_scilexerhtml_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerHTML_OnSetFoldCompact((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerHTML_QBaseSetFoldCompact((QsciLexerHTML*)self, fold);
}

void q_scilexerhtml_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerHTML_SetFoldPreprocessor((QsciLexerHTML*)self, fold);
}

void q_scilexerhtml_on_set_fold_preprocessor(void* self, void (*slot)(void*, bool)) {
    QsciLexerHTML_OnSetFoldPreprocessor((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerHTML_QBaseSetFoldPreprocessor((QsciLexerHTML*)self, fold);
}

void q_scilexerhtml_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerHTML_SetCaseSensitiveTags((QsciLexerHTML*)self, sens);
}

void q_scilexerhtml_on_set_case_sensitive_tags(void* self, void (*slot)(void*, bool)) {
    QsciLexerHTML_OnSetCaseSensitiveTags((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_qbase_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerHTML_QBaseSetCaseSensitiveTags((QsciLexerHTML*)self, sens);
}

bool q_scilexerhtml_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHTML_ReadProperties((QsciLexerHTML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerhtml_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerHTML_OnReadProperties((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHTML_QBaseReadProperties((QsciLexerHTML*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerhtml_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHTML_WriteProperties((QsciLexerHTML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerhtml_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerHTML_OnWriteProperties((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHTML_QBaseWriteProperties((QsciLexerHTML*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerhtml_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerHTML_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhtml_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerHTML_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerhtml_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerhtml_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerhtml_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerhtml_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerhtml_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerhtml_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerhtml_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerhtml_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerhtml_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerhtml_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerhtml_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhtml_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerhtml_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhtml_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerhtml_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhtml_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerhtml_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhtml_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerhtml_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerhtml_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerhtml_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerhtml_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhtml_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerhtml_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerhtml_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerhtml_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerhtml_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerhtml_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerhtml_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerhtml_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerhtml_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerhtml_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerhtml_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerhtml_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerhtml_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerhtml_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerhtml_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerhtml_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerhtml_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerhtml_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerhtml_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerhtml_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerhtml_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerhtml_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerhtml_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerhtml_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerhtml_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerhtml_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerhtml_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerhtml_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerhtml_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerhtml_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerhtml_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerhtml_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerhtml_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerhtml_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerhtml_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerhtml_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerhtml_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_lexer_id(void* self) {
    return QsciLexerHTML_LexerId((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_lexer_id(void* self) {
    return QsciLexerHTML_QBaseLexerId((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnLexerId((QsciLexerHTML*)self, (intptr_t)slot);
}

const char** q_scilexerhtml_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerHTML_AutoCompletionWordSeparators((QsciLexerHTML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_scilexerhtml_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerHTML_QBaseAutoCompletionWordSeparators((QsciLexerHTML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_scilexerhtml_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerHTML_OnAutoCompletionWordSeparators((QsciLexerHTML*)self, (intptr_t)slot);
}

const char* q_scilexerhtml_block_end(void* self, int* style) {
    return QsciLexerHTML_BlockEnd((QsciLexerHTML*)self, style);
}

const char* q_scilexerhtml_qbase_block_end(void* self, int* style) {
    return QsciLexerHTML_QBaseBlockEnd((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHTML_OnBlockEnd((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_block_lookback(void* self) {
    return QsciLexerHTML_BlockLookback((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_block_lookback(void* self) {
    return QsciLexerHTML_QBaseBlockLookback((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnBlockLookback((QsciLexerHTML*)self, (intptr_t)slot);
}

const char* q_scilexerhtml_block_start(void* self, int* style) {
    return QsciLexerHTML_BlockStart((QsciLexerHTML*)self, style);
}

const char* q_scilexerhtml_qbase_block_start(void* self, int* style) {
    return QsciLexerHTML_QBaseBlockStart((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHTML_OnBlockStart((QsciLexerHTML*)self, (intptr_t)slot);
}

const char* q_scilexerhtml_block_start_keyword(void* self, int* style) {
    return QsciLexerHTML_BlockStartKeyword((QsciLexerHTML*)self, style);
}

const char* q_scilexerhtml_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerHTML_QBaseBlockStartKeyword((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHTML_OnBlockStartKeyword((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_brace_style(void* self) {
    return QsciLexerHTML_BraceStyle((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_brace_style(void* self) {
    return QsciLexerHTML_QBaseBraceStyle((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnBraceStyle((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_case_sensitive(void* self) {
    return QsciLexerHTML_CaseSensitive((QsciLexerHTML*)self);
}

bool q_scilexerhtml_qbase_case_sensitive(void* self) {
    return QsciLexerHTML_QBaseCaseSensitive((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerHTML_OnCaseSensitive((QsciLexerHTML*)self, (intptr_t)slot);
}

QColor* q_scilexerhtml_color(void* self, int style) {
    return QsciLexerHTML_Color((QsciLexerHTML*)self, style);
}

QColor* q_scilexerhtml_qbase_color(void* self, int style) {
    return QsciLexerHTML_QBaseColor((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHTML_OnColor((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_eol_fill(void* self, int style) {
    return QsciLexerHTML_EolFill((QsciLexerHTML*)self, style);
}

bool q_scilexerhtml_qbase_eol_fill(void* self, int style) {
    return QsciLexerHTML_QBaseEolFill((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerHTML_OnEolFill((QsciLexerHTML*)self, (intptr_t)slot);
}

QFont* q_scilexerhtml_font(void* self, int style) {
    return QsciLexerHTML_Font((QsciLexerHTML*)self, style);
}

QFont* q_scilexerhtml_qbase_font(void* self, int style) {
    return QsciLexerHTML_QBaseFont((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerHTML_OnFont((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_indentation_guide_view(void* self) {
    return QsciLexerHTML_IndentationGuideView((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_indentation_guide_view(void* self) {
    return QsciLexerHTML_QBaseIndentationGuideView((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnIndentationGuideView((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_default_style(void* self) {
    return QsciLexerHTML_DefaultStyle((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_default_style(void* self) {
    return QsciLexerHTML_QBaseDefaultStyle((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnDefaultStyle((QsciLexerHTML*)self, (intptr_t)slot);
}

QColor* q_scilexerhtml_paper(void* self, int style) {
    return QsciLexerHTML_Paper((QsciLexerHTML*)self, style);
}

QColor* q_scilexerhtml_qbase_paper(void* self, int style) {
    return QsciLexerHTML_QBasePaper((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHTML_OnPaper((QsciLexerHTML*)self, (intptr_t)slot);
}

QColor* q_scilexerhtml_default_color2(void* self, int style) {
    return QsciLexerHTML_DefaultColor2((QsciLexerHTML*)self, style);
}

QColor* q_scilexerhtml_qbase_default_color2(void* self, int style) {
    return QsciLexerHTML_QBaseDefaultColor2((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_default_color2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHTML_OnDefaultColor2((QsciLexerHTML*)self, (intptr_t)slot);
}

QFont* q_scilexerhtml_default_font2(void* self, int style) {
    return QsciLexerHTML_DefaultFont2((QsciLexerHTML*)self, style);
}

QFont* q_scilexerhtml_qbase_default_font2(void* self, int style) {
    return QsciLexerHTML_QBaseDefaultFont2((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_default_font2(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerHTML_OnDefaultFont2((QsciLexerHTML*)self, (intptr_t)slot);
}

QColor* q_scilexerhtml_default_paper2(void* self, int style) {
    return QsciLexerHTML_DefaultPaper2((QsciLexerHTML*)self, style);
}

QColor* q_scilexerhtml_qbase_default_paper2(void* self, int style) {
    return QsciLexerHTML_QBaseDefaultPaper2((QsciLexerHTML*)self, style);
}

void q_scilexerhtml_on_default_paper2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHTML_OnDefaultPaper2((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_editor(void* self, void* editor) {
    QsciLexerHTML_SetEditor((QsciLexerHTML*)self, (QsciScintilla*)editor);
}

void q_scilexerhtml_qbase_set_editor(void* self, void* editor) {
    QsciLexerHTML_QBaseSetEditor((QsciLexerHTML*)self, (QsciScintilla*)editor);
}

void q_scilexerhtml_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnSetEditor((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_style_bits_needed(void* self) {
    return QsciLexerHTML_StyleBitsNeeded((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_style_bits_needed(void* self) {
    return QsciLexerHTML_QBaseStyleBitsNeeded((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnStyleBitsNeeded((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerHTML_SetAutoIndentStyle((QsciLexerHTML*)self, autoindentstyle);
}

void q_scilexerhtml_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerHTML_QBaseSetAutoIndentStyle((QsciLexerHTML*)self, autoindentstyle);
}

void q_scilexerhtml_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerHTML_OnSetAutoIndentStyle((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_color(void* self, void* c, int style) {
    QsciLexerHTML_SetColor((QsciLexerHTML*)self, (QColor*)c, style);
}

void q_scilexerhtml_qbase_set_color(void* self, void* c, int style) {
    QsciLexerHTML_QBaseSetColor((QsciLexerHTML*)self, (QColor*)c, style);
}

void q_scilexerhtml_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHTML_OnSetColor((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerHTML_SetEolFill((QsciLexerHTML*)self, eoffill, style);
}

void q_scilexerhtml_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerHTML_QBaseSetEolFill((QsciLexerHTML*)self, eoffill, style);
}

void q_scilexerhtml_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerHTML_OnSetEolFill((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_font(void* self, void* f, int style) {
    QsciLexerHTML_SetFont((QsciLexerHTML*)self, (QFont*)f, style);
}

void q_scilexerhtml_qbase_set_font(void* self, void* f, int style) {
    QsciLexerHTML_QBaseSetFont((QsciLexerHTML*)self, (QFont*)f, style);
}

void q_scilexerhtml_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHTML_OnSetFont((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_set_paper(void* self, void* c, int style) {
    QsciLexerHTML_SetPaper((QsciLexerHTML*)self, (QColor*)c, style);
}

void q_scilexerhtml_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerHTML_QBaseSetPaper((QsciLexerHTML*)self, (QColor*)c, style);
}

void q_scilexerhtml_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHTML_OnSetPaper((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_event(void* self, void* event) {
    return QsciLexerHTML_Event((QsciLexerHTML*)self, (QEvent*)event);
}

bool q_scilexerhtml_qbase_event(void* self, void* event) {
    return QsciLexerHTML_QBaseEvent((QsciLexerHTML*)self, (QEvent*)event);
}

void q_scilexerhtml_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerHTML_OnEvent((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_event_filter(void* self, void* watched, void* event) {
    return QsciLexerHTML_EventFilter((QsciLexerHTML*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerhtml_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerHTML_QBaseEventFilter((QsciLexerHTML*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerhtml_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerHTML_OnEventFilter((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_timer_event(void* self, void* event) {
    QsciLexerHTML_TimerEvent((QsciLexerHTML*)self, (QTimerEvent*)event);
}

void q_scilexerhtml_qbase_timer_event(void* self, void* event) {
    QsciLexerHTML_QBaseTimerEvent((QsciLexerHTML*)self, (QTimerEvent*)event);
}

void q_scilexerhtml_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnTimerEvent((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_child_event(void* self, void* event) {
    QsciLexerHTML_ChildEvent((QsciLexerHTML*)self, (QChildEvent*)event);
}

void q_scilexerhtml_qbase_child_event(void* self, void* event) {
    QsciLexerHTML_QBaseChildEvent((QsciLexerHTML*)self, (QChildEvent*)event);
}

void q_scilexerhtml_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnChildEvent((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_custom_event(void* self, void* event) {
    QsciLexerHTML_CustomEvent((QsciLexerHTML*)self, (QEvent*)event);
}

void q_scilexerhtml_qbase_custom_event(void* self, void* event) {
    QsciLexerHTML_QBaseCustomEvent((QsciLexerHTML*)self, (QEvent*)event);
}

void q_scilexerhtml_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnCustomEvent((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_connect_notify(void* self, void* signal) {
    QsciLexerHTML_ConnectNotify((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

void q_scilexerhtml_qbase_connect_notify(void* self, void* signal) {
    QsciLexerHTML_QBaseConnectNotify((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

void q_scilexerhtml_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnConnectNotify((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_disconnect_notify(void* self, void* signal) {
    QsciLexerHTML_DisconnectNotify((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

void q_scilexerhtml_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerHTML_QBaseDisconnectNotify((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

void q_scilexerhtml_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerHTML_OnDisconnectNotify((QsciLexerHTML*)self, (intptr_t)slot);
}

char* q_scilexerhtml_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerHTML_TextAsBytes((QsciLexerHTML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerhtml_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerHTML_QBaseTextAsBytes((QsciLexerHTML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhtml_on_text_as_bytes(void* self, char* (*slot)(void*, const char*)) {
    QsciLexerHTML_OnTextAsBytes((QsciLexerHTML*)self, (intptr_t)slot);
}

const char* q_scilexerhtml_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerHTML_BytesAsText((QsciLexerHTML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhtml_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerHTML_QBaseBytesAsText((QsciLexerHTML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhtml_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int)) {
    QsciLexerHTML_OnBytesAsText((QsciLexerHTML*)self, (intptr_t)slot);
}

QObject* q_scilexerhtml_sender(void* self) {
    return QsciLexerHTML_Sender((QsciLexerHTML*)self);
}

QObject* q_scilexerhtml_qbase_sender(void* self) {
    return QsciLexerHTML_QBaseSender((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerHTML_OnSender((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_sender_signal_index(void* self) {
    return QsciLexerHTML_SenderSignalIndex((QsciLexerHTML*)self);
}

int32_t q_scilexerhtml_qbase_sender_signal_index(void* self) {
    return QsciLexerHTML_QBaseSenderSignalIndex((QsciLexerHTML*)self);
}

void q_scilexerhtml_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerHTML_OnSenderSignalIndex((QsciLexerHTML*)self, (intptr_t)slot);
}

int32_t q_scilexerhtml_receivers(void* self, const char* signal) {
    return QsciLexerHTML_Receivers((QsciLexerHTML*)self, signal);
}

int32_t q_scilexerhtml_qbase_receivers(void* self, const char* signal) {
    return QsciLexerHTML_QBaseReceivers((QsciLexerHTML*)self, signal);
}

void q_scilexerhtml_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerHTML_OnReceivers((QsciLexerHTML*)self, (intptr_t)slot);
}

bool q_scilexerhtml_is_signal_connected(void* self, void* signal) {
    return QsciLexerHTML_IsSignalConnected((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

bool q_scilexerhtml_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerHTML_QBaseIsSignalConnected((QsciLexerHTML*)self, (QMetaMethod*)signal);
}

void q_scilexerhtml_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerHTML_OnIsSignalConnected((QsciLexerHTML*)self, (intptr_t)slot);
}

void q_scilexerhtml_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexerhtml_delete(void* self) {
    QsciLexerHTML_Delete((QsciLexerHTML*)(self));
}
