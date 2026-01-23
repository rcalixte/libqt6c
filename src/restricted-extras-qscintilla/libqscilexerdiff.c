#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsettings.hpp"
#include "libqscilexer.hpp"
#include "libqsciscintilla.hpp"
#include "libqscilexerdiff.hpp"
#include "libqscilexerdiff.h"

QsciLexerDiff* q_scilexerdiff_new() {
    return QsciLexerDiff_new();
}

QsciLexerDiff* q_scilexerdiff_new2(void* parent) {
    return QsciLexerDiff_new2((QObject*)parent);
}

const QMetaObject* q_scilexerdiff_meta_object(void* self) {
    return QsciLexerDiff_MetaObject((QsciLexerDiff*)self);
}

void* q_scilexerdiff_metacast(void* self, const char* param1) {
    return QsciLexerDiff_Metacast((QsciLexerDiff*)self, param1);
}

int32_t q_scilexerdiff_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerDiff_Metacall((QsciLexerDiff*)self, param1, param2, param3);
}

void q_scilexerdiff_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QsciLexerDiff_OnMetacall((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QsciLexerDiff_QBaseMetacall((QsciLexerDiff*)self, param1, param2, param3);
}

const char* q_scilexerdiff_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerdiff_language(void* self) {
    return QsciLexerDiff_Language((QsciLexerDiff*)self);
}

const char* q_scilexerdiff_lexer(void* self) {
    return QsciLexerDiff_Lexer((QsciLexerDiff*)self);
}

const char* q_scilexerdiff_word_characters(void* self) {
    return QsciLexerDiff_WordCharacters((QsciLexerDiff*)self);
}

QColor* q_scilexerdiff_default_color(void* self, int style) {
    return QsciLexerDiff_DefaultColor((QsciLexerDiff*)self, style);
}

const char* q_scilexerdiff_description(void* self, int style) {
    libqt_string _str = QsciLexerDiff_Description((QsciLexerDiff*)self, style);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerdiff_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerdiff_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QsciAbstractAPIs* q_scilexerdiff_apis(void* self) {
    return QsciLexer_Apis((QsciLexer*)self);
}

int32_t q_scilexerdiff_auto_indent_style(void* self) {
    return QsciLexer_AutoIndentStyle((QsciLexer*)self);
}

QFont* q_scilexerdiff_default_font(void* self) {
    return QsciLexer_DefaultFont((QsciLexer*)self);
}

QColor* q_scilexerdiff_default_paper(void* self) {
    return QsciLexer_DefaultPaper((QsciLexer*)self);
}

QsciScintilla* q_scilexerdiff_editor(void* self) {
    return QsciLexer_Editor((QsciLexer*)self);
}

void q_scilexerdiff_set_a_p_is(void* self, void* apis) {
    QsciLexer_SetAPIs((QsciLexer*)self, (QsciAbstractAPIs*)apis);
}

void q_scilexerdiff_set_default_color(void* self, void* c) {
    QsciLexer_SetDefaultColor((QsciLexer*)self, (QColor*)c);
}

void q_scilexerdiff_set_default_font(void* self, void* f) {
    QsciLexer_SetDefaultFont((QsciLexer*)self, (QFont*)f);
}

void q_scilexerdiff_set_default_paper(void* self, void* c) {
    QsciLexer_SetDefaultPaper((QsciLexer*)self, (QColor*)c);
}

bool q_scilexerdiff_read_settings(void* self, void* qs) {
    return QsciLexer_ReadSettings((QsciLexer*)self, (QSettings*)qs);
}

bool q_scilexerdiff_write_settings(void* self, void* qs) {
    return QsciLexer_WriteSettings((QsciLexer*)self, (QSettings*)qs);
}

void q_scilexerdiff_color_changed(void* self, void* c, int style) {
    QsciLexer_ColorChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerdiff_on_color_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_ColorChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerdiff_eol_fill_changed(void* self, bool eolfilled, int style) {
    QsciLexer_EolFillChanged((QsciLexer*)self, eolfilled, style);
}

void q_scilexerdiff_on_eol_fill_changed(void* self, void (*callback)(void*, bool, int)) {
    QsciLexer_Connect_EolFillChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerdiff_font_changed(void* self, void* f, int style) {
    QsciLexer_FontChanged((QsciLexer*)self, (QFont*)f, style);
}

void q_scilexerdiff_on_font_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_FontChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerdiff_paper_changed(void* self, void* c, int style) {
    QsciLexer_PaperChanged((QsciLexer*)self, (QColor*)c, style);
}

void q_scilexerdiff_on_paper_changed(void* self, void (*callback)(void*, void*, int)) {
    QsciLexer_Connect_PaperChanged((QsciLexer*)self, (intptr_t)callback);
}

void q_scilexerdiff_property_changed(void* self, const char* prop, const char* val) {
    QsciLexer_PropertyChanged((QsciLexer*)self, prop, val);
}

void q_scilexerdiff_on_property_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QsciLexer_Connect_PropertyChanged((QsciLexer*)self, (intptr_t)callback);
}

bool q_scilexerdiff_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_ReadSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

bool q_scilexerdiff_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciLexer_WriteSettings2((QsciLexer*)self, (QSettings*)qs, prefix);
}

const char* q_scilexerdiff_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerdiff_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_scilexerdiff_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_scilexerdiff_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_scilexerdiff_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_scilexerdiff_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_scilexerdiff_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_scilexerdiff_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_scilexerdiff_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_scilexerdiff_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_scilexerdiff_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_scilexerdiff_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_scilexerdiff_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_scilexerdiff_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_scilexerdiff_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_scilexerdiff_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_scilexerdiff_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_scilexerdiff_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_scilexerdiff_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_scilexerdiff_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_scilexerdiff_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_scilexerdiff_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_scilexerdiff_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_scilexerdiff_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_scilexerdiff_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_scilexerdiff_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerdiff_dynamic_property_names\n");
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

QBindingStorage* q_scilexerdiff_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_scilexerdiff_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_scilexerdiff_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_scilexerdiff_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_scilexerdiff_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_scilexerdiff_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_scilexerdiff_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_scilexerdiff_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_scilexerdiff_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_scilexerdiff_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_scilexerdiff_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_scilexerdiff_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_scilexerdiff_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_scilexerdiff_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_lexer_id(void* self) {
    return QsciLexerDiff_LexerId((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_lexer_id(void* self) {
    return QsciLexerDiff_QBaseLexerId((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_lexer_id(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnLexerId((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_auto_completion_fillups(void* self) {
    return QsciLexerDiff_AutoCompletionFillups((QsciLexerDiff*)self);
}

const char* q_scilexerdiff_qbase_auto_completion_fillups(void* self) {
    return QsciLexerDiff_QBaseAutoCompletionFillups((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_auto_completion_fillups(void* self, const char* (*callback)()) {
    QsciLexerDiff_OnAutoCompletionFillups((QsciLexerDiff*)self, (intptr_t)callback);
}

const char** q_scilexerdiff_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerDiff_AutoCompletionWordSeparators((QsciLexerDiff*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerdiff_auto_completion_word_separators\n");
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

const char** q_scilexerdiff_qbase_auto_completion_word_separators(void* self) {
    libqt_list _arr = QsciLexerDiff_QBaseAutoCompletionWordSeparators((QsciLexerDiff*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_scilexerdiff_auto_completion_word_separators\n");
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

void q_scilexerdiff_on_auto_completion_word_separators(void* self, const char** (*callback)()) {
    QsciLexerDiff_OnAutoCompletionWordSeparators((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_block_end(void* self, int* style) {
    return QsciLexerDiff_BlockEnd((QsciLexerDiff*)self, style);
}

const char* q_scilexerdiff_qbase_block_end(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockEnd((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_block_end(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerDiff_OnBlockEnd((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_block_lookback(void* self) {
    return QsciLexerDiff_BlockLookback((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_block_lookback(void* self) {
    return QsciLexerDiff_QBaseBlockLookback((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_block_lookback(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnBlockLookback((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_block_start(void* self, int* style) {
    return QsciLexerDiff_BlockStart((QsciLexerDiff*)self, style);
}

const char* q_scilexerdiff_qbase_block_start(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockStart((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_block_start(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerDiff_OnBlockStart((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_block_start_keyword(void* self, int* style) {
    return QsciLexerDiff_BlockStartKeyword((QsciLexerDiff*)self, style);
}

const char* q_scilexerdiff_qbase_block_start_keyword(void* self, int* style) {
    return QsciLexerDiff_QBaseBlockStartKeyword((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_block_start_keyword(void* self, const char* (*callback)(void*, int*)) {
    QsciLexerDiff_OnBlockStartKeyword((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_brace_style(void* self) {
    return QsciLexerDiff_BraceStyle((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_brace_style(void* self) {
    return QsciLexerDiff_QBaseBraceStyle((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_brace_style(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnBraceStyle((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_case_sensitive(void* self) {
    return QsciLexerDiff_CaseSensitive((QsciLexerDiff*)self);
}

bool q_scilexerdiff_qbase_case_sensitive(void* self) {
    return QsciLexerDiff_QBaseCaseSensitive((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_case_sensitive(void* self, bool (*callback)()) {
    QsciLexerDiff_OnCaseSensitive((QsciLexerDiff*)self, (intptr_t)callback);
}

QColor* q_scilexerdiff_color(void* self, int style) {
    return QsciLexerDiff_Color((QsciLexerDiff*)self, style);
}

QColor* q_scilexerdiff_qbase_color(void* self, int style) {
    return QsciLexerDiff_QBaseColor((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_color(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerDiff_OnColor((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_eol_fill(void* self, int style) {
    return QsciLexerDiff_EolFill((QsciLexerDiff*)self, style);
}

bool q_scilexerdiff_qbase_eol_fill(void* self, int style) {
    return QsciLexerDiff_QBaseEolFill((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerDiff_OnEolFill((QsciLexerDiff*)self, (intptr_t)callback);
}

QFont* q_scilexerdiff_font(void* self, int style) {
    return QsciLexerDiff_Font((QsciLexerDiff*)self, style);
}

QFont* q_scilexerdiff_qbase_font(void* self, int style) {
    return QsciLexerDiff_QBaseFont((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_font(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerDiff_OnFont((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_indentation_guide_view(void* self) {
    return QsciLexerDiff_IndentationGuideView((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_indentation_guide_view(void* self) {
    return QsciLexerDiff_QBaseIndentationGuideView((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_indentation_guide_view(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnIndentationGuideView((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_keywords(void* self, int set) {
    return QsciLexerDiff_Keywords((QsciLexerDiff*)self, set);
}

const char* q_scilexerdiff_qbase_keywords(void* self, int set) {
    return QsciLexerDiff_QBaseKeywords((QsciLexerDiff*)self, set);
}

void q_scilexerdiff_on_keywords(void* self, const char* (*callback)(void*, int)) {
    QsciLexerDiff_OnKeywords((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_default_style(void* self) {
    return QsciLexerDiff_DefaultStyle((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_default_style(void* self) {
    return QsciLexerDiff_QBaseDefaultStyle((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_default_style(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnDefaultStyle((QsciLexerDiff*)self, (intptr_t)callback);
}

QColor* q_scilexerdiff_paper(void* self, int style) {
    return QsciLexerDiff_Paper((QsciLexerDiff*)self, style);
}

QColor* q_scilexerdiff_qbase_paper(void* self, int style) {
    return QsciLexerDiff_QBasePaper((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_paper(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerDiff_OnPaper((QsciLexerDiff*)self, (intptr_t)callback);
}

QColor* q_scilexerdiff_default_color2(void* self, int style) {
    return QsciLexerDiff_DefaultColor2((QsciLexerDiff*)self, style);
}

QColor* q_scilexerdiff_qbase_default_color2(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultColor2((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_default_color2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerDiff_OnDefaultColor2((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_default_eol_fill(void* self, int style) {
    return QsciLexerDiff_DefaultEolFill((QsciLexerDiff*)self, style);
}

bool q_scilexerdiff_qbase_default_eol_fill(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultEolFill((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_default_eol_fill(void* self, bool (*callback)(void*, int)) {
    QsciLexerDiff_OnDefaultEolFill((QsciLexerDiff*)self, (intptr_t)callback);
}

QFont* q_scilexerdiff_default_font2(void* self, int style) {
    return QsciLexerDiff_DefaultFont2((QsciLexerDiff*)self, style);
}

QFont* q_scilexerdiff_qbase_default_font2(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultFont2((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_default_font2(void* self, QFont* (*callback)(void*, int)) {
    QsciLexerDiff_OnDefaultFont2((QsciLexerDiff*)self, (intptr_t)callback);
}

QColor* q_scilexerdiff_default_paper2(void* self, int style) {
    return QsciLexerDiff_DefaultPaper2((QsciLexerDiff*)self, style);
}

QColor* q_scilexerdiff_qbase_default_paper2(void* self, int style) {
    return QsciLexerDiff_QBaseDefaultPaper2((QsciLexerDiff*)self, style);
}

void q_scilexerdiff_on_default_paper2(void* self, QColor* (*callback)(void*, int)) {
    QsciLexerDiff_OnDefaultPaper2((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_editor(void* self, void* editor) {
    QsciLexerDiff_SetEditor((QsciLexerDiff*)self, (QsciScintilla*)editor);
}

void q_scilexerdiff_qbase_set_editor(void* self, void* editor) {
    QsciLexerDiff_QBaseSetEditor((QsciLexerDiff*)self, (QsciScintilla*)editor);
}

void q_scilexerdiff_on_set_editor(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnSetEditor((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_refresh_properties(void* self) {
    QsciLexerDiff_RefreshProperties((QsciLexerDiff*)self);
}

void q_scilexerdiff_qbase_refresh_properties(void* self) {
    QsciLexerDiff_QBaseRefreshProperties((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_refresh_properties(void* self, void (*callback)()) {
    QsciLexerDiff_OnRefreshProperties((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_style_bits_needed(void* self) {
    return QsciLexerDiff_StyleBitsNeeded((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_style_bits_needed(void* self) {
    return QsciLexerDiff_QBaseStyleBitsNeeded((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_style_bits_needed(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnStyleBitsNeeded((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerDiff_SetAutoIndentStyle((QsciLexerDiff*)self, autoindentstyle);
}

void q_scilexerdiff_qbase_set_auto_indent_style(void* self, int autoindentstyle) {
    QsciLexerDiff_QBaseSetAutoIndentStyle((QsciLexerDiff*)self, autoindentstyle);
}

void q_scilexerdiff_on_set_auto_indent_style(void* self, void (*callback)(void*, int)) {
    QsciLexerDiff_OnSetAutoIndentStyle((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_color(void* self, void* c, int style) {
    QsciLexerDiff_SetColor((QsciLexerDiff*)self, (QColor*)c, style);
}

void q_scilexerdiff_qbase_set_color(void* self, void* c, int style) {
    QsciLexerDiff_QBaseSetColor((QsciLexerDiff*)self, (QColor*)c, style);
}

void q_scilexerdiff_on_set_color(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerDiff_OnSetColor((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerDiff_SetEolFill((QsciLexerDiff*)self, eoffill, style);
}

void q_scilexerdiff_qbase_set_eol_fill(void* self, bool eoffill, int style) {
    QsciLexerDiff_QBaseSetEolFill((QsciLexerDiff*)self, eoffill, style);
}

void q_scilexerdiff_on_set_eol_fill(void* self, void (*callback)(void*, bool, int)) {
    QsciLexerDiff_OnSetEolFill((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_font(void* self, void* f, int style) {
    QsciLexerDiff_SetFont((QsciLexerDiff*)self, (QFont*)f, style);
}

void q_scilexerdiff_qbase_set_font(void* self, void* f, int style) {
    QsciLexerDiff_QBaseSetFont((QsciLexerDiff*)self, (QFont*)f, style);
}

void q_scilexerdiff_on_set_font(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerDiff_OnSetFont((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_set_paper(void* self, void* c, int style) {
    QsciLexerDiff_SetPaper((QsciLexerDiff*)self, (QColor*)c, style);
}

void q_scilexerdiff_qbase_set_paper(void* self, void* c, int style) {
    QsciLexerDiff_QBaseSetPaper((QsciLexerDiff*)self, (QColor*)c, style);
}

void q_scilexerdiff_on_set_paper(void* self, void (*callback)(void*, void*, int)) {
    QsciLexerDiff_OnSetPaper((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_ReadProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerdiff_qbase_read_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_QBaseReadProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerdiff_on_read_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerDiff_OnReadProperties((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_WriteProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

bool q_scilexerdiff_qbase_write_properties(void* self, void* qs, const char* prefix) {
    return QsciLexerDiff_QBaseWriteProperties((QsciLexerDiff*)self, (QSettings*)qs, qstring(prefix));
}

void q_scilexerdiff_on_write_properties(void* self, bool (*callback)(void*, void*, const char*)) {
    QsciLexerDiff_OnWriteProperties((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_event(void* self, void* event) {
    return QsciLexerDiff_Event((QsciLexerDiff*)self, (QEvent*)event);
}

bool q_scilexerdiff_qbase_event(void* self, void* event) {
    return QsciLexerDiff_QBaseEvent((QsciLexerDiff*)self, (QEvent*)event);
}

void q_scilexerdiff_on_event(void* self, bool (*callback)(void*, void*)) {
    QsciLexerDiff_OnEvent((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_event_filter(void* self, void* watched, void* event) {
    return QsciLexerDiff_EventFilter((QsciLexerDiff*)self, (QObject*)watched, (QEvent*)event);
}

bool q_scilexerdiff_qbase_event_filter(void* self, void* watched, void* event) {
    return QsciLexerDiff_QBaseEventFilter((QsciLexerDiff*)self, (QObject*)watched, (QEvent*)event);
}

void q_scilexerdiff_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QsciLexerDiff_OnEventFilter((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_timer_event(void* self, void* event) {
    QsciLexerDiff_TimerEvent((QsciLexerDiff*)self, (QTimerEvent*)event);
}

void q_scilexerdiff_qbase_timer_event(void* self, void* event) {
    QsciLexerDiff_QBaseTimerEvent((QsciLexerDiff*)self, (QTimerEvent*)event);
}

void q_scilexerdiff_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnTimerEvent((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_child_event(void* self, void* event) {
    QsciLexerDiff_ChildEvent((QsciLexerDiff*)self, (QChildEvent*)event);
}

void q_scilexerdiff_qbase_child_event(void* self, void* event) {
    QsciLexerDiff_QBaseChildEvent((QsciLexerDiff*)self, (QChildEvent*)event);
}

void q_scilexerdiff_on_child_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnChildEvent((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_custom_event(void* self, void* event) {
    QsciLexerDiff_CustomEvent((QsciLexerDiff*)self, (QEvent*)event);
}

void q_scilexerdiff_qbase_custom_event(void* self, void* event) {
    QsciLexerDiff_QBaseCustomEvent((QsciLexerDiff*)self, (QEvent*)event);
}

void q_scilexerdiff_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnCustomEvent((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_connect_notify(void* self, void* signal) {
    QsciLexerDiff_ConnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

void q_scilexerdiff_qbase_connect_notify(void* self, void* signal) {
    QsciLexerDiff_QBaseConnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

void q_scilexerdiff_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnConnectNotify((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_disconnect_notify(void* self, void* signal) {
    QsciLexerDiff_DisconnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

void q_scilexerdiff_qbase_disconnect_notify(void* self, void* signal) {
    QsciLexerDiff_QBaseDisconnectNotify((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

void q_scilexerdiff_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QsciLexerDiff_OnDisconnectNotify((QsciLexerDiff*)self, (intptr_t)callback);
}

char* q_scilexerdiff_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerDiff_TextAsBytes((QsciLexerDiff*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_scilexerdiff_qbase_text_as_bytes(void* self, const char* text) {
    libqt_string _str = QsciLexerDiff_QBaseTextAsBytes((QsciLexerDiff*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerdiff_on_text_as_bytes(void* self, char* (*callback)(void*, const char*)) {
    QsciLexerDiff_OnTextAsBytes((QsciLexerDiff*)self, (intptr_t)callback);
}

const char* q_scilexerdiff_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerDiff_BytesAsText((QsciLexerDiff*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_scilexerdiff_qbase_bytes_as_text(void* self, const char* bytes, int size) {
    libqt_string _str = QsciLexerDiff_QBaseBytesAsText((QsciLexerDiff*)self, bytes, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_scilexerdiff_on_bytes_as_text(void* self, const char* (*callback)(void*, const char*, int)) {
    QsciLexerDiff_OnBytesAsText((QsciLexerDiff*)self, (intptr_t)callback);
}

QObject* q_scilexerdiff_sender(void* self) {
    return QsciLexerDiff_Sender((QsciLexerDiff*)self);
}

QObject* q_scilexerdiff_qbase_sender(void* self) {
    return QsciLexerDiff_QBaseSender((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_sender(void* self, QObject* (*callback)()) {
    QsciLexerDiff_OnSender((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_sender_signal_index(void* self) {
    return QsciLexerDiff_SenderSignalIndex((QsciLexerDiff*)self);
}

int32_t q_scilexerdiff_qbase_sender_signal_index(void* self) {
    return QsciLexerDiff_QBaseSenderSignalIndex((QsciLexerDiff*)self);
}

void q_scilexerdiff_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QsciLexerDiff_OnSenderSignalIndex((QsciLexerDiff*)self, (intptr_t)callback);
}

int32_t q_scilexerdiff_receivers(void* self, const char* signal) {
    return QsciLexerDiff_Receivers((QsciLexerDiff*)self, signal);
}

int32_t q_scilexerdiff_qbase_receivers(void* self, const char* signal) {
    return QsciLexerDiff_QBaseReceivers((QsciLexerDiff*)self, signal);
}

void q_scilexerdiff_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QsciLexerDiff_OnReceivers((QsciLexerDiff*)self, (intptr_t)callback);
}

bool q_scilexerdiff_is_signal_connected(void* self, void* signal) {
    return QsciLexerDiff_IsSignalConnected((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

bool q_scilexerdiff_qbase_is_signal_connected(void* self, void* signal) {
    return QsciLexerDiff_QBaseIsSignalConnected((QsciLexerDiff*)self, (QMetaMethod*)signal);
}

void q_scilexerdiff_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QsciLexerDiff_OnIsSignalConnected((QsciLexerDiff*)self, (intptr_t)callback);
}

void q_scilexerdiff_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_scilexerdiff_delete(void* self) {
    QsciLexerDiff_Delete((QsciLexerDiff*)(self));
}
