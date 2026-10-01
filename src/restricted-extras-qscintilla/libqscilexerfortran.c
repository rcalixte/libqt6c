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
    return QsciLexerFortran_New();
}

QsciLexerFortran* q_scilexerfortran_new2(void* parent) {
    return QsciLexerFortran_New2((QObject*)parent);
}

const QMetaObject* q_scilexerfortran_meta_object(const void* self) {
    return QsciLexerFortran_MetaObject((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerFortran_OnMetaObject((QsciLexerFortran*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerfortran_super_meta_object(const void* self) {
    return QsciLexerFortran_SuperMetaObject((QsciLexerFortran*)self);
}

void* q_scilexerfortran_metacast(void* self, const char* param1) {
    return QsciLexerFortran_Metacast((QsciLexerFortran*)self, param1);
}

void q_scilexerfortran_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerFortran_OnMetacast((QsciLexerFortran*)self, (intptr_t)callback);
}

void* q_scilexerfortran_super_metacast(void* self, const char* param1) {
    return QsciLexerFortran_SuperMetacast((QsciLexerFortran*)self, param1);
}

int32_t q_scilexerfortran_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerFortran_Metacall((QsciLexerFortran*)self, param1, param2, param3);
}

void q_scilexerfortran_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerFortran_OnMetacall((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerFortran_SuperMetacall((QsciLexerFortran*)self, param1, param2, param3);
}

const char* q_scilexerfortran_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_language(const void* self) {
    return QsciLexerFortran_Language((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_lexer(const void* self) {
    return QsciLexerFortran_Lexer((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_keywords(const void* self, int set) {
    return QsciLexerFortran_Keywords((QsciLexerFortran*)self, set);
}

const char* q_scilexerfortran_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerfortran_default_color(const void* self, int style) {
    return QsciLexerFortran77_DefaultColor((QsciLexerFortran77*)self, style);
}

QFont* q_scilexerfortran_default_font(const void* self, int style) {
    return QsciLexerFortran77_DefaultFont((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran_default_paper(const void* self, int style) {
    return QsciLexerFortran77_DefaultPaper((QsciLexerFortran77*)self, style);
}

bool q_scilexerfortran_fold_compact(const void* self) {
    return QsciLexerFortran77_FoldCompact((QsciLexerFortran77*)self);
}

QsciAbstractAPIs* q_scilexerfortran_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerfortran_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerfortran_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerfortran_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerfortran_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerfortran_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerfortran_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerfortran_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerfortran_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerfortran_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerfortran_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerfortran_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
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

bool q_scilexerfortran_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerfortran_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerfortran_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerfortran_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerfortran_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerfortran_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerfortran_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerfortran_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerfortran_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerfortran_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerfortran_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerfortran_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerfortran_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerfortran_children(const void* self) {
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

QMetaObject__Connection* q_scilexerfortran_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerfortran_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerfortran_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerfortran_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerfortran_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerfortran_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerfortran_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerfortran_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerfortran_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerfortran_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerfortran_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerfortran_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerfortran_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran_dynamic_property_names\n");
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

QBindingStorage* q_scilexerfortran_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerfortran_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerfortran_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerfortran_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerfortran_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerfortran_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerfortran_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerfortran_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerfortran_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerfortran_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerfortran_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerfortran_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerfortran_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerfortran_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerfortran_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerfortran_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

void q_scilexerfortran_super_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran_SuperSetFoldCompact((QsciLexerFortran*)self, fold);
}

void q_scilexerfortran_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerFortran_OnSetFoldCompact((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_lexer_id(const void* self) {
    return QsciLexerFortran_LexerId((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_lexer_id(const void* self) {
    return QsciLexerFortran_SuperLexerId((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_lexer_id(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnLexerId((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_auto_completion_fillups(const void* self) {
    return QsciLexerFortran_AutoCompletionFillups((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_super_auto_completion_fillups(const void* self) {
    return QsciLexerFortran_SuperAutoCompletionFillups((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_auto_completion_fillups(void* self, const char* (*callback)(const void*)) {
    QsciLexerFortran_OnAutoCompletionFillups((QsciLexerFortran*)self, (intptr_t)callback);
}

const char** q_scilexerfortran_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerFortran_AutoCompletionWordSeparators((QsciLexerFortran*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran_auto_completion_word_separators\n");
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

const char** q_scilexerfortran_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerFortran_SuperAutoCompletionWordSeparators((QsciLexerFortran*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran_auto_completion_word_separators\n");
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

void q_scilexerfortran_on_auto_completion_word_separators(void* self, const char** (*callback)(const void*)) {
    QsciLexerFortran_OnAutoCompletionWordSeparators((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_end(const void* self, int* style) {
    return QsciLexerFortran_BlockEnd((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_super_block_end(const void* self, int* style) {
    return QsciLexerFortran_SuperBlockEnd((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_end(void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran_OnBlockEnd((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_block_lookback(const void* self) {
    return QsciLexerFortran_BlockLookback((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_block_lookback(const void* self) {
    return QsciLexerFortran_SuperBlockLookback((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_block_lookback(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnBlockLookback((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_start(const void* self, int* style) {
    return QsciLexerFortran_BlockStart((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_super_block_start(const void* self, int* style) {
    return QsciLexerFortran_SuperBlockStart((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_start(void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran_OnBlockStart((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_block_start_keyword(const void* self, int* style) {
    return QsciLexerFortran_BlockStartKeyword((QsciLexerFortran*)self, style);
}

const char* q_scilexerfortran_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerFortran_SuperBlockStartKeyword((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_block_start_keyword(void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran_OnBlockStartKeyword((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_brace_style(const void* self) {
    return QsciLexerFortran_BraceStyle((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_brace_style(const void* self) {
    return QsciLexerFortran_SuperBraceStyle((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_brace_style(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnBraceStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_case_sensitive(const void* self) {
    return QsciLexerFortran_CaseSensitive((QsciLexerFortran*)self);
}

bool q_scilexerfortran_super_case_sensitive(const void* self) {
    return QsciLexerFortran_SuperCaseSensitive((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_case_sensitive(void* self, bool (*callback)(const void*)) {
    QsciLexerFortran_OnCaseSensitive((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_color(const void* self, int style) {
    return QsciLexerFortran_Color((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_super_color(const void* self, int style) {
    return QsciLexerFortran_SuperColor((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_color(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran_OnColor((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_eol_fill(const void* self, int style) {
    return QsciLexerFortran_EolFill((QsciLexerFortran*)self, style);
}

bool q_scilexerfortran_super_eol_fill(const void* self, int style) {
    return QsciLexerFortran_SuperEolFill((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_eol_fill(void* self, bool (*callback)(const void*, int)) {
    QsciLexerFortran_OnEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran_font(const void* self, int style) {
    return QsciLexerFortran_Font((QsciLexerFortran*)self, style);
}

QFont* q_scilexerfortran_super_font(const void* self, int style) {
    return QsciLexerFortran_SuperFont((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_font(void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerFortran_OnFont((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_indentation_guide_view(const void* self) {
    return QsciLexerFortran_IndentationGuideView((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_indentation_guide_view(const void* self) {
    return QsciLexerFortran_SuperIndentationGuideView((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_indentation_guide_view(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnIndentationGuideView((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_default_style(const void* self) {
    return QsciLexerFortran_DefaultStyle((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_default_style(const void* self) {
    return QsciLexerFortran_SuperDefaultStyle((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_default_style(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnDefaultStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_description(const void* self, int style) {
    libqt_string _str = QsciLexerFortran_Description((QsciLexerFortran*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran_on_description(void* self, const char* (*callback)(const void*, int)) {
    QsciLexerFortran_OnDescription((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_paper(const void* self, int style) {
    return QsciLexerFortran_Paper((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_super_paper(const void* self, int style) {
    return QsciLexerFortran_SuperPaper((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_paper(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran_OnPaper((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_default_color2(const void* self, int style) {
    return QsciLexerFortran_DefaultColor2((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_super_default_color2(const void* self, int style) {
    return QsciLexerFortran_SuperDefaultColor2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_color2(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran_OnDefaultColor2((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_default_eol_fill(const void* self, int style) {
    return QsciLexerFortran_DefaultEolFill((QsciLexerFortran*)self, style);
}

bool q_scilexerfortran_super_default_eol_fill(const void* self, int style) {
    return QsciLexerFortran_SuperDefaultEolFill((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_eol_fill(void* self, bool (*callback)(const void*, int)) {
    QsciLexerFortran_OnDefaultEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran_default_font2(const void* self, int style) {
    return QsciLexerFortran_DefaultFont2((QsciLexerFortran*)self, style);
}

QFont* q_scilexerfortran_super_default_font2(const void* self, int style) {
    return QsciLexerFortran_SuperDefaultFont2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_font2(void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerFortran_OnDefaultFont2((QsciLexerFortran*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran_default_paper2(const void* self, int style) {
    return QsciLexerFortran_DefaultPaper2((QsciLexerFortran*)self, style);
}

QColor* q_scilexerfortran_super_default_paper2(const void* self, int style) {
    return QsciLexerFortran_SuperDefaultPaper2((QsciLexerFortran*)self, style);
}

void q_scilexerfortran_on_default_paper2(void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran_OnDefaultPaper2((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_editor(void* self, void* editor) {
    QsciLexerFortran_SetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran_super_set_editor(void* self, void* editor) {
    QsciLexerFortran_SuperSetEditor((QsciLexerFortran*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnSetEditor((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_refresh_properties(void* self) {
    QsciLexerFortran_RefreshProperties((QsciLexerFortran*)self);
}

void q_scilexerfortran_super_refresh_properties(void* self) {
    QsciLexerFortran_SuperRefreshProperties((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_refresh_properties(void* self, void (*callback)(void*)) {
    QsciLexerFortran_OnRefreshProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran_style_bits_needed(const void* self) {
    return QsciLexerFortran_StyleBitsNeeded((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_super_style_bits_needed(const void* self) {
    return QsciLexerFortran_SuperStyleBitsNeeded((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_style_bits_needed(void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran_OnStyleBitsNeeded((QsciLexerFortran*)self, (intptr_t)callback);
}

const char* q_scilexerfortran_word_characters(const void* self) {
    return QsciLexerFortran_WordCharacters((QsciLexerFortran*)self);
}

const char* q_scilexerfortran_super_word_characters(const void* self) {
    return QsciLexerFortran_SuperWordCharacters((QsciLexerFortran*)self);
}

void q_scilexerfortran_on_word_characters(void* self, const char* (*callback)(const void*)) {
    QsciLexerFortran_OnWordCharacters((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_SetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

void q_scilexerfortran_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran_SuperSetAutoIndentStyle((QsciLexerFortran*)self, autoindentstyle);
}

void q_scilexerfortran_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerFortran_OnSetAutoIndentStyle((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_color(void* self, const void* c, int style) {
    QsciLexerFortran_SetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_super_set_color(void* self, const void* c, int style) {
    QsciLexerFortran_SuperSetColor((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran_OnSetColor((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_SetEolFill((QsciLexerFortran*)self, eoffill, style);
}

void q_scilexerfortran_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran_SuperSetEolFill((QsciLexerFortran*)self, eoffill, style);
}

void q_scilexerfortran_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerFortran_OnSetEolFill((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_font(void* self, const void* f, int style) {
    QsciLexerFortran_SetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

void q_scilexerfortran_super_set_font(void* self, const void* f, int style) {
    QsciLexerFortran_SuperSetFont((QsciLexerFortran*)self, (QFont*)f, style);
}

void q_scilexerfortran_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran_OnSetFont((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_set_paper(void* self, const void* c, int style) {
    QsciLexerFortran_SetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_super_set_paper(void* self, const void* c, int style) {
    QsciLexerFortran_SuperSetPaper((QsciLexerFortran*)self, (QColor*)c, style);
}

void q_scilexerfortran_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran_OnSetPaper((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_ReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerfortran_super_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_SuperReadProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerfortran_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerFortran_OnReadProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_WriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerfortran_super_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerFortran_SuperWriteProperties((QsciLexerFortran*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerfortran_on_write_properties(void* self, bool (*callback)(const void*, void*, const char*)) {
    QsciLexerFortran_OnWriteProperties((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_event(void* self, void* event) {
    return QsciLexerFortran_Event((QsciLexerFortran*)self, (QEvent*)event);
}

bool q_scilexerfortran_super_event(void* self, void* event) {
    return QsciLexerFortran_SuperEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerFortran_OnEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

bool q_scilexerfortran_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_EventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerfortran_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran_SuperEventFilter((QsciLexerFortran*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerfortran_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerFortran_OnEventFilter((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_timer_event(void* self, void* event) {
    QsciLexerFortran_TimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

void q_scilexerfortran_super_timer_event(void* self, void* event) {
    QsciLexerFortran_SuperTimerEvent((QsciLexerFortran*)self, (QTimerEvent*)event);
}

void q_scilexerfortran_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnTimerEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_child_event(void* self, void* event) {
    QsciLexerFortran_ChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

void q_scilexerfortran_super_child_event(void* self, void* event) {
    QsciLexerFortran_SuperChildEvent((QsciLexerFortran*)self, (QChildEvent*)event);
}

void q_scilexerfortran_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnChildEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_custom_event(void* self, void* event) {
    QsciLexerFortran_CustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_super_custom_event(void* self, void* event) {
    QsciLexerFortran_SuperCustomEvent((QsciLexerFortran*)self, (QEvent*)event);
}

void q_scilexerfortran_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran_OnCustomEvent((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_connect_notify(void* self, const void* signal) {
    QsciLexerFortran_ConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_super_connect_notify(void* self, const void* signal) {
    QsciLexerFortran_SuperConnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerFortran_OnConnectNotify((QsciLexerFortran*)self, (intptr_t)callback);
}

void q_scilexerfortran_disconnect_notify(void* self, const void* signal) {
    QsciLexerFortran_DisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerFortran_SuperDisconnectNotify((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerFortran_OnDisconnectNotify((QsciLexerFortran*)self, (intptr_t)callback);
}

char* q_scilexerfortran_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerFortran_TextAsBytes((QsciLexerFortran*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerFortran_BytesAsText((QsciLexerFortran*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerfortran_sender(const void* self) {
    return QsciLexerFortran_Sender((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_sender_signal_index(const void* self) {
    return QsciLexerFortran_SenderSignalIndex((QsciLexerFortran*)self);
}

int32_t q_scilexerfortran_receivers(const void* self, const char* signal) {
    return QsciLexerFortran_Receivers((QsciLexerFortran*)self, signal);
}

bool q_scilexerfortran_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerFortran_IsSignalConnected((QsciLexerFortran*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerfortran_delete(void* self) {
    QsciLexerFortran_Delete((QsciLexerFortran*)(self));
}
