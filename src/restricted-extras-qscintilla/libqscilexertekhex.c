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
#include "libqscilexertekhex.hpp"
#include "libqscilexertekhex.h"

QsciLexerTekHex* q_scilexertekhex_new() {
    return QsciLexerTekHex_new();
}

QsciLexerTekHex* q_scilexertekhex_new2(void* parent) {
    return QsciLexerTekHex_new2((QObject*)parent);
}

const QMetaObject* q_scilexertekhex_meta_object(void* self) {
    return QsciLexerTekHex_MetaObject((QsciLexerTekHex*)self);
}

void* q_scilexertekhex_metacast(void* self, const char* param1) {
    return QsciLexerTekHex_Metacast((QsciLexerTekHex*)self, param1);
}

int32_t q_scilexertekhex_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTekHex_Metacall((QsciLexerTekHex*)self, param1, param2, param3);
}

void q_scilexertekhex_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerTekHex_OnMetacall((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerTekHex_QBaseMetacall((QsciLexerTekHex*)self, param1, param2, param3);
}

const char* q_scilexertekhex_tr(const char* s) {
    libqt_string _str = QsciLexerTekHex_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_language(void* self) {
    return QsciLexerTekHex_Language((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_lexer(void* self) {
    return QsciLexerTekHex_Lexer((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_description(void* self, int style) {
    libqt_string _str = QsciLexerTekHex_Description((QsciLexerTekHex*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_tr2(const char* s, const char* c) {
    libqt_string _str = QsciLexerTekHex_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QsciLexerTekHex_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* q_scilexertekhex_default_color(void* self, int style) {
    return QsciLexerHex_DefaultColor((QsciLexerHex*)self, style);
}

QFont* q_scilexertekhex_default_font(void* self, int style) {
    return QsciLexerHex_DefaultFont((QsciLexerHex*)self, style);
}

QColor* q_scilexertekhex_default_paper(void* self, int style) {
    return QsciLexerHex_DefaultPaper((QsciLexerHex*)self, style);
}

QsciAbstractAPIs* q_scilexertekhex_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexertekhex_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QsciScintilla* q_scilexertekhex_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexertekhex_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexertekhex_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexertekhex_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexertekhex_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexertekhex_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexertekhex_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexertekhex_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexertekhex_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexertekhex_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexertekhex_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexertekhex_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexertekhex_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexertekhex_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexertekhex_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertekhex_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexertekhex_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexertekhex_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexertekhex_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexertekhex_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexertekhex_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexertekhex_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexertekhex_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexertekhex_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_scilexertekhex_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexertekhex_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexertekhex_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexertekhex_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexertekhex_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexertekhex_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexertekhex_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexertekhex_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexertekhex_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexertekhex_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexertekhex_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexertekhex_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexertekhex_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexertekhex_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexertekhex_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexertekhex_dynamic_property_names");
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

QBindingStorage* q_scilexertekhex_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexertekhex_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexertekhex_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexertekhex_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexertekhex_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexertekhex_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexertekhex_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexertekhex_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexertekhex_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_scilexertekhex_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_scilexertekhex_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_scilexertekhex_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexertekhex_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_lexer_id(void* self) {
    return QsciLexerTekHex_LexerId((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_lexer_id(void* self) {
    return QsciLexerTekHex_QBaseLexerId((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnLexerId((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_auto_completion_fillups(void* self) {
    return QsciLexerTekHex_AutoCompletionFillups((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_qbase_auto_completion_fillups(void* self) {
    return QsciLexerTekHex_QBaseAutoCompletionFillups((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerTekHex_OnAutoCompletionFillups((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char** q_scilexertekhex_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTekHex_AutoCompletionWordSeparators((QsciLexerTekHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexertekhex_auto_completion_word_separators");
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

const char** q_scilexertekhex_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerTekHex_QBaseAutoCompletionWordSeparators((QsciLexerTekHex*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_scilexertekhex_auto_completion_word_separators");
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

void q_scilexertekhex_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerTekHex_OnAutoCompletionWordSeparators((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_end(void* self, int* style) {
    return QsciLexerTekHex_BlockEnd((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_qbase_block_end(void* self, int* style) {
    return QsciLexerTekHex_QBaseBlockEnd((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTekHex_OnBlockEnd((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_block_lookback(void* self) {
    return QsciLexerTekHex_BlockLookback((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_block_lookback(void* self) {
    return QsciLexerTekHex_QBaseBlockLookback((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnBlockLookback((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_start(void* self, int* style) {
    return QsciLexerTekHex_BlockStart((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_qbase_block_start(void* self, int* style) {
    return QsciLexerTekHex_QBaseBlockStart((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTekHex_OnBlockStart((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_block_start_keyword(void* self, int* style) {
    return QsciLexerTekHex_BlockStartKeyword((QsciLexerTekHex*)self, style);
}

const char* q_scilexertekhex_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerTekHex_QBaseBlockStartKeyword((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerTekHex_OnBlockStartKeyword((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_brace_style(void* self) {
    return QsciLexerTekHex_BraceStyle((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_brace_style(void* self) {
    return QsciLexerTekHex_QBaseBraceStyle((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnBraceStyle((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_case_sensitive(void* self) {
    return QsciLexerTekHex_CaseSensitive((QsciLexerTekHex*)self);
}

bool q_scilexertekhex_qbase_case_sensitive(void* self) {
    return QsciLexerTekHex_QBaseCaseSensitive((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerTekHex_OnCaseSensitive((QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_color(void* self, int style) {
    return QsciLexerTekHex_Color((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_qbase_color(void* self, int style) {
    return QsciLexerTekHex_QBaseColor((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTekHex_OnColor((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_eol_fill(void* self, int style) {
    return QsciLexerTekHex_EolFill((QsciLexerTekHex*)self, style);
}

bool q_scilexertekhex_qbase_eol_fill(void* self, int style) {
    return QsciLexerTekHex_QBaseEolFill((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerTekHex_OnEolFill((QsciLexerTekHex*)self, (intptr_t)callback);
}

QFont* q_scilexertekhex_font(void* self, int style) {
    return QsciLexerTekHex_Font((QsciLexerTekHex*)self, style);
}

QFont* q_scilexertekhex_qbase_font(void* self, int style) {
    return QsciLexerTekHex_QBaseFont((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTekHex_OnFont((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_indentation_guide_view(void* self) {
    return QsciLexerTekHex_IndentationGuideView((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_indentation_guide_view(void* self) {
    return QsciLexerTekHex_QBaseIndentationGuideView((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnIndentationGuideView((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_keywords(void* self, int set) {
    return QsciLexerTekHex_Keywords((QsciLexerTekHex*)self, set);
}

const char* q_scilexertekhex_qbase_keywords(void* self, int set) {
    return QsciLexerTekHex_QBaseKeywords((QsciLexerTekHex*)self, set);
}

void q_scilexertekhex_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerTekHex_OnKeywords((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_default_style(void* self) {
    return QsciLexerTekHex_DefaultStyle((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_default_style(void* self) {
    return QsciLexerTekHex_QBaseDefaultStyle((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnDefaultStyle((QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_paper(void* self, int style) {
    return QsciLexerTekHex_Paper((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_qbase_paper(void* self, int style) {
    return QsciLexerTekHex_QBasePaper((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTekHex_OnPaper((QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_default_color2(void* self, int style) {
    return QsciLexerTekHex_DefaultColor2((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_qbase_default_color2(void* self, int style) {
    return QsciLexerTekHex_QBaseDefaultColor2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTekHex_OnDefaultColor2((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_default_eol_fill(void* self, int style) {
    return QsciLexerTekHex_DefaultEolFill((QsciLexerTekHex*)self, style);
}

bool q_scilexertekhex_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerTekHex_QBaseDefaultEolFill((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerTekHex_OnDefaultEolFill((QsciLexerTekHex*)self, (intptr_t)callback);
}

QFont* q_scilexertekhex_default_font2(void* self, int style) {
    return QsciLexerTekHex_DefaultFont2((QsciLexerTekHex*)self, style);
}

QFont* q_scilexertekhex_qbase_default_font2(void* self, int style) {
    return QsciLexerTekHex_QBaseDefaultFont2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerTekHex_OnDefaultFont2((QsciLexerTekHex*)self, (intptr_t)callback);
}

QColor* q_scilexertekhex_default_paper2(void* self, int style) {
    return QsciLexerTekHex_DefaultPaper2((QsciLexerTekHex*)self, style);
}

QColor* q_scilexertekhex_qbase_default_paper2(void* self, int style) {
    return QsciLexerTekHex_QBaseDefaultPaper2((QsciLexerTekHex*)self, style);
}

void q_scilexertekhex_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerTekHex_OnDefaultPaper2((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_editor(void* self, void* editor) {
    QsciLexerTekHex_SetEditor((QsciLexerTekHex*)self, (QsciScintilla*)editor);
}

void q_scilexertekhex_qbase_set_editor(void* self, void* editor) {
    QsciLexerTekHex_QBaseSetEditor((QsciLexerTekHex*)self, (QsciScintilla*)editor);
}

void q_scilexertekhex_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnSetEditor((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_refresh_properties(void* self) {
    QsciLexerTekHex_RefreshProperties((QsciLexerTekHex*)self);
}

void q_scilexertekhex_qbase_refresh_properties(void* self) {
    QsciLexerTekHex_QBaseRefreshProperties((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerTekHex_OnRefreshProperties((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_style_bits_needed(void* self) {
    return QsciLexerTekHex_StyleBitsNeeded((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_style_bits_needed(void* self) {
    return QsciLexerTekHex_QBaseStyleBitsNeeded((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnStyleBitsNeeded((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_word_characters(void* self) {
    return QsciLexerTekHex_WordCharacters((QsciLexerTekHex*)self);
}

const char* q_scilexertekhex_qbase_word_characters(void* self) {
    return QsciLexerTekHex_QBaseWordCharacters((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_word_characters(void* self, const char* (*callback)()) {
    QsciLexerTekHex_OnWordCharacters((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTekHex_SetAutoIndentStyle((QsciLexerTekHex*)self, autoindentstyle);
}

void q_scilexertekhex_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerTekHex_QBaseSetAutoIndentStyle((QsciLexerTekHex*)self, autoindentstyle);
}

void q_scilexertekhex_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerTekHex_OnSetAutoIndentStyle((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_color(void* self, void* c, int style) {
    QsciLexerTekHex_SetColor((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_qbase_set_color(void* self, void* c, int style) {
    QsciLexerTekHex_QBaseSetColor((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTekHex_OnSetColor((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTekHex_SetEolFill((QsciLexerTekHex*)self, eoffill, style);
}

void q_scilexertekhex_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerTekHex_QBaseSetEolFill((QsciLexerTekHex*)self, eoffill, style);
}

void q_scilexertekhex_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerTekHex_OnSetEolFill((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_font(void* self, void* f, int style) {
    QsciLexerTekHex_SetFont((QsciLexerTekHex*)self, (QFont*)f, style);
}

void q_scilexertekhex_qbase_set_font(void* self, void* f, int style) {
    QsciLexerTekHex_QBaseSetFont((QsciLexerTekHex*)self, (QFont*)f, style);
}

void q_scilexertekhex_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTekHex_OnSetFont((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_set_paper(void* self, void* c, int style) {
    QsciLexerTekHex_SetPaper((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerTekHex_QBaseSetPaper((QsciLexerTekHex*)self, (QColor*)c, style);
}

void q_scilexertekhex_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerTekHex_OnSetPaper((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_ReadProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertekhex_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_QBaseReadProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertekhex_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTekHex_OnReadProperties((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_WriteProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexertekhex_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerTekHex_QBaseWriteProperties((QsciLexerTekHex*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexertekhex_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerTekHex_OnWriteProperties((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_event(void* self, void* event) {
    return QsciLexerTekHex_Event((QsciLexerTekHex*)self, (QEvent*)event);
}

bool q_scilexertekhex_qbase_event(void* self, void* event) {
    return QsciLexerTekHex_QBaseEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTekHex_OnEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTekHex_EventFilter((QsciLexerTekHex*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexertekhex_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerTekHex_QBaseEventFilter((QsciLexerTekHex*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexertekhex_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerTekHex_OnEventFilter((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_timer_event(void* self, void* event) {
    QsciLexerTekHex_TimerEvent((QsciLexerTekHex*)self, (QTimerEvent*)event);
}

void q_scilexertekhex_qbase_timer_event(void* self, void* event) {
    QsciLexerTekHex_QBaseTimerEvent((QsciLexerTekHex*)self, (QTimerEvent*)event);
}

void q_scilexertekhex_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnTimerEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_child_event(void* self, void* event) {
    QsciLexerTekHex_ChildEvent((QsciLexerTekHex*)self, (QChildEvent*)event);
}

void q_scilexertekhex_qbase_child_event(void* self, void* event) {
    QsciLexerTekHex_QBaseChildEvent((QsciLexerTekHex*)self, (QChildEvent*)event);
}

void q_scilexertekhex_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnChildEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_custom_event(void* self, void* event) {
    QsciLexerTekHex_CustomEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_qbase_custom_event(void* self, void* event) {
    QsciLexerTekHex_QBaseCustomEvent((QsciLexerTekHex*)self, (QEvent*)event);
}

void q_scilexertekhex_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnCustomEvent((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_connect_notify(void* self, void* signal) {
    QsciLexerTekHex_ConnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_qbase_connect_notify(void* self, void* signal) {
    QsciLexerTekHex_QBaseConnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnConnectNotify((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_disconnect_notify(void* self, void* signal) {
    QsciLexerTekHex_DisconnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerTekHex_QBaseDisconnectNotify((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerTekHex_OnDisconnectNotify((QsciLexerTekHex*)self, (intptr_t)callback);
}

char* q_scilexertekhex_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTekHex_TextAsBytes((QsciLexerTekHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexertekhex_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerTekHex_QBaseTextAsBytes((QsciLexerTekHex*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertekhex_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerTekHex_OnTextAsBytes((QsciLexerTekHex*)self, (intptr_t)callback);
}

const char* q_scilexertekhex_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTekHex_BytesAsText((QsciLexerTekHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexertekhex_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerTekHex_QBaseBytesAsText((QsciLexerTekHex*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexertekhex_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerTekHex_OnBytesAsText((QsciLexerTekHex*)self, (intptr_t)callback);
}

QObject* q_scilexertekhex_sender(void* self) {
    return QsciLexerTekHex_Sender((QsciLexerTekHex*)self);
}

QObject* q_scilexertekhex_qbase_sender(void* self) {
    return QsciLexerTekHex_QBaseSender((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerTekHex_OnSender((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_sender_signal_index(void* self) {
    return QsciLexerTekHex_SenderSignalIndex((QsciLexerTekHex*)self);
}

int32_t q_scilexertekhex_qbase_sender_signal_index(void* self) {
    return QsciLexerTekHex_QBaseSenderSignalIndex((QsciLexerTekHex*)self);
}

void q_scilexertekhex_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerTekHex_OnSenderSignalIndex((QsciLexerTekHex*)self, (intptr_t)callback);
}

int32_t q_scilexertekhex_receivers(void* self, const char* signal) {
    return QsciLexerTekHex_Receivers((QsciLexerTekHex*)self, signal);
}

int32_t q_scilexertekhex_qbase_receivers(void* self, const char* signal) {
    return QsciLexerTekHex_QBaseReceivers((QsciLexerTekHex*)self, signal);
}

void q_scilexertekhex_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerTekHex_OnReceivers((QsciLexerTekHex*)self, (intptr_t)callback);
}

bool q_scilexertekhex_is_signal_connected(void* self, void* signal) {
    return QsciLexerTekHex_IsSignalConnected((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

bool q_scilexertekhex_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerTekHex_QBaseIsSignalConnected((QsciLexerTekHex*)self, (QMetaMethod*)signal);
}

void q_scilexertekhex_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerTekHex_OnIsSignalConnected((QsciLexerTekHex*)self, (intptr_t)callback);
}

void q_scilexertekhex_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexertekhex_delete(void* self) {
    QsciLexerTekHex_Delete((QsciLexerTekHex*)(self));
}
