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
#include "libqscilexermatlab.hpp"
#include "libqscilexermatlab.h"

QsciLexerMatlab* q_scilexermatlab_new() {
    return QsciLexerMatlab_new();
}

QsciLexerMatlab* q_scilexermatlab_new2(void* parent) {
    return QsciLexerMatlab_new2((QObject*)parent);
}

QMetaObject* q_scilexermatlab_meta_object(void* self) {
    return QsciLexerMatlab_MetaObject((QsciLexerMatlab*)self);
}

void* q_scilexermatlab_metacast(void* self, const char* param1) {
    return QsciLexerMatlab_Metacast((QsciLexerMatlab*)self, param1);
}

int32_t q_scilexermatlab_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMatlab_Metacall((QsciLexerMatlab*)self, param1, param2, param3);
}

void q_scilexermatlab_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerMatlab_OnMetacall((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMatlab_QBaseMetacall((QsciLexerMatlab*)self, param1, param2, param3);
}

const char* q_scilexermatlab_tr(const char* s) {
    libqt_string _str = QsciLexerMatlab_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermatlab_language(void* self) {
    return QsciLexerMatlab_Language((QsciLexerMatlab*)self);
}

const char* q_scilexermatlab_lexer(void* self) {
    return QsciLexerMatlab_Lexer((QsciLexerMatlab*)self);
}

QColor* q_scilexermatlab_default_color(void* self, int style) {
    return QsciLexerMatlab_DefaultColor((QsciLexerMatlab*)self, style);
}

QFont* q_scilexermatlab_default_font(void* self, int style) {
    return QsciLexerMatlab_DefaultFont((QsciLexerMatlab*)self, style);
}

const char* q_scilexermatlab_keywords(void* self, int set) {
    return QsciLexerMatlab_Keywords((QsciLexerMatlab*)self, set);
}

const char* q_scilexermatlab_description(void* self, int style) {
    libqt_string _str = QsciLexerMatlab_Description((QsciLexerMatlab*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermatlab_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerMatlab_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermatlab_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerMatlab_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexermatlab_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexermatlab_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexermatlab_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexermatlab_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexermatlab_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexermatlab_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexermatlab_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexermatlab_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexermatlab_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexermatlab_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexermatlab_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermatlab_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermatlab_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexermatlab_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermatlab_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexermatlab_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermatlab_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermatlab_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermatlab_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexermatlab_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexermatlab_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexermatlab_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexermatlab_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermatlab_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_scilexermatlab_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexermatlab_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexermatlab_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexermatlab_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexermatlab_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexermatlab_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexermatlab_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexermatlab_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexermatlab_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexermatlab_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexermatlab_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexermatlab_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexermatlab_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexermatlab_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexermatlab_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexermatlab_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexermatlab_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexermatlab_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexermatlab_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexermatlab_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexermatlab_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexermatlab_dynamic_property_names(void* self) {
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

QBindingStorage* q_scilexermatlab_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_scilexermatlab_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexermatlab_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexermatlab_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexermatlab_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexermatlab_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexermatlab_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexermatlab_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexermatlab_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexermatlab_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexermatlab_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexermatlab_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_lexer_id(void* self) {
    return QsciLexerMatlab_LexerId((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_lexer_id(void* self) {
    return QsciLexerMatlab_QBaseLexerId((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnLexerId((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char* q_scilexermatlab_auto_completion_fillups(void* self) {
    return QsciLexerMatlab_AutoCompletionFillups((QsciLexerMatlab*)self);
}

const char* q_scilexermatlab_qbase_auto_completion_fillups(void* self) {
    return QsciLexerMatlab_QBaseAutoCompletionFillups((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerMatlab_OnAutoCompletionFillups((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char** q_scilexermatlab_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMatlab_AutoCompletionWordSeparators((QsciLexerMatlab*)self);
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

const char** q_scilexermatlab_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMatlab_QBaseAutoCompletionWordSeparators((QsciLexerMatlab*)self);
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

void q_scilexermatlab_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerMatlab_OnAutoCompletionWordSeparators((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char* q_scilexermatlab_block_end(void* self, int* style) {
    return QsciLexerMatlab_BlockEnd((QsciLexerMatlab*)self, style);
}

const char* q_scilexermatlab_qbase_block_end(void* self, int* style) {
    return QsciLexerMatlab_QBaseBlockEnd((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMatlab_OnBlockEnd((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_block_lookback(void* self) {
    return QsciLexerMatlab_BlockLookback((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_block_lookback(void* self) {
    return QsciLexerMatlab_QBaseBlockLookback((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnBlockLookback((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char* q_scilexermatlab_block_start(void* self, int* style) {
    return QsciLexerMatlab_BlockStart((QsciLexerMatlab*)self, style);
}

const char* q_scilexermatlab_qbase_block_start(void* self, int* style) {
    return QsciLexerMatlab_QBaseBlockStart((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMatlab_OnBlockStart((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char* q_scilexermatlab_block_start_keyword(void* self, int* style) {
    return QsciLexerMatlab_BlockStartKeyword((QsciLexerMatlab*)self, style);
}

const char* q_scilexermatlab_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerMatlab_QBaseBlockStartKeyword((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMatlab_OnBlockStartKeyword((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_brace_style(void* self) {
    return QsciLexerMatlab_BraceStyle((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_brace_style(void* self) {
    return QsciLexerMatlab_QBaseBraceStyle((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnBraceStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_case_sensitive(void* self) {
    return QsciLexerMatlab_CaseSensitive((QsciLexerMatlab*)self);
}

bool q_scilexermatlab_qbase_case_sensitive(void* self) {
    return QsciLexerMatlab_QBaseCaseSensitive((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerMatlab_OnCaseSensitive((QsciLexerMatlab*)self, (intptr_t)slot);
}

QColor* q_scilexermatlab_color(void* self, int style) {
    return QsciLexerMatlab_Color((QsciLexerMatlab*)self, style);
}

QColor* q_scilexermatlab_qbase_color(void* self, int style) {
    return QsciLexerMatlab_QBaseColor((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMatlab_OnColor((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_eol_fill(void* self, int style) {
    return QsciLexerMatlab_EolFill((QsciLexerMatlab*)self, style);
}

bool q_scilexermatlab_qbase_eol_fill(void* self, int style) {
    return QsciLexerMatlab_QBaseEolFill((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerMatlab_OnEolFill((QsciLexerMatlab*)self, (intptr_t)slot);
}

QFont* q_scilexermatlab_font(void* self, int style) {
    return QsciLexerMatlab_Font((QsciLexerMatlab*)self, style);
}

QFont* q_scilexermatlab_qbase_font(void* self, int style) {
    return QsciLexerMatlab_QBaseFont((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMatlab_OnFont((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_indentation_guide_view(void* self) {
    return QsciLexerMatlab_IndentationGuideView((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_indentation_guide_view(void* self) {
    return QsciLexerMatlab_QBaseIndentationGuideView((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnIndentationGuideView((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_default_style(void* self) {
    return QsciLexerMatlab_DefaultStyle((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_default_style(void* self) {
    return QsciLexerMatlab_QBaseDefaultStyle((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnDefaultStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

QColor* q_scilexermatlab_paper(void* self, int style) {
    return QsciLexerMatlab_Paper((QsciLexerMatlab*)self, style);
}

QColor* q_scilexermatlab_qbase_paper(void* self, int style) {
    return QsciLexerMatlab_QBasePaper((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMatlab_OnPaper((QsciLexerMatlab*)self, (intptr_t)slot);
}

QColor* q_scilexermatlab_default_color_with_style(void* self, int style) {
    return QsciLexerMatlab_DefaultColorWithStyle((QsciLexerMatlab*)self, style);
}

QColor* q_scilexermatlab_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerMatlab_QBaseDefaultColorWithStyle((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMatlab_OnDefaultColorWithStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_default_eol_fill(void* self, int style) {
    return QsciLexerMatlab_DefaultEolFill((QsciLexerMatlab*)self, style);
}

bool q_scilexermatlab_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerMatlab_QBaseDefaultEolFill((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerMatlab_OnDefaultEolFill((QsciLexerMatlab*)self, (intptr_t)slot);
}

QFont* q_scilexermatlab_default_font_with_style(void* self, int style) {
    return QsciLexerMatlab_DefaultFontWithStyle((QsciLexerMatlab*)self, style);
}

QFont* q_scilexermatlab_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerMatlab_QBaseDefaultFontWithStyle((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMatlab_OnDefaultFontWithStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

QColor* q_scilexermatlab_default_paper_with_style(void* self, int style) {
    return QsciLexerMatlab_DefaultPaperWithStyle((QsciLexerMatlab*)self, style);
}

QColor* q_scilexermatlab_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerMatlab_QBaseDefaultPaperWithStyle((QsciLexerMatlab*)self, style);
}

void q_scilexermatlab_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMatlab_OnDefaultPaperWithStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_editor(void* self, void* editor) {
    QsciLexerMatlab_SetEditor((QsciLexerMatlab*)self, (QsciScintilla*)editor);
}

void q_scilexermatlab_qbase_set_editor(void* self, void* editor) {
    QsciLexerMatlab_QBaseSetEditor((QsciLexerMatlab*)self, (QsciScintilla*)editor);
}

void q_scilexermatlab_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnSetEditor((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_refresh_properties(void* self) {
    QsciLexerMatlab_RefreshProperties((QsciLexerMatlab*)self);
}

void q_scilexermatlab_qbase_refresh_properties(void* self) {
    QsciLexerMatlab_QBaseRefreshProperties((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerMatlab_OnRefreshProperties((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_style_bits_needed(void* self) {
    return QsciLexerMatlab_StyleBitsNeeded((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_style_bits_needed(void* self) {
    return QsciLexerMatlab_QBaseStyleBitsNeeded((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnStyleBitsNeeded((QsciLexerMatlab*)self, (intptr_t)slot);
}

const char* q_scilexermatlab_word_characters(void* self) {
    return QsciLexerMatlab_WordCharacters((QsciLexerMatlab*)self);
}

const char* q_scilexermatlab_qbase_word_characters(void* self) {
    return QsciLexerMatlab_QBaseWordCharacters((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerMatlab_OnWordCharacters((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMatlab_SetAutoIndentStyle((QsciLexerMatlab*)self, autoindentstyle);
}

void q_scilexermatlab_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMatlab_QBaseSetAutoIndentStyle((QsciLexerMatlab*)self, autoindentstyle);
}

void q_scilexermatlab_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerMatlab_OnSetAutoIndentStyle((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_color(void* self, void* c, int style) {
    QsciLexerMatlab_SetColor((QsciLexerMatlab*)self, (QColor*)c, style);
}

void q_scilexermatlab_qbase_set_color(void* self, void* c, int style) {
    QsciLexerMatlab_QBaseSetColor((QsciLexerMatlab*)self, (QColor*)c, style);
}

void q_scilexermatlab_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMatlab_OnSetColor((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMatlab_SetEolFill((QsciLexerMatlab*)self, eoffill, style);
}

void q_scilexermatlab_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMatlab_QBaseSetEolFill((QsciLexerMatlab*)self, eoffill, style);
}

void q_scilexermatlab_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerMatlab_OnSetEolFill((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_font(void* self, void* f, int style) {
    QsciLexerMatlab_SetFont((QsciLexerMatlab*)self, (QFont*)f, style);
}

void q_scilexermatlab_qbase_set_font(void* self, void* f, int style) {
    QsciLexerMatlab_QBaseSetFont((QsciLexerMatlab*)self, (QFont*)f, style);
}

void q_scilexermatlab_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMatlab_OnSetFont((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_set_paper(void* self, void* c, int style) {
    QsciLexerMatlab_SetPaper((QsciLexerMatlab*)self, (QColor*)c, style);
}

void q_scilexermatlab_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerMatlab_QBaseSetPaper((QsciLexerMatlab*)self, (QColor*)c, style);
}

void q_scilexermatlab_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMatlab_OnSetPaper((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMatlab_ReadProperties((QsciLexerMatlab*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermatlab_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMatlab_QBaseReadProperties((QsciLexerMatlab*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermatlab_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMatlab_OnReadProperties((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMatlab_WriteProperties((QsciLexerMatlab*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermatlab_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMatlab_QBaseWriteProperties((QsciLexerMatlab*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermatlab_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMatlab_OnWriteProperties((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_event(void* self, void* event) {
    return QsciLexerMatlab_Event((QsciLexerMatlab*)self, (QEvent*)event);
}

bool q_scilexermatlab_qbase_event(void* self, void* event) {
    return QsciLexerMatlab_QBaseEvent((QsciLexerMatlab*)self, (QEvent*)event);
}

void q_scilexermatlab_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMatlab_OnEvent((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMatlab_EventFilter((QsciLexerMatlab*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexermatlab_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMatlab_QBaseEventFilter((QsciLexerMatlab*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexermatlab_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerMatlab_OnEventFilter((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_timer_event(void* self, void* event) {
    QsciLexerMatlab_TimerEvent((QsciLexerMatlab*)self, (QTimerEvent*)event);
}

void q_scilexermatlab_qbase_timer_event(void* self, void* event) {
    QsciLexerMatlab_QBaseTimerEvent((QsciLexerMatlab*)self, (QTimerEvent*)event);
}

void q_scilexermatlab_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnTimerEvent((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_child_event(void* self, void* event) {
    QsciLexerMatlab_ChildEvent((QsciLexerMatlab*)self, (QChildEvent*)event);
}

void q_scilexermatlab_qbase_child_event(void* self, void* event) {
    QsciLexerMatlab_QBaseChildEvent((QsciLexerMatlab*)self, (QChildEvent*)event);
}

void q_scilexermatlab_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnChildEvent((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_custom_event(void* self, void* event) {
    QsciLexerMatlab_CustomEvent((QsciLexerMatlab*)self, (QEvent*)event);
}

void q_scilexermatlab_qbase_custom_event(void* self, void* event) {
    QsciLexerMatlab_QBaseCustomEvent((QsciLexerMatlab*)self, (QEvent*)event);
}

void q_scilexermatlab_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnCustomEvent((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_connect_notify(void* self, void* signal) {
    QsciLexerMatlab_ConnectNotify((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

void q_scilexermatlab_qbase_connect_notify(void* self, void* signal) {
    QsciLexerMatlab_QBaseConnectNotify((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

void q_scilexermatlab_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnConnectNotify((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_disconnect_notify(void* self, void* signal) {
    QsciLexerMatlab_DisconnectNotify((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

void q_scilexermatlab_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerMatlab_QBaseDisconnectNotify((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

void q_scilexermatlab_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMatlab_OnDisconnectNotify((QsciLexerMatlab*)self, (intptr_t)slot);
}

QObject* q_scilexermatlab_sender(void* self) {
    return QsciLexerMatlab_Sender((QsciLexerMatlab*)self);
}

QObject* q_scilexermatlab_qbase_sender(void* self) {
    return QsciLexerMatlab_QBaseSender((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerMatlab_OnSender((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_sender_signal_index(void* self) {
    return QsciLexerMatlab_SenderSignalIndex((QsciLexerMatlab*)self);
}

int32_t q_scilexermatlab_qbase_sender_signal_index(void* self) {
    return QsciLexerMatlab_QBaseSenderSignalIndex((QsciLexerMatlab*)self);
}

void q_scilexermatlab_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerMatlab_OnSenderSignalIndex((QsciLexerMatlab*)self, (intptr_t)slot);
}

int32_t q_scilexermatlab_receivers(void* self, const char* signal) {
    return QsciLexerMatlab_Receivers((QsciLexerMatlab*)self, signal);
}

int32_t q_scilexermatlab_qbase_receivers(void* self, const char* signal) {
    return QsciLexerMatlab_QBaseReceivers((QsciLexerMatlab*)self, signal);
}

void q_scilexermatlab_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerMatlab_OnReceivers((QsciLexerMatlab*)self, (intptr_t)slot);
}

bool q_scilexermatlab_is_signal_connected(void* self, void* signal) {
    return QsciLexerMatlab_IsSignalConnected((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

bool q_scilexermatlab_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerMatlab_QBaseIsSignalConnected((QsciLexerMatlab*)self, (QMetaMethod*)signal);
}

void q_scilexermatlab_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMatlab_OnIsSignalConnected((QsciLexerMatlab*)self, (intptr_t)slot);
}

void q_scilexermatlab_delete(void* self) {
    QsciLexerMatlab_Delete((QsciLexerMatlab*)(self));
}
