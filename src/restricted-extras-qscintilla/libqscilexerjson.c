#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerjson.hpp"
#include "libqscilexerjson.h"

QsciLexerJSON* q_scilexerjson_new() {
    return QsciLexerJSON_new();
}

QsciLexerJSON* q_scilexerjson_new2(void* parent) {
    return QsciLexerJSON_new2((QObject*)parent);
}

const QMetaObject* q_scilexerjson_meta_object(void* self) {
    return QsciLexerJSON_MetaObject((QsciLexerJSON*)self);
}

void* q_scilexerjson_metacast(void* self, const char* param1) {
    return QsciLexerJSON_Metacast((QsciLexerJSON*)self, param1);
}

int32_t q_scilexerjson_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJSON_Metacall((QsciLexerJSON*)self, param1, param2, param3);
}

void q_scilexerjson_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerJSON_OnMetacall((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerJSON_QBaseMetacall((QsciLexerJSON*)self, param1, param2, param3);
}

const char* q_scilexerjson_tr(const char* s) {
    libqt_string _str = QsciLexerJSON_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjson_language(void* self) {
    return QsciLexerJSON_Language((QsciLexerJSON*)self);
}

const char* q_scilexerjson_lexer(void* self) {
    return QsciLexerJSON_Lexer((QsciLexerJSON*)self);
}

QColor* q_scilexerjson_default_color(void* self, int style) {
    return QsciLexerJSON_DefaultColor((QsciLexerJSON*)self, style);
}

bool q_scilexerjson_default_eol_fill(void* self, int style) {
    return QsciLexerJSON_DefaultEolFill((QsciLexerJSON*)self, style);
}

QFont* q_scilexerjson_default_font(void* self, int style) {
    return QsciLexerJSON_DefaultFont((QsciLexerJSON*)self, style);
}

QColor* q_scilexerjson_default_paper(void* self, int style) {
    return QsciLexerJSON_DefaultPaper((QsciLexerJSON*)self, style);
}

const char* q_scilexerjson_keywords(void* self, int set) {
    return QsciLexerJSON_Keywords((QsciLexerJSON*)self, set);
}

const char* q_scilexerjson_description(void* self, int style) {
    libqt_string _str = QsciLexerJSON_Description((QsciLexerJSON*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjson_refresh_properties(void* self) {
    QsciLexerJSON_RefreshProperties((QsciLexerJSON*)self);
}

void q_scilexerjson_set_highlight_comments(void* self, bool highlight) {
    QsciLexerJSON_SetHighlightComments((QsciLexerJSON*)self, highlight);
}

bool q_scilexerjson_highlight_comments(void* self) {
    return QsciLexerJSON_HighlightComments((QsciLexerJSON*)self);
}

void q_scilexerjson_set_highlight_escape_sequences(void* self, bool highlight) {
    QsciLexerJSON_SetHighlightEscapeSequences((QsciLexerJSON*)self, highlight);
}

bool q_scilexerjson_highlight_escape_sequences(void* self) {
    return QsciLexerJSON_HighlightEscapeSequences((QsciLexerJSON*)self);
}

void q_scilexerjson_set_fold_compact(void* self, bool fold) {
    QsciLexerJSON_SetFoldCompact((QsciLexerJSON*)self, fold);
}

bool q_scilexerjson_fold_compact(void* self) {
    return QsciLexerJSON_FoldCompact((QsciLexerJSON*)self);
}

bool q_scilexerjson_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_ReadProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjson_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJSON_OnReadProperties((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_QBaseReadProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerjson_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_WriteProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerjson_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerJSON_OnWriteProperties((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerJSON_QBaseWriteProperties((QsciLexerJSON*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerjson_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerJSON_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjson_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerJSON_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerjson_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerjson_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerjson_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerjson_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerjson_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerjson_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerjson_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerjson_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerjson_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerjson_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjson_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjson_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerjson_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjson_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerjson_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjson_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerjson_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerjson_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerjson_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerjson_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerjson_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerjson_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjson_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerjson_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerjson_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerjson_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerjson_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerjson_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerjson_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerjson_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerjson_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerjson_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerjson_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerjson_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerjson_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerjson_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerjson_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerjson_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerjson_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerjson_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerjson_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerjson_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerjson_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerjson_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerjson_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerjson_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerjson_dynamic_property_names");
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

QBindingStorage* q_scilexerjson_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerjson_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerjson_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerjson_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerjson_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerjson_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerjson_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerjson_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerjson_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerjson_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerjson_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerjson_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerjson_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_lexer_id(void* self) {
    return QsciLexerJSON_LexerId((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_lexer_id(void* self) {
    return QsciLexerJSON_QBaseLexerId((QsciLexerJSON*)self);
}

void q_scilexerjson_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnLexerId((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_auto_completion_fillups(void* self) {
    return QsciLexerJSON_AutoCompletionFillups((QsciLexerJSON*)self);
}

const char* q_scilexerjson_qbase_auto_completion_fillups(void* self) {
    return QsciLexerJSON_QBaseAutoCompletionFillups((QsciLexerJSON*)self);
}

void q_scilexerjson_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerJSON_OnAutoCompletionFillups((QsciLexerJSON*)self, (intptr_t)callback);
}

const char** q_scilexerjson_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJSON_AutoCompletionWordSeparators((QsciLexerJSON*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerjson_auto_completion_word_separators");
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

const char** q_scilexerjson_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerJSON_QBaseAutoCompletionWordSeparators((QsciLexerJSON*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerjson_auto_completion_word_separators");
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

void q_scilexerjson_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerJSON_OnAutoCompletionWordSeparators((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_block_end(void* self, int* style) {
    return QsciLexerJSON_BlockEnd((QsciLexerJSON*)self, style);
}

const char* q_scilexerjson_qbase_block_end(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockEnd((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJSON_OnBlockEnd((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_block_lookback(void* self) {
    return QsciLexerJSON_BlockLookback((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_block_lookback(void* self) {
    return QsciLexerJSON_QBaseBlockLookback((QsciLexerJSON*)self);
}

void q_scilexerjson_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnBlockLookback((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_block_start(void* self, int* style) {
    return QsciLexerJSON_BlockStart((QsciLexerJSON*)self, style);
}

const char* q_scilexerjson_qbase_block_start(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockStart((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJSON_OnBlockStart((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_block_start_keyword(void* self, int* style) {
    return QsciLexerJSON_BlockStartKeyword((QsciLexerJSON*)self, style);
}

const char* q_scilexerjson_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerJSON_QBaseBlockStartKeyword((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerJSON_OnBlockStartKeyword((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_brace_style(void* self) {
    return QsciLexerJSON_BraceStyle((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_brace_style(void* self) {
    return QsciLexerJSON_QBaseBraceStyle((QsciLexerJSON*)self);
}

void q_scilexerjson_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnBraceStyle((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_case_sensitive(void* self) {
    return QsciLexerJSON_CaseSensitive((QsciLexerJSON*)self);
}

bool q_scilexerjson_qbase_case_sensitive(void* self) {
    return QsciLexerJSON_QBaseCaseSensitive((QsciLexerJSON*)self);
}

void q_scilexerjson_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerJSON_OnCaseSensitive((QsciLexerJSON*)self, (intptr_t)callback);
}

QColor* q_scilexerjson_color(void* self, int style) {
    return QsciLexerJSON_Color((QsciLexerJSON*)self, style);
}

QColor* q_scilexerjson_qbase_color(void* self, int style) {
    return QsciLexerJSON_QBaseColor((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJSON_OnColor((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_eol_fill(void* self, int style) {
    return QsciLexerJSON_EolFill((QsciLexerJSON*)self, style);
}

bool q_scilexerjson_qbase_eol_fill(void* self, int style) {
    return QsciLexerJSON_QBaseEolFill((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerJSON_OnEolFill((QsciLexerJSON*)self, (intptr_t)callback);
}

QFont* q_scilexerjson_font(void* self, int style) {
    return QsciLexerJSON_Font((QsciLexerJSON*)self, style);
}

QFont* q_scilexerjson_qbase_font(void* self, int style) {
    return QsciLexerJSON_QBaseFont((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJSON_OnFont((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_indentation_guide_view(void* self) {
    return QsciLexerJSON_IndentationGuideView((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_indentation_guide_view(void* self) {
    return QsciLexerJSON_QBaseIndentationGuideView((QsciLexerJSON*)self);
}

void q_scilexerjson_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnIndentationGuideView((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_default_style(void* self) {
    return QsciLexerJSON_DefaultStyle((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_default_style(void* self) {
    return QsciLexerJSON_QBaseDefaultStyle((QsciLexerJSON*)self);
}

void q_scilexerjson_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnDefaultStyle((QsciLexerJSON*)self, (intptr_t)callback);
}

QColor* q_scilexerjson_paper(void* self, int style) {
    return QsciLexerJSON_Paper((QsciLexerJSON*)self, style);
}

QColor* q_scilexerjson_qbase_paper(void* self, int style) {
    return QsciLexerJSON_QBasePaper((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJSON_OnPaper((QsciLexerJSON*)self, (intptr_t)callback);
}

QColor* q_scilexerjson_default_color2(void* self, int style) {
    return QsciLexerJSON_DefaultColor2((QsciLexerJSON*)self, style);
}

QColor* q_scilexerjson_qbase_default_color2(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultColor2((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJSON_OnDefaultColor2((QsciLexerJSON*)self, (intptr_t)callback);
}

QFont* q_scilexerjson_default_font2(void* self, int style) {
    return QsciLexerJSON_DefaultFont2((QsciLexerJSON*)self, style);
}

QFont* q_scilexerjson_qbase_default_font2(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultFont2((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerJSON_OnDefaultFont2((QsciLexerJSON*)self, (intptr_t)callback);
}

QColor* q_scilexerjson_default_paper2(void* self, int style) {
    return QsciLexerJSON_DefaultPaper2((QsciLexerJSON*)self, style);
}

QColor* q_scilexerjson_qbase_default_paper2(void* self, int style) {
    return QsciLexerJSON_QBaseDefaultPaper2((QsciLexerJSON*)self, style);
}

void q_scilexerjson_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerJSON_OnDefaultPaper2((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_editor(void* self, void* editor) {
    QsciLexerJSON_SetEditor((QsciLexerJSON*)self, (QsciScintilla*)editor);
}

void q_scilexerjson_qbase_set_editor(void* self, void* editor) {
    QsciLexerJSON_QBaseSetEditor((QsciLexerJSON*)self, (QsciScintilla*)editor);
}

void q_scilexerjson_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnSetEditor((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_style_bits_needed(void* self) {
    return QsciLexerJSON_StyleBitsNeeded((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_style_bits_needed(void* self) {
    return QsciLexerJSON_QBaseStyleBitsNeeded((QsciLexerJSON*)self);
}

void q_scilexerjson_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnStyleBitsNeeded((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_word_characters(void* self) {
    return QsciLexerJSON_WordCharacters((QsciLexerJSON*)self);
}

const char* q_scilexerjson_qbase_word_characters(void* self) {
    return QsciLexerJSON_QBaseWordCharacters((QsciLexerJSON*)self);
}

void q_scilexerjson_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerJSON_OnWordCharacters((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJSON_SetAutoIndentStyle((QsciLexerJSON*)self, autoindentstyle);
}

void q_scilexerjson_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerJSON_QBaseSetAutoIndentStyle((QsciLexerJSON*)self, autoindentstyle);
}

void q_scilexerjson_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerJSON_OnSetAutoIndentStyle((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_color(void* self, void* c, int style) {
    QsciLexerJSON_SetColor((QsciLexerJSON*)self, (QColor*)c, style);
}

void q_scilexerjson_qbase_set_color(void* self, void* c, int style) {
    QsciLexerJSON_QBaseSetColor((QsciLexerJSON*)self, (QColor*)c, style);
}

void q_scilexerjson_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJSON_OnSetColor((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJSON_SetEolFill((QsciLexerJSON*)self, eoffill, style);
}

void q_scilexerjson_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerJSON_QBaseSetEolFill((QsciLexerJSON*)self, eoffill, style);
}

void q_scilexerjson_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerJSON_OnSetEolFill((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_font(void* self, void* f, int style) {
    QsciLexerJSON_SetFont((QsciLexerJSON*)self, (QFont*)f, style);
}

void q_scilexerjson_qbase_set_font(void* self, void* f, int style) {
    QsciLexerJSON_QBaseSetFont((QsciLexerJSON*)self, (QFont*)f, style);
}

void q_scilexerjson_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJSON_OnSetFont((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_set_paper(void* self, void* c, int style) {
    QsciLexerJSON_SetPaper((QsciLexerJSON*)self, (QColor*)c, style);
}

void q_scilexerjson_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerJSON_QBaseSetPaper((QsciLexerJSON*)self, (QColor*)c, style);
}

void q_scilexerjson_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerJSON_OnSetPaper((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_event(void* self, void* event) {
    return QsciLexerJSON_Event((QsciLexerJSON*)self, (QEvent*)event);
}

bool q_scilexerjson_qbase_event(void* self, void* event) {
    return QsciLexerJSON_QBaseEvent((QsciLexerJSON*)self, (QEvent*)event);
}

void q_scilexerjson_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJSON_OnEvent((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJSON_EventFilter((QsciLexerJSON*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerjson_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerJSON_QBaseEventFilter((QsciLexerJSON*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerjson_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerJSON_OnEventFilter((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_timer_event(void* self, void* event) {
    QsciLexerJSON_TimerEvent((QsciLexerJSON*)self, (QTimerEvent*)event);
}

void q_scilexerjson_qbase_timer_event(void* self, void* event) {
    QsciLexerJSON_QBaseTimerEvent((QsciLexerJSON*)self, (QTimerEvent*)event);
}

void q_scilexerjson_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnTimerEvent((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_child_event(void* self, void* event) {
    QsciLexerJSON_ChildEvent((QsciLexerJSON*)self, (QChildEvent*)event);
}

void q_scilexerjson_qbase_child_event(void* self, void* event) {
    QsciLexerJSON_QBaseChildEvent((QsciLexerJSON*)self, (QChildEvent*)event);
}

void q_scilexerjson_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnChildEvent((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_custom_event(void* self, void* event) {
    QsciLexerJSON_CustomEvent((QsciLexerJSON*)self, (QEvent*)event);
}

void q_scilexerjson_qbase_custom_event(void* self, void* event) {
    QsciLexerJSON_QBaseCustomEvent((QsciLexerJSON*)self, (QEvent*)event);
}

void q_scilexerjson_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnCustomEvent((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_connect_notify(void* self, void* signal) {
    QsciLexerJSON_ConnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

void q_scilexerjson_qbase_connect_notify(void* self, void* signal) {
    QsciLexerJSON_QBaseConnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

void q_scilexerjson_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnConnectNotify((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_disconnect_notify(void* self, void* signal) {
    QsciLexerJSON_DisconnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

void q_scilexerjson_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerJSON_QBaseDisconnectNotify((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

void q_scilexerjson_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerJSON_OnDisconnectNotify((QsciLexerJSON*)self, (intptr_t)callback);
}

char* q_scilexerjson_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJSON_TextAsBytes((QsciLexerJSON*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerjson_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerJSON_QBaseTextAsBytes((QsciLexerJSON*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjson_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerJSON_OnTextAsBytes((QsciLexerJSON*)self, (intptr_t)callback);
}

const char* q_scilexerjson_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJSON_BytesAsText((QsciLexerJSON*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerjson_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerJSON_QBaseBytesAsText((QsciLexerJSON*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerjson_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerJSON_OnBytesAsText((QsciLexerJSON*)self, (intptr_t)callback);
}

QObject* q_scilexerjson_sender(void* self) {
    return QsciLexerJSON_Sender((QsciLexerJSON*)self);
}

QObject* q_scilexerjson_qbase_sender(void* self) {
    return QsciLexerJSON_QBaseSender((QsciLexerJSON*)self);
}

void q_scilexerjson_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerJSON_OnSender((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_sender_signal_index(void* self) {
    return QsciLexerJSON_SenderSignalIndex((QsciLexerJSON*)self);
}

int32_t q_scilexerjson_qbase_sender_signal_index(void* self) {
    return QsciLexerJSON_QBaseSenderSignalIndex((QsciLexerJSON*)self);
}

void q_scilexerjson_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerJSON_OnSenderSignalIndex((QsciLexerJSON*)self, (intptr_t)callback);
}

int32_t q_scilexerjson_receivers(void* self, const char* signal) {
    return QsciLexerJSON_Receivers((QsciLexerJSON*)self, signal);
}

int32_t q_scilexerjson_qbase_receivers(void* self, const char* signal) {
    return QsciLexerJSON_QBaseReceivers((QsciLexerJSON*)self, signal);
}

void q_scilexerjson_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerJSON_OnReceivers((QsciLexerJSON*)self, (intptr_t)callback);
}

bool q_scilexerjson_is_signal_connected(void* self, void* signal) {
    return QsciLexerJSON_IsSignalConnected((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

bool q_scilexerjson_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerJSON_QBaseIsSignalConnected((QsciLexerJSON*)self, (QMetaMethod*)signal);
}

void q_scilexerjson_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerJSON_OnIsSignalConnected((QsciLexerJSON*)self, (intptr_t)callback);
}

void q_scilexerjson_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerjson_delete(void* self) {
    QsciLexerJSON_Delete((QsciLexerJSON*)(self));
}
