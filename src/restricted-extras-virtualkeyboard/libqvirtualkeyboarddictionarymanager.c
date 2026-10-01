#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvirtualkeyboarddictionary.hpp"
#include "libqvirtualkeyboarddictionarymanager.hpp"
#include "libqvirtualkeyboarddictionarymanager.h"

const QMetaObject* q_virtualkeyboarddictionarymanager_meta_object(const void* self) {
    return QVirtualKeyboardDictionaryManager_MetaObject((QVirtualKeyboardDictionaryManager*)self);
}

void* q_virtualkeyboarddictionarymanager_metacast(void* self, const char* param1) {
    return QVirtualKeyboardDictionaryManager_Metacast((QVirtualKeyboardDictionaryManager*)self, param1);
}

int32_t q_virtualkeyboarddictionarymanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVirtualKeyboardDictionaryManager_Metacall((QVirtualKeyboardDictionaryManager*)self, param1, param2, param3);
}

const char* q_virtualkeyboarddictionarymanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVirtualKeyboardDictionaryManager* q_virtualkeyboarddictionarymanager_instance() {
    return QVirtualKeyboardDictionaryManager_Instance();
}

const char** q_virtualkeyboarddictionarymanager_available_dictionaries(const void* self) {
    libqt_list _arr = QVirtualKeyboardDictionaryManager_AvailableDictionaries((QVirtualKeyboardDictionaryManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_available_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char** q_virtualkeyboarddictionarymanager_base_dictionaries(const void* self) {
    libqt_list _arr = QVirtualKeyboardDictionaryManager_BaseDictionaries((QVirtualKeyboardDictionaryManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_base_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_virtualkeyboarddictionarymanager_set_base_dictionaries(void* self, const char* baseDictionaries[static 1]) {
    size_t baseDictionaries_len = libqt_strv_length(baseDictionaries);
    libqt_string* baseDictionaries_qstr = (libqt_string*)malloc(baseDictionaries_len * sizeof(libqt_string));
    if (baseDictionaries_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_set_base_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < baseDictionaries_len; ++i)
        baseDictionaries_qstr[i] = qstring(baseDictionaries[i]);
    libqt_list baseDictionaries_list = qlist(baseDictionaries_qstr, baseDictionaries_len);
    QVirtualKeyboardDictionaryManager_SetBaseDictionaries((QVirtualKeyboardDictionaryManager*)self, baseDictionaries_list);
    free(baseDictionaries_qstr);
}

const char** q_virtualkeyboarddictionarymanager_extra_dictionaries(const void* self) {
    libqt_list _arr = QVirtualKeyboardDictionaryManager_ExtraDictionaries((QVirtualKeyboardDictionaryManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_extra_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_virtualkeyboarddictionarymanager_set_extra_dictionaries(void* self, const char* extraDictionaries[static 1]) {
    size_t extraDictionaries_len = libqt_strv_length(extraDictionaries);
    libqt_string* extraDictionaries_qstr = (libqt_string*)malloc(extraDictionaries_len * sizeof(libqt_string));
    if (extraDictionaries_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_set_extra_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < extraDictionaries_len; ++i)
        extraDictionaries_qstr[i] = qstring(extraDictionaries[i]);
    libqt_list extraDictionaries_list = qlist(extraDictionaries_qstr, extraDictionaries_len);
    QVirtualKeyboardDictionaryManager_SetExtraDictionaries((QVirtualKeyboardDictionaryManager*)self, extraDictionaries_list);
    free(extraDictionaries_qstr);
}

const char** q_virtualkeyboarddictionarymanager_active_dictionaries(const void* self) {
    libqt_list _arr = QVirtualKeyboardDictionaryManager_ActiveDictionaries((QVirtualKeyboardDictionaryManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_active_dictionaries\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QVirtualKeyboardDictionary* q_virtualkeyboarddictionarymanager_create_dictionary(void* self, const char* name) {
    return QVirtualKeyboardDictionaryManager_CreateDictionary((QVirtualKeyboardDictionaryManager*)self, qstring(name));
}

QVirtualKeyboardDictionary* q_virtualkeyboarddictionarymanager_dictionary(const void* self, const char* name) {
    return QVirtualKeyboardDictionaryManager_Dictionary((QVirtualKeyboardDictionaryManager*)self, qstring(name));
}

void q_virtualkeyboarddictionarymanager_available_dictionaries_changed(void* self) {
    QVirtualKeyboardDictionaryManager_AvailableDictionariesChanged((QVirtualKeyboardDictionaryManager*)self);
}

void q_virtualkeyboarddictionarymanager_on_available_dictionaries_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardDictionaryManager_Connect_AvailableDictionariesChanged((QVirtualKeyboardDictionaryManager*)self, (intptr_t)callback);
}

void q_virtualkeyboarddictionarymanager_base_dictionaries_changed(void* self) {
    QVirtualKeyboardDictionaryManager_BaseDictionariesChanged((QVirtualKeyboardDictionaryManager*)self);
}

void q_virtualkeyboarddictionarymanager_on_base_dictionaries_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardDictionaryManager_Connect_BaseDictionariesChanged((QVirtualKeyboardDictionaryManager*)self, (intptr_t)callback);
}

void q_virtualkeyboarddictionarymanager_extra_dictionaries_changed(void* self) {
    QVirtualKeyboardDictionaryManager_ExtraDictionariesChanged((QVirtualKeyboardDictionaryManager*)self);
}

void q_virtualkeyboarddictionarymanager_on_extra_dictionaries_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardDictionaryManager_Connect_ExtraDictionariesChanged((QVirtualKeyboardDictionaryManager*)self, (intptr_t)callback);
}

void q_virtualkeyboarddictionarymanager_active_dictionaries_changed(void* self) {
    QVirtualKeyboardDictionaryManager_ActiveDictionariesChanged((QVirtualKeyboardDictionaryManager*)self);
}

void q_virtualkeyboarddictionarymanager_on_active_dictionaries_changed(void* self, void (*callback)(void*)) {
    QVirtualKeyboardDictionaryManager_Connect_ActiveDictionariesChanged((QVirtualKeyboardDictionaryManager*)self, (intptr_t)callback);
}

const char* q_virtualkeyboarddictionarymanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_virtualkeyboarddictionarymanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_virtualkeyboarddictionarymanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_virtualkeyboarddictionarymanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_virtualkeyboarddictionarymanager_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_virtualkeyboarddictionarymanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_virtualkeyboarddictionarymanager_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_virtualkeyboarddictionarymanager_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_virtualkeyboarddictionarymanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_virtualkeyboarddictionarymanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_virtualkeyboarddictionarymanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_virtualkeyboarddictionarymanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_virtualkeyboarddictionarymanager_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_virtualkeyboarddictionarymanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_virtualkeyboarddictionarymanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_virtualkeyboarddictionarymanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_virtualkeyboarddictionarymanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboarddictionarymanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_virtualkeyboarddictionarymanager_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_virtualkeyboarddictionarymanager_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_virtualkeyboarddictionarymanager_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_virtualkeyboarddictionarymanager_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_virtualkeyboarddictionarymanager_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_virtualkeyboarddictionarymanager_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_virtualkeyboarddictionarymanager_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_virtualkeyboarddictionarymanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_virtualkeyboarddictionarymanager_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_virtualkeyboarddictionarymanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_virtualkeyboarddictionarymanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_virtualkeyboarddictionarymanager_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_virtualkeyboarddictionarymanager_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_virtualkeyboarddictionarymanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_virtualkeyboarddictionarymanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_virtualkeyboarddictionarymanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_virtualkeyboarddictionarymanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_virtualkeyboarddictionarymanager_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_virtualkeyboarddictionarymanager_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_virtualkeyboarddictionarymanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_virtualkeyboarddictionarymanager_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_virtualkeyboarddictionarymanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_virtualkeyboarddictionarymanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboarddictionarymanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_virtualkeyboarddictionarymanager_delete(void* self) {
    QVirtualKeyboardDictionaryManager_Delete((QVirtualKeyboardDictionaryManager*)(self));
}
