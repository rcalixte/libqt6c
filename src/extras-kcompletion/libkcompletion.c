#include "libkcompletionmatches.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkcompletion.hpp"
#include "libkcompletion.h"

KCompletion* k_completion_new() {
    return KCompletion_new();
}

const QMetaObject* k_completion_meta_object(void* self) {
    return KCompletion_MetaObject((KCompletion*)self);
}

void k_completion_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCompletion_OnMetaObject((KCompletion*)self, (intptr_t)callback);
}

const QMetaObject* k_completion_super_meta_object(void* self) {
    return KCompletion_SuperMetaObject((KCompletion*)self);
}

void* k_completion_metacast(void* self, const char* param1) {
    return KCompletion_Metacast((KCompletion*)self, param1);
}

void k_completion_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCompletion_OnMetacast((KCompletion*)self, (intptr_t)callback);
}

void* k_completion_super_metacast(void* self, const char* param1) {
    return KCompletion_SuperMetacast((KCompletion*)self, param1);
}

int32_t k_completion_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompletion_Metacall((KCompletion*)self, param1, param2, param3);
}

void k_completion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCompletion_OnMetacall((KCompletion*)self, (intptr_t)callback);
}

int32_t k_completion_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCompletion_SuperMetacall((KCompletion*)self, param1, param2, param3);
}

const char* k_completion_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_completion_substring_completion(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_SubstringCompletion((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_substring_completion\n");
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

const char* k_completion_last_match(void* self) {
    libqt_string _str = KCompletion_LastMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completion_on_last_match(void* self, const char* (*callback)()) {
    KCompletion_OnLastMatch((KCompletion*)self, (intptr_t)callback);
}

const char* k_completion_super_last_match(void* self) {
    libqt_string _str = KCompletion_SuperLastMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_completion_items(void* self) {
    libqt_list _arr = KCompletion_Items((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_items\n");
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

bool k_completion_is_empty(void* self) {
    return KCompletion_IsEmpty((KCompletion*)self);
}

void k_completion_set_completion_mode(void* self, int32_t mode) {
    KCompletion_SetCompletionMode((KCompletion*)self, mode);
}

void k_completion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KCompletion_OnSetCompletionMode((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_completion_mode(void* self, int32_t mode) {
    KCompletion_SuperSetCompletionMode((KCompletion*)self, mode);
}

int32_t k_completion_completion_mode(void* self) {
    return KCompletion_CompletionMode((KCompletion*)self);
}

void k_completion_set_order(void* self, int32_t order) {
    KCompletion_SetOrder((KCompletion*)self, order);
}

void k_completion_on_set_order(void* self, void (*callback)(void*, int32_t)) {
    KCompletion_OnSetOrder((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_order(void* self, int32_t order) {
    KCompletion_SuperSetOrder((KCompletion*)self, order);
}

int32_t k_completion_order(void* self) {
    return KCompletion_Order((KCompletion*)self);
}

void k_completion_set_ignore_case(void* self, bool ignoreCase) {
    KCompletion_SetIgnoreCase((KCompletion*)self, ignoreCase);
}

void k_completion_on_set_ignore_case(void* self, void (*callback)(void*, bool)) {
    KCompletion_OnSetIgnoreCase((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_ignore_case(void* self, bool ignoreCase) {
    KCompletion_SuperSetIgnoreCase((KCompletion*)self, ignoreCase);
}

bool k_completion_ignore_case(void* self) {
    return KCompletion_IgnoreCase((KCompletion*)self);
}

bool k_completion_should_auto_suggest(void* self) {
    return KCompletion_ShouldAutoSuggest((KCompletion*)self);
}

const char** k_completion_all_matches(void* self) {
    libqt_list _arr = KCompletion_AllMatches((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_all_matches\n");
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

const char** k_completion_all_matches2(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_AllMatches2((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_all_matches2\n");
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

KCompletionMatches* k_completion_all_weighted_matches(void* self) {
    return KCompletion_AllWeightedMatches((KCompletion*)self);
}

KCompletionMatches* k_completion_all_weighted_matches2(void* self, const char* stringVal) {
    return KCompletion_AllWeightedMatches2((KCompletion*)self, qstring(stringVal));
}

void k_completion_set_sounds_enabled(void* self, bool enable) {
    KCompletion_SetSoundsEnabled((KCompletion*)self, enable);
}

void k_completion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool)) {
    KCompletion_OnSetSoundsEnabled((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_sounds_enabled(void* self, bool enable) {
    KCompletion_SuperSetSoundsEnabled((KCompletion*)self, enable);
}

bool k_completion_sounds_enabled(void* self) {
    return KCompletion_SoundsEnabled((KCompletion*)self);
}

bool k_completion_has_multiple_matches(void* self) {
    return KCompletion_HasMultipleMatches((KCompletion*)self);
}

const char* k_completion_make_completion(void* self, const char* stringVal) {
    libqt_string _str = KCompletion_MakeCompletion((KCompletion*)self, qstring(stringVal));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completion_on_make_completion(void* self, const char* (*callback)(void*, const char*)) {
    KCompletion_OnMakeCompletion((KCompletion*)self, (intptr_t)callback);
}

const char* k_completion_super_make_completion(void* self, const char* stringVal) {
    libqt_string _str = KCompletion_SuperMakeCompletion((KCompletion*)self, qstring(stringVal));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completion_previous_match(void* self) {
    libqt_string _str = KCompletion_PreviousMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completion_next_match(void* self) {
    libqt_string _str = KCompletion_NextMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completion_insert_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_insert_items\n");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletion_InsertItems((KCompletion*)self, items_list);
    free(items_qstr);
}

void k_completion_set_items(void* self, const char* itemList[static 1]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_set_items\n");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KCompletion_SetItems((KCompletion*)self, itemList_list);
    free(itemList_qstr);
}

void k_completion_on_set_items(void* self, void (*callback)(void*, const char**)) {
    KCompletion_OnSetItems((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_items(void* self, const char* itemList[static 1]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_set_items\n");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KCompletion_SuperSetItems((KCompletion*)self, itemList_list);
}

void k_completion_add_item(void* self, const char* item) {
    KCompletion_AddItem((KCompletion*)self, qstring(item));
}

void k_completion_add_item2(void* self, const char* item, uint32_t weight) {
    KCompletion_AddItem2((KCompletion*)self, qstring(item), weight);
}

void k_completion_remove_item(void* self, const char* item) {
    KCompletion_RemoveItem((KCompletion*)self, qstring(item));
}

void k_completion_clear(void* self) {
    KCompletion_Clear((KCompletion*)self);
}

void k_completion_on_clear(void* self, void (*callback)()) {
    KCompletion_OnClear((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_clear(void* self) {
    KCompletion_SuperClear((KCompletion*)self);
}

void k_completion_match(void* self, const char* item) {
    KCompletion_Match((KCompletion*)self, qstring(item));
}

void k_completion_on_match(void* self, void (*callback)(void*, const char*)) {
    KCompletion_Connect_Match((KCompletion*)self, (intptr_t)callback);
}

void k_completion_matches(void* self, const char* matchlist[static 1]) {
    size_t matchlist_len = libqt_strv_length(matchlist);
    libqt_string* matchlist_qstr = (libqt_string*)malloc(matchlist_len * sizeof(libqt_string));
    if (matchlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_matches\n");
        abort();
    }
    for (size_t i = 0; i < matchlist_len; ++i) {
        matchlist_qstr[i] = qstring(matchlist[i]);
    }
    libqt_list matchlist_list = qlist(matchlist_qstr, matchlist_len);
    KCompletion_Matches((KCompletion*)self, matchlist_list);
    free(matchlist_qstr);
}

void k_completion_on_matches(void* self, void (*callback)(void*, const char**)) {
    KCompletion_Connect_Matches((KCompletion*)self, (intptr_t)callback);
}

void k_completion_multiple_matches(void* self) {
    KCompletion_MultipleMatches((KCompletion*)self);
}

void k_completion_on_multiple_matches(void* self, void (*callback)(void*)) {
    KCompletion_Connect_MultipleMatches((KCompletion*)self, (intptr_t)callback);
}

void k_completion_post_process_matches(void* self, const char* matchList[static 1]) {
    size_t matchList_len = libqt_strv_length(matchList);
    libqt_string* matchList_qstr = (libqt_string*)malloc(matchList_len * sizeof(libqt_string));
    if (matchList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_post_process_matches\n");
        abort();
    }
    for (size_t i = 0; i < matchList_len; ++i) {
        matchList_qstr[i] = qstring(matchList[i]);
    }
    libqt_list matchList_list = qlist(matchList_qstr, matchList_len);
    KCompletion_PostProcessMatches((KCompletion*)self, matchList_list);
    free(matchList_qstr);
}

void k_completion_on_post_process_matches(void* self, void (*callback)(void*, const char**)) {
    KCompletion_OnPostProcessMatches((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_post_process_matches(void* self, const char* matchList[static 1]) {
    size_t matchList_len = libqt_strv_length(matchList);
    libqt_string* matchList_qstr = (libqt_string*)malloc(matchList_len * sizeof(libqt_string));
    if (matchList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_post_process_matches\n");
        abort();
    }
    for (size_t i = 0; i < matchList_len; ++i) {
        matchList_qstr[i] = qstring(matchList[i]);
    }
    libqt_list matchList_list = qlist(matchList_qstr, matchList_len);
    KCompletion_SuperPostProcessMatches((KCompletion*)self, matchList_list);
}

void k_completion_post_process_matches2(void* self, void* matches) {
    KCompletion_PostProcessMatches2((KCompletion*)self, (KCompletionMatches*)matches);
}

void k_completion_on_post_process_matches2(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnPostProcessMatches2((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_post_process_matches2(void* self, void* matches) {
    KCompletion_SuperPostProcessMatches2((KCompletion*)self, (KCompletionMatches*)matches);
}

void k_completion_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KCompletion_SetShouldAutoSuggest((KCompletion*)self, shouldAutosuggest);
}

void k_completion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool)) {
    KCompletion_OnSetShouldAutoSuggest((KCompletion*)self, (intptr_t)callback);
}

void k_completion_super_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KCompletion_SuperSetShouldAutoSuggest((KCompletion*)self, shouldAutosuggest);
}

const char* k_completion_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completion_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_completion_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_completion_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_completion_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_completion_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_completion_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_completion_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_completion_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_completion_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_completion_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_completion_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_completion_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_completion_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_completion_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_completion_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_completion_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_completion_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_completion_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_completion_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_completion_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_completion_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_completion_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_completion_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_completion_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_completion_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_completion_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_completion_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_completion_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_completion_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_completion_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_completion_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_completion_dynamic_property_names\n");
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

QBindingStorage* k_completion_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_completion_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_completion_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_completion_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_completion_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_completion_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_completion_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_completion_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_completion_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_completion_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_completion_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_completion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_completion_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_completion_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_completion_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_completion_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_completion_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_completion_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_completion_event(void* self, void* event) {
    return KCompletion_Event((KCompletion*)self, (QEvent*)event);
}

bool k_completion_super_event(void* self, void* event) {
    return KCompletion_SuperEvent((KCompletion*)self, (QEvent*)event);
}

void k_completion_on_event(void* self, bool (*callback)(void*, void*)) {
    KCompletion_OnEvent((KCompletion*)self, (intptr_t)callback);
}

bool k_completion_event_filter(void* self, void* watched, void* event) {
    return KCompletion_EventFilter((KCompletion*)self, (QObject*)watched, (QEvent*)event);
}

bool k_completion_super_event_filter(void* self, void* watched, void* event) {
    return KCompletion_SuperEventFilter((KCompletion*)self, (QObject*)watched, (QEvent*)event);
}

void k_completion_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCompletion_OnEventFilter((KCompletion*)self, (intptr_t)callback);
}

void k_completion_timer_event(void* self, void* event) {
    KCompletion_TimerEvent((KCompletion*)self, (QTimerEvent*)event);
}

void k_completion_super_timer_event(void* self, void* event) {
    KCompletion_SuperTimerEvent((KCompletion*)self, (QTimerEvent*)event);
}

void k_completion_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnTimerEvent((KCompletion*)self, (intptr_t)callback);
}

void k_completion_child_event(void* self, void* event) {
    KCompletion_ChildEvent((KCompletion*)self, (QChildEvent*)event);
}

void k_completion_super_child_event(void* self, void* event) {
    KCompletion_SuperChildEvent((KCompletion*)self, (QChildEvent*)event);
}

void k_completion_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnChildEvent((KCompletion*)self, (intptr_t)callback);
}

void k_completion_custom_event(void* self, void* event) {
    KCompletion_CustomEvent((KCompletion*)self, (QEvent*)event);
}

void k_completion_super_custom_event(void* self, void* event) {
    KCompletion_SuperCustomEvent((KCompletion*)self, (QEvent*)event);
}

void k_completion_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnCustomEvent((KCompletion*)self, (intptr_t)callback);
}

void k_completion_connect_notify(void* self, void* signal) {
    KCompletion_ConnectNotify((KCompletion*)self, (QMetaMethod*)signal);
}

void k_completion_super_connect_notify(void* self, void* signal) {
    KCompletion_SuperConnectNotify((KCompletion*)self, (QMetaMethod*)signal);
}

void k_completion_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnConnectNotify((KCompletion*)self, (intptr_t)callback);
}

void k_completion_disconnect_notify(void* self, void* signal) {
    KCompletion_DisconnectNotify((KCompletion*)self, (QMetaMethod*)signal);
}

void k_completion_super_disconnect_notify(void* self, void* signal) {
    KCompletion_SuperDisconnectNotify((KCompletion*)self, (QMetaMethod*)signal);
}

void k_completion_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCompletion_OnDisconnectNotify((KCompletion*)self, (intptr_t)callback);
}

QObject* k_completion_sender(void* self) {
    return KCompletion_Sender((KCompletion*)self);
}

QObject* k_completion_super_sender(void* self) {
    return KCompletion_SuperSender((KCompletion*)self);
}

void k_completion_on_sender(void* self, QObject* (*callback)()) {
    KCompletion_OnSender((KCompletion*)self, (intptr_t)callback);
}

int32_t k_completion_sender_signal_index(void* self) {
    return KCompletion_SenderSignalIndex((KCompletion*)self);
}

int32_t k_completion_super_sender_signal_index(void* self) {
    return KCompletion_SuperSenderSignalIndex((KCompletion*)self);
}

void k_completion_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCompletion_OnSenderSignalIndex((KCompletion*)self, (intptr_t)callback);
}

int32_t k_completion_receivers(void* self, const char* signal) {
    return KCompletion_Receivers((KCompletion*)self, signal);
}

int32_t k_completion_super_receivers(void* self, const char* signal) {
    return KCompletion_SuperReceivers((KCompletion*)self, signal);
}

void k_completion_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCompletion_OnReceivers((KCompletion*)self, (intptr_t)callback);
}

bool k_completion_is_signal_connected(void* self, void* signal) {
    return KCompletion_IsSignalConnected((KCompletion*)self, (QMetaMethod*)signal);
}

bool k_completion_super_is_signal_connected(void* self, void* signal) {
    return KCompletion_SuperIsSignalConnected((KCompletion*)self, (QMetaMethod*)signal);
}

void k_completion_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCompletion_OnIsSignalConnected((KCompletion*)self, (intptr_t)callback);
}

void k_completion_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_completion_delete(void* self) {
    KCompletion_Delete((KCompletion*)(self));
}
