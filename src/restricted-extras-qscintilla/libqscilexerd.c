#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerd.hpp"
#include "libqscilexerd.h"

QsciLexerD* q_scilexerd_new() {
    return QsciLexerD_new();
}

QsciLexerD* q_scilexerd_new2(void* parent) {
    return QsciLexerD_new2((QObject*)parent);
}

const QMetaObject* q_scilexerd_meta_object(void* self) {
    return QsciLexerD_MetaObject((QsciLexerD*)self);
}

void* q_scilexerd_metacast(void* self, const char* param1) {
    return QsciLexerD_Metacast((QsciLexerD*)self, param1);
}

int32_t q_scilexerd_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerD_Metacall((QsciLexerD*)self, param1, param2, param3);
}

void q_scilexerd_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerD_OnMetacall((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerD_QBaseMetacall((QsciLexerD*)self, param1, param2, param3);
}

const char* q_scilexerd_tr(const char* s) {
    libqt_string _str = QsciLexerD_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerd_language(void* self) {
    return QsciLexerD_Language((QsciLexerD*)self);
}

const char* q_scilexerd_lexer(void* self) {
    return QsciLexerD_Lexer((QsciLexerD*)self);
}

const char** q_scilexerd_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerD_AutoCompletionWordSeparators((QsciLexerD*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerd_auto_completion_word_separators");
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

const char* q_scilexerd_block_end(void* self) {
    return QsciLexerD_BlockEnd((QsciLexerD*)self);
}

const char* q_scilexerd_block_start(void* self) {
    return QsciLexerD_BlockStart((QsciLexerD*)self);
}

const char* q_scilexerd_block_start_keyword(void* self) {
    return QsciLexerD_BlockStartKeyword((QsciLexerD*)self);
}

int32_t q_scilexerd_brace_style(void* self) {
    return QsciLexerD_BraceStyle((QsciLexerD*)self);
}

const char* q_scilexerd_word_characters(void* self) {
    return QsciLexerD_WordCharacters((QsciLexerD*)self);
}

QColor* q_scilexerd_default_color(void* self, int style) {
    return QsciLexerD_DefaultColor((QsciLexerD*)self, style);
}

bool q_scilexerd_default_eol_fill(void* self, int style) {
    return QsciLexerD_DefaultEolFill((QsciLexerD*)self, style);
}

QFont* q_scilexerd_default_font(void* self, int style) {
    return QsciLexerD_DefaultFont((QsciLexerD*)self, style);
}

QColor* q_scilexerd_default_paper(void* self, int style) {
    return QsciLexerD_DefaultPaper((QsciLexerD*)self, style);
}

const char* q_scilexerd_keywords(void* self, int set) {
    return QsciLexerD_Keywords((QsciLexerD*)self, set);
}

const char* q_scilexerd_description(void* self, int style) {
    libqt_string _str = QsciLexerD_Description((QsciLexerD*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerd_refresh_properties(void* self) {
    QsciLexerD_RefreshProperties((QsciLexerD*)self);
}

bool q_scilexerd_fold_at_else(void* self) {
    return QsciLexerD_FoldAtElse((QsciLexerD*)self);
}

bool q_scilexerd_fold_comments(void* self) {
    return QsciLexerD_FoldComments((QsciLexerD*)self);
}

bool q_scilexerd_fold_compact(void* self) {
    return QsciLexerD_FoldCompact((QsciLexerD*)self);
}

void q_scilexerd_set_fold_at_else(void* self, bool fold) {
    QsciLexerD_SetFoldAtElse((QsciLexerD*)self, fold);
}

void q_scilexerd_on_set_fold_at_else(void* self, void (*callback)(void*, bool)) {
    QsciLexerD_OnSetFoldAtElse((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_qbase_set_fold_at_else(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldAtElse((QsciLexerD*)self, fold);
}

void q_scilexerd_set_fold_comments(void* self, bool fold) {
    QsciLexerD_SetFoldComments((QsciLexerD*)self, fold);
}

void q_scilexerd_on_set_fold_comments(void* self, void (*callback)(void*, bool)) {
    QsciLexerD_OnSetFoldComments((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_qbase_set_fold_comments(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldComments((QsciLexerD*)self, fold);
}

void q_scilexerd_set_fold_compact(void* self, bool fold) {
    QsciLexerD_SetFoldCompact((QsciLexerD*)self, fold);
}

void q_scilexerd_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerD_OnSetFoldCompact((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerD_QBaseSetFoldCompact((QsciLexerD*)self, fold);
}

bool q_scilexerd_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_ReadProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerd_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerD_OnReadProperties((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_QBaseReadProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerd_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_WriteProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerd_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerD_OnWriteProperties((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerD_QBaseWriteProperties((QsciLexerD*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerd_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerD_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerd_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerD_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerd_block_end1(void* self, int* style) {
    return QsciLexerD_BlockEnd1((QsciLexerD*)self, style);
}

const char* q_scilexerd_block_start1(void* self, int* style) {
    return QsciLexerD_BlockStart1((QsciLexerD*)self, style);
}

const char* q_scilexerd_block_start_keyword1(void* self, int* style) {
    return QsciLexerD_BlockStartKeyword1((QsciLexerD*)self, style);
}

QsciAbstractAPIs* q_scilexerd_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerd_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerd_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerd_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerd_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerd_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerd_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerd_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerd_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerd_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerd_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerd_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerd_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerd_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerd_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerd_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerd_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerd_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerd_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerd_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerd_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerd_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerd_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerd_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerd_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerd_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerd_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerd_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerd_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerd_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerd_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerd_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerd_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerd_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerd_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerd_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerd_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerd_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerd_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerd_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerd_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerd_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerd_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerd_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerd_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerd_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerd_dynamic_property_names");
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

QBindingStorage* q_scilexerd_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerd_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerd_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerd_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerd_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerd_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerd_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerd_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerd_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerd_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerd_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerd_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerd_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerd_lexer_id(void* self) {
    return QsciLexerD_LexerId((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_lexer_id(void* self) {
    return QsciLexerD_QBaseLexerId((QsciLexerD*)self);
}

void q_scilexerd_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerD_OnLexerId((QsciLexerD*)self, (intptr_t)callback);
}

const char* q_scilexerd_auto_completion_fillups(void* self) {
    return QsciLexerD_AutoCompletionFillups((QsciLexerD*)self);
}

const char* q_scilexerd_qbase_auto_completion_fillups(void* self) {
    return QsciLexerD_QBaseAutoCompletionFillups((QsciLexerD*)self);
}

void q_scilexerd_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerD_OnAutoCompletionFillups((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_block_lookback(void* self) {
    return QsciLexerD_BlockLookback((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_block_lookback(void* self) {
    return QsciLexerD_QBaseBlockLookback((QsciLexerD*)self);
}

void q_scilexerd_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerD_OnBlockLookback((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_case_sensitive(void* self) {
    return QsciLexerD_CaseSensitive((QsciLexerD*)self);
}

bool q_scilexerd_qbase_case_sensitive(void* self) {
    return QsciLexerD_QBaseCaseSensitive((QsciLexerD*)self);
}

void q_scilexerd_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerD_OnCaseSensitive((QsciLexerD*)self, (intptr_t)callback);
}

QColor* q_scilexerd_color(void* self, int style) {
    return QsciLexerD_Color((QsciLexerD*)self, style);
}

QColor* q_scilexerd_qbase_color(void* self, int style) {
    return QsciLexerD_QBaseColor((QsciLexerD*)self, style);
}

void q_scilexerd_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerD_OnColor((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_eol_fill(void* self, int style) {
    return QsciLexerD_EolFill((QsciLexerD*)self, style);
}

bool q_scilexerd_qbase_eol_fill(void* self, int style) {
    return QsciLexerD_QBaseEolFill((QsciLexerD*)self, style);
}

void q_scilexerd_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerD_OnEolFill((QsciLexerD*)self, (intptr_t)callback);
}

QFont* q_scilexerd_font(void* self, int style) {
    return QsciLexerD_Font((QsciLexerD*)self, style);
}

QFont* q_scilexerd_qbase_font(void* self, int style) {
    return QsciLexerD_QBaseFont((QsciLexerD*)self, style);
}

void q_scilexerd_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerD_OnFont((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_indentation_guide_view(void* self) {
    return QsciLexerD_IndentationGuideView((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_indentation_guide_view(void* self) {
    return QsciLexerD_QBaseIndentationGuideView((QsciLexerD*)self);
}

void q_scilexerd_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerD_OnIndentationGuideView((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_default_style(void* self) {
    return QsciLexerD_DefaultStyle((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_default_style(void* self) {
    return QsciLexerD_QBaseDefaultStyle((QsciLexerD*)self);
}

void q_scilexerd_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerD_OnDefaultStyle((QsciLexerD*)self, (intptr_t)callback);
}

QColor* q_scilexerd_paper(void* self, int style) {
    return QsciLexerD_Paper((QsciLexerD*)self, style);
}

QColor* q_scilexerd_qbase_paper(void* self, int style) {
    return QsciLexerD_QBasePaper((QsciLexerD*)self, style);
}

void q_scilexerd_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerD_OnPaper((QsciLexerD*)self, (intptr_t)callback);
}

QColor* q_scilexerd_default_color2(void* self, int style) {
    return QsciLexerD_DefaultColor2((QsciLexerD*)self, style);
}

QColor* q_scilexerd_qbase_default_color2(void* self, int style) {
    return QsciLexerD_QBaseDefaultColor2((QsciLexerD*)self, style);
}

void q_scilexerd_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerD_OnDefaultColor2((QsciLexerD*)self, (intptr_t)callback);
}

QFont* q_scilexerd_default_font2(void* self, int style) {
    return QsciLexerD_DefaultFont2((QsciLexerD*)self, style);
}

QFont* q_scilexerd_qbase_default_font2(void* self, int style) {
    return QsciLexerD_QBaseDefaultFont2((QsciLexerD*)self, style);
}

void q_scilexerd_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerD_OnDefaultFont2((QsciLexerD*)self, (intptr_t)callback);
}

QColor* q_scilexerd_default_paper2(void* self, int style) {
    return QsciLexerD_DefaultPaper2((QsciLexerD*)self, style);
}

QColor* q_scilexerd_qbase_default_paper2(void* self, int style) {
    return QsciLexerD_QBaseDefaultPaper2((QsciLexerD*)self, style);
}

void q_scilexerd_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerD_OnDefaultPaper2((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_editor(void* self, void* editor) {
    QsciLexerD_SetEditor((QsciLexerD*)self, (QsciScintilla*)editor);
}

void q_scilexerd_qbase_set_editor(void* self, void* editor) {
    QsciLexerD_QBaseSetEditor((QsciLexerD*)self, (QsciScintilla*)editor);
}

void q_scilexerd_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnSetEditor((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_style_bits_needed(void* self) {
    return QsciLexerD_StyleBitsNeeded((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_style_bits_needed(void* self) {
    return QsciLexerD_QBaseStyleBitsNeeded((QsciLexerD*)self);
}

void q_scilexerd_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerD_OnStyleBitsNeeded((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerD_SetAutoIndentStyle((QsciLexerD*)self, autoindentstyle);
}

void q_scilexerd_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerD_QBaseSetAutoIndentStyle((QsciLexerD*)self, autoindentstyle);
}

void q_scilexerd_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerD_OnSetAutoIndentStyle((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_color(void* self, void* c, int style) {
    QsciLexerD_SetColor((QsciLexerD*)self, (QColor*)c, style);
}

void q_scilexerd_qbase_set_color(void* self, void* c, int style) {
    QsciLexerD_QBaseSetColor((QsciLexerD*)self, (QColor*)c, style);
}

void q_scilexerd_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerD_OnSetColor((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerD_SetEolFill((QsciLexerD*)self, eoffill, style);
}

void q_scilexerd_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerD_QBaseSetEolFill((QsciLexerD*)self, eoffill, style);
}

void q_scilexerd_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerD_OnSetEolFill((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_font(void* self, void* f, int style) {
    QsciLexerD_SetFont((QsciLexerD*)self, (QFont*)f, style);
}

void q_scilexerd_qbase_set_font(void* self, void* f, int style) {
    QsciLexerD_QBaseSetFont((QsciLexerD*)self, (QFont*)f, style);
}

void q_scilexerd_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerD_OnSetFont((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_set_paper(void* self, void* c, int style) {
    QsciLexerD_SetPaper((QsciLexerD*)self, (QColor*)c, style);
}

void q_scilexerd_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerD_QBaseSetPaper((QsciLexerD*)self, (QColor*)c, style);
}

void q_scilexerd_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerD_OnSetPaper((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_event(void* self, void* event) {
    return QsciLexerD_Event((QsciLexerD*)self, (QEvent*)event);
}

bool q_scilexerd_qbase_event(void* self, void* event) {
    return QsciLexerD_QBaseEvent((QsciLexerD*)self, (QEvent*)event);
}

void q_scilexerd_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerD_OnEvent((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_event_filter(void* self, void* watched, void* event) {
    return QsciLexerD_EventFilter((QsciLexerD*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerd_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerD_QBaseEventFilter((QsciLexerD*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerd_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerD_OnEventFilter((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_timer_event(void* self, void* event) {
    QsciLexerD_TimerEvent((QsciLexerD*)self, (QTimerEvent*)event);
}

void q_scilexerd_qbase_timer_event(void* self, void* event) {
    QsciLexerD_QBaseTimerEvent((QsciLexerD*)self, (QTimerEvent*)event);
}

void q_scilexerd_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnTimerEvent((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_child_event(void* self, void* event) {
    QsciLexerD_ChildEvent((QsciLexerD*)self, (QChildEvent*)event);
}

void q_scilexerd_qbase_child_event(void* self, void* event) {
    QsciLexerD_QBaseChildEvent((QsciLexerD*)self, (QChildEvent*)event);
}

void q_scilexerd_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnChildEvent((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_custom_event(void* self, void* event) {
    QsciLexerD_CustomEvent((QsciLexerD*)self, (QEvent*)event);
}

void q_scilexerd_qbase_custom_event(void* self, void* event) {
    QsciLexerD_QBaseCustomEvent((QsciLexerD*)self, (QEvent*)event);
}

void q_scilexerd_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnCustomEvent((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_connect_notify(void* self, void* signal) {
    QsciLexerD_ConnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

void q_scilexerd_qbase_connect_notify(void* self, void* signal) {
    QsciLexerD_QBaseConnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

void q_scilexerd_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnConnectNotify((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_disconnect_notify(void* self, void* signal) {
    QsciLexerD_DisconnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

void q_scilexerd_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerD_QBaseDisconnectNotify((QsciLexerD*)self, (QMetaMethod*)signal);
}

void q_scilexerd_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerD_OnDisconnectNotify((QsciLexerD*)self, (intptr_t)callback);
}

char* q_scilexerd_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerD_TextAsBytes((QsciLexerD*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerd_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerD_QBaseTextAsBytes((QsciLexerD*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerd_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerD_OnTextAsBytes((QsciLexerD*)self, (intptr_t)callback);
}

const char* q_scilexerd_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerD_BytesAsText((QsciLexerD*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerd_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerD_QBaseBytesAsText((QsciLexerD*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerd_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerD_OnBytesAsText((QsciLexerD*)self, (intptr_t)callback);
}

QObject* q_scilexerd_sender(void* self) {
    return QsciLexerD_Sender((QsciLexerD*)self);
}

QObject* q_scilexerd_qbase_sender(void* self) {
    return QsciLexerD_QBaseSender((QsciLexerD*)self);
}

void q_scilexerd_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerD_OnSender((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_sender_signal_index(void* self) {
    return QsciLexerD_SenderSignalIndex((QsciLexerD*)self);
}

int32_t q_scilexerd_qbase_sender_signal_index(void* self) {
    return QsciLexerD_QBaseSenderSignalIndex((QsciLexerD*)self);
}

void q_scilexerd_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerD_OnSenderSignalIndex((QsciLexerD*)self, (intptr_t)callback);
}

int32_t q_scilexerd_receivers(void* self, const char* signal) {
    return QsciLexerD_Receivers((QsciLexerD*)self, signal);
}

int32_t q_scilexerd_qbase_receivers(void* self, const char* signal) {
    return QsciLexerD_QBaseReceivers((QsciLexerD*)self, signal);
}

void q_scilexerd_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerD_OnReceivers((QsciLexerD*)self, (intptr_t)callback);
}

bool q_scilexerd_is_signal_connected(void* self, void* signal) {
    return QsciLexerD_IsSignalConnected((QsciLexerD*)self, (QMetaMethod*)signal);
}

bool q_scilexerd_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerD_QBaseIsSignalConnected((QsciLexerD*)self, (QMetaMethod*)signal);
}

void q_scilexerd_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerD_OnIsSignalConnected((QsciLexerD*)self, (intptr_t)callback);
}

void q_scilexerd_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerd_delete(void* self) {
    QsciLexerD_Delete((QsciLexerD*)(self));
}
