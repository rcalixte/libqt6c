#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerfortran77.hpp"
#include "libqscilexerfortran77.h"

QsciLexerFortran77* q_scilexerfortran77_new() {
    return QsciLexerFortran77_New();
}

QsciLexerFortran77* q_scilexerfortran77_new2(void* parent) {
    return QsciLexerFortran77_New2((QObject*)parent);
}

const QMetaObject* q_scilexerfortran77_meta_object(const void* self) {
    return QsciLexerFortran77_MetaObject((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QsciLexerFortran77_OnMetaObject((QsciLexerFortran77*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexerfortran77_super_meta_object(const void* self) {
    return QsciLexerFortran77_SuperMetaObject((QsciLexerFortran77*)self);
}

void* q_scilexerfortran77_metacast(void* self, const char* param1) {
    return QsciLexerFortran77_Metacast((QsciLexerFortran77*)self, param1);
}

void q_scilexerfortran77_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerFortran77_OnMetacast((QsciLexerFortran77*)self, (intptr_t)callback);
}

void* q_scilexerfortran77_super_metacast(void* self, const char* param1) {
    return QsciLexerFortran77_SuperMetacast((QsciLexerFortran77*)self, param1);
}

int32_t q_scilexerfortran77_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerFortran77_Metacall((QsciLexerFortran77*)self, param1, param2, param3);
}

void q_scilexerfortran77_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerFortran77_OnMetacall((QsciLexerFortran77*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerFortran77_SuperMetacall((QsciLexerFortran77*)self, param1, param2, param3);
}

const char* q_scilexerfortran77_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran77_language(const void* self) {
    return QsciLexerFortran77_Language((QsciLexerFortran77*)self);
}

const char* q_scilexerfortran77_lexer(const void* self) {
    return QsciLexerFortran77_Lexer((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_brace_style(const void* self) {
    return QsciLexerFortran77_BraceStyle((QsciLexerFortran77*)self);
}

QColor* q_scilexerfortran77_default_color(const void* self, int style) {
    return QsciLexerFortran77_DefaultColor((QsciLexerFortran77*)self, style);
}

bool q_scilexerfortran77_default_eol_fill(const void* self, int style) {
    return QsciLexerFortran77_DefaultEolFill((QsciLexerFortran77*)self, style);
}

QFont* q_scilexerfortran77_default_font(const void* self, int style) {
    return QsciLexerFortran77_DefaultFont((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran77_default_paper(const void* self, int style) {
    return QsciLexerFortran77_DefaultPaper((QsciLexerFortran77*)self, style);
}

const char* q_scilexerfortran77_keywords(const void* self, int set) {
    return QsciLexerFortran77_Keywords((QsciLexerFortran77*)self, set);
}

const char* q_scilexerfortran77_description(const void* self, int style) {
    libqt_string _str = QsciLexerFortran77_Description((QsciLexerFortran77*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran77_refresh_properties(void* self) {
    QsciLexerFortran77_RefreshProperties((QsciLexerFortran77*)self);
}

bool q_scilexerfortran77_fold_compact(const void* self) {
    return QsciLexerFortran77_FoldCompact((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran77_SetFoldCompact((QsciLexerFortran77*)self, fold);
}

void q_scilexerfortran77_on_set_fold_compact(void* self, void (*callback)(void*, bool)) {
    QsciLexerFortran77_OnSetFoldCompact((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_super_set_fold_compact(void* self, bool fold) {
    QsciLexerFortran77_SuperSetFoldCompact((QsciLexerFortran77*)self, fold);
}

bool q_scilexerfortran77_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_ReadProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerfortran77_write_properties(const void* self, void* qs, const char* prefix) {
    return QsciLexerFortran77_WriteProperties((QsciLexerFortran77*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerfortran77_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran77_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerfortran77_apis(const void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerfortran77_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerfortran77_editor(const void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerfortran77_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerfortran77_set_default_color(void* self, const void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerfortran77_set_default_font(void* self, const void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerfortran77_set_default_paper(void* self, const void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerfortran77_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerfortran77_write_settings(const void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerfortran77_color_changed(void* self, const void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran77_on_color_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran77_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerfortran77_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran77_font_changed(void* self, const void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerfortran77_on_font_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran77_paper_changed(void* self, const void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerfortran77_on_paper_changed(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerfortran77_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerfortran77_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerfortran77_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerfortran77_write_settings2(const void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerfortran77_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerfortran77_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerfortran77_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerfortran77_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerfortran77_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerfortran77_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerfortran77_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerfortran77_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerfortran77_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerfortran77_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerfortran77_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerfortran77_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerfortran77_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerfortran77_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerfortran77_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerfortran77_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerfortran77_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerfortran77_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexerfortran77_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerfortran77_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerfortran77_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexerfortran77_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerfortran77_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexerfortran77_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexerfortran77_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexerfortran77_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerfortran77_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerfortran77_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerfortran77_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerfortran77_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran77_dynamic_property_names\n");
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

QBindingStorage* q_scilexerfortran77_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerfortran77_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerfortran77_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerfortran77_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerfortran77_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerfortran77_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerfortran77_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerfortran77_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerfortran77_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerfortran77_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexerfortran77_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerfortran77_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexerfortran77_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexerfortran77_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexerfortran77_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexerfortran77_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexerfortran77_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerfortran77_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_lexer_id(const void* self) {
    return QsciLexerFortran77_LexerId((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_super_lexer_id(const void* self) {
    return QsciLexerFortran77_SuperLexerId((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_lexer_id(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran77_OnLexerId((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char* q_scilexerfortran77_auto_completion_fillups(const void* self) {
    return QsciLexerFortran77_AutoCompletionFillups((QsciLexerFortran77*)self);
}

const char* q_scilexerfortran77_super_auto_completion_fillups(const void* self) {
    return QsciLexerFortran77_SuperAutoCompletionFillups((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_auto_completion_fillups(const void* self, const char* (*callback)(const void*)) {
    QsciLexerFortran77_OnAutoCompletionFillups((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char** q_scilexerfortran77_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerFortran77_AutoCompletionWordSeparators((QsciLexerFortran77*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran77_auto_completion_word_separators\n");
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

const char** q_scilexerfortran77_super_auto_completion_word_separators(const void* self) {
    libqt_list _arr = QsciLexerFortran77_SuperAutoCompletionWordSeparators((QsciLexerFortran77*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerfortran77_auto_completion_word_separators\n");
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

void q_scilexerfortran77_on_auto_completion_word_separators(const void* self, const char** (*callback)(const void*)) {
    QsciLexerFortran77_OnAutoCompletionWordSeparators((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char* q_scilexerfortran77_block_end(const void* self, int* style) {
    return QsciLexerFortran77_BlockEnd((QsciLexerFortran77*)self, style);
}

const char* q_scilexerfortran77_super_block_end(const void* self, int* style) {
    return QsciLexerFortran77_SuperBlockEnd((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_block_end(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran77_OnBlockEnd((const QsciLexerFortran77*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_block_lookback(const void* self) {
    return QsciLexerFortran77_BlockLookback((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_super_block_lookback(const void* self) {
    return QsciLexerFortran77_SuperBlockLookback((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_block_lookback(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran77_OnBlockLookback((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char* q_scilexerfortran77_block_start(const void* self, int* style) {
    return QsciLexerFortran77_BlockStart((QsciLexerFortran77*)self, style);
}

const char* q_scilexerfortran77_super_block_start(const void* self, int* style) {
    return QsciLexerFortran77_SuperBlockStart((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_block_start(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran77_OnBlockStart((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char* q_scilexerfortran77_block_start_keyword(const void* self, int* style) {
    return QsciLexerFortran77_BlockStartKeyword((QsciLexerFortran77*)self, style);
}

const char* q_scilexerfortran77_super_block_start_keyword(const void* self, int* style) {
    return QsciLexerFortran77_SuperBlockStartKeyword((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_block_start_keyword(const void* self, const char* (*callback)(const void*, int*)) {
    QsciLexerFortran77_OnBlockStartKeyword((const QsciLexerFortran77*)self, (intptr_t)callback);
}

bool q_scilexerfortran77_case_sensitive(const void* self) {
    return QsciLexerFortran77_CaseSensitive((QsciLexerFortran77*)self);
}

bool q_scilexerfortran77_super_case_sensitive(const void* self) {
    return QsciLexerFortran77_SuperCaseSensitive((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_case_sensitive(const void* self, bool (*callback)(const void*)) {
    QsciLexerFortran77_OnCaseSensitive((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran77_color(const void* self, int style) {
    return QsciLexerFortran77_Color((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran77_super_color(const void* self, int style) {
    return QsciLexerFortran77_SuperColor((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_color(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnColor((const QsciLexerFortran77*)self, (intptr_t)callback);
}

bool q_scilexerfortran77_eol_fill(const void* self, int style) {
    return QsciLexerFortran77_EolFill((QsciLexerFortran77*)self, style);
}

bool q_scilexerfortran77_super_eol_fill(const void* self, int style) {
    return QsciLexerFortran77_SuperEolFill((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_eol_fill(const void* self, bool (*callback)(const void*, int)) {
    QsciLexerFortran77_OnEolFill((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran77_font(const void* self, int style) {
    return QsciLexerFortran77_Font((QsciLexerFortran77*)self, style);
}

QFont* q_scilexerfortran77_super_font(const void* self, int style) {
    return QsciLexerFortran77_SuperFont((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_font(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnFont((const QsciLexerFortran77*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_indentation_guide_view(const void* self) {
    return QsciLexerFortran77_IndentationGuideView((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_super_indentation_guide_view(const void* self) {
    return QsciLexerFortran77_SuperIndentationGuideView((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_indentation_guide_view(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran77_OnIndentationGuideView((const QsciLexerFortran77*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_default_style(const void* self) {
    return QsciLexerFortran77_DefaultStyle((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_super_default_style(const void* self) {
    return QsciLexerFortran77_SuperDefaultStyle((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_default_style(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran77_OnDefaultStyle((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran77_paper(const void* self, int style) {
    return QsciLexerFortran77_Paper((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran77_super_paper(const void* self, int style) {
    return QsciLexerFortran77_SuperPaper((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_paper(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnPaper((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran77_default_color2(const void* self, int style) {
    return QsciLexerFortran77_DefaultColor2((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran77_super_default_color2(const void* self, int style) {
    return QsciLexerFortran77_SuperDefaultColor2((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_default_color2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnDefaultColor2((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QFont* q_scilexerfortran77_default_font2(const void* self, int style) {
    return QsciLexerFortran77_DefaultFont2((QsciLexerFortran77*)self, style);
}

QFont* q_scilexerfortran77_super_default_font2(const void* self, int style) {
    return QsciLexerFortran77_SuperDefaultFont2((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_default_font2(const void* self, QFont* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnDefaultFont2((const QsciLexerFortran77*)self, (intptr_t)callback);
}

QColor* q_scilexerfortran77_default_paper2(const void* self, int style) {
    return QsciLexerFortran77_DefaultPaper2((QsciLexerFortran77*)self, style);
}

QColor* q_scilexerfortran77_super_default_paper2(const void* self, int style) {
    return QsciLexerFortran77_SuperDefaultPaper2((QsciLexerFortran77*)self, style);
}

void q_scilexerfortran77_on_default_paper2(const void* self, QColor* (*callback)(const void*, int)) {
    QsciLexerFortran77_OnDefaultPaper2((const QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_editor(void* self, void* editor) {
    QsciLexerFortran77_SetEditor((QsciLexerFortran77*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran77_super_set_editor(void* self, void* editor) {
    QsciLexerFortran77_SuperSetEditor((QsciLexerFortran77*)self, (QsciScintilla*)editor);
}

void q_scilexerfortran77_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran77_OnSetEditor((QsciLexerFortran77*)self, (intptr_t)callback);
}

int32_t q_scilexerfortran77_style_bits_needed(const void* self) {
    return QsciLexerFortran77_StyleBitsNeeded((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_super_style_bits_needed(const void* self) {
    return QsciLexerFortran77_SuperStyleBitsNeeded((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_style_bits_needed(const void* self, int32_t (*callback)(const void*)) {
    QsciLexerFortran77_OnStyleBitsNeeded((const QsciLexerFortran77*)self, (intptr_t)callback);
}

const char* q_scilexerfortran77_word_characters(const void* self) {
    return QsciLexerFortran77_WordCharacters((QsciLexerFortran77*)self);
}

const char* q_scilexerfortran77_super_word_characters(const void* self) {
    return QsciLexerFortran77_SuperWordCharacters((QsciLexerFortran77*)self);
}

void q_scilexerfortran77_on_word_characters(const void* self, const char* (*callback)(const void*)) {
    QsciLexerFortran77_OnWordCharacters((const QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran77_SetAutoIndentStyle((QsciLexerFortran77*)self, autoindentstyle);
}

void q_scilexerfortran77_super_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerFortran77_SuperSetAutoIndentStyle((QsciLexerFortran77*)self, autoindentstyle);
}

void q_scilexerfortran77_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerFortran77_OnSetAutoIndentStyle((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_color(void* self, const void* c, int style) {
    QsciLexerFortran77_SetColor((QsciLexerFortran77*)self, (QColor*)c, style);
}

void q_scilexerfortran77_super_set_color(void* self, const void* c, int style) {
    QsciLexerFortran77_SuperSetColor((QsciLexerFortran77*)self, (QColor*)c, style);
}

void q_scilexerfortran77_on_set_color(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran77_OnSetColor((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran77_SetEolFill((QsciLexerFortran77*)self, eoffill, style);
}

void q_scilexerfortran77_super_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerFortran77_SuperSetEolFill((QsciLexerFortran77*)self, eoffill, style);
}

void q_scilexerfortran77_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerFortran77_OnSetEolFill((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_font(void* self, const void* f, int style) {
    QsciLexerFortran77_SetFont((QsciLexerFortran77*)self, (QFont*)f, style);
}

void q_scilexerfortran77_super_set_font(void* self, const void* f, int style) {
    QsciLexerFortran77_SuperSetFont((QsciLexerFortran77*)self, (QFont*)f, style);
}

void q_scilexerfortran77_on_set_font(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran77_OnSetFont((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_set_paper(void* self, const void* c, int style) {
    QsciLexerFortran77_SetPaper((QsciLexerFortran77*)self, (QColor*)c, style);
}

void q_scilexerfortran77_super_set_paper(void* self, const void* c, int style) {
    QsciLexerFortran77_SuperSetPaper((QsciLexerFortran77*)self, (QColor*)c, style);
}

void q_scilexerfortran77_on_set_paper(void* self, void (*callback)(void*, const void*, int)) {
    QsciLexerFortran77_OnSetPaper((QsciLexerFortran77*)self, (intptr_t)callback);
}

bool q_scilexerfortran77_event(void* self, void* event) {
    return QsciLexerFortran77_Event((QsciLexerFortran77*)self, (QEvent*)event);
}

bool q_scilexerfortran77_super_event(void* self, void* event) {
    return QsciLexerFortran77_SuperEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

void q_scilexerfortran77_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerFortran77_OnEvent((QsciLexerFortran77*)self, (intptr_t)callback);
}

bool q_scilexerfortran77_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran77_EventFilter((QsciLexerFortran77*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerfortran77_super_event_filter(void* self, void* watched, void* event) {
    return QsciLexerFortran77_SuperEventFilter((QsciLexerFortran77*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerfortran77_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerFortran77_OnEventFilter((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_timer_event(void* self, void* event) {
    QsciLexerFortran77_TimerEvent((QsciLexerFortran77*)self, (QTimerEvent*)event);
}

void q_scilexerfortran77_super_timer_event(void* self, void* event) {
    QsciLexerFortran77_SuperTimerEvent((QsciLexerFortran77*)self, (QTimerEvent*)event);
}

void q_scilexerfortran77_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran77_OnTimerEvent((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_child_event(void* self, void* event) {
    QsciLexerFortran77_ChildEvent((QsciLexerFortran77*)self, (QChildEvent*)event);
}

void q_scilexerfortran77_super_child_event(void* self, void* event) {
    QsciLexerFortran77_SuperChildEvent((QsciLexerFortran77*)self, (QChildEvent*)event);
}

void q_scilexerfortran77_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran77_OnChildEvent((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_custom_event(void* self, void* event) {
    QsciLexerFortran77_CustomEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

void q_scilexerfortran77_super_custom_event(void* self, void* event) {
    QsciLexerFortran77_SuperCustomEvent((QsciLexerFortran77*)self, (QEvent*)event);
}

void q_scilexerfortran77_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerFortran77_OnCustomEvent((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_connect_notify(void* self, const void* signal) {
    QsciLexerFortran77_ConnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran77_super_connect_notify(void* self, const void* signal) {
    QsciLexerFortran77_SuperConnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran77_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerFortran77_OnConnectNotify((QsciLexerFortran77*)self, (intptr_t)callback);
}

void q_scilexerfortran77_disconnect_notify(void* self, const void* signal) {
    QsciLexerFortran77_DisconnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran77_super_disconnect_notify(void* self, const void* signal) {
    QsciLexerFortran77_SuperDisconnectNotify((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran77_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QsciLexerFortran77_OnDisconnectNotify((QsciLexerFortran77*)self, (intptr_t)callback);
}

char* q_scilexerfortran77_text_as_bytes(const void* self, const char* text) {
    libqt_string _str = QsciLexerFortran77_TextAsBytes((QsciLexerFortran77*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerfortran77_bytes_as_text(const void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerFortran77_BytesAsText((QsciLexerFortran77*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_scilexerfortran77_sender(const void* self) {
    return QsciLexerFortran77_Sender((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_sender_signal_index(const void* self) {
    return QsciLexerFortran77_SenderSignalIndex((QsciLexerFortran77*)self);
}

int32_t q_scilexerfortran77_receivers(const void* self, const char* signal) {
    return QsciLexerFortran77_Receivers((QsciLexerFortran77*)self, signal);
}

bool q_scilexerfortran77_is_signal_connected(const void* self, const void* signal) {
    return QsciLexerFortran77_IsSignalConnected((QsciLexerFortran77*)self, (QMetaMethod*)signal);
}

void q_scilexerfortran77_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerfortran77_delete(void* self) {
    QsciLexerFortran77_Delete((QsciLexerFortran77*)(self));
}
