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
#include "libqscilexertekhex.hpp"
#include "libqscilexertekhex.h"

QsciLexerTekHex* q_scilexertekhex_new() {
    return QsciLexerTekHex_New();
}

QsciLexerTekHex* q_scilexertekhex_new2(void* parent) {
    return QsciLexerTekHex_New2((QObject*)parent);
}

const QMetaObject* q_scilexertekhex_meta_object(const void* self) {
    return QsciLexerTekHex_MetaObject((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerTekHex_OnMetaObject((QsciLexerTekHex*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexertekhex_super_meta_object(const void* self) {
    return QsciLexerTekHex_SuperMetaObject((QsciLexerTekHex*)self);
}

void* q_scilexertekhex_metacast(void* self, const char* param1) {
    return QsciLexerTekHex_Metacast((QsciLexerTekHex*)self, param1);
}

void q_scilexertekhex_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerTekHex_OnMetacast((QsciLexerTekHex*)self, (intptr_t)callback);
}

void* q_scilexertekhex_super_metacast(void* self, const char* param1) {
    return QsciLexerTekHex_SuperMetacast((QsciLexerTekHex*)self, param1);
}

int32_t q_scilexertekhex_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTekHex_Metacall((QsciLexerTekHex*)self, param1, param2, param3);
}

void q_scilexertekhex_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerTekHex_OnMetacall((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTekHex_SuperMetacall((QsciLexerTekHex*)self, param1, param2, param3);
}

const char* q_scilexertekhex_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_language(const void* self) {
    return QsciLexerTekHex_Language((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_lexer(const void* self) {
    return QsciLexerTekHex_Lexer((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_description(const void* self, int style) {
    libqt_string _str = QsciLexerTekHex_Description((QsciLexerTekHex*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexertekhex_default_color(const void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexertekhex_default_font(const void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexertekhex_default_paper(const void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

QsciAbstractAPIs* q_scilexertekhex_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexertekhex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexertekhex_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexertekhex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexertekhex_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexertekhex_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexertekhex_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexertekhex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexertekhex_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexertekhex_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexertekhex_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexertekhex_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexertekhex_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexertekhex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexertekhex_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexertekhex_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertekhex_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexertekhex_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexertekhex_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexertekhex_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexertekhex_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexertekhex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexertekhex_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexertekhex_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexertekhex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexertekhex_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexertekhex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexertekhex_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexertekhex_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexertekhex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexertekhex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexertekhex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexertekhex_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexertekhex_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexertekhex_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexertekhex_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexertekhex_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexertekhex_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexertekhex_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexertekhex_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexertekhex_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexertekhex_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexertekhex_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexertekhex_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexertekhex_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertekhex_dynamic_property_names\n");
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

QBindingStorage* q_scilexertekhex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexertekhex_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexertekhex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexertekhex_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexertekhex_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexertekhex_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexertekhex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexertekhex_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexertekhex_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexertekhex_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexertekhex_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexertekhex_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexertekhex_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexertekhex_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexertekhex_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexertekhex_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexertekhex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexertekhex_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_lexer_id(const void* self) {
    return QsciLexerTekHex_LexerId((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_lexer_id(const void* self) {
    return QsciLexerTekHex_SuperLexerId((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnLexerId((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_auto_completion_fillups(const void* self) {
    return QsciLexerTekHex_AutoCompletionFillups((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_super_auto_completion_fillups(const void* self) {
    return QsciLexerTekHex_SuperAutoCompletionFillups((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerTekHex_OnAutoCompletionFillups((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char** q_scilexertekhex_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerTekHex_AutoCompletionWordSeparators((QsciLexerTekHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertekhex_auto_completion_word_separators\n");
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

const char** q_scilexertekhex_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerTekHex_SuperAutoCompletionWordSeparators((QsciLexerTekHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexertekhex_auto_completion_word_separators\n");
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

void q_scilexertekhex_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerTekHex_OnAutoCompletionWordSeparators((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_end(const void* self, int* style) {
    return QsciLexerTekHex_BlockEnd((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_super_block_end(const void* self, int* style) {
    return QsciLexerTekHex_SuperBlockEnd((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerTekHex_OnBlockEnd((const QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_block_lookback(const void* self) {
    return QsciLexerTekHex_BlockLookback((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_block_lookback(const void* self) {
    return QsciLexerTekHex_SuperBlockLookback((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnBlockLookback((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_start(const void* self, int* style) {
    return QsciLexerTekHex_BlockStart((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_super_block_start(const void* self, int* style) {
    return QsciLexerTekHex_SuperBlockStart((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerTekHex_OnBlockStart((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_start_keyword(const void* self, int* style) {
    return QsciLexerTekHex_BlockStartKeyword((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerTekHex_SuperBlockStartKeyword((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerTekHex_OnBlockStartKeyword((const QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_brace_style(const void* self) {
    return QsciLexerTekHex_BraceStyle((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_brace_style(const void* self) {
    return QsciLexerTekHex_SuperBraceStyle((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_brace_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnBraceStyle((const QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_case_sensitive(const void* self) {
    return QsciLexerTekHex_CaseSensitive((QsciLexerTekHex*)self);
}

bool q_scilexertekhex_super_case_sensitive(const void* self) {
    return QsciLexerTekHex_SuperCaseSensitive((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerTekHex_OnCaseSensitive((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_color(const void* self, int style) {
    return QsciLexerTekHex_Color((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_super_color(const void* self, int style) {
    return QsciLexerTekHex_SuperColor((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnColor((const QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_eol_fill(const void* self, int style) {
    return QsciLexerTekHex_EolFill((QsciLexerTekHex*)self, style);
}

bool q_scilexertekhex_super_eol_fill(const void* self, int style) {
    return QsciLexerTekHex_SuperEolFill((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerTekHex_OnEolFill((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QFont* q_scilexertekhex_font(const void* self, int style) {
    return QsciLexerTekHex_Font((QsciLexerTekHex*)self, style);
}

QFont* q_scilexertekhex_super_font(const void* self, int style) {
    return QsciLexerTekHex_SuperFont((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnFont((const QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_indentation_guide_view(const void* self) {
    return QsciLexerTekHex_IndentationGuideView((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_indentation_guide_view(const void* self) {
    return QsciLexerTekHex_SuperIndentationGuideView((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnIndentationGuideView((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_keywords(const void* self, int set) {
    return QsciLexerTekHex_Keywords((QsciLexerTekHex*)self, set);
}

const char* q_scilexertekhex_super_keywords(const void* self, int set) {
    return QsciLexerTekHex_SuperKeywords((QsciLexerTekHex*)self, set);
}

void q_scilexertekhex_on_keywords(const void* self, const char* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnKeywords((const QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_default_style(const void* self) {
    return QsciLexerTekHex_DefaultStyle((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_default_style(const void* self) {
    return QsciLexerTekHex_SuperDefaultStyle((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnDefaultStyle((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_paper(const void* self, int style) {
    return QsciLexerTekHex_Paper((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_super_paper(const void* self, int style) {
    return QsciLexerTekHex_SuperPaper((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnPaper((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_default_color2(const void* self, int style) {
    return QsciLexerTekHex_DefaultColor2((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_super_default_color2(const void* self, int style) {
    return QsciLexerTekHex_SuperDefaultColor2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnDefaultColor2((const QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_default_eol_fill(const void* self, int style) {
    return QsciLexerTekHex_DefaultEolFill((QsciLexerTekHex*)self, style);
}

bool q_scilexertekhex_super_default_eol_fill(const void* self, int style) {
    return QsciLexerTekHex_SuperDefaultEolFill((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerTekHex_OnDefaultEolFill((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QFont* q_scilexertekhex_default_font2(const void* self, int style) {
    return QsciLexerTekHex_DefaultFont2((QsciLexerTekHex*)self, style);
}

QFont* q_scilexertekhex_super_default_font2(const void* self, int style) {
    return QsciLexerTekHex_SuperDefaultFont2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnDefaultFont2((const QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_default_paper2(const void* self, int style) {
    return QsciLexerTekHex_DefaultPaper2((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_super_default_paper2(const void* self, int style) {
    return QsciLexerTekHex_SuperDefaultPaper2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerTekHex_OnDefaultPaper2((const QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_editor(void* self, void* editor) {
    QsciLexerTekHex_SetEditor((QsciLexerTekHex*)self, (QsciScintilla*)editor);
}

void q_scilexertekhex_super_set_editor(void* self, void* editor) {
    QsciLexerTekHex_SuperSetEditor((QsciLexerTekHex*)self, (QsciScintilla*)editor);
}

void q_scilexertekhex_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnSetEditor((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_refresh_properties(void* self) {
    QsciLexerTekHex_RefreshProperties((QsciLexerTekHex*)self);
}

void q_scilexertekhex_super_refresh_properties(void* self) {
    QsciLexerTekHex_SuperRefreshProperties((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_refresh_properties(void* self, void (*callback)(void*)) {
    QsciLexerTekHex_OnRefreshProperties((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_style_bits_needed(const void* self) {
    return QsciLexerTekHex_StyleBitsNeeded((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_super_style_bits_needed(const void* self) {
    return QsciLexerTekHex_SuperStyleBitsNeeded((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerTekHex_OnStyleBitsNeeded((const QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_word_characters(const void* self) {
    return QsciLexerTekHex_WordCharacters((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_super_word_characters(const void* self) {
    return QsciLexerTekHex_SuperWordCharacters((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerTekHex_OnWordCharacters((const QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTekHex_SetAutoIndentStyle((QsciLexerTekHex*)self, autoindentstyle);
}

void q_scilexertekhex_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTekHex_SuperSetAutoIndentStyle((QsciLexerTekHex*)self, autoindentstyle);
}

void q_scilexertekhex_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerTekHex_OnSetAutoIndentStyle((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_color(void* self, const void* c, int style) {
    QsciLexerTekHex_SetColor((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_super_set_color(void* self, const void* c, int style) {
    QsciLexerTekHex_SuperSetColor((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerTekHex_OnSetColor((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTekHex_SetEolFill((QsciLexerTekHex*)self, eoffill, style);
}

void q_scilexertekhex_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTekHex_SuperSetEolFill((QsciLexerTekHex*)self, eoffill, style);
}

void q_scilexertekhex_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerTekHex_OnSetEolFill((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_font(void* self, const void* f, int style) {
    QsciLexerTekHex_SetFont((QsciLexerTekHex*)self, (QFont*)f, style);
}

void q_scilexertekhex_super_set_font(void* self, const void* f, int style) {
    QsciLexerTekHex_SuperSetFont((QsciLexerTekHex*)self, (QFont*)f, style);
}

void q_scilexertekhex_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerTekHex_OnSetFont((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_paper(void* self, const void* c, int style) {
    QsciLexerTekHex_SetPaper((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_super_set_paper(void* self, const void* c, int style) {
    QsciLexerTekHex_SuperSetPaper((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerTekHex_OnSetPaper((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_ReadProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertekhex_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_SuperReadProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertekhex_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTekHex_OnReadProperties((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_WriteProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertekhex_super_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_SuperWriteProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertekhex_on_write_properties(const void* self, bool (*callback)(const void*, void*, const char*)) {
    QsciLexerTekHex_OnWriteProperties((const QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_event(void* self, void* event) {
    return QsciLexerTekHex_Event((QsciLexerTekHex*)self, (QEvent*)event);
}

bool q_scilexertekhex_super_event(void* self, void* event) {
    return QsciLexerTekHex_SuperEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTekHex_OnEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTekHex_EventFilter((QsciLexerTekHex*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexertekhex_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTekHex_SuperEventFilter((QsciLexerTekHex*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexertekhex_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerTekHex_OnEventFilter((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_timer_event(void* self, void* event) {
    QsciLexerTekHex_TimerEvent((QsciLexerTekHex*)self, (QTimerEvent*)event);
}

void q_scilexertekhex_super_timer_event(void* self, void* event) {
    QsciLexerTekHex_SuperTimerEvent((QsciLexerTekHex*)self, (QTimerEvent*)event);
}

void q_scilexertekhex_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnTimerEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_child_event(void* self, void* event) {
    QsciLexerTekHex_ChildEvent((QsciLexerTekHex*)self, (QChildEvent*)event);
}

void q_scilexertekhex_super_child_event(void* self, void* event) {
    QsciLexerTekHex_SuperChildEvent((QsciLexerTekHex*)self, (QChildEvent*)event);
}

void q_scilexertekhex_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnChildEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_custom_event(void* self, void* event) {
    QsciLexerTekHex_CustomEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_super_custom_event(void* self, void* event) {
    QsciLexerTekHex_SuperCustomEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnCustomEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_connect_notify(void* self, const void* signal) {
    QsciLexerTekHex_ConnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_super_connect_notify(void* self, const void* signal) {
    QsciLexerTekHex_SuperConnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerTekHex_OnConnectNotify((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_disconnect_notify(void* self, const void* signal) {
    QsciLexerTekHex_DisconnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerTekHex_SuperDisconnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerTekHex_OnDisconnectNotify((QsciLexerTekHex*)self, (intptr_t)callback);
}

char* q_scilexertekhex_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerTekHex_TextAsBytes((QsciLexerTekHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTekHex_BytesAsText((QsciLexerTekHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexertekhex_sender(const void* self) {
    return QsciLexerTekHex_Sender((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_sender_signal_index(const void* self) {
    return QsciLexerTekHex_SenderSignalIndex((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_receivers(const void* self, const char* signal) {
    return QsciLexerTekHex_Receivers((QsciLexerTekHex*)self, signal);
}

bool q_scilexertekhex_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerTekHex_IsSignalConnected((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexertekhex_delete(void* self) {
    QsciLexerTekHex_Delete((QsciLexerTekHex*)(self));
}
