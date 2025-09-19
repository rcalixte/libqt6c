#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerbatch.hpp"
#include "libqscilexerbatch.h"

QsciLexerBatch* q_scilexerbatch_new() {
    return QsciLexerBatch_new();
}

QsciLexerBatch* q_scilexerbatch_new2(void* parent) {
    return QsciLexerBatch_new2((QObject*)parent);
}

const QMetaObject* q_scilexerbatch_meta_object(void* self) {
    return QsciLexerBatch_MetaObject((QsciLexerBatch*)self);
}

void* q_scilexerbatch_metacast(void* self, const char* param1) {
    return QsciLexerBatch_Metacast((QsciLexerBatch*)self, param1);
}

int32_t q_scilexerbatch_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBatch_Metacall((QsciLexerBatch*)self, param1, param2, param3);
}

void q_scilexerbatch_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerBatch_OnMetacall((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerBatch_QBaseMetacall((QsciLexerBatch*)self, param1, param2, param3);
}

const char* q_scilexerbatch_tr(const char* s) {
    libqt_string _str = QsciLexerBatch_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbatch_language(void* self) {
    return QsciLexerBatch_Language((QsciLexerBatch*)self);
}

const char* q_scilexerbatch_lexer(void* self) {
    return QsciLexerBatch_Lexer((QsciLexerBatch*)self);
}

const char* q_scilexerbatch_word_characters(void* self) {
    return QsciLexerBatch_WordCharacters((QsciLexerBatch*)self);
}

bool q_scilexerbatch_case_sensitive(void* self) {
    return QsciLexerBatch_CaseSensitive((QsciLexerBatch*)self);
}

QColor* q_scilexerbatch_default_color(void* self, int style) {
    return QsciLexerBatch_DefaultColor((QsciLexerBatch*)self, style);
}

bool q_scilexerbatch_default_eol_fill(void* self, int style) {
    return QsciLexerBatch_DefaultEolFill((QsciLexerBatch*)self, style);
}

QFont* q_scilexerbatch_default_font(void* self, int style) {
    return QsciLexerBatch_DefaultFont((QsciLexerBatch*)self, style);
}

QColor* q_scilexerbatch_default_paper(void* self, int style) {
    return QsciLexerBatch_DefaultPaper((QsciLexerBatch*)self, style);
}

const char* q_scilexerbatch_keywords(void* self, int set) {
    return QsciLexerBatch_Keywords((QsciLexerBatch*)self, set);
}

const char* q_scilexerbatch_description(void* self, int style) {
    libqt_string _str = QsciLexerBatch_Description((QsciLexerBatch*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbatch_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerBatch_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbatch_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerBatch_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerbatch_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerbatch_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerbatch_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerbatch_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerbatch_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerbatch_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerbatch_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerbatch_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerbatch_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerbatch_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbatch_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbatch_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerbatch_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbatch_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerbatch_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbatch_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerbatch_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerbatch_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerbatch_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerbatch_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerbatch_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerbatch_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbatch_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerbatch_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerbatch_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerbatch_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerbatch_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerbatch_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerbatch_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerbatch_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerbatch_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerbatch_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerbatch_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerbatch_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerbatch_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerbatch_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerbatch_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerbatch_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerbatch_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerbatch_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerbatch_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerbatch_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerbatch_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerbatch_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerbatch_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerbatch_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerbatch_dynamic_property_names");
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

QBindingStorage* q_scilexerbatch_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerbatch_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerbatch_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerbatch_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerbatch_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerbatch_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerbatch_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerbatch_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerbatch_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerbatch_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerbatch_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerbatch_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerbatch_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_lexer_id(void* self) {
    return QsciLexerBatch_LexerId((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_lexer_id(void* self) {
    return QsciLexerBatch_QBaseLexerId((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnLexerId((QsciLexerBatch*)self, (intptr_t)callback);
}

const char* q_scilexerbatch_auto_completion_fillups(void* self) {
    return QsciLexerBatch_AutoCompletionFillups((QsciLexerBatch*)self);
}

const char* q_scilexerbatch_qbase_auto_completion_fillups(void* self) {
    return QsciLexerBatch_QBaseAutoCompletionFillups((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerBatch_OnAutoCompletionFillups((QsciLexerBatch*)self, (intptr_t)callback);
}

const char** q_scilexerbatch_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBatch_AutoCompletionWordSeparators((QsciLexerBatch*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerbatch_auto_completion_word_separators");
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

const char** q_scilexerbatch_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerBatch_QBaseAutoCompletionWordSeparators((QsciLexerBatch*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexerbatch_auto_completion_word_separators");
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

void q_scilexerbatch_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerBatch_OnAutoCompletionWordSeparators((QsciLexerBatch*)self, (intptr_t)callback);
}

const char* q_scilexerbatch_block_end(void* self, int* style) {
    return QsciLexerBatch_BlockEnd((QsciLexerBatch*)self, style);
}

const char* q_scilexerbatch_qbase_block_end(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockEnd((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBatch_OnBlockEnd((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_block_lookback(void* self) {
    return QsciLexerBatch_BlockLookback((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_block_lookback(void* self) {
    return QsciLexerBatch_QBaseBlockLookback((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnBlockLookback((QsciLexerBatch*)self, (intptr_t)callback);
}

const char* q_scilexerbatch_block_start(void* self, int* style) {
    return QsciLexerBatch_BlockStart((QsciLexerBatch*)self, style);
}

const char* q_scilexerbatch_qbase_block_start(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockStart((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBatch_OnBlockStart((QsciLexerBatch*)self, (intptr_t)callback);
}

const char* q_scilexerbatch_block_start_keyword(void* self, int* style) {
    return QsciLexerBatch_BlockStartKeyword((QsciLexerBatch*)self, style);
}

const char* q_scilexerbatch_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerBatch_QBaseBlockStartKeyword((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerBatch_OnBlockStartKeyword((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_brace_style(void* self) {
    return QsciLexerBatch_BraceStyle((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_brace_style(void* self) {
    return QsciLexerBatch_QBaseBraceStyle((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnBraceStyle((QsciLexerBatch*)self, (intptr_t)callback);
}

QColor* q_scilexerbatch_color(void* self, int style) {
    return QsciLexerBatch_Color((QsciLexerBatch*)self, style);
}

QColor* q_scilexerbatch_qbase_color(void* self, int style) {
    return QsciLexerBatch_QBaseColor((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBatch_OnColor((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_eol_fill(void* self, int style) {
    return QsciLexerBatch_EolFill((QsciLexerBatch*)self, style);
}

bool q_scilexerbatch_qbase_eol_fill(void* self, int style) {
    return QsciLexerBatch_QBaseEolFill((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerBatch_OnEolFill((QsciLexerBatch*)self, (intptr_t)callback);
}

QFont* q_scilexerbatch_font(void* self, int style) {
    return QsciLexerBatch_Font((QsciLexerBatch*)self, style);
}

QFont* q_scilexerbatch_qbase_font(void* self, int style) {
    return QsciLexerBatch_QBaseFont((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerBatch_OnFont((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_indentation_guide_view(void* self) {
    return QsciLexerBatch_IndentationGuideView((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_indentation_guide_view(void* self) {
    return QsciLexerBatch_QBaseIndentationGuideView((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnIndentationGuideView((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_default_style(void* self) {
    return QsciLexerBatch_DefaultStyle((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_default_style(void* self) {
    return QsciLexerBatch_QBaseDefaultStyle((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnDefaultStyle((QsciLexerBatch*)self, (intptr_t)callback);
}

QColor* q_scilexerbatch_paper(void* self, int style) {
    return QsciLexerBatch_Paper((QsciLexerBatch*)self, style);
}

QColor* q_scilexerbatch_qbase_paper(void* self, int style) {
    return QsciLexerBatch_QBasePaper((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBatch_OnPaper((QsciLexerBatch*)self, (intptr_t)callback);
}

QColor* q_scilexerbatch_default_color2(void* self, int style) {
    return QsciLexerBatch_DefaultColor2((QsciLexerBatch*)self, style);
}

QColor* q_scilexerbatch_qbase_default_color2(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultColor2((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBatch_OnDefaultColor2((QsciLexerBatch*)self, (intptr_t)callback);
}

QFont* q_scilexerbatch_default_font2(void* self, int style) {
    return QsciLexerBatch_DefaultFont2((QsciLexerBatch*)self, style);
}

QFont* q_scilexerbatch_qbase_default_font2(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultFont2((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerBatch_OnDefaultFont2((QsciLexerBatch*)self, (intptr_t)callback);
}

QColor* q_scilexerbatch_default_paper2(void* self, int style) {
    return QsciLexerBatch_DefaultPaper2((QsciLexerBatch*)self, style);
}

QColor* q_scilexerbatch_qbase_default_paper2(void* self, int style) {
    return QsciLexerBatch_QBaseDefaultPaper2((QsciLexerBatch*)self, style);
}

void q_scilexerbatch_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerBatch_OnDefaultPaper2((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_editor(void* self, void* editor) {
    QsciLexerBatch_SetEditor((QsciLexerBatch*)self, (QsciScintilla*)editor);
}

void q_scilexerbatch_qbase_set_editor(void* self, void* editor) {
    QsciLexerBatch_QBaseSetEditor((QsciLexerBatch*)self, (QsciScintilla*)editor);
}

void q_scilexerbatch_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnSetEditor((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_refresh_properties(void* self) {
    QsciLexerBatch_RefreshProperties((QsciLexerBatch*)self);
}

void q_scilexerbatch_qbase_refresh_properties(void* self) {
    QsciLexerBatch_QBaseRefreshProperties((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerBatch_OnRefreshProperties((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_style_bits_needed(void* self) {
    return QsciLexerBatch_StyleBitsNeeded((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_style_bits_needed(void* self) {
    return QsciLexerBatch_QBaseStyleBitsNeeded((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnStyleBitsNeeded((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBatch_SetAutoIndentStyle((QsciLexerBatch*)self, autoindentstyle);
}

void q_scilexerbatch_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerBatch_QBaseSetAutoIndentStyle((QsciLexerBatch*)self, autoindentstyle);
}

void q_scilexerbatch_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerBatch_OnSetAutoIndentStyle((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_color(void* self, void* c, int style) {
    QsciLexerBatch_SetColor((QsciLexerBatch*)self, (QColor*)c, style);
}

void q_scilexerbatch_qbase_set_color(void* self, void* c, int style) {
    QsciLexerBatch_QBaseSetColor((QsciLexerBatch*)self, (QColor*)c, style);
}

void q_scilexerbatch_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBatch_OnSetColor((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBatch_SetEolFill((QsciLexerBatch*)self, eoffill, style);
}

void q_scilexerbatch_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerBatch_QBaseSetEolFill((QsciLexerBatch*)self, eoffill, style);
}

void q_scilexerbatch_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerBatch_OnSetEolFill((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_font(void* self, void* f, int style) {
    QsciLexerBatch_SetFont((QsciLexerBatch*)self, (QFont*)f, style);
}

void q_scilexerbatch_qbase_set_font(void* self, void* f, int style) {
    QsciLexerBatch_QBaseSetFont((QsciLexerBatch*)self, (QFont*)f, style);
}

void q_scilexerbatch_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBatch_OnSetFont((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_set_paper(void* self, void* c, int style) {
    QsciLexerBatch_SetPaper((QsciLexerBatch*)self, (QColor*)c, style);
}

void q_scilexerbatch_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerBatch_QBaseSetPaper((QsciLexerBatch*)self, (QColor*)c, style);
}

void q_scilexerbatch_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerBatch_OnSetPaper((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_ReadProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerbatch_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_QBaseReadProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerbatch_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerBatch_OnReadProperties((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_WriteProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerbatch_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerBatch_QBaseWriteProperties((QsciLexerBatch*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerbatch_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerBatch_OnWriteProperties((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_event(void* self, void* event) {
    return QsciLexerBatch_Event((QsciLexerBatch*)self, (QEvent*)event);
}

bool q_scilexerbatch_qbase_event(void* self, void* event) {
    return QsciLexerBatch_QBaseEvent((QsciLexerBatch*)self, (QEvent*)event);
}

void q_scilexerbatch_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerBatch_OnEvent((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBatch_EventFilter((QsciLexerBatch*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerbatch_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerBatch_QBaseEventFilter((QsciLexerBatch*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerbatch_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerBatch_OnEventFilter((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_timer_event(void* self, void* event) {
    QsciLexerBatch_TimerEvent((QsciLexerBatch*)self, (QTimerEvent*)event);
}

void q_scilexerbatch_qbase_timer_event(void* self, void* event) {
    QsciLexerBatch_QBaseTimerEvent((QsciLexerBatch*)self, (QTimerEvent*)event);
}

void q_scilexerbatch_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnTimerEvent((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_child_event(void* self, void* event) {
    QsciLexerBatch_ChildEvent((QsciLexerBatch*)self, (QChildEvent*)event);
}

void q_scilexerbatch_qbase_child_event(void* self, void* event) {
    QsciLexerBatch_QBaseChildEvent((QsciLexerBatch*)self, (QChildEvent*)event);
}

void q_scilexerbatch_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnChildEvent((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_custom_event(void* self, void* event) {
    QsciLexerBatch_CustomEvent((QsciLexerBatch*)self, (QEvent*)event);
}

void q_scilexerbatch_qbase_custom_event(void* self, void* event) {
    QsciLexerBatch_QBaseCustomEvent((QsciLexerBatch*)self, (QEvent*)event);
}

void q_scilexerbatch_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnCustomEvent((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_connect_notify(void* self, void* signal) {
    QsciLexerBatch_ConnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

void q_scilexerbatch_qbase_connect_notify(void* self, void* signal) {
    QsciLexerBatch_QBaseConnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

void q_scilexerbatch_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnConnectNotify((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_disconnect_notify(void* self, void* signal) {
    QsciLexerBatch_DisconnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

void q_scilexerbatch_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerBatch_QBaseDisconnectNotify((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

void q_scilexerbatch_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerBatch_OnDisconnectNotify((QsciLexerBatch*)self, (intptr_t)callback);
}

char* q_scilexerbatch_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerBatch_TextAsBytes((QsciLexerBatch*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerbatch_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerBatch_QBaseTextAsBytes((QsciLexerBatch*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbatch_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerBatch_OnTextAsBytes((QsciLexerBatch*)self, (intptr_t)callback);
}

const char* q_scilexerbatch_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerBatch_BytesAsText((QsciLexerBatch*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerbatch_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerBatch_QBaseBytesAsText((QsciLexerBatch*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerbatch_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerBatch_OnBytesAsText((QsciLexerBatch*)self, (intptr_t)callback);
}

QObject* q_scilexerbatch_sender(void* self) {
    return QsciLexerBatch_Sender((QsciLexerBatch*)self);
}

QObject* q_scilexerbatch_qbase_sender(void* self) {
    return QsciLexerBatch_QBaseSender((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerBatch_OnSender((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_sender_signal_index(void* self) {
    return QsciLexerBatch_SenderSignalIndex((QsciLexerBatch*)self);
}

int32_t q_scilexerbatch_qbase_sender_signal_index(void* self) {
    return QsciLexerBatch_QBaseSenderSignalIndex((QsciLexerBatch*)self);
}

void q_scilexerbatch_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerBatch_OnSenderSignalIndex((QsciLexerBatch*)self, (intptr_t)callback);
}

int32_t q_scilexerbatch_receivers(void* self, const char* signal) {
    return QsciLexerBatch_Receivers((QsciLexerBatch*)self, signal);
}

int32_t q_scilexerbatch_qbase_receivers(void* self, const char* signal) {
    return QsciLexerBatch_QBaseReceivers((QsciLexerBatch*)self, signal);
}

void q_scilexerbatch_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerBatch_OnReceivers((QsciLexerBatch*)self, (intptr_t)callback);
}

bool q_scilexerbatch_is_signal_connected(void* self, void* signal) {
    return QsciLexerBatch_IsSignalConnected((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

bool q_scilexerbatch_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerBatch_QBaseIsSignalConnected((QsciLexerBatch*)self, (QMetaMethod*)signal);
}

void q_scilexerbatch_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerBatch_OnIsSignalConnected((QsciLexerBatch*)self, (intptr_t)callback);
}

void q_scilexerbatch_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerbatch_delete(void* self) {
    QsciLexerBatch_Delete((QsciLexerBatch*)(self));
}
