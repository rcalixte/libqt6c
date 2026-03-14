#include "libqbluetoothaddress.hpp"
#include "libqbluetoothdeviceinfo.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbluetoothdevicediscoveryagent.hpp"
#include "libqbluetoothdevicediscoveryagent.h"

QBluetoothDeviceDiscoveryAgent* q_bluetoothdevicediscoveryagent_new() {
    return QBluetoothDeviceDiscoveryAgent_new();
}

QBluetoothDeviceDiscoveryAgent* q_bluetoothdevicediscoveryagent_new2(void* deviceAdapter) {
    return QBluetoothDeviceDiscoveryAgent_new2((QBluetoothAddress*)deviceAdapter);
}

QBluetoothDeviceDiscoveryAgent* q_bluetoothdevicediscoveryagent_new3(void* parent) {
    return QBluetoothDeviceDiscoveryAgent_new3((QObject*)parent);
}

QBluetoothDeviceDiscoveryAgent* q_bluetoothdevicediscoveryagent_new4(void* deviceAdapter, void* parent) {
    return QBluetoothDeviceDiscoveryAgent_new4((QBluetoothAddress*)deviceAdapter, (QObject*)parent);
}

const QMetaObject* q_bluetoothdevicediscoveryagent_meta_object(void* self) {
    return QBluetoothDeviceDiscoveryAgent_MetaObject((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBluetoothDeviceDiscoveryAgent_OnMetaObject((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

const QMetaObject* q_bluetoothdevicediscoveryagent_super_meta_object(void* self) {
    return QBluetoothDeviceDiscoveryAgent_SuperMetaObject((QBluetoothDeviceDiscoveryAgent*)self);
}

void* q_bluetoothdevicediscoveryagent_metacast(void* self, const char* param1) {
    return QBluetoothDeviceDiscoveryAgent_Metacast((QBluetoothDeviceDiscoveryAgent*)self, param1);
}

void q_bluetoothdevicediscoveryagent_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBluetoothDeviceDiscoveryAgent_OnMetacast((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void* q_bluetoothdevicediscoveryagent_super_metacast(void* self, const char* param1) {
    return QBluetoothDeviceDiscoveryAgent_SuperMetacast((QBluetoothDeviceDiscoveryAgent*)self, param1);
}

int32_t q_bluetoothdevicediscoveryagent_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothDeviceDiscoveryAgent_Metacall((QBluetoothDeviceDiscoveryAgent*)self, param1, param2, param3);
}

void q_bluetoothdevicediscoveryagent_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnMetacall((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothdevicediscoveryagent_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothDeviceDiscoveryAgent_SuperMetacall((QBluetoothDeviceDiscoveryAgent*)self, param1, param2, param3);
}

const char* q_bluetoothdevicediscoveryagent_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothdevicediscoveryagent_is_active(void* self) {
    return QBluetoothDeviceDiscoveryAgent_IsActive((QBluetoothDeviceDiscoveryAgent*)self);
}

int32_t q_bluetoothdevicediscoveryagent_error(void* self) {
    return QBluetoothDeviceDiscoveryAgent_Error((QBluetoothDeviceDiscoveryAgent*)self);
}

const char* q_bluetoothdevicediscoveryagent_error_string(void* self) {
    libqt_string _str = QBluetoothDeviceDiscoveryAgent_ErrorString((QBluetoothDeviceDiscoveryAgent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QBluetoothDeviceInfo* */ q_bluetoothdevicediscoveryagent_discovered_devices(void* self) {
    libqt_list _arr = QBluetoothDeviceDiscoveryAgent_DiscoveredDevices((QBluetoothDeviceDiscoveryAgent*)self);
    return _arr;
}

void q_bluetoothdevicediscoveryagent_set_low_energy_discovery_timeout(void* self, int msTimeout) {
    QBluetoothDeviceDiscoveryAgent_SetLowEnergyDiscoveryTimeout((QBluetoothDeviceDiscoveryAgent*)self, msTimeout);
}

int32_t q_bluetoothdevicediscoveryagent_low_energy_discovery_timeout(void* self) {
    return QBluetoothDeviceDiscoveryAgent_LowEnergyDiscoveryTimeout((QBluetoothDeviceDiscoveryAgent*)self);
}

int32_t q_bluetoothdevicediscoveryagent_supported_discovery_methods() {
    return QBluetoothDeviceDiscoveryAgent_SupportedDiscoveryMethods();
}

void q_bluetoothdevicediscoveryagent_start(void* self) {
    QBluetoothDeviceDiscoveryAgent_Start((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_start2(void* self, int32_t method) {
    QBluetoothDeviceDiscoveryAgent_Start2((QBluetoothDeviceDiscoveryAgent*)self, method);
}

void q_bluetoothdevicediscoveryagent_stop(void* self) {
    QBluetoothDeviceDiscoveryAgent_Stop((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_device_discovered(void* self, void* info) {
    QBluetoothDeviceDiscoveryAgent_DeviceDiscovered((QBluetoothDeviceDiscoveryAgent*)self, (QBluetoothDeviceInfo*)info);
}

void q_bluetoothdevicediscoveryagent_on_device_discovered(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_Connect_DeviceDiscovered((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_device_updated(void* self, void* info, int32_t updatedFields) {
    QBluetoothDeviceDiscoveryAgent_DeviceUpdated((QBluetoothDeviceDiscoveryAgent*)self, (QBluetoothDeviceInfo*)info, updatedFields);
}

void q_bluetoothdevicediscoveryagent_on_device_updated(void* self, void (*callback)(void*, void*, int32_t)) {
    QBluetoothDeviceDiscoveryAgent_Connect_DeviceUpdated((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_finished(void* self) {
    QBluetoothDeviceDiscoveryAgent_Finished((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_on_finished(void* self, void (*callback)(void*)) {
    QBluetoothDeviceDiscoveryAgent_Connect_Finished((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_error_occurred(void* self, int32_t error) {
    QBluetoothDeviceDiscoveryAgent_ErrorOccurred((QBluetoothDeviceDiscoveryAgent*)self, error);
}

void q_bluetoothdevicediscoveryagent_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothDeviceDiscoveryAgent_Connect_ErrorOccurred((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_canceled(void* self) {
    QBluetoothDeviceDiscoveryAgent_Canceled((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_on_canceled(void* self, void (*callback)(void*)) {
    QBluetoothDeviceDiscoveryAgent_Connect_Canceled((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

const char* q_bluetoothdevicediscoveryagent_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothdevicediscoveryagent_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothdevicediscoveryagent_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothdevicediscoveryagent_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bluetoothdevicediscoveryagent_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bluetoothdevicediscoveryagent_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bluetoothdevicediscoveryagent_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bluetoothdevicediscoveryagent_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bluetoothdevicediscoveryagent_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bluetoothdevicediscoveryagent_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bluetoothdevicediscoveryagent_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bluetoothdevicediscoveryagent_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bluetoothdevicediscoveryagent_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bluetoothdevicediscoveryagent_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bluetoothdevicediscoveryagent_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bluetoothdevicediscoveryagent_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bluetoothdevicediscoveryagent_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bluetoothdevicediscoveryagent_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bluetoothdevicediscoveryagent_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bluetoothdevicediscoveryagent_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bluetoothdevicediscoveryagent_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bluetoothdevicediscoveryagent_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bluetoothdevicediscoveryagent_dynamic_property_names\n");
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

QBindingStorage* q_bluetoothdevicediscoveryagent_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bluetoothdevicediscoveryagent_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bluetoothdevicediscoveryagent_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bluetoothdevicediscoveryagent_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bluetoothdevicediscoveryagent_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bluetoothdevicediscoveryagent_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bluetoothdevicediscoveryagent_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bluetoothdevicediscoveryagent_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bluetoothdevicediscoveryagent_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bluetoothdevicediscoveryagent_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bluetoothdevicediscoveryagent_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bluetoothdevicediscoveryagent_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bluetoothdevicediscoveryagent_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bluetoothdevicediscoveryagent_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bluetoothdevicediscoveryagent_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bluetoothdevicediscoveryagent_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bluetoothdevicediscoveryagent_event(void* self, void* event) {
    return QBluetoothDeviceDiscoveryAgent_Event((QBluetoothDeviceDiscoveryAgent*)self, (QEvent*)event);
}

bool q_bluetoothdevicediscoveryagent_super_event(void* self, void* event) {
    return QBluetoothDeviceDiscoveryAgent_SuperEvent((QBluetoothDeviceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothdevicediscoveryagent_on_event(void* self, bool (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnEvent((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

bool q_bluetoothdevicediscoveryagent_event_filter(void* self, void* watched, void* event) {
    return QBluetoothDeviceDiscoveryAgent_EventFilter((QBluetoothDeviceDiscoveryAgent*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bluetoothdevicediscoveryagent_super_event_filter(void* self, void* watched, void* event) {
    return QBluetoothDeviceDiscoveryAgent_SuperEventFilter((QBluetoothDeviceDiscoveryAgent*)self, (QObject*)watched, (QEvent*)event);
}

void q_bluetoothdevicediscoveryagent_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnEventFilter((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_timer_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_TimerEvent((QBluetoothDeviceDiscoveryAgent*)self, (QTimerEvent*)event);
}

void q_bluetoothdevicediscoveryagent_super_timer_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_SuperTimerEvent((QBluetoothDeviceDiscoveryAgent*)self, (QTimerEvent*)event);
}

void q_bluetoothdevicediscoveryagent_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnTimerEvent((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_child_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_ChildEvent((QBluetoothDeviceDiscoveryAgent*)self, (QChildEvent*)event);
}

void q_bluetoothdevicediscoveryagent_super_child_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_SuperChildEvent((QBluetoothDeviceDiscoveryAgent*)self, (QChildEvent*)event);
}

void q_bluetoothdevicediscoveryagent_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnChildEvent((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_custom_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_CustomEvent((QBluetoothDeviceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothdevicediscoveryagent_super_custom_event(void* self, void* event) {
    QBluetoothDeviceDiscoveryAgent_SuperCustomEvent((QBluetoothDeviceDiscoveryAgent*)self, (QEvent*)event);
}

void q_bluetoothdevicediscoveryagent_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnCustomEvent((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_connect_notify(void* self, void* signal) {
    QBluetoothDeviceDiscoveryAgent_ConnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothdevicediscoveryagent_super_connect_notify(void* self, void* signal) {
    QBluetoothDeviceDiscoveryAgent_SuperConnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothdevicediscoveryagent_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnConnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_disconnect_notify(void* self, void* signal) {
    QBluetoothDeviceDiscoveryAgent_DisconnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothdevicediscoveryagent_super_disconnect_notify(void* self, void* signal) {
    QBluetoothDeviceDiscoveryAgent_SuperDisconnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothdevicediscoveryagent_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnDisconnectNotify((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

QObject* q_bluetoothdevicediscoveryagent_sender(void* self) {
    return QBluetoothDeviceDiscoveryAgent_Sender((QBluetoothDeviceDiscoveryAgent*)self);
}

QObject* q_bluetoothdevicediscoveryagent_super_sender(void* self) {
    return QBluetoothDeviceDiscoveryAgent_SuperSender((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_on_sender(void* self, QObject* (*callback)()) {
    QBluetoothDeviceDiscoveryAgent_OnSender((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothdevicediscoveryagent_sender_signal_index(void* self) {
    return QBluetoothDeviceDiscoveryAgent_SenderSignalIndex((QBluetoothDeviceDiscoveryAgent*)self);
}

int32_t q_bluetoothdevicediscoveryagent_super_sender_signal_index(void* self) {
    return QBluetoothDeviceDiscoveryAgent_SuperSenderSignalIndex((QBluetoothDeviceDiscoveryAgent*)self);
}

void q_bluetoothdevicediscoveryagent_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBluetoothDeviceDiscoveryAgent_OnSenderSignalIndex((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

int32_t q_bluetoothdevicediscoveryagent_receivers(void* self, const char* signal) {
    return QBluetoothDeviceDiscoveryAgent_Receivers((QBluetoothDeviceDiscoveryAgent*)self, signal);
}

int32_t q_bluetoothdevicediscoveryagent_super_receivers(void* self, const char* signal) {
    return QBluetoothDeviceDiscoveryAgent_SuperReceivers((QBluetoothDeviceDiscoveryAgent*)self, signal);
}

void q_bluetoothdevicediscoveryagent_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBluetoothDeviceDiscoveryAgent_OnReceivers((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

bool q_bluetoothdevicediscoveryagent_is_signal_connected(void* self, void* signal) {
    return QBluetoothDeviceDiscoveryAgent_IsSignalConnected((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

bool q_bluetoothdevicediscoveryagent_super_is_signal_connected(void* self, void* signal) {
    return QBluetoothDeviceDiscoveryAgent_SuperIsSignalConnected((QBluetoothDeviceDiscoveryAgent*)self, (QMetaMethod*)signal);
}

void q_bluetoothdevicediscoveryagent_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBluetoothDeviceDiscoveryAgent_OnIsSignalConnected((QBluetoothDeviceDiscoveryAgent*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bluetoothdevicediscoveryagent_delete(void* self) {
    QBluetoothDeviceDiscoveryAgent_Delete((QBluetoothDeviceDiscoveryAgent*)(self));
}
