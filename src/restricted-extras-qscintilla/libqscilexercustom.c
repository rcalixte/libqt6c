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
#include "libqscilexercustom.hpp"
#include "libqscilexercustom.h"

QsciLexerCustom* q_scilexercustom_new() {
    return QsciLexerCustom_new();
}

QsciLexerCustom* q_scilexercustom_new2(void* parent) {
    return QsciLexerCustom_new2((QObject*)parent);
}

QMetaObject* q_scilexercustom_meta_object(void* self) {
    return QsciLexerCustom_MetaObject((QsciLexerCustom*)self);
}

void* q_scilexercustom_metacast(void* self, const char* param1) {
    return QsciLexerCustom_Metacast((QsciLexerCustom*)self, param1);
}

int32_t q_scilexercustom_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCustom_Metacall((QsciLexerCustom*)self, param1, param2, param3);
}

void q_scilexercustom_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerCustom_OnMetacall((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerCustom_QBaseMetacall((QsciLexerCustom*)self, param1, param2, param3);
}

const char* q_scilexercustom_tr(const char* s) {
    libqt_string _str = QsciLexerCustom_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercustom_set_styling(void* self, int length, int style) {
    QsciLexerCustom_SetStyling((QsciLexerCustom*)self, length, style);
}

void q_scilexercustom_set_styling2(void* self, int length, void* style) {
    QsciLexerCustom_SetStyling2((QsciLexerCustom*)self, length, (QsciStyle*)style);
}

void q_scilexercustom_start_styling(void* self, int pos) {
    QsciLexerCustom_StartStyling((QsciLexerCustom*)self, pos);
}

void q_scilexercustom_style_text(void* self, int start, int end) {
    QsciLexerCustom_StyleText((QsciLexerCustom*)self, start, end);
}

void q_scilexercustom_on_style_text(void* self, void (*slot)(void*, int, int)) {
    QsciLexerCustom_OnStyleText((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_qbase_style_text(void* self, int start, int end) {
    QsciLexerCustom_QBaseStyleText((QsciLexerCustom*)self, start, end);
}

void q_scilexercustom_set_editor(void* self, void* editor) {
    QsciLexerCustom_SetEditor((QsciLexerCustom*)self, (QsciScintilla*)editor);
}

void q_scilexercustom_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnSetEditor((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_qbase_set_editor(void* self, void* editor) {
    QsciLexerCustom_QBaseSetEditor((QsciLexerCustom*)self, (QsciScintilla*)editor);
}

int32_t q_scilexercustom_style_bits_needed(void* self) {
    return QsciLexerCustom_StyleBitsNeeded((QsciLexerCustom*)self);
}

void q_scilexercustom_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnStyleBitsNeeded((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_qbase_style_bits_needed(void* self) {
    return QsciLexerCustom_QBaseStyleBitsNeeded((QsciLexerCustom*)self);
}

const char* q_scilexercustom_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerCustom_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercustom_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerCustom_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercustom_start_styling2(void* self, int pos, int styleBits) {
    QsciLexerCustom_StartStyling2((QsciLexerCustom*)self, pos, styleBits);
}

QsciAbstractAPIs* q_scilexercustom_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexercustom_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QColor* q_scilexercustom_default_color(void* self) {
    return QsciLexer_DefaultColor((QsciLexer*)self);
}

QFont* q_scilexercustom_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

QColor* q_scilexercustom_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexercustom_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexercustom_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexercustom_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexercustom_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexercustom_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexercustom_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexercustom_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexercustom_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercustom_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercustom_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexercustom_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercustom_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexercustom_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercustom_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexercustom_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexercustom_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexercustom_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexercustom_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexercustom_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexercustom_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercustom_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_scilexercustom_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexercustom_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexercustom_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexercustom_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexercustom_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexercustom_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexercustom_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexercustom_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexercustom_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexercustom_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexercustom_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexercustom_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexercustom_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexercustom_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexercustom_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexercustom_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexercustom_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexercustom_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexercustom_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexercustom_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexercustom_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexercustom_dynamic_property_names(void* self) {
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

QBindingStorage* q_scilexercustom_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_scilexercustom_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexercustom_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexercustom_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexercustom_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexercustom_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexercustom_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexercustom_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexercustom_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexercustom_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexercustom_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexercustom_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

const char* q_scilexercustom_language(void* self) {
    return QsciLexerCustom_Language((QsciLexerCustom*)self);
}

const char* q_scilexercustom_qbase_language(void* self) {
    return QsciLexerCustom_QBaseLanguage((QsciLexerCustom*)self);
}

void q_scilexercustom_on_language(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnLanguage((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_lexer(void* self) {
    return QsciLexerCustom_Lexer((QsciLexerCustom*)self);
}

const char* q_scilexercustom_qbase_lexer(void* self) {
    return QsciLexerCustom_QBaseLexer((QsciLexerCustom*)self);
}

void q_scilexercustom_on_lexer(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnLexer((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_lexer_id(void* self) {
    return QsciLexerCustom_LexerId((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_lexer_id(void* self) {
    return QsciLexerCustom_QBaseLexerId((QsciLexerCustom*)self);
}

void q_scilexercustom_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnLexerId((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_auto_completion_fillups(void* self) {
    return QsciLexerCustom_AutoCompletionFillups((QsciLexerCustom*)self);
}

const char* q_scilexercustom_qbase_auto_completion_fillups(void* self) {
    return QsciLexerCustom_QBaseAutoCompletionFillups((QsciLexerCustom*)self);
}

void q_scilexercustom_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnAutoCompletionFillups((QsciLexerCustom*)self, (intptr_t)slot);
}

const char** q_scilexercustom_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCustom_AutoCompletionWordSeparators((QsciLexerCustom*)self);
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

const char** q_scilexercustom_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerCustom_QBaseAutoCompletionWordSeparators((QsciLexerCustom*)self);
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

void q_scilexercustom_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerCustom_OnAutoCompletionWordSeparators((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_block_end(void* self, int* style) {
    return QsciLexerCustom_BlockEnd((QsciLexerCustom*)self, style);
}

const char* q_scilexercustom_qbase_block_end(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockEnd((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockEnd((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_block_lookback(void* self) {
    return QsciLexerCustom_BlockLookback((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_block_lookback(void* self) {
    return QsciLexerCustom_QBaseBlockLookback((QsciLexerCustom*)self);
}

void q_scilexercustom_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnBlockLookback((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_block_start(void* self, int* style) {
    return QsciLexerCustom_BlockStart((QsciLexerCustom*)self, style);
}

const char* q_scilexercustom_qbase_block_start(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockStart((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockStart((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_block_start_keyword(void* self, int* style) {
    return QsciLexerCustom_BlockStartKeyword((QsciLexerCustom*)self, style);
}

const char* q_scilexercustom_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerCustom_QBaseBlockStartKeyword((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerCustom_OnBlockStartKeyword((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_brace_style(void* self) {
    return QsciLexerCustom_BraceStyle((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_brace_style(void* self) {
    return QsciLexerCustom_QBaseBraceStyle((QsciLexerCustom*)self);
}

void q_scilexercustom_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnBraceStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_case_sensitive(void* self) {
    return QsciLexerCustom_CaseSensitive((QsciLexerCustom*)self);
}

bool q_scilexercustom_qbase_case_sensitive(void* self) {
    return QsciLexerCustom_QBaseCaseSensitive((QsciLexerCustom*)self);
}

void q_scilexercustom_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerCustom_OnCaseSensitive((QsciLexerCustom*)self, (intptr_t)slot);
}

QColor* q_scilexercustom_color(void* self, int style) {
    return QsciLexerCustom_Color((QsciLexerCustom*)self, style);
}

QColor* q_scilexercustom_qbase_color(void* self, int style) {
    return QsciLexerCustom_QBaseColor((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnColor((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_eol_fill(void* self, int style) {
    return QsciLexerCustom_EolFill((QsciLexerCustom*)self, style);
}

bool q_scilexercustom_qbase_eol_fill(void* self, int style) {
    return QsciLexerCustom_QBaseEolFill((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCustom_OnEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

QFont* q_scilexercustom_font(void* self, int style) {
    return QsciLexerCustom_Font((QsciLexerCustom*)self, style);
}

QFont* q_scilexercustom_qbase_font(void* self, int style) {
    return QsciLexerCustom_QBaseFont((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCustom_OnFont((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_indentation_guide_view(void* self) {
    return QsciLexerCustom_IndentationGuideView((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_indentation_guide_view(void* self) {
    return QsciLexerCustom_QBaseIndentationGuideView((QsciLexerCustom*)self);
}

void q_scilexercustom_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnIndentationGuideView((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_keywords(void* self, int set) {
    return QsciLexerCustom_Keywords((QsciLexerCustom*)self, set);
}

const char* q_scilexercustom_qbase_keywords(void* self, int set) {
    return QsciLexerCustom_QBaseKeywords((QsciLexerCustom*)self, set);
}

void q_scilexercustom_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerCustom_OnKeywords((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_default_style(void* self) {
    return QsciLexerCustom_DefaultStyle((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_default_style(void* self) {
    return QsciLexerCustom_QBaseDefaultStyle((QsciLexerCustom*)self);
}

void q_scilexercustom_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnDefaultStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_description(void* self, int style) {
    libqt_string _str = QsciLexerCustom_Description((QsciLexerCustom*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexercustom_qbase_description(void* self, int style) {
    libqt_string _str = QsciLexerCustom_QBaseDescription((QsciLexerCustom*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexercustom_on_description(void* self, const char* (*slot)(void*, int)) {
    QsciLexerCustom_OnDescription((QsciLexerCustom*)self, (intptr_t)slot);
}

QColor* q_scilexercustom_paper(void* self, int style) {
    return QsciLexerCustom_Paper((QsciLexerCustom*)self, style);
}

QColor* q_scilexercustom_qbase_paper(void* self, int style) {
    return QsciLexerCustom_QBasePaper((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnPaper((QsciLexerCustom*)self, (intptr_t)slot);
}

QColor* q_scilexercustom_default_color_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultColorWithStyle((QsciLexerCustom*)self, style);
}

QColor* q_scilexercustom_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultColorWithStyle((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultColorWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_default_eol_fill(void* self, int style) {
    return QsciLexerCustom_DefaultEolFill((QsciLexerCustom*)self, style);
}

bool q_scilexercustom_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultEolFill((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_default_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

QFont* q_scilexercustom_default_font_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultFontWithStyle((QsciLexerCustom*)self, style);
}

QFont* q_scilexercustom_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultFontWithStyle((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultFontWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

QColor* q_scilexercustom_default_paper_with_style(void* self, int style) {
    return QsciLexerCustom_DefaultPaperWithStyle((QsciLexerCustom*)self, style);
}

QColor* q_scilexercustom_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerCustom_QBaseDefaultPaperWithStyle((QsciLexerCustom*)self, style);
}

void q_scilexercustom_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerCustom_OnDefaultPaperWithStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_refresh_properties(void* self) {
    QsciLexerCustom_RefreshProperties((QsciLexerCustom*)self);
}

void q_scilexercustom_qbase_refresh_properties(void* self) {
    QsciLexerCustom_QBaseRefreshProperties((QsciLexerCustom*)self);
}

void q_scilexercustom_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerCustom_OnRefreshProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

const char* q_scilexercustom_word_characters(void* self) {
    return QsciLexerCustom_WordCharacters((QsciLexerCustom*)self);
}

const char* q_scilexercustom_qbase_word_characters(void* self) {
    return QsciLexerCustom_QBaseWordCharacters((QsciLexerCustom*)self);
}

void q_scilexercustom_on_word_characters(void* self, const char* (*slot)()) {
    QsciLexerCustom_OnWordCharacters((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCustom_SetAutoIndentStyle((QsciLexerCustom*)self, autoindentstyle);
}

void q_scilexercustom_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerCustom_QBaseSetAutoIndentStyle((QsciLexerCustom*)self, autoindentstyle);
}

void q_scilexercustom_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerCustom_OnSetAutoIndentStyle((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_set_color(void* self, void* c, int style) {
    QsciLexerCustom_SetColor((QsciLexerCustom*)self, (QColor*)c, style);
}

void q_scilexercustom_qbase_set_color(void* self, void* c, int style) {
    QsciLexerCustom_QBaseSetColor((QsciLexerCustom*)self, (QColor*)c, style);
}

void q_scilexercustom_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetColor((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCustom_SetEolFill((QsciLexerCustom*)self, eoffill, style);
}

void q_scilexercustom_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerCustom_QBaseSetEolFill((QsciLexerCustom*)self, eoffill, style);
}

void q_scilexercustom_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerCustom_OnSetEolFill((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_set_font(void* self, void* f, int style) {
    QsciLexerCustom_SetFont((QsciLexerCustom*)self, (QFont*)f, style);
}

void q_scilexercustom_qbase_set_font(void* self, void* f, int style) {
    QsciLexerCustom_QBaseSetFont((QsciLexerCustom*)self, (QFont*)f, style);
}

void q_scilexercustom_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetFont((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_set_paper(void* self, void* c, int style) {
    QsciLexerCustom_SetPaper((QsciLexerCustom*)self, (QColor*)c, style);
}

void q_scilexercustom_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerCustom_QBaseSetPaper((QsciLexerCustom*)self, (QColor*)c, style);
}

void q_scilexercustom_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerCustom_OnSetPaper((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_ReadProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercustom_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_QBaseReadProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercustom_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCustom_OnReadProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_WriteProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexercustom_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerCustom_QBaseWriteProperties((QsciLexerCustom*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexercustom_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerCustom_OnWriteProperties((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_event(void* self, void* event) {
    return QsciLexerCustom_Event((QsciLexerCustom*)self, (QEvent*)event);
}

bool q_scilexercustom_qbase_event(void* self, void* event) {
    return QsciLexerCustom_QBaseEvent((QsciLexerCustom*)self, (QEvent*)event);
}

void q_scilexercustom_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCustom_OnEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCustom_EventFilter((QsciLexerCustom*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexercustom_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerCustom_QBaseEventFilter((QsciLexerCustom*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexercustom_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerCustom_OnEventFilter((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_timer_event(void* self, void* event) {
    QsciLexerCustom_TimerEvent((QsciLexerCustom*)self, (QTimerEvent*)event);
}

void q_scilexercustom_qbase_timer_event(void* self, void* event) {
    QsciLexerCustom_QBaseTimerEvent((QsciLexerCustom*)self, (QTimerEvent*)event);
}

void q_scilexercustom_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnTimerEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_child_event(void* self, void* event) {
    QsciLexerCustom_ChildEvent((QsciLexerCustom*)self, (QChildEvent*)event);
}

void q_scilexercustom_qbase_child_event(void* self, void* event) {
    QsciLexerCustom_QBaseChildEvent((QsciLexerCustom*)self, (QChildEvent*)event);
}

void q_scilexercustom_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnChildEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_custom_event(void* self, void* event) {
    QsciLexerCustom_CustomEvent((QsciLexerCustom*)self, (QEvent*)event);
}

void q_scilexercustom_qbase_custom_event(void* self, void* event) {
    QsciLexerCustom_QBaseCustomEvent((QsciLexerCustom*)self, (QEvent*)event);
}

void q_scilexercustom_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnCustomEvent((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_connect_notify(void* self, void* signal) {
    QsciLexerCustom_ConnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

void q_scilexercustom_qbase_connect_notify(void* self, void* signal) {
    QsciLexerCustom_QBaseConnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

void q_scilexercustom_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnConnectNotify((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_disconnect_notify(void* self, void* signal) {
    QsciLexerCustom_DisconnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

void q_scilexercustom_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerCustom_QBaseDisconnectNotify((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

void q_scilexercustom_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerCustom_OnDisconnectNotify((QsciLexerCustom*)self, (intptr_t)slot);
}

QObject* q_scilexercustom_sender(void* self) {
    return QsciLexerCustom_Sender((QsciLexerCustom*)self);
}

QObject* q_scilexercustom_qbase_sender(void* self) {
    return QsciLexerCustom_QBaseSender((QsciLexerCustom*)self);
}

void q_scilexercustom_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerCustom_OnSender((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_sender_signal_index(void* self) {
    return QsciLexerCustom_SenderSignalIndex((QsciLexerCustom*)self);
}

int32_t q_scilexercustom_qbase_sender_signal_index(void* self) {
    return QsciLexerCustom_QBaseSenderSignalIndex((QsciLexerCustom*)self);
}

void q_scilexercustom_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerCustom_OnSenderSignalIndex((QsciLexerCustom*)self, (intptr_t)slot);
}

int32_t q_scilexercustom_receivers(void* self, const char* signal) {
    return QsciLexerCustom_Receivers((QsciLexerCustom*)self, signal);
}

int32_t q_scilexercustom_qbase_receivers(void* self, const char* signal) {
    return QsciLexerCustom_QBaseReceivers((QsciLexerCustom*)self, signal);
}

void q_scilexercustom_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerCustom_OnReceivers((QsciLexerCustom*)self, (intptr_t)slot);
}

bool q_scilexercustom_is_signal_connected(void* self, void* signal) {
    return QsciLexerCustom_IsSignalConnected((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

bool q_scilexercustom_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerCustom_QBaseIsSignalConnected((QsciLexerCustom*)self, (QMetaMethod*)signal);
}

void q_scilexercustom_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerCustom_OnIsSignalConnected((QsciLexerCustom*)self, (intptr_t)slot);
}

void q_scilexercustom_delete(void* self) {
    QsciLexerCustom_Delete((QsciLexerCustom*)(self));
}
