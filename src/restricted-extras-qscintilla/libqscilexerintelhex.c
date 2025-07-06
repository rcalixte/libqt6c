#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include <string.h>
#include "libqscilexer.hpp"
#include "libqscilexerhex.hpp"
#include "../libqcoreevent.hpp"
#include "libqscilexerintelhex.hpp"
#include "libqscilexerintelhex.h"

QsciLexerIntelHex* q_scilexerintelhex_new() {
    return QsciLexerIntelHex_new();
}

QsciLexerIntelHex* q_scilexerintelhex_new2(void* parent) {
    return QsciLexerIntelHex_new2((QObject*)parent);
}

const QMetaObject* q_scilexerintelhex_meta_object(void* self) {
    return QsciLexerIntelHex_MetaObject((QsciLexerIntelHex*)self);
}

void* q_scilexerintelhex_metacast(void* self, const char* param1) {
    return QsciLexerIntelHex_Metacast((QsciLexerIntelHex*)self, param1);
}

int32_t q_scilexerintelhex_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerIntelHex_Metacall((QsciLexerIntelHex*)self, param1, param2, param3);
}

void q_scilexerintelhex_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerIntelHex_OnMetacall((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerIntelHex_QBaseMetacall((QsciLexerIntelHex*)self, param1, param2, param3);
}

const char* q_scilexerintelhex_tr(const char* s) {
    libqt_string _str = QsciLexerIntelHex_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerintelhex_language(void* self) {
    return QsciLexerIntelHex_Language((QsciLexerIntelHex*)self);
}

const char* q_scilexerintelhex_lexer(void* self) {
    return QsciLexerIntelHex_Lexer((QsciLexerIntelHex*)self);
}

const char* q_scilexerintelhex_description(void* self, int style) {
    libqt_string _str = QsciLexerIntelHex_Description((QsciLexerIntelHex*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerintelhex_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerIntelHex_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerintelhex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerIntelHex_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexerintelhex_default_color(void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexerintelhex_default_font(void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexerintelhex_default_paper(void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

QsciAbstractAPIs* q_scilexerintelhex_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerintelhex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexerintelhex_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerintelhex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerintelhex_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerintelhex_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerintelhex_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerintelhex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerintelhex_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerintelhex_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerintelhex_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerintelhex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerintelhex_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerintelhex_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerintelhex_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerintelhex_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerintelhex_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexerintelhex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerintelhex_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerintelhex_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerintelhex_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerintelhex_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerintelhex_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerintelhex_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerintelhex_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerintelhex_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerintelhex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerintelhex_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerintelhex_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerintelhex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexerintelhex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerintelhex_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerintelhex_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerintelhex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerintelhex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerintelhex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerintelhex_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerintelhex_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerintelhex_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerintelhex_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexerintelhex_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerintelhex_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerintelhex_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerintelhex_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerintelhex_dynamic_property_names(void* self) {
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
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_scilexerintelhex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerintelhex_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerintelhex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerintelhex_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexerintelhex_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerintelhex_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerintelhex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerintelhex_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerintelhex_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexerintelhex_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexerintelhex_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexerintelhex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerintelhex_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_lexer_id(void* self) {
    return QsciLexerIntelHex_LexerId((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_lexer_id(void* self) {
    return QsciLexerIntelHex_QBaseLexerId((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnLexerId((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_auto_completion_fillups(void* self) {
    return QsciLexerIntelHex_AutoCompletionFillups((QsciLexerIntelHex*)self);
}

const char* q_scilexerintelhex_qbase_auto_completion_fillups(void* self) {
    return QsciLexerIntelHex_QBaseAutoCompletionFillups((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerIntelHex_OnAutoCompletionFillups((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char** q_scilexerintelhex_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIntelHex_AutoCompletionWordSeparators((QsciLexerIntelHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

const char** q_scilexerintelhex_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerIntelHex_QBaseAutoCompletionWordSeparators((QsciLexerIntelHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_scilexerintelhex_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerIntelHex_OnAutoCompletionWordSeparators((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_block_end(void* self, int* style) {
    return QsciLexerIntelHex_BlockEnd((QsciLexerIntelHex*)self, style);
}

const char* q_scilexerintelhex_qbase_block_end(void* self, int* style) {
    return QsciLexerIntelHex_QBaseBlockEnd((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIntelHex_OnBlockEnd((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_block_lookback(void* self) {
    return QsciLexerIntelHex_BlockLookback((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_block_lookback(void* self) {
    return QsciLexerIntelHex_QBaseBlockLookback((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnBlockLookback((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_block_start(void* self, int* style) {
    return QsciLexerIntelHex_BlockStart((QsciLexerIntelHex*)self, style);
}

const char* q_scilexerintelhex_qbase_block_start(void* self, int* style) {
    return QsciLexerIntelHex_QBaseBlockStart((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIntelHex_OnBlockStart((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_block_start_keyword(void* self, int* style) {
    return QsciLexerIntelHex_BlockStartKeyword((QsciLexerIntelHex*)self, style);
}

const char* q_scilexerintelhex_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerIntelHex_QBaseBlockStartKeyword((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerIntelHex_OnBlockStartKeyword((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_brace_style(void* self) {
    return QsciLexerIntelHex_BraceStyle((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_brace_style(void* self) {
    return QsciLexerIntelHex_QBaseBraceStyle((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnBraceStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_case_sensitive(void* self) {
    return QsciLexerIntelHex_CaseSensitive((QsciLexerIntelHex*)self);
}

bool q_scilexerintelhex_qbase_case_sensitive(void* self) {
    return QsciLexerIntelHex_QBaseCaseSensitive((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerIntelHex_OnCaseSensitive((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QColor* q_scilexerintelhex_color(void* self, int style) {
    return QsciLexerIntelHex_Color((QsciLexerIntelHex*)self, style);
}

QColor* q_scilexerintelhex_qbase_color(void* self, int style) {
    return QsciLexerIntelHex_QBaseColor((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnColor((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_eol_fill(void* self, int style) {
    return QsciLexerIntelHex_EolFill((QsciLexerIntelHex*)self, style);
}

bool q_scilexerintelhex_qbase_eol_fill(void* self, int style) {
    return QsciLexerIntelHex_QBaseEolFill((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerIntelHex_OnEolFill((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QFont* q_scilexerintelhex_font(void* self, int style) {
    return QsciLexerIntelHex_Font((QsciLexerIntelHex*)self, style);
}

QFont* q_scilexerintelhex_qbase_font(void* self, int style) {
    return QsciLexerIntelHex_QBaseFont((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnFont((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_indentation_guide_view(void* self) {
    return QsciLexerIntelHex_IndentationGuideView((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_indentation_guide_view(void* self) {
    return QsciLexerIntelHex_QBaseIndentationGuideView((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnIndentationGuideView((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_keywords(void* self, int set) {
    return QsciLexerIntelHex_Keywords((QsciLexerIntelHex*)self, set);
}

const char* q_scilexerintelhex_qbase_keywords(void* self, int set) {
    return QsciLexerIntelHex_QBaseKeywords((QsciLexerIntelHex*)self, set);
}

void q_scilexerintelhex_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnKeywords((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_default_style(void* self) {
    return QsciLexerIntelHex_DefaultStyle((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_default_style(void* self) {
    return QsciLexerIntelHex_QBaseDefaultStyle((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnDefaultStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QColor* q_scilexerintelhex_paper(void* self, int style) {
    return QsciLexerIntelHex_Paper((QsciLexerIntelHex*)self, style);
}

QColor* q_scilexerintelhex_qbase_paper(void* self, int style) {
    return QsciLexerIntelHex_QBasePaper((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnPaper((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QColor* q_scilexerintelhex_default_color_with_style(void* self, int style) {
    return QsciLexerIntelHex_DefaultColorWithStyle((QsciLexerIntelHex*)self, style);
}

QColor* q_scilexerintelhex_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerIntelHex_QBaseDefaultColorWithStyle((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnDefaultColorWithStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_default_eol_fill(void* self, int style) {
    return QsciLexerIntelHex_DefaultEolFill((QsciLexerIntelHex*)self, style);
}

bool q_scilexerintelhex_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerIntelHex_QBaseDefaultEolFill((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerIntelHex_OnDefaultEolFill((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QFont* q_scilexerintelhex_default_font_with_style(void* self, int style) {
    return QsciLexerIntelHex_DefaultFontWithStyle((QsciLexerIntelHex*)self, style);
}

QFont* q_scilexerintelhex_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerIntelHex_QBaseDefaultFontWithStyle((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnDefaultFontWithStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QColor* q_scilexerintelhex_default_paper_with_style(void* self, int style) {
    return QsciLexerIntelHex_DefaultPaperWithStyle((QsciLexerIntelHex*)self, style);
}

QColor* q_scilexerintelhex_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerIntelHex_QBaseDefaultPaperWithStyle((QsciLexerIntelHex*)self, style);
}

void q_scilexerintelhex_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerIntelHex_OnDefaultPaperWithStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_editor(void* self, void* editor) {
    QsciLexerIntelHex_SetEditor((QsciLexerIntelHex*)self, (QsciScintilla*)editor);
}

void q_scilexerintelhex_qbase_set_editor(void* self, void* editor) {
    QsciLexerIntelHex_QBaseSetEditor((QsciLexerIntelHex*)self, (QsciScintilla*)editor);
}

void q_scilexerintelhex_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnSetEditor((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_refresh_properties(void* self) {
    QsciLexerIntelHex_RefreshProperties((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_qbase_refresh_properties(void* self) {
    QsciLexerIntelHex_QBaseRefreshProperties((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerIntelHex_OnRefreshProperties((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_style_bits_needed(void* self) {
    return QsciLexerIntelHex_StyleBitsNeeded((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_style_bits_needed(void* self) {
    return QsciLexerIntelHex_QBaseStyleBitsNeeded((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnStyleBitsNeeded((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_word_characters(void* self) {
    return QsciLexerIntelHex_WordCharacters((QsciLexerIntelHex*)self);
}

const char* q_scilexerintelhex_qbase_word_characters(void* self) {
    return QsciLexerIntelHex_QBaseWordCharacters((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerIntelHex_OnWordCharacters((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIntelHex_SetAutoIndentStyle((QsciLexerIntelHex*)self, autoindentstyle);
}

void q_scilexerintelhex_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerIntelHex_QBaseSetAutoIndentStyle((QsciLexerIntelHex*)self, autoindentstyle);
}

void q_scilexerintelhex_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerIntelHex_OnSetAutoIndentStyle((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_color(void* self, void* c, int style) {
    QsciLexerIntelHex_SetColor((QsciLexerIntelHex*)self, (QColor*)c, style);
}

void q_scilexerintelhex_qbase_set_color(void* self, void* c, int style) {
    QsciLexerIntelHex_QBaseSetColor((QsciLexerIntelHex*)self, (QColor*)c, style);
}

void q_scilexerintelhex_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIntelHex_OnSetColor((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIntelHex_SetEolFill((QsciLexerIntelHex*)self, eoffill, style);
}

void q_scilexerintelhex_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerIntelHex_QBaseSetEolFill((QsciLexerIntelHex*)self, eoffill, style);
}

void q_scilexerintelhex_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerIntelHex_OnSetEolFill((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_font(void* self, void* f, int style) {
    QsciLexerIntelHex_SetFont((QsciLexerIntelHex*)self, (QFont*)f, style);
}

void q_scilexerintelhex_qbase_set_font(void* self, void* f, int style) {
    QsciLexerIntelHex_QBaseSetFont((QsciLexerIntelHex*)self, (QFont*)f, style);
}

void q_scilexerintelhex_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIntelHex_OnSetFont((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_set_paper(void* self, void* c, int style) {
    QsciLexerIntelHex_SetPaper((QsciLexerIntelHex*)self, (QColor*)c, style);
}

void q_scilexerintelhex_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerIntelHex_QBaseSetPaper((QsciLexerIntelHex*)self, (QColor*)c, style);
}

void q_scilexerintelhex_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerIntelHex_OnSetPaper((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIntelHex_ReadProperties((QsciLexerIntelHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerintelhex_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIntelHex_QBaseReadProperties((QsciLexerIntelHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerintelhex_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerIntelHex_OnReadProperties((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIntelHex_WriteProperties((QsciLexerIntelHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerintelhex_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerIntelHex_QBaseWriteProperties((QsciLexerIntelHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerintelhex_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerIntelHex_OnWriteProperties((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_event(void* self, void* event) {
    return QsciLexerIntelHex_Event((QsciLexerIntelHex*)self, (QEvent*)event);
}

bool q_scilexerintelhex_qbase_event(void* self, void* event) {
    return QsciLexerIntelHex_QBaseEvent((QsciLexerIntelHex*)self, (QEvent*)event);
}

void q_scilexerintelhex_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnEvent((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIntelHex_EventFilter((QsciLexerIntelHex*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerintelhex_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerIntelHex_QBaseEventFilter((QsciLexerIntelHex*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerintelhex_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerIntelHex_OnEventFilter((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_timer_event(void* self, void* event) {
    QsciLexerIntelHex_TimerEvent((QsciLexerIntelHex*)self, (QTimerEvent*)event);
}

void q_scilexerintelhex_qbase_timer_event(void* self, void* event) {
    QsciLexerIntelHex_QBaseTimerEvent((QsciLexerIntelHex*)self, (QTimerEvent*)event);
}

void q_scilexerintelhex_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnTimerEvent((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_child_event(void* self, void* event) {
    QsciLexerIntelHex_ChildEvent((QsciLexerIntelHex*)self, (QChildEvent*)event);
}

void q_scilexerintelhex_qbase_child_event(void* self, void* event) {
    QsciLexerIntelHex_QBaseChildEvent((QsciLexerIntelHex*)self, (QChildEvent*)event);
}

void q_scilexerintelhex_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnChildEvent((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_custom_event(void* self, void* event) {
    QsciLexerIntelHex_CustomEvent((QsciLexerIntelHex*)self, (QEvent*)event);
}

void q_scilexerintelhex_qbase_custom_event(void* self, void* event) {
    QsciLexerIntelHex_QBaseCustomEvent((QsciLexerIntelHex*)self, (QEvent*)event);
}

void q_scilexerintelhex_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnCustomEvent((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_connect_notify(void* self, void* signal) {
    QsciLexerIntelHex_ConnectNotify((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

void q_scilexerintelhex_qbase_connect_notify(void* self, void* signal) {
    QsciLexerIntelHex_QBaseConnectNotify((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

void q_scilexerintelhex_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnConnectNotify((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_disconnect_notify(void* self, void* signal) {
    QsciLexerIntelHex_DisconnectNotify((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

void q_scilexerintelhex_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerIntelHex_QBaseDisconnectNotify((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

void q_scilexerintelhex_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnDisconnectNotify((QsciLexerIntelHex*)self, (intptr_t)slot);
}

char* q_scilexerintelhex_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerIntelHex_TextAsBytes((QsciLexerIntelHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerintelhex_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerIntelHex_QBaseTextAsBytes((QsciLexerIntelHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerintelhex_on_text_as_bytes(void* self, char* (*slot)(void*, const char*)) {
    QsciLexerIntelHex_OnTextAsBytes((QsciLexerIntelHex*)self, (intptr_t)slot);
}

const char* q_scilexerintelhex_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerIntelHex_BytesAsText((QsciLexerIntelHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerintelhex_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerIntelHex_QBaseBytesAsText((QsciLexerIntelHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerintelhex_on_bytes_as_text(void* self, const char* (*slot)(void*, const char*, int)) {
    QsciLexerIntelHex_OnBytesAsText((QsciLexerIntelHex*)self, (intptr_t)slot);
}

QObject* q_scilexerintelhex_sender(void* self) {
    return QsciLexerIntelHex_Sender((QsciLexerIntelHex*)self);
}

QObject* q_scilexerintelhex_qbase_sender(void* self) {
    return QsciLexerIntelHex_QBaseSender((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerIntelHex_OnSender((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_sender_signal_index(void* self) {
    return QsciLexerIntelHex_SenderSignalIndex((QsciLexerIntelHex*)self);
}

int32_t q_scilexerintelhex_qbase_sender_signal_index(void* self) {
    return QsciLexerIntelHex_QBaseSenderSignalIndex((QsciLexerIntelHex*)self);
}

void q_scilexerintelhex_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerIntelHex_OnSenderSignalIndex((QsciLexerIntelHex*)self, (intptr_t)slot);
}

int32_t q_scilexerintelhex_receivers(void* self, const char* signal) {
    return QsciLexerIntelHex_Receivers((QsciLexerIntelHex*)self, signal);
}

int32_t q_scilexerintelhex_qbase_receivers(void* self, const char* signal) {
    return QsciLexerIntelHex_QBaseReceivers((QsciLexerIntelHex*)self, signal);
}

void q_scilexerintelhex_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerIntelHex_OnReceivers((QsciLexerIntelHex*)self, (intptr_t)slot);
}

bool q_scilexerintelhex_is_signal_connected(void* self, void* signal) {
    return QsciLexerIntelHex_IsSignalConnected((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

bool q_scilexerintelhex_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerIntelHex_QBaseIsSignalConnected((QsciLexerIntelHex*)self, (QMetaMethod*)signal);
}

void q_scilexerintelhex_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerIntelHex_OnIsSignalConnected((QsciLexerIntelHex*)self, (intptr_t)slot);
}

void q_scilexerintelhex_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_scilexerintelhex_delete(void* self) {
    QsciLexerIntelHex_Delete((QsciLexerIntelHex*)(self));
}
