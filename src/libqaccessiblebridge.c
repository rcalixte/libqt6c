#include "libqevent.hpp"
#include "libqaccessible.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqaccessiblebridge.hpp"
#include "libqaccessiblebridge.h"

void q_accessiblebridge_set_root_object(void* self, void* rootObject) {
    QAccessibleBridge_SetRootObject((QAccessibleBridge*)self, (QAccessibleInterface*)rootObject);
}

void q_accessiblebridge_notify_accessibility_update(void* self, void* event) {
    QAccessibleBridge_NotifyAccessibilityUpdate((QAccessibleBridge*)self, (QAccessibleEvent*)event);
}

void q_accessiblebridge_operator_assign(void* self, void* param1) {
    QAccessibleBridge_OperatorAssign((QAccessibleBridge*)self, (QAccessibleBridge*)param1);
}

void q_accessiblebridge_delete(void* self) {
    QAccessibleBridge_Delete((QAccessibleBridge*)(self));
}

QAccessibleBridgePlugin* q_accessiblebridgeplugin_new() {
    return QAccessibleBridgePlugin_new();
}

QAccessibleBridgePlugin* q_accessiblebridgeplugin_new2(void* parent) {
    return QAccessibleBridgePlugin_new2((QObject*)parent);
}

const QMetaObject* q_accessiblebridgeplugin_meta_object(void* self) {
    return QAccessibleBridgePlugin_MetaObject((QAccessibleBridgePlugin*)self);
}

void* q_accessiblebridgeplugin_metacast(void* self, const char* param1) {
    return QAccessibleBridgePlugin_Metacast((QAccessibleBridgePlugin*)self, param1);
}

int32_t q_accessiblebridgeplugin_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessibleBridgePlugin_Metacall((QAccessibleBridgePlugin*)self, param1, param2, param3);
}

void q_accessiblebridgeplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAccessibleBridgePlugin_OnMetacall((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

int32_t q_accessiblebridgeplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAccessibleBridgePlugin_QBaseMetacall((QAccessibleBridgePlugin*)self, param1, param2, param3);
}

const char* q_accessiblebridgeplugin_tr(const char* s) {
    libqt_string _str = QAccessibleBridgePlugin_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAccessibleBridge* q_accessiblebridgeplugin_create(void* self, const char* key) {
    return QAccessibleBridgePlugin_Create((QAccessibleBridgePlugin*)self, qstring(key));
}

void q_accessiblebridgeplugin_on_create(void* self, QAccessibleBridge* (*slot)(void*, const char*)) {
    QAccessibleBridgePlugin_OnCreate((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

QAccessibleBridge* q_accessiblebridgeplugin_qbase_create(void* self, const char* key) {
    return QAccessibleBridgePlugin_QBaseCreate((QAccessibleBridgePlugin*)self, qstring(key));
}

const char* q_accessiblebridgeplugin_tr2(const char* s, const char* c) {
    libqt_string _str = QAccessibleBridgePlugin_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblebridgeplugin_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAccessibleBridgePlugin_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accessiblebridgeplugin_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accessiblebridgeplugin_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_accessiblebridgeplugin_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_accessiblebridgeplugin_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_accessiblebridgeplugin_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_accessiblebridgeplugin_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_accessiblebridgeplugin_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_accessiblebridgeplugin_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_accessiblebridgeplugin_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_accessiblebridgeplugin_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_accessiblebridgeplugin_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_accessiblebridgeplugin_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_accessiblebridgeplugin_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_accessiblebridgeplugin_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_accessiblebridgeplugin_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_accessiblebridgeplugin_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_accessiblebridgeplugin_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_accessiblebridgeplugin_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_accessiblebridgeplugin_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_accessiblebridgeplugin_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_accessiblebridgeplugin_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_accessiblebridgeplugin_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_accessiblebridgeplugin_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_accessiblebridgeplugin_dynamic_property_names(void* self) {
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

QBindingStorage* q_accessiblebridgeplugin_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_accessiblebridgeplugin_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_accessiblebridgeplugin_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_accessiblebridgeplugin_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_accessiblebridgeplugin_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_accessiblebridgeplugin_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_accessiblebridgeplugin_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_accessiblebridgeplugin_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_accessiblebridgeplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_accessiblebridgeplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_accessiblebridgeplugin_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_accessiblebridgeplugin_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_accessiblebridgeplugin_event(void* self, void* event) {
    return QAccessibleBridgePlugin_Event((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

bool q_accessiblebridgeplugin_qbase_event(void* self, void* event) {
    return QAccessibleBridgePlugin_QBaseEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

void q_accessiblebridgeplugin_on_event(void* self, bool (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

bool q_accessiblebridgeplugin_event_filter(void* self, void* watched, void* event) {
    return QAccessibleBridgePlugin_EventFilter((QAccessibleBridgePlugin*)self, (QObject*)watched, (QEvent*)event);
}

bool q_accessiblebridgeplugin_qbase_event_filter(void* self, void* watched, void* event) {
    return QAccessibleBridgePlugin_QBaseEventFilter((QAccessibleBridgePlugin*)self, (QObject*)watched, (QEvent*)event);
}

void q_accessiblebridgeplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAccessibleBridgePlugin_OnEventFilter((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_timer_event(void* self, void* event) {
    QAccessibleBridgePlugin_TimerEvent((QAccessibleBridgePlugin*)self, (QTimerEvent*)event);
}

void q_accessiblebridgeplugin_qbase_timer_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseTimerEvent((QAccessibleBridgePlugin*)self, (QTimerEvent*)event);
}

void q_accessiblebridgeplugin_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnTimerEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_child_event(void* self, void* event) {
    QAccessibleBridgePlugin_ChildEvent((QAccessibleBridgePlugin*)self, (QChildEvent*)event);
}

void q_accessiblebridgeplugin_qbase_child_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseChildEvent((QAccessibleBridgePlugin*)self, (QChildEvent*)event);
}

void q_accessiblebridgeplugin_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnChildEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_custom_event(void* self, void* event) {
    QAccessibleBridgePlugin_CustomEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

void q_accessiblebridgeplugin_qbase_custom_event(void* self, void* event) {
    QAccessibleBridgePlugin_QBaseCustomEvent((QAccessibleBridgePlugin*)self, (QEvent*)event);
}

void q_accessiblebridgeplugin_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnCustomEvent((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_connect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_ConnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

void q_accessiblebridgeplugin_qbase_connect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_QBaseConnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

void q_accessiblebridgeplugin_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnConnectNotify((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_disconnect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_DisconnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

void q_accessiblebridgeplugin_qbase_disconnect_notify(void* self, void* signal) {
    QAccessibleBridgePlugin_QBaseDisconnectNotify((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

void q_accessiblebridgeplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnDisconnectNotify((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

QObject* q_accessiblebridgeplugin_sender(void* self) {
    return QAccessibleBridgePlugin_Sender((QAccessibleBridgePlugin*)self);
}

QObject* q_accessiblebridgeplugin_qbase_sender(void* self) {
    return QAccessibleBridgePlugin_QBaseSender((QAccessibleBridgePlugin*)self);
}

void q_accessiblebridgeplugin_on_sender(void* self, QObject* (*slot)()) {
    QAccessibleBridgePlugin_OnSender((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

int32_t q_accessiblebridgeplugin_sender_signal_index(void* self) {
    return QAccessibleBridgePlugin_SenderSignalIndex((QAccessibleBridgePlugin*)self);
}

int32_t q_accessiblebridgeplugin_qbase_sender_signal_index(void* self) {
    return QAccessibleBridgePlugin_QBaseSenderSignalIndex((QAccessibleBridgePlugin*)self);
}

void q_accessiblebridgeplugin_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAccessibleBridgePlugin_OnSenderSignalIndex((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

int32_t q_accessiblebridgeplugin_receivers(void* self, const char* signal) {
    return QAccessibleBridgePlugin_Receivers((QAccessibleBridgePlugin*)self, signal);
}

int32_t q_accessiblebridgeplugin_qbase_receivers(void* self, const char* signal) {
    return QAccessibleBridgePlugin_QBaseReceivers((QAccessibleBridgePlugin*)self, signal);
}

void q_accessiblebridgeplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAccessibleBridgePlugin_OnReceivers((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

bool q_accessiblebridgeplugin_is_signal_connected(void* self, void* signal) {
    return QAccessibleBridgePlugin_IsSignalConnected((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

bool q_accessiblebridgeplugin_qbase_is_signal_connected(void* self, void* signal) {
    return QAccessibleBridgePlugin_QBaseIsSignalConnected((QAccessibleBridgePlugin*)self, (QMetaMethod*)signal);
}

void q_accessiblebridgeplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAccessibleBridgePlugin_OnIsSignalConnected((QAccessibleBridgePlugin*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_accessiblebridgeplugin_delete(void* self) {
    QAccessibleBridgePlugin_Delete((QAccessibleBridgePlugin*)(self));
}
