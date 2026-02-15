#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexercoffeescript.hpp"
#include "libqscilexercoffeescript.h"

QsciLexerCoffeeScript* q_scilexercoffeescript_new() {
    return QsciLexerCoffeeScript_new();
}

QsciLexerCoffeeScript* q_scilexercoffeescript_new2(void* parent) {
    return QsciLexerCoffeeScript_new2((QObject*)parent);
}

const QMetaObject* q_scilexercoffeescript_meta_object(void* self) {
    return QsciLexerCoffeeScript_MetaObject((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QsciLexerCoffeeScript_OnMetaObject((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

const QMetaObject* q_scilexercoffeescript_qbase_meta_object(void* self) {
    return QsciLexerCoffeeScript_QBaseMetaObject((QsciLexerCoffeeScript*)self);
}

void* q_scilexercoffeescript_metacast(void* self, const char* param1) {
    return QsciLexerCoffeeScript_Metacast((QsciLexerCoffeeScript*)self, param1);
}

void q_scilexercoffeescript_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QsciLexerCoffeeScript_OnMetacast((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void* q_scilexercoffeescript_qbase_metacast(void* self, const char* param1) {
    return QsciLexerCoffeeScript_QBaseMetacast((QsciLexerCoffeeScript*)self, param1);
}

int32_t q_scilexercoffeescript_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCoffeeScript_Metacall((QsciLexerCoffeeScript*)self, param1, param2, param3);
}

void q_scilexercoffeescript_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerCoffeeScript_OnMetacall((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerCoffeeScript_QBaseMetacall((QsciLexerCoffeeScript*)self, param1, param2, param3);
}

const char* q_scilexercoffeescript_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercoffeescript_language(void* self) {
    return QsciLexerCoffeeScript_Language((QsciLexerCoffeeScript*)self);
}

const char* q_scilexercoffeescript_lexer(void* self) {
    return QsciLexerCoffeeScript_Lexer((QsciLexerCoffeeScript*)self);
}

const char** q_scilexercoffeescript_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCoffeeScript_AutoCompletionWordSeparators((QsciLexerCoffeeScript*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercoffeescript_auto_completion_word_separators\n");
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

const char* q_scilexercoffeescript_block_end(void* self) {
    return QsciLexerCoffeeScript_BlockEnd((QsciLexerCoffeeScript*)self);
}

const char* q_scilexercoffeescript_block_start(void* self) {
    return QsciLexerCoffeeScript_BlockStart((QsciLexerCoffeeScript*)self);
}

const char* q_scilexercoffeescript_block_start_keyword(void* self) {
    return QsciLexerCoffeeScript_BlockStartKeyword((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_brace_style(void* self) {
    return QsciLexerCoffeeScript_BraceStyle((QsciLexerCoffeeScript*)self);
}

const char* q_scilexercoffeescript_word_characters(void* self) {
    return QsciLexerCoffeeScript_WordCharacters((QsciLexerCoffeeScript*)self);
}

QColor* q_scilexercoffeescript_default_color(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultColor((QsciLexerCoffeeScript*)self, style);
}

bool q_scilexercoffeescript_default_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultEolFill((QsciLexerCoffeeScript*)self, style);
}

QFont* q_scilexercoffeescript_default_font(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultFont((QsciLexerCoffeeScript*)self, style);
}

QColor* q_scilexercoffeescript_default_paper(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultPaper((QsciLexerCoffeeScript*)self, style);
}

const char* q_scilexercoffeescript_keywords(void* self, int set) {
    return QsciLexerCoffeeScript_Keywords((QsciLexerCoffeeScript*)self, set);
}

const char* q_scilexercoffeescript_description(void* self, int style) {
    libqt_string _str = QsciLexerCoffeeScript_Description((QsciLexerCoffeeScript*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercoffeescript_refresh_properties(void* self) {
    QsciLexerCoffeeScript_RefreshProperties((QsciLexerCoffeeScript*)self);
}

bool q_scilexercoffeescript_dollars_allowed(void* self) {
    return QsciLexerCoffeeScript_DollarsAllowed((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_set_dollars_allowed(void* self, bool allowed) {
    QsciLexerCoffeeScript_SetDollarsAllowed((QsciLexerCoffeeScript*)self, allowed);
}

bool q_scilexercoffeescript_fold_comments(void* self) {
    return QsciLexerCoffeeScript_FoldComments((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_set_fold_comments(void* self, bool fold) {
    QsciLexerCoffeeScript_SetFoldComments((QsciLexerCoffeeScript*)self, fold);
}

bool q_scilexercoffeescript_fold_compact(void* self) {
    return QsciLexerCoffeeScript_FoldCompact((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_set_fold_compact(void* self, bool fold) {
    QsciLexerCoffeeScript_SetFoldCompact((QsciLexerCoffeeScript*)self, fold);
}

bool q_scilexercoffeescript_style_preprocessor(void* self) {
    return QsciLexerCoffeeScript_StylePreprocessor((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_set_style_preprocessor(void* self, bool style) {
    QsciLexerCoffeeScript_SetStylePreprocessor((QsciLexerCoffeeScript*)self, style);
}

bool q_scilexercoffeescript_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_ReadProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercoffeescript_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCoffeeScript_OnReadProperties((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_QBaseReadProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercoffeescript_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_WriteProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercoffeescript_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerCoffeeScript_OnWriteProperties((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCoffeeScript_QBaseWriteProperties((QsciLexerCoffeeScript*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexercoffeescript_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercoffeescript_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercoffeescript_block_end1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockEnd1((QsciLexerCoffeeScript*)self, style);
}

const char* q_scilexercoffeescript_block_start1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockStart1((QsciLexerCoffeeScript*)self, style);
}

const char* q_scilexercoffeescript_block_start_keyword1(void* self, int* style) {
    return QsciLexerCoffeeScript_BlockStartKeyword1((QsciLexerCoffeeScript*)self, style);
}

QsciAbstractAPIs* q_scilexercoffeescript_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercoffeescript_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexercoffeescript_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercoffeescript_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercoffeescript_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercoffeescript_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercoffeescript_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercoffeescript_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercoffeescript_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercoffeescript_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercoffeescript_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercoffeescript_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercoffeescript_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercoffeescript_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercoffeescript_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercoffeescript_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexercoffeescript_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercoffeescript_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercoffeescript_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercoffeescript_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercoffeescript_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercoffeescript_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexercoffeescript_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercoffeescript_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexercoffeescript_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexercoffeescript_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexercoffeescript_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercoffeescript_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercoffeescript_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercoffeescript_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercoffeescript_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercoffeescript_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_scilexercoffeescript_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercoffeescript_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercoffeescript_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_scilexercoffeescript_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercoffeescript_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_scilexercoffeescript_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_scilexercoffeescript_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_scilexercoffeescript_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercoffeescript_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercoffeescript_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercoffeescript_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercoffeescript_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexercoffeescript_dynamic_property_names\n");
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

QBindingStorage* q_scilexercoffeescript_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexercoffeescript_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercoffeescript_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercoffeescript_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexercoffeescript_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercoffeescript_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercoffeescript_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexercoffeescript_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexercoffeescript_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexercoffeescript_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_scilexercoffeescript_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexercoffeescript_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_scilexercoffeescript_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_scilexercoffeescript_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_scilexercoffeescript_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_scilexercoffeescript_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_scilexercoffeescript_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercoffeescript_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_lexer_id(void* self) {
    return QsciLexerCoffeeScript_LexerId((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_lexer_id(void* self) {
    return QsciLexerCoffeeScript_QBaseLexerId((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnLexerId((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

const char* q_scilexercoffeescript_auto_completion_fillups(void* self) {
    return QsciLexerCoffeeScript_AutoCompletionFillups((QsciLexerCoffeeScript*)self);
}

const char* q_scilexercoffeescript_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCoffeeScript_QBaseAutoCompletionFillups((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerCoffeeScript_OnAutoCompletionFillups((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_block_lookback(void* self) {
    return QsciLexerCoffeeScript_BlockLookback((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_block_lookback(void* self) {
    return QsciLexerCoffeeScript_QBaseBlockLookback((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnBlockLookback((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_case_sensitive(void* self) {
    return QsciLexerCoffeeScript_CaseSensitive((QsciLexerCoffeeScript*)self);
}

bool q_scilexercoffeescript_qbase_case_sensitive(void* self) {
    return QsciLexerCoffeeScript_QBaseCaseSensitive((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerCoffeeScript_OnCaseSensitive((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QColor* q_scilexercoffeescript_color(void* self, int style) {
    return QsciLexerCoffeeScript_Color((QsciLexerCoffeeScript*)self, style);
}

QColor* q_scilexercoffeescript_qbase_color(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseColor((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnColor((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_EolFill((QsciLexerCoffeeScript*)self, style);
}

bool q_scilexercoffeescript_qbase_eol_fill(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseEolFill((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnEolFill((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QFont* q_scilexercoffeescript_font(void* self, int style) {
    return QsciLexerCoffeeScript_Font((QsciLexerCoffeeScript*)self, style);
}

QFont* q_scilexercoffeescript_qbase_font(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseFont((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnFont((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_indentation_guide_view(void* self) {
    return QsciLexerCoffeeScript_IndentationGuideView((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_indentation_guide_view(void* self) {
    return QsciLexerCoffeeScript_QBaseIndentationGuideView((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnIndentationGuideView((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_default_style(void* self) {
    return QsciLexerCoffeeScript_DefaultStyle((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_default_style(void* self) {
    return QsciLexerCoffeeScript_QBaseDefaultStyle((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnDefaultStyle((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QColor* q_scilexercoffeescript_paper(void* self, int style) {
    return QsciLexerCoffeeScript_Paper((QsciLexerCoffeeScript*)self, style);
}

QColor* q_scilexercoffeescript_qbase_paper(void* self, int style) {
    return QsciLexerCoffeeScript_QBasePaper((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnPaper((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QColor* q_scilexercoffeescript_default_color2(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultColor2((QsciLexerCoffeeScript*)self, style);
}

QColor* q_scilexercoffeescript_qbase_default_color2(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultColor2((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultColor2((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QFont* q_scilexercoffeescript_default_font2(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultFont2((QsciLexerCoffeeScript*)self, style);
}

QFont* q_scilexercoffeescript_qbase_default_font2(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultFont2((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultFont2((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QColor* q_scilexercoffeescript_default_paper2(void* self, int style) {
    return QsciLexerCoffeeScript_DefaultPaper2((QsciLexerCoffeeScript*)self, style);
}

QColor* q_scilexercoffeescript_qbase_default_paper2(void* self, int style) {
    return QsciLexerCoffeeScript_QBaseDefaultPaper2((QsciLexerCoffeeScript*)self, style);
}

void q_scilexercoffeescript_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnDefaultPaper2((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_editor(void* self, void* editor) {
    QsciLexerCoffeeScript_SetEditor((QsciLexerCoffeeScript*)self, (QsciScintilla*)editor);
}

void q_scilexercoffeescript_qbase_set_editor(void* self, void* editor) {
    QsciLexerCoffeeScript_QBaseSetEditor((QsciLexerCoffeeScript*)self, (QsciScintilla*)editor);
}

void q_scilexercoffeescript_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnSetEditor((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_style_bits_needed(void* self) {
    return QsciLexerCoffeeScript_StyleBitsNeeded((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_style_bits_needed(void* self) {
    return QsciLexerCoffeeScript_QBaseStyleBitsNeeded((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnStyleBitsNeeded((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCoffeeScript_SetAutoIndentStyle((QsciLexerCoffeeScript*)self, autoindentstyle);
}

void q_scilexercoffeescript_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCoffeeScript_QBaseSetAutoIndentStyle((QsciLexerCoffeeScript*)self, autoindentstyle);
}

void q_scilexercoffeescript_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerCoffeeScript_OnSetAutoIndentStyle((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_color(void* self, void* c, int style) {
    QsciLexerCoffeeScript_SetColor((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCoffeeScript_QBaseSetColor((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetColor((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCoffeeScript_SetEolFill((QsciLexerCoffeeScript*)self, eoffill, style);
}

void q_scilexercoffeescript_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCoffeeScript_QBaseSetEolFill((QsciLexerCoffeeScript*)self, eoffill, style);
}

void q_scilexercoffeescript_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerCoffeeScript_OnSetEolFill((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_font(void* self, void* f, int style) {
    QsciLexerCoffeeScript_SetFont((QsciLexerCoffeeScript*)self, (QFont*)f, style);
}

void q_scilexercoffeescript_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCoffeeScript_QBaseSetFont((QsciLexerCoffeeScript*)self, (QFont*)f, style);
}

void q_scilexercoffeescript_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetFont((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_set_paper(void* self, void* c, int style) {
    QsciLexerCoffeeScript_SetPaper((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCoffeeScript_QBaseSetPaper((QsciLexerCoffeeScript*)self, (QColor*)c, style);
}

void q_scilexercoffeescript_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerCoffeeScript_OnSetPaper((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_event(void* self, void* event) {
    return QsciLexerCoffeeScript_Event((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

bool q_scilexercoffeescript_qbase_event(void* self, void* event) {
    return QsciLexerCoffeeScript_QBaseEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

void q_scilexercoffeescript_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnEvent((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCoffeeScript_EventFilter((QsciLexerCoffeeScript*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercoffeescript_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCoffeeScript_QBaseEventFilter((QsciLexerCoffeeScript*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercoffeescript_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerCoffeeScript_OnEventFilter((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_timer_event(void* self, void* event) {
    QsciLexerCoffeeScript_TimerEvent((QsciLexerCoffeeScript*)self, (QTimerEvent*)event);
}

void q_scilexercoffeescript_qbase_timer_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseTimerEvent((QsciLexerCoffeeScript*)self, (QTimerEvent*)event);
}

void q_scilexercoffeescript_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnTimerEvent((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_child_event(void* self, void* event) {
    QsciLexerCoffeeScript_ChildEvent((QsciLexerCoffeeScript*)self, (QChildEvent*)event);
}

void q_scilexercoffeescript_qbase_child_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseChildEvent((QsciLexerCoffeeScript*)self, (QChildEvent*)event);
}

void q_scilexercoffeescript_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnChildEvent((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_custom_event(void* self, void* event) {
    QsciLexerCoffeeScript_CustomEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

void q_scilexercoffeescript_qbase_custom_event(void* self, void* event) {
    QsciLexerCoffeeScript_QBaseCustomEvent((QsciLexerCoffeeScript*)self, (QEvent*)event);
}

void q_scilexercoffeescript_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnCustomEvent((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_connect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_ConnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

void q_scilexercoffeescript_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_QBaseConnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

void q_scilexercoffeescript_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnConnectNotify((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_disconnect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_DisconnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

void q_scilexercoffeescript_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCoffeeScript_QBaseDisconnectNotify((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

void q_scilexercoffeescript_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnDisconnectNotify((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

char* q_scilexercoffeescript_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCoffeeScript_TextAsBytes((QsciLexerCoffeeScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexercoffeescript_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerCoffeeScript_QBaseTextAsBytes((QsciLexerCoffeeScript*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercoffeescript_on_text_as_bytes(void* self, libqt_string (*callback)(void*, const char*)) {
    QsciLexerCoffeeScript_OnTextAsBytes((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

const char* q_scilexercoffeescript_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCoffeeScript_BytesAsText((QsciLexerCoffeeScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercoffeescript_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerCoffeeScript_QBaseBytesAsText((QsciLexerCoffeeScript*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercoffeescript_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerCoffeeScript_OnBytesAsText((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

QObject* q_scilexercoffeescript_sender(void* self) {
    return QsciLexerCoffeeScript_Sender((QsciLexerCoffeeScript*)self);
}

QObject* q_scilexercoffeescript_qbase_sender(void* self) {
    return QsciLexerCoffeeScript_QBaseSender((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerCoffeeScript_OnSender((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_sender_signal_index(void* self) {
    return QsciLexerCoffeeScript_SenderSignalIndex((QsciLexerCoffeeScript*)self);
}

int32_t q_scilexercoffeescript_qbase_sender_signal_index(void* self) {
    return QsciLexerCoffeeScript_QBaseSenderSignalIndex((QsciLexerCoffeeScript*)self);
}

void q_scilexercoffeescript_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerCoffeeScript_OnSenderSignalIndex((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

int32_t q_scilexercoffeescript_receivers(void* self, const char* signal) {
    return QsciLexerCoffeeScript_Receivers((QsciLexerCoffeeScript*)self, signal);
}

int32_t q_scilexercoffeescript_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCoffeeScript_QBaseReceivers((QsciLexerCoffeeScript*)self, signal);
}

void q_scilexercoffeescript_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerCoffeeScript_OnReceivers((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

bool q_scilexercoffeescript_is_signal_connected(void* self, void* signal) {
    return QsciLexerCoffeeScript_IsSignalConnected((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

bool q_scilexercoffeescript_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCoffeeScript_QBaseIsSignalConnected((QsciLexerCoffeeScript*)self, (QMetaMethod*)signal);
}

void q_scilexercoffeescript_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerCoffeeScript_OnIsSignalConnected((QsciLexerCoffeeScript*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexercoffeescript_delete(void* self) {
    QsciLexerCoffeeScript_Delete((QsciLexerCoffeeScript*)(self));
}
