#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexeredifact.hpp"
#include "libqscilexeredifact.h"

QsciLexerEDIFACT* q_scilexeredifact_new() {
    return QsciLexerEDIFACT_new();
}

QsciLexerEDIFACT* q_scilexeredifact_new2(void* parent) {
    return QsciLexerEDIFACT_new2((QObject*)parent);
}

const QMetaObject* q_scilexeredifact_meta_object(void* self) {
    return QsciLexerEDIFACT_MetaObject((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerEDIFACT_OnMetaObject((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexeredifact_qbase_meta_object(void* self) {
    return QsciLexerEDIFACT_QBaseMetaObject((QsciLexerEDIFACT*)self);
}

void* q_scilexeredifact_metacast(void* self, const char* param1) {
    return QsciLexerEDIFACT_Metacast((QsciLexerEDIFACT*)self, param1);
}

void q_scilexeredifact_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerEDIFACT_OnMetacast((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void* q_scilexeredifact_qbase_metacast(void* self, const char* param1) {
    return QsciLexerEDIFACT_QBaseMetacast((QsciLexerEDIFACT*)self, param1);
}

int32_t q_scilexeredifact_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerEDIFACT_Metacall((QsciLexerEDIFACT*)self, param1, param2, param3);
}

void q_scilexeredifact_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerEDIFACT_OnMetacall((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerEDIFACT_QBaseMetacall((QsciLexerEDIFACT*)self, param1, param2, param3);
}

const char* q_scilexeredifact_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeredifact_language(void* self) {
    return QsciLexerEDIFACT_Language((QsciLexerEDIFACT*)self);
}

const char* q_scilexeredifact_lexer(void* self) {
    return QsciLexerEDIFACT_Lexer((QsciLexerEDIFACT*)self);
}

QColor* q_scilexeredifact_default_color(void* self, int style) {
    return QsciLexerEDIFACT_DefaultColor((QsciLexerEDIFACT*)self, style);
}

const char* q_scilexeredifact_description(void* self, int style) {
    libqt_string _str = QsciLexerEDIFACT_Description((QsciLexerEDIFACT*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeredifact_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeredifact_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexeredifact_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexeredifact_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QFont* q_scilexeredifact_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

QColor* q_scilexeredifact_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexeredifact_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexeredifact_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexeredifact_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexeredifact_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexeredifact_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexeredifact_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexeredifact_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexeredifact_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeredifact_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeredifact_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexeredifact_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeredifact_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexeredifact_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeredifact_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexeredifact_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexeredifact_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexeredifact_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexeredifact_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexeredifact_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexeredifact_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeredifact_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexeredifact_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexeredifact_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexeredifact_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexeredifact_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexeredifact_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexeredifact_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexeredifact_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexeredifact_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexeredifact_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexeredifact_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexeredifact_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexeredifact_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexeredifact_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexeredifact_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexeredifact_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexeredifact_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexeredifact_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexeredifact_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexeredifact_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexeredifact_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexeredifact_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexeredifact_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexeredifact_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexeredifact_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexeredifact_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexeredifact_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexeredifact_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexeredifact_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeredifact_dynamic_property_names\n");
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

QBindingStorage* q_scilexeredifact_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexeredifact_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexeredifact_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexeredifact_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexeredifact_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexeredifact_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexeredifact_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexeredifact_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexeredifact_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexeredifact_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexeredifact_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexeredifact_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexeredifact_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexeredifact_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexeredifact_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexeredifact_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexeredifact_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexeredifact_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_lexer_id(void* self) {
    return QsciLexerEDIFACT_LexerId((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_lexer_id(void* self) {
    return QsciLexerEDIFACT_QBaseLexerId((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnLexerId((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_auto_completion_fillups(void* self) {
    return QsciLexerEDIFACT_AutoCompletionFillups((QsciLexerEDIFACT*)self);
}

const char* q_scilexeredifact_qbase_auto_completion_fillups(void* self) {
    return QsciLexerEDIFACT_QBaseAutoCompletionFillups((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerEDIFACT_OnAutoCompletionFillups((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char** q_scilexeredifact_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerEDIFACT_AutoCompletionWordSeparators((QsciLexerEDIFACT*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeredifact_auto_completion_word_separators\n");
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

const char** q_scilexeredifact_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerEDIFACT_QBaseAutoCompletionWordSeparators((QsciLexerEDIFACT*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexeredifact_auto_completion_word_separators\n");
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

void q_scilexeredifact_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerEDIFACT_OnAutoCompletionWordSeparators((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_block_end(void* self, int* style) {
    return QsciLexerEDIFACT_BlockEnd((QsciLexerEDIFACT*)self, style);
}

const char* q_scilexeredifact_qbase_block_end(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockEnd((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockEnd((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_block_lookback(void* self) {
    return QsciLexerEDIFACT_BlockLookback((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_block_lookback(void* self) {
    return QsciLexerEDIFACT_QBaseBlockLookback((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnBlockLookback((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_block_start(void* self, int* style) {
    return QsciLexerEDIFACT_BlockStart((QsciLexerEDIFACT*)self, style);
}

const char* q_scilexeredifact_qbase_block_start(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockStart((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockStart((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_block_start_keyword(void* self, int* style) {
    return QsciLexerEDIFACT_BlockStartKeyword((QsciLexerEDIFACT*)self, style);
}

const char* q_scilexeredifact_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerEDIFACT_QBaseBlockStartKeyword((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerEDIFACT_OnBlockStartKeyword((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_brace_style(void* self) {
    return QsciLexerEDIFACT_BraceStyle((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_brace_style(void* self) {
    return QsciLexerEDIFACT_QBaseBraceStyle((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnBraceStyle((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_case_sensitive(void* self) {
    return QsciLexerEDIFACT_CaseSensitive((QsciLexerEDIFACT*)self);
}

bool q_scilexeredifact_qbase_case_sensitive(void* self) {
    return QsciLexerEDIFACT_QBaseCaseSensitive((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerEDIFACT_OnCaseSensitive((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QColor* q_scilexeredifact_color(void* self, int style) {
    return QsciLexerEDIFACT_Color((QsciLexerEDIFACT*)self, style);
}

QColor* q_scilexeredifact_qbase_color(void* self, int style) {
    return QsciLexerEDIFACT_QBaseColor((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnColor((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_EolFill((QsciLexerEDIFACT*)self, style);
}

bool q_scilexeredifact_qbase_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_QBaseEolFill((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnEolFill((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QFont* q_scilexeredifact_font(void* self, int style) {
    return QsciLexerEDIFACT_Font((QsciLexerEDIFACT*)self, style);
}

QFont* q_scilexeredifact_qbase_font(void* self, int style) {
    return QsciLexerEDIFACT_QBaseFont((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnFont((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_indentation_guide_view(void* self) {
    return QsciLexerEDIFACT_IndentationGuideView((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_indentation_guide_view(void* self) {
    return QsciLexerEDIFACT_QBaseIndentationGuideView((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnIndentationGuideView((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_keywords(void* self, int set) {
    return QsciLexerEDIFACT_Keywords((QsciLexerEDIFACT*)self, set);
}

const char* q_scilexeredifact_qbase_keywords(void* self, int set) {
    return QsciLexerEDIFACT_QBaseKeywords((QsciLexerEDIFACT*)self, set);
}

void q_scilexeredifact_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnKeywords((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_default_style(void* self) {
    return QsciLexerEDIFACT_DefaultStyle((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_default_style(void* self) {
    return QsciLexerEDIFACT_QBaseDefaultStyle((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnDefaultStyle((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QColor* q_scilexeredifact_paper(void* self, int style) {
    return QsciLexerEDIFACT_Paper((QsciLexerEDIFACT*)self, style);
}

QColor* q_scilexeredifact_qbase_paper(void* self, int style) {
    return QsciLexerEDIFACT_QBasePaper((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnPaper((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QColor* q_scilexeredifact_default_color2(void* self, int style) {
    return QsciLexerEDIFACT_DefaultColor2((QsciLexerEDIFACT*)self, style);
}

QColor* q_scilexeredifact_qbase_default_color2(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultColor2((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultColor2((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_default_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_DefaultEolFill((QsciLexerEDIFACT*)self, style);
}

bool q_scilexeredifact_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultEolFill((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultEolFill((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QFont* q_scilexeredifact_default_font2(void* self, int style) {
    return QsciLexerEDIFACT_DefaultFont2((QsciLexerEDIFACT*)self, style);
}

QFont* q_scilexeredifact_qbase_default_font2(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultFont2((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultFont2((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QColor* q_scilexeredifact_default_paper2(void* self, int style) {
    return QsciLexerEDIFACT_DefaultPaper2((QsciLexerEDIFACT*)self, style);
}

QColor* q_scilexeredifact_qbase_default_paper2(void* self, int style) {
    return QsciLexerEDIFACT_QBaseDefaultPaper2((QsciLexerEDIFACT*)self, style);
}

void q_scilexeredifact_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnDefaultPaper2((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_editor(void* self, void* editor) {
    QsciLexerEDIFACT_SetEditor((QsciLexerEDIFACT*)self, (QsciScintilla*)editor);
}

void q_scilexeredifact_qbase_set_editor(void* self, void* editor) {
    QsciLexerEDIFACT_QBaseSetEditor((QsciLexerEDIFACT*)self, (QsciScintilla*)editor);
}

void q_scilexeredifact_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnSetEditor((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_refresh_properties(void* self) {
    QsciLexerEDIFACT_RefreshProperties((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_qbase_refresh_properties(void* self) {
    QsciLexerEDIFACT_QBaseRefreshProperties((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerEDIFACT_OnRefreshProperties((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_style_bits_needed(void* self) {
    return QsciLexerEDIFACT_StyleBitsNeeded((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_style_bits_needed(void* self) {
    return QsciLexerEDIFACT_QBaseStyleBitsNeeded((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnStyleBitsNeeded((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_word_characters(void* self) {
    return QsciLexerEDIFACT_WordCharacters((QsciLexerEDIFACT*)self);
}

const char* q_scilexeredifact_qbase_word_characters(void* self) {
    return QsciLexerEDIFACT_QBaseWordCharacters((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerEDIFACT_OnWordCharacters((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerEDIFACT_SetAutoIndentStyle((QsciLexerEDIFACT*)self, autoindentstyle);
}

void q_scilexeredifact_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerEDIFACT_QBaseSetAutoIndentStyle((QsciLexerEDIFACT*)self, autoindentstyle);
}

void q_scilexeredifact_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerEDIFACT_OnSetAutoIndentStyle((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_color(void* self, void* c, int style) {
    QsciLexerEDIFACT_SetColor((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

void q_scilexeredifact_qbase_set_color(void* self, void* c, int style) {
    QsciLexerEDIFACT_QBaseSetColor((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

void q_scilexeredifact_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetColor((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerEDIFACT_SetEolFill((QsciLexerEDIFACT*)self, eoffill, style);
}

void q_scilexeredifact_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerEDIFACT_QBaseSetEolFill((QsciLexerEDIFACT*)self, eoffill, style);
}

void q_scilexeredifact_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerEDIFACT_OnSetEolFill((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_font(void* self, void* f, int style) {
    QsciLexerEDIFACT_SetFont((QsciLexerEDIFACT*)self, (QFont*)f, style);
}

void q_scilexeredifact_qbase_set_font(void* self, void* f, int style) {
    QsciLexerEDIFACT_QBaseSetFont((QsciLexerEDIFACT*)self, (QFont*)f, style);
}

void q_scilexeredifact_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetFont((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_set_paper(void* self, void* c, int style) {
    QsciLexerEDIFACT_SetPaper((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

void q_scilexeredifact_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerEDIFACT_QBaseSetPaper((QsciLexerEDIFACT*)self, (QColor*)c, style);
}

void q_scilexeredifact_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerEDIFACT_OnSetPaper((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_ReadProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeredifact_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_QBaseReadProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeredifact_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerEDIFACT_OnReadProperties((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_WriteProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexeredifact_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerEDIFACT_QBaseWriteProperties((QsciLexerEDIFACT*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexeredifact_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerEDIFACT_OnWriteProperties((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_event(void* self, void* event) {
    return QsciLexerEDIFACT_Event((QsciLexerEDIFACT*)self, (QEvent*)event);
}

bool q_scilexeredifact_qbase_event(void* self, void* event) {
    return QsciLexerEDIFACT_QBaseEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

void q_scilexeredifact_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnEvent((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_event_filter(void* self, void* watched, void* event) {
    return QsciLexerEDIFACT_EventFilter((QsciLexerEDIFACT*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexeredifact_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerEDIFACT_QBaseEventFilter((QsciLexerEDIFACT*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexeredifact_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerEDIFACT_OnEventFilter((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_timer_event(void* self, void* event) {
    QsciLexerEDIFACT_TimerEvent((QsciLexerEDIFACT*)self, (QTimerEvent*)event);
}

void q_scilexeredifact_qbase_timer_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseTimerEvent((QsciLexerEDIFACT*)self, (QTimerEvent*)event);
}

void q_scilexeredifact_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnTimerEvent((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_child_event(void* self, void* event) {
    QsciLexerEDIFACT_ChildEvent((QsciLexerEDIFACT*)self, (QChildEvent*)event);
}

void q_scilexeredifact_qbase_child_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseChildEvent((QsciLexerEDIFACT*)self, (QChildEvent*)event);
}

void q_scilexeredifact_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnChildEvent((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_custom_event(void* self, void* event) {
    QsciLexerEDIFACT_CustomEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

void q_scilexeredifact_qbase_custom_event(void* self, void* event) {
    QsciLexerEDIFACT_QBaseCustomEvent((QsciLexerEDIFACT*)self, (QEvent*)event);
}

void q_scilexeredifact_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnCustomEvent((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_connect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_ConnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

void q_scilexeredifact_qbase_connect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_QBaseConnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

void q_scilexeredifact_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnConnectNotify((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_disconnect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_DisconnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

void q_scilexeredifact_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerEDIFACT_QBaseDisconnectNotify((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

void q_scilexeredifact_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnDisconnectNotify((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

char* q_scilexeredifact_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerEDIFACT_TextAsBytes((QsciLexerEDIFACT*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexeredifact_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerEDIFACT_QBaseTextAsBytes((QsciLexerEDIFACT*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeredifact_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerEDIFACT_OnTextAsBytes((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

const char* q_scilexeredifact_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerEDIFACT_BytesAsText((QsciLexerEDIFACT*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexeredifact_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerEDIFACT_QBaseBytesAsText((QsciLexerEDIFACT*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexeredifact_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerEDIFACT_OnBytesAsText((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

QObject* q_scilexeredifact_sender(void* self) {
    return QsciLexerEDIFACT_Sender((QsciLexerEDIFACT*)self);
}

QObject* q_scilexeredifact_qbase_sender(void* self) {
    return QsciLexerEDIFACT_QBaseSender((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerEDIFACT_OnSender((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_sender_signal_index(void* self) {
    return QsciLexerEDIFACT_SenderSignalIndex((QsciLexerEDIFACT*)self);
}

int32_t q_scilexeredifact_qbase_sender_signal_index(void* self) {
    return QsciLexerEDIFACT_QBaseSenderSignalIndex((QsciLexerEDIFACT*)self);
}

void q_scilexeredifact_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerEDIFACT_OnSenderSignalIndex((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

int32_t q_scilexeredifact_receivers(void* self, const char* signal) {
    return QsciLexerEDIFACT_Receivers((QsciLexerEDIFACT*)self, signal);
}

int32_t q_scilexeredifact_qbase_receivers(void* self, const char* signal) {
    return QsciLexerEDIFACT_QBaseReceivers((QsciLexerEDIFACT*)self, signal);
}

void q_scilexeredifact_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerEDIFACT_OnReceivers((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

bool q_scilexeredifact_is_signal_connected(void* self, void* signal) {
    return QsciLexerEDIFACT_IsSignalConnected((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

bool q_scilexeredifact_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerEDIFACT_QBaseIsSignalConnected((QsciLexerEDIFACT*)self, (QMetaMethod*)signal);
}

void q_scilexeredifact_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerEDIFACT_OnIsSignalConnected((QsciLexerEDIFACT*)self, (intptr_t)callback);
}

void q_scilexeredifact_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexeredifact_delete(void* self) {
    QsciLexerEDIFACT_Delete((QsciLexerEDIFACT*)(self));
}
