#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexerhtml.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerxml.hpp"
#include "libqscilexerxml.h"

QsciLexerXML* q_scilexerxml_new() {
    return QsciLexerXML_new();
}

QsciLexerXML* q_scilexerxml_new2(void* parent) {
    return QsciLexerXML_new2((QObject*)parent);
}

const QMetaObject* q_scilexerxml_meta_object(void* self) {
    return QsciLexerXML_MetaObject((QsciLexerXML*)self);
}

void* q_scilexerxml_metacast(void* self, const char* param1) {
    return QsciLexerXML_Metacast((QsciLexerXML*)self, param1);
}

int32_t q_scilexerxml_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerXML_Metacall((QsciLexerXML*)self, param1, param2, param3);
}

void q_scilexerxml_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerXML_OnMetacall((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerXML_QBaseMetacall((QsciLexerXML*)self, param1, param2, param3);
}

const char* q_scilexerxml_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerxml_language(void* self) {
    return QsciLexerXML_Language((QsciLexerXML*)self);
}

const char* q_scilexerxml_lexer(void* self) {
    return QsciLexerXML_Lexer((QsciLexerXML*)self);
}

QColor* q_scilexerxml_default_color(void* self, int style) {
    return QsciLexerXML_DefaultColor((QsciLexerXML*)self, style);
}

bool q_scilexerxml_default_eol_fill(void* self, int style) {
    return QsciLexerXML_DefaultEolFill((QsciLexerXML*)self, style);
}

QFont* q_scilexerxml_default_font(void* self, int style) {
    return QsciLexerXML_DefaultFont((QsciLexerXML*)self, style);
}

QColor* q_scilexerxml_default_paper(void* self, int style) {
    return QsciLexerXML_DefaultPaper((QsciLexerXML*)self, style);
}

const char* q_scilexerxml_keywords(void* self, int set) {
    return QsciLexerXML_Keywords((QsciLexerXML*)self, set);
}

void q_scilexerxml_refresh_properties(void* self) {
    QsciLexerXML_RefreshProperties((QsciLexerXML*)self);
}

void q_scilexerxml_set_scripts_styled(void* self, bool styled) {
    QsciLexerXML_SetScriptsStyled((QsciLexerXML*)self, styled);
}

bool q_scilexerxml_scripts_styled(void* self) {
    return QsciLexerXML_ScriptsStyled((QsciLexerXML*)self);
}

bool q_scilexerxml_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_ReadProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerxml_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerXML_OnReadProperties((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_QBaseReadProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerxml_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_WriteProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerxml_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerXML_OnWriteProperties((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerXML_QBaseWriteProperties((QsciLexerXML*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerxml_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerxml_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_scilexerxml_case_sensitive_tags(void* self) {
    return QsciLexerHTML_CaseSensitiveTags((QsciLexerHTML*)self);
}

void q_scilexerxml_set_django_templates(void* self, bool enabled) {
    QsciLexerHTML_SetDjangoTemplates((QsciLexerHTML*)self, enabled);
}

bool q_scilexerxml_django_templates(void* self) {
    return QsciLexerHTML_DjangoTemplates((QsciLexerHTML*)self);
}

bool q_scilexerxml_fold_compact(void* self) {
    return QsciLexerHTML_FoldCompact((QsciLexerHTML*)self);
}

bool q_scilexerxml_fold_preprocessor(void* self) {
    return QsciLexerHTML_FoldPreprocessor((QsciLexerHTML*)self);
}

void q_scilexerxml_set_fold_script_comments(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptComments((QsciLexerHTML*)self, fold);
}

bool q_scilexerxml_fold_script_comments(void* self) {
    return QsciLexerHTML_FoldScriptComments((QsciLexerHTML*)self);
}

void q_scilexerxml_set_fold_script_heredocs(void* self, bool fold) {
    QsciLexerHTML_SetFoldScriptHeredocs((QsciLexerHTML*)self, fold);
}

bool q_scilexerxml_fold_script_heredocs(void* self) {
    return QsciLexerHTML_FoldScriptHeredocs((QsciLexerHTML*)self);
}

void q_scilexerxml_set_mako_templates(void* self, bool enabled) {
    QsciLexerHTML_SetMakoTemplates((QsciLexerHTML*)self, enabled);
}

bool q_scilexerxml_mako_templates(void* self) {
    return QsciLexerHTML_MakoTemplates((QsciLexerHTML*)self);
}

QsciAbstractAPIs* q_scilexerxml_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerxml_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerxml_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerxml_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerxml_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerxml_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerxml_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerxml_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerxml_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerxml_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerxml_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerxml_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerxml_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerxml_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerxml_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerxml_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerxml_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerxml_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerxml_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerxml_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerxml_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerxml_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerxml_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerxml_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerxml_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerxml_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerxml_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerxml_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerxml_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerxml_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerxml_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerxml_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerxml_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerxml_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerxml_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerxml_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerxml_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerxml_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerxml_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerxml_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerxml_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerxml_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerxml_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerxml_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerxml_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerxml_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerxml_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerxml_dynamic_property_names\n");
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

QBindingStorage* q_scilexerxml_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerxml_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerxml_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerxml_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerxml_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerxml_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerxml_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerxml_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerxml_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerxml_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerxml_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerxml_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerxml_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerxml_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexerxml_set_fold_compact(void* self, bool fold) {
    QsciLexerXML_SetFoldCompact((QsciLexerXML*)self, fold);
}

void q_scilexerxml_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerXML_QBaseSetFoldCompact((QsciLexerXML*)self, fold);
}

void q_scilexerxml_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerXML_OnSetFoldCompact((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerXML_SetFoldPreprocessor((QsciLexerXML*)self, fold);
}

void q_scilexerxml_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerXML_QBaseSetFoldPreprocessor((QsciLexerXML*)self, fold);
}

void q_scilexerxml_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerXML_OnSetFoldPreprocessor((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerXML_SetCaseSensitiveTags((QsciLexerXML*)self, sens);
}

void q_scilexerxml_qbase_set_case_sensitive_tags(void* self, bool sens) {
    QsciLexerXML_QBaseSetCaseSensitiveTags((QsciLexerXML*)self, sens);
}

void q_scilexerxml_on_set_case_sensitive_tags(void* self, void (*callback)(void*, bool)) {
    QsciLexerXML_OnSetCaseSensitiveTags((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_lexer_id(void* self) {
    return QsciLexerXML_LexerId((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_lexer_id(void* self) {
    return QsciLexerXML_QBaseLexerId((QsciLexerXML*)self);
}

void q_scilexerxml_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnLexerId((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_auto_completion_fillups(void* self) {
    return QsciLexerXML_AutoCompletionFillups((QsciLexerXML*)self);
}

const char* q_scilexerxml_qbase_auto_completion_fillups(void* self) {
    return QsciLexerXML_QBaseAutoCompletionFillups((QsciLexerXML*)self);
}

void q_scilexerxml_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerXML_OnAutoCompletionFillups((QsciLexerXML*)self, (intptr_t)callback);
}

const char** q_scilexerxml_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerXML_AutoCompletionWordSeparators((QsciLexerXML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerxml_auto_completion_word_separators\n");
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

const char** q_scilexerxml_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerXML_QBaseAutoCompletionWordSeparators((QsciLexerXML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerxml_auto_completion_word_separators\n");
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

void q_scilexerxml_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerXML_OnAutoCompletionWordSeparators((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_block_end(void* self, int* style) {
    return QsciLexerXML_BlockEnd((QsciLexerXML*)self, style);
}

const char* q_scilexerxml_qbase_block_end(void* self, int* style) {
    return QsciLexerXML_QBaseBlockEnd((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerXML_OnBlockEnd((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_block_lookback(void* self) {
    return QsciLexerXML_BlockLookback((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_block_lookback(void* self) {
    return QsciLexerXML_QBaseBlockLookback((QsciLexerXML*)self);
}

void q_scilexerxml_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnBlockLookback((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_block_start(void* self, int* style) {
    return QsciLexerXML_BlockStart((QsciLexerXML*)self, style);
}

const char* q_scilexerxml_qbase_block_start(void* self, int* style) {
    return QsciLexerXML_QBaseBlockStart((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerXML_OnBlockStart((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_block_start_keyword(void* self, int* style) {
    return QsciLexerXML_BlockStartKeyword((QsciLexerXML*)self, style);
}

const char* q_scilexerxml_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerXML_QBaseBlockStartKeyword((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerXML_OnBlockStartKeyword((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_brace_style(void* self) {
    return QsciLexerXML_BraceStyle((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_brace_style(void* self) {
    return QsciLexerXML_QBaseBraceStyle((QsciLexerXML*)self);
}

void q_scilexerxml_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnBraceStyle((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_case_sensitive(void* self) {
    return QsciLexerXML_CaseSensitive((QsciLexerXML*)self);
}

bool q_scilexerxml_qbase_case_sensitive(void* self) {
    return QsciLexerXML_QBaseCaseSensitive((QsciLexerXML*)self);
}

void q_scilexerxml_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerXML_OnCaseSensitive((QsciLexerXML*)self, (intptr_t)callback);
}

QColor* q_scilexerxml_color(void* self, int style) {
    return QsciLexerXML_Color((QsciLexerXML*)self, style);
}

QColor* q_scilexerxml_qbase_color(void* self, int style) {
    return QsciLexerXML_QBaseColor((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerXML_OnColor((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_eol_fill(void* self, int style) {
    return QsciLexerXML_EolFill((QsciLexerXML*)self, style);
}

bool q_scilexerxml_qbase_eol_fill(void* self, int style) {
    return QsciLexerXML_QBaseEolFill((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerXML_OnEolFill((QsciLexerXML*)self, (intptr_t)callback);
}

QFont* q_scilexerxml_font(void* self, int style) {
    return QsciLexerXML_Font((QsciLexerXML*)self, style);
}

QFont* q_scilexerxml_qbase_font(void* self, int style) {
    return QsciLexerXML_QBaseFont((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerXML_OnFont((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_indentation_guide_view(void* self) {
    return QsciLexerXML_IndentationGuideView((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_indentation_guide_view(void* self) {
    return QsciLexerXML_QBaseIndentationGuideView((QsciLexerXML*)self);
}

void q_scilexerxml_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnIndentationGuideView((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_default_style(void* self) {
    return QsciLexerXML_DefaultStyle((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_default_style(void* self) {
    return QsciLexerXML_QBaseDefaultStyle((QsciLexerXML*)self);
}

void q_scilexerxml_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnDefaultStyle((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_description(void* self, int style) {
    libqt_string _str = QsciLexerXML_Description((QsciLexerXML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerxml_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerXML_QBaseDescription((QsciLexerXML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerxml_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerXML_OnDescription((QsciLexerXML*)self, (intptr_t)callback);
}

QColor* q_scilexerxml_paper(void* self, int style) {
    return QsciLexerXML_Paper((QsciLexerXML*)self, style);
}

QColor* q_scilexerxml_qbase_paper(void* self, int style) {
    return QsciLexerXML_QBasePaper((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerXML_OnPaper((QsciLexerXML*)self, (intptr_t)callback);
}

QColor* q_scilexerxml_default_color2(void* self, int style) {
    return QsciLexerXML_DefaultColor2((QsciLexerXML*)self, style);
}

QColor* q_scilexerxml_qbase_default_color2(void* self, int style) {
    return QsciLexerXML_QBaseDefaultColor2((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerXML_OnDefaultColor2((QsciLexerXML*)self, (intptr_t)callback);
}

QFont* q_scilexerxml_default_font2(void* self, int style) {
    return QsciLexerXML_DefaultFont2((QsciLexerXML*)self, style);
}

QFont* q_scilexerxml_qbase_default_font2(void* self, int style) {
    return QsciLexerXML_QBaseDefaultFont2((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerXML_OnDefaultFont2((QsciLexerXML*)self, (intptr_t)callback);
}

QColor* q_scilexerxml_default_paper2(void* self, int style) {
    return QsciLexerXML_DefaultPaper2((QsciLexerXML*)self, style);
}

QColor* q_scilexerxml_qbase_default_paper2(void* self, int style) {
    return QsciLexerXML_QBaseDefaultPaper2((QsciLexerXML*)self, style);
}

void q_scilexerxml_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerXML_OnDefaultPaper2((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_editor(void* self, void* editor) {
    QsciLexerXML_SetEditor((QsciLexerXML*)self, (QsciScintilla*)editor);
}

void q_scilexerxml_qbase_set_editor(void* self, void* editor) {
    QsciLexerXML_QBaseSetEditor((QsciLexerXML*)self, (QsciScintilla*)editor);
}

void q_scilexerxml_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnSetEditor((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_style_bits_needed(void* self) {
    return QsciLexerXML_StyleBitsNeeded((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_style_bits_needed(void* self) {
    return QsciLexerXML_QBaseStyleBitsNeeded((QsciLexerXML*)self);
}

void q_scilexerxml_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnStyleBitsNeeded((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_word_characters(void* self) {
    return QsciLexerXML_WordCharacters((QsciLexerXML*)self);
}

const char* q_scilexerxml_qbase_word_characters(void* self) {
    return QsciLexerXML_QBaseWordCharacters((QsciLexerXML*)self);
}

void q_scilexerxml_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerXML_OnWordCharacters((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerXML_SetAutoIndentStyle((QsciLexerXML*)self, autoindentstyle);
}

void q_scilexerxml_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerXML_QBaseSetAutoIndentStyle((QsciLexerXML*)self, autoindentstyle);
}

void q_scilexerxml_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerXML_OnSetAutoIndentStyle((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_color(void* self, void* c, int style) {
    QsciLexerXML_SetColor((QsciLexerXML*)self, (QColor*)c, style);
}

void q_scilexerxml_qbase_set_color(void* self, void* c, int style) {
    QsciLexerXML_QBaseSetColor((QsciLexerXML*)self, (QColor*)c, style);
}

void q_scilexerxml_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerXML_OnSetColor((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerXML_SetEolFill((QsciLexerXML*)self, eoffill, style);
}

void q_scilexerxml_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerXML_QBaseSetEolFill((QsciLexerXML*)self, eoffill, style);
}

void q_scilexerxml_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerXML_OnSetEolFill((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_font(void* self, void* f, int style) {
    QsciLexerXML_SetFont((QsciLexerXML*)self, (QFont*)f, style);
}

void q_scilexerxml_qbase_set_font(void* self, void* f, int style) {
    QsciLexerXML_QBaseSetFont((QsciLexerXML*)self, (QFont*)f, style);
}

void q_scilexerxml_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerXML_OnSetFont((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_set_paper(void* self, void* c, int style) {
    QsciLexerXML_SetPaper((QsciLexerXML*)self, (QColor*)c, style);
}

void q_scilexerxml_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerXML_QBaseSetPaper((QsciLexerXML*)self, (QColor*)c, style);
}

void q_scilexerxml_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerXML_OnSetPaper((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_event(void* self, void* event) {
    return QsciLexerXML_Event((QsciLexerXML*)self, (QEvent*)event);
}

bool q_scilexerxml_qbase_event(void* self, void* event) {
    return QsciLexerXML_QBaseEvent((QsciLexerXML*)self, (QEvent*)event);
}

void q_scilexerxml_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerXML_OnEvent((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_event_filter(void* self, void* watched, void* event) {
    return QsciLexerXML_EventFilter((QsciLexerXML*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerxml_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerXML_QBaseEventFilter((QsciLexerXML*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerxml_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerXML_OnEventFilter((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_timer_event(void* self, void* event) {
    QsciLexerXML_TimerEvent((QsciLexerXML*)self, (QTimerEvent*)event);
}

void q_scilexerxml_qbase_timer_event(void* self, void* event) {
    QsciLexerXML_QBaseTimerEvent((QsciLexerXML*)self, (QTimerEvent*)event);
}

void q_scilexerxml_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnTimerEvent((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_child_event(void* self, void* event) {
    QsciLexerXML_ChildEvent((QsciLexerXML*)self, (QChildEvent*)event);
}

void q_scilexerxml_qbase_child_event(void* self, void* event) {
    QsciLexerXML_QBaseChildEvent((QsciLexerXML*)self, (QChildEvent*)event);
}

void q_scilexerxml_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnChildEvent((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_custom_event(void* self, void* event) {
    QsciLexerXML_CustomEvent((QsciLexerXML*)self, (QEvent*)event);
}

void q_scilexerxml_qbase_custom_event(void* self, void* event) {
    QsciLexerXML_QBaseCustomEvent((QsciLexerXML*)self, (QEvent*)event);
}

void q_scilexerxml_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnCustomEvent((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_connect_notify(void* self, void* signal) {
    QsciLexerXML_ConnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

void q_scilexerxml_qbase_connect_notify(void* self, void* signal) {
    QsciLexerXML_QBaseConnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

void q_scilexerxml_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnConnectNotify((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_disconnect_notify(void* self, void* signal) {
    QsciLexerXML_DisconnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

void q_scilexerxml_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerXML_QBaseDisconnectNotify((QsciLexerXML*)self, (QMetaMethod*)signal);
}

void q_scilexerxml_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerXML_OnDisconnectNotify((QsciLexerXML*)self, (intptr_t)callback);
}

char* q_scilexerxml_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerXML_TextAsBytes((QsciLexerXML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerxml_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerXML_QBaseTextAsBytes((QsciLexerXML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerxml_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerXML_OnTextAsBytes((QsciLexerXML*)self, (intptr_t)callback);
}

const char* q_scilexerxml_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerXML_BytesAsText((QsciLexerXML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerxml_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerXML_QBaseBytesAsText((QsciLexerXML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerxml_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerXML_OnBytesAsText((QsciLexerXML*)self, (intptr_t)callback);
}

QObject* q_scilexerxml_sender(void* self) {
    return QsciLexerXML_Sender((QsciLexerXML*)self);
}

QObject* q_scilexerxml_qbase_sender(void* self) {
    return QsciLexerXML_QBaseSender((QsciLexerXML*)self);
}

void q_scilexerxml_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerXML_OnSender((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_sender_signal_index(void* self) {
    return QsciLexerXML_SenderSignalIndex((QsciLexerXML*)self);
}

int32_t q_scilexerxml_qbase_sender_signal_index(void* self) {
    return QsciLexerXML_QBaseSenderSignalIndex((QsciLexerXML*)self);
}

void q_scilexerxml_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerXML_OnSenderSignalIndex((QsciLexerXML*)self, (intptr_t)callback);
}

int32_t q_scilexerxml_receivers(void* self, const char* signal) {
    return QsciLexerXML_Receivers((QsciLexerXML*)self, signal);
}

int32_t q_scilexerxml_qbase_receivers(void* self, const char* signal) {
    return QsciLexerXML_QBaseReceivers((QsciLexerXML*)self, signal);
}

void q_scilexerxml_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerXML_OnReceivers((QsciLexerXML*)self, (intptr_t)callback);
}

bool q_scilexerxml_is_signal_connected(void* self, void* signal) {
    return QsciLexerXML_IsSignalConnected((QsciLexerXML*)self, (QMetaMethod*)signal);
}

bool q_scilexerxml_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerXML_QBaseIsSignalConnected((QsciLexerXML*)self, (QMetaMethod*)signal);
}

void q_scilexerxml_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerXML_OnIsSignalConnected((QsciLexerXML*)self, (intptr_t)callback);
}

void q_scilexerxml_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerxml_delete(void* self) {
    QsciLexerXML_Delete((QsciLexerXML*)(self));
}
