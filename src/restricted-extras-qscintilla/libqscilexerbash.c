#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerbash.hpp"
#include "libqscilexerbash.h"

QsciLexerBash* q_scilexerbash_new() {
    return QsciLexerBash_new();
}

QsciLexerBash* q_scilexerbash_new2(void* parent) {
    return QsciLexerBash_new2((QObject*)parent);
}

const QMetaObject* q_scilexerbash_meta_object(void* self) {
    return QsciLexerBash_MetaObject((QsciLexerBash*)self);
}

void* q_scilexerbash_metacast(void* self, const char* param1) {
    return QsciLexerBash_Metacast((QsciLexerBash*)self, param1);
}

int32_t q_scilexerbash_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBash_Metacall((QsciLexerBash*)self, param1, param2, param3);
}

void q_scilexerbash_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerBash_OnMetacall((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBash_QBaseMetacall((QsciLexerBash*)self, param1, param2, param3);
}

const char* q_scilexerbash_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_language(void* self) {
    return QsciLexerBash_Language((QsciLexerBash*)self);
}

const char* q_scilexerbash_lexer(void* self) {
    return QsciLexerBash_Lexer((QsciLexerBash*)self);
}

int32_t q_scilexerbash_brace_style(void* self) {
    return QsciLexerBash_BraceStyle((QsciLexerBash*)self);
}

const char* q_scilexerbash_word_characters(void* self) {
    return QsciLexerBash_WordCharacters((QsciLexerBash*)self);
}

QColor* q_scilexerbash_default_color(void* self, int style) {
    return QsciLexerBash_DefaultColor((QsciLexerBash*)self, style);
}

bool q_scilexerbash_default_eol_fill(void* self, int style) {
    return QsciLexerBash_DefaultEolFill((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_default_font(void* self, int style) {
    return QsciLexerBash_DefaultFont((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_default_paper(void* self, int style) {
    return QsciLexerBash_DefaultPaper((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_keywords(void* self, int set) {
    return QsciLexerBash_Keywords((QsciLexerBash*)self, set);
}

const char* q_scilexerbash_description(void* self, int style) {
    libqt_string _str = QsciLexerBash_Description((QsciLexerBash*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_refresh_properties(void* self) {
    QsciLexerBash_RefreshProperties((QsciLexerBash*)self);
}

bool q_scilexerbash_fold_comments(void* self) {
    return QsciLexerBash_FoldComments((QsciLexerBash*)self);
}

bool q_scilexerbash_fold_compact(void* self) {
    return QsciLexerBash_FoldCompact((QsciLexerBash*)self);
}

void q_scilexerbash_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_SetFoldComments((QsciLexerBash*)self, fold);
}

void q_scilexerbash_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerBash_OnSetFoldComments((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerBash_QBaseSetFoldComments((QsciLexerBash*)self, fold);
}

void q_scilexerbash_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_SetFoldCompact((QsciLexerBash*)self, fold);
}

void q_scilexerbash_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerBash_OnSetFoldCompact((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerBash_QBaseSetFoldCompact((QsciLexerBash*)self, fold);
}

bool q_scilexerbash_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_ReadProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerbash_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerBash_OnReadProperties((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_QBaseReadProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerbash_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_WriteProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerbash_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerBash_OnWriteProperties((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBash_QBaseWriteProperties((QsciLexerBash*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerbash_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerbash_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerbash_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerbash_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerbash_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerbash_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerbash_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerbash_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerbash_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerbash_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerbash_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbash_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerbash_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerbash_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbash_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbash_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerbash_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerbash_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerbash_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerbash_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerbash_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerbash_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerbash_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerbash_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerbash_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerbash_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerbash_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerbash_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerbash_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerbash_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerbash_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerbash_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerbash_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerbash_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerbash_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerbash_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerbash_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerbash_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerbash_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerbash_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerbash_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerbash_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerbash_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_dynamic_property_names");
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

QBindingStorage* q_scilexerbash_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerbash_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerbash_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerbash_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerbash_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerbash_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerbash_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerbash_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerbash_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerbash_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerbash_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerbash_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerbash_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_lexer_id(void* self) {
    return QsciLexerBash_LexerId((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_lexer_id(void* self) {
    return QsciLexerBash_QBaseLexerId((QsciLexerBash*)self);
}

void q_scilexerbash_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnLexerId((QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_auto_completion_fillups(void* self) {
    return QsciLexerBash_AutoCompletionFillups((QsciLexerBash*)self);
}

const char* q_scilexerbash_qbase_auto_completion_fillups(void* self) {
    return QsciLexerBash_QBaseAutoCompletionFillups((QsciLexerBash*)self);
}

void q_scilexerbash_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerBash_OnAutoCompletionFillups((QsciLexerBash*)self, (intptr_t)callback);
}

const char** q_scilexerbash_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBash_AutoCompletionWordSeparators((QsciLexerBash*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_auto_completion_word_separators");
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

const char** q_scilexerbash_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBash_QBaseAutoCompletionWordSeparators((QsciLexerBash*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerbash_auto_completion_word_separators");
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

void q_scilexerbash_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerBash_OnAutoCompletionWordSeparators((QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_end(void* self, int* style) {
    return QsciLexerBash_BlockEnd((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_qbase_block_end(void* self, int* style) {
    return QsciLexerBash_QBaseBlockEnd((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBash_OnBlockEnd((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_block_lookback(void* self) {
    return QsciLexerBash_BlockLookback((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_block_lookback(void* self) {
    return QsciLexerBash_QBaseBlockLookback((QsciLexerBash*)self);
}

void q_scilexerbash_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnBlockLookback((QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_start(void* self, int* style) {
    return QsciLexerBash_BlockStart((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_qbase_block_start(void* self, int* style) {
    return QsciLexerBash_QBaseBlockStart((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBash_OnBlockStart((QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_block_start_keyword(void* self, int* style) {
    return QsciLexerBash_BlockStartKeyword((QsciLexerBash*)self, style);
}

const char* q_scilexerbash_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerBash_QBaseBlockStartKeyword((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBash_OnBlockStartKeyword((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_case_sensitive(void* self) {
    return QsciLexerBash_CaseSensitive((QsciLexerBash*)self);
}

bool q_scilexerbash_qbase_case_sensitive(void* self) {
    return QsciLexerBash_QBaseCaseSensitive((QsciLexerBash*)self);
}

void q_scilexerbash_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerBash_OnCaseSensitive((QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_color(void* self, int style) {
    return QsciLexerBash_Color((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_qbase_color(void* self, int style) {
    return QsciLexerBash_QBaseColor((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBash_OnColor((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_eol_fill(void* self, int style) {
    return QsciLexerBash_EolFill((QsciLexerBash*)self, style);
}

bool q_scilexerbash_qbase_eol_fill(void* self, int style) {
    return QsciLexerBash_QBaseEolFill((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerBash_OnEolFill((QsciLexerBash*)self, (intptr_t)callback);
}

QFont* q_scilexerbash_font(void* self, int style) {
    return QsciLexerBash_Font((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_qbase_font(void* self, int style) {
    return QsciLexerBash_QBaseFont((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerBash_OnFont((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_indentation_guide_view(void* self) {
    return QsciLexerBash_IndentationGuideView((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_indentation_guide_view(void* self) {
    return QsciLexerBash_QBaseIndentationGuideView((QsciLexerBash*)self);
}

void q_scilexerbash_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnIndentationGuideView((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_default_style(void* self) {
    return QsciLexerBash_DefaultStyle((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_default_style(void* self) {
    return QsciLexerBash_QBaseDefaultStyle((QsciLexerBash*)self);
}

void q_scilexerbash_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnDefaultStyle((QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_paper(void* self, int style) {
    return QsciLexerBash_Paper((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_qbase_paper(void* self, int style) {
    return QsciLexerBash_QBasePaper((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBash_OnPaper((QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_default_color2(void* self, int style) {
    return QsciLexerBash_DefaultColor2((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_qbase_default_color2(void* self, int style) {
    return QsciLexerBash_QBaseDefaultColor2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBash_OnDefaultColor2((QsciLexerBash*)self, (intptr_t)callback);
}

QFont* q_scilexerbash_default_font2(void* self, int style) {
    return QsciLexerBash_DefaultFont2((QsciLexerBash*)self, style);
}

QFont* q_scilexerbash_qbase_default_font2(void* self, int style) {
    return QsciLexerBash_QBaseDefaultFont2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerBash_OnDefaultFont2((QsciLexerBash*)self, (intptr_t)callback);
}

QColor* q_scilexerbash_default_paper2(void* self, int style) {
    return QsciLexerBash_DefaultPaper2((QsciLexerBash*)self, style);
}

QColor* q_scilexerbash_qbase_default_paper2(void* self, int style) {
    return QsciLexerBash_QBaseDefaultPaper2((QsciLexerBash*)self, style);
}

void q_scilexerbash_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBash_OnDefaultPaper2((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_editor(void* self, void* editor) {
    QsciLexerBash_SetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

void q_scilexerbash_qbase_set_editor(void* self, void* editor) {
    QsciLexerBash_QBaseSetEditor((QsciLexerBash*)self, (QsciScintilla*)editor);
}

void q_scilexerbash_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnSetEditor((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_style_bits_needed(void* self) {
    return QsciLexerBash_StyleBitsNeeded((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_style_bits_needed(void* self) {
    return QsciLexerBash_QBaseStyleBitsNeeded((QsciLexerBash*)self);
}

void q_scilexerbash_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnStyleBitsNeeded((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_SetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

void q_scilexerbash_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBash_QBaseSetAutoIndentStyle((QsciLexerBash*)self, autoindentstyle);
}

void q_scilexerbash_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerBash_OnSetAutoIndentStyle((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_color(void* self, void* c, int style) {
    QsciLexerBash_SetColor((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_qbase_set_color(void* self, void* c, int style) {
    QsciLexerBash_QBaseSetColor((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBash_OnSetColor((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_SetEolFill((QsciLexerBash*)self, eoffill, style);
}

void q_scilexerbash_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBash_QBaseSetEolFill((QsciLexerBash*)self, eoffill, style);
}

void q_scilexerbash_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerBash_OnSetEolFill((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_font(void* self, void* f, int style) {
    QsciLexerBash_SetFont((QsciLexerBash*)self, (QFont*)f, style);
}

void q_scilexerbash_qbase_set_font(void* self, void* f, int style) {
    QsciLexerBash_QBaseSetFont((QsciLexerBash*)self, (QFont*)f, style);
}

void q_scilexerbash_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBash_OnSetFont((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_set_paper(void* self, void* c, int style) {
    QsciLexerBash_SetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerBash_QBaseSetPaper((QsciLexerBash*)self, (QColor*)c, style);
}

void q_scilexerbash_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBash_OnSetPaper((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_event(void* self, void* event) {
    return QsciLexerBash_Event((QsciLexerBash*)self, (QEvent*)event);
}

bool q_scilexerbash_qbase_event(void* self, void* event) {
    return QsciLexerBash_QBaseEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerBash_OnEvent((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_EventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerbash_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBash_QBaseEventFilter((QsciLexerBash*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerbash_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerBash_OnEventFilter((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_timer_event(void* self, void* event) {
    QsciLexerBash_TimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

void q_scilexerbash_qbase_timer_event(void* self, void* event) {
    QsciLexerBash_QBaseTimerEvent((QsciLexerBash*)self, (QTimerEvent*)event);
}

void q_scilexerbash_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnTimerEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_child_event(void* self, void* event) {
    QsciLexerBash_ChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

void q_scilexerbash_qbase_child_event(void* self, void* event) {
    QsciLexerBash_QBaseChildEvent((QsciLexerBash*)self, (QChildEvent*)event);
}

void q_scilexerbash_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnChildEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_custom_event(void* self, void* event) {
    QsciLexerBash_CustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_qbase_custom_event(void* self, void* event) {
    QsciLexerBash_QBaseCustomEvent((QsciLexerBash*)self, (QEvent*)event);
}

void q_scilexerbash_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnCustomEvent((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_connect_notify(void* self, void* signal) {
    QsciLexerBash_ConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_qbase_connect_notify(void* self, void* signal) {
    QsciLexerBash_QBaseConnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnConnectNotify((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_disconnect_notify(void* self, void* signal) {
    QsciLexerBash_DisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerBash_QBaseDisconnectNotify((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerBash_OnDisconnectNotify((QsciLexerBash*)self, (intptr_t)callback);
}

char* q_scilexerbash_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerBash_TextAsBytes((QsciLexerBash*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerbash_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerBash_QBaseTextAsBytes((QsciLexerBash*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerBash_OnTextAsBytes((QsciLexerBash*)self, (intptr_t)callback);
}

const char* q_scilexerbash_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerBash_BytesAsText((QsciLexerBash*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbash_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerBash_QBaseBytesAsText((QsciLexerBash*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbash_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerBash_OnBytesAsText((QsciLexerBash*)self, (intptr_t)callback);
}

QObject* q_scilexerbash_sender(void* self) {
    return QsciLexerBash_Sender((QsciLexerBash*)self);
}

QObject* q_scilexerbash_qbase_sender(void* self) {
    return QsciLexerBash_QBaseSender((QsciLexerBash*)self);
}

void q_scilexerbash_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerBash_OnSender((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_sender_signal_index(void* self) {
    return QsciLexerBash_SenderSignalIndex((QsciLexerBash*)self);
}

int32_t q_scilexerbash_qbase_sender_signal_index(void* self) {
    return QsciLexerBash_QBaseSenderSignalIndex((QsciLexerBash*)self);
}

void q_scilexerbash_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerBash_OnSenderSignalIndex((QsciLexerBash*)self, (intptr_t)callback);
}

int32_t q_scilexerbash_receivers(void* self, const char* signal) {
    return QsciLexerBash_Receivers((QsciLexerBash*)self, signal);
}

int32_t q_scilexerbash_qbase_receivers(void* self, const char* signal) {
    return QsciLexerBash_QBaseReceivers((QsciLexerBash*)self, signal);
}

void q_scilexerbash_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerBash_OnReceivers((QsciLexerBash*)self, (intptr_t)callback);
}

bool q_scilexerbash_is_signal_connected(void* self, void* signal) {
    return QsciLexerBash_IsSignalConnected((QsciLexerBash*)self, (QMetaMethod*)signal);
}

bool q_scilexerbash_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerBash_QBaseIsSignalConnected((QsciLexerBash*)self, (QMetaMethod*)signal);
}

void q_scilexerbash_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerBash_OnIsSignalConnected((QsciLexerBash*)self, (intptr_t)callback);
}

void q_scilexerbash_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerbash_delete(void* self) {
    QsciLexerBash_Delete((QsciLexerBash*)(self));
}
