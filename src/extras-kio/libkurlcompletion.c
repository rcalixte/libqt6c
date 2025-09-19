#include "../extras-kcompletion/libkcompletion.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "libkurlcompletion.hpp"
#include "libkurlcompletion.h"

KUrlCompletion* k_urlcompletion_new() {
    return KUrlCompletion_new();
}

KUrlCompletion* k_urlcompletion_new2(int32_t param1) {
    return KUrlCompletion_new2(param1);
}

const QMetaObject* k_urlcompletion_meta_object(void* self) {
    return KUrlCompletion_MetaObject((KUrlCompletion*)self);
}

void* k_urlcompletion_metacast(void* self, const char* param1) {
    return KUrlCompletion_Metacast((KUrlCompletion*)self, param1);
}

int32_t k_urlcompletion_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlCompletion_Metacall((KUrlCompletion*)self, param1, param2, param3);
}

void k_urlcompletion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KUrlCompletion_OnMetacall((KUrlCompletion*)self, (intptr_t)callback);
}

int32_t k_urlcompletion_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KUrlCompletion_QBaseMetacall((KUrlCompletion*)self, param1, param2, param3);
}

const char* k_urlcompletion_tr(const char* s) {
    libqt_string _str = KUrlCompletion_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_make_completion(void* self, const char* text) {
    libqt_string _str = KUrlCompletion_MakeCompletion((KUrlCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_on_make_completion(void* self, const char* (*callback)(void*, const char*)) {
    KUrlCompletion_OnMakeCompletion((KUrlCompletion*)self, (intptr_t)callback);
}

const char* k_urlcompletion_qbase_make_completion(void* self, const char* text) {
    libqt_string _str = KUrlCompletion_QBaseMakeCompletion((KUrlCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_set_dir(void* self, void* dir) {
    KUrlCompletion_SetDir((KUrlCompletion*)self, (QUrl*)dir);
}

void k_urlcompletion_on_set_dir(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnSetDir((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_set_dir(void* self, void* dir) {
    KUrlCompletion_QBaseSetDir((KUrlCompletion*)self, (QUrl*)dir);
}

QUrl* k_urlcompletion_dir(void* self) {
    return KUrlCompletion_Dir((KUrlCompletion*)self);
}

void k_urlcompletion_on_dir(void* self, QUrl* (*callback)()) {
    KUrlCompletion_OnDir((KUrlCompletion*)self, (intptr_t)callback);
}

QUrl* k_urlcompletion_qbase_dir(void* self) {
    return KUrlCompletion_QBaseDir((KUrlCompletion*)self);
}

bool k_urlcompletion_is_running(void* self) {
    return KUrlCompletion_IsRunning((KUrlCompletion*)self);
}

void k_urlcompletion_on_is_running(void* self, bool (*callback)()) {
    KUrlCompletion_OnIsRunning((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_qbase_is_running(void* self) {
    return KUrlCompletion_QBaseIsRunning((KUrlCompletion*)self);
}

void k_urlcompletion_stop(void* self) {
    KUrlCompletion_Stop((KUrlCompletion*)self);
}

void k_urlcompletion_on_stop(void* self, void (*callback)()) {
    KUrlCompletion_OnStop((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_stop(void* self) {
    KUrlCompletion_QBaseStop((KUrlCompletion*)self);
}

int32_t k_urlcompletion_mode(void* self) {
    return KUrlCompletion_Mode((KUrlCompletion*)self);
}

void k_urlcompletion_on_mode(void* self, int32_t (*callback)()) {
    KUrlCompletion_OnMode((KUrlCompletion*)self, (intptr_t)callback);
}

int32_t k_urlcompletion_qbase_mode(void* self) {
    return KUrlCompletion_QBaseMode((KUrlCompletion*)self);
}

void k_urlcompletion_set_mode(void* self, int32_t mode) {
    KUrlCompletion_SetMode((KUrlCompletion*)self, mode);
}

void k_urlcompletion_on_set_mode(void* self, void (*callback)(void*, int32_t)) {
    KUrlCompletion_OnSetMode((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_set_mode(void* self, int32_t mode) {
    KUrlCompletion_QBaseSetMode((KUrlCompletion*)self, mode);
}

bool k_urlcompletion_replace_env(void* self) {
    return KUrlCompletion_ReplaceEnv((KUrlCompletion*)self);
}

void k_urlcompletion_on_replace_env(void* self, bool (*callback)()) {
    KUrlCompletion_OnReplaceEnv((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_qbase_replace_env(void* self) {
    return KUrlCompletion_QBaseReplaceEnv((KUrlCompletion*)self);
}

void k_urlcompletion_set_replace_env(void* self, bool replace) {
    KUrlCompletion_SetReplaceEnv((KUrlCompletion*)self, replace);
}

void k_urlcompletion_on_set_replace_env(void* self, void (*callback)(void*, bool)) {
    KUrlCompletion_OnSetReplaceEnv((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_set_replace_env(void* self, bool replace) {
    KUrlCompletion_QBaseSetReplaceEnv((KUrlCompletion*)self, replace);
}

bool k_urlcompletion_replace_home(void* self) {
    return KUrlCompletion_ReplaceHome((KUrlCompletion*)self);
}

void k_urlcompletion_on_replace_home(void* self, bool (*callback)()) {
    KUrlCompletion_OnReplaceHome((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_qbase_replace_home(void* self) {
    return KUrlCompletion_QBaseReplaceHome((KUrlCompletion*)self);
}

void k_urlcompletion_set_replace_home(void* self, bool replace) {
    KUrlCompletion_SetReplaceHome((KUrlCompletion*)self, replace);
}

void k_urlcompletion_on_set_replace_home(void* self, void (*callback)(void*, bool)) {
    KUrlCompletion_OnSetReplaceHome((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_set_replace_home(void* self, bool replace) {
    KUrlCompletion_QBaseSetReplaceHome((KUrlCompletion*)self, replace);
}

const char* k_urlcompletion_replaced_path(void* self, const char* text) {
    libqt_string _str = KUrlCompletion_ReplacedPath((KUrlCompletion*)self, qstring(text));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_replaced_path2(const char* text, bool replaceHome) {
    libqt_string _str = KUrlCompletion_ReplacedPath2(qstring(text), replaceHome);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_set_mime_type_filters(void* self, const char* mimeTypes[]) {
    size_t mimeTypes_len = libqt_strv_length(mimeTypes);
    libqt_string* mimeTypes_qstr = (libqt_string*)malloc(mimeTypes_len * sizeof(libqt_string));
    if (mimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_set_mime_type_filters");
        abort();
    }
    for (size_t i = 0; i < mimeTypes_len; ++i) {
        mimeTypes_qstr[i] = qstring(mimeTypes[i]);
    }
    libqt_list mimeTypes_list = qlist(mimeTypes_qstr, mimeTypes_len);
    KUrlCompletion_SetMimeTypeFilters((KUrlCompletion*)self, mimeTypes_list);
    free(mimeTypes_qstr);
}

const char** k_urlcompletion_mime_type_filters(void* self) {
    libqt_list _arr = KUrlCompletion_MimeTypeFilters((KUrlCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_mime_type_filters");
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

void k_urlcompletion_post_process_matches(void* self, const char* matches[]) {
    size_t matches_len = libqt_strv_length(matches);
    libqt_string* matches_qstr = (libqt_string*)malloc(matches_len * sizeof(libqt_string));
    if (matches_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_post_process_matches");
        abort();
    }
    for (size_t i = 0; i < matches_len; ++i) {
        matches_qstr[i] = qstring(matches[i]);
    }
    libqt_list matches_list = qlist(matches_qstr, matches_len);
    KUrlCompletion_PostProcessMatches((KUrlCompletion*)self, matches_list);
    free(matches_qstr);
}

void k_urlcompletion_on_post_process_matches(void* self, void (*callback)(void*, const char**)) {
    KUrlCompletion_OnPostProcessMatches((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_qbase_post_process_matches(void* self, const char* matches[]) {
    size_t matches_len = libqt_strv_length(matches);
    libqt_string* matches_qstr = (libqt_string*)malloc(matches_len * sizeof(libqt_string));
    if (matches_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_post_process_matches");
        abort();
    }
    for (size_t i = 0; i < matches_len; ++i) {
        matches_qstr[i] = qstring(matches[i]);
    }
    libqt_list matches_list = qlist(matches_qstr, matches_len);
    KUrlCompletion_QBasePostProcessMatches((KUrlCompletion*)self, matches_list);
}

const char* k_urlcompletion_tr2(const char* s, const char* c) {
    libqt_string _str = KUrlCompletion_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KUrlCompletion_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_replaced_path3(const char* text, bool replaceHome, bool replaceEnv) {
    libqt_string _str = KUrlCompletion_ReplacedPath3(qstring(text), replaceHome, replaceEnv);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_urlcompletion_substring_completion(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_SubstringCompletion((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_substring_completion");
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

const char** k_urlcompletion_items(void* self) {
    libqt_list _arr = KCompletion_Items((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_items");
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

bool k_urlcompletion_is_empty(void* self) {
    return KCompletion_IsEmpty((KCompletion*)self);
}

int32_t k_urlcompletion_completion_mode(void* self) {
    return KCompletion_CompletionMode((KCompletion*)self);
}

int32_t k_urlcompletion_order(void* self) {
    return KCompletion_Order((KCompletion*)self);
}

bool k_urlcompletion_ignore_case(void* self) {
    return KCompletion_IgnoreCase((KCompletion*)self);
}

bool k_urlcompletion_should_auto_suggest(void* self) {
    return KCompletion_ShouldAutoSuggest((KCompletion*)self);
}

const char** k_urlcompletion_all_matches(void* self) {
    libqt_list _arr = KCompletion_AllMatches((KCompletion*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_all_matches");
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

const char** k_urlcompletion_all_matches2(void* self, const char* stringVal) {
    libqt_list _arr = KCompletion_AllMatches2((KCompletion*)self, qstring(stringVal));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_all_matches2");
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

bool k_urlcompletion_sounds_enabled(void* self) {
    return KCompletion_SoundsEnabled((KCompletion*)self);
}

bool k_urlcompletion_has_multiple_matches(void* self) {
    return KCompletion_HasMultipleMatches((KCompletion*)self);
}

const char* k_urlcompletion_previous_match(void* self) {
    libqt_string _str = KCompletion_PreviousMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_next_match(void* self) {
    libqt_string _str = KCompletion_NextMatch((KCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_insert_items(void* self, const char* items[]) {
    size_t items_len = libqt_strv_length(items);
    libqt_string* items_qstr = (libqt_string*)malloc(items_len * sizeof(libqt_string));
    if (items_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_insert_items");
        abort();
    }
    for (size_t i = 0; i < items_len; ++i) {
        items_qstr[i] = qstring(items[i]);
    }
    libqt_list items_list = qlist(items_qstr, items_len);
    KCompletion_InsertItems((KCompletion*)self, items_list);
    free(items_qstr);
}

void k_urlcompletion_add_item(void* self, const char* item) {
    KCompletion_AddItem((KCompletion*)self, qstring(item));
}

void k_urlcompletion_add_item2(void* self, const char* item, uint32_t weight) {
    KCompletion_AddItem2((KCompletion*)self, qstring(item), weight);
}

void k_urlcompletion_remove_item(void* self, const char* item) {
    KCompletion_RemoveItem((KCompletion*)self, qstring(item));
}

void k_urlcompletion_match(void* self, const char* item) {
    KCompletion_Match((KCompletion*)self, qstring(item));
}

void k_urlcompletion_on_match(void* self, void (*callback)(void*, const char*)) {
    KCompletion_Connect_Match((KCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_matches(void* self, const char* matchlist[]) {
    size_t matchlist_len = libqt_strv_length(matchlist);
    libqt_string* matchlist_qstr = (libqt_string*)malloc(matchlist_len * sizeof(libqt_string));
    if (matchlist_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_matches");
        abort();
    }
    for (size_t i = 0; i < matchlist_len; ++i) {
        matchlist_qstr[i] = qstring(matchlist[i]);
    }
    libqt_list matchlist_list = qlist(matchlist_qstr, matchlist_len);
    KCompletion_Matches((KCompletion*)self, matchlist_list);
    free(matchlist_qstr);
}

void k_urlcompletion_on_matches(void* self, void (*callback)(void*, const char**)) {
    KCompletion_Connect_Matches((KCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_multiple_matches(void* self) {
    KCompletion_MultipleMatches((KCompletion*)self);
}

void k_urlcompletion_on_multiple_matches(void* self, void (*callback)(void*)) {
    KCompletion_Connect_MultipleMatches((KCompletion*)self, (intptr_t)callback);
}

const char* k_urlcompletion_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_urlcompletion_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_urlcompletion_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_urlcompletion_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_urlcompletion_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_urlcompletion_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_urlcompletion_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_urlcompletion_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_urlcompletion_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_urlcompletion_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_urlcompletion_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_urlcompletion_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_urlcompletion_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_urlcompletion_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_urlcompletion_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_urlcompletion_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_urlcompletion_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_urlcompletion_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_urlcompletion_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_urlcompletion_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_urlcompletion_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_urlcompletion_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_urlcompletion_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_urlcompletion_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_dynamic_property_names");
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

QBindingStorage* k_urlcompletion_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_urlcompletion_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_urlcompletion_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_urlcompletion_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_urlcompletion_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_urlcompletion_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_urlcompletion_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_urlcompletion_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_urlcompletion_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_urlcompletion_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_urlcompletion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_urlcompletion_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_urlcompletion_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const char* k_urlcompletion_last_match(void* self) {
    libqt_string _str = KUrlCompletion_LastMatch((KUrlCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_urlcompletion_qbase_last_match(void* self) {
    libqt_string _str = KUrlCompletion_QBaseLastMatch((KUrlCompletion*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_urlcompletion_on_last_match(void* self, const char* (*callback)()) {
    KUrlCompletion_OnLastMatch((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_completion_mode(void* self, int32_t mode) {
    KUrlCompletion_SetCompletionMode((KUrlCompletion*)self, mode);
}

void k_urlcompletion_qbase_set_completion_mode(void* self, int32_t mode) {
    KUrlCompletion_QBaseSetCompletionMode((KUrlCompletion*)self, mode);
}

void k_urlcompletion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t)) {
    KUrlCompletion_OnSetCompletionMode((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_order(void* self, int32_t order) {
    KUrlCompletion_SetOrder((KUrlCompletion*)self, order);
}

void k_urlcompletion_qbase_set_order(void* self, int32_t order) {
    KUrlCompletion_QBaseSetOrder((KUrlCompletion*)self, order);
}

void k_urlcompletion_on_set_order(void* self, void (*callback)(void*, int32_t)) {
    KUrlCompletion_OnSetOrder((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_ignore_case(void* self, bool ignoreCase) {
    KUrlCompletion_SetIgnoreCase((KUrlCompletion*)self, ignoreCase);
}

void k_urlcompletion_qbase_set_ignore_case(void* self, bool ignoreCase) {
    KUrlCompletion_QBaseSetIgnoreCase((KUrlCompletion*)self, ignoreCase);
}

void k_urlcompletion_on_set_ignore_case(void* self, void (*callback)(void*, bool)) {
    KUrlCompletion_OnSetIgnoreCase((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_sounds_enabled(void* self, bool enable) {
    KUrlCompletion_SetSoundsEnabled((KUrlCompletion*)self, enable);
}

void k_urlcompletion_qbase_set_sounds_enabled(void* self, bool enable) {
    KUrlCompletion_QBaseSetSoundsEnabled((KUrlCompletion*)self, enable);
}

void k_urlcompletion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool)) {
    KUrlCompletion_OnSetSoundsEnabled((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_items(void* self, const char* itemList[]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_set_items");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KUrlCompletion_SetItems((KUrlCompletion*)self, itemList_list);
    free(itemList_qstr);
}

void k_urlcompletion_qbase_set_items(void* self, const char* itemList[]) {
    size_t itemList_len = libqt_strv_length(itemList);
    libqt_string* itemList_qstr = (libqt_string*)malloc(itemList_len * sizeof(libqt_string));
    if (itemList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_urlcompletion_set_items");
        abort();
    }
    for (size_t i = 0; i < itemList_len; ++i) {
        itemList_qstr[i] = qstring(itemList[i]);
    }
    libqt_list itemList_list = qlist(itemList_qstr, itemList_len);
    KUrlCompletion_QBaseSetItems((KUrlCompletion*)self, itemList_list);
}

void k_urlcompletion_on_set_items(void* self, void (*callback)(void*, const char**)) {
    KUrlCompletion_OnSetItems((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_clear(void* self) {
    KUrlCompletion_Clear((KUrlCompletion*)self);
}

void k_urlcompletion_qbase_clear(void* self) {
    KUrlCompletion_QBaseClear((KUrlCompletion*)self);
}

void k_urlcompletion_on_clear(void* self, void (*callback)()) {
    KUrlCompletion_OnClear((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_event(void* self, void* event) {
    return KUrlCompletion_Event((KUrlCompletion*)self, (QEvent*)event);
}

bool k_urlcompletion_qbase_event(void* self, void* event) {
    return KUrlCompletion_QBaseEvent((KUrlCompletion*)self, (QEvent*)event);
}

void k_urlcompletion_on_event(void* self, bool (*callback)(void*, void*)) {
    KUrlCompletion_OnEvent((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_event_filter(void* self, void* watched, void* event) {
    return KUrlCompletion_EventFilter((KUrlCompletion*)self, (QObject*)watched, (QEvent*)event);
}

bool k_urlcompletion_qbase_event_filter(void* self, void* watched, void* event) {
    return KUrlCompletion_QBaseEventFilter((KUrlCompletion*)self, (QObject*)watched, (QEvent*)event);
}

void k_urlcompletion_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KUrlCompletion_OnEventFilter((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_timer_event(void* self, void* event) {
    KUrlCompletion_TimerEvent((KUrlCompletion*)self, (QTimerEvent*)event);
}

void k_urlcompletion_qbase_timer_event(void* self, void* event) {
    KUrlCompletion_QBaseTimerEvent((KUrlCompletion*)self, (QTimerEvent*)event);
}

void k_urlcompletion_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnTimerEvent((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_child_event(void* self, void* event) {
    KUrlCompletion_ChildEvent((KUrlCompletion*)self, (QChildEvent*)event);
}

void k_urlcompletion_qbase_child_event(void* self, void* event) {
    KUrlCompletion_QBaseChildEvent((KUrlCompletion*)self, (QChildEvent*)event);
}

void k_urlcompletion_on_child_event(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnChildEvent((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_custom_event(void* self, void* event) {
    KUrlCompletion_CustomEvent((KUrlCompletion*)self, (QEvent*)event);
}

void k_urlcompletion_qbase_custom_event(void* self, void* event) {
    KUrlCompletion_QBaseCustomEvent((KUrlCompletion*)self, (QEvent*)event);
}

void k_urlcompletion_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnCustomEvent((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_connect_notify(void* self, void* signal) {
    KUrlCompletion_ConnectNotify((KUrlCompletion*)self, (QMetaMethod*)signal);
}

void k_urlcompletion_qbase_connect_notify(void* self, void* signal) {
    KUrlCompletion_QBaseConnectNotify((KUrlCompletion*)self, (QMetaMethod*)signal);
}

void k_urlcompletion_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnConnectNotify((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_disconnect_notify(void* self, void* signal) {
    KUrlCompletion_DisconnectNotify((KUrlCompletion*)self, (QMetaMethod*)signal);
}

void k_urlcompletion_qbase_disconnect_notify(void* self, void* signal) {
    KUrlCompletion_QBaseDisconnectNotify((KUrlCompletion*)self, (QMetaMethod*)signal);
}

void k_urlcompletion_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KUrlCompletion_OnDisconnectNotify((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KUrlCompletion_SetShouldAutoSuggest((KUrlCompletion*)self, shouldAutosuggest);
}

void k_urlcompletion_qbase_set_should_auto_suggest(void* self, bool shouldAutosuggest) {
    KUrlCompletion_QBaseSetShouldAutoSuggest((KUrlCompletion*)self, shouldAutosuggest);
}

void k_urlcompletion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool)) {
    KUrlCompletion_OnSetShouldAutoSuggest((KUrlCompletion*)self, (intptr_t)callback);
}

QObject* k_urlcompletion_sender(void* self) {
    return KUrlCompletion_Sender((KUrlCompletion*)self);
}

QObject* k_urlcompletion_qbase_sender(void* self) {
    return KUrlCompletion_QBaseSender((KUrlCompletion*)self);
}

void k_urlcompletion_on_sender(void* self, QObject* (*callback)()) {
    KUrlCompletion_OnSender((KUrlCompletion*)self, (intptr_t)callback);
}

int32_t k_urlcompletion_sender_signal_index(void* self) {
    return KUrlCompletion_SenderSignalIndex((KUrlCompletion*)self);
}

int32_t k_urlcompletion_qbase_sender_signal_index(void* self) {
    return KUrlCompletion_QBaseSenderSignalIndex((KUrlCompletion*)self);
}

void k_urlcompletion_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KUrlCompletion_OnSenderSignalIndex((KUrlCompletion*)self, (intptr_t)callback);
}

int32_t k_urlcompletion_receivers(void* self, const char* signal) {
    return KUrlCompletion_Receivers((KUrlCompletion*)self, signal);
}

int32_t k_urlcompletion_qbase_receivers(void* self, const char* signal) {
    return KUrlCompletion_QBaseReceivers((KUrlCompletion*)self, signal);
}

void k_urlcompletion_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KUrlCompletion_OnReceivers((KUrlCompletion*)self, (intptr_t)callback);
}

bool k_urlcompletion_is_signal_connected(void* self, void* signal) {
    return KUrlCompletion_IsSignalConnected((KUrlCompletion*)self, (QMetaMethod*)signal);
}

bool k_urlcompletion_qbase_is_signal_connected(void* self, void* signal) {
    return KUrlCompletion_QBaseIsSignalConnected((KUrlCompletion*)self, (QMetaMethod*)signal);
}

void k_urlcompletion_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KUrlCompletion_OnIsSignalConnected((KUrlCompletion*)self, (intptr_t)callback);
}

void k_urlcompletion_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_urlcompletion_delete(void* self) {
    KUrlCompletion_Delete((KUrlCompletion*)(self));
}
