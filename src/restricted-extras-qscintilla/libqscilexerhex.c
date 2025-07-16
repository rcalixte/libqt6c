#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerhex.hpp"
#include "libqscilexerhex.h"

QsciLexerHex* q_scilexerhex_new() {
    return QsciLexerHex_new();
}

QsciLexerHex* q_scilexerhex_new2(void* parent) {
    return QsciLexerHex_new2((QObject*)parent);
}

const QMetaObject* q_scilexerhex_meta_object(void* self) {
    return QsciLexerHex_MetaObject((QsciLexerHex*)self);
}

void* q_scilexerhex_metacast(void* self, const char* param1) {
    return QsciLexerHex_Metacast((QsciLexerHex*)self, param1);
}

int32_t q_scilexerhex_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerHex_Metacall((QsciLexerHex*)self, param1, param2, param3);
}

void q_scilexerhex_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerHex_OnMetacall((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerHex_QBaseMetacall((QsciLexerHex*)self, param1, param2, param3);
}

const char* q_scilexerhex_tr(const char* s) {
    libqt_string _str = QsciLexerHex_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerhex_default_color(void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexerhex_default_font(void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexerhex_default_paper(void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

const char* q_scilexerhex_description(void* self, int style) {
    libqt_string _str = QsciLexerHex_Description((QsciLexerHex*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhex_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerHex_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerHex_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerhex_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerhex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerhex_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerhex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerhex_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerhex_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerhex_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerhex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerhex_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerhex_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerhex_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerhex_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhex_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerhex_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhex_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerhex_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerhex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerhex_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerhex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerhex_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerhex_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhex_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerhex_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerhex_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerhex_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerhex_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerhex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerhex_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerhex_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerhex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerhex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerhex_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerhex_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerhex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerhex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerhex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerhex_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerhex_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerhex_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerhex_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerhex_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerhex_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerhex_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerhex_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerhex_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerhex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerhex_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerhex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerhex_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerhex_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerhex_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerhex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerhex_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerhex_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerhex_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerhex_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerhex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerhex_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

const char* q_scilexerhex_language(void* self) {
    return QsciLexerHex_Language((QsciLexerHex*)self);
}

const char* q_scilexerhex_qbase_language(void* self) {
    return QsciLexerHex_QBaseLanguage((QsciLexerHex*)self);
}

void q_scilexerhex_on_language(void* self, const char* (*slot)()) {
    QsciLexerHex_OnLanguage((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_lexer(void* self) {
    return QsciLexerHex_Lexer((QsciLexerHex*)self);
}

const char* q_scilexerhex_qbase_lexer(void* self) {
    return QsciLexerHex_QBaseLexer((QsciLexerHex*)self);
}

void q_scilexerhex_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerHex_OnLexer((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_lexer_id(void* self) {
    return QsciLexerHex_LexerId((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_lexer_id(void* self) {
    return QsciLexerHex_QBaseLexerId((QsciLexerHex*)self);
}

void q_scilexerhex_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnLexerId((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_auto_completion_fillups(void* self) {
    return QsciLexerHex_AutoCompletionFillups((QsciLexerHex*)self);
}

const char* q_scilexerhex_qbase_auto_completion_fillups(void* self) {
    return QsciLexerHex_QBaseAutoCompletionFillups((QsciLexerHex*)self);
}

void q_scilexerhex_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerHex_OnAutoCompletionFillups((QsciLexerHex*)self, (intptr_t)slot);
}

const char** q_scilexerhex_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerHex_AutoCompletionWordSeparators((QsciLexerHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_scilexerhex_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerHex_QBaseAutoCompletionWordSeparators((QsciLexerHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_scilexerhex_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerHex_OnAutoCompletionWordSeparators((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_block_end(void* self, int* style) {
    return QsciLexerHex_BlockEnd((QsciLexerHex*)self, style);
}

const char* q_scilexerhex_qbase_block_end(void* self, int* style) {
    return QsciLexerHex_QBaseBlockEnd((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHex_OnBlockEnd((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_block_lookback(void* self) {
    return QsciLexerHex_BlockLookback((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_block_lookback(void* self) {
    return QsciLexerHex_QBaseBlockLookback((QsciLexerHex*)self);
}

void q_scilexerhex_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnBlockLookback((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_block_start(void* self, int* style) {
    return QsciLexerHex_BlockStart((QsciLexerHex*)self, style);
}

const char* q_scilexerhex_qbase_block_start(void* self, int* style) {
    return QsciLexerHex_QBaseBlockStart((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHex_OnBlockStart((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_block_start_keyword(void* self, int* style) {
    return QsciLexerHex_BlockStartKeyword((QsciLexerHex*)self, style);
}

const char* q_scilexerhex_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerHex_QBaseBlockStartKeyword((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerHex_OnBlockStartKeyword((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_brace_style(void* self) {
    return QsciLexerHex_BraceStyle((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_brace_style(void* self) {
    return QsciLexerHex_QBaseBraceStyle((QsciLexerHex*)self);
}

void q_scilexerhex_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnBraceStyle((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_case_sensitive(void* self) {
    return QsciLexerHex_CaseSensitive((QsciLexerHex*)self);
}

bool q_scilexerhex_qbase_case_sensitive(void* self) {
    return QsciLexerHex_QBaseCaseSensitive((QsciLexerHex*)self);
}

void q_scilexerhex_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerHex_OnCaseSensitive((QsciLexerHex*)self, (intptr_t)slot);
}

QColor* q_scilexerhex_color(void* self, int style) {
    return QsciLexerHex_Color((QsciLexerHex*)self, style);
}

QColor* q_scilexerhex_qbase_color(void* self, int style) {
    return QsciLexerHex_QBaseColor((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHex_OnColor((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_eol_fill(void* self, int style) {
    return QsciLexerHex_EolFill((QsciLexerHex*)self, style);
}

bool q_scilexerhex_qbase_eol_fill(void* self, int style) {
    return QsciLexerHex_QBaseEolFill((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerHex_OnEolFill((QsciLexerHex*)self, (intptr_t)slot);
}

QFont* q_scilexerhex_font(void* self, int style) {
    return QsciLexerHex_Font((QsciLexerHex*)self, style);
}

QFont* q_scilexerhex_qbase_font(void* self, int style) {
    return QsciLexerHex_QBaseFont((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerHex_OnFont((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_indentation_guide_view(void* self) {
    return QsciLexerHex_IndentationGuideView((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_indentation_guide_view(void* self) {
    return QsciLexerHex_QBaseIndentationGuideView((QsciLexerHex*)self);
}

void q_scilexerhex_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnIndentationGuideView((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_keywords(void* self, int set) {
    return QsciLexerHex_Keywords((QsciLexerHex*)self, set);
}

const char* q_scilexerhex_qbase_keywords(void* self, int set) {
    return QsciLexerHex_QBaseKeywords((QsciLexerHex*)self, set);
}

void q_scilexerhex_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerHex_OnKeywords((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_default_style(void* self) {
    return QsciLexerHex_DefaultStyle((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_default_style(void* self) {
    return QsciLexerHex_QBaseDefaultStyle((QsciLexerHex*)self);
}

void q_scilexerhex_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnDefaultStyle((QsciLexerHex*)self, (intptr_t)slot);
}

QColor* q_scilexerhex_paper(void* self, int style) {
    return QsciLexerHex_Paper((QsciLexerHex*)self, style);
}

QColor* q_scilexerhex_qbase_paper(void* self, int style) {
    return QsciLexerHex_QBasePaper((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHex_OnPaper((QsciLexerHex*)self, (intptr_t)slot);
}

QColor* q_scilexerhex_default_color2(void* self, int style) {
    return QsciLexerHex_DefaultColor2((QsciLexerHex*)self, style);
}

QColor* q_scilexerhex_qbase_default_color2(void* self, int style) {
    return QsciLexerHex_QBaseDefaultColor2((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_default_color2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHex_OnDefaultColor2((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_default_eol_fill(void* self, int style) {
    return QsciLexerHex_DefaultEolFill((QsciLexerHex*)self, style);
}

bool q_scilexerhex_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerHex_QBaseDefaultEolFill((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerHex_OnDefaultEolFill((QsciLexerHex*)self, (intptr_t)slot);
}

QFont* q_scilexerhex_default_font2(void* self, int style) {
    return QsciLexerHex_DefaultFont2((QsciLexerHex*)self, style);
}

QFont* q_scilexerhex_qbase_default_font2(void* self, int style) {
    return QsciLexerHex_QBaseDefaultFont2((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_default_font2(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerHex_OnDefaultFont2((QsciLexerHex*)self, (intptr_t)slot);
}

QColor* q_scilexerhex_default_paper2(void* self, int style) {
    return QsciLexerHex_DefaultPaper2((QsciLexerHex*)self, style);
}

QColor* q_scilexerhex_qbase_default_paper2(void* self, int style) {
    return QsciLexerHex_QBaseDefaultPaper2((QsciLexerHex*)self, style);
}

void q_scilexerhex_on_default_paper2(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerHex_OnDefaultPaper2((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_editor(void* self, void* editor) {
    QsciLexerHex_SetEditor((QsciLexerHex*)self, (QsciScintilla*)editor);
}

void q_scilexerhex_qbase_set_editor(void* self, void* editor) {
    QsciLexerHex_QBaseSetEditor((QsciLexerHex*)self, (QsciScintilla*)editor);
}

void q_scilexerhex_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnSetEditor((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_refresh_properties(void* self) {
    QsciLexerHex_RefreshProperties((QsciLexerHex*)self);
}

void q_scilexerhex_qbase_refresh_properties(void* self) {
    QsciLexerHex_QBaseRefreshProperties((QsciLexerHex*)self);
}

void q_scilexerhex_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerHex_OnRefreshProperties((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_style_bits_needed(void* self) {
    return QsciLexerHex_StyleBitsNeeded((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_style_bits_needed(void* self) {
    return QsciLexerHex_QBaseStyleBitsNeeded((QsciLexerHex*)self);
}

void q_scilexerhex_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnStyleBitsNeeded((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_word_characters(void* self) {
    return QsciLexerHex_WordCharacters((QsciLexerHex*)self);
}

const char* q_scilexerhex_qbase_word_characters(void* self) {
    return QsciLexerHex_QBaseWordCharacters((QsciLexerHex*)self);
}

void q_scilexerhex_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerHex_OnWordCharacters((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerHex_SetAutoIndentStyle((QsciLexerHex*)self, autoindentstyle);
}

void q_scilexerhex_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerHex_QBaseSetAutoIndentStyle((QsciLexerHex*)self, autoindentstyle);
}

void q_scilexerhex_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerHex_OnSetAutoIndentStyle((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_color(void* self, void* c, int style) {
    QsciLexerHex_SetColor((QsciLexerHex*)self, (QColor*)c, style);
}

void q_scilexerhex_qbase_set_color(void* self, void* c, int style) {
    QsciLexerHex_QBaseSetColor((QsciLexerHex*)self, (QColor*)c, style);
}

void q_scilexerhex_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHex_OnSetColor((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerHex_SetEolFill((QsciLexerHex*)self, eoffill, style);
}

void q_scilexerhex_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerHex_QBaseSetEolFill((QsciLexerHex*)self, eoffill, style);
}

void q_scilexerhex_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerHex_OnSetEolFill((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_font(void* self, void* f, int style) {
    QsciLexerHex_SetFont((QsciLexerHex*)self, (QFont*)f, style);
}

void q_scilexerhex_qbase_set_font(void* self, void* f, int style) {
    QsciLexerHex_QBaseSetFont((QsciLexerHex*)self, (QFont*)f, style);
}

void q_scilexerhex_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHex_OnSetFont((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_set_paper(void* self, void* c, int style) {
    QsciLexerHex_SetPaper((QsciLexerHex*)self, (QColor*)c, style);
}

void q_scilexerhex_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerHex_QBaseSetPaper((QsciLexerHex*)self, (QColor*)c, style);
}

void q_scilexerhex_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerHex_OnSetPaper((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHex_ReadProperties((QsciLexerHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerhex_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHex_QBaseReadProperties((QsciLexerHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerhex_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerHex_OnReadProperties((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHex_WriteProperties((QsciLexerHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerhex_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerHex_QBaseWriteProperties((QsciLexerHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerhex_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerHex_OnWriteProperties((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_event(void* self, void* event) {
    return QsciLexerHex_Event((QsciLexerHex*)self, (QEvent*)event);
}

bool q_scilexerhex_qbase_event(void* self, void* event) {
    return QsciLexerHex_QBaseEvent((QsciLexerHex*)self, (QEvent*)event);
}

void q_scilexerhex_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerHex_OnEvent((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerHex_EventFilter((QsciLexerHex*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerhex_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerHex_QBaseEventFilter((QsciLexerHex*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerhex_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerHex_OnEventFilter((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_timer_event(void* self, void* event) {
    QsciLexerHex_TimerEvent((QsciLexerHex*)self, (QTimerEvent*)event);
}

void q_scilexerhex_qbase_timer_event(void* self, void* event) {
    QsciLexerHex_QBaseTimerEvent((QsciLexerHex*)self, (QTimerEvent*)event);
}

void q_scilexerhex_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnTimerEvent((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_child_event(void* self, void* event) {
    QsciLexerHex_ChildEvent((QsciLexerHex*)self, (QChildEvent*)event);
}

void q_scilexerhex_qbase_child_event(void* self, void* event) {
    QsciLexerHex_QBaseChildEvent((QsciLexerHex*)self, (QChildEvent*)event);
}

void q_scilexerhex_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnChildEvent((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_custom_event(void* self, void* event) {
    QsciLexerHex_CustomEvent((QsciLexerHex*)self, (QEvent*)event);
}

void q_scilexerhex_qbase_custom_event(void* self, void* event) {
    QsciLexerHex_QBaseCustomEvent((QsciLexerHex*)self, (QEvent*)event);
}

void q_scilexerhex_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnCustomEvent((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_connect_notify(void* self, void* signal) {
    QsciLexerHex_ConnectNotify((QsciLexerHex*)self, (QMetaMethod*)signal);
}

void q_scilexerhex_qbase_connect_notify(void* self, void* signal) {
    QsciLexerHex_QBaseConnectNotify((QsciLexerHex*)self, (QMetaMethod*)signal);
}

void q_scilexerhex_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnConnectNotify((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_disconnect_notify(void* self, void* signal) {
    QsciLexerHex_DisconnectNotify((QsciLexerHex*)self, (QMetaMethod*)signal);
}

void q_scilexerhex_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerHex_QBaseDisconnectNotify((QsciLexerHex*)self, (QMetaMethod*)signal);
}

void q_scilexerhex_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerHex_OnDisconnectNotify((QsciLexerHex*)self, (intptr_t)slot);
}

char* q_scilexerhex_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerHex_TextAsBytes((QsciLexerHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerhex_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerHex_QBaseTextAsBytes((QsciLexerHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhex_on_text_as_bytes(void* self, char* (*slot)(void*, const char*)) {
    QsciLexerHex_OnTextAsBytes((QsciLexerHex*)self, (intptr_t)slot);
}

const char* q_scilexerhex_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerHex_BytesAsText((QsciLexerHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerhex_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerHex_QBaseBytesAsText((QsciLexerHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerhex_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int)) {
    QsciLexerHex_OnBytesAsText((QsciLexerHex*)self, (intptr_t)slot);
}

QObject* q_scilexerhex_sender(void* self) {
    return QsciLexerHex_Sender((QsciLexerHex*)self);
}

QObject* q_scilexerhex_qbase_sender(void* self) {
    return QsciLexerHex_QBaseSender((QsciLexerHex*)self);
}

void q_scilexerhex_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerHex_OnSender((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_sender_signal_index(void* self) {
    return QsciLexerHex_SenderSignalIndex((QsciLexerHex*)self);
}

int32_t q_scilexerhex_qbase_sender_signal_index(void* self) {
    return QsciLexerHex_QBaseSenderSignalIndex((QsciLexerHex*)self);
}

void q_scilexerhex_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerHex_OnSenderSignalIndex((QsciLexerHex*)self, (intptr_t)slot);
}

int32_t q_scilexerhex_receivers(void* self, const char* signal) {
    return QsciLexerHex_Receivers((QsciLexerHex*)self, signal);
}

int32_t q_scilexerhex_qbase_receivers(void* self, const char* signal) {
    return QsciLexerHex_QBaseReceivers((QsciLexerHex*)self, signal);
}

void q_scilexerhex_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerHex_OnReceivers((QsciLexerHex*)self, (intptr_t)slot);
}

bool q_scilexerhex_is_signal_connected(void* self, void* signal) {
    return QsciLexerHex_IsSignalConnected((QsciLexerHex*)self, (QMetaMethod*)signal);
}

bool q_scilexerhex_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerHex_QBaseIsSignalConnected((QsciLexerHex*)self, (QMetaMethod*)signal);
}

void q_scilexerhex_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerHex_OnIsSignalConnected((QsciLexerHex*)self, (intptr_t)slot);
}

void q_scilexerhex_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexerhex_delete(void* self) {
    QsciLexerHex_Delete((QsciLexerHex*)(self));
}
