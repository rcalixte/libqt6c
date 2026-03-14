#include "libqbluetoothaddress.hpp"
#include "libqbluetoothhostinfo.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbluetoothlocaldevice.hpp"
#include "libqbluetoothlocaldevice.h"

QBluetoothLocalDevice* q_bluetoothlocaldevice_new() {
    return QBluetoothLocalDevice_new();
}

QBluetoothLocalDevice* q_bluetoothlocaldevice_new2(void* address) {
    return QBluetoothLocalDevice_new2((QBluetoothAddress*)address);
}

QBluetoothLocalDevice* q_bluetoothlocaldevice_new3(void* parent) {
    return QBluetoothLocalDevice_new3((QObject*)parent);
}

QBluetoothLocalDevice* q_bluetoothlocaldevice_new4(void* address, void* parent) {
    return QBluetoothLocalDevice_new4((QBluetoothAddress*)address, (QObject*)parent);
}

const QMetaObject* q_bluetoothlocaldevice_meta_object(void* self) {
    return QBluetoothLocalDevice_MetaObject((QBluetoothLocalDevice*)self);
}

void q_bluetoothlocaldevice_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBluetoothLocalDevice_OnMetaObject((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

const QMetaObject* q_bluetoothlocaldevice_super_meta_object(void* self) {
    return QBluetoothLocalDevice_SuperMetaObject((QBluetoothLocalDevice*)self);
}

void* q_bluetoothlocaldevice_metacast(void* self, const char* param1) {
    return QBluetoothLocalDevice_Metacast((QBluetoothLocalDevice*)self, param1);
}

void q_bluetoothlocaldevice_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBluetoothLocalDevice_OnMetacast((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void* q_bluetoothlocaldevice_super_metacast(void* self, const char* param1) {
    return QBluetoothLocalDevice_SuperMetacast((QBluetoothLocalDevice*)self, param1);
}

int32_t q_bluetoothlocaldevice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothLocalDevice_Metacall((QBluetoothLocalDevice*)self, param1, param2, param3);
}

void q_bluetoothlocaldevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBluetoothLocalDevice_OnMetacall((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

int32_t q_bluetoothlocaldevice_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBluetoothLocalDevice_SuperMetacall((QBluetoothLocalDevice*)self, param1, param2, param3);
}

const char* q_bluetoothlocaldevice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_bluetoothlocaldevice_is_valid(void* self) {
    return QBluetoothLocalDevice_IsValid((QBluetoothLocalDevice*)self);
}

void q_bluetoothlocaldevice_request_pairing(void* self, void* address, int32_t pairing) {
    QBluetoothLocalDevice_RequestPairing((QBluetoothLocalDevice*)self, (QBluetoothAddress*)address, pairing);
}

int32_t q_bluetoothlocaldevice_pairing_status(void* self, void* address) {
    return QBluetoothLocalDevice_PairingStatus((QBluetoothLocalDevice*)self, (QBluetoothAddress*)address);
}

void q_bluetoothlocaldevice_set_host_mode(void* self, int32_t mode) {
    QBluetoothLocalDevice_SetHostMode((QBluetoothLocalDevice*)self, mode);
}

int32_t q_bluetoothlocaldevice_host_mode(void* self) {
    return QBluetoothLocalDevice_HostMode((QBluetoothLocalDevice*)self);
}

libqt_list /* of QBluetoothAddress* */ q_bluetoothlocaldevice_connected_devices(void* self) {
    libqt_list _arr = QBluetoothLocalDevice_ConnectedDevices((QBluetoothLocalDevice*)self);
    return _arr;
}

void q_bluetoothlocaldevice_power_on(void* self) {
    QBluetoothLocalDevice_PowerOn((QBluetoothLocalDevice*)self);
}

const char* q_bluetoothlocaldevice_name(void* self) {
    libqt_string _str = QBluetoothLocalDevice_Name((QBluetoothLocalDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothAddress* q_bluetoothlocaldevice_address(void* self) {
    return QBluetoothLocalDevice_Address((QBluetoothLocalDevice*)self);
}

libqt_list /* of QBluetoothHostInfo* */ q_bluetoothlocaldevice_all_devices() {
    libqt_list _arr = QBluetoothLocalDevice_AllDevices();
    return _arr;
}

void q_bluetoothlocaldevice_host_mode_state_changed(void* self, int32_t state) {
    QBluetoothLocalDevice_HostModeStateChanged((QBluetoothLocalDevice*)self, state);
}

void q_bluetoothlocaldevice_on_host_mode_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothLocalDevice_Connect_HostModeStateChanged((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_device_connected(void* self, void* address) {
    QBluetoothLocalDevice_DeviceConnected((QBluetoothLocalDevice*)self, (QBluetoothAddress*)address);
}

void q_bluetoothlocaldevice_on_device_connected(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_Connect_DeviceConnected((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_device_disconnected(void* self, void* address) {
    QBluetoothLocalDevice_DeviceDisconnected((QBluetoothLocalDevice*)self, (QBluetoothAddress*)address);
}

void q_bluetoothlocaldevice_on_device_disconnected(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_Connect_DeviceDisconnected((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_pairing_finished(void* self, void* address, int32_t pairing) {
    QBluetoothLocalDevice_PairingFinished((QBluetoothLocalDevice*)self, (QBluetoothAddress*)address, pairing);
}

void q_bluetoothlocaldevice_on_pairing_finished(void* self, void (*callback)(void*, void*, int32_t)) {
    QBluetoothLocalDevice_Connect_PairingFinished((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_error_occurred(void* self, int32_t error) {
    QBluetoothLocalDevice_ErrorOccurred((QBluetoothLocalDevice*)self, error);
}

void q_bluetoothlocaldevice_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QBluetoothLocalDevice_Connect_ErrorOccurred((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

const char* q_bluetoothlocaldevice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothlocaldevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bluetoothlocaldevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bluetoothlocaldevice_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bluetoothlocaldevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bluetoothlocaldevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bluetoothlocaldevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bluetoothlocaldevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bluetoothlocaldevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bluetoothlocaldevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bluetoothlocaldevice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bluetoothlocaldevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bluetoothlocaldevice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bluetoothlocaldevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bluetoothlocaldevice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bluetoothlocaldevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bluetoothlocaldevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bluetoothlocaldevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bluetoothlocaldevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bluetoothlocaldevice_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bluetoothlocaldevice_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bluetoothlocaldevice_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bluetoothlocaldevice_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bluetoothlocaldevice_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bluetoothlocaldevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bluetoothlocaldevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bluetoothlocaldevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bluetoothlocaldevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bluetoothlocaldevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bluetoothlocaldevice_dynamic_property_names\n");
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

QBindingStorage* q_bluetoothlocaldevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bluetoothlocaldevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bluetoothlocaldevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bluetoothlocaldevice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bluetoothlocaldevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bluetoothlocaldevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bluetoothlocaldevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bluetoothlocaldevice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bluetoothlocaldevice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bluetoothlocaldevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bluetoothlocaldevice_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bluetoothlocaldevice_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bluetoothlocaldevice_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bluetoothlocaldevice_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bluetoothlocaldevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bluetoothlocaldevice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bluetoothlocaldevice_event(void* self, void* event) {
    return QBluetoothLocalDevice_Event((QBluetoothLocalDevice*)self, (QEvent*)event);
}

bool q_bluetoothlocaldevice_super_event(void* self, void* event) {
    return QBluetoothLocalDevice_SuperEvent((QBluetoothLocalDevice*)self, (QEvent*)event);
}

void q_bluetoothlocaldevice_on_event(void* self, bool (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnEvent((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

bool q_bluetoothlocaldevice_event_filter(void* self, void* watched, void* event) {
    return QBluetoothLocalDevice_EventFilter((QBluetoothLocalDevice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bluetoothlocaldevice_super_event_filter(void* self, void* watched, void* event) {
    return QBluetoothLocalDevice_SuperEventFilter((QBluetoothLocalDevice*)self, (QObject*)watched, (QEvent*)event);
}

void q_bluetoothlocaldevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBluetoothLocalDevice_OnEventFilter((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_timer_event(void* self, void* event) {
    QBluetoothLocalDevice_TimerEvent((QBluetoothLocalDevice*)self, (QTimerEvent*)event);
}

void q_bluetoothlocaldevice_super_timer_event(void* self, void* event) {
    QBluetoothLocalDevice_SuperTimerEvent((QBluetoothLocalDevice*)self, (QTimerEvent*)event);
}

void q_bluetoothlocaldevice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnTimerEvent((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_child_event(void* self, void* event) {
    QBluetoothLocalDevice_ChildEvent((QBluetoothLocalDevice*)self, (QChildEvent*)event);
}

void q_bluetoothlocaldevice_super_child_event(void* self, void* event) {
    QBluetoothLocalDevice_SuperChildEvent((QBluetoothLocalDevice*)self, (QChildEvent*)event);
}

void q_bluetoothlocaldevice_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnChildEvent((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_custom_event(void* self, void* event) {
    QBluetoothLocalDevice_CustomEvent((QBluetoothLocalDevice*)self, (QEvent*)event);
}

void q_bluetoothlocaldevice_super_custom_event(void* self, void* event) {
    QBluetoothLocalDevice_SuperCustomEvent((QBluetoothLocalDevice*)self, (QEvent*)event);
}

void q_bluetoothlocaldevice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnCustomEvent((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_connect_notify(void* self, void* signal) {
    QBluetoothLocalDevice_ConnectNotify((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

void q_bluetoothlocaldevice_super_connect_notify(void* self, void* signal) {
    QBluetoothLocalDevice_SuperConnectNotify((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

void q_bluetoothlocaldevice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnConnectNotify((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_disconnect_notify(void* self, void* signal) {
    QBluetoothLocalDevice_DisconnectNotify((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

void q_bluetoothlocaldevice_super_disconnect_notify(void* self, void* signal) {
    QBluetoothLocalDevice_SuperDisconnectNotify((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

void q_bluetoothlocaldevice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnDisconnectNotify((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

QObject* q_bluetoothlocaldevice_sender(void* self) {
    return QBluetoothLocalDevice_Sender((QBluetoothLocalDevice*)self);
}

QObject* q_bluetoothlocaldevice_super_sender(void* self) {
    return QBluetoothLocalDevice_SuperSender((QBluetoothLocalDevice*)self);
}

void q_bluetoothlocaldevice_on_sender(void* self, QObject* (*callback)()) {
    QBluetoothLocalDevice_OnSender((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

int32_t q_bluetoothlocaldevice_sender_signal_index(void* self) {
    return QBluetoothLocalDevice_SenderSignalIndex((QBluetoothLocalDevice*)self);
}

int32_t q_bluetoothlocaldevice_super_sender_signal_index(void* self) {
    return QBluetoothLocalDevice_SuperSenderSignalIndex((QBluetoothLocalDevice*)self);
}

void q_bluetoothlocaldevice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBluetoothLocalDevice_OnSenderSignalIndex((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

int32_t q_bluetoothlocaldevice_receivers(void* self, const char* signal) {
    return QBluetoothLocalDevice_Receivers((QBluetoothLocalDevice*)self, signal);
}

int32_t q_bluetoothlocaldevice_super_receivers(void* self, const char* signal) {
    return QBluetoothLocalDevice_SuperReceivers((QBluetoothLocalDevice*)self, signal);
}

void q_bluetoothlocaldevice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBluetoothLocalDevice_OnReceivers((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

bool q_bluetoothlocaldevice_is_signal_connected(void* self, void* signal) {
    return QBluetoothLocalDevice_IsSignalConnected((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

bool q_bluetoothlocaldevice_super_is_signal_connected(void* self, void* signal) {
    return QBluetoothLocalDevice_SuperIsSignalConnected((QBluetoothLocalDevice*)self, (QMetaMethod*)signal);
}

void q_bluetoothlocaldevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBluetoothLocalDevice_OnIsSignalConnected((QBluetoothLocalDevice*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bluetoothlocaldevice_delete(void* self) {
    QBluetoothLocalDevice_Delete((QBluetoothLocalDevice*)(self));
}
