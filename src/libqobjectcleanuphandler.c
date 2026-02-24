#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqobjectcleanuphandler.hpp"
#include "libqobjectcleanuphandler.h"

QObjectCleanupHandler* q_objectcleanuphandler_new() {
    return QObjectCleanupHandler_new();
}

const QMetaObject* q_objectcleanuphandler_meta_object(void* self) {
    return QObjectCleanupHandler_MetaObject((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QObjectCleanupHandler_OnMetaObject((QObjectCleanupHandler*)self, (intptr_t)callback);
}

const QMetaObject* q_objectcleanuphandler_super_meta_object(void* self) {
    return QObjectCleanupHandler_SuperMetaObject((QObjectCleanupHandler*)self);
}

void* q_objectcleanuphandler_metacast(void* self, const char* param1) {
    return QObjectCleanupHandler_Metacast((QObjectCleanupHandler*)self, param1);
}

void q_objectcleanuphandler_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QObjectCleanupHandler_OnMetacast((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void* q_objectcleanuphandler_super_metacast(void* self, const char* param1) {
    return QObjectCleanupHandler_SuperMetacast((QObjectCleanupHandler*)self, param1);
}

int32_t q_objectcleanuphandler_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_Metacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

void q_objectcleanuphandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QObjectCleanupHandler_OnMetacall((QObjectCleanupHandler*)self, (intptr_t)callback);
}

int32_t q_objectcleanuphandler_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QObjectCleanupHandler_SuperMetacall((QObjectCleanupHandler*)self, param1, param2, param3);
}

const char* q_objectcleanuphandler_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
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
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
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

void q_objectcleanuphandler_set_object_name(void* self, const char* name) {
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

int32_t q_objectcleanuphandler_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_objectcleanuphandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_objectcleanuphandler_kill_timer2(void* self, int32_t id) {
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

QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_objectcleanuphandler_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_objectcleanuphandler_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_objectcleanuphandler_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_objectcleanuphandler_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_objectcleanuphandler_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_objectcleanuphandler_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_objectcleanuphandler_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
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
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_objectcleanuphandler_dynamic_property_names\n");
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

QBindingStorage* q_objectcleanuphandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_objectcleanuphandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_objectcleanuphandler_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
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

int32_t q_objectcleanuphandler_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_objectcleanuphandler_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_objectcleanuphandler_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_objectcleanuphandler_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_objectcleanuphandler_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_objectcleanuphandler_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_objectcleanuphandler_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_objectcleanuphandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_objectcleanuphandler_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_objectcleanuphandler_event(void* self, void* event) {
    return QObjectCleanupHandler_Event((QObjectCleanupHandler*)self, (QEvent*)event);
}

bool q_objectcleanuphandler_super_event(void* self, void* event) {
    return QObjectCleanupHandler_SuperEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_on_event(void* self, bool (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnEvent((QObjectCleanupHandler*)self, (intptr_t)callback);
}

bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_EventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

bool q_objectcleanuphandler_super_event_filter(void* self, void* watched, void* event) {
    return QObjectCleanupHandler_SuperEventFilter((QObjectCleanupHandler*)self, (QObject*)watched, (QEvent*)event);
}

void q_objectcleanuphandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QObjectCleanupHandler_OnEventFilter((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_timer_event(void* self, void* event) {
    QObjectCleanupHandler_TimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

void q_objectcleanuphandler_super_timer_event(void* self, void* event) {
    QObjectCleanupHandler_SuperTimerEvent((QObjectCleanupHandler*)self, (QTimerEvent*)event);
}

void q_objectcleanuphandler_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnTimerEvent((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_child_event(void* self, void* event) {
    QObjectCleanupHandler_ChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

void q_objectcleanuphandler_super_child_event(void* self, void* event) {
    QObjectCleanupHandler_SuperChildEvent((QObjectCleanupHandler*)self, (QChildEvent*)event);
}

void q_objectcleanuphandler_on_child_event(void* self, void (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnChildEvent((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_custom_event(void* self, void* event) {
    QObjectCleanupHandler_CustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_super_custom_event(void* self, void* event) {
    QObjectCleanupHandler_SuperCustomEvent((QObjectCleanupHandler*)self, (QEvent*)event);
}

void q_objectcleanuphandler_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnCustomEvent((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_ConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_super_connect_notify(void* self, void* signal) {
    QObjectCleanupHandler_SuperConnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnConnectNotify((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_DisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_super_disconnect_notify(void* self, void* signal) {
    QObjectCleanupHandler_SuperDisconnectNotify((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnDisconnectNotify((QObjectCleanupHandler*)self, (intptr_t)callback);
}

QObject* q_objectcleanuphandler_sender(void* self) {
    return QObjectCleanupHandler_Sender((QObjectCleanupHandler*)self);
}

QObject* q_objectcleanuphandler_super_sender(void* self) {
    return QObjectCleanupHandler_SuperSender((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_on_sender(void* self, QObject* (*callback)()) {
    QObjectCleanupHandler_OnSender((QObjectCleanupHandler*)self, (intptr_t)callback);
}

int32_t q_objectcleanuphandler_sender_signal_index(void* self) {
    return QObjectCleanupHandler_SenderSignalIndex((QObjectCleanupHandler*)self);
}

int32_t q_objectcleanuphandler_super_sender_signal_index(void* self) {
    return QObjectCleanupHandler_SuperSenderSignalIndex((QObjectCleanupHandler*)self);
}

void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QObjectCleanupHandler_OnSenderSignalIndex((QObjectCleanupHandler*)self, (intptr_t)callback);
}

int32_t q_objectcleanuphandler_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_Receivers((QObjectCleanupHandler*)self, signal);
}

int32_t q_objectcleanuphandler_super_receivers(void* self, const char* signal) {
    return QObjectCleanupHandler_SuperReceivers((QObjectCleanupHandler*)self, signal);
}

void q_objectcleanuphandler_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QObjectCleanupHandler_OnReceivers((QObjectCleanupHandler*)self, (intptr_t)callback);
}

bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_IsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

bool q_objectcleanuphandler_super_is_signal_connected(void* self, void* signal) {
    return QObjectCleanupHandler_SuperIsSignalConnected((QObjectCleanupHandler*)self, (QMetaMethod*)signal);
}

void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QObjectCleanupHandler_OnIsSignalConnected((QObjectCleanupHandler*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_objectcleanuphandler_delete(void* self) {
    QObjectCleanupHandler_Delete((QObjectCleanupHandler*)(self));
}
