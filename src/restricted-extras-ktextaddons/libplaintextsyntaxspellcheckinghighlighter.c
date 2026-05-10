#include "../extras-ksyntaxhighlighting/libabstracthighlighter.hpp"
#include "../extras-ksyntaxhighlighting/libdefinition.hpp"
#include "../extras-ksyntaxhighlighting/libfoldingregion.hpp"
#include "../extras-ksyntaxhighlighting/libformat.hpp"
#include "../extras-ksyntaxhighlighting/libtheme.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqsyntaxhighlighter.hpp"
#include "../libqtextobject.hpp"
#include "../libqtextformat.hpp"
#include "../extras-sonnet/libhighlighter.hpp"
#include "libplaintexteditor.hpp"
#include "libplaintextsyntaxspellcheckinghighlighter.hpp"
#include "libplaintextsyntaxspellcheckinghighlighter.h"

TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new(void* plainText) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new((TextCustomEditor__PlainTextEditor*)plainText);
}

TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new2(void* plainText, void* misspelledColor) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new2((TextCustomEditor__PlainTextEditor*)plainText, (QColor*)misspelledColor);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_toggle_spell_highlighting(void* self, bool on) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ToggleSpellHighlighting((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, on);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_definition(void* self, void* def) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (KSyntaxHighlighting__Definition*)def);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_definition(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetDefinition((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_definition(void* self, void* def) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetDefinition((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (KSyntaxHighlighting__Definition*)def);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlight_block(void* self, const char* text) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, qstring(text));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnHighlightBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_highlight_block(void* self, const char* text) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperHighlightBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, qstring(text));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unset_misspelled(void* self, int start, int count) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_unset_misspelled(void* self, void (*callback)(void*, int, int)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnUnsetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_unset_misspelled(void* self, int start, int count) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_misspelled(void* self, int start, int count) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_misspelled(void* self, void (*callback)(void*, int, int)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_misspelled(void* self, int start, int count) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_apply_format(void* self, int offset, int length, void* format) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, offset, length, (KSyntaxHighlighting__Format*)format);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_apply_format(void* self, void (*callback)(void*, int, int, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_apply_format(void* self, int offset, int length, void* format) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, offset, length, (KSyntaxHighlighting__Format*)format);
}

const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_spell_checker_found(void* self) {
    return Sonnet__Highlighter_SpellCheckerFound((Sonnet__Highlighter*)self);
}

const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_language(void* self) {
    libqt_string _str = Sonnet__Highlighter_CurrentLanguage((Sonnet__Highlighter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_active(void* self, bool active) {
    Sonnet__Highlighter_SetActive((Sonnet__Highlighter*)self, active);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_active(void* self) {
    return Sonnet__Highlighter_IsActive((Sonnet__Highlighter*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_automatic(void* self) {
    return Sonnet__Highlighter_Automatic((Sonnet__Highlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_automatic(void* self, bool automatic) {
    Sonnet__Highlighter_SetAutomatic((Sonnet__Highlighter*)self, automatic);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_auto_detect_language_disabled(void* self) {
    return Sonnet__Highlighter_AutoDetectLanguageDisabled((Sonnet__Highlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled) {
    Sonnet__Highlighter_SetAutoDetectLanguageDisabled((Sonnet__Highlighter*)self, autoDetectDisabled);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_add_word_to_dictionary(void* self, const char* word) {
    Sonnet__Highlighter_AddWordToDictionary((Sonnet__Highlighter*)self, qstring(word));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_ignore_word(void* self, const char* word) {
    Sonnet__Highlighter_IgnoreWord((Sonnet__Highlighter*)self, qstring(word));
}

const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word(void* self, const char* word) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord((Sonnet__Highlighter*)self, qstring(word));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word\n");
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

const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word2(void* self, const char* word, void* cursor) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord2((Sonnet__Highlighter*)self, qstring(word), (QTextCursor*)cursor);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word2\n");
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

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_word_misspelled(void* self, const char* word) {
    return Sonnet__Highlighter_IsWordMisspelled((Sonnet__Highlighter*)self, qstring(word));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_misspelled_color(void* self, void* color) {
    Sonnet__Highlighter_SetMisspelledColor((Sonnet__Highlighter*)self, (QColor*)color);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_checker_enabled_by_default(void* self) {
    return Sonnet__Highlighter_CheckerEnabledByDefault((Sonnet__Highlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_document(void* self, void* document) {
    Sonnet__Highlighter_SetDocument((Sonnet__Highlighter*)self, (QTextDocument*)document);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_active_changed(void* self, const char* description) {
    Sonnet__Highlighter_ActiveChanged((Sonnet__Highlighter*)self, qstring(description));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_active_changed(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Highlighter_Connect_ActiveChanged((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_language(void* self, const char* language) {
    Sonnet__Highlighter_SetCurrentLanguage((Sonnet__Highlighter*)self, qstring(language));
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_slot_auto_detection(void* self) {
    Sonnet__Highlighter_SlotAutoDetection((Sonnet__Highlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_slot_rehighlight(void* self) {
    Sonnet__Highlighter_SlotRehighlight((Sonnet__Highlighter*)self);
}

const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word22(void* self, const char* word, int max) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord22((Sonnet__Highlighter*)self, qstring(word), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word22\n");
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

const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word3(void* self, const char* word, void* cursor, int max) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord3((Sonnet__Highlighter*)self, qstring(word), (QTextCursor*)cursor, max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word3\n");
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

QTextDocument* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_document(void* self) {
    return QSyntaxHighlighter_Document((QSyntaxHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_rehighlight(void* self) {
    QSyntaxHighlighter_Rehighlight((QSyntaxHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_rehighlight_block(void* self, void* block) {
    QSyntaxHighlighter_RehighlightBlock((QSyntaxHighlighter*)self, (QTextBlock*)block);
}

const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

KSyntaxHighlighting__Definition* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_definition(void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Definition((KSyntaxHighlighting__AbstractHighlighter*)self);
}

KSyntaxHighlighting__Theme* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_theme(void* self) {
    return KSyntaxHighlighting__AbstractHighlighter_Theme((KSyntaxHighlighting__AbstractHighlighter*)self);
}

const QMetaObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_meta_object(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

const QMetaObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_meta_object(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetaObject((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetaObject((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, param1);
}

void* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacast((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, param1);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacast((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, param1, param2, param3);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacall((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, param1, param2, param3);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacall((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_filter(void* self, void* o, void* e) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QObject*)o, (QEvent*)e);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_event_filter(void* self, void* o, void* e) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QObject*)o, (QEvent*)e);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEventFilter((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event(void* self, void* event) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QEvent*)event);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_event(void* self, void* event) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timer_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_timer_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnTimerEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_child_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QChildEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnChildEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_custom_event(void* self, void* event) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QEvent*)event);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCustomEvent((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnConnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnDisconnectNotify((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_theme(void* self, void* theme) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (KSyntaxHighlighting__Theme*)theme);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_theme(void* self, void* theme) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetTheme((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (KSyntaxHighlighting__Theme*)theme);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_theme(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetTheme((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_apply_folding(void* self, int offset, int length, void* region) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, offset, length, (KSyntaxHighlighting__FoldingRegion*)region);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_apply_folding(void* self, int offset, int length, void* region) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, offset, length, (KSyntaxHighlighting__FoldingRegion*)region);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_apply_folding(void* self, void (*callback)(void*, int, int, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFolding((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intra_word_editing(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_intra_word_editing(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_intra_word_editing(void* self, bool (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_intra_word_editing(void* self, bool editing) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, editing);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_intra_word_editing(void* self, bool editing) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetIntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, editing);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_intra_word_editing(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetIntraWordEditing((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_format(void* self, int start, int count, void* format) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_format(void* self, int start, int count, void* format) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

QTextCharFormat* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format(void* self, int pos) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, pos);
}

QTextCharFormat* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_format(void* self, int pos) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, pos);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnFormat((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previous_block_state(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_previous_block_state(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperPreviousBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_previous_block_state(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnPreviousBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block_state(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block_state(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block_state(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_block_state(void* self, int newState) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, newState);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_current_block_state(void* self, int newState) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, newState);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockState((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_block_user_data(void* self, void* data) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QTextBlockUserData*)data);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_current_block_user_data(void* self, void* data) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QTextBlockUserData*)data);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

QTextBlockUserData* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block_user_data(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

QTextBlockUserData* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block_user_data(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockUserData((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

QTextBlock* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

QTextBlock* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block(void* self, QTextBlock* (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlock((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_sender(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSender((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSender((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_sender_signal_index(void* self) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSenderSignalIndex((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSenderSignalIndex((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, signal);
}

int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperReceivers((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnReceivers((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIsSignalConnected((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIsSignalConnected((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_delete(void* self) {
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Delete((TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*)(self));
}
