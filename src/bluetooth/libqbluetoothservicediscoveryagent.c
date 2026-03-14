#include "libqbluetoothaddress.hpp"
#include "libqbluetoothserviceinfo.hpp"
#include "libqbluetoothuuid.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbluetoothservicediscoveryagent.hpp"
#include "libqbluetoothservicediscoveryagent.h"

QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new() {
    return QBluetoothServiceDiscoveryAgent_new();
}

QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new2(void* deviceAdapter) {
    return QBluetoothServiceDiscoveryAgent_new2((QBluetoothAddress*)deviceAdapter);
}

QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new3(void* parent) {
    return QBluetoothServiceDiscoveryAgent_new3((QObject*)parent);
}

QBluetoothServiceDiscoveryAgent* q_bluetoothservicediscoveryagent_new4(void* deviceAdapter, void* parent) {
    return QBluetoothServiceDiscoveryAgent_new4((QBluetoothAddress*)deviceAdapter, (QObject*)parent);
}

const QMetaObject* q_bluetoothservicediscoveryagent_meta_object(void* self) {
    return QBluetoothServiceDiscoveryAgent_MetaObject((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBluetoothServiceDiscoveryAgent_OnMetaObject((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

const QMetaObject* q_bluetoothservicediscoveryagent_super_meta_object(void* self) {
    return QBluetoothServiceDiscoveryAgent_SuperMetaObject((QBluetoothServiceDiscoveryAgent*)self);
}

void* q_bluetoothservicediscoveryagent_metacast(void* self, const char* param1) {
    return QBluetoothServiceDiscoveryAgent_Metacast((QBluetoothServiceDiscoveryAgent*)self, param1);
}

void q_bluetoothservicediscoveryagent_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBluetoothServiceDiscoveryAgent_OnMetacast((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void* q_bluetoothservicediscoveryagent_super_metacast(void* self, const char* param1) {
    return QBluetoothServiceDiscoveryAgent_SuperMetacast((QBluetoothServiceDiscoveryAgent*)self, param1);
}

int32_t q_bluetoothservicediscoveryagent_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothServiceDiscoveryAgent_Metacall((QBluetoothServiceDiscoveryAgent*)self, param1, param2, param3);
}

void q_bluetoothservicediscoveryagent_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBluetoothServiceDiscoveryAgent_OnMetacall((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothservicediscoveryagent_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothServiceDiscoveryAgent_SuperMetacall((QBluetoothServiceDiscoveryAgent*)self, param1, param2, param3);
}

const char* q_bluetoothservicediscoveryagent_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothservicediscoveryagent_is_active(void* self) {
    return QBluetoothServiceDiscoveryAgent_IsActive((QBluetoothServiceDiscoveryAgent*)self);
}

int32_t q_bluetoothservicediscoveryagent_error(void* self) {
    return QBluetoothServiceDiscoveryAgent_Error((QBluetoothServiceDiscoveryAgent*)self);
}

const char* q_bluetoothservicediscoveryagent_error_string(void* self) {
    libqt_string _str = QBluetoothServiceDiscoveryAgent_ErrorString((QBluetoothServiceDiscoveryAgent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QBluetoothServiceInfo* */ q_bluetoothservicediscoveryagent_discovered_services(void* self) {
    libqt_list _arr = QBluetoothServiceDiscoveryAgent_DiscoveredServices((QBluetoothServiceDiscoveryAgent*)self);
    return _arr;
}

void q_bluetoothservicediscoveryagent_set_uuid_filter(void* self, libqt_list /* of QBluetoothUuid* */ uuids) {
    QBluetoothServiceDiscoveryAgent_SetUuidFilter((QBluetoothServiceDiscoveryAgent*)self, uuids);
}

void q_bluetoothservicediscoveryagent_set_uuid_filter2(void* self, void* uuid) {
    QBluetoothServiceDiscoveryAgent_SetUuidFilter2((QBluetoothServiceDiscoveryAgent*)self, (QBluetoothUuid*)uuid);
}

libqt_list /* of QBluetoothUuid* */ q_bluetoothservicediscoveryagent_uuid_filter(void* self) {
    libqt_list _arr = QBluetoothServiceDiscoveryAgent_UuidFilter((QBluetoothServiceDiscoveryAgent*)self);
    return _arr;
}

bool q_bluetoothservicediscoveryagent_set_remote_address(void* self, void* address) {
    return QBluetoothServiceDiscoveryAgent_SetRemoteAddress((QBluetoothServiceDiscoveryAgent*)self, (QBluetoothAddress*)address);
}

QBluetoothAddress* q_bluetoothservicediscoveryagent_remote_address(void* self) {
    return QBluetoothServiceDiscoveryAgent_RemoteAddress((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_start(void* self) {
    QBluetoothServiceDiscoveryAgent_Start((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_stop(void* self) {
    QBluetoothServiceDiscoveryAgent_Stop((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_clear(void* self) {
    QBluetoothServiceDiscoveryAgent_Clear((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_service_discovered(void* self, void* info) {
    QBluetoothServiceDiscoveryAgent_ServiceDiscovered((QBluetoothServiceDiscoveryAgent*)self, (QBluetoothServiceInfo*)info);
}

void q_bluetoothservicediscoveryagent_on_service_discovered(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_Connect_ServiceDiscovered((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_finished(void* self) {
    QBluetoothServiceDiscoveryAgent_Finished((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_on_finished(void* self, void (*callback)(void*)) {
    QBluetoothServiceDiscoveryAgent_Connect_Finished((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_canceled(void* self) {
    QBluetoothServiceDiscoveryAgent_Canceled((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_on_canceled(void* self, void (*callback)(void*)) {
    QBluetoothServiceDiscoveryAgent_Connect_Canceled((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_error_occurred(void* self, int32_t error) {
    QBluetoothServiceDiscoveryAgent_ErrorOccurred((QBluetoothServiceDiscoveryAgent*)self, error);
}

void q_bluetoothservicediscoveryagent_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothServiceDiscoveryAgent_Connect_ErrorOccurred((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

const char* q_bluetoothservicediscoveryagent_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothservicediscoveryagent_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothservicediscoveryagent_start1(void* self, int32_t mode) {
    QBluetoothServiceDiscoveryAgent_Start1((QBluetoothServiceDiscoveryAgent*)self, mode);
}

const char* q_bluetoothservicediscoveryagent_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothservicediscoveryagent_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bluetoothservicediscoveryagent_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bluetoothservicediscoveryagent_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bluetoothservicediscoveryagent_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bluetoothservicediscoveryagent_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bluetoothservicediscoveryagent_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bluetoothservicediscoveryagent_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bluetoothservicediscoveryagent_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bluetoothservicediscoveryagent_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bluetoothservicediscoveryagent_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bluetoothservicediscoveryagent_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bluetoothservicediscoveryagent_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bluetoothservicediscoveryagent_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bluetoothservicediscoveryagent_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bluetoothservicediscoveryagent_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bluetoothservicediscoveryagent_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bluetoothservicediscoveryagent_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bluetoothservicediscoveryagent_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bluetoothservicediscoveryagent_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bluetoothservicediscoveryagent_dynamic_property_names\n");
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

QBindingStorage* q_bluetoothservicediscoveryagent_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bluetoothservicediscoveryagent_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bluetoothservicediscoveryagent_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bluetoothservicediscoveryagent_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bluetoothservicediscoveryagent_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bluetoothservicediscoveryagent_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bluetoothservicediscoveryagent_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bluetoothservicediscoveryagent_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bluetoothservicediscoveryagent_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bluetoothservicediscoveryagent_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bluetoothservicediscoveryagent_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bluetoothservicediscoveryagent_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bluetoothservicediscoveryagent_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bluetoothservicediscoveryagent_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bluetoothservicediscoveryagent_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bluetoothservicediscoveryagent_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bluetoothservicediscoveryagent_event(void* self, void* event) {
    return QBluetoothServiceDiscoveryAgent_Event((QBluetoothServiceDiscoveryAgent*)self, (QEvent*)event);
}

bool q_bluetoothservicediscoveryagent_super_event(void* self, void* event) {
    return QBluetoothServiceDiscoveryAgent_SuperEvent((QBluetoothServiceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothservicediscoveryagent_on_event(void* self, bool (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnEvent((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

bool q_bluetoothservicediscoveryagent_event_filter(void* self, void* watched, void* event) {
    return QBluetoothServiceDiscoveryAgent_EventFilter((QBluetoothServiceDiscoveryAgent*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bluetoothservicediscoveryagent_super_event_filter(void* self, void* watched, void* event) {
    return QBluetoothServiceDiscoveryAgent_SuperEventFilter((QBluetoothServiceDiscoveryAgent*)self, (QObject*)watched, (QEvent*)event);
}

void q_bluetoothservicediscoveryagent_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnEventFilter((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_timer_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_TimerEvent((QBluetoothServiceDiscoveryAgent*)self, (QTimerEvent*)event);
}

void q_bluetoothservicediscoveryagent_super_timer_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_SuperTimerEvent((QBluetoothServiceDiscoveryAgent*)self, (QTimerEvent*)event);
}

void q_bluetoothservicediscoveryagent_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnTimerEvent((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_child_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_ChildEvent((QBluetoothServiceDiscoveryAgent*)self, (QChildEvent*)event);
}

void q_bluetoothservicediscoveryagent_super_child_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_SuperChildEvent((QBluetoothServiceDiscoveryAgent*)self, (QChildEvent*)event);
}

void q_bluetoothservicediscoveryagent_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnChildEvent((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_custom_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_CustomEvent((QBluetoothServiceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothservicediscoveryagent_super_custom_event(void* self, void* event) {
    QBluetoothServiceDiscoveryAgent_SuperCustomEvent((QBluetoothServiceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothservicediscoveryagent_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnCustomEvent((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_connect_notify(void* self, void* signal) {
    QBluetoothServiceDiscoveryAgent_ConnectNotify((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothservicediscoveryagent_super_connect_notify(void* self, void* signal) {
    QBluetoothServiceDiscoveryAgent_SuperConnectNotify((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothservicediscoveryagent_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnConnectNotify((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_disconnect_notify(void* self, void* signal) {
    QBluetoothServiceDiscoveryAgent_DisconnectNotify((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothservicediscoveryagent_super_disconnect_notify(void* self, void* signal) {
    QBluetoothServiceDiscoveryAgent_SuperDisconnectNotify((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothservicediscoveryagent_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnDisconnectNotify((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

QObject* q_bluetoothservicediscoveryagent_sender(void* self) {
    return QBluetoothServiceDiscoveryAgent_Sender((QBluetoothServiceDiscoveryAgent*)self);
}

QObject* q_bluetoothservicediscoveryagent_super_sender(void* self) {
    return QBluetoothServiceDiscoveryAgent_SuperSender((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_on_sender(void* self, QObject* (*callback)()) {
    QBluetoothServiceDiscoveryAgent_OnSender((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothservicediscoveryagent_sender_signal_index(void* self) {
    return QBluetoothServiceDiscoveryAgent_SenderSignalIndex((QBluetoothServiceDiscoveryAgent*)self);
}

int32_t q_bluetoothservicediscoveryagent_super_sender_signal_index(void* self) {
    return QBluetoothServiceDiscoveryAgent_SuperSenderSignalIndex((QBluetoothServiceDiscoveryAgent*)self);
}

void q_bluetoothservicediscoveryagent_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBluetoothServiceDiscoveryAgent_OnSenderSignalIndex((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothservicediscoveryagent_receivers(void* self, const char* signal) {
    return QBluetoothServiceDiscoveryAgent_Receivers((QBluetoothServiceDiscoveryAgent*)self, signal);
}

int32_t q_bluetoothservicediscoveryagent_super_receivers(void* self, const char* signal) {
    return QBluetoothServiceDiscoveryAgent_SuperReceivers((QBluetoothServiceDiscoveryAgent*)self, signal);
}

void q_bluetoothservicediscoveryagent_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBluetoothServiceDiscoveryAgent_OnReceivers((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

bool q_bluetoothservicediscoveryagent_is_signal_connected(void* self, void* signal) {
    return QBluetoothServiceDiscoveryAgent_IsSignalConnected((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

bool q_bluetoothservicediscoveryagent_super_is_signal_connected(void* self, void* signal) {
    return QBluetoothServiceDiscoveryAgent_SuperIsSignalConnected((QBluetoothServiceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothservicediscoveryagent_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBluetoothServiceDiscoveryAgent_OnIsSignalConnected((QBluetoothServiceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bluetoothservicediscoveryagent_delete(void* self) {
    QBluetoothServiceDiscoveryAgent_Delete((QBluetoothServiceDiscoveryAgent*)(self));
}
