#include "../libqcoreevent.hpp"
#include "../libqkeysequence.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkglobalshortcutinfo.hpp"
#include "libkglobalshortcutinfo.h"

KGlobalShortcutInfo* k_globalshortcutinfo_new() {
    return KGlobalShortcutInfo_new();
}

KGlobalShortcutInfo* k_globalshortcutinfo_new2(void* rhs) {
    return KGlobalShortcutInfo_new2((KGlobalShortcutInfo*)rhs);
}

const QMetaObject* k_globalshortcutinfo_meta_object(void* self) {
    return KGlobalShortcutInfo_MetaObject((KGlobalShortcutInfo*)self);
}

void* k_globalshortcutinfo_metacast(void* self, const char* param1) {
    return KGlobalShortcutInfo_Metacast((KGlobalShortcutInfo*)self, param1);
}

int32_t k_globalshortcutinfo_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KGlobalShortcutInfo_Metacall((KGlobalShortcutInfo*)self, param1, param2, param3);
}

void k_globalshortcutinfo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KGlobalShortcutInfo_OnMetacall((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

int32_t k_globalshortcutinfo_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KGlobalShortcutInfo_QBaseMetacall((KGlobalShortcutInfo*)self, param1, param2, param3);
}

const char* k_globalshortcutinfo_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_globalshortcutinfo_operator_assign(void* self, void* rhs) {
    KGlobalShortcutInfo_OperatorAssign((KGlobalShortcutInfo*)self, (KGlobalShortcutInfo*)rhs);
}

const char* k_globalshortcutinfo_context_friendly_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_ContextFriendlyName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_context_unique_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_ContextUniqueName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_component_friendly_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_ComponentFriendlyName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_component_unique_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_ComponentUniqueName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QKeySequence* */ k_globalshortcutinfo_default_keys(void* self) {
    libqt_list _arr = KGlobalShortcutInfo_DefaultKeys((KGlobalShortcutInfo*)self);
    return _arr;
}

const char* k_globalshortcutinfo_friendly_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_FriendlyName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QKeySequence* */ k_globalshortcutinfo_keys(void* self) {
    libqt_list _arr = KGlobalShortcutInfo_Keys((KGlobalShortcutInfo*)self);
    return _arr;
}

const char* k_globalshortcutinfo_unique_name(void* self) {
    libqt_string _str = KGlobalShortcutInfo_UniqueName((KGlobalShortcutInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalshortcutinfo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_globalshortcutinfo_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_globalshortcutinfo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_globalshortcutinfo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_globalshortcutinfo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_globalshortcutinfo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_globalshortcutinfo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_globalshortcutinfo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_globalshortcutinfo_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_globalshortcutinfo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_globalshortcutinfo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_globalshortcutinfo_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_globalshortcutinfo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_globalshortcutinfo_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_globalshortcutinfo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_globalshortcutinfo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_globalshortcutinfo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_globalshortcutinfo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_globalshortcutinfo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_globalshortcutinfo_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_globalshortcutinfo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_globalshortcutinfo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_globalshortcutinfo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_globalshortcutinfo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_globalshortcutinfo_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_globalshortcutinfo_dynamic_property_names\n");
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

QBindingStorage* k_globalshortcutinfo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_globalshortcutinfo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_globalshortcutinfo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_globalshortcutinfo_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_globalshortcutinfo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_globalshortcutinfo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_globalshortcutinfo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_globalshortcutinfo_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_globalshortcutinfo_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_globalshortcutinfo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_globalshortcutinfo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_globalshortcutinfo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_globalshortcutinfo_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_globalshortcutinfo_event(void* self, void* event) {
    return KGlobalShortcutInfo_Event((KGlobalShortcutInfo*)self, (QEvent*)event);
}

bool k_globalshortcutinfo_qbase_event(void* self, void* event) {
    return KGlobalShortcutInfo_QBaseEvent((KGlobalShortcutInfo*)self, (QEvent*)event);
}

void k_globalshortcutinfo_on_event(void* self, bool (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnEvent((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

bool k_globalshortcutinfo_event_filter(void* self, void* watched, void* event) {
    return KGlobalShortcutInfo_EventFilter((KGlobalShortcutInfo*)self, (QObject*)watched, (QEvent*)event);
}

bool k_globalshortcutinfo_qbase_event_filter(void* self, void* watched, void* event) {
    return KGlobalShortcutInfo_QBaseEventFilter((KGlobalShortcutInfo*)self, (QObject*)watched, (QEvent*)event);
}

void k_globalshortcutinfo_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KGlobalShortcutInfo_OnEventFilter((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_timer_event(void* self, void* event) {
    KGlobalShortcutInfo_TimerEvent((KGlobalShortcutInfo*)self, (QTimerEvent*)event);
}

void k_globalshortcutinfo_qbase_timer_event(void* self, void* event) {
    KGlobalShortcutInfo_QBaseTimerEvent((KGlobalShortcutInfo*)self, (QTimerEvent*)event);
}

void k_globalshortcutinfo_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnTimerEvent((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_child_event(void* self, void* event) {
    KGlobalShortcutInfo_ChildEvent((KGlobalShortcutInfo*)self, (QChildEvent*)event);
}

void k_globalshortcutinfo_qbase_child_event(void* self, void* event) {
    KGlobalShortcutInfo_QBaseChildEvent((KGlobalShortcutInfo*)self, (QChildEvent*)event);
}

void k_globalshortcutinfo_on_child_event(void* self, void (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnChildEvent((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_custom_event(void* self, void* event) {
    KGlobalShortcutInfo_CustomEvent((KGlobalShortcutInfo*)self, (QEvent*)event);
}

void k_globalshortcutinfo_qbase_custom_event(void* self, void* event) {
    KGlobalShortcutInfo_QBaseCustomEvent((KGlobalShortcutInfo*)self, (QEvent*)event);
}

void k_globalshortcutinfo_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnCustomEvent((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_connect_notify(void* self, void* signal) {
    KGlobalShortcutInfo_ConnectNotify((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

void k_globalshortcutinfo_qbase_connect_notify(void* self, void* signal) {
    KGlobalShortcutInfo_QBaseConnectNotify((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

void k_globalshortcutinfo_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnConnectNotify((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_disconnect_notify(void* self, void* signal) {
    KGlobalShortcutInfo_DisconnectNotify((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

void k_globalshortcutinfo_qbase_disconnect_notify(void* self, void* signal) {
    KGlobalShortcutInfo_QBaseDisconnectNotify((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

void k_globalshortcutinfo_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnDisconnectNotify((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

QObject* k_globalshortcutinfo_sender(void* self) {
    return KGlobalShortcutInfo_Sender((KGlobalShortcutInfo*)self);
}

QObject* k_globalshortcutinfo_qbase_sender(void* self) {
    return KGlobalShortcutInfo_QBaseSender((KGlobalShortcutInfo*)self);
}

void k_globalshortcutinfo_on_sender(void* self, QObject* (*callback)()) {
    KGlobalShortcutInfo_OnSender((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

int32_t k_globalshortcutinfo_sender_signal_index(void* self) {
    return KGlobalShortcutInfo_SenderSignalIndex((KGlobalShortcutInfo*)self);
}

int32_t k_globalshortcutinfo_qbase_sender_signal_index(void* self) {
    return KGlobalShortcutInfo_QBaseSenderSignalIndex((KGlobalShortcutInfo*)self);
}

void k_globalshortcutinfo_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KGlobalShortcutInfo_OnSenderSignalIndex((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

int32_t k_globalshortcutinfo_receivers(void* self, const char* signal) {
    return KGlobalShortcutInfo_Receivers((KGlobalShortcutInfo*)self, signal);
}

int32_t k_globalshortcutinfo_qbase_receivers(void* self, const char* signal) {
    return KGlobalShortcutInfo_QBaseReceivers((KGlobalShortcutInfo*)self, signal);
}

void k_globalshortcutinfo_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KGlobalShortcutInfo_OnReceivers((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

bool k_globalshortcutinfo_is_signal_connected(void* self, void* signal) {
    return KGlobalShortcutInfo_IsSignalConnected((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

bool k_globalshortcutinfo_qbase_is_signal_connected(void* self, void* signal) {
    return KGlobalShortcutInfo_QBaseIsSignalConnected((KGlobalShortcutInfo*)self, (QMetaMethod*)signal);
}

void k_globalshortcutinfo_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KGlobalShortcutInfo_OnIsSignalConnected((KGlobalShortcutInfo*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_globalshortcutinfo_delete(void* self) {
    KGlobalShortcutInfo_Delete((KGlobalShortcutInfo*)(self));
}
