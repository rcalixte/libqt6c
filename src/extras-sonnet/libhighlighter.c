#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqplaintextedit.hpp"
#include "../libqsyntaxhighlighter.hpp"
#include "../libqtextobject.hpp"
#include "../libqtextformat.hpp"
#include "../libqtextcursor.hpp"
#include "../libqtextdocument.hpp"
#include "../libqtextedit.hpp"
#include "libhighlighter.hpp"
#include "libhighlighter.h"

Sonnet__Highlighter* k_sonnet__highlighter_new(void* textEdit) {
    return Sonnet__Highlighter_new((QTextEdit*)textEdit);
}

Sonnet__Highlighter* k_sonnet__highlighter_new2(void* textEdit) {
    return Sonnet__Highlighter_new2((QPlainTextEdit*)textEdit);
}

Sonnet__Highlighter* k_sonnet__highlighter_new3(void* textEdit, void* col) {
    return Sonnet__Highlighter_new3((QTextEdit*)textEdit, (QColor*)col);
}

Sonnet__Highlighter* k_sonnet__highlighter_new4(void* textEdit, void* col) {
    return Sonnet__Highlighter_new4((QPlainTextEdit*)textEdit, (QColor*)col);
}

const QMetaObject* k_sonnet__highlighter_meta_object(void* self) {
    return Sonnet__Highlighter_MetaObject((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Sonnet__Highlighter_OnMetaObject((Sonnet__Highlighter*)self, (intptr_t)callback);
}

const QMetaObject* k_sonnet__highlighter_qbase_meta_object(void* self) {
    return Sonnet__Highlighter_QBaseMetaObject((Sonnet__Highlighter*)self);
}

void* k_sonnet__highlighter_metacast(void* self, const char* param1) {
    return Sonnet__Highlighter_Metacast((Sonnet__Highlighter*)self, param1);
}

void k_sonnet__highlighter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Sonnet__Highlighter_OnMetacast((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void* k_sonnet__highlighter_qbase_metacast(void* self, const char* param1) {
    return Sonnet__Highlighter_QBaseMetacast((Sonnet__Highlighter*)self, param1);
}

int32_t k_sonnet__highlighter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Highlighter_Metacall((Sonnet__Highlighter*)self, param1, param2, param3);
}

void k_sonnet__highlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__Highlighter_OnMetacall((Sonnet__Highlighter*)self, (intptr_t)callback);
}

int32_t k_sonnet__highlighter_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Highlighter_QBaseMetacall((Sonnet__Highlighter*)self, param1, param2, param3);
}

const char* k_sonnet__highlighter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__highlighter_spell_checker_found(void* self) {
    return Sonnet__Highlighter_SpellCheckerFound((Sonnet__Highlighter*)self);
}

const char* k_sonnet__highlighter_current_language(void* self) {
    libqt_string _str = Sonnet__Highlighter_CurrentLanguage((Sonnet__Highlighter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__highlighter_set_active(void* self, bool active) {
    Sonnet__Highlighter_SetActive((Sonnet__Highlighter*)self, active);
}

bool k_sonnet__highlighter_is_active(void* self) {
    return Sonnet__Highlighter_IsActive((Sonnet__Highlighter*)self);
}

bool k_sonnet__highlighter_automatic(void* self) {
    return Sonnet__Highlighter_Automatic((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_set_automatic(void* self, bool automatic) {
    Sonnet__Highlighter_SetAutomatic((Sonnet__Highlighter*)self, automatic);
}

bool k_sonnet__highlighter_auto_detect_language_disabled(void* self) {
    return Sonnet__Highlighter_AutoDetectLanguageDisabled((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled) {
    Sonnet__Highlighter_SetAutoDetectLanguageDisabled((Sonnet__Highlighter*)self, autoDetectDisabled);
}

void k_sonnet__highlighter_add_word_to_dictionary(void* self, const char* word) {
    Sonnet__Highlighter_AddWordToDictionary((Sonnet__Highlighter*)self, qstring(word));
}

void k_sonnet__highlighter_ignore_word(void* self, const char* word) {
    Sonnet__Highlighter_IgnoreWord((Sonnet__Highlighter*)self, qstring(word));
}

const char** k_sonnet__highlighter_suggestions_for_word(void* self, const char* word) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord((Sonnet__Highlighter*)self, qstring(word));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__highlighter_suggestions_for_word\n");
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

const char** k_sonnet__highlighter_suggestions_for_word2(void* self, const char* word, void* cursor) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord2((Sonnet__Highlighter*)self, qstring(word), (QTextCursor*)cursor);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__highlighter_suggestions_for_word2\n");
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

bool k_sonnet__highlighter_is_word_misspelled(void* self, const char* word) {
    return Sonnet__Highlighter_IsWordMisspelled((Sonnet__Highlighter*)self, qstring(word));
}

void k_sonnet__highlighter_set_misspelled_color(void* self, void* color) {
    Sonnet__Highlighter_SetMisspelledColor((Sonnet__Highlighter*)self, (QColor*)color);
}

bool k_sonnet__highlighter_checker_enabled_by_default(void* self) {
    return Sonnet__Highlighter_CheckerEnabledByDefault((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_set_document(void* self, void* document) {
    Sonnet__Highlighter_SetDocument((Sonnet__Highlighter*)self, (QTextDocument*)document);
}

void k_sonnet__highlighter_active_changed(void* self, const char* description) {
    Sonnet__Highlighter_ActiveChanged((Sonnet__Highlighter*)self, qstring(description));
}

void k_sonnet__highlighter_on_active_changed(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Highlighter_Connect_ActiveChanged((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_highlight_block(void* self, const char* text) {
    Sonnet__Highlighter_HighlightBlock((Sonnet__Highlighter*)self, qstring(text));
}

void k_sonnet__highlighter_on_highlight_block(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Highlighter_OnHighlightBlock((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_qbase_highlight_block(void* self, const char* text) {
    Sonnet__Highlighter_QBaseHighlightBlock((Sonnet__Highlighter*)self, qstring(text));
}

void k_sonnet__highlighter_set_misspelled(void* self, int start, int count) {
    Sonnet__Highlighter_SetMisspelled((Sonnet__Highlighter*)self, start, count);
}

void k_sonnet__highlighter_on_set_misspelled(void* self, void (*callback)(void*, int, int)) {
    Sonnet__Highlighter_OnSetMisspelled((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_qbase_set_misspelled(void* self, int start, int count) {
    Sonnet__Highlighter_QBaseSetMisspelled((Sonnet__Highlighter*)self, start, count);
}

void k_sonnet__highlighter_unset_misspelled(void* self, int start, int count) {
    Sonnet__Highlighter_UnsetMisspelled((Sonnet__Highlighter*)self, start, count);
}

void k_sonnet__highlighter_on_unset_misspelled(void* self, void (*callback)(void*, int, int)) {
    Sonnet__Highlighter_OnUnsetMisspelled((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_qbase_unset_misspelled(void* self, int start, int count) {
    Sonnet__Highlighter_QBaseUnsetMisspelled((Sonnet__Highlighter*)self, start, count);
}

bool k_sonnet__highlighter_event_filter(void* self, void* o, void* e) {
    return Sonnet__Highlighter_EventFilter((Sonnet__Highlighter*)self, (QObject*)o, (QEvent*)e);
}

void k_sonnet__highlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__Highlighter_OnEventFilter((Sonnet__Highlighter*)self, (intptr_t)callback);
}

bool k_sonnet__highlighter_qbase_event_filter(void* self, void* o, void* e) {
    return Sonnet__Highlighter_QBaseEventFilter((Sonnet__Highlighter*)self, (QObject*)o, (QEvent*)e);
}

bool k_sonnet__highlighter_intra_word_editing(void* self) {
    return Sonnet__Highlighter_IntraWordEditing((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_intra_word_editing(void* self, bool (*callback)()) {
    Sonnet__Highlighter_OnIntraWordEditing((Sonnet__Highlighter*)self, (intptr_t)callback);
}

bool k_sonnet__highlighter_qbase_intra_word_editing(void* self) {
    return Sonnet__Highlighter_QBaseIntraWordEditing((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_set_intra_word_editing(void* self, bool editing) {
    Sonnet__Highlighter_SetIntraWordEditing((Sonnet__Highlighter*)self, editing);
}

void k_sonnet__highlighter_on_set_intra_word_editing(void* self, void (*callback)(void*, bool)) {
    Sonnet__Highlighter_OnSetIntraWordEditing((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_qbase_set_intra_word_editing(void* self, bool editing) {
    Sonnet__Highlighter_QBaseSetIntraWordEditing((Sonnet__Highlighter*)self, editing);
}

void k_sonnet__highlighter_set_current_language(void* self, const char* language) {
    Sonnet__Highlighter_SetCurrentLanguage((Sonnet__Highlighter*)self, qstring(language));
}

void k_sonnet__highlighter_slot_auto_detection(void* self) {
    Sonnet__Highlighter_SlotAutoDetection((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_slot_rehighlight(void* self) {
    Sonnet__Highlighter_SlotRehighlight((Sonnet__Highlighter*)self);
}

const char* k_sonnet__highlighter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__highlighter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_sonnet__highlighter_suggestions_for_word22(void* self, const char* word, int max) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord22((Sonnet__Highlighter*)self, qstring(word), max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__highlighter_suggestions_for_word22\n");
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

const char** k_sonnet__highlighter_suggestions_for_word3(void* self, const char* word, void* cursor, int max) {
    libqt_list _arr = Sonnet__Highlighter_SuggestionsForWord3((Sonnet__Highlighter*)self, qstring(word), (QTextCursor*)cursor, max);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__highlighter_suggestions_for_word3\n");
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

QTextDocument* k_sonnet__highlighter_document(void* self) {
    return QSyntaxHighlighter_Document((QSyntaxHighlighter*)self);
}

void k_sonnet__highlighter_rehighlight(void* self) {
    QSyntaxHighlighter_Rehighlight((QSyntaxHighlighter*)self);
}

void k_sonnet__highlighter_rehighlight_block(void* self, void* block) {
    QSyntaxHighlighter_RehighlightBlock((QSyntaxHighlighter*)self, (QTextBlock*)block);
}

const char* k_sonnet__highlighter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__highlighter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__highlighter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__highlighter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__highlighter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__highlighter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__highlighter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__highlighter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__highlighter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__highlighter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_sonnet__highlighter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_sonnet__highlighter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__highlighter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__highlighter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__highlighter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_sonnet__highlighter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__highlighter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__highlighter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_sonnet__highlighter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__highlighter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__highlighter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_sonnet__highlighter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__highlighter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_sonnet__highlighter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_sonnet__highlighter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_sonnet__highlighter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__highlighter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__highlighter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__highlighter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__highlighter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__highlighter_dynamic_property_names\n");
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

QBindingStorage* k_sonnet__highlighter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__highlighter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__highlighter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__highlighter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__highlighter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__highlighter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__highlighter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_sonnet__highlighter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_sonnet__highlighter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_sonnet__highlighter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_sonnet__highlighter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sonnet__highlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_sonnet__highlighter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_sonnet__highlighter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_sonnet__highlighter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_sonnet__highlighter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_sonnet__highlighter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__highlighter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__highlighter_event(void* self, void* event) {
    return Sonnet__Highlighter_Event((Sonnet__Highlighter*)self, (QEvent*)event);
}

bool k_sonnet__highlighter_qbase_event(void* self, void* event) {
    return Sonnet__Highlighter_QBaseEvent((Sonnet__Highlighter*)self, (QEvent*)event);
}

void k_sonnet__highlighter_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnEvent((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_timer_event(void* self, void* event) {
    Sonnet__Highlighter_TimerEvent((Sonnet__Highlighter*)self, (QTimerEvent*)event);
}

void k_sonnet__highlighter_qbase_timer_event(void* self, void* event) {
    Sonnet__Highlighter_QBaseTimerEvent((Sonnet__Highlighter*)self, (QTimerEvent*)event);
}

void k_sonnet__highlighter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnTimerEvent((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_child_event(void* self, void* event) {
    Sonnet__Highlighter_ChildEvent((Sonnet__Highlighter*)self, (QChildEvent*)event);
}

void k_sonnet__highlighter_qbase_child_event(void* self, void* event) {
    Sonnet__Highlighter_QBaseChildEvent((Sonnet__Highlighter*)self, (QChildEvent*)event);
}

void k_sonnet__highlighter_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnChildEvent((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_custom_event(void* self, void* event) {
    Sonnet__Highlighter_CustomEvent((Sonnet__Highlighter*)self, (QEvent*)event);
}

void k_sonnet__highlighter_qbase_custom_event(void* self, void* event) {
    Sonnet__Highlighter_QBaseCustomEvent((Sonnet__Highlighter*)self, (QEvent*)event);
}

void k_sonnet__highlighter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnCustomEvent((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_connect_notify(void* self, void* signal) {
    Sonnet__Highlighter_ConnectNotify((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

void k_sonnet__highlighter_qbase_connect_notify(void* self, void* signal) {
    Sonnet__Highlighter_QBaseConnectNotify((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

void k_sonnet__highlighter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnConnectNotify((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_disconnect_notify(void* self, void* signal) {
    Sonnet__Highlighter_DisconnectNotify((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

void k_sonnet__highlighter_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__Highlighter_QBaseDisconnectNotify((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

void k_sonnet__highlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnDisconnectNotify((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_set_format(void* self, int start, int count, void* format) {
    Sonnet__Highlighter_SetFormat((Sonnet__Highlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_sonnet__highlighter_qbase_set_format(void* self, int start, int count, void* format) {
    Sonnet__Highlighter_QBaseSetFormat((Sonnet__Highlighter*)self, start, count, (QTextCharFormat*)format);
}

void k_sonnet__highlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*)) {
    Sonnet__Highlighter_OnSetFormat((Sonnet__Highlighter*)self, (intptr_t)callback);
}

QTextCharFormat* k_sonnet__highlighter_format(void* self, int pos) {
    return Sonnet__Highlighter_Format((Sonnet__Highlighter*)self, pos);
}

QTextCharFormat* k_sonnet__highlighter_qbase_format(void* self, int pos) {
    return Sonnet__Highlighter_QBaseFormat((Sonnet__Highlighter*)self, pos);
}

void k_sonnet__highlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int)) {
    Sonnet__Highlighter_OnFormat((Sonnet__Highlighter*)self, (intptr_t)callback);
}

int32_t k_sonnet__highlighter_previous_block_state(void* self) {
    return Sonnet__Highlighter_PreviousBlockState((Sonnet__Highlighter*)self);
}

int32_t k_sonnet__highlighter_qbase_previous_block_state(void* self) {
    return Sonnet__Highlighter_QBasePreviousBlockState((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_previous_block_state(void* self, int32_t (*callback)()) {
    Sonnet__Highlighter_OnPreviousBlockState((Sonnet__Highlighter*)self, (intptr_t)callback);
}

int32_t k_sonnet__highlighter_current_block_state(void* self) {
    return Sonnet__Highlighter_CurrentBlockState((Sonnet__Highlighter*)self);
}

int32_t k_sonnet__highlighter_qbase_current_block_state(void* self) {
    return Sonnet__Highlighter_QBaseCurrentBlockState((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_current_block_state(void* self, int32_t (*callback)()) {
    Sonnet__Highlighter_OnCurrentBlockState((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_set_current_block_state(void* self, int newState) {
    Sonnet__Highlighter_SetCurrentBlockState((Sonnet__Highlighter*)self, newState);
}

void k_sonnet__highlighter_qbase_set_current_block_state(void* self, int newState) {
    Sonnet__Highlighter_QBaseSetCurrentBlockState((Sonnet__Highlighter*)self, newState);
}

void k_sonnet__highlighter_on_set_current_block_state(void* self, void (*callback)(void*, int)) {
    Sonnet__Highlighter_OnSetCurrentBlockState((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_set_current_block_user_data(void* self, void* data) {
    Sonnet__Highlighter_SetCurrentBlockUserData((Sonnet__Highlighter*)self, (QTextBlockUserData*)data);
}

void k_sonnet__highlighter_qbase_set_current_block_user_data(void* self, void* data) {
    Sonnet__Highlighter_QBaseSetCurrentBlockUserData((Sonnet__Highlighter*)self, (QTextBlockUserData*)data);
}

void k_sonnet__highlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnSetCurrentBlockUserData((Sonnet__Highlighter*)self, (intptr_t)callback);
}

QTextBlockUserData* k_sonnet__highlighter_current_block_user_data(void* self) {
    return Sonnet__Highlighter_CurrentBlockUserData((Sonnet__Highlighter*)self);
}

QTextBlockUserData* k_sonnet__highlighter_qbase_current_block_user_data(void* self) {
    return Sonnet__Highlighter_QBaseCurrentBlockUserData((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)()) {
    Sonnet__Highlighter_OnCurrentBlockUserData((Sonnet__Highlighter*)self, (intptr_t)callback);
}

QTextBlock* k_sonnet__highlighter_current_block(void* self) {
    return Sonnet__Highlighter_CurrentBlock((Sonnet__Highlighter*)self);
}

QTextBlock* k_sonnet__highlighter_qbase_current_block(void* self) {
    return Sonnet__Highlighter_QBaseCurrentBlock((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_current_block(void* self, QTextBlock* (*callback)()) {
    Sonnet__Highlighter_OnCurrentBlock((Sonnet__Highlighter*)self, (intptr_t)callback);
}

QObject* k_sonnet__highlighter_sender(void* self) {
    return Sonnet__Highlighter_Sender((Sonnet__Highlighter*)self);
}

QObject* k_sonnet__highlighter_qbase_sender(void* self) {
    return Sonnet__Highlighter_QBaseSender((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__Highlighter_OnSender((Sonnet__Highlighter*)self, (intptr_t)callback);
}

int32_t k_sonnet__highlighter_sender_signal_index(void* self) {
    return Sonnet__Highlighter_SenderSignalIndex((Sonnet__Highlighter*)self);
}

int32_t k_sonnet__highlighter_qbase_sender_signal_index(void* self) {
    return Sonnet__Highlighter_QBaseSenderSignalIndex((Sonnet__Highlighter*)self);
}

void k_sonnet__highlighter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__Highlighter_OnSenderSignalIndex((Sonnet__Highlighter*)self, (intptr_t)callback);
}

int32_t k_sonnet__highlighter_receivers(void* self, const char* signal) {
    return Sonnet__Highlighter_Receivers((Sonnet__Highlighter*)self, signal);
}

int32_t k_sonnet__highlighter_qbase_receivers(void* self, const char* signal) {
    return Sonnet__Highlighter_QBaseReceivers((Sonnet__Highlighter*)self, signal);
}

void k_sonnet__highlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__Highlighter_OnReceivers((Sonnet__Highlighter*)self, (intptr_t)callback);
}

bool k_sonnet__highlighter_is_signal_connected(void* self, void* signal) {
    return Sonnet__Highlighter_IsSignalConnected((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

bool k_sonnet__highlighter_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__Highlighter_QBaseIsSignalConnected((Sonnet__Highlighter*)self, (QMetaMethod*)signal);
}

void k_sonnet__highlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Highlighter_OnIsSignalConnected((Sonnet__Highlighter*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__highlighter_delete(void* self) {
    Sonnet__Highlighter_Delete((Sonnet__Highlighter*)(self));
}
