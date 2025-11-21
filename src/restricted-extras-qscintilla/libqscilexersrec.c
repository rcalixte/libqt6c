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
#include "libqscilexersrec.hpp"
#include "libqscilexersrec.h"

QsciLexerSRec* q_scilexersrec_new() {
    return QsciLexerSRec_new();
}

QsciLexerSRec* q_scilexersrec_new2(void* parent) {
    return QsciLexerSRec_new2((QObject*)parent);
}

const QMetaObject* q_scilexersrec_meta_object(void* self) {
    return QsciLexerSRec_MetaObject((QsciLexerSRec*)self);
}

void* q_scilexersrec_metacast(void* self, const char* param1) {
    return QsciLexerSRec_Metacast((QsciLexerSRec*)self, param1);
}

int32_t q_scilexersrec_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSRec_Metacall((QsciLexerSRec*)self, param1, param2, param3);
}

void q_scilexersrec_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerSRec_OnMetacall((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerSRec_QBaseMetacall((QsciLexerSRec*)self, param1, param2, param3);
}

const char* q_scilexersrec_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_language(void* self) {
    return QsciLexerSRec_Language((QsciLexerSRec*)self);
}

const char* q_scilexersrec_lexer(void* self) {
    return QsciLexerSRec_Lexer((QsciLexerSRec*)self);
}

const char* q_scilexersrec_description(void* self, int style) {
    libqt_string _str = QsciLexerSRec_Description((QsciLexerSRec*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexersrec_default_color(void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexersrec_default_font(void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexersrec_default_paper(void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

QsciAbstractAPIs* q_scilexersrec_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexersrec_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexersrec_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexersrec_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexersrec_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexersrec_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexersrec_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexersrec_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexersrec_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexersrec_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersrec_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexersrec_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexersrec_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexersrec_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexersrec_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexersrec_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexersrec_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexersrec_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexersrec_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersrec_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexersrec_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexersrec_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexersrec_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexersrec_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexersrec_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexersrec_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexersrec_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexersrec_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexersrec_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexersrec_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexersrec_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexersrec_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexersrec_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexersrec_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexersrec_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexersrec_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexersrec_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexersrec_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexersrec_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexersrec_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexersrec_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexersrec_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexersrec_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexersrec_dynamic_property_names");
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

QBindingStorage* q_scilexersrec_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexersrec_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexersrec_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexersrec_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexersrec_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexersrec_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexersrec_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexersrec_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexersrec_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexersrec_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexersrec_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexersrec_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexersrec_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_lexer_id(void* self) {
    return QsciLexerSRec_LexerId((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_lexer_id(void* self) {
    return QsciLexerSRec_QBaseLexerId((QsciLexerSRec*)self);
}

void q_scilexersrec_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnLexerId((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_auto_completion_fillups(void* self) {
    return QsciLexerSRec_AutoCompletionFillups((QsciLexerSRec*)self);
}

const char* q_scilexersrec_qbase_auto_completion_fillups(void* self) {
    return QsciLexerSRec_QBaseAutoCompletionFillups((QsciLexerSRec*)self);
}

void q_scilexersrec_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerSRec_OnAutoCompletionFillups((QsciLexerSRec*)self, (intptr_t)callback);
}

const char** q_scilexersrec_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSRec_AutoCompletionWordSeparators((QsciLexerSRec*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexersrec_auto_completion_word_separators");
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

const char** q_scilexersrec_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerSRec_QBaseAutoCompletionWordSeparators((QsciLexerSRec*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexersrec_auto_completion_word_separators");
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

void q_scilexersrec_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerSRec_OnAutoCompletionWordSeparators((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_end(void* self, int* style) {
    return QsciLexerSRec_BlockEnd((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_qbase_block_end(void* self, int* style) {
    return QsciLexerSRec_QBaseBlockEnd((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSRec_OnBlockEnd((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_block_lookback(void* self) {
    return QsciLexerSRec_BlockLookback((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_block_lookback(void* self) {
    return QsciLexerSRec_QBaseBlockLookback((QsciLexerSRec*)self);
}

void q_scilexersrec_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnBlockLookback((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_start(void* self, int* style) {
    return QsciLexerSRec_BlockStart((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_qbase_block_start(void* self, int* style) {
    return QsciLexerSRec_QBaseBlockStart((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSRec_OnBlockStart((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_block_start_keyword(void* self, int* style) {
    return QsciLexerSRec_BlockStartKeyword((QsciLexerSRec*)self, style);
}

const char* q_scilexersrec_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerSRec_QBaseBlockStartKeyword((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerSRec_OnBlockStartKeyword((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_brace_style(void* self) {
    return QsciLexerSRec_BraceStyle((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_brace_style(void* self) {
    return QsciLexerSRec_QBaseBraceStyle((QsciLexerSRec*)self);
}

void q_scilexersrec_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnBraceStyle((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_case_sensitive(void* self) {
    return QsciLexerSRec_CaseSensitive((QsciLexerSRec*)self);
}

bool q_scilexersrec_qbase_case_sensitive(void* self) {
    return QsciLexerSRec_QBaseCaseSensitive((QsciLexerSRec*)self);
}

void q_scilexersrec_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerSRec_OnCaseSensitive((QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_color(void* self, int style) {
    return QsciLexerSRec_Color((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_qbase_color(void* self, int style) {
    return QsciLexerSRec_QBaseColor((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSRec_OnColor((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_eol_fill(void* self, int style) {
    return QsciLexerSRec_EolFill((QsciLexerSRec*)self, style);
}

bool q_scilexersrec_qbase_eol_fill(void* self, int style) {
    return QsciLexerSRec_QBaseEolFill((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerSRec_OnEolFill((QsciLexerSRec*)self, (intptr_t)callback);
}

QFont* q_scilexersrec_font(void* self, int style) {
    return QsciLexerSRec_Font((QsciLexerSRec*)self, style);
}

QFont* q_scilexersrec_qbase_font(void* self, int style) {
    return QsciLexerSRec_QBaseFont((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerSRec_OnFont((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_indentation_guide_view(void* self) {
    return QsciLexerSRec_IndentationGuideView((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_indentation_guide_view(void* self) {
    return QsciLexerSRec_QBaseIndentationGuideView((QsciLexerSRec*)self);
}

void q_scilexersrec_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnIndentationGuideView((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_keywords(void* self, int set) {
    return QsciLexerSRec_Keywords((QsciLexerSRec*)self, set);
}

const char* q_scilexersrec_qbase_keywords(void* self, int set) {
    return QsciLexerSRec_QBaseKeywords((QsciLexerSRec*)self, set);
}

void q_scilexersrec_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerSRec_OnKeywords((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_default_style(void* self) {
    return QsciLexerSRec_DefaultStyle((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_default_style(void* self) {
    return QsciLexerSRec_QBaseDefaultStyle((QsciLexerSRec*)self);
}

void q_scilexersrec_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnDefaultStyle((QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_paper(void* self, int style) {
    return QsciLexerSRec_Paper((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_qbase_paper(void* self, int style) {
    return QsciLexerSRec_QBasePaper((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSRec_OnPaper((QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_default_color2(void* self, int style) {
    return QsciLexerSRec_DefaultColor2((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_qbase_default_color2(void* self, int style) {
    return QsciLexerSRec_QBaseDefaultColor2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSRec_OnDefaultColor2((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_default_eol_fill(void* self, int style) {
    return QsciLexerSRec_DefaultEolFill((QsciLexerSRec*)self, style);
}

bool q_scilexersrec_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerSRec_QBaseDefaultEolFill((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerSRec_OnDefaultEolFill((QsciLexerSRec*)self, (intptr_t)callback);
}

QFont* q_scilexersrec_default_font2(void* self, int style) {
    return QsciLexerSRec_DefaultFont2((QsciLexerSRec*)self, style);
}

QFont* q_scilexersrec_qbase_default_font2(void* self, int style) {
    return QsciLexerSRec_QBaseDefaultFont2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerSRec_OnDefaultFont2((QsciLexerSRec*)self, (intptr_t)callback);
}

QColor* q_scilexersrec_default_paper2(void* self, int style) {
    return QsciLexerSRec_DefaultPaper2((QsciLexerSRec*)self, style);
}

QColor* q_scilexersrec_qbase_default_paper2(void* self, int style) {
    return QsciLexerSRec_QBaseDefaultPaper2((QsciLexerSRec*)self, style);
}

void q_scilexersrec_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerSRec_OnDefaultPaper2((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_editor(void* self, void* editor) {
    QsciLexerSRec_SetEditor((QsciLexerSRec*)self, (QsciScintilla*)editor);
}

void q_scilexersrec_qbase_set_editor(void* self, void* editor) {
    QsciLexerSRec_QBaseSetEditor((QsciLexerSRec*)self, (QsciScintilla*)editor);
}

void q_scilexersrec_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnSetEditor((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_refresh_properties(void* self) {
    QsciLexerSRec_RefreshProperties((QsciLexerSRec*)self);
}

void q_scilexersrec_qbase_refresh_properties(void* self) {
    QsciLexerSRec_QBaseRefreshProperties((QsciLexerSRec*)self);
}

void q_scilexersrec_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerSRec_OnRefreshProperties((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_style_bits_needed(void* self) {
    return QsciLexerSRec_StyleBitsNeeded((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_style_bits_needed(void* self) {
    return QsciLexerSRec_QBaseStyleBitsNeeded((QsciLexerSRec*)self);
}

void q_scilexersrec_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnStyleBitsNeeded((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_word_characters(void* self) {
    return QsciLexerSRec_WordCharacters((QsciLexerSRec*)self);
}

const char* q_scilexersrec_qbase_word_characters(void* self) {
    return QsciLexerSRec_QBaseWordCharacters((QsciLexerSRec*)self);
}

void q_scilexersrec_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerSRec_OnWordCharacters((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSRec_SetAutoIndentStyle((QsciLexerSRec*)self, autoindentstyle);
}

void q_scilexersrec_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerSRec_QBaseSetAutoIndentStyle((QsciLexerSRec*)self, autoindentstyle);
}

void q_scilexersrec_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerSRec_OnSetAutoIndentStyle((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_color(void* self, void* c, int style) {
    QsciLexerSRec_SetColor((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_qbase_set_color(void* self, void* c, int style) {
    QsciLexerSRec_QBaseSetColor((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSRec_OnSetColor((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSRec_SetEolFill((QsciLexerSRec*)self, eoffill, style);
}

void q_scilexersrec_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerSRec_QBaseSetEolFill((QsciLexerSRec*)self, eoffill, style);
}

void q_scilexersrec_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerSRec_OnSetEolFill((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_font(void* self, void* f, int style) {
    QsciLexerSRec_SetFont((QsciLexerSRec*)self, (QFont*)f, style);
}

void q_scilexersrec_qbase_set_font(void* self, void* f, int style) {
    QsciLexerSRec_QBaseSetFont((QsciLexerSRec*)self, (QFont*)f, style);
}

void q_scilexersrec_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSRec_OnSetFont((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_set_paper(void* self, void* c, int style) {
    QsciLexerSRec_SetPaper((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerSRec_QBaseSetPaper((QsciLexerSRec*)self, (QColor*)c, style);
}

void q_scilexersrec_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerSRec_OnSetPaper((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_ReadProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersrec_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_QBaseReadProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersrec_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerSRec_OnReadProperties((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_WriteProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexersrec_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerSRec_QBaseWriteProperties((QsciLexerSRec*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexersrec_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerSRec_OnWriteProperties((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_event(void* self, void* event) {
    return QsciLexerSRec_Event((QsciLexerSRec*)self, (QEvent*)event);
}

bool q_scilexersrec_qbase_event(void* self, void* event) {
    return QsciLexerSRec_QBaseEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSRec_OnEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSRec_EventFilter((QsciLexerSRec*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexersrec_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerSRec_QBaseEventFilter((QsciLexerSRec*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexersrec_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerSRec_OnEventFilter((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_timer_event(void* self, void* event) {
    QsciLexerSRec_TimerEvent((QsciLexerSRec*)self, (QTimerEvent*)event);
}

void q_scilexersrec_qbase_timer_event(void* self, void* event) {
    QsciLexerSRec_QBaseTimerEvent((QsciLexerSRec*)self, (QTimerEvent*)event);
}

void q_scilexersrec_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnTimerEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_child_event(void* self, void* event) {
    QsciLexerSRec_ChildEvent((QsciLexerSRec*)self, (QChildEvent*)event);
}

void q_scilexersrec_qbase_child_event(void* self, void* event) {
    QsciLexerSRec_QBaseChildEvent((QsciLexerSRec*)self, (QChildEvent*)event);
}

void q_scilexersrec_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnChildEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_custom_event(void* self, void* event) {
    QsciLexerSRec_CustomEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_qbase_custom_event(void* self, void* event) {
    QsciLexerSRec_QBaseCustomEvent((QsciLexerSRec*)self, (QEvent*)event);
}

void q_scilexersrec_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnCustomEvent((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_connect_notify(void* self, void* signal) {
    QsciLexerSRec_ConnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_qbase_connect_notify(void* self, void* signal) {
    QsciLexerSRec_QBaseConnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnConnectNotify((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_disconnect_notify(void* self, void* signal) {
    QsciLexerSRec_DisconnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerSRec_QBaseDisconnectNotify((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerSRec_OnDisconnectNotify((QsciLexerSRec*)self, (intptr_t)callback);
}

char* q_scilexersrec_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerSRec_TextAsBytes((QsciLexerSRec*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexersrec_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerSRec_QBaseTextAsBytes((QsciLexerSRec*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersrec_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerSRec_OnTextAsBytes((QsciLexerSRec*)self, (intptr_t)callback);
}

const char* q_scilexersrec_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSRec_BytesAsText((QsciLexerSRec*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexersrec_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerSRec_QBaseBytesAsText((QsciLexerSRec*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexersrec_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerSRec_OnBytesAsText((QsciLexerSRec*)self, (intptr_t)callback);
}

QObject* q_scilexersrec_sender(void* self) {
    return QsciLexerSRec_Sender((QsciLexerSRec*)self);
}

QObject* q_scilexersrec_qbase_sender(void* self) {
    return QsciLexerSRec_QBaseSender((QsciLexerSRec*)self);
}

void q_scilexersrec_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerSRec_OnSender((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_sender_signal_index(void* self) {
    return QsciLexerSRec_SenderSignalIndex((QsciLexerSRec*)self);
}

int32_t q_scilexersrec_qbase_sender_signal_index(void* self) {
    return QsciLexerSRec_QBaseSenderSignalIndex((QsciLexerSRec*)self);
}

void q_scilexersrec_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerSRec_OnSenderSignalIndex((QsciLexerSRec*)self, (intptr_t)callback);
}

int32_t q_scilexersrec_receivers(void* self, const char* signal) {
    return QsciLexerSRec_Receivers((QsciLexerSRec*)self, signal);
}

int32_t q_scilexersrec_qbase_receivers(void* self, const char* signal) {
    return QsciLexerSRec_QBaseReceivers((QsciLexerSRec*)self, signal);
}

void q_scilexersrec_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerSRec_OnReceivers((QsciLexerSRec*)self, (intptr_t)callback);
}

bool q_scilexersrec_is_signal_connected(void* self, void* signal) {
    return QsciLexerSRec_IsSignalConnected((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

bool q_scilexersrec_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerSRec_QBaseIsSignalConnected((QsciLexerSRec*)self, (QMetaMethod*)signal);
}

void q_scilexersrec_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerSRec_OnIsSignalConnected((QsciLexerSRec*)self, (intptr_t)callback);
}

void q_scilexersrec_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexersrec_delete(void* self) {
    QsciLexerSRec_Delete((QsciLexerSRec*)(self));
}
