#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerpython.hpp"
#include "libqscilexerpython.h"

QsciLexerPython* q_scilexerpython_new() {
    return QsciLexerPython_new();
}

QsciLexerPython* q_scilexerpython_new2(void* parent) {
    return QsciLexerPython_new2((QObject*)parent);
}

const QMetaObject* q_scilexerpython_meta_object(void* self) {
    return QsciLexerPython_MetaObject((QsciLexerPython*)self);
}

void* q_scilexerpython_metacast(void* self, const char* param1) {
    return QsciLexerPython_Metacast((QsciLexerPython*)self, param1);
}

int32_t q_scilexerpython_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPython_Metacall((QsciLexerPython*)self, param1, param2, param3);
}

void q_scilexerpython_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerPython_OnMetacall((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPython_QBaseMetacall((QsciLexerPython*)self, param1, param2, param3);
}

const char* q_scilexerpython_tr(const char* s) {
    libqt_string _str = QsciLexerPython_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpython_language(void* self) {
    return QsciLexerPython_Language((QsciLexerPython*)self);
}

const char* q_scilexerpython_lexer(void* self) {
    return QsciLexerPython_Lexer((QsciLexerPython*)self);
}

const char** q_scilexerpython_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPython_AutoCompletionWordSeparators((QsciLexerPython*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerpython_auto_completion_word_separators");
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

int32_t q_scilexerpython_block_lookback(void* self) {
    return QsciLexerPython_BlockLookback((QsciLexerPython*)self);
}

const char* q_scilexerpython_block_start(void* self) {
    return QsciLexerPython_BlockStart((QsciLexerPython*)self);
}

int32_t q_scilexerpython_brace_style(void* self) {
    return QsciLexerPython_BraceStyle((QsciLexerPython*)self);
}

QColor* q_scilexerpython_default_color(void* self, int style) {
    return QsciLexerPython_DefaultColor((QsciLexerPython*)self, style);
}

bool q_scilexerpython_default_eol_fill(void* self, int style) {
    return QsciLexerPython_DefaultEolFill((QsciLexerPython*)self, style);
}

QFont* q_scilexerpython_default_font(void* self, int style) {
    return QsciLexerPython_DefaultFont((QsciLexerPython*)self, style);
}

QColor* q_scilexerpython_default_paper(void* self, int style) {
    return QsciLexerPython_DefaultPaper((QsciLexerPython*)self, style);
}

int32_t q_scilexerpython_indentation_guide_view(void* self) {
    return QsciLexerPython_IndentationGuideView((QsciLexerPython*)self);
}

void q_scilexerpython_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPython_OnIndentationGuideView((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_qbase_indentation_guide_view(void* self) {
    return QsciLexerPython_QBaseIndentationGuideView((QsciLexerPython*)self);
}

const char* q_scilexerpython_keywords(void* self, int set) {
    return QsciLexerPython_Keywords((QsciLexerPython*)self, set);
}

const char* q_scilexerpython_description(void* self, int style) {
    libqt_string _str = QsciLexerPython_Description((QsciLexerPython*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpython_refresh_properties(void* self) {
    QsciLexerPython_RefreshProperties((QsciLexerPython*)self);
}

bool q_scilexerpython_fold_comments(void* self) {
    return QsciLexerPython_FoldComments((QsciLexerPython*)self);
}

void q_scilexerpython_set_fold_compact(void* self, bool fold) {
    QsciLexerPython_SetFoldCompact((QsciLexerPython*)self, fold);
}

bool q_scilexerpython_fold_compact(void* self) {
    return QsciLexerPython_FoldCompact((QsciLexerPython*)self);
}

bool q_scilexerpython_fold_quotes(void* self) {
    return QsciLexerPython_FoldQuotes((QsciLexerPython*)self);
}

int32_t q_scilexerpython_indentation_warning(void* self) {
    return QsciLexerPython_IndentationWarning((QsciLexerPython*)self);
}

void q_scilexerpython_set_highlight_subidentifiers(void* self, bool enabled) {
    QsciLexerPython_SetHighlightSubidentifiers((QsciLexerPython*)self, enabled);
}

bool q_scilexerpython_highlight_subidentifiers(void* self) {
    return QsciLexerPython_HighlightSubidentifiers((QsciLexerPython*)self);
}

void q_scilexerpython_set_strings_over_newline_allowed(void* self, bool allowed) {
    QsciLexerPython_SetStringsOverNewlineAllowed((QsciLexerPython*)self, allowed);
}

bool q_scilexerpython_strings_over_newline_allowed(void* self) {
    return QsciLexerPython_StringsOverNewlineAllowed((QsciLexerPython*)self);
}

void q_scilexerpython_set_v2_unicode_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV2UnicodeAllowed((QsciLexerPython*)self, allowed);
}

bool q_scilexerpython_v2_unicode_allowed(void* self) {
    return QsciLexerPython_V2UnicodeAllowed((QsciLexerPython*)self);
}

void q_scilexerpython_set_v3_binary_octal_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV3BinaryOctalAllowed((QsciLexerPython*)self, allowed);
}

bool q_scilexerpython_v3_binary_octal_allowed(void* self) {
    return QsciLexerPython_V3BinaryOctalAllowed((QsciLexerPython*)self);
}

void q_scilexerpython_set_v3_bytes_allowed(void* self, bool allowed) {
    QsciLexerPython_SetV3BytesAllowed((QsciLexerPython*)self, allowed);
}

bool q_scilexerpython_v3_bytes_allowed(void* self) {
    return QsciLexerPython_V3BytesAllowed((QsciLexerPython*)self);
}

void q_scilexerpython_set_fold_comments(void* self, bool fold) {
    QsciLexerPython_SetFoldComments((QsciLexerPython*)self, fold);
}

void q_scilexerpython_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerPython_OnSetFoldComments((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPython_QBaseSetFoldComments((QsciLexerPython*)self, fold);
}

void q_scilexerpython_set_fold_quotes(void* self, bool fold) {
    QsciLexerPython_SetFoldQuotes((QsciLexerPython*)self, fold);
}

void q_scilexerpython_on_set_fold_quotes(void* self, void (*callback)(void*, bool)) {
    QsciLexerPython_OnSetFoldQuotes((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_qbase_set_fold_quotes(void* self, bool fold) {
    QsciLexerPython_QBaseSetFoldQuotes((QsciLexerPython*)self, fold);
}

void q_scilexerpython_set_indentation_warning(void* self, int32_t warn) {
    QsciLexerPython_SetIndentationWarning((QsciLexerPython*)self, warn);
}

void q_scilexerpython_on_set_indentation_warning(void* self, void (*callback)(void*, int32_t)) {
    QsciLexerPython_OnSetIndentationWarning((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_qbase_set_indentation_warning(void* self, int32_t warn) {
    QsciLexerPython_QBaseSetIndentationWarning((QsciLexerPython*)self, warn);
}

bool q_scilexerpython_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_ReadProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpython_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPython_OnReadProperties((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_QBaseReadProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerpython_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_WriteProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpython_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPython_OnWriteProperties((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPython_QBaseWriteProperties((QsciLexerPython*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerpython_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerPython_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpython_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerPython_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpython_block_start1(void* self, int* style) {
    return QsciLexerPython_BlockStart1((QsciLexerPython*)self, style);
}

QsciAbstractAPIs* q_scilexerpython_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerpython_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerpython_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerpython_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerpython_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerpython_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerpython_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerpython_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerpython_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerpython_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpython_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpython_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerpython_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpython_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerpython_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpython_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpython_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpython_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerpython_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerpython_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerpython_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerpython_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpython_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerpython_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerpython_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerpython_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerpython_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerpython_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerpython_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerpython_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerpython_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerpython_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerpython_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerpython_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerpython_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerpython_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerpython_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerpython_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerpython_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerpython_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerpython_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerpython_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerpython_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerpython_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerpython_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerpython_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerpython_dynamic_property_names");
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

QBindingStorage* q_scilexerpython_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerpython_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerpython_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerpython_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerpython_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerpython_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerpython_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerpython_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerpython_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerpython_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerpython_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerpython_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerpython_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_lexer_id(void* self) {
    return QsciLexerPython_LexerId((QsciLexerPython*)self);
}

int32_t q_scilexerpython_qbase_lexer_id(void* self) {
    return QsciLexerPython_QBaseLexerId((QsciLexerPython*)self);
}

void q_scilexerpython_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPython_OnLexerId((QsciLexerPython*)self, (intptr_t)callback);
}

const char* q_scilexerpython_auto_completion_fillups(void* self) {
    return QsciLexerPython_AutoCompletionFillups((QsciLexerPython*)self);
}

const char* q_scilexerpython_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPython_QBaseAutoCompletionFillups((QsciLexerPython*)self);
}

void q_scilexerpython_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPython_OnAutoCompletionFillups((QsciLexerPython*)self, (intptr_t)callback);
}

const char* q_scilexerpython_block_end(void* self, int* style) {
    return QsciLexerPython_BlockEnd((QsciLexerPython*)self, style);
}

const char* q_scilexerpython_qbase_block_end(void* self, int* style) {
    return QsciLexerPython_QBaseBlockEnd((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPython_OnBlockEnd((QsciLexerPython*)self, (intptr_t)callback);
}

const char* q_scilexerpython_block_start_keyword(void* self, int* style) {
    return QsciLexerPython_BlockStartKeyword((QsciLexerPython*)self, style);
}

const char* q_scilexerpython_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerPython_QBaseBlockStartKeyword((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerPython_OnBlockStartKeyword((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_case_sensitive(void* self) {
    return QsciLexerPython_CaseSensitive((QsciLexerPython*)self);
}

bool q_scilexerpython_qbase_case_sensitive(void* self) {
    return QsciLexerPython_QBaseCaseSensitive((QsciLexerPython*)self);
}

void q_scilexerpython_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPython_OnCaseSensitive((QsciLexerPython*)self, (intptr_t)callback);
}

QColor* q_scilexerpython_color(void* self, int style) {
    return QsciLexerPython_Color((QsciLexerPython*)self, style);
}

QColor* q_scilexerpython_qbase_color(void* self, int style) {
    return QsciLexerPython_QBaseColor((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPython_OnColor((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_eol_fill(void* self, int style) {
    return QsciLexerPython_EolFill((QsciLexerPython*)self, style);
}

bool q_scilexerpython_qbase_eol_fill(void* self, int style) {
    return QsciLexerPython_QBaseEolFill((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPython_OnEolFill((QsciLexerPython*)self, (intptr_t)callback);
}

QFont* q_scilexerpython_font(void* self, int style) {
    return QsciLexerPython_Font((QsciLexerPython*)self, style);
}

QFont* q_scilexerpython_qbase_font(void* self, int style) {
    return QsciLexerPython_QBaseFont((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPython_OnFont((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_default_style(void* self) {
    return QsciLexerPython_DefaultStyle((QsciLexerPython*)self);
}

int32_t q_scilexerpython_qbase_default_style(void* self) {
    return QsciLexerPython_QBaseDefaultStyle((QsciLexerPython*)self);
}

void q_scilexerpython_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPython_OnDefaultStyle((QsciLexerPython*)self, (intptr_t)callback);
}

QColor* q_scilexerpython_paper(void* self, int style) {
    return QsciLexerPython_Paper((QsciLexerPython*)self, style);
}

QColor* q_scilexerpython_qbase_paper(void* self, int style) {
    return QsciLexerPython_QBasePaper((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPython_OnPaper((QsciLexerPython*)self, (intptr_t)callback);
}

QColor* q_scilexerpython_default_color2(void* self, int style) {
    return QsciLexerPython_DefaultColor2((QsciLexerPython*)self, style);
}

QColor* q_scilexerpython_qbase_default_color2(void* self, int style) {
    return QsciLexerPython_QBaseDefaultColor2((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPython_OnDefaultColor2((QsciLexerPython*)self, (intptr_t)callback);
}

QFont* q_scilexerpython_default_font2(void* self, int style) {
    return QsciLexerPython_DefaultFont2((QsciLexerPython*)self, style);
}

QFont* q_scilexerpython_qbase_default_font2(void* self, int style) {
    return QsciLexerPython_QBaseDefaultFont2((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPython_OnDefaultFont2((QsciLexerPython*)self, (intptr_t)callback);
}

QColor* q_scilexerpython_default_paper2(void* self, int style) {
    return QsciLexerPython_DefaultPaper2((QsciLexerPython*)self, style);
}

QColor* q_scilexerpython_qbase_default_paper2(void* self, int style) {
    return QsciLexerPython_QBaseDefaultPaper2((QsciLexerPython*)self, style);
}

void q_scilexerpython_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPython_OnDefaultPaper2((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_editor(void* self, void* editor) {
    QsciLexerPython_SetEditor((QsciLexerPython*)self, (QsciScintilla*)editor);
}

void q_scilexerpython_qbase_set_editor(void* self, void* editor) {
    QsciLexerPython_QBaseSetEditor((QsciLexerPython*)self, (QsciScintilla*)editor);
}

void q_scilexerpython_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnSetEditor((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_style_bits_needed(void* self) {
    return QsciLexerPython_StyleBitsNeeded((QsciLexerPython*)self);
}

int32_t q_scilexerpython_qbase_style_bits_needed(void* self) {
    return QsciLexerPython_QBaseStyleBitsNeeded((QsciLexerPython*)self);
}

void q_scilexerpython_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPython_OnStyleBitsNeeded((QsciLexerPython*)self, (intptr_t)callback);
}

const char* q_scilexerpython_word_characters(void* self) {
    return QsciLexerPython_WordCharacters((QsciLexerPython*)self);
}

const char* q_scilexerpython_qbase_word_characters(void* self) {
    return QsciLexerPython_QBaseWordCharacters((QsciLexerPython*)self);
}

void q_scilexerpython_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerPython_OnWordCharacters((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPython_SetAutoIndentStyle((QsciLexerPython*)self, autoindentstyle);
}

void q_scilexerpython_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPython_QBaseSetAutoIndentStyle((QsciLexerPython*)self, autoindentstyle);
}

void q_scilexerpython_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPython_OnSetAutoIndentStyle((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_color(void* self, void* c, int style) {
    QsciLexerPython_SetColor((QsciLexerPython*)self, (QColor*)c, style);
}

void q_scilexerpython_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPython_QBaseSetColor((QsciLexerPython*)self, (QColor*)c, style);
}

void q_scilexerpython_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPython_OnSetColor((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPython_SetEolFill((QsciLexerPython*)self, eoffill, style);
}

void q_scilexerpython_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPython_QBaseSetEolFill((QsciLexerPython*)self, eoffill, style);
}

void q_scilexerpython_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPython_OnSetEolFill((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_font(void* self, void* f, int style) {
    QsciLexerPython_SetFont((QsciLexerPython*)self, (QFont*)f, style);
}

void q_scilexerpython_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPython_QBaseSetFont((QsciLexerPython*)self, (QFont*)f, style);
}

void q_scilexerpython_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPython_OnSetFont((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_set_paper(void* self, void* c, int style) {
    QsciLexerPython_SetPaper((QsciLexerPython*)self, (QColor*)c, style);
}

void q_scilexerpython_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPython_QBaseSetPaper((QsciLexerPython*)self, (QColor*)c, style);
}

void q_scilexerpython_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPython_OnSetPaper((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_event(void* self, void* event) {
    return QsciLexerPython_Event((QsciLexerPython*)self, (QEvent*)event);
}

bool q_scilexerpython_qbase_event(void* self, void* event) {
    return QsciLexerPython_QBaseEvent((QsciLexerPython*)self, (QEvent*)event);
}

void q_scilexerpython_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPython_OnEvent((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPython_EventFilter((QsciLexerPython*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerpython_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPython_QBaseEventFilter((QsciLexerPython*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerpython_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPython_OnEventFilter((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_timer_event(void* self, void* event) {
    QsciLexerPython_TimerEvent((QsciLexerPython*)self, (QTimerEvent*)event);
}

void q_scilexerpython_qbase_timer_event(void* self, void* event) {
    QsciLexerPython_QBaseTimerEvent((QsciLexerPython*)self, (QTimerEvent*)event);
}

void q_scilexerpython_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnTimerEvent((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_child_event(void* self, void* event) {
    QsciLexerPython_ChildEvent((QsciLexerPython*)self, (QChildEvent*)event);
}

void q_scilexerpython_qbase_child_event(void* self, void* event) {
    QsciLexerPython_QBaseChildEvent((QsciLexerPython*)self, (QChildEvent*)event);
}

void q_scilexerpython_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnChildEvent((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_custom_event(void* self, void* event) {
    QsciLexerPython_CustomEvent((QsciLexerPython*)self, (QEvent*)event);
}

void q_scilexerpython_qbase_custom_event(void* self, void* event) {
    QsciLexerPython_QBaseCustomEvent((QsciLexerPython*)self, (QEvent*)event);
}

void q_scilexerpython_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnCustomEvent((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_connect_notify(void* self, void* signal) {
    QsciLexerPython_ConnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

void q_scilexerpython_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPython_QBaseConnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

void q_scilexerpython_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnConnectNotify((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_disconnect_notify(void* self, void* signal) {
    QsciLexerPython_DisconnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

void q_scilexerpython_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPython_QBaseDisconnectNotify((QsciLexerPython*)self, (QMetaMethod*)signal);
}

void q_scilexerpython_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPython_OnDisconnectNotify((QsciLexerPython*)self, (intptr_t)callback);
}

char* q_scilexerpython_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPython_TextAsBytes((QsciLexerPython*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerpython_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPython_QBaseTextAsBytes((QsciLexerPython*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpython_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPython_OnTextAsBytes((QsciLexerPython*)self, (intptr_t)callback);
}

const char* q_scilexerpython_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPython_BytesAsText((QsciLexerPython*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpython_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPython_QBaseBytesAsText((QsciLexerPython*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpython_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPython_OnBytesAsText((QsciLexerPython*)self, (intptr_t)callback);
}

QObject* q_scilexerpython_sender(void* self) {
    return QsciLexerPython_Sender((QsciLexerPython*)self);
}

QObject* q_scilexerpython_qbase_sender(void* self) {
    return QsciLexerPython_QBaseSender((QsciLexerPython*)self);
}

void q_scilexerpython_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPython_OnSender((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_sender_signal_index(void* self) {
    return QsciLexerPython_SenderSignalIndex((QsciLexerPython*)self);
}

int32_t q_scilexerpython_qbase_sender_signal_index(void* self) {
    return QsciLexerPython_QBaseSenderSignalIndex((QsciLexerPython*)self);
}

void q_scilexerpython_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPython_OnSenderSignalIndex((QsciLexerPython*)self, (intptr_t)callback);
}

int32_t q_scilexerpython_receivers(void* self, const char* signal) {
    return QsciLexerPython_Receivers((QsciLexerPython*)self, signal);
}

int32_t q_scilexerpython_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPython_QBaseReceivers((QsciLexerPython*)self, signal);
}

void q_scilexerpython_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPython_OnReceivers((QsciLexerPython*)self, (intptr_t)callback);
}

bool q_scilexerpython_is_signal_connected(void* self, void* signal) {
    return QsciLexerPython_IsSignalConnected((QsciLexerPython*)self, (QMetaMethod*)signal);
}

bool q_scilexerpython_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPython_QBaseIsSignalConnected((QsciLexerPython*)self, (QMetaMethod*)signal);
}

void q_scilexerpython_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPython_OnIsSignalConnected((QsciLexerPython*)self, (intptr_t)callback);
}

void q_scilexerpython_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerpython_delete(void* self) {
    QsciLexerPython_Delete((QsciLexerPython*)(self));
}
