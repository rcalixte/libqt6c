#include "../extras-kcompletion/libkcompletion.hpp"
#include "../extras-kcompletion/libkcompletionmatches.hpp"
#include "libkurlcompletion.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkshellcompletion.hpp"
#include "libkshellcompletion.h"

KShellCompletion* k_shellcompletion_new() {
    return KShellCompletion_new();
}

const QMetaObject* k_shellcompletion_meta_object(void* self) {
    return KShellCompletion_MetaObject((KShellCompletion*)self);
}

void* k_shellcompletion_metacast(void* self, const char* param1) {
    return KShellCompletion_Metacast((KShellCompletion*)self, param1);
}

int32_t k_shellcompletion_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KShellCompletion_Metacall((KShellCompletion*)self, param1, param2, param3);
}

void k_shellcompletion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KShellCompletion_OnMetacall((KShellCompletion*)self, (intptr_t)callback);
}

int32_t k_shellcompletion_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KShellCompletion_QBaseMetacall((KShellCompletion*)self, param1, param2, param3);
}

const char* k_shellcompletion_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_make_completion(void* self, const char* text) {
    libqt_string _str = KShellCompletion_MakeCompletion((KShellCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_on_make_completion(void* self, const char* (*callback)(void*, const char*)) {
    KShellCompletion_OnMakeCompletion((KShellCompletion*)self, (intptr_t)callback);
}

const char* k_shellcompletion_qbase_make_completion(void* self, const char* text) {
    libqt_string _str = KShellCompletion_QBaseMakeCompletion((KShellCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_post_process_matches(void* self, const char* matches[static 1]) {
    size_t matches_len = libqt_strv_length(matches);
    libqt_string* matches_qstr = (libqt_string*)malloc(matches_len * sizeof(libqt_string));
    if (matches_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_post_process_matches");
        abort();
    }
    for (size_t i = 0; i < matches_len; ++i) {
        matches_qstr[i] = qstring(matches[i]);
    }
    libqt_list matches_list = qlist(matches_qstr, matches_len);
    KShellCompletion_PostProcessMatches((KShellCompletion*)self, matches_list);
    free(matches_qstr);
}

void k_shellcompletion_on_post_process_matches(void* self, void (*callback)(void*, const char**)) {
    KShellCompletion_OnPostProcessMatches((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_qbase_post_process_matches(void* self, const char* matches[static 1]) {
    size_t matches_len = libqt_strv_length(matches);
    libqt_string* matches_qstr = (libqt_string*)malloc(matches_len * sizeof(libqt_string));
    if (matches_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_post_process_matches");
        abort();
    }
    for (size_t i = 0; i < matches_len; ++i) {
        matches_qstr[i] = qstring(matches[i]);
    }
    libqt_list matches_list = qlist(matches_qstr, matches_len);
    KShellCompletion_QBasePostProcessMatches((KShellCompletion*)self, matches_list);
}

void k_shellcompletion_post_process_matches2(void* self, void* matches) {
    KShellCompletion_PostProcessMatches2((KShellCompletion*)self, (KCompletionMatches*)matches);
}

void k_shellcompletion_on_post_process_matches2(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnPostProcessMatches2((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_qbase_post_process_matches2(void* self, void* matches) {
    KShellCompletion_QBasePostProcessMatches2((KShellCompletion*)self, (KCompletionMatches*)matches);
}

const char* k_shellcompletion_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_replaced_path(void* self, const char* text) {
    libqt_string _str = KUrlCompletion_ReplacedPath((KUrlCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_replaced_path2(const char* text, bool replaceHome) {
    libqt_string _str = KUrlCompletion_ReplacedPath2(qstring(text), replaceHome);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_set_mime_type_filters(void* self, const char* mimeTypes[static 1]) {
    size_t mimeTypes_len = libqt_strv_length(mimeTypes);
    libqt_string* mimeTypes_qstr = (libqt_string*)malloc(mimeTypes_len * sizeof(libqt_string));
    if (mimeTypes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_set_mime_type_filters");
        abort();
    }
    for (size_t i = 0; i < mimeTypes_len; ++i) {
        mimeTypes_qstr[i] = qstring(mimeTypes[i]);
    }
    libqt_list mimeTypes_list = qlist(mimeTypes_qstr, mimeTypes_len);
    KUrlCompletion_SetMimeTypeFilters((KUrlCompletion*)self, mimeTypes_list);
    free(mimeTypes_qstr);
}

const char** k_shellcompletion_mime_type_filters(void* self) {
    libqt_list _arr = KUrlCompletion_MimeTypeFilters((KUrlCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_mime_type_filters");
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

const char* k_shellcompletion_replaced_path3(const char* text, bool replaceHome, bool replaceEnv) {
    libqt_string _str = KUrlCompletion_ReplacedPath3(qstring(text), replaceHome, replaceEnv);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_shellcompletion_substring_completion(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_SubstringCompletion((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_substring_completion");
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

const char** k_shellcompletion_items(void* self) {
    libqt_list _arr = KCompletion_Items((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_items");
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

bool k_shellcompletion_is_empty(void* self) {
    return KCompletion_IsEmpty((KCompletion*)self);
}

int32_t k_shellcompletion_completion_mode(void* self) {
    return KCompletion_CompletionMode((KCompletion*)self);
}

int32_t k_shellcompletion_order(void* self) {
    return KCompletion_Order((KCompletion*)self);
}

bool k_shellcompletion_ignore_case(void* self) {
    return KCompletion_IgnoreCase((KCompletion*)self);
}

bool k_shellcompletion_should_auto_suggest(void* self) {
    return KCompletion_ShouldAutoSuggest((KCompletion*)self);
}

const char** k_shellcompletion_all_matches(void* self) {
    libqt_list _arr = KCompletion_AllMatches((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_all_matches");
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

const char** k_shellcompletion_all_matches2(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_AllMatches2((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_all_matches2");
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

KCompletionMatches* k_shellcompletion_all_weighted_matches(void* self) {
    return KCompletion_AllWeightedMatches((KCompletion*)self);
}

KCompletionMatches* k_shellcompletion_all_weighted_matches2(void* self, const char* stringVal) {
    return KCompletion_AllWeightedMatches2((KCompletion*)self, qstring(stringVal));
}

bool k_shellcompletion_sounds_enabled(void* self) {
    return KCompletion_SoundsEnabled((KCompletion*)self);
}

bool k_shellcompletion_has_multiple_matches(void* self) {
    return KCompletion_HasMultipleMatches((KCompletion*)self);
}

const char* k_shellcompletion_previous_match(void* self) {
    libqt_string _str = KCompletion_PreviousMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_next_match(void* self) {
    libqt_string _str = KCompletion_NextMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_insert_items(void* self, const char* items[static 1]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_insert_items");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletion_InsertItems((KCompletion*)self, items_list);
    free(items_qstr);
}

void k_shellcompletion_add_item(void* self, const char* item) {
    KCompletion_AddItem((KCompletion*)self, qstring(item));
}

void k_shellcompletion_add_item2(void* self, const char* item, uint32_t weight) {
    KCompletion_AddItem2((KCompletion*)self, qstring(item), weight);
}

void k_shellcompletion_remove_item(void* self, const char* item) {
    KCompletion_RemoveItem((KCompletion*)self, qstring(item));
}

void k_shellcompletion_match(void* self, const char* item) {
    KCompletion_Match((KCompletion*)self, qstring(item));
}

void k_shellcompletion_on_match(void* self, void (*callback)(void*, const char*)) {
    KCompletion_Connect_Match((KCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_matches(void* self, const char* matchlist[static 1]) {
    size_t matchlist_len = libqt_strv_length(matchlist);
    libqt_string* matchlist_qstr = (libqt_string*)malloc(matchlist_len * sizeof(libqt_string));
    if (matchlist_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_matches");
        abort();
    }
    for (size_t i = 0; i < matchlist_len; ++i) {
        matchlist_qstr[i] = qstring(matchlist[i]);
    }
    libqt_list matchlist_list = qlist(matchlist_qstr, matchlist_len);
    KCompletion_Matches((KCompletion*)self, matchlist_list);
    free(matchlist_qstr);
}

void k_shellcompletion_on_matches(void* self, void (*callback)(void*, const char**)) {
    KCompletion_Connect_Matches((KCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_multiple_matches(void* self) {
    KCompletion_MultipleMatches((KCompletion*)self);
}

void k_shellcompletion_on_multiple_matches(void* self, void (*callback)(void*)) {
    KCompletion_Connect_MultipleMatches((KCompletion*)self, (intptr_t)callback);
}

const char* k_shellcompletion_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_shellcompletion_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_shellcompletion_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_shellcompletion_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_shellcompletion_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_shellcompletion_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_shellcompletion_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_shellcompletion_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_shellcompletion_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_shellcompletion_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_shellcompletion_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_shellcompletion_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_shellcompletion_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_shellcompletion_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_shellcompletion_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_shellcompletion_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_shellcompletion_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_shellcompletion_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_shellcompletion_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_shellcompletion_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_shellcompletion_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_shellcompletion_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_shellcompletion_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_shellcompletion_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_dynamic_property_names");
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

QBindingStorage* k_shellcompletion_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_shellcompletion_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_shellcompletion_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_shellcompletion_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_shellcompletion_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_shellcompletion_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_shellcompletion_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_shellcompletion_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_shellcompletion_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_shellcompletion_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_shellcompletion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_shellcompletion_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_shellcompletion_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_shellcompletion_set_dir(void* self, void* dir) {
    KShellCompletion_SetDir((KShellCompletion*)self, (QUrl*)dir);
}

void k_shellcompletion_qbase_set_dir(void* self, void* dir) {
    KShellCompletion_QBaseSetDir((KShellCompletion*)self, (QUrl*)dir);
}

void k_shellcompletion_on_set_dir(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnSetDir((KShellCompletion*)self, (intptr_t)callback);
}

QUrl* k_shellcompletion_dir(void* self) {
    return KShellCompletion_Dir((KShellCompletion*)self);
}

QUrl* k_shellcompletion_qbase_dir(void* self) {
    return KShellCompletion_QBaseDir((KShellCompletion*)self);
}

void k_shellcompletion_on_dir(void* self, QUrl* (*callback)()) {
    KShellCompletion_OnDir((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_is_running(void* self) {
    return KShellCompletion_IsRunning((KShellCompletion*)self);
}

bool k_shellcompletion_qbase_is_running(void* self) {
    return KShellCompletion_QBaseIsRunning((KShellCompletion*)self);
}

void k_shellcompletion_on_is_running(void* self, bool (*callback)()) {
    KShellCompletion_OnIsRunning((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_stop(void* self) {
    KShellCompletion_Stop((KShellCompletion*)self);
}

void k_shellcompletion_qbase_stop(void* self) {
    KShellCompletion_QBaseStop((KShellCompletion*)self);
}

void k_shellcompletion_on_stop(void* self, void (*callback)()) {
    KShellCompletion_OnStop((KShellCompletion*)self, (intptr_t)callback);
}

int32_t k_shellcompletion_mode(void* self) {
    return KShellCompletion_Mode((KShellCompletion*)self);
}

int32_t k_shellcompletion_qbase_mode(void* self) {
    return KShellCompletion_QBaseMode((KShellCompletion*)self);
}

void k_shellcompletion_on_mode(void* self, int32_t (*callback)()) {
    KShellCompletion_OnMode((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_mode(void* self, int32_t mode) {
    KShellCompletion_SetMode((KShellCompletion*)self, mode);
}

void k_shellcompletion_qbase_set_mode(void* self, int32_t mode) {
    KShellCompletion_QBaseSetMode((KShellCompletion*)self, mode);
}

void k_shellcompletion_on_set_mode(void* self, void (*callback)(void*, int32_t)) {
    KShellCompletion_OnSetMode((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_replace_env(void* self) {
    return KShellCompletion_ReplaceEnv((KShellCompletion*)self);
}

bool k_shellcompletion_qbase_replace_env(void* self) {
    return KShellCompletion_QBaseReplaceEnv((KShellCompletion*)self);
}

void k_shellcompletion_on_replace_env(void* self, bool (*callback)()) {
    KShellCompletion_OnReplaceEnv((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_replace_env(void* self, bool replace) {
    KShellCompletion_SetReplaceEnv((KShellCompletion*)self, replace);
}

void k_shellcompletion_qbase_set_replace_env(void* self, bool replace) {
    KShellCompletion_QBaseSetReplaceEnv((KShellCompletion*)self, replace);
}

void k_shellcompletion_on_set_replace_env(void* self, void (*callback)(void*, bool)) {
    KShellCompletion_OnSetReplaceEnv((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_replace_home(void* self) {
    return KShellCompletion_ReplaceHome((KShellCompletion*)self);
}

bool k_shellcompletion_qbase_replace_home(void* self) {
    return KShellCompletion_QBaseReplaceHome((KShellCompletion*)self);
}

void k_shellcompletion_on_replace_home(void* self, bool (*callback)()) {
    KShellCompletion_OnReplaceHome((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_replace_home(void* self, bool replace) {
    KShellCompletion_SetReplaceHome((KShellCompletion*)self, replace);
}

void k_shellcompletion_qbase_set_replace_home(void* self, bool replace) {
    KShellCompletion_QBaseSetReplaceHome((KShellCompletion*)self, replace);
}

void k_shellcompletion_on_set_replace_home(void* self, void (*callback)(void*, bool)) {
    KShellCompletion_OnSetReplaceHome((KShellCompletion*)self, (intptr_t)callback);
}

const char* k_shellcompletion_last_match(void* self) {
    libqt_string _str = KShellCompletion_LastMatch((KShellCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_shellcompletion_qbase_last_match(void* self) {
    libqt_string _str = KShellCompletion_QBaseLastMatch((KShellCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_shellcompletion_on_last_match(void* self, const char* (*callback)()) {
    KShellCompletion_OnLastMatch((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_completion_mode(void* self, int32_t mode) {
    KShellCompletion_SetCompletionMode((KShellCompletion*)self, mode);
}

void k_shellcompletion_qbase_set_completion_mode(void* self, int32_t mode) {
    KShellCompletion_QBaseSetCompletionMode((KShellCompletion*)self, mode);
}

void k_shellcompletion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KShellCompletion_OnSetCompletionMode((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_order(void* self, int32_t order) {
    KShellCompletion_SetOrder((KShellCompletion*)self, order);
}

void k_shellcompletion_qbase_set_order(void* self, int32_t order) {
    KShellCompletion_QBaseSetOrder((KShellCompletion*)self, order);
}

void k_shellcompletion_on_set_order(void* self, void (*callback)(void*, int32_t)) {
    KShellCompletion_OnSetOrder((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_ignore_case(void* self, bool ignoreCase) {
    KShellCompletion_SetIgnoreCase((KShellCompletion*)self, ignoreCase);
}

void k_shellcompletion_qbase_set_ignore_case(void* self, bool ignoreCase) {
    KShellCompletion_QBaseSetIgnoreCase((KShellCompletion*)self, ignoreCase);
}

void k_shellcompletion_on_set_ignore_case(void* self, void (*callback)(void*, bool)) {
    KShellCompletion_OnSetIgnoreCase((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_sounds_enabled(void* self, bool enable) {
    KShellCompletion_SetSoundsEnabled((KShellCompletion*)self, enable);
}

void k_shellcompletion_qbase_set_sounds_enabled(void* self, bool enable) {
    KShellCompletion_QBaseSetSoundsEnabled((KShellCompletion*)self, enable);
}

void k_shellcompletion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool)) {
    KShellCompletion_OnSetSoundsEnabled((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_items(void* self, const char* itemList[static 1]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_set_items");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KShellCompletion_SetItems((KShellCompletion*)self, itemList_list);
    free(itemList_qstr);
}

void k_shellcompletion_qbase_set_items(void* self, const char* itemList[static 1]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_shellcompletion_set_items");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KShellCompletion_QBaseSetItems((KShellCompletion*)self, itemList_list);
    free(itemList_qstr);
}

void k_shellcompletion_on_set_items(void* self, void (*callback)(void*, const char**)) {
    KShellCompletion_OnSetItems((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_clear(void* self) {
    KShellCompletion_Clear((KShellCompletion*)self);
}

void k_shellcompletion_qbase_clear(void* self) {
    KShellCompletion_QBaseClear((KShellCompletion*)self);
}

void k_shellcompletion_on_clear(void* self, void (*callback)()) {
    KShellCompletion_OnClear((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_event(void* self, void* event) {
    return KShellCompletion_Event((KShellCompletion*)self, (QEvent*)event);
}

bool k_shellcompletion_qbase_event(void* self, void* event) {
    return KShellCompletion_QBaseEvent((KShellCompletion*)self, (QEvent*)event);
}

void k_shellcompletion_on_event(void* self, bool (*callback)(void*, void*)) {
    KShellCompletion_OnEvent((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_event_filter(void* self, void* watched, void* event) {
    return KShellCompletion_EventFilter((KShellCompletion*)self, (QObject*)watched, (QEvent*)event);
}

bool k_shellcompletion_qbase_event_filter(void* self, void* watched, void* event) {
    return KShellCompletion_QBaseEventFilter((KShellCompletion*)self, (QObject*)watched, (QEvent*)event);
}

void k_shellcompletion_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KShellCompletion_OnEventFilter((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_timer_event(void* self, void* event) {
    KShellCompletion_TimerEvent((KShellCompletion*)self, (QTimerEvent*)event);
}

void k_shellcompletion_qbase_timer_event(void* self, void* event) {
    KShellCompletion_QBaseTimerEvent((KShellCompletion*)self, (QTimerEvent*)event);
}

void k_shellcompletion_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnTimerEvent((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_child_event(void* self, void* event) {
    KShellCompletion_ChildEvent((KShellCompletion*)self, (QChildEvent*)event);
}

void k_shellcompletion_qbase_child_event(void* self, void* event) {
    KShellCompletion_QBaseChildEvent((KShellCompletion*)self, (QChildEvent*)event);
}

void k_shellcompletion_on_child_event(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnChildEvent((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_custom_event(void* self, void* event) {
    KShellCompletion_CustomEvent((KShellCompletion*)self, (QEvent*)event);
}

void k_shellcompletion_qbase_custom_event(void* self, void* event) {
    KShellCompletion_QBaseCustomEvent((KShellCompletion*)self, (QEvent*)event);
}

void k_shellcompletion_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnCustomEvent((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_connect_notify(void* self, void* signal) {
    KShellCompletion_ConnectNotify((KShellCompletion*)self, (QMetaMethod*)signal);
}

void k_shellcompletion_qbase_connect_notify(void* self, void* signal) {
    KShellCompletion_QBaseConnectNotify((KShellCompletion*)self, (QMetaMethod*)signal);
}

void k_shellcompletion_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnConnectNotify((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_disconnect_notify(void* self, void* signal) {
    KShellCompletion_DisconnectNotify((KShellCompletion*)self, (QMetaMethod*)signal);
}

void k_shellcompletion_qbase_disconnect_notify(void* self, void* signal) {
    KShellCompletion_QBaseDisconnectNotify((KShellCompletion*)self, (QMetaMethod*)signal);
}

void k_shellcompletion_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KShellCompletion_OnDisconnectNotify((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KShellCompletion_SetShouldAutoSuggest((KShellCompletion*)self, shouldAutosuggest);
}

void k_shellcompletion_qbase_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KShellCompletion_QBaseSetShouldAutoSuggest((KShellCompletion*)self, shouldAutosuggest);
}

void k_shellcompletion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool)) {
    KShellCompletion_OnSetShouldAutoSuggest((KShellCompletion*)self, (intptr_t)callback);
}

QObject* k_shellcompletion_sender(void* self) {
    return KShellCompletion_Sender((KShellCompletion*)self);
}

QObject* k_shellcompletion_qbase_sender(void* self) {
    return KShellCompletion_QBaseSender((KShellCompletion*)self);
}

void k_shellcompletion_on_sender(void* self, QObject* (*callback)()) {
    KShellCompletion_OnSender((KShellCompletion*)self, (intptr_t)callback);
}

int32_t k_shellcompletion_sender_signal_index(void* self) {
    return KShellCompletion_SenderSignalIndex((KShellCompletion*)self);
}

int32_t k_shellcompletion_qbase_sender_signal_index(void* self) {
    return KShellCompletion_QBaseSenderSignalIndex((KShellCompletion*)self);
}

void k_shellcompletion_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KShellCompletion_OnSenderSignalIndex((KShellCompletion*)self, (intptr_t)callback);
}

int32_t k_shellcompletion_receivers(void* self, const char* signal) {
    return KShellCompletion_Receivers((KShellCompletion*)self, signal);
}

int32_t k_shellcompletion_qbase_receivers(void* self, const char* signal) {
    return KShellCompletion_QBaseReceivers((KShellCompletion*)self, signal);
}

void k_shellcompletion_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KShellCompletion_OnReceivers((KShellCompletion*)self, (intptr_t)callback);
}

bool k_shellcompletion_is_signal_connected(void* self, void* signal) {
    return KShellCompletion_IsSignalConnected((KShellCompletion*)self, (QMetaMethod*)signal);
}

bool k_shellcompletion_qbase_is_signal_connected(void* self, void* signal) {
    return KShellCompletion_QBaseIsSignalConnected((KShellCompletion*)self, (QMetaMethod*)signal);
}

void k_shellcompletion_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KShellCompletion_OnIsSignalConnected((KShellCompletion*)self, (intptr_t)callback);
}

void k_shellcompletion_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_shellcompletion_delete(void* self) {
    KShellCompletion_Delete((KShellCompletion*)(self));
}
