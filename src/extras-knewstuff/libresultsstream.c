#include "libentry.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libresultsstream.hpp"
#include "libresultsstream.h"

const QMetaObject* k_nscore__resultsstream_meta_object(void* self) {
    return KNSCore__ResultsStream_MetaObject((KNSCore__ResultsStream*)self);
}

void* k_nscore__resultsstream_metacast(void* self, const char* param1) {
    return KNSCore__ResultsStream_Metacast((KNSCore__ResultsStream*)self, param1);
}

int32_t k_nscore__resultsstream_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__ResultsStream_Metacall((KNSCore__ResultsStream*)self, param1, param2, param3);
}

const char* k_nscore__resultsstream_tr(const char* s) {
    libqt_string _str = KNSCore__ResultsStream_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__resultsstream_fetch(void* self) {
    KNSCore__ResultsStream_Fetch((KNSCore__ResultsStream*)self);
}

void k_nscore__resultsstream_fetch_more(void* self) {
    KNSCore__ResultsStream_FetchMore((KNSCore__ResultsStream*)self);
}

void k_nscore__resultsstream_entries_found(void* self, libqt_list entries) {
    KNSCore__ResultsStream_EntriesFound((KNSCore__ResultsStream*)self, entries);
}

void k_nscore__resultsstream_on_entries_found(void* self, void (*callback)(void*, KNSCore__Entry**)) {
    KNSCore__ResultsStream_Connect_EntriesFound((KNSCore__ResultsStream*)self, (intptr_t)callback);
}

void k_nscore__resultsstream_finished(void* self) {
    KNSCore__ResultsStream_Finished((KNSCore__ResultsStream*)self);
}

void k_nscore__resultsstream_on_finished(void* self, void (*callback)(void*)) {
    KNSCore__ResultsStream_Connect_Finished((KNSCore__ResultsStream*)self, (intptr_t)callback);
}

const char* k_nscore__resultsstream_tr2(const char* s, const char* c) {
    libqt_string _str = KNSCore__ResultsStream_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__resultsstream_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KNSCore__ResultsStream_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_nscore__resultsstream_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_nscore__resultsstream_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_nscore__resultsstream_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__resultsstream_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__resultsstream_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__resultsstream_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__resultsstream_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__resultsstream_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__resultsstream_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__resultsstream_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__resultsstream_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__resultsstream_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_nscore__resultsstream_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__resultsstream_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__resultsstream_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__resultsstream_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__resultsstream_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__resultsstream_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__resultsstream_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__resultsstream_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__resultsstream_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__resultsstream_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__resultsstream_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__resultsstream_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__resultsstream_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__resultsstream_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__resultsstream_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_nscore__resultsstream_dynamic_property_names");
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

QBindingStorage* k_nscore__resultsstream_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__resultsstream_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__resultsstream_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__resultsstream_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_nscore__resultsstream_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_nscore__resultsstream_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__resultsstream_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__resultsstream_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__resultsstream_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_nscore__resultsstream_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__resultsstream_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__resultsstream_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__resultsstream_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_nscore__resultsstream_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__resultsstream_delete(void* self) {
    KNSCore__ResultsStream_Delete((KNSCore__ResultsStream*)(self));
}
