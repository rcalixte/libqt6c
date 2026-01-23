#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerpascal.hpp"
#include "libqscilexerpascal.h"

QsciLexerPascal* q_scilexerpascal_new() {
    return QsciLexerPascal_new();
}

QsciLexerPascal* q_scilexerpascal_new2(void* parent) {
    return QsciLexerPascal_new2((QObject*)parent);
}

const QMetaObject* q_scilexerpascal_meta_object(void* self) {
    return QsciLexerPascal_MetaObject((QsciLexerPascal*)self);
}

void* q_scilexerpascal_metacast(void* self, const char* param1) {
    return QsciLexerPascal_Metacast((QsciLexerPascal*)self, param1);
}

int32_t q_scilexerpascal_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPascal_Metacall((QsciLexerPascal*)self, param1, param2, param3);
}

void q_scilexerpascal_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerPascal_OnMetacall((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerPascal_QBaseMetacall((QsciLexerPascal*)self, param1, param2, param3);
}

const char* q_scilexerpascal_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpascal_language(void* self) {
    return QsciLexerPascal_Language((QsciLexerPascal*)self);
}

const char* q_scilexerpascal_lexer(void* self) {
    return QsciLexerPascal_Lexer((QsciLexerPascal*)self);
}

const char** q_scilexerpascal_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerPascal_AutoCompletionWordSeparators((QsciLexerPascal*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpascal_auto_completion_word_separators\n");
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

const char* q_scilexerpascal_block_end(void* self) {
    return QsciLexerPascal_BlockEnd((QsciLexerPascal*)self);
}

const char* q_scilexerpascal_block_start(void* self) {
    return QsciLexerPascal_BlockStart((QsciLexerPascal*)self);
}

const char* q_scilexerpascal_block_start_keyword(void* self) {
    return QsciLexerPascal_BlockStartKeyword((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_brace_style(void* self) {
    return QsciLexerPascal_BraceStyle((QsciLexerPascal*)self);
}

QColor* q_scilexerpascal_default_color(void* self, int style) {
    return QsciLexerPascal_DefaultColor((QsciLexerPascal*)self, style);
}

bool q_scilexerpascal_default_eol_fill(void* self, int style) {
    return QsciLexerPascal_DefaultEolFill((QsciLexerPascal*)self, style);
}

QFont* q_scilexerpascal_default_font(void* self, int style) {
    return QsciLexerPascal_DefaultFont((QsciLexerPascal*)self, style);
}

QColor* q_scilexerpascal_default_paper(void* self, int style) {
    return QsciLexerPascal_DefaultPaper((QsciLexerPascal*)self, style);
}

const char* q_scilexerpascal_keywords(void* self, int set) {
    return QsciLexerPascal_Keywords((QsciLexerPascal*)self, set);
}

const char* q_scilexerpascal_description(void* self, int style) {
    libqt_string _str = QsciLexerPascal_Description((QsciLexerPascal*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpascal_refresh_properties(void* self) {
    QsciLexerPascal_RefreshProperties((QsciLexerPascal*)self);
}

bool q_scilexerpascal_fold_comments(void* self) {
    return QsciLexerPascal_FoldComments((QsciLexerPascal*)self);
}

bool q_scilexerpascal_fold_compact(void* self) {
    return QsciLexerPascal_FoldCompact((QsciLexerPascal*)self);
}

bool q_scilexerpascal_fold_preprocessor(void* self) {
    return QsciLexerPascal_FoldPreprocessor((QsciLexerPascal*)self);
}

void q_scilexerpascal_set_smart_highlighting(void* self, bool enabled) {
    QsciLexerPascal_SetSmartHighlighting((QsciLexerPascal*)self, enabled);
}

bool q_scilexerpascal_smart_highlighting(void* self) {
    return QsciLexerPascal_SmartHighlighting((QsciLexerPascal*)self);
}

void q_scilexerpascal_set_fold_comments(void* self, bool fold) {
    QsciLexerPascal_SetFoldComments((QsciLexerPascal*)self, fold);
}

void q_scilexerpascal_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerPascal_OnSetFoldComments((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldComments((QsciLexerPascal*)self, fold);
}

void q_scilexerpascal_set_fold_compact(void* self, bool fold) {
    QsciLexerPascal_SetFoldCompact((QsciLexerPascal*)self, fold);
}

void q_scilexerpascal_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerPascal_OnSetFoldCompact((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldCompact((QsciLexerPascal*)self, fold);
}

void q_scilexerpascal_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerPascal_SetFoldPreprocessor((QsciLexerPascal*)self, fold);
}

void q_scilexerpascal_on_set_fold_preprocessor(void* self, void (*callback)(void*, bool)) {
    QsciLexerPascal_OnSetFoldPreprocessor((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_qbase_set_fold_preprocessor(void* self, bool fold) {
    QsciLexerPascal_QBaseSetFoldPreprocessor((QsciLexerPascal*)self, fold);
}

bool q_scilexerpascal_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_ReadProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpascal_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPascal_OnReadProperties((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_QBaseReadProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerpascal_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_WriteProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerpascal_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerPascal_OnWriteProperties((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerPascal_QBaseWriteProperties((QsciLexerPascal*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerpascal_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpascal_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpascal_block_end1(void* self, int* style) {
    return QsciLexerPascal_BlockEnd1((QsciLexerPascal*)self, style);
}

const char* q_scilexerpascal_block_start1(void* self, int* style) {
    return QsciLexerPascal_BlockStart1((QsciLexerPascal*)self, style);
}

const char* q_scilexerpascal_block_start_keyword1(void* self, int* style) {
    return QsciLexerPascal_BlockStartKeyword1((QsciLexerPascal*)self, style);
}

QsciAbstractAPIs* q_scilexerpascal_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerpascal_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerpascal_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerpascal_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerpascal_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerpascal_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerpascal_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerpascal_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerpascal_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerpascal_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpascal_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpascal_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerpascal_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpascal_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerpascal_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpascal_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerpascal_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerpascal_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerpascal_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerpascal_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerpascal_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerpascal_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpascal_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerpascal_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerpascal_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerpascal_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerpascal_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerpascal_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerpascal_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerpascal_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerpascal_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerpascal_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerpascal_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerpascal_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerpascal_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerpascal_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerpascal_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerpascal_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerpascal_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerpascal_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerpascal_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerpascal_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerpascal_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerpascal_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerpascal_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerpascal_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerpascal_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerpascal_dynamic_property_names\n");
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

QBindingStorage* q_scilexerpascal_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerpascal_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerpascal_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerpascal_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerpascal_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerpascal_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerpascal_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerpascal_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerpascal_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerpascal_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerpascal_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerpascal_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerpascal_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerpascal_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_lexer_id(void* self) {
    return QsciLexerPascal_LexerId((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_lexer_id(void* self) {
    return QsciLexerPascal_QBaseLexerId((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnLexerId((QsciLexerPascal*)self, (intptr_t)callback);
}

const char* q_scilexerpascal_auto_completion_fillups(void* self) {
    return QsciLexerPascal_AutoCompletionFillups((QsciLexerPascal*)self);
}

const char* q_scilexerpascal_qbase_auto_completion_fillups(void* self) {
    return QsciLexerPascal_QBaseAutoCompletionFillups((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerPascal_OnAutoCompletionFillups((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_block_lookback(void* self) {
    return QsciLexerPascal_BlockLookback((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_block_lookback(void* self) {
    return QsciLexerPascal_QBaseBlockLookback((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnBlockLookback((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_case_sensitive(void* self) {
    return QsciLexerPascal_CaseSensitive((QsciLexerPascal*)self);
}

bool q_scilexerpascal_qbase_case_sensitive(void* self) {
    return QsciLexerPascal_QBaseCaseSensitive((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerPascal_OnCaseSensitive((QsciLexerPascal*)self, (intptr_t)callback);
}

QColor* q_scilexerpascal_color(void* self, int style) {
    return QsciLexerPascal_Color((QsciLexerPascal*)self, style);
}

QColor* q_scilexerpascal_qbase_color(void* self, int style) {
    return QsciLexerPascal_QBaseColor((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPascal_OnColor((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_eol_fill(void* self, int style) {
    return QsciLexerPascal_EolFill((QsciLexerPascal*)self, style);
}

bool q_scilexerpascal_qbase_eol_fill(void* self, int style) {
    return QsciLexerPascal_QBaseEolFill((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerPascal_OnEolFill((QsciLexerPascal*)self, (intptr_t)callback);
}

QFont* q_scilexerpascal_font(void* self, int style) {
    return QsciLexerPascal_Font((QsciLexerPascal*)self, style);
}

QFont* q_scilexerpascal_qbase_font(void* self, int style) {
    return QsciLexerPascal_QBaseFont((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPascal_OnFont((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_indentation_guide_view(void* self) {
    return QsciLexerPascal_IndentationGuideView((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_indentation_guide_view(void* self) {
    return QsciLexerPascal_QBaseIndentationGuideView((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnIndentationGuideView((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_default_style(void* self) {
    return QsciLexerPascal_DefaultStyle((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_default_style(void* self) {
    return QsciLexerPascal_QBaseDefaultStyle((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnDefaultStyle((QsciLexerPascal*)self, (intptr_t)callback);
}

QColor* q_scilexerpascal_paper(void* self, int style) {
    return QsciLexerPascal_Paper((QsciLexerPascal*)self, style);
}

QColor* q_scilexerpascal_qbase_paper(void* self, int style) {
    return QsciLexerPascal_QBasePaper((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPascal_OnPaper((QsciLexerPascal*)self, (intptr_t)callback);
}

QColor* q_scilexerpascal_default_color2(void* self, int style) {
    return QsciLexerPascal_DefaultColor2((QsciLexerPascal*)self, style);
}

QColor* q_scilexerpascal_qbase_default_color2(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultColor2((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPascal_OnDefaultColor2((QsciLexerPascal*)self, (intptr_t)callback);
}

QFont* q_scilexerpascal_default_font2(void* self, int style) {
    return QsciLexerPascal_DefaultFont2((QsciLexerPascal*)self, style);
}

QFont* q_scilexerpascal_qbase_default_font2(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultFont2((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerPascal_OnDefaultFont2((QsciLexerPascal*)self, (intptr_t)callback);
}

QColor* q_scilexerpascal_default_paper2(void* self, int style) {
    return QsciLexerPascal_DefaultPaper2((QsciLexerPascal*)self, style);
}

QColor* q_scilexerpascal_qbase_default_paper2(void* self, int style) {
    return QsciLexerPascal_QBaseDefaultPaper2((QsciLexerPascal*)self, style);
}

void q_scilexerpascal_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerPascal_OnDefaultPaper2((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_editor(void* self, void* editor) {
    QsciLexerPascal_SetEditor((QsciLexerPascal*)self, (QsciScintilla*)editor);
}

void q_scilexerpascal_qbase_set_editor(void* self, void* editor) {
    QsciLexerPascal_QBaseSetEditor((QsciLexerPascal*)self, (QsciScintilla*)editor);
}

void q_scilexerpascal_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnSetEditor((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_style_bits_needed(void* self) {
    return QsciLexerPascal_StyleBitsNeeded((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_style_bits_needed(void* self) {
    return QsciLexerPascal_QBaseStyleBitsNeeded((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnStyleBitsNeeded((QsciLexerPascal*)self, (intptr_t)callback);
}

const char* q_scilexerpascal_word_characters(void* self) {
    return QsciLexerPascal_WordCharacters((QsciLexerPascal*)self);
}

const char* q_scilexerpascal_qbase_word_characters(void* self) {
    return QsciLexerPascal_QBaseWordCharacters((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerPascal_OnWordCharacters((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPascal_SetAutoIndentStyle((QsciLexerPascal*)self, autoindentstyle);
}

void q_scilexerpascal_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerPascal_QBaseSetAutoIndentStyle((QsciLexerPascal*)self, autoindentstyle);
}

void q_scilexerpascal_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerPascal_OnSetAutoIndentStyle((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_color(void* self, void* c, int style) {
    QsciLexerPascal_SetColor((QsciLexerPascal*)self, (QColor*)c, style);
}

void q_scilexerpascal_qbase_set_color(void* self, void* c, int style) {
    QsciLexerPascal_QBaseSetColor((QsciLexerPascal*)self, (QColor*)c, style);
}

void q_scilexerpascal_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPascal_OnSetColor((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPascal_SetEolFill((QsciLexerPascal*)self, eoffill, style);
}

void q_scilexerpascal_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerPascal_QBaseSetEolFill((QsciLexerPascal*)self, eoffill, style);
}

void q_scilexerpascal_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerPascal_OnSetEolFill((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_font(void* self, void* f, int style) {
    QsciLexerPascal_SetFont((QsciLexerPascal*)self, (QFont*)f, style);
}

void q_scilexerpascal_qbase_set_font(void* self, void* f, int style) {
    QsciLexerPascal_QBaseSetFont((QsciLexerPascal*)self, (QFont*)f, style);
}

void q_scilexerpascal_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPascal_OnSetFont((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_set_paper(void* self, void* c, int style) {
    QsciLexerPascal_SetPaper((QsciLexerPascal*)self, (QColor*)c, style);
}

void q_scilexerpascal_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerPascal_QBaseSetPaper((QsciLexerPascal*)self, (QColor*)c, style);
}

void q_scilexerpascal_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerPascal_OnSetPaper((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_event(void* self, void* event) {
    return QsciLexerPascal_Event((QsciLexerPascal*)self, (QEvent*)event);
}

bool q_scilexerpascal_qbase_event(void* self, void* event) {
    return QsciLexerPascal_QBaseEvent((QsciLexerPascal*)self, (QEvent*)event);
}

void q_scilexerpascal_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPascal_OnEvent((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPascal_EventFilter((QsciLexerPascal*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerpascal_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerPascal_QBaseEventFilter((QsciLexerPascal*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerpascal_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerPascal_OnEventFilter((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_timer_event(void* self, void* event) {
    QsciLexerPascal_TimerEvent((QsciLexerPascal*)self, (QTimerEvent*)event);
}

void q_scilexerpascal_qbase_timer_event(void* self, void* event) {
    QsciLexerPascal_QBaseTimerEvent((QsciLexerPascal*)self, (QTimerEvent*)event);
}

void q_scilexerpascal_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnTimerEvent((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_child_event(void* self, void* event) {
    QsciLexerPascal_ChildEvent((QsciLexerPascal*)self, (QChildEvent*)event);
}

void q_scilexerpascal_qbase_child_event(void* self, void* event) {
    QsciLexerPascal_QBaseChildEvent((QsciLexerPascal*)self, (QChildEvent*)event);
}

void q_scilexerpascal_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnChildEvent((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_custom_event(void* self, void* event) {
    QsciLexerPascal_CustomEvent((QsciLexerPascal*)self, (QEvent*)event);
}

void q_scilexerpascal_qbase_custom_event(void* self, void* event) {
    QsciLexerPascal_QBaseCustomEvent((QsciLexerPascal*)self, (QEvent*)event);
}

void q_scilexerpascal_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnCustomEvent((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_connect_notify(void* self, void* signal) {
    QsciLexerPascal_ConnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

void q_scilexerpascal_qbase_connect_notify(void* self, void* signal) {
    QsciLexerPascal_QBaseConnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

void q_scilexerpascal_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnConnectNotify((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_disconnect_notify(void* self, void* signal) {
    QsciLexerPascal_DisconnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

void q_scilexerpascal_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerPascal_QBaseDisconnectNotify((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

void q_scilexerpascal_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerPascal_OnDisconnectNotify((QsciLexerPascal*)self, (intptr_t)callback);
}

char* q_scilexerpascal_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPascal_TextAsBytes((QsciLexerPascal*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerpascal_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerPascal_QBaseTextAsBytes((QsciLexerPascal*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpascal_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerPascal_OnTextAsBytes((QsciLexerPascal*)self, (intptr_t)callback);
}

const char* q_scilexerpascal_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPascal_BytesAsText((QsciLexerPascal*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerpascal_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerPascal_QBaseBytesAsText((QsciLexerPascal*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerpascal_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerPascal_OnBytesAsText((QsciLexerPascal*)self, (intptr_t)callback);
}

QObject* q_scilexerpascal_sender(void* self) {
    return QsciLexerPascal_Sender((QsciLexerPascal*)self);
}

QObject* q_scilexerpascal_qbase_sender(void* self) {
    return QsciLexerPascal_QBaseSender((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerPascal_OnSender((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_sender_signal_index(void* self) {
    return QsciLexerPascal_SenderSignalIndex((QsciLexerPascal*)self);
}

int32_t q_scilexerpascal_qbase_sender_signal_index(void* self) {
    return QsciLexerPascal_QBaseSenderSignalIndex((QsciLexerPascal*)self);
}

void q_scilexerpascal_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerPascal_OnSenderSignalIndex((QsciLexerPascal*)self, (intptr_t)callback);
}

int32_t q_scilexerpascal_receivers(void* self, const char* signal) {
    return QsciLexerPascal_Receivers((QsciLexerPascal*)self, signal);
}

int32_t q_scilexerpascal_qbase_receivers(void* self, const char* signal) {
    return QsciLexerPascal_QBaseReceivers((QsciLexerPascal*)self, signal);
}

void q_scilexerpascal_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerPascal_OnReceivers((QsciLexerPascal*)self, (intptr_t)callback);
}

bool q_scilexerpascal_is_signal_connected(void* self, void* signal) {
    return QsciLexerPascal_IsSignalConnected((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

bool q_scilexerpascal_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerPascal_QBaseIsSignalConnected((QsciLexerPascal*)self, (QMetaMethod*)signal);
}

void q_scilexerpascal_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerPascal_OnIsSignalConnected((QsciLexerPascal*)self, (intptr_t)callback);
}

void q_scilexerpascal_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerpascal_delete(void* self) {
    QsciLexerPascal_Delete((QsciLexerPascal*)(self));
}
