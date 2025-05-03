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
#include "libqscilexermakefile.hpp"
#include "libqscilexermakefile.h"

QsciLexerMakefile* q_scilexermakefile_new() {
    return QsciLexerMakefile_new();
}

QsciLexerMakefile* q_scilexermakefile_new2(void* parent) {
    return QsciLexerMakefile_new2((QObject*)parent);
}

QMetaObject* q_scilexermakefile_meta_object(void* self) {
    return QsciLexerMakefile_MetaObject((QsciLexerMakefile*)self);
}

void* q_scilexermakefile_metacast(void* self, const char* param1) {
    return QsciLexerMakefile_Metacast((QsciLexerMakefile*)self, param1);
}

int32_t q_scilexermakefile_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMakefile_Metacall((QsciLexerMakefile*)self, param1, param2, param3);
}

void q_scilexermakefile_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QsciLexerMakefile_OnMetacall((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QsciLexerMakefile_QBaseMetacall((QsciLexerMakefile*)self, param1, param2, param3);
}

const char* q_scilexermakefile_tr(const char* s) {
    libqt_string _str = QsciLexerMakefile_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermakefile_language(void* self) {
    return QsciLexerMakefile_Language((QsciLexerMakefile*)self);
}

const char* q_scilexermakefile_lexer(void* self) {
    return QsciLexerMakefile_Lexer((QsciLexerMakefile*)self);
}

const char* q_scilexermakefile_word_characters(void* self) {
    return QsciLexerMakefile_WordCharacters((QsciLexerMakefile*)self);
}

QColor* q_scilexermakefile_default_color(void* self, int style) {
    return QsciLexerMakefile_DefaultColor((QsciLexerMakefile*)self, style);
}

bool q_scilexermakefile_default_eol_fill(void* self, int style) {
    return QsciLexerMakefile_DefaultEolFill((QsciLexerMakefile*)self, style);
}

QFont* q_scilexermakefile_default_font(void* self, int style) {
    return QsciLexerMakefile_DefaultFont((QsciLexerMakefile*)self, style);
}

QColor* q_scilexermakefile_default_paper(void* self, int style) {
    return QsciLexerMakefile_DefaultPaper((QsciLexerMakefile*)self, style);
}

const char* q_scilexermakefile_description(void* self, int style) {
    libqt_string _str = QsciLexerMakefile_Description((QsciLexerMakefile*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermakefile_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerMakefile_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermakefile_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerMakefile_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexermakefile_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexermakefile_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexermakefile_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexermakefile_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexermakefile_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexermakefile_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexermakefile_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexermakefile_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexermakefile_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexermakefile_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermakefile_on_color_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermakefile_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexermakefile_on_eol_fill_changed(void* self, void (*slot)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermakefile_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexermakefile_on_font_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermakefile_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermakefile_on_paper_changed(void* self, void (*slot)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)slot);
}

void q_scilexermakefile_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexermakefile_on_property_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)slot);
}

bool q_scilexermakefile_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexermakefile_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexermakefile_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermakefile_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_scilexermakefile_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexermakefile_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexermakefile_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexermakefile_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexermakefile_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexermakefile_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_scilexermakefile_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexermakefile_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexermakefile_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexermakefile_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexermakefile_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexermakefile_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexermakefile_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexermakefile_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexermakefile_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexermakefile_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexermakefile_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_scilexermakefile_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexermakefile_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexermakefile_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexermakefile_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexermakefile_dynamic_property_names(void* self) {
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

QBindingStorage* q_scilexermakefile_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_scilexermakefile_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexermakefile_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexermakefile_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_scilexermakefile_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexermakefile_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexermakefile_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_scilexermakefile_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexermakefile_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexermakefile_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexermakefile_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexermakefile_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_lexer_id(void* self) {
    return QsciLexerMakefile_LexerId((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_lexer_id(void* self) {
    return QsciLexerMakefile_QBaseLexerId((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_lexer_id(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnLexerId((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char* q_scilexermakefile_auto_completion_fillups(void* self) {
    return QsciLexerMakefile_AutoCompletionFillups((QsciLexerMakefile*)self);
}

const char* q_scilexermakefile_qbase_auto_completion_fillups(void* self) {
    return QsciLexerMakefile_QBaseAutoCompletionFillups((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_auto_completion_fillups(void* self, const char* (*slot)()) {
    QsciLexerMakefile_OnAutoCompletionFillups((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char** q_scilexermakefile_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMakefile_AutoCompletionWordSeparators((QsciLexerMakefile*)self);
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

const char** q_scilexermakefile_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMakefile_QBaseAutoCompletionWordSeparators((QsciLexerMakefile*)self);
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

void q_scilexermakefile_on_auto_completion_word_separators(void* self, const char** (*slot)()) {
    QsciLexerMakefile_OnAutoCompletionWordSeparators((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char* q_scilexermakefile_block_end(void* self, int* style) {
    return QsciLexerMakefile_BlockEnd((QsciLexerMakefile*)self, style);
}

const char* q_scilexermakefile_qbase_block_end(void* self, int* style) {
    return QsciLexerMakefile_QBaseBlockEnd((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_block_end(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMakefile_OnBlockEnd((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_block_lookback(void* self) {
    return QsciLexerMakefile_BlockLookback((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_block_lookback(void* self) {
    return QsciLexerMakefile_QBaseBlockLookback((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_block_lookback(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnBlockLookback((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char* q_scilexermakefile_block_start(void* self, int* style) {
    return QsciLexerMakefile_BlockStart((QsciLexerMakefile*)self, style);
}

const char* q_scilexermakefile_qbase_block_start(void* self, int* style) {
    return QsciLexerMakefile_QBaseBlockStart((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_block_start(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMakefile_OnBlockStart((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char* q_scilexermakefile_block_start_keyword(void* self, int* style) {
    return QsciLexerMakefile_BlockStartKeyword((QsciLexerMakefile*)self, style);
}

const char* q_scilexermakefile_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerMakefile_QBaseBlockStartKeyword((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_block_start_keyword(void* self, const char* (*slot)(void*, int*)) {
    QsciLexerMakefile_OnBlockStartKeyword((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_brace_style(void* self) {
    return QsciLexerMakefile_BraceStyle((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_brace_style(void* self) {
    return QsciLexerMakefile_QBaseBraceStyle((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_brace_style(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnBraceStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_case_sensitive(void* self) {
    return QsciLexerMakefile_CaseSensitive((QsciLexerMakefile*)self);
}

bool q_scilexermakefile_qbase_case_sensitive(void* self) {
    return QsciLexerMakefile_QBaseCaseSensitive((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_case_sensitive(void* self, bool (*slot)()) {
    QsciLexerMakefile_OnCaseSensitive((QsciLexerMakefile*)self, (intptr_t)slot);
}

QColor* q_scilexermakefile_color(void* self, int style) {
    return QsciLexerMakefile_Color((QsciLexerMakefile*)self, style);
}

QColor* q_scilexermakefile_qbase_color(void* self, int style) {
    return QsciLexerMakefile_QBaseColor((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_color(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMakefile_OnColor((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_eol_fill(void* self, int style) {
    return QsciLexerMakefile_EolFill((QsciLexerMakefile*)self, style);
}

bool q_scilexermakefile_qbase_eol_fill(void* self, int style) {
    return QsciLexerMakefile_QBaseEolFill((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_eol_fill(void* self, bool (*slot)(void*, int)) {
    QsciLexerMakefile_OnEolFill((QsciLexerMakefile*)self, (intptr_t)slot);
}

QFont* q_scilexermakefile_font(void* self, int style) {
    return QsciLexerMakefile_Font((QsciLexerMakefile*)self, style);
}

QFont* q_scilexermakefile_qbase_font(void* self, int style) {
    return QsciLexerMakefile_QBaseFont((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_font(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMakefile_OnFont((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_indentation_guide_view(void* self) {
    return QsciLexerMakefile_IndentationGuideView((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_indentation_guide_view(void* self) {
    return QsciLexerMakefile_QBaseIndentationGuideView((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_indentation_guide_view(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnIndentationGuideView((QsciLexerMakefile*)self, (intptr_t)slot);
}

const char* q_scilexermakefile_keywords(void* self, int set) {
    return QsciLexerMakefile_Keywords((QsciLexerMakefile*)self, set);
}

const char* q_scilexermakefile_qbase_keywords(void* self, int set) {
    return QsciLexerMakefile_QBaseKeywords((QsciLexerMakefile*)self, set);
}

void q_scilexermakefile_on_keywords(void* self, const char* (*slot)(void*, int)) {
    QsciLexerMakefile_OnKeywords((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_default_style(void* self) {
    return QsciLexerMakefile_DefaultStyle((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_default_style(void* self) {
    return QsciLexerMakefile_QBaseDefaultStyle((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_default_style(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnDefaultStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

QColor* q_scilexermakefile_paper(void* self, int style) {
    return QsciLexerMakefile_Paper((QsciLexerMakefile*)self, style);
}

QColor* q_scilexermakefile_qbase_paper(void* self, int style) {
    return QsciLexerMakefile_QBasePaper((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_paper(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMakefile_OnPaper((QsciLexerMakefile*)self, (intptr_t)slot);
}

QColor* q_scilexermakefile_default_color_with_style(void* self, int style) {
    return QsciLexerMakefile_DefaultColorWithStyle((QsciLexerMakefile*)self, style);
}

QColor* q_scilexermakefile_qbase_default_color_with_style(void* self, int style) {
    return QsciLexerMakefile_QBaseDefaultColorWithStyle((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_default_color_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMakefile_OnDefaultColorWithStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

QFont* q_scilexermakefile_default_font_with_style(void* self, int style) {
    return QsciLexerMakefile_DefaultFontWithStyle((QsciLexerMakefile*)self, style);
}

QFont* q_scilexermakefile_qbase_default_font_with_style(void* self, int style) {
    return QsciLexerMakefile_QBaseDefaultFontWithStyle((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_default_font_with_style(void* self, QFont* (*slot)(void*, int)) {
    QsciLexerMakefile_OnDefaultFontWithStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

QColor* q_scilexermakefile_default_paper_with_style(void* self, int style) {
    return QsciLexerMakefile_DefaultPaperWithStyle((QsciLexerMakefile*)self, style);
}

QColor* q_scilexermakefile_qbase_default_paper_with_style(void* self, int style) {
    return QsciLexerMakefile_QBaseDefaultPaperWithStyle((QsciLexerMakefile*)self, style);
}

void q_scilexermakefile_on_default_paper_with_style(void* self, QColor* (*slot)(void*, int)) {
    QsciLexerMakefile_OnDefaultPaperWithStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_editor(void* self, void* editor) {
    QsciLexerMakefile_SetEditor((QsciLexerMakefile*)self, (QsciScintilla*)editor);
}

void q_scilexermakefile_qbase_set_editor(void* self, void* editor) {
    QsciLexerMakefile_QBaseSetEditor((QsciLexerMakefile*)self, (QsciScintilla*)editor);
}

void q_scilexermakefile_on_set_editor(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnSetEditor((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_refresh_properties(void* self) {
    QsciLexerMakefile_RefreshProperties((QsciLexerMakefile*)self);
}

void q_scilexermakefile_qbase_refresh_properties(void* self) {
    QsciLexerMakefile_QBaseRefreshProperties((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_refresh_properties(void* self, void (*slot)()) {
    QsciLexerMakefile_OnRefreshProperties((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_style_bits_needed(void* self) {
    return QsciLexerMakefile_StyleBitsNeeded((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_style_bits_needed(void* self) {
    return QsciLexerMakefile_QBaseStyleBitsNeeded((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_style_bits_needed(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnStyleBitsNeeded((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMakefile_SetAutoIndentStyle((QsciLexerMakefile*)self, autoindentstyle);
}

void q_scilexermakefile_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMakefile_QBaseSetAutoIndentStyle((QsciLexerMakefile*)self, autoindentstyle);
}

void q_scilexermakefile_on_set_auto_indent_style(void* self, void (*slot)(void*, int)) {
    QsciLexerMakefile_OnSetAutoIndentStyle((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_color(void* self, void* c, int style) {
    QsciLexerMakefile_SetColor((QsciLexerMakefile*)self, (QColor*)c, style);
}

void q_scilexermakefile_qbase_set_color(void* self, void* c, int style) {
    QsciLexerMakefile_QBaseSetColor((QsciLexerMakefile*)self, (QColor*)c, style);
}

void q_scilexermakefile_on_set_color(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMakefile_OnSetColor((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMakefile_SetEolFill((QsciLexerMakefile*)self, eoffill, style);
}

void q_scilexermakefile_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMakefile_QBaseSetEolFill((QsciLexerMakefile*)self, eoffill, style);
}

void q_scilexermakefile_on_set_eol_fill(void* self, void (*slot)(void*, bool, int)) {
    QsciLexerMakefile_OnSetEolFill((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_font(void* self, void* f, int style) {
    QsciLexerMakefile_SetFont((QsciLexerMakefile*)self, (QFont*)f, style);
}

void q_scilexermakefile_qbase_set_font(void* self, void* f, int style) {
    QsciLexerMakefile_QBaseSetFont((QsciLexerMakefile*)self, (QFont*)f, style);
}

void q_scilexermakefile_on_set_font(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMakefile_OnSetFont((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_set_paper(void* self, void* c, int style) {
    QsciLexerMakefile_SetPaper((QsciLexerMakefile*)self, (QColor*)c, style);
}

void q_scilexermakefile_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerMakefile_QBaseSetPaper((QsciLexerMakefile*)self, (QColor*)c, style);
}

void q_scilexermakefile_on_set_paper(void* self, void (*slot)(void*, void*, int)) {
    QsciLexerMakefile_OnSetPaper((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMakefile_ReadProperties((QsciLexerMakefile*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermakefile_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMakefile_QBaseReadProperties((QsciLexerMakefile*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermakefile_on_read_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMakefile_OnReadProperties((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMakefile_WriteProperties((QsciLexerMakefile*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermakefile_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMakefile_QBaseWriteProperties((QsciLexerMakefile*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermakefile_on_write_properties(void* self, bool (*slot)(void*, void*, const char*)) {
    QsciLexerMakefile_OnWriteProperties((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_event(void* self, void* event) {
    return QsciLexerMakefile_Event((QsciLexerMakefile*)self, (QEvent*)event);
}

bool q_scilexermakefile_qbase_event(void* self, void* event) {
    return QsciLexerMakefile_QBaseEvent((QsciLexerMakefile*)self, (QEvent*)event);
}

void q_scilexermakefile_on_event(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMakefile_OnEvent((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMakefile_EventFilter((QsciLexerMakefile*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexermakefile_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMakefile_QBaseEventFilter((QsciLexerMakefile*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexermakefile_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QsciLexerMakefile_OnEventFilter((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_timer_event(void* self, void* event) {
    QsciLexerMakefile_TimerEvent((QsciLexerMakefile*)self, (QTimerEvent*)event);
}

void q_scilexermakefile_qbase_timer_event(void* self, void* event) {
    QsciLexerMakefile_QBaseTimerEvent((QsciLexerMakefile*)self, (QTimerEvent*)event);
}

void q_scilexermakefile_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnTimerEvent((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_child_event(void* self, void* event) {
    QsciLexerMakefile_ChildEvent((QsciLexerMakefile*)self, (QChildEvent*)event);
}

void q_scilexermakefile_qbase_child_event(void* self, void* event) {
    QsciLexerMakefile_QBaseChildEvent((QsciLexerMakefile*)self, (QChildEvent*)event);
}

void q_scilexermakefile_on_child_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnChildEvent((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_custom_event(void* self, void* event) {
    QsciLexerMakefile_CustomEvent((QsciLexerMakefile*)self, (QEvent*)event);
}

void q_scilexermakefile_qbase_custom_event(void* self, void* event) {
    QsciLexerMakefile_QBaseCustomEvent((QsciLexerMakefile*)self, (QEvent*)event);
}

void q_scilexermakefile_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnCustomEvent((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_connect_notify(void* self, void* signal) {
    QsciLexerMakefile_ConnectNotify((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

void q_scilexermakefile_qbase_connect_notify(void* self, void* signal) {
    QsciLexerMakefile_QBaseConnectNotify((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

void q_scilexermakefile_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnConnectNotify((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_disconnect_notify(void* self, void* signal) {
    QsciLexerMakefile_DisconnectNotify((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

void q_scilexermakefile_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerMakefile_QBaseDisconnectNotify((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

void q_scilexermakefile_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QsciLexerMakefile_OnDisconnectNotify((QsciLexerMakefile*)self, (intptr_t)slot);
}

QObject* q_scilexermakefile_sender(void* self) {
    return QsciLexerMakefile_Sender((QsciLexerMakefile*)self);
}

QObject* q_scilexermakefile_qbase_sender(void* self) {
    return QsciLexerMakefile_QBaseSender((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_sender(void* self, QObject* (*slot)()) {
    QsciLexerMakefile_OnSender((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_sender_signal_index(void* self) {
    return QsciLexerMakefile_SenderSignalIndex((QsciLexerMakefile*)self);
}

int32_t q_scilexermakefile_qbase_sender_signal_index(void* self) {
    return QsciLexerMakefile_QBaseSenderSignalIndex((QsciLexerMakefile*)self);
}

void q_scilexermakefile_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QsciLexerMakefile_OnSenderSignalIndex((QsciLexerMakefile*)self, (intptr_t)slot);
}

int32_t q_scilexermakefile_receivers(void* self, const char* signal) {
    return QsciLexerMakefile_Receivers((QsciLexerMakefile*)self, signal);
}

int32_t q_scilexermakefile_qbase_receivers(void* self, const char* signal) {
    return QsciLexerMakefile_QBaseReceivers((QsciLexerMakefile*)self, signal);
}

void q_scilexermakefile_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QsciLexerMakefile_OnReceivers((QsciLexerMakefile*)self, (intptr_t)slot);
}

bool q_scilexermakefile_is_signal_connected(void* self, void* signal) {
    return QsciLexerMakefile_IsSignalConnected((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

bool q_scilexermakefile_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerMakefile_QBaseIsSignalConnected((QsciLexerMakefile*)self, (QMetaMethod*)signal);
}

void q_scilexermakefile_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QsciLexerMakefile_OnIsSignalConnected((QsciLexerMakefile*)self, (intptr_t)slot);
}

void q_scilexermakefile_delete(void* self) {
    QsciLexerMakefile_Delete((QsciLexerMakefile*)(self));
}
