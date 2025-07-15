#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqobjectcleanuphandler.hpp"
#include "libqobjectcleanuphandler.h"

QObjectCleanupHandler* q_objectcleanuphandler_new() {
    return QObjectCleanupHandler_new();
}

const QMetaObject* q_objectcleanuphandler_meta_object(void* self) {
    return QObjectCleanupHandler_MetaObject((QObjectCleanupHandler*)self);
}

void* q_objectcleanuphandler_metacast(void* self, const char* param1) {
    return QObjectCleanupHandler_Metacast((QObjectCleanupHandler*)self, param1);
}

int32_t q_objectcleanuphandler_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_Metacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

void q_objectcleanuphandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QObjectCleanupHandler_OnMetacall((QObjectCleanupHandler*)self, (intptr_t)slot);
}

int32_t q_objectcleanuphandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_QBaseMetacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

const char* q_objectcleanuphandler_tr(const char* s) {
    libqt_string _str = QObjectCleanupHandler_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_objectcleanuphandler_add(void* self, void* object) {
    return QObjectCleanupHandler_Add((QObjectCleanupHandler*)self, (QObject*)object);
}

void q_objectcleanuphandler_remove(void* self, void* object) {
    QObjectCleanupHandler_Remove((QObjectCleanupHandler*)self, (QObject*)object);
}

bool q_objectcleanuphandler_is_empty(void* self) {
    return QObjectCleanupHandler_IsEmpty((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_clear(void* self) {
    QObjectCleanupHandler_Clear((QObjectCleanupHandler*)self);
}

const char* q_objectcleanuphandler_tr2(const char* s, const char* c) {
    libqt_string _str = QObjectCleanupHandler_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObjectCleanupHandler_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_objectcleanuphandler_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_objectcleanuphandler_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_objectcleanuphandler_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_objectcleanuphandler_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_objectcleanuphandler_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_objectcleanuphandler_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_objectcleanuphandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_objectcleanuphandler_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_objectcleanuphandler_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_objectcleanuphandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_objectcleanuphandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_objectcleanuphandler_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_objectcleanuphandler_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_objectcleanuphandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_objectcleanuphandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_objectcleanuphandler_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_objectcleanuphandler_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_objectcleanuphandler_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_objectcleanuphandler_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_objectcleanuphandler_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_objectcleanuphandler_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_objectcleanuphandler_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_objectcleanuphandler_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_objectcleanuphandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_objectcleanuphandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_objectcleanuphandler_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_objectcleanuphandler_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_objectcleanuphandler_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_objectcleanuphandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_objectcleanuphandler_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_objectcleanuphandler_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_objectcleanuphandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_objectcleanuphandler_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_objectcleanuphandler_event(void* self, void* event) {
    return QObjectCleanupHandler_Event((QObjectCleanupHandler*)self, (QEvent*)event);
}

bool q_objectcleanuphandler_qbase_event(void* self, void* event) {
    return QObjectCleanupHandler_QBaseEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_on_event(void* self, bool (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_EventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

bool q_objectcleanuphandler_qbase_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_QBaseEventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

void q_objectcleanuphandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QObjectCleanupHandler_OnEventFilter((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_timer_event(void* self, void* event) {
    QObjectCleanupHandler_TimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

void q_objectcleanuphandler_qbase_timer_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseTimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

void q_objectcleanuphandler_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnTimerEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_child_event(void* self, void* event) {
    QObjectCleanupHandler_ChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

void q_objectcleanuphandler_qbase_child_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

void q_objectcleanuphandler_on_child_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnChildEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_custom_event(void* self, void* event) {
    QObjectCleanupHandler_CustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_qbase_custom_event(void* self, void* event) {
    QObjectCleanupHandler_QBaseCustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnCustomEvent((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_ConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_qbase_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_QBaseConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnConnectNotify((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_DisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_qbase_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_QBaseDisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnDisconnectNotify((QObjectCleanupHandler*)self, (intptr_t)slot);
}

QObject* q_objectcleanuphandler_sender(void* self) {
    return QObjectCleanupHandler_Sender((QObjectCleanupHandler*)self);
}

QObject* q_objectcleanuphandler_qbase_sender(void* self) {
    return QObjectCleanupHandler_QBaseSender((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_on_sender(void* self, QObject* (*slot)()) {
    QObjectCleanupHandler_OnSender((QObjectCleanupHandler*)self, (intptr_t)slot);
}

int32_t q_objectcleanuphandler_sender_signal_index(void* self) {
    return QObjectCleanupHandler_SenderSignalIndex((QObjectCleanupHandler*)self);
}

int32_t q_objectcleanuphandler_qbase_sender_signal_index(void* self) {
    return QObjectCleanupHandler_QBaseSenderSignalIndex((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QObjectCleanupHandler_OnSenderSignalIndex((QObjectCleanupHandler*)self, (intptr_t)slot);
}

int32_t q_objectcleanuphandler_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_Receivers((QObjectCleanupHandler*)self, signal);
}

int32_t q_objectcleanuphandler_qbase_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_QBaseReceivers((QObjectCleanupHandler*)self, signal);
}

void q_objectcleanuphandler_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QObjectCleanupHandler_OnReceivers((QObjectCleanupHandler*)self, (intptr_t)slot);
}

bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_IsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

bool q_objectcleanuphandler_qbase_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_QBaseIsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QObjectCleanupHandler_OnIsSignalConnected((QObjectCleanupHandler*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_objectcleanuphandler_delete(void* self) {
    QObjectCleanupHandler_Delete((QObjectCleanupHandler*)(self));
}
