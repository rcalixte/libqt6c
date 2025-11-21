#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerruby.hpp"
#include "libqscilexerruby.h"

QsciLexerRuby* q_scilexerruby_new() {
    return QsciLexerRuby_new();
}

QsciLexerRuby* q_scilexerruby_new2(void* parent) {
    return QsciLexerRuby_new2((QObject*)parent);
}

const QMetaObject* q_scilexerruby_meta_object(void* self) {
    return QsciLexerRuby_MetaObject((QsciLexerRuby*)self);
}

void* q_scilexerruby_metacast(void* self, const char* param1) {
    return QsciLexerRuby_Metacast((QsciLexerRuby*)self, param1);
}

int32_t q_scilexerruby_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerRuby_Metacall((QsciLexerRuby*)self, param1, param2, param3);
}

void q_scilexerruby_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerRuby_OnMetacall((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerRuby_QBaseMetacall((QsciLexerRuby*)self, param1, param2, param3);
}

const char* q_scilexerruby_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_language(void* self) {
    return QsciLexerRuby_Language((QsciLexerRuby*)self);
}

const char* q_scilexerruby_lexer(void* self) {
    return QsciLexerRuby_Lexer((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_end(void* self) {
    return QsciLexerRuby_BlockEnd((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_start(void* self) {
    return QsciLexerRuby_BlockStart((QsciLexerRuby*)self);
}

const char* q_scilexerruby_block_start_keyword(void* self) {
    return QsciLexerRuby_BlockStartKeyword((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_brace_style(void* self) {
    return QsciLexerRuby_BraceStyle((QsciLexerRuby*)self);
}

QColor* q_scilexerruby_default_color(void* self, int style) {
    return QsciLexerRuby_DefaultColor((QsciLexerRuby*)self, style);
}

bool q_scilexerruby_default_eol_fill(void* self, int style) {
    return QsciLexerRuby_DefaultEolFill((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_default_font(void* self, int style) {
    return QsciLexerRuby_DefaultFont((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_default_paper(void* self, int style) {
    return QsciLexerRuby_DefaultPaper((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_keywords(void* self, int set) {
    return QsciLexerRuby_Keywords((QsciLexerRuby*)self, set);
}

const char* q_scilexerruby_description(void* self, int style) {
    libqt_string _str = QsciLexerRuby_Description((QsciLexerRuby*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_refresh_properties(void* self) {
    QsciLexerRuby_RefreshProperties((QsciLexerRuby*)self);
}

void q_scilexerruby_set_fold_comments(void* self, bool fold) {
    QsciLexerRuby_SetFoldComments((QsciLexerRuby*)self, fold);
}

bool q_scilexerruby_fold_comments(void* self) {
    return QsciLexerRuby_FoldComments((QsciLexerRuby*)self);
}

void q_scilexerruby_set_fold_compact(void* self, bool fold) {
    QsciLexerRuby_SetFoldCompact((QsciLexerRuby*)self, fold);
}

bool q_scilexerruby_fold_compact(void* self) {
    return QsciLexerRuby_FoldCompact((QsciLexerRuby*)self);
}

bool q_scilexerruby_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_ReadProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerruby_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerRuby_OnReadProperties((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_QBaseReadProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerruby_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_WriteProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerruby_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerRuby_OnWriteProperties((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerRuby_QBaseWriteProperties((QsciLexerRuby*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerruby_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_block_end1(void* self, int* style) {
    return QsciLexerRuby_BlockEnd1((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_block_start1(void* self, int* style) {
    return QsciLexerRuby_BlockStart1((QsciLexerRuby*)self, style);
}

const char* q_scilexerruby_block_start_keyword1(void* self, int* style) {
    return QsciLexerRuby_BlockStartKeyword1((QsciLexerRuby*)self, style);
}

QsciAbstractAPIs* q_scilexerruby_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerruby_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerruby_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerruby_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerruby_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerruby_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerruby_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerruby_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerruby_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerruby_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerruby_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerruby_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerruby_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerruby_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerruby_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerruby_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerruby_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerruby_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerruby_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerruby_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerruby_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerruby_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerruby_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerruby_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerruby_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerruby_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerruby_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerruby_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerruby_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerruby_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerruby_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerruby_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerruby_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerruby_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerruby_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerruby_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerruby_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerruby_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerruby_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerruby_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerruby_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerruby_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerruby_dynamic_property_names");
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

QBindingStorage* q_scilexerruby_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerruby_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerruby_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerruby_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerruby_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerruby_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerruby_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerruby_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerruby_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerruby_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerruby_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerruby_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerruby_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_lexer_id(void* self) {
    return QsciLexerRuby_LexerId((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_lexer_id(void* self) {
    return QsciLexerRuby_QBaseLexerId((QsciLexerRuby*)self);
}

void q_scilexerruby_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnLexerId((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_auto_completion_fillups(void* self) {
    return QsciLexerRuby_AutoCompletionFillups((QsciLexerRuby*)self);
}

const char* q_scilexerruby_qbase_auto_completion_fillups(void* self) {
    return QsciLexerRuby_QBaseAutoCompletionFillups((QsciLexerRuby*)self);
}

void q_scilexerruby_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerRuby_OnAutoCompletionFillups((QsciLexerRuby*)self, (intptr_t)callback);
}

const char** q_scilexerruby_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerRuby_AutoCompletionWordSeparators((QsciLexerRuby*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerruby_auto_completion_word_separators");
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

const char** q_scilexerruby_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerRuby_QBaseAutoCompletionWordSeparators((QsciLexerRuby*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerruby_auto_completion_word_separators");
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

void q_scilexerruby_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerRuby_OnAutoCompletionWordSeparators((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_block_lookback(void* self) {
    return QsciLexerRuby_BlockLookback((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_block_lookback(void* self) {
    return QsciLexerRuby_QBaseBlockLookback((QsciLexerRuby*)self);
}

void q_scilexerruby_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnBlockLookback((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_case_sensitive(void* self) {
    return QsciLexerRuby_CaseSensitive((QsciLexerRuby*)self);
}

bool q_scilexerruby_qbase_case_sensitive(void* self) {
    return QsciLexerRuby_QBaseCaseSensitive((QsciLexerRuby*)self);
}

void q_scilexerruby_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerRuby_OnCaseSensitive((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_color(void* self, int style) {
    return QsciLexerRuby_Color((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_qbase_color(void* self, int style) {
    return QsciLexerRuby_QBaseColor((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerRuby_OnColor((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_eol_fill(void* self, int style) {
    return QsciLexerRuby_EolFill((QsciLexerRuby*)self, style);
}

bool q_scilexerruby_qbase_eol_fill(void* self, int style) {
    return QsciLexerRuby_QBaseEolFill((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerRuby_OnEolFill((QsciLexerRuby*)self, (intptr_t)callback);
}

QFont* q_scilexerruby_font(void* self, int style) {
    return QsciLexerRuby_Font((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_qbase_font(void* self, int style) {
    return QsciLexerRuby_QBaseFont((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerRuby_OnFont((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_indentation_guide_view(void* self) {
    return QsciLexerRuby_IndentationGuideView((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_indentation_guide_view(void* self) {
    return QsciLexerRuby_QBaseIndentationGuideView((QsciLexerRuby*)self);
}

void q_scilexerruby_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnIndentationGuideView((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_default_style(void* self) {
    return QsciLexerRuby_DefaultStyle((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_default_style(void* self) {
    return QsciLexerRuby_QBaseDefaultStyle((QsciLexerRuby*)self);
}

void q_scilexerruby_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnDefaultStyle((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_paper(void* self, int style) {
    return QsciLexerRuby_Paper((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_qbase_paper(void* self, int style) {
    return QsciLexerRuby_QBasePaper((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerRuby_OnPaper((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_default_color2(void* self, int style) {
    return QsciLexerRuby_DefaultColor2((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_qbase_default_color2(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultColor2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerRuby_OnDefaultColor2((QsciLexerRuby*)self, (intptr_t)callback);
}

QFont* q_scilexerruby_default_font2(void* self, int style) {
    return QsciLexerRuby_DefaultFont2((QsciLexerRuby*)self, style);
}

QFont* q_scilexerruby_qbase_default_font2(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultFont2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerRuby_OnDefaultFont2((QsciLexerRuby*)self, (intptr_t)callback);
}

QColor* q_scilexerruby_default_paper2(void* self, int style) {
    return QsciLexerRuby_DefaultPaper2((QsciLexerRuby*)self, style);
}

QColor* q_scilexerruby_qbase_default_paper2(void* self, int style) {
    return QsciLexerRuby_QBaseDefaultPaper2((QsciLexerRuby*)self, style);
}

void q_scilexerruby_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerRuby_OnDefaultPaper2((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_editor(void* self, void* editor) {
    QsciLexerRuby_SetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

void q_scilexerruby_qbase_set_editor(void* self, void* editor) {
    QsciLexerRuby_QBaseSetEditor((QsciLexerRuby*)self, (QsciScintilla*)editor);
}

void q_scilexerruby_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnSetEditor((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_style_bits_needed(void* self) {
    return QsciLexerRuby_StyleBitsNeeded((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_style_bits_needed(void* self) {
    return QsciLexerRuby_QBaseStyleBitsNeeded((QsciLexerRuby*)self);
}

void q_scilexerruby_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnStyleBitsNeeded((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_word_characters(void* self) {
    return QsciLexerRuby_WordCharacters((QsciLexerRuby*)self);
}

const char* q_scilexerruby_qbase_word_characters(void* self) {
    return QsciLexerRuby_QBaseWordCharacters((QsciLexerRuby*)self);
}

void q_scilexerruby_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerRuby_OnWordCharacters((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_SetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

void q_scilexerruby_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerRuby_QBaseSetAutoIndentStyle((QsciLexerRuby*)self, autoindentstyle);
}

void q_scilexerruby_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerRuby_OnSetAutoIndentStyle((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_color(void* self, void* c, int style) {
    QsciLexerRuby_SetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_qbase_set_color(void* self, void* c, int style) {
    QsciLexerRuby_QBaseSetColor((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerRuby_OnSetColor((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_SetEolFill((QsciLexerRuby*)self, eoffill, style);
}

void q_scilexerruby_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerRuby_QBaseSetEolFill((QsciLexerRuby*)self, eoffill, style);
}

void q_scilexerruby_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerRuby_OnSetEolFill((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_font(void* self, void* f, int style) {
    QsciLexerRuby_SetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

void q_scilexerruby_qbase_set_font(void* self, void* f, int style) {
    QsciLexerRuby_QBaseSetFont((QsciLexerRuby*)self, (QFont*)f, style);
}

void q_scilexerruby_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerRuby_OnSetFont((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_set_paper(void* self, void* c, int style) {
    QsciLexerRuby_SetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerRuby_QBaseSetPaper((QsciLexerRuby*)self, (QColor*)c, style);
}

void q_scilexerruby_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerRuby_OnSetPaper((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_event(void* self, void* event) {
    return QsciLexerRuby_Event((QsciLexerRuby*)self, (QEvent*)event);
}

bool q_scilexerruby_qbase_event(void* self, void* event) {
    return QsciLexerRuby_QBaseEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerRuby_OnEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_EventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerruby_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerRuby_QBaseEventFilter((QsciLexerRuby*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerruby_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerRuby_OnEventFilter((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_timer_event(void* self, void* event) {
    QsciLexerRuby_TimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

void q_scilexerruby_qbase_timer_event(void* self, void* event) {
    QsciLexerRuby_QBaseTimerEvent((QsciLexerRuby*)self, (QTimerEvent*)event);
}

void q_scilexerruby_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnTimerEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_child_event(void* self, void* event) {
    QsciLexerRuby_ChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

void q_scilexerruby_qbase_child_event(void* self, void* event) {
    QsciLexerRuby_QBaseChildEvent((QsciLexerRuby*)self, (QChildEvent*)event);
}

void q_scilexerruby_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnChildEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_custom_event(void* self, void* event) {
    QsciLexerRuby_CustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_qbase_custom_event(void* self, void* event) {
    QsciLexerRuby_QBaseCustomEvent((QsciLexerRuby*)self, (QEvent*)event);
}

void q_scilexerruby_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnCustomEvent((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_connect_notify(void* self, void* signal) {
    QsciLexerRuby_ConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_qbase_connect_notify(void* self, void* signal) {
    QsciLexerRuby_QBaseConnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnConnectNotify((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_disconnect_notify(void* self, void* signal) {
    QsciLexerRuby_DisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerRuby_QBaseDisconnectNotify((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerRuby_OnDisconnectNotify((QsciLexerRuby*)self, (intptr_t)callback);
}

char* q_scilexerruby_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerRuby_TextAsBytes((QsciLexerRuby*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerruby_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerRuby_QBaseTextAsBytes((QsciLexerRuby*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerRuby_OnTextAsBytes((QsciLexerRuby*)self, (intptr_t)callback);
}

const char* q_scilexerruby_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerRuby_BytesAsText((QsciLexerRuby*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerruby_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerRuby_QBaseBytesAsText((QsciLexerRuby*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerruby_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerRuby_OnBytesAsText((QsciLexerRuby*)self, (intptr_t)callback);
}

QObject* q_scilexerruby_sender(void* self) {
    return QsciLexerRuby_Sender((QsciLexerRuby*)self);
}

QObject* q_scilexerruby_qbase_sender(void* self) {
    return QsciLexerRuby_QBaseSender((QsciLexerRuby*)self);
}

void q_scilexerruby_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerRuby_OnSender((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_sender_signal_index(void* self) {
    return QsciLexerRuby_SenderSignalIndex((QsciLexerRuby*)self);
}

int32_t q_scilexerruby_qbase_sender_signal_index(void* self) {
    return QsciLexerRuby_QBaseSenderSignalIndex((QsciLexerRuby*)self);
}

void q_scilexerruby_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerRuby_OnSenderSignalIndex((QsciLexerRuby*)self, (intptr_t)callback);
}

int32_t q_scilexerruby_receivers(void* self, const char* signal) {
    return QsciLexerRuby_Receivers((QsciLexerRuby*)self, signal);
}

int32_t q_scilexerruby_qbase_receivers(void* self, const char* signal) {
    return QsciLexerRuby_QBaseReceivers((QsciLexerRuby*)self, signal);
}

void q_scilexerruby_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerRuby_OnReceivers((QsciLexerRuby*)self, (intptr_t)callback);
}

bool q_scilexerruby_is_signal_connected(void* self, void* signal) {
    return QsciLexerRuby_IsSignalConnected((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

bool q_scilexerruby_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerRuby_QBaseIsSignalConnected((QsciLexerRuby*)self, (QMetaMethod*)signal);
}

void q_scilexerruby_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerRuby_OnIsSignalConnected((QsciLexerRuby*)self, (intptr_t)callback);
}

void q_scilexerruby_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerruby_delete(void* self) {
    QsciLexerRuby_Delete((QsciLexerRuby*)(self));
}
