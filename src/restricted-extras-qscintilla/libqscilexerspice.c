#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerspice.hpp"
#include "libqscilexerspice.h"

QsciLexerSpice* q_scilexerspice_new() {
    return QsciLexerSpice_new();
}

QsciLexerSpice* q_scilexerspice_new2(void* parent) {
    return QsciLexerSpice_new2((QObject*)parent);
}

const QMetaObject* q_scilexerspice_meta_object(void* self) {
    return QsciLexerSpice_MetaObject((QsciLexerSpice*)self);
}

void q_scilexerspice_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerSpice_OnMetaObject((QsciLexerSpice*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerspice_super_meta_object(void* self) {
    return QsciLexerSpice_SuperMetaObject((QsciLexerSpice*)self);
}

void* q_scilexerspice_metacast(void* self, const char* param1) {
    return QsciLexerSpice_Metacast((QsciLexerSpice*)self, param1);
}

void q_scilexerspice_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerSpice_OnMetacast((QsciLexerSpice*)self, (intptr_t)callback);
}

void* q_scilexerspice_super_metacast(void* self, const char* param1) {
    return QsciLexerSpice_SuperMetacast((QsciLexerSpice*)self, param1);
}

int32_t q_scilexerspice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSpice_Metacall((QsciLexerSpice*)self, param1, param2, param3);
}

void q_scilexerspice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerSpice_OnMetacall((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSpice_SuperMetacall((QsciLexerSpice*)self, param1, param2, param3);
}

const char* q_scilexerspice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerspice_language(void* self) {
    return QsciLexerSpice_Language((QsciLexerSpice*)self);
}

const char* q_scilexerspice_lexer(void* self) {
    return QsciLexerSpice_Lexer((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_brace_style(void* self) {
    return QsciLexerSpice_BraceStyle((QsciLexerSpice*)self);
}

const char* q_scilexerspice_keywords(void* self, int set) {
    return QsciLexerSpice_Keywords((QsciLexerSpice*)self, set);
}

QColor* q_scilexerspice_default_color(void* self, int style) {
    return QsciLexerSpice_DefaultColor((QsciLexerSpice*)self, style);
}

QFont* q_scilexerspice_default_font(void* self, int style) {
    return QsciLexerSpice_DefaultFont((QsciLexerSpice*)self, style);
}

const char* q_scilexerspice_description(void* self, int style) {
    libqt_string _str = QsciLexerSpice_Description((QsciLexerSpice*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerspice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerspice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerspice_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerspice_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexerspice_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexerspice_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerspice_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerspice_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerspice_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerspice_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerspice_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerspice_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerspice_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerspice_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerspice_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerspice_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerspice_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerspice_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerspice_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerspice_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerspice_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerspice_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerspice_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerspice_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerspice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerspice_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerspice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerspice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerspice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerspice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerspice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerspice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerspice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerspice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerspice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerspice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerspice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerspice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerspice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerspice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerspice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerspice_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerspice_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerspice_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerspice_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerspice_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerspice_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerspice_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerspice_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerspice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerspice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerspice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerspice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerspice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerspice_dynamic_property_names\n");
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

QBindingStorage* q_scilexerspice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerspice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerspice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerspice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerspice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerspice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerspice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerspice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerspice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerspice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerspice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerspice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerspice_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerspice_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerspice_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerspice_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerspice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerspice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_lexer_id(void* self) {
    return QsciLexerSpice_LexerId((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_lexer_id(void* self) {
    return QsciLexerSpice_SuperLexerId((QsciLexerSpice*)self);
}

void q_scilexerspice_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnLexerId((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_auto_completion_fillups(void* self) {
    return QsciLexerSpice_AutoCompletionFillups((QsciLexerSpice*)self);
}

const char* q_scilexerspice_super_auto_completion_fillups(void* self) {
    return QsciLexerSpice_SuperAutoCompletionFillups((QsciLexerSpice*)self);
}

void q_scilexerspice_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerSpice_OnAutoCompletionFillups((QsciLexerSpice*)self, (intptr_t)callback);
}

const char** q_scilexerspice_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSpice_AutoCompletionWordSeparators((QsciLexerSpice*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerspice_auto_completion_word_separators\n");
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

const char** q_scilexerspice_super_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSpice_SuperAutoCompletionWordSeparators((QsciLexerSpice*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerspice_auto_completion_word_separators\n");
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

void q_scilexerspice_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerSpice_OnAutoCompletionWordSeparators((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_block_end(void* self, int* style) {
    return QsciLexerSpice_BlockEnd((QsciLexerSpice*)self, style);
}

const char* q_scilexerspice_super_block_end(void* self, int* style) {
    return QsciLexerSpice_SuperBlockEnd((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSpice_OnBlockEnd((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_block_lookback(void* self) {
    return QsciLexerSpice_BlockLookback((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_block_lookback(void* self) {
    return QsciLexerSpice_SuperBlockLookback((QsciLexerSpice*)self);
}

void q_scilexerspice_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnBlockLookback((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_block_start(void* self, int* style) {
    return QsciLexerSpice_BlockStart((QsciLexerSpice*)self, style);
}

const char* q_scilexerspice_super_block_start(void* self, int* style) {
    return QsciLexerSpice_SuperBlockStart((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSpice_OnBlockStart((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_block_start_keyword(void* self, int* style) {
    return QsciLexerSpice_BlockStartKeyword((QsciLexerSpice*)self, style);
}

const char* q_scilexerspice_super_block_start_keyword(void* self, int* style) {
    return QsciLexerSpice_SuperBlockStartKeyword((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSpice_OnBlockStartKeyword((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_case_sensitive(void* self) {
    return QsciLexerSpice_CaseSensitive((QsciLexerSpice*)self);
}

bool q_scilexerspice_super_case_sensitive(void* self) {
    return QsciLexerSpice_SuperCaseSensitive((QsciLexerSpice*)self);
}

void q_scilexerspice_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerSpice_OnCaseSensitive((QsciLexerSpice*)self, (intptr_t)callback);
}

QColor* q_scilexerspice_color(void* self, int style) {
    return QsciLexerSpice_Color((QsciLexerSpice*)self, style);
}

QColor* q_scilexerspice_super_color(void* self, int style) {
    return QsciLexerSpice_SuperColor((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSpice_OnColor((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_eol_fill(void* self, int style) {
    return QsciLexerSpice_EolFill((QsciLexerSpice*)self, style);
}

bool q_scilexerspice_super_eol_fill(void* self, int style) {
    return QsciLexerSpice_SuperEolFill((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerSpice_OnEolFill((QsciLexerSpice*)self, (intptr_t)callback);
}

QFont* q_scilexerspice_font(void* self, int style) {
    return QsciLexerSpice_Font((QsciLexerSpice*)self, style);
}

QFont* q_scilexerspice_super_font(void* self, int style) {
    return QsciLexerSpice_SuperFont((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerSpice_OnFont((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_indentation_guide_view(void* self) {
    return QsciLexerSpice_IndentationGuideView((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_indentation_guide_view(void* self) {
    return QsciLexerSpice_SuperIndentationGuideView((QsciLexerSpice*)self);
}

void q_scilexerspice_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnIndentationGuideView((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_default_style(void* self) {
    return QsciLexerSpice_DefaultStyle((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_default_style(void* self) {
    return QsciLexerSpice_SuperDefaultStyle((QsciLexerSpice*)self);
}

void q_scilexerspice_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnDefaultStyle((QsciLexerSpice*)self, (intptr_t)callback);
}

QColor* q_scilexerspice_paper(void* self, int style) {
    return QsciLexerSpice_Paper((QsciLexerSpice*)self, style);
}

QColor* q_scilexerspice_super_paper(void* self, int style) {
    return QsciLexerSpice_SuperPaper((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSpice_OnPaper((QsciLexerSpice*)self, (intptr_t)callback);
}

QColor* q_scilexerspice_default_color2(void* self, int style) {
    return QsciLexerSpice_DefaultColor2((QsciLexerSpice*)self, style);
}

QColor* q_scilexerspice_super_default_color2(void* self, int style) {
    return QsciLexerSpice_SuperDefaultColor2((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSpice_OnDefaultColor2((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_default_eol_fill(void* self, int style) {
    return QsciLexerSpice_DefaultEolFill((QsciLexerSpice*)self, style);
}

bool q_scilexerspice_super_default_eol_fill(void* self, int style) {
    return QsciLexerSpice_SuperDefaultEolFill((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerSpice_OnDefaultEolFill((QsciLexerSpice*)self, (intptr_t)callback);
}

QFont* q_scilexerspice_default_font2(void* self, int style) {
    return QsciLexerSpice_DefaultFont2((QsciLexerSpice*)self, style);
}

QFont* q_scilexerspice_super_default_font2(void* self, int style) {
    return QsciLexerSpice_SuperDefaultFont2((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerSpice_OnDefaultFont2((QsciLexerSpice*)self, (intptr_t)callback);
}

QColor* q_scilexerspice_default_paper2(void* self, int style) {
    return QsciLexerSpice_DefaultPaper2((QsciLexerSpice*)self, style);
}

QColor* q_scilexerspice_super_default_paper2(void* self, int style) {
    return QsciLexerSpice_SuperDefaultPaper2((QsciLexerSpice*)self, style);
}

void q_scilexerspice_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSpice_OnDefaultPaper2((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_editor(void* self, void* editor) {
    QsciLexerSpice_SetEditor((QsciLexerSpice*)self, (QsciScintilla*)editor);
}

void q_scilexerspice_super_set_editor(void* self, void* editor) {
    QsciLexerSpice_SuperSetEditor((QsciLexerSpice*)self, (QsciScintilla*)editor);
}

void q_scilexerspice_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnSetEditor((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_refresh_properties(void* self) {
    QsciLexerSpice_RefreshProperties((QsciLexerSpice*)self);
}

void q_scilexerspice_super_refresh_properties(void* self) {
    QsciLexerSpice_SuperRefreshProperties((QsciLexerSpice*)self);
}

void q_scilexerspice_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerSpice_OnRefreshProperties((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_style_bits_needed(void* self) {
    return QsciLexerSpice_StyleBitsNeeded((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_style_bits_needed(void* self) {
    return QsciLexerSpice_SuperStyleBitsNeeded((QsciLexerSpice*)self);
}

void q_scilexerspice_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnStyleBitsNeeded((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_word_characters(void* self) {
    return QsciLexerSpice_WordCharacters((QsciLexerSpice*)self);
}

const char* q_scilexerspice_super_word_characters(void* self) {
    return QsciLexerSpice_SuperWordCharacters((QsciLexerSpice*)self);
}

void q_scilexerspice_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerSpice_OnWordCharacters((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSpice_SetAutoIndentStyle((QsciLexerSpice*)self, autoindentstyle);
}

void q_scilexerspice_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSpice_SuperSetAutoIndentStyle((QsciLexerSpice*)self, autoindentstyle);
}

void q_scilexerspice_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerSpice_OnSetAutoIndentStyle((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_color(void* self, void* c, int style) {
    QsciLexerSpice_SetColor((QsciLexerSpice*)self, (QColor*)c, style);
}

void q_scilexerspice_super_set_color(void* self, void* c, int style) {
    QsciLexerSpice_SuperSetColor((QsciLexerSpice*)self, (QColor*)c, style);
}

void q_scilexerspice_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSpice_OnSetColor((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSpice_SetEolFill((QsciLexerSpice*)self, eoffill, style);
}

void q_scilexerspice_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSpice_SuperSetEolFill((QsciLexerSpice*)self, eoffill, style);
}

void q_scilexerspice_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerSpice_OnSetEolFill((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_font(void* self, void* f, int style) {
    QsciLexerSpice_SetFont((QsciLexerSpice*)self, (QFont*)f, style);
}

void q_scilexerspice_super_set_font(void* self, void* f, int style) {
    QsciLexerSpice_SuperSetFont((QsciLexerSpice*)self, (QFont*)f, style);
}

void q_scilexerspice_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSpice_OnSetFont((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_set_paper(void* self, void* c, int style) {
    QsciLexerSpice_SetPaper((QsciLexerSpice*)self, (QColor*)c, style);
}

void q_scilexerspice_super_set_paper(void* self, void* c, int style) {
    QsciLexerSpice_SuperSetPaper((QsciLexerSpice*)self, (QColor*)c, style);
}

void q_scilexerspice_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSpice_OnSetPaper((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_ReadProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerspice_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_SuperReadProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerspice_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerSpice_OnReadProperties((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_WriteProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerspice_super_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSpice_SuperWriteProperties((QsciLexerSpice*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerspice_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerSpice_OnWriteProperties((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_event(void* self, void* event) {
    return QsciLexerSpice_Event((QsciLexerSpice*)self, (QEvent*)event);
}

bool q_scilexerspice_super_event(void* self, void* event) {
    return QsciLexerSpice_SuperEvent((QsciLexerSpice*)self, (QEvent*)event);
}

void q_scilexerspice_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSpice_OnEvent((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSpice_EventFilter((QsciLexerSpice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerspice_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSpice_SuperEventFilter((QsciLexerSpice*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerspice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerSpice_OnEventFilter((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_timer_event(void* self, void* event) {
    QsciLexerSpice_TimerEvent((QsciLexerSpice*)self, (QTimerEvent*)event);
}

void q_scilexerspice_super_timer_event(void* self, void* event) {
    QsciLexerSpice_SuperTimerEvent((QsciLexerSpice*)self, (QTimerEvent*)event);
}

void q_scilexerspice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnTimerEvent((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_child_event(void* self, void* event) {
    QsciLexerSpice_ChildEvent((QsciLexerSpice*)self, (QChildEvent*)event);
}

void q_scilexerspice_super_child_event(void* self, void* event) {
    QsciLexerSpice_SuperChildEvent((QsciLexerSpice*)self, (QChildEvent*)event);
}

void q_scilexerspice_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnChildEvent((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_custom_event(void* self, void* event) {
    QsciLexerSpice_CustomEvent((QsciLexerSpice*)self, (QEvent*)event);
}

void q_scilexerspice_super_custom_event(void* self, void* event) {
    QsciLexerSpice_SuperCustomEvent((QsciLexerSpice*)self, (QEvent*)event);
}

void q_scilexerspice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnCustomEvent((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_connect_notify(void* self, void* signal) {
    QsciLexerSpice_ConnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

void q_scilexerspice_super_connect_notify(void* self, void* signal) {
    QsciLexerSpice_SuperConnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

void q_scilexerspice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnConnectNotify((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_disconnect_notify(void* self, void* signal) {
    QsciLexerSpice_DisconnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

void q_scilexerspice_super_disconnect_notify(void* self, void* signal) {
    QsciLexerSpice_SuperDisconnectNotify((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

void q_scilexerspice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerSpice_OnDisconnectNotify((QsciLexerSpice*)self, (intptr_t)callback);
}

char* q_scilexerspice_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerSpice_TextAsBytes((QsciLexerSpice*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerspice_super_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerSpice_SuperTextAsBytes((QsciLexerSpice*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerspice_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*)) {
    QsciLexerSpice_OnTextAsBytes((QsciLexerSpice*)self, (intptr_t)callback);
}

const char* q_scilexerspice_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSpice_BytesAsText((QsciLexerSpice*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerspice_super_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSpice_SuperBytesAsText((QsciLexerSpice*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerspice_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerSpice_OnBytesAsText((QsciLexerSpice*)self, (intptr_t)callback);
}

QObject* q_scilexerspice_sender(void* self) {
    return QsciLexerSpice_Sender((QsciLexerSpice*)self);
}

QObject* q_scilexerspice_super_sender(void* self) {
    return QsciLexerSpice_SuperSender((QsciLexerSpice*)self);
}

void q_scilexerspice_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerSpice_OnSender((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_sender_signal_index(void* self) {
    return QsciLexerSpice_SenderSignalIndex((QsciLexerSpice*)self);
}

int32_t q_scilexerspice_super_sender_signal_index(void* self) {
    return QsciLexerSpice_SuperSenderSignalIndex((QsciLexerSpice*)self);
}

void q_scilexerspice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerSpice_OnSenderSignalIndex((QsciLexerSpice*)self, (intptr_t)callback);
}

int32_t q_scilexerspice_receivers(void* self, const char* signal) {
    return QsciLexerSpice_Receivers((QsciLexerSpice*)self, signal);
}

int32_t q_scilexerspice_super_receivers(void* self, const char* signal) {
    return QsciLexerSpice_SuperReceivers((QsciLexerSpice*)self, signal);
}

void q_scilexerspice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerSpice_OnReceivers((QsciLexerSpice*)self, (intptr_t)callback);
}

bool q_scilexerspice_is_signal_connected(void* self, void* signal) {
    return QsciLexerSpice_IsSignalConnected((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

bool q_scilexerspice_super_is_signal_connected(void* self, void* signal) {
    return QsciLexerSpice_SuperIsSignalConnected((QsciLexerSpice*)self, (QMetaMethod*)signal);
}

void q_scilexerspice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSpice_OnIsSignalConnected((QsciLexerSpice*)self, (intptr_t)callback);
}

void q_scilexerspice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerspice_delete(void* self) {
    QsciLexerSpice_Delete((QsciLexerSpice*)(self));
}
