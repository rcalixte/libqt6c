#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexertcl.hpp"
#include "libqscilexertcl.h"

QsciLexerTCL* q_scilexertcl_new() {
    return QsciLexerTCL_new();
}

QsciLexerTCL* q_scilexertcl_new2(void* parent) {
    return QsciLexerTCL_new2((QObject*)parent);
}

const QMetaObject* q_scilexertcl_meta_object(void* self) {
    return QsciLexerTCL_MetaObject((QsciLexerTCL*)self);
}

void q_scilexertcl_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerTCL_OnMetaObject((QsciLexerTCL*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexertcl_super_meta_object(void* self) {
    return QsciLexerTCL_SuperMetaObject((QsciLexerTCL*)self);
}

void* q_scilexertcl_metacast(void* self, const char* param1) {
    return QsciLexerTCL_Metacast((QsciLexerTCL*)self, param1);
}

void q_scilexertcl_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerTCL_OnMetacast((QsciLexerTCL*)self, (intptr_t)callback);
}

void* q_scilexertcl_super_metacast(void* self, const char* param1) {
    return QsciLexerTCL_SuperMetacast((QsciLexerTCL*)self, param1);
}

int32_t q_scilexertcl_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTCL_Metacall((QsciLexerTCL*)self, param1, param2, param3);
}

void q_scilexertcl_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerTCL_OnMetacall((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTCL_SuperMetacall((QsciLexerTCL*)self, param1, param2, param3);
}

const char* q_scilexertcl_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertcl_language(void* self) {
    return QsciLexerTCL_Language((QsciLexerTCL*)self);
}

const char* q_scilexertcl_lexer(void* self) {
    return QsciLexerTCL_Lexer((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_brace_style(void* self) {
    return QsciLexerTCL_BraceStyle((QsciLexerTCL*)self);
}

QColor* q_scilexertcl_default_color(void* self, int style) {
    return QsciLexerTCL_DefaultColor((QsciLexerTCL*)self, style);
}

bool q_scilexertcl_default_eol_fill(void* self, int style) {
    return QsciLexerTCL_DefaultEolFill((QsciLexerTCL*)self, style);
}

QFont* q_scilexertcl_default_font(void* self, int style) {
    return QsciLexerTCL_DefaultFont((QsciLexerTCL*)self, style);
}

QColor* q_scilexertcl_default_paper(void* self, int style) {
    return QsciLexerTCL_DefaultPaper((QsciLexerTCL*)self, style);
}

const char* q_scilexertcl_keywords(void* self, int set) {
    return QsciLexerTCL_Keywords((QsciLexerTCL*)self, set);
}

const char* q_scilexertcl_description(void* self, int style) {
    libqt_string _str = QsciLexerTCL_Description((QsciLexerTCL*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertcl_refresh_properties(void* self) {
    QsciLexerTCL_RefreshProperties((QsciLexerTCL*)self);
}

void q_scilexertcl_set_fold_comments(void* self, bool fold) {
    QsciLexerTCL_SetFoldComments((QsciLexerTCL*)self, fold);
}

bool q_scilexertcl_fold_comments(void* self) {
    return QsciLexerTCL_FoldComments((QsciLexerTCL*)self);
}

bool q_scilexertcl_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_ReadProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertcl_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTCL_OnReadProperties((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_SuperReadProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertcl_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_WriteProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertcl_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTCL_OnWriteProperties((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_super_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTCL_SuperWriteProperties((QsciLexerTCL*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexertcl_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertcl_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexertcl_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexertcl_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexertcl_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexertcl_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexertcl_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexertcl_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexertcl_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexertcl_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexertcl_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexertcl_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertcl_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertcl_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexertcl_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertcl_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexertcl_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertcl_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertcl_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertcl_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexertcl_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexertcl_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexertcl_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexertcl_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertcl_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexertcl_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexertcl_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexertcl_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexertcl_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexertcl_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexertcl_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexertcl_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexertcl_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexertcl_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexertcl_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexertcl_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexertcl_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexertcl_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexertcl_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexertcl_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexertcl_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexertcl_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexertcl_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexertcl_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexertcl_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexertcl_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexertcl_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexertcl_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexertcl_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexertcl_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexertcl_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexertcl_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexertcl_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertcl_dynamic_property_names\n");
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

QBindingStorage* q_scilexertcl_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexertcl_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexertcl_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexertcl_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexertcl_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexertcl_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexertcl_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexertcl_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexertcl_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexertcl_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexertcl_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexertcl_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexertcl_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexertcl_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexertcl_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexertcl_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexertcl_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexertcl_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_lexer_id(void* self) {
    return QsciLexerTCL_LexerId((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_lexer_id(void* self) {
    return QsciLexerTCL_SuperLexerId((QsciLexerTCL*)self);
}

void q_scilexertcl_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnLexerId((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_auto_completion_fillups(void* self) {
    return QsciLexerTCL_AutoCompletionFillups((QsciLexerTCL*)self);
}

const char* q_scilexertcl_super_auto_completion_fillups(void* self) {
    return QsciLexerTCL_SuperAutoCompletionFillups((QsciLexerTCL*)self);
}

void q_scilexertcl_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerTCL_OnAutoCompletionFillups((QsciLexerTCL*)self, (intptr_t)callback);
}

const char** q_scilexertcl_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTCL_AutoCompletionWordSeparators((QsciLexerTCL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertcl_auto_completion_word_separators\n");
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

const char** q_scilexertcl_super_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTCL_SuperAutoCompletionWordSeparators((QsciLexerTCL*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertcl_auto_completion_word_separators\n");
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

void q_scilexertcl_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerTCL_OnAutoCompletionWordSeparators((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_block_end(void* self, int* style) {
    return QsciLexerTCL_BlockEnd((QsciLexerTCL*)self, style);
}

const char* q_scilexertcl_super_block_end(void* self, int* style) {
    return QsciLexerTCL_SuperBlockEnd((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTCL_OnBlockEnd((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_block_lookback(void* self) {
    return QsciLexerTCL_BlockLookback((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_block_lookback(void* self) {
    return QsciLexerTCL_SuperBlockLookback((QsciLexerTCL*)self);
}

void q_scilexertcl_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnBlockLookback((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_block_start(void* self, int* style) {
    return QsciLexerTCL_BlockStart((QsciLexerTCL*)self, style);
}

const char* q_scilexertcl_super_block_start(void* self, int* style) {
    return QsciLexerTCL_SuperBlockStart((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTCL_OnBlockStart((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_block_start_keyword(void* self, int* style) {
    return QsciLexerTCL_BlockStartKeyword((QsciLexerTCL*)self, style);
}

const char* q_scilexertcl_super_block_start_keyword(void* self, int* style) {
    return QsciLexerTCL_SuperBlockStartKeyword((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTCL_OnBlockStartKeyword((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_case_sensitive(void* self) {
    return QsciLexerTCL_CaseSensitive((QsciLexerTCL*)self);
}

bool q_scilexertcl_super_case_sensitive(void* self) {
    return QsciLexerTCL_SuperCaseSensitive((QsciLexerTCL*)self);
}

void q_scilexertcl_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerTCL_OnCaseSensitive((QsciLexerTCL*)self, (intptr_t)callback);
}

QColor* q_scilexertcl_color(void* self, int style) {
    return QsciLexerTCL_Color((QsciLexerTCL*)self, style);
}

QColor* q_scilexertcl_super_color(void* self, int style) {
    return QsciLexerTCL_SuperColor((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTCL_OnColor((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_eol_fill(void* self, int style) {
    return QsciLexerTCL_EolFill((QsciLexerTCL*)self, style);
}

bool q_scilexertcl_super_eol_fill(void* self, int style) {
    return QsciLexerTCL_SuperEolFill((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerTCL_OnEolFill((QsciLexerTCL*)self, (intptr_t)callback);
}

QFont* q_scilexertcl_font(void* self, int style) {
    return QsciLexerTCL_Font((QsciLexerTCL*)self, style);
}

QFont* q_scilexertcl_super_font(void* self, int style) {
    return QsciLexerTCL_SuperFont((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTCL_OnFont((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_indentation_guide_view(void* self) {
    return QsciLexerTCL_IndentationGuideView((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_indentation_guide_view(void* self) {
    return QsciLexerTCL_SuperIndentationGuideView((QsciLexerTCL*)self);
}

void q_scilexertcl_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnIndentationGuideView((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_default_style(void* self) {
    return QsciLexerTCL_DefaultStyle((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_default_style(void* self) {
    return QsciLexerTCL_SuperDefaultStyle((QsciLexerTCL*)self);
}

void q_scilexertcl_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnDefaultStyle((QsciLexerTCL*)self, (intptr_t)callback);
}

QColor* q_scilexertcl_paper(void* self, int style) {
    return QsciLexerTCL_Paper((QsciLexerTCL*)self, style);
}

QColor* q_scilexertcl_super_paper(void* self, int style) {
    return QsciLexerTCL_SuperPaper((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTCL_OnPaper((QsciLexerTCL*)self, (intptr_t)callback);
}

QColor* q_scilexertcl_default_color2(void* self, int style) {
    return QsciLexerTCL_DefaultColor2((QsciLexerTCL*)self, style);
}

QColor* q_scilexertcl_super_default_color2(void* self, int style) {
    return QsciLexerTCL_SuperDefaultColor2((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTCL_OnDefaultColor2((QsciLexerTCL*)self, (intptr_t)callback);
}

QFont* q_scilexertcl_default_font2(void* self, int style) {
    return QsciLexerTCL_DefaultFont2((QsciLexerTCL*)self, style);
}

QFont* q_scilexertcl_super_default_font2(void* self, int style) {
    return QsciLexerTCL_SuperDefaultFont2((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTCL_OnDefaultFont2((QsciLexerTCL*)self, (intptr_t)callback);
}

QColor* q_scilexertcl_default_paper2(void* self, int style) {
    return QsciLexerTCL_DefaultPaper2((QsciLexerTCL*)self, style);
}

QColor* q_scilexertcl_super_default_paper2(void* self, int style) {
    return QsciLexerTCL_SuperDefaultPaper2((QsciLexerTCL*)self, style);
}

void q_scilexertcl_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTCL_OnDefaultPaper2((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_editor(void* self, void* editor) {
    QsciLexerTCL_SetEditor((QsciLexerTCL*)self, (QsciScintilla*)editor);
}

void q_scilexertcl_super_set_editor(void* self, void* editor) {
    QsciLexerTCL_SuperSetEditor((QsciLexerTCL*)self, (QsciScintilla*)editor);
}

void q_scilexertcl_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnSetEditor((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_style_bits_needed(void* self) {
    return QsciLexerTCL_StyleBitsNeeded((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_style_bits_needed(void* self) {
    return QsciLexerTCL_SuperStyleBitsNeeded((QsciLexerTCL*)self);
}

void q_scilexertcl_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnStyleBitsNeeded((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_word_characters(void* self) {
    return QsciLexerTCL_WordCharacters((QsciLexerTCL*)self);
}

const char* q_scilexertcl_super_word_characters(void* self) {
    return QsciLexerTCL_SuperWordCharacters((QsciLexerTCL*)self);
}

void q_scilexertcl_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerTCL_OnWordCharacters((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTCL_SetAutoIndentStyle((QsciLexerTCL*)self, autoindentstyle);
}

void q_scilexertcl_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTCL_SuperSetAutoIndentStyle((QsciLexerTCL*)self, autoindentstyle);
}

void q_scilexertcl_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerTCL_OnSetAutoIndentStyle((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_color(void* self, void* c, int style) {
    QsciLexerTCL_SetColor((QsciLexerTCL*)self, (QColor*)c, style);
}

void q_scilexertcl_super_set_color(void* self, void* c, int style) {
    QsciLexerTCL_SuperSetColor((QsciLexerTCL*)self, (QColor*)c, style);
}

void q_scilexertcl_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTCL_OnSetColor((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTCL_SetEolFill((QsciLexerTCL*)self, eoffill, style);
}

void q_scilexertcl_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTCL_SuperSetEolFill((QsciLexerTCL*)self, eoffill, style);
}

void q_scilexertcl_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerTCL_OnSetEolFill((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_font(void* self, void* f, int style) {
    QsciLexerTCL_SetFont((QsciLexerTCL*)self, (QFont*)f, style);
}

void q_scilexertcl_super_set_font(void* self, void* f, int style) {
    QsciLexerTCL_SuperSetFont((QsciLexerTCL*)self, (QFont*)f, style);
}

void q_scilexertcl_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTCL_OnSetFont((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_set_paper(void* self, void* c, int style) {
    QsciLexerTCL_SetPaper((QsciLexerTCL*)self, (QColor*)c, style);
}

void q_scilexertcl_super_set_paper(void* self, void* c, int style) {
    QsciLexerTCL_SuperSetPaper((QsciLexerTCL*)self, (QColor*)c, style);
}

void q_scilexertcl_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTCL_OnSetPaper((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_event(void* self, void* event) {
    return QsciLexerTCL_Event((QsciLexerTCL*)self, (QEvent*)event);
}

bool q_scilexertcl_super_event(void* self, void* event) {
    return QsciLexerTCL_SuperEvent((QsciLexerTCL*)self, (QEvent*)event);
}

void q_scilexertcl_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTCL_OnEvent((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTCL_EventFilter((QsciLexerTCL*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexertcl_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTCL_SuperEventFilter((QsciLexerTCL*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexertcl_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerTCL_OnEventFilter((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_timer_event(void* self, void* event) {
    QsciLexerTCL_TimerEvent((QsciLexerTCL*)self, (QTimerEvent*)event);
}

void q_scilexertcl_super_timer_event(void* self, void* event) {
    QsciLexerTCL_SuperTimerEvent((QsciLexerTCL*)self, (QTimerEvent*)event);
}

void q_scilexertcl_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnTimerEvent((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_child_event(void* self, void* event) {
    QsciLexerTCL_ChildEvent((QsciLexerTCL*)self, (QChildEvent*)event);
}

void q_scilexertcl_super_child_event(void* self, void* event) {
    QsciLexerTCL_SuperChildEvent((QsciLexerTCL*)self, (QChildEvent*)event);
}

void q_scilexertcl_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnChildEvent((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_custom_event(void* self, void* event) {
    QsciLexerTCL_CustomEvent((QsciLexerTCL*)self, (QEvent*)event);
}

void q_scilexertcl_super_custom_event(void* self, void* event) {
    QsciLexerTCL_SuperCustomEvent((QsciLexerTCL*)self, (QEvent*)event);
}

void q_scilexertcl_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnCustomEvent((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_connect_notify(void* self, void* signal) {
    QsciLexerTCL_ConnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

void q_scilexertcl_super_connect_notify(void* self, void* signal) {
    QsciLexerTCL_SuperConnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

void q_scilexertcl_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnConnectNotify((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_disconnect_notify(void* self, void* signal) {
    QsciLexerTCL_DisconnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

void q_scilexertcl_super_disconnect_notify(void* self, void* signal) {
    QsciLexerTCL_SuperDisconnectNotify((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

void q_scilexertcl_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTCL_OnDisconnectNotify((QsciLexerTCL*)self, (intptr_t)callback);
}

char* q_scilexertcl_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTCL_TextAsBytes((QsciLexerTCL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexertcl_super_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTCL_SuperTextAsBytes((QsciLexerTCL*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertcl_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*)) {
    QsciLexerTCL_OnTextAsBytes((QsciLexerTCL*)self, (intptr_t)callback);
}

const char* q_scilexertcl_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTCL_BytesAsText((QsciLexerTCL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertcl_super_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTCL_SuperBytesAsText((QsciLexerTCL*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertcl_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerTCL_OnBytesAsText((QsciLexerTCL*)self, (intptr_t)callback);
}

QObject* q_scilexertcl_sender(void* self) {
    return QsciLexerTCL_Sender((QsciLexerTCL*)self);
}

QObject* q_scilexertcl_super_sender(void* self) {
    return QsciLexerTCL_SuperSender((QsciLexerTCL*)self);
}

void q_scilexertcl_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerTCL_OnSender((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_sender_signal_index(void* self) {
    return QsciLexerTCL_SenderSignalIndex((QsciLexerTCL*)self);
}

int32_t q_scilexertcl_super_sender_signal_index(void* self) {
    return QsciLexerTCL_SuperSenderSignalIndex((QsciLexerTCL*)self);
}

void q_scilexertcl_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerTCL_OnSenderSignalIndex((QsciLexerTCL*)self, (intptr_t)callback);
}

int32_t q_scilexertcl_receivers(void* self, const char* signal) {
    return QsciLexerTCL_Receivers((QsciLexerTCL*)self, signal);
}

int32_t q_scilexertcl_super_receivers(void* self, const char* signal) {
    return QsciLexerTCL_SuperReceivers((QsciLexerTCL*)self, signal);
}

void q_scilexertcl_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerTCL_OnReceivers((QsciLexerTCL*)self, (intptr_t)callback);
}

bool q_scilexertcl_is_signal_connected(void* self, void* signal) {
    return QsciLexerTCL_IsSignalConnected((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

bool q_scilexertcl_super_is_signal_connected(void* self, void* signal) {
    return QsciLexerTCL_SuperIsSignalConnected((QsciLexerTCL*)self, (QMetaMethod*)signal);
}

void q_scilexertcl_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTCL_OnIsSignalConnected((QsciLexerTCL*)self, (intptr_t)callback);
}

void q_scilexertcl_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexertcl_delete(void* self) {
    QsciLexerTCL_Delete((QsciLexerTCL*)(self));
}
