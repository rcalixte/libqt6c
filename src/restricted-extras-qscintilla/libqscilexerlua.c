#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerlua.hpp"
#include "libqscilexerlua.h"

QsciLexerLua* q_scilexerlua_new() {
    return QsciLexerLua_new();
}

QsciLexerLua* q_scilexerlua_new2(void* parent) {
    return QsciLexerLua_new2((QObject*)parent);
}

const QMetaObject* q_scilexerlua_meta_object(void* self) {
    return QsciLexerLua_MetaObject((QsciLexerLua*)self);
}

void* q_scilexerlua_metacast(void* self, const char* param1) {
    return QsciLexerLua_Metacast((QsciLexerLua*)self, param1);
}

int32_t q_scilexerlua_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerLua_Metacall((QsciLexerLua*)self, param1, param2, param3);
}

void q_scilexerlua_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerLua_OnMetacall((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerLua_QBaseMetacall((QsciLexerLua*)self, param1, param2, param3);
}

const char* q_scilexerlua_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerlua_language(void* self) {
    return QsciLexerLua_Language((QsciLexerLua*)self);
}

const char* q_scilexerlua_lexer(void* self) {
    return QsciLexerLua_Lexer((QsciLexerLua*)self);
}

const char** q_scilexerlua_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerLua_AutoCompletionWordSeparators((QsciLexerLua*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerlua_auto_completion_word_separators\n");
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

const char* q_scilexerlua_block_start(void* self) {
    return QsciLexerLua_BlockStart((QsciLexerLua*)self);
}

int32_t q_scilexerlua_brace_style(void* self) {
    return QsciLexerLua_BraceStyle((QsciLexerLua*)self);
}

QColor* q_scilexerlua_default_color(void* self, int style) {
    return QsciLexerLua_DefaultColor((QsciLexerLua*)self, style);
}

bool q_scilexerlua_default_eol_fill(void* self, int style) {
    return QsciLexerLua_DefaultEolFill((QsciLexerLua*)self, style);
}

QFont* q_scilexerlua_default_font(void* self, int style) {
    return QsciLexerLua_DefaultFont((QsciLexerLua*)self, style);
}

QColor* q_scilexerlua_default_paper(void* self, int style) {
    return QsciLexerLua_DefaultPaper((QsciLexerLua*)self, style);
}

const char* q_scilexerlua_keywords(void* self, int set) {
    return QsciLexerLua_Keywords((QsciLexerLua*)self, set);
}

const char* q_scilexerlua_description(void* self, int style) {
    libqt_string _str = QsciLexerLua_Description((QsciLexerLua*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerlua_refresh_properties(void* self) {
    QsciLexerLua_RefreshProperties((QsciLexerLua*)self);
}

bool q_scilexerlua_fold_compact(void* self) {
    return QsciLexerLua_FoldCompact((QsciLexerLua*)self);
}

void q_scilexerlua_set_fold_compact(void* self, bool fold) {
    QsciLexerLua_SetFoldCompact((QsciLexerLua*)self, fold);
}

void q_scilexerlua_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerLua_OnSetFoldCompact((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerLua_QBaseSetFoldCompact((QsciLexerLua*)self, fold);
}

bool q_scilexerlua_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_ReadProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerlua_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerLua_OnReadProperties((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_QBaseReadProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerlua_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_WriteProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerlua_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerLua_OnWriteProperties((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerLua_QBaseWriteProperties((QsciLexerLua*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerlua_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerlua_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerlua_block_start1(void* self, int* style) {
    return QsciLexerLua_BlockStart1((QsciLexerLua*)self, style);
}

QsciAbstractAPIs* q_scilexerlua_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerlua_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerlua_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerlua_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerlua_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerlua_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerlua_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerlua_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerlua_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerlua_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerlua_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerlua_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerlua_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerlua_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerlua_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerlua_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerlua_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerlua_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerlua_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerlua_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerlua_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerlua_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerlua_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerlua_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerlua_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerlua_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerlua_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerlua_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerlua_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerlua_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerlua_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerlua_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerlua_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerlua_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerlua_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerlua_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerlua_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerlua_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerlua_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerlua_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerlua_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerlua_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerlua_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerlua_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerlua_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerlua_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerlua_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerlua_dynamic_property_names\n");
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

QBindingStorage* q_scilexerlua_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerlua_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerlua_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerlua_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerlua_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerlua_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerlua_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerlua_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerlua_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerlua_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerlua_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerlua_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerlua_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerlua_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_lexer_id(void* self) {
    return QsciLexerLua_LexerId((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_lexer_id(void* self) {
    return QsciLexerLua_QBaseLexerId((QsciLexerLua*)self);
}

void q_scilexerlua_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnLexerId((QsciLexerLua*)self, (intptr_t)callback);
}

const char* q_scilexerlua_auto_completion_fillups(void* self) {
    return QsciLexerLua_AutoCompletionFillups((QsciLexerLua*)self);
}

const char* q_scilexerlua_qbase_auto_completion_fillups(void* self) {
    return QsciLexerLua_QBaseAutoCompletionFillups((QsciLexerLua*)self);
}

void q_scilexerlua_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerLua_OnAutoCompletionFillups((QsciLexerLua*)self, (intptr_t)callback);
}

const char* q_scilexerlua_block_end(void* self, int* style) {
    return QsciLexerLua_BlockEnd((QsciLexerLua*)self, style);
}

const char* q_scilexerlua_qbase_block_end(void* self, int* style) {
    return QsciLexerLua_QBaseBlockEnd((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerLua_OnBlockEnd((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_block_lookback(void* self) {
    return QsciLexerLua_BlockLookback((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_block_lookback(void* self) {
    return QsciLexerLua_QBaseBlockLookback((QsciLexerLua*)self);
}

void q_scilexerlua_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnBlockLookback((QsciLexerLua*)self, (intptr_t)callback);
}

const char* q_scilexerlua_block_start_keyword(void* self, int* style) {
    return QsciLexerLua_BlockStartKeyword((QsciLexerLua*)self, style);
}

const char* q_scilexerlua_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerLua_QBaseBlockStartKeyword((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerLua_OnBlockStartKeyword((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_case_sensitive(void* self) {
    return QsciLexerLua_CaseSensitive((QsciLexerLua*)self);
}

bool q_scilexerlua_qbase_case_sensitive(void* self) {
    return QsciLexerLua_QBaseCaseSensitive((QsciLexerLua*)self);
}

void q_scilexerlua_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerLua_OnCaseSensitive((QsciLexerLua*)self, (intptr_t)callback);
}

QColor* q_scilexerlua_color(void* self, int style) {
    return QsciLexerLua_Color((QsciLexerLua*)self, style);
}

QColor* q_scilexerlua_qbase_color(void* self, int style) {
    return QsciLexerLua_QBaseColor((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerLua_OnColor((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_eol_fill(void* self, int style) {
    return QsciLexerLua_EolFill((QsciLexerLua*)self, style);
}

bool q_scilexerlua_qbase_eol_fill(void* self, int style) {
    return QsciLexerLua_QBaseEolFill((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerLua_OnEolFill((QsciLexerLua*)self, (intptr_t)callback);
}

QFont* q_scilexerlua_font(void* self, int style) {
    return QsciLexerLua_Font((QsciLexerLua*)self, style);
}

QFont* q_scilexerlua_qbase_font(void* self, int style) {
    return QsciLexerLua_QBaseFont((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerLua_OnFont((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_indentation_guide_view(void* self) {
    return QsciLexerLua_IndentationGuideView((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_indentation_guide_view(void* self) {
    return QsciLexerLua_QBaseIndentationGuideView((QsciLexerLua*)self);
}

void q_scilexerlua_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnIndentationGuideView((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_default_style(void* self) {
    return QsciLexerLua_DefaultStyle((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_default_style(void* self) {
    return QsciLexerLua_QBaseDefaultStyle((QsciLexerLua*)self);
}

void q_scilexerlua_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnDefaultStyle((QsciLexerLua*)self, (intptr_t)callback);
}

QColor* q_scilexerlua_paper(void* self, int style) {
    return QsciLexerLua_Paper((QsciLexerLua*)self, style);
}

QColor* q_scilexerlua_qbase_paper(void* self, int style) {
    return QsciLexerLua_QBasePaper((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerLua_OnPaper((QsciLexerLua*)self, (intptr_t)callback);
}

QColor* q_scilexerlua_default_color2(void* self, int style) {
    return QsciLexerLua_DefaultColor2((QsciLexerLua*)self, style);
}

QColor* q_scilexerlua_qbase_default_color2(void* self, int style) {
    return QsciLexerLua_QBaseDefaultColor2((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerLua_OnDefaultColor2((QsciLexerLua*)self, (intptr_t)callback);
}

QFont* q_scilexerlua_default_font2(void* self, int style) {
    return QsciLexerLua_DefaultFont2((QsciLexerLua*)self, style);
}

QFont* q_scilexerlua_qbase_default_font2(void* self, int style) {
    return QsciLexerLua_QBaseDefaultFont2((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerLua_OnDefaultFont2((QsciLexerLua*)self, (intptr_t)callback);
}

QColor* q_scilexerlua_default_paper2(void* self, int style) {
    return QsciLexerLua_DefaultPaper2((QsciLexerLua*)self, style);
}

QColor* q_scilexerlua_qbase_default_paper2(void* self, int style) {
    return QsciLexerLua_QBaseDefaultPaper2((QsciLexerLua*)self, style);
}

void q_scilexerlua_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerLua_OnDefaultPaper2((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_editor(void* self, void* editor) {
    QsciLexerLua_SetEditor((QsciLexerLua*)self, (QsciScintilla*)editor);
}

void q_scilexerlua_qbase_set_editor(void* self, void* editor) {
    QsciLexerLua_QBaseSetEditor((QsciLexerLua*)self, (QsciScintilla*)editor);
}

void q_scilexerlua_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnSetEditor((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_style_bits_needed(void* self) {
    return QsciLexerLua_StyleBitsNeeded((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_style_bits_needed(void* self) {
    return QsciLexerLua_QBaseStyleBitsNeeded((QsciLexerLua*)self);
}

void q_scilexerlua_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnStyleBitsNeeded((QsciLexerLua*)self, (intptr_t)callback);
}

const char* q_scilexerlua_word_characters(void* self) {
    return QsciLexerLua_WordCharacters((QsciLexerLua*)self);
}

const char* q_scilexerlua_qbase_word_characters(void* self) {
    return QsciLexerLua_QBaseWordCharacters((QsciLexerLua*)self);
}

void q_scilexerlua_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerLua_OnWordCharacters((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerLua_SetAutoIndentStyle((QsciLexerLua*)self, autoindentstyle);
}

void q_scilexerlua_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerLua_QBaseSetAutoIndentStyle((QsciLexerLua*)self, autoindentstyle);
}

void q_scilexerlua_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerLua_OnSetAutoIndentStyle((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_color(void* self, void* c, int style) {
    QsciLexerLua_SetColor((QsciLexerLua*)self, (QColor*)c, style);
}

void q_scilexerlua_qbase_set_color(void* self, void* c, int style) {
    QsciLexerLua_QBaseSetColor((QsciLexerLua*)self, (QColor*)c, style);
}

void q_scilexerlua_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerLua_OnSetColor((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerLua_SetEolFill((QsciLexerLua*)self, eoffill, style);
}

void q_scilexerlua_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerLua_QBaseSetEolFill((QsciLexerLua*)self, eoffill, style);
}

void q_scilexerlua_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerLua_OnSetEolFill((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_font(void* self, void* f, int style) {
    QsciLexerLua_SetFont((QsciLexerLua*)self, (QFont*)f, style);
}

void q_scilexerlua_qbase_set_font(void* self, void* f, int style) {
    QsciLexerLua_QBaseSetFont((QsciLexerLua*)self, (QFont*)f, style);
}

void q_scilexerlua_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerLua_OnSetFont((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_set_paper(void* self, void* c, int style) {
    QsciLexerLua_SetPaper((QsciLexerLua*)self, (QColor*)c, style);
}

void q_scilexerlua_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerLua_QBaseSetPaper((QsciLexerLua*)self, (QColor*)c, style);
}

void q_scilexerlua_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerLua_OnSetPaper((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_event(void* self, void* event) {
    return QsciLexerLua_Event((QsciLexerLua*)self, (QEvent*)event);
}

bool q_scilexerlua_qbase_event(void* self, void* event) {
    return QsciLexerLua_QBaseEvent((QsciLexerLua*)self, (QEvent*)event);
}

void q_scilexerlua_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerLua_OnEvent((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_event_filter(void* self, void* watched, void* event) {
    return QsciLexerLua_EventFilter((QsciLexerLua*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerlua_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerLua_QBaseEventFilter((QsciLexerLua*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerlua_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerLua_OnEventFilter((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_timer_event(void* self, void* event) {
    QsciLexerLua_TimerEvent((QsciLexerLua*)self, (QTimerEvent*)event);
}

void q_scilexerlua_qbase_timer_event(void* self, void* event) {
    QsciLexerLua_QBaseTimerEvent((QsciLexerLua*)self, (QTimerEvent*)event);
}

void q_scilexerlua_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnTimerEvent((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_child_event(void* self, void* event) {
    QsciLexerLua_ChildEvent((QsciLexerLua*)self, (QChildEvent*)event);
}

void q_scilexerlua_qbase_child_event(void* self, void* event) {
    QsciLexerLua_QBaseChildEvent((QsciLexerLua*)self, (QChildEvent*)event);
}

void q_scilexerlua_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnChildEvent((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_custom_event(void* self, void* event) {
    QsciLexerLua_CustomEvent((QsciLexerLua*)self, (QEvent*)event);
}

void q_scilexerlua_qbase_custom_event(void* self, void* event) {
    QsciLexerLua_QBaseCustomEvent((QsciLexerLua*)self, (QEvent*)event);
}

void q_scilexerlua_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnCustomEvent((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_connect_notify(void* self, void* signal) {
    QsciLexerLua_ConnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

void q_scilexerlua_qbase_connect_notify(void* self, void* signal) {
    QsciLexerLua_QBaseConnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

void q_scilexerlua_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnConnectNotify((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_disconnect_notify(void* self, void* signal) {
    QsciLexerLua_DisconnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

void q_scilexerlua_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerLua_QBaseDisconnectNotify((QsciLexerLua*)self, (QMetaMethod*)signal);
}

void q_scilexerlua_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerLua_OnDisconnectNotify((QsciLexerLua*)self, (intptr_t)callback);
}

char* q_scilexerlua_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerLua_TextAsBytes((QsciLexerLua*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerlua_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerLua_QBaseTextAsBytes((QsciLexerLua*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerlua_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerLua_OnTextAsBytes((QsciLexerLua*)self, (intptr_t)callback);
}

const char* q_scilexerlua_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerLua_BytesAsText((QsciLexerLua*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerlua_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerLua_QBaseBytesAsText((QsciLexerLua*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerlua_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerLua_OnBytesAsText((QsciLexerLua*)self, (intptr_t)callback);
}

QObject* q_scilexerlua_sender(void* self) {
    return QsciLexerLua_Sender((QsciLexerLua*)self);
}

QObject* q_scilexerlua_qbase_sender(void* self) {
    return QsciLexerLua_QBaseSender((QsciLexerLua*)self);
}

void q_scilexerlua_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerLua_OnSender((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_sender_signal_index(void* self) {
    return QsciLexerLua_SenderSignalIndex((QsciLexerLua*)self);
}

int32_t q_scilexerlua_qbase_sender_signal_index(void* self) {
    return QsciLexerLua_QBaseSenderSignalIndex((QsciLexerLua*)self);
}

void q_scilexerlua_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerLua_OnSenderSignalIndex((QsciLexerLua*)self, (intptr_t)callback);
}

int32_t q_scilexerlua_receivers(void* self, const char* signal) {
    return QsciLexerLua_Receivers((QsciLexerLua*)self, signal);
}

int32_t q_scilexerlua_qbase_receivers(void* self, const char* signal) {
    return QsciLexerLua_QBaseReceivers((QsciLexerLua*)self, signal);
}

void q_scilexerlua_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerLua_OnReceivers((QsciLexerLua*)self, (intptr_t)callback);
}

bool q_scilexerlua_is_signal_connected(void* self, void* signal) {
    return QsciLexerLua_IsSignalConnected((QsciLexerLua*)self, (QMetaMethod*)signal);
}

bool q_scilexerlua_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerLua_QBaseIsSignalConnected((QsciLexerLua*)self, (QMetaMethod*)signal);
}

void q_scilexerlua_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerLua_OnIsSignalConnected((QsciLexerLua*)self, (intptr_t)callback);
}

void q_scilexerlua_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerlua_delete(void* self) {
    QsciLexerLua_Delete((QsciLexerLua*)(self));
}
