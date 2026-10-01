#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqscilexerhex.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexersrec.hpp"
#include "libqscilexersrec.h"

QsciLexerSRec* q_scilexersrec_new() {
    return QsciLexerSRec_New();
}

QsciLexerSRec* q_scilexersrec_new2(void* parent) {
    return QsciLexerSRec_New2((QObject*)parent);
}

const QMetaObject* q_scilexersrec_meta_object(const void* self) {
    return QsciLexerSRec_MetaObject((QsciLexerSRec*)self);
}

void q_scilexersrec_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerSRec_OnMetaObject((QsciLexerSRec*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexersrec_super_meta_object(const void* self) {
    return QsciLexerSRec_SuperMetaObject((QsciLexerSRec*)self);
}

void* q_scilexersrec_metacast(void* self, const char* param1) {
    return QsciLexerSRec_Metacast((QsciLexerSRec*)self, param1);
}

void q_scilexersrec_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerSRec_OnMetacast((QsciLexerSRec*)self, (intptr_t)callback);
}

void* q_scilexersrec_super_metacast(void* self, const char* param1) {
    return QsciLexerSRec_SuperMetacast((QsciLexerSRec*)self, param1);
}

int32_t q_scilexersrec_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSRec_Metacall((QsciLexerSRec*)self, param1, param2, param3);
}

void q_scilexersrec_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerSRec_OnMetacall((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSRec_SuperMetacall((QsciLexerSRec*)self, param1, param2, param3);
}

const char* q_scilexersrec_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_language(const void* self) {
    return QsciLexerSRec_Language((QsciLexerSRec*)self);
}

const char* q_scilexersrec_lexer(const void* self) {
    return QsciLexerSRec_Lexer((QsciLexerSRec*)self);
}

const char* q_scilexersrec_description(const void* self, int style) {
    libqt_string _str = QsciLexerSRec_Description((QsciLexerSRec*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexersrec_default_color(const void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexersrec_default_font(const void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexersrec_default_paper(const void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

QsciAbstractAPIs* q_scilexersrec_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexersrec_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexersrec_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexersrec_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexersrec_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexersrec_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexersrec_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexersrec_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexersrec_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexersrec_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersrec_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexersrec_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexersrec_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersrec_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexersrec_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexersrec_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexersrec_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexersrec_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersrec_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexersrec_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexersrec_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexersrec_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexersrec_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexersrec_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexersrec_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexersrec_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexersrec_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexersrec_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexersrec_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexersrec_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexersrec_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexersrec_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexersrec_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexersrec_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexersrec_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexersrec_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexersrec_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexersrec_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexersrec_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexersrec_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexersrec_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexersrec_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexersrec_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexersrec_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexersrec_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexersrec_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexersrec_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersrec_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexersrec_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexersrec_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexersrec_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexersrec_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexersrec_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexersrec_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexersrec_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexersrec_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexersrec_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexersrec_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexersrec_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexersrec_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexersrec_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexersrec_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexersrec_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexersrec_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexersrec_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexersrec_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_lexer_id(const void* self) {
    return QsciLexerSRec_LexerId((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_lexer_id(const void* self) {
    return QsciLexerSRec_SuperLexerId((QsciLexerSRec*)self);
}

void q_scilexersrec_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnLexerId((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_auto_completion_fillups(const void* self) {
    return QsciLexerSRec_AutoCompletionFillups((QsciLexerSRec*)self);
}

const char* q_scilexersrec_super_auto_completion_fillups(const void* self) {
    return QsciLexerSRec_SuperAutoCompletionFillups((QsciLexerSRec*)self);
}

void q_scilexersrec_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerSRec_OnAutoCompletionFillups((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char** q_scilexersrec_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerSRec_AutoCompletionWordSeparators((QsciLexerSRec*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersrec_auto_completion_word_separators\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_scilexersrec_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerSRec_SuperAutoCompletionWordSeparators((QsciLexerSRec*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexersrec_auto_completion_word_separators\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_scilexersrec_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerSRec_OnAutoCompletionWordSeparators((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_end(const void* self, int* style) {
    return QsciLexerSRec_BlockEnd((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_super_block_end(const void* self, int* style) {
    return QsciLexerSRec_SuperBlockEnd((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSRec_OnBlockEnd((const QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_block_lookback(const void* self) {
    return QsciLexerSRec_BlockLookback((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_block_lookback(const void* self) {
    return QsciLexerSRec_SuperBlockLookback((QsciLexerSRec*)self);
}

void q_scilexersrec_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnBlockLookback((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_start(const void* self, int* style) {
    return QsciLexerSRec_BlockStart((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_super_block_start(const void* self, int* style) {
    return QsciLexerSRec_SuperBlockStart((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSRec_OnBlockStart((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_start_keyword(const void* self, int* style) {
    return QsciLexerSRec_BlockStartKeyword((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerSRec_SuperBlockStartKeyword((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerSRec_OnBlockStartKeyword((const QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_brace_style(const void* self) {
    return QsciLexerSRec_BraceStyle((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_brace_style(const void* self) {
    return QsciLexerSRec_SuperBraceStyle((QsciLexerSRec*)self);
}

void q_scilexersrec_on_brace_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnBraceStyle((const QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_case_sensitive(const void* self) {
    return QsciLexerSRec_CaseSensitive((QsciLexerSRec*)self);
}

bool q_scilexersrec_super_case_sensitive(const void* self) {
    return QsciLexerSRec_SuperCaseSensitive((QsciLexerSRec*)self);
}

void q_scilexersrec_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerSRec_OnCaseSensitive((const QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_color(const void* self, int style) {
    return QsciLexerSRec_Color((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_super_color(const void* self, int style) {
    return QsciLexerSRec_SuperColor((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSRec_OnColor((const QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_eol_fill(const void* self, int style) {
    return QsciLexerSRec_EolFill((QsciLexerSRec*)self, style);
}

bool q_scilexersrec_super_eol_fill(const void* self, int style) {
    return QsciLexerSRec_SuperEolFill((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerSRec_OnEolFill((const QsciLexerSRec*)self, (intptr_t)callback);
}

QFont* q_scilexersrec_font(const void* self, int style) {
    return QsciLexerSRec_Font((QsciLexerSRec*)self, style);
}

QFont* q_scilexersrec_super_font(const void* self, int style) {
    return QsciLexerSRec_SuperFont((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerSRec_OnFont((const QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_indentation_guide_view(const void* self) {
    return QsciLexerSRec_IndentationGuideView((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_indentation_guide_view(const void* self) {
    return QsciLexerSRec_SuperIndentationGuideView((QsciLexerSRec*)self);
}

void q_scilexersrec_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnIndentationGuideView((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_keywords(const void* self, int set) {
    return QsciLexerSRec_Keywords((QsciLexerSRec*)self, set);
}

const char* q_scilexersrec_super_keywords(const void* self, int set) {
    return QsciLexerSRec_SuperKeywords((QsciLexerSRec*)self, set);
}

void q_scilexersrec_on_keywords(const void* self, const char* (*callback)(const void*, int)) {
    QsciLexerSRec_OnKeywords((const QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_default_style(const void* self) {
    return QsciLexerSRec_DefaultStyle((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_default_style(const void* self) {
    return QsciLexerSRec_SuperDefaultStyle((QsciLexerSRec*)self);
}

void q_scilexersrec_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnDefaultStyle((const QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_paper(const void* self, int style) {
    return QsciLexerSRec_Paper((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_super_paper(const void* self, int style) {
    return QsciLexerSRec_SuperPaper((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSRec_OnPaper((const QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_default_color2(const void* self, int style) {
    return QsciLexerSRec_DefaultColor2((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_super_default_color2(const void* self, int style) {
    return QsciLexerSRec_SuperDefaultColor2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSRec_OnDefaultColor2((const QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_default_eol_fill(const void* self, int style) {
    return QsciLexerSRec_DefaultEolFill((QsciLexerSRec*)self, style);
}

bool q_scilexersrec_super_default_eol_fill(const void* self, int style) {
    return QsciLexerSRec_SuperDefaultEolFill((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerSRec_OnDefaultEolFill((const QsciLexerSRec*)self, (intptr_t)callback);
}

QFont* q_scilexersrec_default_font2(const void* self, int style) {
    return QsciLexerSRec_DefaultFont2((QsciLexerSRec*)self, style);
}

QFont* q_scilexersrec_super_default_font2(const void* self, int style) {
    return QsciLexerSRec_SuperDefaultFont2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerSRec_OnDefaultFont2((const QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_default_paper2(const void* self, int style) {
    return QsciLexerSRec_DefaultPaper2((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_super_default_paper2(const void* self, int style) {
    return QsciLexerSRec_SuperDefaultPaper2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerSRec_OnDefaultPaper2((const QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_editor(void* self, void* editor) {
    QsciLexerSRec_SetEditor((QsciLexerSRec*)self, (QsciScintilla*)editor);
}

void q_scilexersrec_super_set_editor(void* self, void* editor) {
    QsciLexerSRec_SuperSetEditor((QsciLexerSRec*)self, (QsciScintilla*)editor);
}

void q_scilexersrec_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnSetEditor((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_refresh_properties(void* self) {
    QsciLexerSRec_RefreshProperties((QsciLexerSRec*)self);
}

void q_scilexersrec_super_refresh_properties(void* self) {
    QsciLexerSRec_SuperRefreshProperties((QsciLexerSRec*)self);
}

void q_scilexersrec_on_refresh_properties(void* self, void (*callback)(void*)) {
    QsciLexerSRec_OnRefreshProperties((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_style_bits_needed(const void* self) {
    return QsciLexerSRec_StyleBitsNeeded((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_super_style_bits_needed(const void* self) {
    return QsciLexerSRec_SuperStyleBitsNeeded((QsciLexerSRec*)self);
}

void q_scilexersrec_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerSRec_OnStyleBitsNeeded((const QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_word_characters(const void* self) {
    return QsciLexerSRec_WordCharacters((QsciLexerSRec*)self);
}

const char* q_scilexersrec_super_word_characters(const void* self) {
    return QsciLexerSRec_SuperWordCharacters((QsciLexerSRec*)self);
}

void q_scilexersrec_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerSRec_OnWordCharacters((const QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSRec_SetAutoIndentStyle((QsciLexerSRec*)self, autoindentstyle);
}

void q_scilexersrec_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSRec_SuperSetAutoIndentStyle((QsciLexerSRec*)self, autoindentstyle);
}

void q_scilexersrec_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerSRec_OnSetAutoIndentStyle((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_color(void* self, const void* c, int style) {
    QsciLexerSRec_SetColor((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_super_set_color(void* self, const void* c, int style) {
    QsciLexerSRec_SuperSetColor((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSRec_OnSetColor((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSRec_SetEolFill((QsciLexerSRec*)self, eoffill, style);
}

void q_scilexersrec_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSRec_SuperSetEolFill((QsciLexerSRec*)self, eoffill, style);
}

void q_scilexersrec_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerSRec_OnSetEolFill((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_font(void* self, const void* f, int style) {
    QsciLexerSRec_SetFont((QsciLexerSRec*)self, (QFont*)f, style);
}

void q_scilexersrec_super_set_font(void* self, const void* f, int style) {
    QsciLexerSRec_SuperSetFont((QsciLexerSRec*)self, (QFont*)f, style);
}

void q_scilexersrec_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSRec_OnSetFont((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_paper(void* self, const void* c, int style) {
    QsciLexerSRec_SetPaper((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_super_set_paper(void* self, const void* c, int style) {
    QsciLexerSRec_SuperSetPaper((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerSRec_OnSetPaper((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_ReadProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersrec_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_SuperReadProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersrec_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerSRec_OnReadProperties((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_WriteProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersrec_super_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_SuperWriteProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersrec_on_write_properties(const void* self, bool (*callback)(const void*, void*, const char*)) {
    QsciLexerSRec_OnWriteProperties((const QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_event(void* self, void* event) {
    return QsciLexerSRec_Event((QsciLexerSRec*)self, (QEvent*)event);
}

bool q_scilexersrec_super_event(void* self, void* event) {
    return QsciLexerSRec_SuperEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSRec_OnEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSRec_EventFilter((QsciLexerSRec*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexersrec_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSRec_SuperEventFilter((QsciLexerSRec*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexersrec_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerSRec_OnEventFilter((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_timer_event(void* self, void* event) {
    QsciLexerSRec_TimerEvent((QsciLexerSRec*)self, (QTimerEvent*)event);
}

void q_scilexersrec_super_timer_event(void* self, void* event) {
    QsciLexerSRec_SuperTimerEvent((QsciLexerSRec*)self, (QTimerEvent*)event);
}

void q_scilexersrec_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnTimerEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_child_event(void* self, void* event) {
    QsciLexerSRec_ChildEvent((QsciLexerSRec*)self, (QChildEvent*)event);
}

void q_scilexersrec_super_child_event(void* self, void* event) {
    QsciLexerSRec_SuperChildEvent((QsciLexerSRec*)self, (QChildEvent*)event);
}

void q_scilexersrec_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnChildEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_custom_event(void* self, void* event) {
    QsciLexerSRec_CustomEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_super_custom_event(void* self, void* event) {
    QsciLexerSRec_SuperCustomEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnCustomEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_connect_notify(void* self, const void* signal) {
    QsciLexerSRec_ConnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_super_connect_notify(void* self, const void* signal) {
    QsciLexerSRec_SuperConnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerSRec_OnConnectNotify((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_disconnect_notify(void* self, const void* signal) {
    QsciLexerSRec_DisconnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerSRec_SuperDisconnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerSRec_OnDisconnectNotify((QsciLexerSRec*)self, (intptr_t)callback);
}

char* q_scilexersrec_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerSRec_TextAsBytes((QsciLexerSRec*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSRec_BytesAsText((QsciLexerSRec*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexersrec_sender(const void* self) {
    return QsciLexerSRec_Sender((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_sender_signal_index(const void* self) {
    return QsciLexerSRec_SenderSignalIndex((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_receivers(const void* self, const char* signal) {
    return QsciLexerSRec_Receivers((QsciLexerSRec*)self, signal);
}

bool q_scilexersrec_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerSRec_IsSignalConnected((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexersrec_delete(void* self) {
    QsciLexerSRec_Delete((QsciLexerSRec*)(self));
}
