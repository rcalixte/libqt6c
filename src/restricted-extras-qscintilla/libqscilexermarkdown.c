#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexermarkdown.hpp"
#include "libqscilexermarkdown.h"

QsciLexerMarkdown* q_scilexermarkdown_new() {
    return QsciLexerMarkdown_new();
}

QsciLexerMarkdown* q_scilexermarkdown_new2(void* parent) {
    return QsciLexerMarkdown_new2((QObject*)parent);
}

const QMetaObject* q_scilexermarkdown_meta_object(void* self) {
    return QsciLexerMarkdown_MetaObject((QsciLexerMarkdown*)self);
}

void* q_scilexermarkdown_metacast(void* self, const char* param1) {
    return QsciLexerMarkdown_Metacast((QsciLexerMarkdown*)self, param1);
}

int32_t q_scilexermarkdown_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerMarkdown_Metacall((QsciLexerMarkdown*)self, param1, param2, param3);
}

void q_scilexermarkdown_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerMarkdown_OnMetacall((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerMarkdown_QBaseMetacall((QsciLexerMarkdown*)self, param1, param2, param3);
}

const char* q_scilexermarkdown_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermarkdown_language(void* self) {
    return QsciLexerMarkdown_Language((QsciLexerMarkdown*)self);
}

const char* q_scilexermarkdown_lexer(void* self) {
    return QsciLexerMarkdown_Lexer((QsciLexerMarkdown*)self);
}

QColor* q_scilexermarkdown_default_color(void* self, int style) {
    return QsciLexerMarkdown_DefaultColor((QsciLexerMarkdown*)self, style);
}

QFont* q_scilexermarkdown_default_font(void* self, int style) {
    return QsciLexerMarkdown_DefaultFont((QsciLexerMarkdown*)self, style);
}

QColor* q_scilexermarkdown_default_paper(void* self, int style) {
    return QsciLexerMarkdown_DefaultPaper((QsciLexerMarkdown*)self, style);
}

const char* q_scilexermarkdown_description(void* self, int style) {
    libqt_string _str = QsciLexerMarkdown_Description((QsciLexerMarkdown*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermarkdown_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermarkdown_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexermarkdown_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexermarkdown_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexermarkdown_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexermarkdown_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexermarkdown_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexermarkdown_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexermarkdown_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexermarkdown_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexermarkdown_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexermarkdown_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermarkdown_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermarkdown_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexermarkdown_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermarkdown_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexermarkdown_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermarkdown_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexermarkdown_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexermarkdown_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexermarkdown_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexermarkdown_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexermarkdown_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermarkdown_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexermarkdown_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexermarkdown_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexermarkdown_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexermarkdown_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexermarkdown_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexermarkdown_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexermarkdown_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexermarkdown_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexermarkdown_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexermarkdown_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexermarkdown_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexermarkdown_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexermarkdown_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexermarkdown_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexermarkdown_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexermarkdown_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexermarkdown_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexermarkdown_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexermarkdown_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexermarkdown_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexermarkdown_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexermarkdown_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexermarkdown_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexermarkdown_dynamic_property_names");
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

QBindingStorage* q_scilexermarkdown_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexermarkdown_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexermarkdown_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexermarkdown_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexermarkdown_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexermarkdown_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexermarkdown_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexermarkdown_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexermarkdown_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexermarkdown_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexermarkdown_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexermarkdown_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexermarkdown_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_lexer_id(void* self) {
    return QsciLexerMarkdown_LexerId((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_lexer_id(void* self) {
    return QsciLexerMarkdown_QBaseLexerId((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnLexerId((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_auto_completion_fillups(void* self) {
    return QsciLexerMarkdown_AutoCompletionFillups((QsciLexerMarkdown*)self);
}

const char* q_scilexermarkdown_qbase_auto_completion_fillups(void* self) {
    return QsciLexerMarkdown_QBaseAutoCompletionFillups((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerMarkdown_OnAutoCompletionFillups((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char** q_scilexermarkdown_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMarkdown_AutoCompletionWordSeparators((QsciLexerMarkdown*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexermarkdown_auto_completion_word_separators");
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

const char** q_scilexermarkdown_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerMarkdown_QBaseAutoCompletionWordSeparators((QsciLexerMarkdown*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexermarkdown_auto_completion_word_separators");
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

void q_scilexermarkdown_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerMarkdown_OnAutoCompletionWordSeparators((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_block_end(void* self, int* style) {
    return QsciLexerMarkdown_BlockEnd((QsciLexerMarkdown*)self, style);
}

const char* q_scilexermarkdown_qbase_block_end(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockEnd((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMarkdown_OnBlockEnd((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_block_lookback(void* self) {
    return QsciLexerMarkdown_BlockLookback((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_block_lookback(void* self) {
    return QsciLexerMarkdown_QBaseBlockLookback((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnBlockLookback((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_block_start(void* self, int* style) {
    return QsciLexerMarkdown_BlockStart((QsciLexerMarkdown*)self, style);
}

const char* q_scilexermarkdown_qbase_block_start(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockStart((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMarkdown_OnBlockStart((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_block_start_keyword(void* self, int* style) {
    return QsciLexerMarkdown_BlockStartKeyword((QsciLexerMarkdown*)self, style);
}

const char* q_scilexermarkdown_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerMarkdown_QBaseBlockStartKeyword((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerMarkdown_OnBlockStartKeyword((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_brace_style(void* self) {
    return QsciLexerMarkdown_BraceStyle((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_brace_style(void* self) {
    return QsciLexerMarkdown_QBaseBraceStyle((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnBraceStyle((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_case_sensitive(void* self) {
    return QsciLexerMarkdown_CaseSensitive((QsciLexerMarkdown*)self);
}

bool q_scilexermarkdown_qbase_case_sensitive(void* self) {
    return QsciLexerMarkdown_QBaseCaseSensitive((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerMarkdown_OnCaseSensitive((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QColor* q_scilexermarkdown_color(void* self, int style) {
    return QsciLexerMarkdown_Color((QsciLexerMarkdown*)self, style);
}

QColor* q_scilexermarkdown_qbase_color(void* self, int style) {
    return QsciLexerMarkdown_QBaseColor((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnColor((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_EolFill((QsciLexerMarkdown*)self, style);
}

bool q_scilexermarkdown_qbase_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_QBaseEolFill((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerMarkdown_OnEolFill((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QFont* q_scilexermarkdown_font(void* self, int style) {
    return QsciLexerMarkdown_Font((QsciLexerMarkdown*)self, style);
}

QFont* q_scilexermarkdown_qbase_font(void* self, int style) {
    return QsciLexerMarkdown_QBaseFont((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnFont((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_indentation_guide_view(void* self) {
    return QsciLexerMarkdown_IndentationGuideView((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_indentation_guide_view(void* self) {
    return QsciLexerMarkdown_QBaseIndentationGuideView((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnIndentationGuideView((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_keywords(void* self, int set) {
    return QsciLexerMarkdown_Keywords((QsciLexerMarkdown*)self, set);
}

const char* q_scilexermarkdown_qbase_keywords(void* self, int set) {
    return QsciLexerMarkdown_QBaseKeywords((QsciLexerMarkdown*)self, set);
}

void q_scilexermarkdown_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnKeywords((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_default_style(void* self) {
    return QsciLexerMarkdown_DefaultStyle((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_default_style(void* self) {
    return QsciLexerMarkdown_QBaseDefaultStyle((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnDefaultStyle((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QColor* q_scilexermarkdown_paper(void* self, int style) {
    return QsciLexerMarkdown_Paper((QsciLexerMarkdown*)self, style);
}

QColor* q_scilexermarkdown_qbase_paper(void* self, int style) {
    return QsciLexerMarkdown_QBasePaper((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnPaper((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QColor* q_scilexermarkdown_default_color2(void* self, int style) {
    return QsciLexerMarkdown_DefaultColor2((QsciLexerMarkdown*)self, style);
}

QColor* q_scilexermarkdown_qbase_default_color2(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultColor2((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnDefaultColor2((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_default_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_DefaultEolFill((QsciLexerMarkdown*)self, style);
}

bool q_scilexermarkdown_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultEolFill((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerMarkdown_OnDefaultEolFill((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QFont* q_scilexermarkdown_default_font2(void* self, int style) {
    return QsciLexerMarkdown_DefaultFont2((QsciLexerMarkdown*)self, style);
}

QFont* q_scilexermarkdown_qbase_default_font2(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultFont2((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnDefaultFont2((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QColor* q_scilexermarkdown_default_paper2(void* self, int style) {
    return QsciLexerMarkdown_DefaultPaper2((QsciLexerMarkdown*)self, style);
}

QColor* q_scilexermarkdown_qbase_default_paper2(void* self, int style) {
    return QsciLexerMarkdown_QBaseDefaultPaper2((QsciLexerMarkdown*)self, style);
}

void q_scilexermarkdown_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerMarkdown_OnDefaultPaper2((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_editor(void* self, void* editor) {
    QsciLexerMarkdown_SetEditor((QsciLexerMarkdown*)self, (QsciScintilla*)editor);
}

void q_scilexermarkdown_qbase_set_editor(void* self, void* editor) {
    QsciLexerMarkdown_QBaseSetEditor((QsciLexerMarkdown*)self, (QsciScintilla*)editor);
}

void q_scilexermarkdown_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnSetEditor((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_refresh_properties(void* self) {
    QsciLexerMarkdown_RefreshProperties((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_qbase_refresh_properties(void* self) {
    QsciLexerMarkdown_QBaseRefreshProperties((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerMarkdown_OnRefreshProperties((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_style_bits_needed(void* self) {
    return QsciLexerMarkdown_StyleBitsNeeded((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_style_bits_needed(void* self) {
    return QsciLexerMarkdown_QBaseStyleBitsNeeded((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnStyleBitsNeeded((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_word_characters(void* self) {
    return QsciLexerMarkdown_WordCharacters((QsciLexerMarkdown*)self);
}

const char* q_scilexermarkdown_qbase_word_characters(void* self) {
    return QsciLexerMarkdown_QBaseWordCharacters((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerMarkdown_OnWordCharacters((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMarkdown_SetAutoIndentStyle((QsciLexerMarkdown*)self, autoindentstyle);
}

void q_scilexermarkdown_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerMarkdown_QBaseSetAutoIndentStyle((QsciLexerMarkdown*)self, autoindentstyle);
}

void q_scilexermarkdown_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerMarkdown_OnSetAutoIndentStyle((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_color(void* self, void* c, int style) {
    QsciLexerMarkdown_SetColor((QsciLexerMarkdown*)self, (QColor*)c, style);
}

void q_scilexermarkdown_qbase_set_color(void* self, void* c, int style) {
    QsciLexerMarkdown_QBaseSetColor((QsciLexerMarkdown*)self, (QColor*)c, style);
}

void q_scilexermarkdown_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetColor((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMarkdown_SetEolFill((QsciLexerMarkdown*)self, eoffill, style);
}

void q_scilexermarkdown_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerMarkdown_QBaseSetEolFill((QsciLexerMarkdown*)self, eoffill, style);
}

void q_scilexermarkdown_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerMarkdown_OnSetEolFill((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_font(void* self, void* f, int style) {
    QsciLexerMarkdown_SetFont((QsciLexerMarkdown*)self, (QFont*)f, style);
}

void q_scilexermarkdown_qbase_set_font(void* self, void* f, int style) {
    QsciLexerMarkdown_QBaseSetFont((QsciLexerMarkdown*)self, (QFont*)f, style);
}

void q_scilexermarkdown_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetFont((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_set_paper(void* self, void* c, int style) {
    QsciLexerMarkdown_SetPaper((QsciLexerMarkdown*)self, (QColor*)c, style);
}

void q_scilexermarkdown_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerMarkdown_QBaseSetPaper((QsciLexerMarkdown*)self, (QColor*)c, style);
}

void q_scilexermarkdown_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerMarkdown_OnSetPaper((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_ReadProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermarkdown_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_QBaseReadProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermarkdown_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerMarkdown_OnReadProperties((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_WriteProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexermarkdown_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerMarkdown_QBaseWriteProperties((QsciLexerMarkdown*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexermarkdown_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerMarkdown_OnWriteProperties((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_event(void* self, void* event) {
    return QsciLexerMarkdown_Event((QsciLexerMarkdown*)self, (QEvent*)event);
}

bool q_scilexermarkdown_qbase_event(void* self, void* event) {
    return QsciLexerMarkdown_QBaseEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

void q_scilexermarkdown_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnEvent((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMarkdown_EventFilter((QsciLexerMarkdown*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexermarkdown_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerMarkdown_QBaseEventFilter((QsciLexerMarkdown*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexermarkdown_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerMarkdown_OnEventFilter((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_timer_event(void* self, void* event) {
    QsciLexerMarkdown_TimerEvent((QsciLexerMarkdown*)self, (QTimerEvent*)event);
}

void q_scilexermarkdown_qbase_timer_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseTimerEvent((QsciLexerMarkdown*)self, (QTimerEvent*)event);
}

void q_scilexermarkdown_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnTimerEvent((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_child_event(void* self, void* event) {
    QsciLexerMarkdown_ChildEvent((QsciLexerMarkdown*)self, (QChildEvent*)event);
}

void q_scilexermarkdown_qbase_child_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseChildEvent((QsciLexerMarkdown*)self, (QChildEvent*)event);
}

void q_scilexermarkdown_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnChildEvent((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_custom_event(void* self, void* event) {
    QsciLexerMarkdown_CustomEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

void q_scilexermarkdown_qbase_custom_event(void* self, void* event) {
    QsciLexerMarkdown_QBaseCustomEvent((QsciLexerMarkdown*)self, (QEvent*)event);
}

void q_scilexermarkdown_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnCustomEvent((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_connect_notify(void* self, void* signal) {
    QsciLexerMarkdown_ConnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

void q_scilexermarkdown_qbase_connect_notify(void* self, void* signal) {
    QsciLexerMarkdown_QBaseConnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

void q_scilexermarkdown_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnConnectNotify((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_disconnect_notify(void* self, void* signal) {
    QsciLexerMarkdown_DisconnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

void q_scilexermarkdown_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerMarkdown_QBaseDisconnectNotify((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

void q_scilexermarkdown_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnDisconnectNotify((QsciLexerMarkdown*)self, (intptr_t)callback);
}

char* q_scilexermarkdown_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerMarkdown_TextAsBytes((QsciLexerMarkdown*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexermarkdown_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerMarkdown_QBaseTextAsBytes((QsciLexerMarkdown*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermarkdown_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerMarkdown_OnTextAsBytes((QsciLexerMarkdown*)self, (intptr_t)callback);
}

const char* q_scilexermarkdown_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerMarkdown_BytesAsText((QsciLexerMarkdown*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexermarkdown_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerMarkdown_QBaseBytesAsText((QsciLexerMarkdown*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexermarkdown_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerMarkdown_OnBytesAsText((QsciLexerMarkdown*)self, (intptr_t)callback);
}

QObject* q_scilexermarkdown_sender(void* self) {
    return QsciLexerMarkdown_Sender((QsciLexerMarkdown*)self);
}

QObject* q_scilexermarkdown_qbase_sender(void* self) {
    return QsciLexerMarkdown_QBaseSender((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerMarkdown_OnSender((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_sender_signal_index(void* self) {
    return QsciLexerMarkdown_SenderSignalIndex((QsciLexerMarkdown*)self);
}

int32_t q_scilexermarkdown_qbase_sender_signal_index(void* self) {
    return QsciLexerMarkdown_QBaseSenderSignalIndex((QsciLexerMarkdown*)self);
}

void q_scilexermarkdown_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerMarkdown_OnSenderSignalIndex((QsciLexerMarkdown*)self, (intptr_t)callback);
}

int32_t q_scilexermarkdown_receivers(void* self, const char* signal) {
    return QsciLexerMarkdown_Receivers((QsciLexerMarkdown*)self, signal);
}

int32_t q_scilexermarkdown_qbase_receivers(void* self, const char* signal) {
    return QsciLexerMarkdown_QBaseReceivers((QsciLexerMarkdown*)self, signal);
}

void q_scilexermarkdown_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerMarkdown_OnReceivers((QsciLexerMarkdown*)self, (intptr_t)callback);
}

bool q_scilexermarkdown_is_signal_connected(void* self, void* signal) {
    return QsciLexerMarkdown_IsSignalConnected((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

bool q_scilexermarkdown_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerMarkdown_QBaseIsSignalConnected((QsciLexerMarkdown*)self, (QMetaMethod*)signal);
}

void q_scilexermarkdown_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerMarkdown_OnIsSignalConnected((QsciLexerMarkdown*)self, (intptr_t)callback);
}

void q_scilexermarkdown_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexermarkdown_delete(void* self) {
    QsciLexerMarkdown_Delete((QsciLexerMarkdown*)(self));
}
