#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerproperties.hpp"
#include "libqscilexerproperties.h"

QsciLexerProperties* q_scilexerproperties_new() {
    return QsciLexerProperties_new();
}

QsciLexerProperties* q_scilexerproperties_new2(void* parent) {
    return QsciLexerProperties_new2((QObject*)parent);
}

QMetaObject* q_scilexerproperties_meta_object(void* self) {
    return QsciLexerProperties_MetaObject((QsciLexerProperties*)self);
}

void* q_scilexerproperties_metacast(void* self, const char* param1) {
    return QsciLexerProperties_Metacast((QsciLexerProperties*)self, param1);
}

int32_t q_scilexerproperties_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerProperties_Metacall((QsciLexerProperties*)self, param1, param2, param3);
}

void q_scilexerproperties_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerProperties_OnMetacall((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerProperties_QBaseMetacall((QsciLexerProperties*)self, param1, param2, param3);
}

const char* q_scilexerproperties_tr(const char* s) {
    libqt_string _str = QsciLexerProperties_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerproperties_language(void* self) {
    return QsciLexerProperties_Language((QsciLexerProperties*)self);
}

const char* q_scilexerproperties_lexer(void* self) {
    return QsciLexerProperties_Lexer((QsciLexerProperties*)self);
}

const char* q_scilexerproperties_word_characters(void* self) {
    return QsciLexerProperties_WordCharacters((QsciLexerProperties*)self);
}

QColor* q_scilexerproperties_default_color(void* self, int style) {
    return QsciLexerProperties_DefaultColor((QsciLexerProperties*)self, style);
}

bool q_scilexerproperties_default_eol_fill(void* self, int style) {
    return QsciLexerProperties_DefaultEolFill((QsciLexerProperties*)self, style);
}

QFont* q_scilexerproperties_default_font(void* self, int style) {
    return QsciLexerProperties_DefaultFont((QsciLexerProperties*)self, style);
}

QColor* q_scilexerproperties_default_paper(void* self, int style) {
    return QsciLexerProperties_DefaultPaper((QsciLexerProperties*)self, style);
}

const char* q_scilexerproperties_description(void* self, int style) {
    libqt_string _str = QsciLexerProperties_Description((QsciLexerProperties*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerproperties_refresh_properties(void* self) {
    QsciLexerProperties_RefreshProperties((QsciLexerProperties*)self);
}

bool q_scilexerproperties_fold_compact(void* self) {
    return QsciLexerProperties_FoldCompact((QsciLexerProperties*)self);
}

void q_scilexerproperties_set_initial_spaces(void* self, bool enable) {
    QsciLexerProperties_SetInitialSpaces((QsciLexerProperties*)self, enable);
}

bool q_scilexerproperties_initial_spaces(void* self) {
    return QsciLexerProperties_InitialSpaces((QsciLexerProperties*)self);
}

void q_scilexerproperties_set_fold_compact(void* self, bool fold) {
    QsciLexerProperties_SetFoldCompact((QsciLexerProperties*)self, fold);
}

void q_scilexerproperties_on_set_fold_compact(void* self, void (*slot)(void*, bool)) {
    QsciLexerProperties_OnSetFoldCompact((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_qbase_set_fold_compact(void* self, bool fold) {
    QsciLexerProperties_QBaseSetFoldCompact((QsciLexerProperties*)self, fold);
}

bool q_scilexerproperties_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerProperties_ReadProperties((QsciLexerProperties*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerproperties_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerProperties_OnReadProperties((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerProperties_QBaseReadProperties((QsciLexerProperties*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerproperties_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerProperties_WriteProperties((QsciLexerProperties*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerproperties_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerProperties_OnWriteProperties((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerProperties_QBaseWriteProperties((QsciLexerProperties*)self, (QSettings*)qs, qstring(prefix));
}

const char* q_scilexerproperties_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerProperties_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerproperties_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerProperties_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerproperties_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerproperties_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerproperties_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerproperties_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerproperties_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerproperties_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerproperties_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerproperties_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerproperties_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerproperties_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerproperties_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerproperties_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerproperties_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerproperties_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerproperties_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerproperties_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerproperties_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerproperties_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerproperties_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerproperties_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerproperties_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerproperties_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerproperties_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_scilexerproperties_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerproperties_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerproperties_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerproperties_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerproperties_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerproperties_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexerproperties_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerproperties_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerproperties_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerproperties_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerproperties_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerproperties_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerproperties_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerproperties_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerproperties_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerproperties_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerproperties_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexerproperties_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerproperties_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerproperties_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerproperties_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerproperties_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerproperties_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_scilexerproperties_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerproperties_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerproperties_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerproperties_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerproperties_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerproperties_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexerproperties_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerproperties_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerproperties_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerproperties_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerproperties_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_lexer_id(void* self) {
    return QsciLexerProperties_LexerId((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_lexer_id(void* self) {
    return QsciLexerProperties_QBaseLexerId((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnLexerId((QsciLexerProperties*)self, (intptr_t)slot);
}

const char* q_scilexerproperties_auto_completion_fillups(void* self) {
    return QsciLexerProperties_AutoCompletionFillups((QsciLexerProperties*)self);
}

const char* q_scilexerproperties_qbase_auto_completion_fillups(void* self) {
    return QsciLexerProperties_QBaseAutoCompletionFillups((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerProperties_OnAutoCompletionFillups((QsciLexerProperties*)self, (intptr_t)slot);
}

const char** q_scilexerproperties_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerProperties_AutoCompletionWordSeparators((QsciLexerProperties*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_scilexerproperties_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerProperties_QBaseAutoCompletionWordSeparators((QsciLexerProperties*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexerproperties_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerProperties_OnAutoCompletionWordSeparators((QsciLexerProperties*)self, (intptr_t)slot);
}

const char* q_scilexerproperties_block_end(void* self, int* style) {
    return QsciLexerProperties_BlockEnd((QsciLexerProperties*)self, style);
}

const char* q_scilexerproperties_qbase_block_end(void* self, int* style) {
    return QsciLexerProperties_QBaseBlockEnd((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerProperties_OnBlockEnd((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_block_lookback(void* self) {
    return QsciLexerProperties_BlockLookback((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_block_lookback(void* self) {
    return QsciLexerProperties_QBaseBlockLookback((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnBlockLookback((QsciLexerProperties*)self, (intptr_t)slot);
}

const char* q_scilexerproperties_block_start(void* self, int* style) {
    return QsciLexerProperties_BlockStart((QsciLexerProperties*)self, style);
}

const char* q_scilexerproperties_qbase_block_start(void* self, int* style) {
    return QsciLexerProperties_QBaseBlockStart((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerProperties_OnBlockStart((QsciLexerProperties*)self, (intptr_t)slot);
}

const char* q_scilexerproperties_block_start_keyword(void* self, int* style) {
    return QsciLexerProperties_BlockStartKeyword((QsciLexerProperties*)self, style);
}

const char* q_scilexerproperties_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerProperties_QBaseBlockStartKeyword((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerProperties_OnBlockStartKeyword((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_brace_style(void* self) {
    return QsciLexerProperties_BraceStyle((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_brace_style(void* self) {
    return QsciLexerProperties_QBaseBraceStyle((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnBraceStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_case_sensitive(void* self) {
    return QsciLexerProperties_CaseSensitive((QsciLexerProperties*)self);
}

bool q_scilexerproperties_qbase_case_sensitive(void* self) {
    return QsciLexerProperties_QBaseCaseSensitive((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerProperties_OnCaseSensitive((QsciLexerProperties*)self, (intptr_t)slot);
}

QColor* q_scilexerproperties_color(void* self, int style) {
    return QsciLexerProperties_Color((QsciLexerProperties*)self, style);
}

QColor* q_scilexerproperties_qbase_color(void* self, int style) {
    return QsciLexerProperties_QBaseColor((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerProperties_OnColor((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_eol_fill(void* self, int style) {
    return QsciLexerProperties_EolFill((QsciLexerProperties*)self, style);
}

bool q_scilexerproperties_qbase_eol_fill(void* self, int style) {
    return QsciLexerProperties_QBaseEolFill((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerProperties_OnEolFill((QsciLexerProperties*)self, (intptr_t)slot);
}

QFont* q_scilexerproperties_font(void* self, int style) {
    return QsciLexerProperties_Font((QsciLexerProperties*)self, style);
}

QFont* q_scilexerproperties_qbase_font(void* self, int style) {
    return QsciLexerProperties_QBaseFont((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerProperties_OnFont((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_indentation_guide_view(void* self) {
    return QsciLexerProperties_IndentationGuideView((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_indentation_guide_view(void* self) {
    return QsciLexerProperties_QBaseIndentationGuideView((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnIndentationGuideView((QsciLexerProperties*)self, (intptr_t)slot);
}

const char* q_scilexerproperties_keywords(void* self, int set) {
    return QsciLexerProperties_Keywords((QsciLexerProperties*)self, set);
}

const char* q_scilexerproperties_qbase_keywords(void* self, int set) {
    return QsciLexerProperties_QBaseKeywords((QsciLexerProperties*)self, set);
}

void q_scilexerproperties_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerProperties_OnKeywords((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_default_style(void* self) {
    return QsciLexerProperties_DefaultStyle((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_default_style(void* self) {
    return QsciLexerProperties_QBaseDefaultStyle((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnDefaultStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

QColor* q_scilexerproperties_paper(void* self, int style) {
    return QsciLexerProperties_Paper((QsciLexerProperties*)self, style);
}

QColor* q_scilexerproperties_qbase_paper(void* self, int style) {
    return QsciLexerProperties_QBasePaper((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerProperties_OnPaper((QsciLexerProperties*)self, (intptr_t)slot);
}

QColor* q_scilexerproperties_default_color_with_style(void* self, int style) {
    return QsciLexerProperties_DefaultColorWithStyle((QsciLexerProperties*)self, style);
}

QColor* q_scilexerproperties_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerProperties_QBaseDefaultColorWithStyle((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerProperties_OnDefaultColorWithStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

QFont* q_scilexerproperties_default_font_with_style(void* self, int style) {
    return QsciLexerProperties_DefaultFontWithStyle((QsciLexerProperties*)self, style);
}

QFont* q_scilexerproperties_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerProperties_QBaseDefaultFontWithStyle((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerProperties_OnDefaultFontWithStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

QColor* q_scilexerproperties_default_paper_with_style(void* self, int style) {
    return QsciLexerProperties_DefaultPaperWithStyle((QsciLexerProperties*)self, style);
}

QColor* q_scilexerproperties_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerProperties_QBaseDefaultPaperWithStyle((QsciLexerProperties*)self, style);
}

void q_scilexerproperties_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerProperties_OnDefaultPaperWithStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_editor(void* self, void* editor) {
    QsciLexerProperties_SetEditor((QsciLexerProperties*)self, (QsciScintilla*)editor);
}

void q_scilexerproperties_qbase_set_editor(void* self, void* editor) {
    QsciLexerProperties_QBaseSetEditor((QsciLexerProperties*)self, (QsciScintilla*)editor);
}

void q_scilexerproperties_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnSetEditor((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_style_bits_needed(void* self) {
    return QsciLexerProperties_StyleBitsNeeded((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_style_bits_needed(void* self) {
    return QsciLexerProperties_QBaseStyleBitsNeeded((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnStyleBitsNeeded((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerProperties_SetAutoIndentStyle((QsciLexerProperties*)self, autoindentstyle);
}

void q_scilexerproperties_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerProperties_QBaseSetAutoIndentStyle((QsciLexerProperties*)self, autoindentstyle);
}

void q_scilexerproperties_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerProperties_OnSetAutoIndentStyle((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_color(void* self, void* c, int style) {
    QsciLexerProperties_SetColor((QsciLexerProperties*)self, (QColor*)c, style);
}

void q_scilexerproperties_qbase_set_color(void* self, void* c, int style) {
    QsciLexerProperties_QBaseSetColor((QsciLexerProperties*)self, (QColor*)c, style);
}

void q_scilexerproperties_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerProperties_OnSetColor((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerProperties_SetEolFill((QsciLexerProperties*)self, eoffill, style);
}

void q_scilexerproperties_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerProperties_QBaseSetEolFill((QsciLexerProperties*)self, eoffill, style);
}

void q_scilexerproperties_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerProperties_OnSetEolFill((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_font(void* self, void* f, int style) {
    QsciLexerProperties_SetFont((QsciLexerProperties*)self, (QFont*)f, style);
}

void q_scilexerproperties_qbase_set_font(void* self, void* f, int style) {
    QsciLexerProperties_QBaseSetFont((QsciLexerProperties*)self, (QFont*)f, style);
}

void q_scilexerproperties_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerProperties_OnSetFont((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_set_paper(void* self, void* c, int style) {
    QsciLexerProperties_SetPaper((QsciLexerProperties*)self, (QColor*)c, style);
}

void q_scilexerproperties_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerProperties_QBaseSetPaper((QsciLexerProperties*)self, (QColor*)c, style);
}

void q_scilexerproperties_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerProperties_OnSetPaper((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_event(void* self, void* event) {
    return QsciLexerProperties_Event((QsciLexerProperties*)self, (QEvent*)event);
}

bool q_scilexerproperties_qbase_event(void* self, void* event) {
    return QsciLexerProperties_QBaseEvent((QsciLexerProperties*)self, (QEvent*)event);
}

void q_scilexerproperties_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerProperties_OnEvent((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_event_filter(void* self, void* watched, void* event) {
    return QsciLexerProperties_EventFilter((QsciLexerProperties*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerproperties_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerProperties_QBaseEventFilter((QsciLexerProperties*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerproperties_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerProperties_OnEventFilter((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_timer_event(void* self, void* event) {
    QsciLexerProperties_TimerEvent((QsciLexerProperties*)self, (QTimerEvent*)event);
}

void q_scilexerproperties_qbase_timer_event(void* self, void* event) {
    QsciLexerProperties_QBaseTimerEvent((QsciLexerProperties*)self, (QTimerEvent*)event);
}

void q_scilexerproperties_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnTimerEvent((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_child_event(void* self, void* event) {
    QsciLexerProperties_ChildEvent((QsciLexerProperties*)self, (QChildEvent*)event);
}

void q_scilexerproperties_qbase_child_event(void* self, void* event) {
    QsciLexerProperties_QBaseChildEvent((QsciLexerProperties*)self, (QChildEvent*)event);
}

void q_scilexerproperties_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnChildEvent((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_custom_event(void* self, void* event) {
    QsciLexerProperties_CustomEvent((QsciLexerProperties*)self, (QEvent*)event);
}

void q_scilexerproperties_qbase_custom_event(void* self, void* event) {
    QsciLexerProperties_QBaseCustomEvent((QsciLexerProperties*)self, (QEvent*)event);
}

void q_scilexerproperties_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnCustomEvent((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_connect_notify(void* self, void* signal) {
    QsciLexerProperties_ConnectNotify((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

void q_scilexerproperties_qbase_connect_notify(void* self, void* signal) {
    QsciLexerProperties_QBaseConnectNotify((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

void q_scilexerproperties_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnConnectNotify((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_disconnect_notify(void* self, void* signal) {
    QsciLexerProperties_DisconnectNotify((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

void q_scilexerproperties_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerProperties_QBaseDisconnectNotify((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

void q_scilexerproperties_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerProperties_OnDisconnectNotify((QsciLexerProperties*)self, (intptr_t)slot);
}

QObject* q_scilexerproperties_sender(void* self) {
    return QsciLexerProperties_Sender((QsciLexerProperties*)self);
}

QObject* q_scilexerproperties_qbase_sender(void* self) {
    return QsciLexerProperties_QBaseSender((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerProperties_OnSender((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_sender_signal_index(void* self) {
    return QsciLexerProperties_SenderSignalIndex((QsciLexerProperties*)self);
}

int32_t q_scilexerproperties_qbase_sender_signal_index(void* self) {
    return QsciLexerProperties_QBaseSenderSignalIndex((QsciLexerProperties*)self);
}

void q_scilexerproperties_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerProperties_OnSenderSignalIndex((QsciLexerProperties*)self, (intptr_t)slot);
}

int32_t q_scilexerproperties_receivers(void* self, const char* signal) {
    return QsciLexerProperties_Receivers((QsciLexerProperties*)self, signal);
}

int32_t q_scilexerproperties_qbase_receivers(void* self, const char* signal) {
    return QsciLexerProperties_QBaseReceivers((QsciLexerProperties*)self, signal);
}

void q_scilexerproperties_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerProperties_OnReceivers((QsciLexerProperties*)self, (intptr_t)slot);
}

bool q_scilexerproperties_is_signal_connected(void* self, void* signal) {
    return QsciLexerProperties_IsSignalConnected((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

bool q_scilexerproperties_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerProperties_QBaseIsSignalConnected((QsciLexerProperties*)self, (QMetaMethod*)signal);
}

void q_scilexerproperties_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerProperties_OnIsSignalConnected((QsciLexerProperties*)self, (intptr_t)slot);
}

void q_scilexerproperties_delete(void* self) {
    QsciLexerProperties_Delete((QsciLexerProperties*)(self));
}
