#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexerfortran77.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerfortran.hpp"
#include "libqscilexerfortran.h"

QsciLexerFortran* q_scilexerfortran_new() {
    return QsciLexerFortran_new();
}

QsciLexerFortran* q_scilexerfortran_new2(void* parent) {
    return QsciLexerFortran_new2((QObject*)parent);
}

const QMetaObject* q_scilexerfortran_meta_object(void* self) {
    return QsciLexerFortran_MetaObject((QsciLexerFortran*)self);
}

void* q_scilexerfortran_metacast(void* self, const char* param1) {
    return QsciLexerFortran_Metacast((QsciLexerFortran*)self, param1);
}

int32_t q_scilexerfortran_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran_Metacall((QsciLexerFortran*)self, param1, param2, param3);
}

void q_scilexerfortran_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QsciLexerFortran_OnMetacall((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerFortran_QBaseMetacall((QsciLexerFortran*)self, param1, param2, param3);
}

const char* q_scilexerfortran_tr(const char* s) {
    libqt_string _str = QsciLexerFortran_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_language(void* self) {
    return QsciLexerFortran_Language((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_lexer(void* self) {
    return QsciLexerFortran_Lexer((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_keywords(void* self, int set) {
    return QsciLexerFortran_Keywords((QsciLexerFortran*)self, set);
}

const char* q_scilexerfortran_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerFortran_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerFortran_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerfortran_default_color(void* self, int style) {
    return QsciLexerFortran77_DefaultColor((QsciLexerFortran77*)self, style);
}

QFont* q_scilexerfortran_default_font(void* self, int style) {
    return QsciLexerFortran77_DefaultFont((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran_default_paper(void* self, int style) {
    return QsciLexerFortran77_DefaultPaper((QsciLexerFortran77*)self, style);
}

bool q_scilexerfortran_fold_compact(void* self) {
    return QsciLexerFortran77_FoldCompact((QsciLexerFortran77*)self);
}

QsciAbstractAPIs* q_scilexerfortran_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerfortran_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerfortran_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerfortran_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerfortran_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerfortran_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerfortran_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerfortran_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerfortran_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerfortran_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerfortran_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerfortran_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerfortran_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerfortran_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerfortran_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerfortran_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerfortran_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerfortran_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerfortran_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerfortran_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerfortran_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerfortran_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerfortran_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerfortran_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerfortran_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerfortran_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerfortran_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerfortran_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerfortran_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerfortran_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerfortran_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerfortran_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerfortran_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerfortran_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerfortran_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerfortran_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerfortran_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerfortran_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerfortran_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerfortran_dynamic_property_names");
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

QBindingStorage* q_scilexerfortran_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerfortran_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerfortran_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerfortran_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerfortran_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerfortran_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerfortran_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerfortran_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerfortran_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerfortran_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerfortran_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerfortran_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerfortran_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran_SetFoldCompact((QsciLexerFortran*)self, fold);
}

void q_scilexerfortran_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran_QBaseSetFoldCompact((QsciLexerFortran*)self, fold);
}

void q_scilexerfortran_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerFortran_OnSetFoldCompact((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_lexer_id(void* self) {
    return QsciLexerFortran_LexerId((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_lexer_id(void* self) {
    return QsciLexerFortran_QBaseLexerId((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnLexerId((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_auto_completion_fillups(void* self) {
    return QsciLexerFortran_AutoCompletionFillups((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_qbase_auto_completion_fillups(void* self) {
    return QsciLexerFortran_QBaseAutoCompletionFillups((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerFortran_OnAutoCompletionFillups((QsciLexerFortran*)self, (intptr_t)callback);
}

const char** q_scilexerfortran_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran_AutoCompletionWordSeparators((QsciLexerFortran*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerfortran_auto_completion_word_separators");
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

const char** q_scilexerfortran_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerFortran_QBaseAutoCompletionWordSeparators((QsciLexerFortran*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerfortran_auto_completion_word_separators");
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

void q_scilexerfortran_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerFortran_OnAutoCompletionWordSeparators((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_end(void* self, int* style) {
    return QsciLexerFortran_BlockEnd((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_qbase_block_end(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockEnd((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerFortran_OnBlockEnd((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_block_lookback(void* self) {
    return QsciLexerFortran_BlockLookback((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_block_lookback(void* self) {
    return QsciLexerFortran_QBaseBlockLookback((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnBlockLookback((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_start(void* self, int* style) {
    return QsciLexerFortran_BlockStart((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_qbase_block_start(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockStart((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerFortran_OnBlockStart((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran_BlockStartKeyword((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerFortran_QBaseBlockStartKeyword((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerFortran_OnBlockStartKeyword((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_brace_style(void* self) {
    return QsciLexerFortran_BraceStyle((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_brace_style(void* self) {
    return QsciLexerFortran_QBaseBraceStyle((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnBraceStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_case_sensitive(void* self) {
    return QsciLexerFortran_CaseSensitive((QsciLexerFortran*)self);
}

bool q_scilexerfortran_qbase_case_sensitive(void* self) {
    return QsciLexerFortran_QBaseCaseSensitive((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerFortran_OnCaseSensitive((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_color(void* self, int style) {
    return QsciLexerFortran_Color((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_qbase_color(void* self, int style) {
    return QsciLexerFortran_QBaseColor((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerFortran_OnColor((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_eol_fill(void* self, int style) {
    return QsciLexerFortran_EolFill((QsciLexerFortran*)self, style);
}

bool q_scilexerfortran_qbase_eol_fill(void* self, int style) {
    return QsciLexerFortran_QBaseEolFill((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerFortran_OnEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran_font(void* self, int style) {
    return QsciLexerFortran_Font((QsciLexerFortran*)self, style);
}

QFont* q_scilexerfortran_qbase_font(void* self, int style) {
    return QsciLexerFortran_QBaseFont((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerFortran_OnFont((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_indentation_guide_view(void* self) {
    return QsciLexerFortran_IndentationGuideView((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_indentation_guide_view(void* self) {
    return QsciLexerFortran_QBaseIndentationGuideView((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnIndentationGuideView((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_default_style(void* self) {
    return QsciLexerFortran_DefaultStyle((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_default_style(void* self) {
    return QsciLexerFortran_QBaseDefaultStyle((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnDefaultStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_description(void* self, int style) {
    libqt_string _str = QsciLexerFortran_Description((QsciLexerFortran*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerFortran_QBaseDescription((QsciLexerFortran*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerFortran_OnDescription((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_paper(void* self, int style) {
    return QsciLexerFortran_Paper((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_qbase_paper(void* self, int style) {
    return QsciLexerFortran_QBasePaper((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerFortran_OnPaper((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_default_color2(void* self, int style) {
    return QsciLexerFortran_DefaultColor2((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_qbase_default_color2(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultColor2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerFortran_OnDefaultColor2((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_default_eol_fill(void* self, int style) {
    return QsciLexerFortran_DefaultEolFill((QsciLexerFortran*)self, style);
}

bool q_scilexerfortran_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultEolFill((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerFortran_OnDefaultEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran_default_font2(void* self, int style) {
    return QsciLexerFortran_DefaultFont2((QsciLexerFortran*)self, style);
}

QFont* q_scilexerfortran_qbase_default_font2(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultFont2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerFortran_OnDefaultFont2((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_default_paper2(void* self, int style) {
    return QsciLexerFortran_DefaultPaper2((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_qbase_default_paper2(void* self, int style) {
    return QsciLexerFortran_QBaseDefaultPaper2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerFortran_OnDefaultPaper2((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_editor(void* self, void* editor) {
    QsciLexerFortran_SetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran_qbase_set_editor(void* self, void* editor) {
    QsciLexerFortran_QBaseSetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnSetEditor((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_refresh_properties(void* self) {
    QsciLexerFortran_RefreshProperties((QsciLexerFortran*)self);
}

void q_scilexerfortran_qbase_refresh_properties(void* self) {
    QsciLexerFortran_QBaseRefreshProperties((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerFortran_OnRefreshProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_style_bits_needed(void* self) {
    return QsciLexerFortran_StyleBitsNeeded((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_style_bits_needed(void* self) {
    return QsciLexerFortran_QBaseStyleBitsNeeded((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnStyleBitsNeeded((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_word_characters(void* self) {
    return QsciLexerFortran_WordCharacters((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_qbase_word_characters(void* self) {
    return QsciLexerFortran_QBaseWordCharacters((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerFortran_OnWordCharacters((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_SetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

void q_scilexerfortran_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_QBaseSetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

void q_scilexerfortran_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerFortran_OnSetAutoIndentStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_color(void* self, void* c, int style) {
    QsciLexerFortran_SetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_qbase_set_color(void* self, void* c, int style) {
    QsciLexerFortran_QBaseSetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerFortran_OnSetColor((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_SetEolFill((QsciLexerFortran*)self, eoffill, style);
}

void q_scilexerfortran_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_QBaseSetEolFill((QsciLexerFortran*)self, eoffill, style);
}

void q_scilexerfortran_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerFortran_OnSetEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_font(void* self, void* f, int style) {
    QsciLexerFortran_SetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

void q_scilexerfortran_qbase_set_font(void* self, void* f, int style) {
    QsciLexerFortran_QBaseSetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

void q_scilexerfortran_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerFortran_OnSetFont((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_paper(void* self, void* c, int style) {
    QsciLexerFortran_SetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerFortran_QBaseSetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerFortran_OnSetPaper((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_ReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerfortran_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_QBaseReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerfortran_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerFortran_OnReadProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_WriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerfortran_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_QBaseWriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerfortran_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerFortran_OnWriteProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_event(void* self, void* event) {
    return QsciLexerFortran_Event((QsciLexerFortran*)self, (QEvent*)event);
}

bool q_scilexerfortran_qbase_event(void* self, void* event) {
    return QsciLexerFortran_QBaseEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerFortran_OnEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_EventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerfortran_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_QBaseEventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerfortran_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerFortran_OnEventFilter((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_timer_event(void* self, void* event) {
    QsciLexerFortran_TimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

void q_scilexerfortran_qbase_timer_event(void* self, void* event) {
    QsciLexerFortran_QBaseTimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

void q_scilexerfortran_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnTimerEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_child_event(void* self, void* event) {
    QsciLexerFortran_ChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

void q_scilexerfortran_qbase_child_event(void* self, void* event) {
    QsciLexerFortran_QBaseChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

void q_scilexerfortran_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnChildEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_custom_event(void* self, void* event) {
    QsciLexerFortran_CustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_qbase_custom_event(void* self, void* event) {
    QsciLexerFortran_QBaseCustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnCustomEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_connect_notify(void* self, void* signal) {
    QsciLexerFortran_ConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_qbase_connect_notify(void* self, void* signal) {
    QsciLexerFortran_QBaseConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnConnectNotify((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran_DisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerFortran_QBaseDisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnDisconnectNotify((QsciLexerFortran*)self, (intptr_t)callback);
}

char* q_scilexerfortran_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerFortran_TextAsBytes((QsciLexerFortran*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerfortran_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerFortran_QBaseTextAsBytes((QsciLexerFortran*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerFortran_OnTextAsBytes((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerFortran_BytesAsText((QsciLexerFortran*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerFortran_QBaseBytesAsText((QsciLexerFortran*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerFortran_OnBytesAsText((QsciLexerFortran*)self, (intptr_t)callback);
}

QObject* q_scilexerfortran_sender(void* self) {
    return QsciLexerFortran_Sender((QsciLexerFortran*)self);
}

QObject* q_scilexerfortran_qbase_sender(void* self) {
    return QsciLexerFortran_QBaseSender((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerFortran_OnSender((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_sender_signal_index(void* self) {
    return QsciLexerFortran_SenderSignalIndex((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_qbase_sender_signal_index(void* self) {
    return QsciLexerFortran_QBaseSenderSignalIndex((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerFortran_OnSenderSignalIndex((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_receivers(void* self, const char* signal) {
    return QsciLexerFortran_Receivers((QsciLexerFortran*)self, signal);
}

int32_t q_scilexerfortran_qbase_receivers(void* self, const char* signal) {
    return QsciLexerFortran_QBaseReceivers((QsciLexerFortran*)self, signal);
}

void q_scilexerfortran_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerFortran_OnReceivers((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran_IsSignalConnected((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

bool q_scilexerfortran_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerFortran_QBaseIsSignalConnected((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerFortran_OnIsSignalConnected((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerfortran_delete(void* self) {
    QsciLexerFortran_Delete((QsciLexerFortran*)(self));
}
