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
    return QsciLexerYAML_New();
}

QsciLexerYAML* q_scilexeryaml_new2(void* parent) {
    return QsciLexerYAML_New2((QObject*)parent);
}

const QMetaObject* q_scilexeryaml_meta_object(const void* self) {
    return QsciLexerYAML_MetaObject((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerYAML_OnMetaObject((QsciLexerYAML*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexeryaml_super_meta_object(const void* self) {
    return QsciLexerYAML_SuperMetaObject((QsciLexerYAML*)self);
}

void* q_scilexeryaml_metacast(void* self, const char* param1) {
    return QsciLexerYAML_Metacast((QsciLexerYAML*)self, param1);
}

void q_scilexeryaml_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerYAML_OnMetacast((QsciLexerYAML*)self, (intptr_t)callback);
}

void* q_scilexeryaml_super_metacast(void* self, const char* param1) {
    return QsciLexerYAML_SuperMetacast((QsciLexerYAML*)self, param1);
}

int32_t q_scilexeryaml_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerYAML_Metacall((QsciLexerYAML*)self, param1, param2, param3);
}

void q_scilexeryaml_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerYAML_OnMetacall((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerYAML_SuperMetacall((QsciLexerYAML*)self, param1, param2, param3);
}

const char* q_scilexeryaml_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeryaml_language(const void* self) {
    return QsciLexerYAML_Language((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_lexer(const void* self) {
    return QsciLexerYAML_Lexer((QsciLexerYAML*)self);
}

QColor* q_scilexeryaml_default_color(const void* self, int style) {
    return QsciLexerYAML_DefaultColor((QsciLexerYAML*)self, style);
}

bool q_scilexeryaml_default_eol_fill(const void* self, int style) {
    return QsciLexerYAML_DefaultEolFill((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_default_font(const void* self, int style) {
    return QsciLexerYAML_DefaultFont((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_default_paper(const void* self, int style) {
    return QsciLexerYAML_DefaultPaper((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_keywords(const void* self, int set) {
    return QsciLexerYAML_Keywords((QsciLexerYAML*)self, set);
}

const char* q_scilexeryaml_description(const void* self, int style) {
    libqt_string _str = QsciLexerYAML_Description((QsciLexerYAML*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_refresh_properties(void* self) {
    QsciLexerYAML_RefreshProperties((QsciLexerYAML*)self);
}

bool q_scilexeryaml_fold_comments(const void* self) {
    return QsciLexerYAML_FoldComments((QsciLexerYAML*)self);
}

void q_scilexeryaml_set_fold_comments(void* self, bool fold) {
    QsciLexerYAML_SetFoldComments((QsciLexerYAML*)self, fold);
}

void q_scilexeryaml_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerYAML_OnSetFoldComments((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_super_set_fold_comments(void* self, bool fold) {
    QsciLexerYAML_SuperSetFoldComments((QsciLexerYAML*)self, fold);
}

bool q_scilexeryaml_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_ReadProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeryaml_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerYAML_WriteProperties((QsciLexerYAML*)self, (QSettings*)qs, qstring(prefix));
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

QsciAbstractAPIs* q_scilexeryaml_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeryaml_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexeryaml_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeryaml_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeryaml_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeryaml_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeryaml_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeryaml_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeryaml_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeryaml_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeryaml_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeryaml_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeryaml_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
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

bool q_scilexeryaml_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeryaml_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeryaml_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeryaml_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeryaml_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeryaml_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeryaml_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeryaml_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeryaml_thread(const void* self) {
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

libqt_list /* of QObject* */ q_scilexeryaml_children(const void* self) {
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

QMetaObject__Connection* q_scilexeryaml_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexeryaml_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeryaml_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeryaml_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexeryaml_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeryaml_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexeryaml_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexeryaml_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexeryaml_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeryaml_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeryaml_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeryaml_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeryaml_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_dynamic_property_names\n");
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

QBindingStorage* q_scilexeryaml_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeryaml_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeryaml_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeryaml_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeryaml_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeryaml_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeryaml_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexeryaml_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexeryaml_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexeryaml_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexeryaml_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexeryaml_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexeryaml_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexeryaml_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexeryaml_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexeryaml_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexeryaml_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeryaml_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_lexer_id(const void* self) {
    return QsciLexerYAML_LexerId((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_lexer_id(const void* self) {
    return QsciLexerYAML_SuperLexerId((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnLexerId((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_auto_completion_fillups(const void* self) {
    return QsciLexerYAML_AutoCompletionFillups((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_super_auto_completion_fillups(const void* self) {
    return QsciLexerYAML_SuperAutoCompletionFillups((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerYAML_OnAutoCompletionFillups((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char** q_scilexeryaml_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerYAML_AutoCompletionWordSeparators((QsciLexerYAML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_auto_completion_word_separators\n");
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

const char** q_scilexeryaml_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerYAML_SuperAutoCompletionWordSeparators((QsciLexerYAML*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeryaml_auto_completion_word_separators\n");
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

void q_scilexeryaml_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerYAML_OnAutoCompletionWordSeparators((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_end(const void* self, int* style) {
    return QsciLexerYAML_BlockEnd((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_super_block_end(const void* self, int* style) {
    return QsciLexerYAML_SuperBlockEnd((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerYAML_OnBlockEnd((const QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_block_lookback(const void* self) {
    return QsciLexerYAML_BlockLookback((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_block_lookback(const void* self) {
    return QsciLexerYAML_SuperBlockLookback((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnBlockLookback((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_start(const void* self, int* style) {
    return QsciLexerYAML_BlockStart((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_super_block_start(const void* self, int* style) {
    return QsciLexerYAML_SuperBlockStart((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerYAML_OnBlockStart((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_block_start_keyword(const void* self, int* style) {
    return QsciLexerYAML_BlockStartKeyword((QsciLexerYAML*)self, style);
}

const char* q_scilexeryaml_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerYAML_SuperBlockStartKeyword((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerYAML_OnBlockStartKeyword((const QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_brace_style(const void* self) {
    return QsciLexerYAML_BraceStyle((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_brace_style(const void* self) {
    return QsciLexerYAML_SuperBraceStyle((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_brace_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnBraceStyle((const QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_case_sensitive(const void* self) {
    return QsciLexerYAML_CaseSensitive((QsciLexerYAML*)self);
}

bool q_scilexeryaml_super_case_sensitive(const void* self) {
    return QsciLexerYAML_SuperCaseSensitive((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerYAML_OnCaseSensitive((const QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_color(const void* self, int style) {
    return QsciLexerYAML_Color((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_super_color(const void* self, int style) {
    return QsciLexerYAML_SuperColor((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerYAML_OnColor((const QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_eol_fill(const void* self, int style) {
    return QsciLexerYAML_EolFill((QsciLexerYAML*)self, style);
}

bool q_scilexeryaml_super_eol_fill(const void* self, int style) {
    return QsciLexerYAML_SuperEolFill((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerYAML_OnEolFill((const QsciLexerYAML*)self, (intptr_t)callback);
}

QFont* q_scilexeryaml_font(const void* self, int style) {
    return QsciLexerYAML_Font((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_super_font(const void* self, int style) {
    return QsciLexerYAML_SuperFont((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerYAML_OnFont((const QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_indentation_guide_view(const void* self) {
    return QsciLexerYAML_IndentationGuideView((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_indentation_guide_view(const void* self) {
    return QsciLexerYAML_SuperIndentationGuideView((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnIndentationGuideView((const QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_default_style(const void* self) {
    return QsciLexerYAML_DefaultStyle((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_default_style(const void* self) {
    return QsciLexerYAML_SuperDefaultStyle((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnDefaultStyle((const QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_paper(const void* self, int style) {
    return QsciLexerYAML_Paper((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_super_paper(const void* self, int style) {
    return QsciLexerYAML_SuperPaper((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerYAML_OnPaper((const QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_default_color2(const void* self, int style) {
    return QsciLexerYAML_DefaultColor2((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_super_default_color2(const void* self, int style) {
    return QsciLexerYAML_SuperDefaultColor2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerYAML_OnDefaultColor2((const QsciLexerYAML*)self, (intptr_t)callback);
}

QFont* q_scilexeryaml_default_font2(const void* self, int style) {
    return QsciLexerYAML_DefaultFont2((QsciLexerYAML*)self, style);
}

QFont* q_scilexeryaml_super_default_font2(const void* self, int style) {
    return QsciLexerYAML_SuperDefaultFont2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerYAML_OnDefaultFont2((const QsciLexerYAML*)self, (intptr_t)callback);
}

QColor* q_scilexeryaml_default_paper2(const void* self, int style) {
    return QsciLexerYAML_DefaultPaper2((QsciLexerYAML*)self, style);
}

QColor* q_scilexeryaml_super_default_paper2(const void* self, int style) {
    return QsciLexerYAML_SuperDefaultPaper2((QsciLexerYAML*)self, style);
}

void q_scilexeryaml_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerYAML_OnDefaultPaper2((const QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_editor(void* self, void* editor) {
    QsciLexerYAML_SetEditor((QsciLexerYAML*)self, (QsciScintilla*)editor);
}

void q_scilexeryaml_super_set_editor(void* self, void* editor) {
    QsciLexerYAML_SuperSetEditor((QsciLexerYAML*)self, (QsciScintilla*)editor);
}

void q_scilexeryaml_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnSetEditor((QsciLexerYAML*)self, (intptr_t)callback);
}

int32_t q_scilexeryaml_style_bits_needed(const void* self) {
    return QsciLexerYAML_StyleBitsNeeded((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_super_style_bits_needed(const void* self) {
    return QsciLexerYAML_SuperStyleBitsNeeded((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerYAML_OnStyleBitsNeeded((const QsciLexerYAML*)self, (intptr_t)callback);
}

const char* q_scilexeryaml_word_characters(const void* self) {
    return QsciLexerYAML_WordCharacters((QsciLexerYAML*)self);
}

const char* q_scilexeryaml_super_word_characters(const void* self) {
    return QsciLexerYAML_SuperWordCharacters((QsciLexerYAML*)self);
}

void q_scilexeryaml_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerYAML_OnWordCharacters((const QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerYAML_SetAutoIndentStyle((QsciLexerYAML*)self, autoindentstyle);
}

void q_scilexeryaml_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerYAML_SuperSetAutoIndentStyle((QsciLexerYAML*)self, autoindentstyle);
}

void q_scilexeryaml_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerYAML_OnSetAutoIndentStyle((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_color(void* self, const void* c, int style) {
    QsciLexerYAML_SetColor((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_super_set_color(void* self, const void* c, int style) {
    QsciLexerYAML_SuperSetColor((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerYAML_OnSetColor((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerYAML_SetEolFill((QsciLexerYAML*)self, eoffill, style);
}

void q_scilexeryaml_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerYAML_SuperSetEolFill((QsciLexerYAML*)self, eoffill, style);
}

void q_scilexeryaml_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerYAML_OnSetEolFill((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_font(void* self, const void* f, int style) {
    QsciLexerYAML_SetFont((QsciLexerYAML*)self, (QFont*)f, style);
}

void q_scilexeryaml_super_set_font(void* self, const void* f, int style) {
    QsciLexerYAML_SuperSetFont((QsciLexerYAML*)self, (QFont*)f, style);
}

void q_scilexeryaml_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerYAML_OnSetFont((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_set_paper(void* self, const void* c, int style) {
    QsciLexerYAML_SetPaper((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_super_set_paper(void* self, const void* c, int style) {
    QsciLexerYAML_SuperSetPaper((QsciLexerYAML*)self, (QColor*)c, style);
}

void q_scilexeryaml_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerYAML_OnSetPaper((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_event(void* self, void* event) {
    return QsciLexerYAML_Event((QsciLexerYAML*)self, (QEvent*)event);
}

bool q_scilexeryaml_super_event(void* self, void* event) {
    return QsciLexerYAML_SuperEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerYAML_OnEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

bool q_scilexeryaml_event_filter(void* self, void* watched, void* event) {
    return QsciLexerYAML_EventFilter((QsciLexerYAML*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeryaml_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerYAML_SuperEventFilter((QsciLexerYAML*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeryaml_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerYAML_OnEventFilter((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_timer_event(void* self, void* event) {
    QsciLexerYAML_TimerEvent((QsciLexerYAML*)self, (QTimerEvent*)event);
}

void q_scilexeryaml_super_timer_event(void* self, void* event) {
    QsciLexerYAML_SuperTimerEvent((QsciLexerYAML*)self, (QTimerEvent*)event);
}

void q_scilexeryaml_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnTimerEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_child_event(void* self, void* event) {
    QsciLexerYAML_ChildEvent((QsciLexerYAML*)self, (QChildEvent*)event);
}

void q_scilexeryaml_super_child_event(void* self, void* event) {
    QsciLexerYAML_SuperChildEvent((QsciLexerYAML*)self, (QChildEvent*)event);
}

void q_scilexeryaml_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnChildEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_custom_event(void* self, void* event) {
    QsciLexerYAML_CustomEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_super_custom_event(void* self, void* event) {
    QsciLexerYAML_SuperCustomEvent((QsciLexerYAML*)self, (QEvent*)event);
}

void q_scilexeryaml_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerYAML_OnCustomEvent((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_connect_notify(void* self, const void* signal) {
    QsciLexerYAML_ConnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_super_connect_notify(void* self, const void* signal) {
    QsciLexerYAML_SuperConnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerYAML_OnConnectNotify((QsciLexerYAML*)self, (intptr_t)callback);
}

void q_scilexeryaml_disconnect_notify(void* self, const void* signal) {
    QsciLexerYAML_DisconnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerYAML_SuperDisconnectNotify((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerYAML_OnDisconnectNotify((QsciLexerYAML*)self, (intptr_t)callback);
}

char* q_scilexeryaml_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerYAML_TextAsBytes((QsciLexerYAML*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeryaml_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerYAML_BytesAsText((QsciLexerYAML*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexeryaml_sender(const void* self) {
    return QsciLexerYAML_Sender((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_sender_signal_index(const void* self) {
    return QsciLexerYAML_SenderSignalIndex((QsciLexerYAML*)self);
}

int32_t q_scilexeryaml_receivers(const void* self, const char* signal) {
    return QsciLexerYAML_Receivers((QsciLexerYAML*)self, signal);
}

bool q_scilexeryaml_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerYAML_IsSignalConnected((QsciLexerYAML*)self, (QMetaMethod*)signal);
}

void q_scilexeryaml_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeryaml_delete(void* self) {
    QsciLexerYAML_Delete((QsciLexerYAML*)(self));
}
