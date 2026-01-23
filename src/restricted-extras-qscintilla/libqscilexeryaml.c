#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexeryaml.hpp"
#include "libqscilexeryaml.h"

QsciLexerYAML* q_scilexeryaml_new() {
    return QsciLexerYAML_new();
}

QsciLexerYAML* q_scilexeryaml_new2(void* parent) {
    return QsciLexerYAML_new2((QObject*)parent);
}

const QMetaObject* q_scilexeryaml_meta_object(void* self) {
    return QsciLexerYAML_MetaObject((QsciLexerYAML*)self);
}

void* q_scilexeryaml_metacast(void* self, const char* param1) {
    return QsciLexerYAML_Metacast((QsciLexerYAML*)self, param1);
}

int32_t q_scilexeryaml_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerYAML_Metacall((QsciLexerYAML*)self, param1, param2, param3);
}

void q_scilexeryaml_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerYAML_OnMetacall((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerYAML_QBaseMetacall((QsciLexerYAML*)self, param1, param2, param3);
}

const char* q_scilexeryaml_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeryaml_language(void* self) {
    return QsciLexerYAML_Language((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_lexer(void* self) {
    return QsciLexerYAML_Lexer((QsciLexerYAML*)self);
}

QColor* q_scilexeryaml_default_color(void* self, int style) {
    return QsciLexerYAML_DefaultColor((QsciLexerYAML*)self, style);
}

bool q_scilexeryaml_default_eol_fill(void* self, int style) {
    return QsciLexerYAML_DefaultEolFill((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_default_font(void* self, int style) {
    return QsciLexerYAML_DefaultFont((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_default_paper(void* self, int style) {
    return QsciLexerYAML_DefaultPaper((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_keywords(void* self, int set) {
    return QsciLexerYAML_Keywords((QsciLexerYAML*)self, set);
}

const char* q_scilexeryaml_description(void* self, int style) {
    libqt_string _str = QsciLexerYAML_Description((QsciLexerYAML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_refresh_properties(void* self) {
    QsciLexerYAML_RefreshProperties((QsciLexerYAML*)self);
}

bool q_scilexeryaml_fold_comments(void* self) {
    return QsciLexerYAML_FoldComments((QsciLexerYAML*)self);
}

void q_scilexeryaml_set_fold_comments(void* self, bool fold) {
    QsciLexerYAML_SetFoldComments((QsciLexerYAML*)self, fold);
}

void q_scilexeryaml_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerYAML_OnSetFoldComments((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerYAML_QBaseSetFoldComments((QsciLexerYAML*)self, fold);
}

bool q_scilexeryaml_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_ReadProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeryaml_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerYAML_OnReadProperties((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_QBaseReadProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeryaml_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_WriteProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeryaml_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerYAML_OnWriteProperties((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_QBaseWriteProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexeryaml_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeryaml_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexeryaml_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeryaml_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexeryaml_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeryaml_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeryaml_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeryaml_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeryaml_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeryaml_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeryaml_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeryaml_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeryaml_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeryaml_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexeryaml_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexeryaml_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexeryaml_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeryaml_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeryaml_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeryaml_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeryaml_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeryaml_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeryaml_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeryaml_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexeryaml_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexeryaml_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexeryaml_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexeryaml_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexeryaml_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexeryaml_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexeryaml_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexeryaml_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexeryaml_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexeryaml_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeryaml_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeryaml_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeryaml_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexeryaml_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeryaml_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeryaml_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeryaml_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeryaml_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_dynamic_property_names\n");
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

QBindingStorage* q_scilexeryaml_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeryaml_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeryaml_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeryaml_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeryaml_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeryaml_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeryaml_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexeryaml_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexeryaml_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexeryaml_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexeryaml_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexeryaml_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexeryaml_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeryaml_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_lexer_id(void* self) {
    return QsciLexerYAML_LexerId((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_lexer_id(void* self) {
    return QsciLexerYAML_QBaseLexerId((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnLexerId((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_auto_completion_fillups(void* self) {
    return QsciLexerYAML_AutoCompletionFillups((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_qbase_auto_completion_fillups(void* self) {
    return QsciLexerYAML_QBaseAutoCompletionFillups((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerYAML_OnAutoCompletionFillups((QsciLexerYAML*)self, (intptr_t)callback);
}

const char** q_scilexeryaml_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerYAML_AutoCompletionWordSeparators((QsciLexerYAML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_auto_completion_word_separators\n");
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

const char** q_scilexeryaml_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerYAML_QBaseAutoCompletionWordSeparators((QsciLexerYAML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_auto_completion_word_separators\n");
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

void q_scilexeryaml_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerYAML_OnAutoCompletionWordSeparators((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_end(void* self, int* style) {
    return QsciLexerYAML_BlockEnd((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_qbase_block_end(void* self, int* style) {
    return QsciLexerYAML_QBaseBlockEnd((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerYAML_OnBlockEnd((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_block_lookback(void* self) {
    return QsciLexerYAML_BlockLookback((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_block_lookback(void* self) {
    return QsciLexerYAML_QBaseBlockLookback((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnBlockLookback((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_start(void* self, int* style) {
    return QsciLexerYAML_BlockStart((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_qbase_block_start(void* self, int* style) {
    return QsciLexerYAML_QBaseBlockStart((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerYAML_OnBlockStart((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_start_keyword(void* self, int* style) {
    return QsciLexerYAML_BlockStartKeyword((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerYAML_QBaseBlockStartKeyword((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerYAML_OnBlockStartKeyword((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_brace_style(void* self) {
    return QsciLexerYAML_BraceStyle((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_brace_style(void* self) {
    return QsciLexerYAML_QBaseBraceStyle((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnBraceStyle((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_case_sensitive(void* self) {
    return QsciLexerYAML_CaseSensitive((QsciLexerYAML*)self);
}

bool q_scilexeryaml_qbase_case_sensitive(void* self) {
    return QsciLexerYAML_QBaseCaseSensitive((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerYAML_OnCaseSensitive((QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_color(void* self, int style) {
    return QsciLexerYAML_Color((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_qbase_color(void* self, int style) {
    return QsciLexerYAML_QBaseColor((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerYAML_OnColor((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_eol_fill(void* self, int style) {
    return QsciLexerYAML_EolFill((QsciLexerYAML*)self, style);
}

bool q_scilexeryaml_qbase_eol_fill(void* self, int style) {
    return QsciLexerYAML_QBaseEolFill((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerYAML_OnEolFill((QsciLexerYAML*)self, (intptr_t)callback);
}

QFont* q_scilexeryaml_font(void* self, int style) {
    return QsciLexerYAML_Font((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_qbase_font(void* self, int style) {
    return QsciLexerYAML_QBaseFont((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerYAML_OnFont((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_indentation_guide_view(void* self) {
    return QsciLexerYAML_IndentationGuideView((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_indentation_guide_view(void* self) {
    return QsciLexerYAML_QBaseIndentationGuideView((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnIndentationGuideView((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_default_style(void* self) {
    return QsciLexerYAML_DefaultStyle((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_default_style(void* self) {
    return QsciLexerYAML_QBaseDefaultStyle((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnDefaultStyle((QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_paper(void* self, int style) {
    return QsciLexerYAML_Paper((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_qbase_paper(void* self, int style) {
    return QsciLexerYAML_QBasePaper((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerYAML_OnPaper((QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_default_color2(void* self, int style) {
    return QsciLexerYAML_DefaultColor2((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_qbase_default_color2(void* self, int style) {
    return QsciLexerYAML_QBaseDefaultColor2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerYAML_OnDefaultColor2((QsciLexerYAML*)self, (intptr_t)callback);
}

QFont* q_scilexeryaml_default_font2(void* self, int style) {
    return QsciLexerYAML_DefaultFont2((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_qbase_default_font2(void* self, int style) {
    return QsciLexerYAML_QBaseDefaultFont2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerYAML_OnDefaultFont2((QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_default_paper2(void* self, int style) {
    return QsciLexerYAML_DefaultPaper2((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_qbase_default_paper2(void* self, int style) {
    return QsciLexerYAML_QBaseDefaultPaper2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerYAML_OnDefaultPaper2((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_editor(void* self, void* editor) {
    QsciLexerYAML_SetEditor((QsciLexerYAML*)self, (QsciScintilla*)editor);
}

void q_scilexeryaml_qbase_set_editor(void* self, void* editor) {
    QsciLexerYAML_QBaseSetEditor((QsciLexerYAML*)self, (QsciScintilla*)editor);
}

void q_scilexeryaml_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnSetEditor((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_style_bits_needed(void* self) {
    return QsciLexerYAML_StyleBitsNeeded((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_style_bits_needed(void* self) {
    return QsciLexerYAML_QBaseStyleBitsNeeded((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnStyleBitsNeeded((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_word_characters(void* self) {
    return QsciLexerYAML_WordCharacters((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_qbase_word_characters(void* self) {
    return QsciLexerYAML_QBaseWordCharacters((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerYAML_OnWordCharacters((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerYAML_SetAutoIndentStyle((QsciLexerYAML*)self, autoindentstyle);
}

void q_scilexeryaml_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerYAML_QBaseSetAutoIndentStyle((QsciLexerYAML*)self, autoindentstyle);
}

void q_scilexeryaml_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerYAML_OnSetAutoIndentStyle((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_color(void* self, void* c, int style) {
    QsciLexerYAML_SetColor((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_qbase_set_color(void* self, void* c, int style) {
    QsciLexerYAML_QBaseSetColor((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerYAML_OnSetColor((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerYAML_SetEolFill((QsciLexerYAML*)self, eoffill, style);
}

void q_scilexeryaml_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerYAML_QBaseSetEolFill((QsciLexerYAML*)self, eoffill, style);
}

void q_scilexeryaml_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerYAML_OnSetEolFill((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_font(void* self, void* f, int style) {
    QsciLexerYAML_SetFont((QsciLexerYAML*)self, (QFont*)f, style);
}

void q_scilexeryaml_qbase_set_font(void* self, void* f, int style) {
    QsciLexerYAML_QBaseSetFont((QsciLexerYAML*)self, (QFont*)f, style);
}

void q_scilexeryaml_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerYAML_OnSetFont((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_paper(void* self, void* c, int style) {
    QsciLexerYAML_SetPaper((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerYAML_QBaseSetPaper((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerYAML_OnSetPaper((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_event(void* self, void* event) {
    return QsciLexerYAML_Event((QsciLexerYAML*)self, (QEvent*)event);
}

bool q_scilexeryaml_qbase_event(void* self, void* event) {
    return QsciLexerYAML_QBaseEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerYAML_OnEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_event_filter(void* self, void* watched, void* event) {
    return QsciLexerYAML_EventFilter((QsciLexerYAML*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeryaml_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerYAML_QBaseEventFilter((QsciLexerYAML*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeryaml_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerYAML_OnEventFilter((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_timer_event(void* self, void* event) {
    QsciLexerYAML_TimerEvent((QsciLexerYAML*)self, (QTimerEvent*)event);
}

void q_scilexeryaml_qbase_timer_event(void* self, void* event) {
    QsciLexerYAML_QBaseTimerEvent((QsciLexerYAML*)self, (QTimerEvent*)event);
}

void q_scilexeryaml_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnTimerEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_child_event(void* self, void* event) {
    QsciLexerYAML_ChildEvent((QsciLexerYAML*)self, (QChildEvent*)event);
}

void q_scilexeryaml_qbase_child_event(void* self, void* event) {
    QsciLexerYAML_QBaseChildEvent((QsciLexerYAML*)self, (QChildEvent*)event);
}

void q_scilexeryaml_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnChildEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_custom_event(void* self, void* event) {
    QsciLexerYAML_CustomEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_qbase_custom_event(void* self, void* event) {
    QsciLexerYAML_QBaseCustomEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnCustomEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_connect_notify(void* self, void* signal) {
    QsciLexerYAML_ConnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_qbase_connect_notify(void* self, void* signal) {
    QsciLexerYAML_QBaseConnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnConnectNotify((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_disconnect_notify(void* self, void* signal) {
    QsciLexerYAML_DisconnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerYAML_QBaseDisconnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnDisconnectNotify((QsciLexerYAML*)self, (intptr_t)callback);
}

char* q_scilexeryaml_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerYAML_TextAsBytes((QsciLexerYAML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexeryaml_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerYAML_QBaseTextAsBytes((QsciLexerYAML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerYAML_OnTextAsBytes((QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerYAML_BytesAsText((QsciLexerYAML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeryaml_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerYAML_QBaseBytesAsText((QsciLexerYAML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerYAML_OnBytesAsText((QsciLexerYAML*)self, (intptr_t)callback);
}

QObject* q_scilexeryaml_sender(void* self) {
    return QsciLexerYAML_Sender((QsciLexerYAML*)self);
}

QObject* q_scilexeryaml_qbase_sender(void* self) {
    return QsciLexerYAML_QBaseSender((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerYAML_OnSender((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_sender_signal_index(void* self) {
    return QsciLexerYAML_SenderSignalIndex((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_qbase_sender_signal_index(void* self) {
    return QsciLexerYAML_QBaseSenderSignalIndex((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerYAML_OnSenderSignalIndex((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_receivers(void* self, const char* signal) {
    return QsciLexerYAML_Receivers((QsciLexerYAML*)self, signal);
}

int32_t q_scilexeryaml_qbase_receivers(void* self, const char* signal) {
    return QsciLexerYAML_QBaseReceivers((QsciLexerYAML*)self, signal);
}

void q_scilexeryaml_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerYAML_OnReceivers((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_is_signal_connected(void* self, void* signal) {
    return QsciLexerYAML_IsSignalConnected((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

bool q_scilexeryaml_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerYAML_QBaseIsSignalConnected((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerYAML_OnIsSignalConnected((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeryaml_delete(void* self) {
    QsciLexerYAML_Delete((QsciLexerYAML*)(self));
}
