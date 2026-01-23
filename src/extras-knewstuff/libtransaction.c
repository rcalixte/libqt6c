#include "libenginebase.hpp"
#include "libentry.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libtransaction.hpp"
#include "libtransaction.h"

const QMetaObject* k_nscore__transaction_meta_object(void* self) {
    return KNSCore__Transaction_MetaObject((KNSCore__Transaction*)self);
}

void* k_nscore__transaction_metacast(void* self, const char* param1) {
    return KNSCore__Transaction_Metacast((KNSCore__Transaction*)self, param1);
}

int32_t k_nscore__transaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNSCore__Transaction_Metacall((KNSCore__Transaction*)self, param1, param2, param3);
}

const char* k_nscore__transaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KNSCore__Transaction* k_nscore__transaction_install(void* engine, void* entry) {
    return KNSCore__Transaction_Install((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry);
}

KNSCore__Transaction* k_nscore__transaction_install_link_id(void* engine, void* entry, unsigned char linkId) {
    return KNSCore__Transaction_InstallLinkId((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry, linkId);
}

KNSCore__Transaction* k_nscore__transaction_install_latest(void* engine, void* entry) {
    return KNSCore__Transaction_InstallLatest((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry);
}

KNSCore__Transaction* k_nscore__transaction_uninstall(void* engine, void* entry) {
    return KNSCore__Transaction_Uninstall((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry);
}

KNSCore__Transaction* k_nscore__transaction_adopt(void* engine, void* entry) {
    return KNSCore__Transaction_Adopt((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry);
}

bool k_nscore__transaction_is_finished(void* self) {
    return KNSCore__Transaction_IsFinished((KNSCore__Transaction*)self);
}

void k_nscore__transaction_finished(void* self) {
    KNSCore__Transaction_Finished((KNSCore__Transaction*)self);
}

void k_nscore__transaction_on_finished(void* self, void (*callback)(void*)) {
    KNSCore__Transaction_Connect_Finished((KNSCore__Transaction*)self, (intptr_t)callback);
}

void k_nscore__transaction_signal_message(void* self, const char* message) {
    KNSCore__Transaction_SignalMessage((KNSCore__Transaction*)self, qstring(message));
}

void k_nscore__transaction_on_signal_message(void* self, void (*callback)(void*, const char*)) {
    KNSCore__Transaction_Connect_SignalMessage((KNSCore__Transaction*)self, (intptr_t)callback);
}

void k_nscore__transaction_signal_entry_event(void* self, void* entry, int32_t event) {
    KNSCore__Transaction_SignalEntryEvent((KNSCore__Transaction*)self, (KNSCore__Entry*)entry, event);
}

void k_nscore__transaction_on_signal_entry_event(void* self, void (*callback)(void*, void*, int32_t)) {
    KNSCore__Transaction_Connect_SignalEntryEvent((KNSCore__Transaction*)self, (intptr_t)callback);
}

void k_nscore__transaction_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata) {
    KNSCore__Transaction_SignalErrorCode((KNSCore__Transaction*)self, errorCode, qstring(message), (QVariant*)metadata);
}

void k_nscore__transaction_on_signal_error_code(void* self, void (*callback)(void*, int32_t, const char*, void*)) {
    KNSCore__Transaction_Connect_SignalErrorCode((KNSCore__Transaction*)self, (intptr_t)callback);
}

const char* k_nscore__transaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__transaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KNSCore__Transaction* k_nscore__transaction_install3(void* engine, void* entry, int linkId) {
    return KNSCore__Transaction_Install3((KNSCore__EngineBase*)engine, (KNSCore__Entry*)entry, linkId);
}

bool k_nscore__transaction_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_nscore__transaction_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_nscore__transaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__transaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_nscore__transaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_nscore__transaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_nscore__transaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_nscore__transaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_nscore__transaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_nscore__transaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_nscore__transaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_nscore__transaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_nscore__transaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_nscore__transaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_nscore__transaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_nscore__transaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_nscore__transaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_nscore__transaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_nscore__transaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_nscore__transaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_nscore__transaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_nscore__transaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_nscore__transaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_nscore__transaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_nscore__transaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_nscore__transaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_nscore__transaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_nscore__transaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__transaction_dynamic_property_names\n");
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

QBindingStorage* k_nscore__transaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_nscore__transaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_nscore__transaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_nscore__transaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_nscore__transaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_nscore__transaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_nscore__transaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_nscore__transaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_nscore__transaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_nscore__transaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_nscore__transaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_nscore__transaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_nscore__transaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_nscore__transaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_nscore__transaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_nscore__transaction_delete(void* self) {
    KNSCore__Transaction_Delete((KNSCore__Transaction*)(self));
}
