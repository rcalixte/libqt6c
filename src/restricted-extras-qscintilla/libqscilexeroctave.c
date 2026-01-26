#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexermatlab.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexeroctave.hpp"
#include "libqscilexeroctave.h"

QsciLexerOctave* q_scilexeroctave_new() {
    return QsciLexerOctave_new();
}

QsciLexerOctave* q_scilexeroctave_new2(void* parent) {
    return QsciLexerOctave_new2((QObject*)parent);
}

const QMetaObject* q_scilexeroctave_meta_object(void* self) {
    return QsciLexerOctave_MetaObject((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerOctave_OnMetaObject((QsciLexerOctave*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexeroctave_qbase_meta_object(void* self) {
    return QsciLexerOctave_QBaseMetaObject((QsciLexerOctave*)self);
}

void* q_scilexeroctave_metacast(void* self, const char* param1) {
    return QsciLexerOctave_Metacast((QsciLexerOctave*)self, param1);
}

void q_scilexeroctave_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerOctave_OnMetacast((QsciLexerOctave*)self, (intptr_t)callback);
}

void* q_scilexeroctave_qbase_metacast(void* self, const char* param1) {
    return QsciLexerOctave_QBaseMetacast((QsciLexerOctave*)self, param1);
}

int32_t q_scilexeroctave_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerOctave_Metacall((QsciLexerOctave*)self, param1, param2, param3);
}

void q_scilexeroctave_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerOctave_OnMetacall((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerOctave_QBaseMetacall((QsciLexerOctave*)self, param1, param2, param3);
}

const char* q_scilexeroctave_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeroctave_language(void* self) {
    return QsciLexerOctave_Language((QsciLexerOctave*)self);
}

const char* q_scilexeroctave_lexer(void* self) {
    return QsciLexerOctave_Lexer((QsciLexerOctave*)self);
}

const char* q_scilexeroctave_keywords(void* self, int set) {
    return QsciLexerOctave_Keywords((QsciLexerOctave*)self, set);
}

const char* q_scilexeroctave_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeroctave_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexeroctave_default_color(void* self, int style) {
    return QsciLexerMatlab_DefaultColor((QsciLexerMatlab*)self, style);
}

QFont* q_scilexeroctave_default_font(void* self, int style) {
    return QsciLexerMatlab_DefaultFont((QsciLexerMatlab*)self, style);
}

QsciAbstractAPIs* q_scilexeroctave_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeroctave_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexeroctave_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexeroctave_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeroctave_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeroctave_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeroctave_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeroctave_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeroctave_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeroctave_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeroctave_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeroctave_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeroctave_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeroctave_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeroctave_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeroctave_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeroctave_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeroctave_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeroctave_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexeroctave_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexeroctave_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexeroctave_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeroctave_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeroctave_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeroctave_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeroctave_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeroctave_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeroctave_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeroctave_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeroctave_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexeroctave_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexeroctave_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexeroctave_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexeroctave_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexeroctave_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexeroctave_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexeroctave_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexeroctave_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexeroctave_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexeroctave_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeroctave_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeroctave_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeroctave_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexeroctave_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeroctave_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeroctave_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeroctave_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeroctave_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeroctave_dynamic_property_names\n");
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

QBindingStorage* q_scilexeroctave_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeroctave_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeroctave_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeroctave_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeroctave_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeroctave_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeroctave_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexeroctave_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexeroctave_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexeroctave_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexeroctave_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexeroctave_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexeroctave_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeroctave_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_lexer_id(void* self) {
    return QsciLexerOctave_LexerId((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_lexer_id(void* self) {
    return QsciLexerOctave_QBaseLexerId((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnLexerId((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_auto_completion_fillups(void* self) {
    return QsciLexerOctave_AutoCompletionFillups((QsciLexerOctave*)self);
}

const char* q_scilexeroctave_qbase_auto_completion_fillups(void* self) {
    return QsciLexerOctave_QBaseAutoCompletionFillups((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerOctave_OnAutoCompletionFillups((QsciLexerOctave*)self, (intptr_t)callback);
}

const char** q_scilexeroctave_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerOctave_AutoCompletionWordSeparators((QsciLexerOctave*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeroctave_auto_completion_word_separators\n");
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

const char** q_scilexeroctave_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerOctave_QBaseAutoCompletionWordSeparators((QsciLexerOctave*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeroctave_auto_completion_word_separators\n");
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

void q_scilexeroctave_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerOctave_OnAutoCompletionWordSeparators((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_block_end(void* self, int* style) {
    return QsciLexerOctave_BlockEnd((QsciLexerOctave*)self, style);
}

const char* q_scilexeroctave_qbase_block_end(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockEnd((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerOctave_OnBlockEnd((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_block_lookback(void* self) {
    return QsciLexerOctave_BlockLookback((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_block_lookback(void* self) {
    return QsciLexerOctave_QBaseBlockLookback((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnBlockLookback((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_block_start(void* self, int* style) {
    return QsciLexerOctave_BlockStart((QsciLexerOctave*)self, style);
}

const char* q_scilexeroctave_qbase_block_start(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockStart((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerOctave_OnBlockStart((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_block_start_keyword(void* self, int* style) {
    return QsciLexerOctave_BlockStartKeyword((QsciLexerOctave*)self, style);
}

const char* q_scilexeroctave_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerOctave_QBaseBlockStartKeyword((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerOctave_OnBlockStartKeyword((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_brace_style(void* self) {
    return QsciLexerOctave_BraceStyle((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_brace_style(void* self) {
    return QsciLexerOctave_QBaseBraceStyle((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnBraceStyle((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_case_sensitive(void* self) {
    return QsciLexerOctave_CaseSensitive((QsciLexerOctave*)self);
}

bool q_scilexeroctave_qbase_case_sensitive(void* self) {
    return QsciLexerOctave_QBaseCaseSensitive((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerOctave_OnCaseSensitive((QsciLexerOctave*)self, (intptr_t)callback);
}

QColor* q_scilexeroctave_color(void* self, int style) {
    return QsciLexerOctave_Color((QsciLexerOctave*)self, style);
}

QColor* q_scilexeroctave_qbase_color(void* self, int style) {
    return QsciLexerOctave_QBaseColor((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerOctave_OnColor((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_eol_fill(void* self, int style) {
    return QsciLexerOctave_EolFill((QsciLexerOctave*)self, style);
}

bool q_scilexeroctave_qbase_eol_fill(void* self, int style) {
    return QsciLexerOctave_QBaseEolFill((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerOctave_OnEolFill((QsciLexerOctave*)self, (intptr_t)callback);
}

QFont* q_scilexeroctave_font(void* self, int style) {
    return QsciLexerOctave_Font((QsciLexerOctave*)self, style);
}

QFont* q_scilexeroctave_qbase_font(void* self, int style) {
    return QsciLexerOctave_QBaseFont((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerOctave_OnFont((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_indentation_guide_view(void* self) {
    return QsciLexerOctave_IndentationGuideView((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_indentation_guide_view(void* self) {
    return QsciLexerOctave_QBaseIndentationGuideView((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnIndentationGuideView((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_default_style(void* self) {
    return QsciLexerOctave_DefaultStyle((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_default_style(void* self) {
    return QsciLexerOctave_QBaseDefaultStyle((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnDefaultStyle((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_description(void* self, int style) {
    libqt_string _str = QsciLexerOctave_Description((QsciLexerOctave*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeroctave_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerOctave_QBaseDescription((QsciLexerOctave*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeroctave_on_description(void* self, const char* (*callback)(void*, int)) {
    QsciLexerOctave_OnDescription((QsciLexerOctave*)self, (intptr_t)callback);
}

QColor* q_scilexeroctave_paper(void* self, int style) {
    return QsciLexerOctave_Paper((QsciLexerOctave*)self, style);
}

QColor* q_scilexeroctave_qbase_paper(void* self, int style) {
    return QsciLexerOctave_QBasePaper((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerOctave_OnPaper((QsciLexerOctave*)self, (intptr_t)callback);
}

QColor* q_scilexeroctave_default_color2(void* self, int style) {
    return QsciLexerOctave_DefaultColor2((QsciLexerOctave*)self, style);
}

QColor* q_scilexeroctave_qbase_default_color2(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultColor2((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerOctave_OnDefaultColor2((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_default_eol_fill(void* self, int style) {
    return QsciLexerOctave_DefaultEolFill((QsciLexerOctave*)self, style);
}

bool q_scilexeroctave_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultEolFill((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerOctave_OnDefaultEolFill((QsciLexerOctave*)self, (intptr_t)callback);
}

QFont* q_scilexeroctave_default_font2(void* self, int style) {
    return QsciLexerOctave_DefaultFont2((QsciLexerOctave*)self, style);
}

QFont* q_scilexeroctave_qbase_default_font2(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultFont2((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerOctave_OnDefaultFont2((QsciLexerOctave*)self, (intptr_t)callback);
}

QColor* q_scilexeroctave_default_paper2(void* self, int style) {
    return QsciLexerOctave_DefaultPaper2((QsciLexerOctave*)self, style);
}

QColor* q_scilexeroctave_qbase_default_paper2(void* self, int style) {
    return QsciLexerOctave_QBaseDefaultPaper2((QsciLexerOctave*)self, style);
}

void q_scilexeroctave_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerOctave_OnDefaultPaper2((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_editor(void* self, void* editor) {
    QsciLexerOctave_SetEditor((QsciLexerOctave*)self, (QsciScintilla*)editor);
}

void q_scilexeroctave_qbase_set_editor(void* self, void* editor) {
    QsciLexerOctave_QBaseSetEditor((QsciLexerOctave*)self, (QsciScintilla*)editor);
}

void q_scilexeroctave_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnSetEditor((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_refresh_properties(void* self) {
    QsciLexerOctave_RefreshProperties((QsciLexerOctave*)self);
}

void q_scilexeroctave_qbase_refresh_properties(void* self) {
    QsciLexerOctave_QBaseRefreshProperties((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerOctave_OnRefreshProperties((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_style_bits_needed(void* self) {
    return QsciLexerOctave_StyleBitsNeeded((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_style_bits_needed(void* self) {
    return QsciLexerOctave_QBaseStyleBitsNeeded((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnStyleBitsNeeded((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_word_characters(void* self) {
    return QsciLexerOctave_WordCharacters((QsciLexerOctave*)self);
}

const char* q_scilexeroctave_qbase_word_characters(void* self) {
    return QsciLexerOctave_QBaseWordCharacters((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerOctave_OnWordCharacters((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerOctave_SetAutoIndentStyle((QsciLexerOctave*)self, autoindentstyle);
}

void q_scilexeroctave_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerOctave_QBaseSetAutoIndentStyle((QsciLexerOctave*)self, autoindentstyle);
}

void q_scilexeroctave_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerOctave_OnSetAutoIndentStyle((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_color(void* self, void* c, int style) {
    QsciLexerOctave_SetColor((QsciLexerOctave*)self, (QColor*)c, style);
}

void q_scilexeroctave_qbase_set_color(void* self, void* c, int style) {
    QsciLexerOctave_QBaseSetColor((QsciLexerOctave*)self, (QColor*)c, style);
}

void q_scilexeroctave_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerOctave_OnSetColor((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerOctave_SetEolFill((QsciLexerOctave*)self, eoffill, style);
}

void q_scilexeroctave_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerOctave_QBaseSetEolFill((QsciLexerOctave*)self, eoffill, style);
}

void q_scilexeroctave_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerOctave_OnSetEolFill((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_font(void* self, void* f, int style) {
    QsciLexerOctave_SetFont((QsciLexerOctave*)self, (QFont*)f, style);
}

void q_scilexeroctave_qbase_set_font(void* self, void* f, int style) {
    QsciLexerOctave_QBaseSetFont((QsciLexerOctave*)self, (QFont*)f, style);
}

void q_scilexeroctave_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerOctave_OnSetFont((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_set_paper(void* self, void* c, int style) {
    QsciLexerOctave_SetPaper((QsciLexerOctave*)self, (QColor*)c, style);
}

void q_scilexeroctave_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerOctave_QBaseSetPaper((QsciLexerOctave*)self, (QColor*)c, style);
}

void q_scilexeroctave_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerOctave_OnSetPaper((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_ReadProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeroctave_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_QBaseReadProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeroctave_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerOctave_OnReadProperties((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_WriteProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeroctave_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerOctave_QBaseWriteProperties((QsciLexerOctave*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeroctave_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerOctave_OnWriteProperties((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_event(void* self, void* event) {
    return QsciLexerOctave_Event((QsciLexerOctave*)self, (QEvent*)event);
}

bool q_scilexeroctave_qbase_event(void* self, void* event) {
    return QsciLexerOctave_QBaseEvent((QsciLexerOctave*)self, (QEvent*)event);
}

void q_scilexeroctave_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerOctave_OnEvent((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_event_filter(void* self, void* watched, void* event) {
    return QsciLexerOctave_EventFilter((QsciLexerOctave*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeroctave_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerOctave_QBaseEventFilter((QsciLexerOctave*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeroctave_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerOctave_OnEventFilter((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_timer_event(void* self, void* event) {
    QsciLexerOctave_TimerEvent((QsciLexerOctave*)self, (QTimerEvent*)event);
}

void q_scilexeroctave_qbase_timer_event(void* self, void* event) {
    QsciLexerOctave_QBaseTimerEvent((QsciLexerOctave*)self, (QTimerEvent*)event);
}

void q_scilexeroctave_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnTimerEvent((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_child_event(void* self, void* event) {
    QsciLexerOctave_ChildEvent((QsciLexerOctave*)self, (QChildEvent*)event);
}

void q_scilexeroctave_qbase_child_event(void* self, void* event) {
    QsciLexerOctave_QBaseChildEvent((QsciLexerOctave*)self, (QChildEvent*)event);
}

void q_scilexeroctave_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnChildEvent((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_custom_event(void* self, void* event) {
    QsciLexerOctave_CustomEvent((QsciLexerOctave*)self, (QEvent*)event);
}

void q_scilexeroctave_qbase_custom_event(void* self, void* event) {
    QsciLexerOctave_QBaseCustomEvent((QsciLexerOctave*)self, (QEvent*)event);
}

void q_scilexeroctave_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnCustomEvent((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_connect_notify(void* self, void* signal) {
    QsciLexerOctave_ConnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

void q_scilexeroctave_qbase_connect_notify(void* self, void* signal) {
    QsciLexerOctave_QBaseConnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

void q_scilexeroctave_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnConnectNotify((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_disconnect_notify(void* self, void* signal) {
    QsciLexerOctave_DisconnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

void q_scilexeroctave_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerOctave_QBaseDisconnectNotify((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

void q_scilexeroctave_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerOctave_OnDisconnectNotify((QsciLexerOctave*)self, (intptr_t)callback);
}

char* q_scilexeroctave_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerOctave_TextAsBytes((QsciLexerOctave*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexeroctave_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerOctave_QBaseTextAsBytes((QsciLexerOctave*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeroctave_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerOctave_OnTextAsBytes((QsciLexerOctave*)self, (intptr_t)callback);
}

const char* q_scilexeroctave_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerOctave_BytesAsText((QsciLexerOctave*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeroctave_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerOctave_QBaseBytesAsText((QsciLexerOctave*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeroctave_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerOctave_OnBytesAsText((QsciLexerOctave*)self, (intptr_t)callback);
}

QObject* q_scilexeroctave_sender(void* self) {
    return QsciLexerOctave_Sender((QsciLexerOctave*)self);
}

QObject* q_scilexeroctave_qbase_sender(void* self) {
    return QsciLexerOctave_QBaseSender((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerOctave_OnSender((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_sender_signal_index(void* self) {
    return QsciLexerOctave_SenderSignalIndex((QsciLexerOctave*)self);
}

int32_t q_scilexeroctave_qbase_sender_signal_index(void* self) {
    return QsciLexerOctave_QBaseSenderSignalIndex((QsciLexerOctave*)self);
}

void q_scilexeroctave_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerOctave_OnSenderSignalIndex((QsciLexerOctave*)self, (intptr_t)callback);
}

int32_t q_scilexeroctave_receivers(void* self, const char* signal) {
    return QsciLexerOctave_Receivers((QsciLexerOctave*)self, signal);
}

int32_t q_scilexeroctave_qbase_receivers(void* self, const char* signal) {
    return QsciLexerOctave_QBaseReceivers((QsciLexerOctave*)self, signal);
}

void q_scilexeroctave_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerOctave_OnReceivers((QsciLexerOctave*)self, (intptr_t)callback);
}

bool q_scilexeroctave_is_signal_connected(void* self, void* signal) {
    return QsciLexerOctave_IsSignalConnected((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

bool q_scilexeroctave_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerOctave_QBaseIsSignalConnected((QsciLexerOctave*)self, (QMetaMethod*)signal);
}

void q_scilexeroctave_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerOctave_OnIsSignalConnected((QsciLexerOctave*)self, (intptr_t)callback);
}

void q_scilexeroctave_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeroctave_delete(void* self) {
    QsciLexerOctave_Delete((QsciLexerOctave*)(self));
}
