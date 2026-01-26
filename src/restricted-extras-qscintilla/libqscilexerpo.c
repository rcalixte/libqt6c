#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerpo.hpp"
#include "libqscilexerpo.h"

QsciLexerPO* q_scilexerpo_new() {
    return QsciLexerPO_new();
}

QsciLexerPO* q_scilexerpo_new2(void* parent) {
    return QsciLexerPO_new2((QObject*)parent);
}

const QMetaObject* q_scilexerpo_meta_object(void* self) {
    return QsciLexerPO_MetaObject((QsciLexerPO*)self);
}

void q_scilexerpo_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerPO_OnMetaObject((QsciLexerPO*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerpo_qbase_meta_object(void* self) {
    return QsciLexerPO_QBaseMetaObject((QsciLexerPO*)self);
}

void* q_scilexerpo_metacast(void* self, const char* param1) {
    return QsciLexerPO_Metacast((QsciLexerPO*)self, param1);
}

void q_scilexerpo_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerPO_OnMetacast((QsciLexerPO*)self, (intptr_t)callback);
}

void* q_scilexerpo_qbase_metacast(void* self, const char* param1) {
    return QsciLexerPO_QBaseMetacast((QsciLexerPO*)self, param1);
}

int32_t q_scilexerpo_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPO_Metacall((QsciLexerPO*)self, param1, param2, param3);
}

void q_scilexerpo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerPO_OnMetacall((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPO_QBaseMetacall((QsciLexerPO*)self, param1, param2, param3);
}

const char* q_scilexerpo_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpo_language(void* self) {
    return QsciLexerPO_Language((QsciLexerPO*)self);
}

const char* q_scilexerpo_lexer(void* self) {
    return QsciLexerPO_Lexer((QsciLexerPO*)self);
}

QColor* q_scilexerpo_default_color(void* self, int style) {
    return QsciLexerPO_DefaultColor((QsciLexerPO*)self, style);
}

QFont* q_scilexerpo_default_font(void* self, int style) {
    return QsciLexerPO_DefaultFont((QsciLexerPO*)self, style);
}

const char* q_scilexerpo_description(void* self, int style) {
    libqt_string _str = QsciLexerPO_Description((QsciLexerPO*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpo_refresh_properties(void* self) {
    QsciLexerPO_RefreshProperties((QsciLexerPO*)self);
}

bool q_scilexerpo_fold_comments(void* self) {
    return QsciLexerPO_FoldComments((QsciLexerPO*)self);
}

bool q_scilexerpo_fold_compact(void* self) {
    return QsciLexerPO_FoldCompact((QsciLexerPO*)self);
}

void q_scilexerpo_set_fold_comments(void* self, bool fold) {
    QsciLexerPO_SetFoldComments((QsciLexerPO*)self, fold);
}

void q_scilexerpo_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerPO_OnSetFoldComments((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPO_QBaseSetFoldComments((QsciLexerPO*)self, fold);
}

void q_scilexerpo_set_fold_compact(void* self, bool fold) {
    QsciLexerPO_SetFoldCompact((QsciLexerPO*)self, fold);
}

void q_scilexerpo_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerPO_OnSetFoldCompact((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPO_QBaseSetFoldCompact((QsciLexerPO*)self, fold);
}

bool q_scilexerpo_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_ReadProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpo_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPO_OnReadProperties((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_QBaseReadProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerpo_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_WriteProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpo_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPO_OnWriteProperties((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPO_QBaseWriteProperties((QsciLexerPO*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerpo_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerpo_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerpo_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexerpo_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexerpo_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerpo_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerpo_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerpo_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerpo_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerpo_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerpo_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerpo_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpo_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpo_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerpo_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpo_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerpo_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpo_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpo_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpo_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerpo_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerpo_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerpo_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerpo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpo_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerpo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerpo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerpo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerpo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerpo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerpo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerpo_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerpo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerpo_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerpo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerpo_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerpo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerpo_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerpo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerpo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerpo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerpo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerpo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerpo_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerpo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerpo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerpo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerpo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerpo_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpo_dynamic_property_names\n");
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

QBindingStorage* q_scilexerpo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerpo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerpo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerpo_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerpo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerpo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerpo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerpo_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerpo_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerpo_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerpo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerpo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerpo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerpo_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_lexer_id(void* self) {
    return QsciLexerPO_LexerId((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_lexer_id(void* self) {
    return QsciLexerPO_QBaseLexerId((QsciLexerPO*)self);
}

void q_scilexerpo_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnLexerId((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_auto_completion_fillups(void* self) {
    return QsciLexerPO_AutoCompletionFillups((QsciLexerPO*)self);
}

const char* q_scilexerpo_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPO_QBaseAutoCompletionFillups((QsciLexerPO*)self);
}

void q_scilexerpo_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPO_OnAutoCompletionFillups((QsciLexerPO*)self, (intptr_t)callback);
}

const char** q_scilexerpo_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPO_AutoCompletionWordSeparators((QsciLexerPO*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpo_auto_completion_word_separators\n");
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

const char** q_scilexerpo_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPO_QBaseAutoCompletionWordSeparators((QsciLexerPO*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpo_auto_completion_word_separators\n");
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

void q_scilexerpo_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerPO_OnAutoCompletionWordSeparators((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_block_end(void* self, int* style) {
    return QsciLexerPO_BlockEnd((QsciLexerPO*)self, style);
}

const char* q_scilexerpo_qbase_block_end(void* self, int* style) {
    return QsciLexerPO_QBaseBlockEnd((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPO_OnBlockEnd((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_block_lookback(void* self) {
    return QsciLexerPO_BlockLookback((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_block_lookback(void* self) {
    return QsciLexerPO_QBaseBlockLookback((QsciLexerPO*)self);
}

void q_scilexerpo_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnBlockLookback((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_block_start(void* self, int* style) {
    return QsciLexerPO_BlockStart((QsciLexerPO*)self, style);
}

const char* q_scilexerpo_qbase_block_start(void* self, int* style) {
    return QsciLexerPO_QBaseBlockStart((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPO_OnBlockStart((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_block_start_keyword(void* self, int* style) {
    return QsciLexerPO_BlockStartKeyword((QsciLexerPO*)self, style);
}

const char* q_scilexerpo_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPO_QBaseBlockStartKeyword((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPO_OnBlockStartKeyword((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_brace_style(void* self) {
    return QsciLexerPO_BraceStyle((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_brace_style(void* self) {
    return QsciLexerPO_QBaseBraceStyle((QsciLexerPO*)self);
}

void q_scilexerpo_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnBraceStyle((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_case_sensitive(void* self) {
    return QsciLexerPO_CaseSensitive((QsciLexerPO*)self);
}

bool q_scilexerpo_qbase_case_sensitive(void* self) {
    return QsciLexerPO_QBaseCaseSensitive((QsciLexerPO*)self);
}

void q_scilexerpo_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPO_OnCaseSensitive((QsciLexerPO*)self, (intptr_t)callback);
}

QColor* q_scilexerpo_color(void* self, int style) {
    return QsciLexerPO_Color((QsciLexerPO*)self, style);
}

QColor* q_scilexerpo_qbase_color(void* self, int style) {
    return QsciLexerPO_QBaseColor((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPO_OnColor((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_eol_fill(void* self, int style) {
    return QsciLexerPO_EolFill((QsciLexerPO*)self, style);
}

bool q_scilexerpo_qbase_eol_fill(void* self, int style) {
    return QsciLexerPO_QBaseEolFill((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPO_OnEolFill((QsciLexerPO*)self, (intptr_t)callback);
}

QFont* q_scilexerpo_font(void* self, int style) {
    return QsciLexerPO_Font((QsciLexerPO*)self, style);
}

QFont* q_scilexerpo_qbase_font(void* self, int style) {
    return QsciLexerPO_QBaseFont((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPO_OnFont((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_indentation_guide_view(void* self) {
    return QsciLexerPO_IndentationGuideView((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_indentation_guide_view(void* self) {
    return QsciLexerPO_QBaseIndentationGuideView((QsciLexerPO*)self);
}

void q_scilexerpo_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnIndentationGuideView((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_keywords(void* self, int set) {
    return QsciLexerPO_Keywords((QsciLexerPO*)self, set);
}

const char* q_scilexerpo_qbase_keywords(void* self, int set) {
    return QsciLexerPO_QBaseKeywords((QsciLexerPO*)self, set);
}

void q_scilexerpo_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerPO_OnKeywords((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_default_style(void* self) {
    return QsciLexerPO_DefaultStyle((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_default_style(void* self) {
    return QsciLexerPO_QBaseDefaultStyle((QsciLexerPO*)self);
}

void q_scilexerpo_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnDefaultStyle((QsciLexerPO*)self, (intptr_t)callback);
}

QColor* q_scilexerpo_paper(void* self, int style) {
    return QsciLexerPO_Paper((QsciLexerPO*)self, style);
}

QColor* q_scilexerpo_qbase_paper(void* self, int style) {
    return QsciLexerPO_QBasePaper((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPO_OnPaper((QsciLexerPO*)self, (intptr_t)callback);
}

QColor* q_scilexerpo_default_color2(void* self, int style) {
    return QsciLexerPO_DefaultColor2((QsciLexerPO*)self, style);
}

QColor* q_scilexerpo_qbase_default_color2(void* self, int style) {
    return QsciLexerPO_QBaseDefaultColor2((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPO_OnDefaultColor2((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_default_eol_fill(void* self, int style) {
    return QsciLexerPO_DefaultEolFill((QsciLexerPO*)self, style);
}

bool q_scilexerpo_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerPO_QBaseDefaultEolFill((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPO_OnDefaultEolFill((QsciLexerPO*)self, (intptr_t)callback);
}

QFont* q_scilexerpo_default_font2(void* self, int style) {
    return QsciLexerPO_DefaultFont2((QsciLexerPO*)self, style);
}

QFont* q_scilexerpo_qbase_default_font2(void* self, int style) {
    return QsciLexerPO_QBaseDefaultFont2((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPO_OnDefaultFont2((QsciLexerPO*)self, (intptr_t)callback);
}

QColor* q_scilexerpo_default_paper2(void* self, int style) {
    return QsciLexerPO_DefaultPaper2((QsciLexerPO*)self, style);
}

QColor* q_scilexerpo_qbase_default_paper2(void* self, int style) {
    return QsciLexerPO_QBaseDefaultPaper2((QsciLexerPO*)self, style);
}

void q_scilexerpo_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPO_OnDefaultPaper2((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_editor(void* self, void* editor) {
    QsciLexerPO_SetEditor((QsciLexerPO*)self, (QsciScintilla*)editor);
}

void q_scilexerpo_qbase_set_editor(void* self, void* editor) {
    QsciLexerPO_QBaseSetEditor((QsciLexerPO*)self, (QsciScintilla*)editor);
}

void q_scilexerpo_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnSetEditor((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_style_bits_needed(void* self) {
    return QsciLexerPO_StyleBitsNeeded((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_style_bits_needed(void* self) {
    return QsciLexerPO_QBaseStyleBitsNeeded((QsciLexerPO*)self);
}

void q_scilexerpo_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnStyleBitsNeeded((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_word_characters(void* self) {
    return QsciLexerPO_WordCharacters((QsciLexerPO*)self);
}

const char* q_scilexerpo_qbase_word_characters(void* self) {
    return QsciLexerPO_QBaseWordCharacters((QsciLexerPO*)self);
}

void q_scilexerpo_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerPO_OnWordCharacters((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPO_SetAutoIndentStyle((QsciLexerPO*)self, autoindentstyle);
}

void q_scilexerpo_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPO_QBaseSetAutoIndentStyle((QsciLexerPO*)self, autoindentstyle);
}

void q_scilexerpo_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPO_OnSetAutoIndentStyle((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_color(void* self, void* c, int style) {
    QsciLexerPO_SetColor((QsciLexerPO*)self, (QColor*)c, style);
}

void q_scilexerpo_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPO_QBaseSetColor((QsciLexerPO*)self, (QColor*)c, style);
}

void q_scilexerpo_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPO_OnSetColor((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPO_SetEolFill((QsciLexerPO*)self, eoffill, style);
}

void q_scilexerpo_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPO_QBaseSetEolFill((QsciLexerPO*)self, eoffill, style);
}

void q_scilexerpo_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPO_OnSetEolFill((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_font(void* self, void* f, int style) {
    QsciLexerPO_SetFont((QsciLexerPO*)self, (QFont*)f, style);
}

void q_scilexerpo_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPO_QBaseSetFont((QsciLexerPO*)self, (QFont*)f, style);
}

void q_scilexerpo_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPO_OnSetFont((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_set_paper(void* self, void* c, int style) {
    QsciLexerPO_SetPaper((QsciLexerPO*)self, (QColor*)c, style);
}

void q_scilexerpo_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPO_QBaseSetPaper((QsciLexerPO*)self, (QColor*)c, style);
}

void q_scilexerpo_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPO_OnSetPaper((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_event(void* self, void* event) {
    return QsciLexerPO_Event((QsciLexerPO*)self, (QEvent*)event);
}

bool q_scilexerpo_qbase_event(void* self, void* event) {
    return QsciLexerPO_QBaseEvent((QsciLexerPO*)self, (QEvent*)event);
}

void q_scilexerpo_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPO_OnEvent((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPO_EventFilter((QsciLexerPO*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerpo_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPO_QBaseEventFilter((QsciLexerPO*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerpo_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPO_OnEventFilter((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_timer_event(void* self, void* event) {
    QsciLexerPO_TimerEvent((QsciLexerPO*)self, (QTimerEvent*)event);
}

void q_scilexerpo_qbase_timer_event(void* self, void* event) {
    QsciLexerPO_QBaseTimerEvent((QsciLexerPO*)self, (QTimerEvent*)event);
}

void q_scilexerpo_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnTimerEvent((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_child_event(void* self, void* event) {
    QsciLexerPO_ChildEvent((QsciLexerPO*)self, (QChildEvent*)event);
}

void q_scilexerpo_qbase_child_event(void* self, void* event) {
    QsciLexerPO_QBaseChildEvent((QsciLexerPO*)self, (QChildEvent*)event);
}

void q_scilexerpo_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnChildEvent((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_custom_event(void* self, void* event) {
    QsciLexerPO_CustomEvent((QsciLexerPO*)self, (QEvent*)event);
}

void q_scilexerpo_qbase_custom_event(void* self, void* event) {
    QsciLexerPO_QBaseCustomEvent((QsciLexerPO*)self, (QEvent*)event);
}

void q_scilexerpo_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnCustomEvent((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_connect_notify(void* self, void* signal) {
    QsciLexerPO_ConnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

void q_scilexerpo_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPO_QBaseConnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

void q_scilexerpo_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnConnectNotify((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_disconnect_notify(void* self, void* signal) {
    QsciLexerPO_DisconnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

void q_scilexerpo_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPO_QBaseDisconnectNotify((QsciLexerPO*)self, (QMetaMethod*)signal);
}

void q_scilexerpo_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPO_OnDisconnectNotify((QsciLexerPO*)self, (intptr_t)callback);
}

char* q_scilexerpo_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPO_TextAsBytes((QsciLexerPO*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerpo_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPO_QBaseTextAsBytes((QsciLexerPO*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpo_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPO_OnTextAsBytes((QsciLexerPO*)self, (intptr_t)callback);
}

const char* q_scilexerpo_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPO_BytesAsText((QsciLexerPO*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpo_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPO_QBaseBytesAsText((QsciLexerPO*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpo_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPO_OnBytesAsText((QsciLexerPO*)self, (intptr_t)callback);
}

QObject* q_scilexerpo_sender(void* self) {
    return QsciLexerPO_Sender((QsciLexerPO*)self);
}

QObject* q_scilexerpo_qbase_sender(void* self) {
    return QsciLexerPO_QBaseSender((QsciLexerPO*)self);
}

void q_scilexerpo_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPO_OnSender((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_sender_signal_index(void* self) {
    return QsciLexerPO_SenderSignalIndex((QsciLexerPO*)self);
}

int32_t q_scilexerpo_qbase_sender_signal_index(void* self) {
    return QsciLexerPO_QBaseSenderSignalIndex((QsciLexerPO*)self);
}

void q_scilexerpo_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPO_OnSenderSignalIndex((QsciLexerPO*)self, (intptr_t)callback);
}

int32_t q_scilexerpo_receivers(void* self, const char* signal) {
    return QsciLexerPO_Receivers((QsciLexerPO*)self, signal);
}

int32_t q_scilexerpo_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPO_QBaseReceivers((QsciLexerPO*)self, signal);
}

void q_scilexerpo_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPO_OnReceivers((QsciLexerPO*)self, (intptr_t)callback);
}

bool q_scilexerpo_is_signal_connected(void* self, void* signal) {
    return QsciLexerPO_IsSignalConnected((QsciLexerPO*)self, (QMetaMethod*)signal);
}

bool q_scilexerpo_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPO_QBaseIsSignalConnected((QsciLexerPO*)self, (QMetaMethod*)signal);
}

void q_scilexerpo_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPO_OnIsSignalConnected((QsciLexerPO*)self, (intptr_t)callback);
}

void q_scilexerpo_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerpo_delete(void* self) {
    QsciLexerPO_Delete((QsciLexerPO*)(self));
}
