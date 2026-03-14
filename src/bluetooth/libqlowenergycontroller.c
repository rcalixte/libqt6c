#include "libqbluetoothaddress.hpp"
#include "libqbluetoothdeviceinfo.hpp"
#include "libqbluetoothuuid.hpp"
#include "libqlowenergyadvertisingdata.hpp"
#include "libqlowenergyadvertisingparameters.hpp"
#include "libqlowenergyconnectionparameters.hpp"
#include "libqlowenergyservice.hpp"
#include "libqlowenergyservicedata.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqlowenergycontroller.hpp"
#include "libqlowenergycontroller.h"

const QMetaObject* q_lowenergycontroller_meta_object(void* self) {
    return QLowEnergyController_MetaObject((QLowEnergyController*)self);
}

void* q_lowenergycontroller_metacast(void* self, const char* param1) {
    return QLowEnergyController_Metacast((QLowEnergyController*)self, param1);
}

int32_t q_lowenergycontroller_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLowEnergyController_Metacall((QLowEnergyController*)self, param1, param2, param3);
}

const char* q_lowenergycontroller_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QLowEnergyController* q_lowenergycontroller_create_central(void* remoteDevice) {
    return QLowEnergyController_CreateCentral((QBluetoothDeviceInfo*)remoteDevice);
}

QLowEnergyController* q_lowenergycontroller_create_central2(void* remoteDevice, void* localDevice) {
    return QLowEnergyController_CreateCentral2((QBluetoothDeviceInfo*)remoteDevice, (QBluetoothAddress*)localDevice);
}

QLowEnergyController* q_lowenergycontroller_create_peripheral(void* localDevice) {
    return QLowEnergyController_CreatePeripheral((QBluetoothAddress*)localDevice);
}

QLowEnergyController* q_lowenergycontroller_create_peripheral2() {
    return QLowEnergyController_CreatePeripheral2();
}

QBluetoothAddress* q_lowenergycontroller_local_address(void* self) {
    return QLowEnergyController_LocalAddress((QLowEnergyController*)self);
}

QBluetoothAddress* q_lowenergycontroller_remote_address(void* self) {
    return QLowEnergyController_RemoteAddress((QLowEnergyController*)self);
}

QBluetoothUuid* q_lowenergycontroller_remote_device_uuid(void* self) {
    return QLowEnergyController_RemoteDeviceUuid((QLowEnergyController*)self);
}

const char* q_lowenergycontroller_remote_name(void* self) {
    libqt_string _str = QLowEnergyController_RemoteName((QLowEnergyController*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lowenergycontroller_state(void* self) {
    return QLowEnergyController_State((QLowEnergyController*)self);
}

int32_t q_lowenergycontroller_remote_address_type(void* self) {
    return QLowEnergyController_RemoteAddressType((QLowEnergyController*)self);
}

void q_lowenergycontroller_set_remote_address_type(void* self, int32_t type) {
    QLowEnergyController_SetRemoteAddressType((QLowEnergyController*)self, type);
}

void q_lowenergycontroller_connect_to_device(void* self) {
    QLowEnergyController_ConnectToDevice((QLowEnergyController*)self);
}

void q_lowenergycontroller_disconnect_from_device(void* self) {
    QLowEnergyController_DisconnectFromDevice((QLowEnergyController*)self);
}

void q_lowenergycontroller_discover_services(void* self) {
    QLowEnergyController_DiscoverServices((QLowEnergyController*)self);
}

libqt_list /* of QBluetoothUuid* */ q_lowenergycontroller_services(void* self) {
    libqt_list _arr = QLowEnergyController_Services((QLowEnergyController*)self);
    return _arr;
}

QLowEnergyService* q_lowenergycontroller_create_service_object(void* self, void* service) {
    return QLowEnergyController_CreateServiceObject((QLowEnergyController*)self, (QBluetoothUuid*)service);
}

void q_lowenergycontroller_start_advertising(void* self, void* parameters, void* advertisingData) {
    QLowEnergyController_StartAdvertising((QLowEnergyController*)self, (QLowEnergyAdvertisingParameters*)parameters, (QLowEnergyAdvertisingData*)advertisingData);
}

void q_lowenergycontroller_stop_advertising(void* self) {
    QLowEnergyController_StopAdvertising((QLowEnergyController*)self);
}

QLowEnergyService* q_lowenergycontroller_add_service(void* self, void* service) {
    return QLowEnergyController_AddService((QLowEnergyController*)self, (QLowEnergyServiceData*)service);
}

void q_lowenergycontroller_request_connection_update(void* self, void* parameters) {
    QLowEnergyController_RequestConnectionUpdate((QLowEnergyController*)self, (QLowEnergyConnectionParameters*)parameters);
}

int32_t q_lowenergycontroller_error(void* self) {
    return QLowEnergyController_Error((QLowEnergyController*)self);
}

const char* q_lowenergycontroller_error_string(void* self) {
    libqt_string _str = QLowEnergyController_ErrorString((QLowEnergyController*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lowenergycontroller_role(void* self) {
    return QLowEnergyController_Role((QLowEnergyController*)self);
}

int32_t q_lowenergycontroller_mtu(void* self) {
    return QLowEnergyController_Mtu((QLowEnergyController*)self);
}

void q_lowenergycontroller_read_rssi(void* self) {
    QLowEnergyController_ReadRssi((QLowEnergyController*)self);
}

void q_lowenergycontroller_connected(void* self) {
    QLowEnergyController_Connected((QLowEnergyController*)self);
}

void q_lowenergycontroller_on_connected(void* self, void (*callback)(void*)) {
    QLowEnergyController_Connect_Connected((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_disconnected(void* self) {
    QLowEnergyController_Disconnected((QLowEnergyController*)self);
}

void q_lowenergycontroller_on_disconnected(void* self, void (*callback)(void*)) {
    QLowEnergyController_Connect_Disconnected((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_state_changed(void* self, int32_t state) {
    QLowEnergyController_StateChanged((QLowEnergyController*)self, state);
}

void q_lowenergycontroller_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QLowEnergyController_Connect_StateChanged((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_error_occurred(void* self, int32_t newError) {
    QLowEnergyController_ErrorOccurred((QLowEnergyController*)self, newError);
}

void q_lowenergycontroller_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QLowEnergyController_Connect_ErrorOccurred((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_mtu_changed(void* self, int mtu) {
    QLowEnergyController_MtuChanged((QLowEnergyController*)self, mtu);
}

void q_lowenergycontroller_on_mtu_changed(void* self, void (*callback)(void*, int)) {
    QLowEnergyController_Connect_MtuChanged((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_rssi_read(void* self, short rssi) {
    QLowEnergyController_RssiRead((QLowEnergyController*)self, rssi);
}

void q_lowenergycontroller_on_rssi_read(void* self, void (*callback)(void*, short)) {
    QLowEnergyController_Connect_RssiRead((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_service_discovered(void* self, void* newService) {
    QLowEnergyController_ServiceDiscovered((QLowEnergyController*)self, (QBluetoothUuid*)newService);
}

void q_lowenergycontroller_on_service_discovered(void* self, void (*callback)(void*, void*)) {
    QLowEnergyController_Connect_ServiceDiscovered((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_discovery_finished(void* self) {
    QLowEnergyController_DiscoveryFinished((QLowEnergyController*)self);
}

void q_lowenergycontroller_on_discovery_finished(void* self, void (*callback)(void*)) {
    QLowEnergyController_Connect_DiscoveryFinished((QLowEnergyController*)self, (intptr_t)callback);
}

void q_lowenergycontroller_connection_updated(void* self, void* parameters) {
    QLowEnergyController_ConnectionUpdated((QLowEnergyController*)self, (QLowEnergyConnectionParameters*)parameters);
}

void q_lowenergycontroller_on_connection_updated(void* self, void (*callback)(void*, void*)) {
    QLowEnergyController_Connect_ConnectionUpdated((QLowEnergyController*)self, (intptr_t)callback);
}

const char* q_lowenergycontroller_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lowenergycontroller_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QLowEnergyController* q_lowenergycontroller_create_central22(void* remoteDevice, void* parent) {
    return QLowEnergyController_CreateCentral22((QBluetoothDeviceInfo*)remoteDevice, (QObject*)parent);
}

QLowEnergyController* q_lowenergycontroller_create_central3(void* remoteDevice, void* localDevice, void* parent) {
    return QLowEnergyController_CreateCentral3((QBluetoothDeviceInfo*)remoteDevice, (QBluetoothAddress*)localDevice, (QObject*)parent);
}

QLowEnergyController* q_lowenergycontroller_create_peripheral22(void* localDevice, void* parent) {
    return QLowEnergyController_CreatePeripheral22((QBluetoothAddress*)localDevice, (QObject*)parent);
}

QLowEnergyController* q_lowenergycontroller_create_peripheral1(void* parent) {
    return QLowEnergyController_CreatePeripheral1((QObject*)parent);
}

QLowEnergyService* q_lowenergycontroller_create_service_object2(void* self, void* service, void* parent) {
    return QLowEnergyController_CreateServiceObject2((QLowEnergyController*)self, (QBluetoothUuid*)service, (QObject*)parent);
}

void q_lowenergycontroller_start_advertising3(void* self, void* parameters, void* advertisingData, void* scanResponseData) {
    QLowEnergyController_StartAdvertising3((QLowEnergyController*)self, (QLowEnergyAdvertisingParameters*)parameters, (QLowEnergyAdvertisingData*)advertisingData, (QLowEnergyAdvertisingData*)scanResponseData);
}

QLowEnergyService* q_lowenergycontroller_add_service2(void* self, void* service, void* parent) {
    return QLowEnergyController_AddService2((QLowEnergyController*)self, (QLowEnergyServiceData*)service, (QObject*)parent);
}

bool q_lowenergycontroller_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_lowenergycontroller_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_lowenergycontroller_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergycontroller_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_lowenergycontroller_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_lowenergycontroller_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_lowenergycontroller_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_lowenergycontroller_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_lowenergycontroller_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_lowenergycontroller_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_lowenergycontroller_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_lowenergycontroller_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_lowenergycontroller_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_lowenergycontroller_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_lowenergycontroller_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_lowenergycontroller_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_lowenergycontroller_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_lowenergycontroller_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_lowenergycontroller_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_lowenergycontroller_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_lowenergycontroller_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_lowenergycontroller_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_lowenergycontroller_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_lowenergycontroller_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_lowenergycontroller_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_lowenergycontroller_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_lowenergycontroller_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_lowenergycontroller_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_lowenergycontroller_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_lowenergycontroller_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_lowenergycontroller_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_lowenergycontroller_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_lowenergycontroller_dynamic_property_names\n");
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

QBindingStorage* q_lowenergycontroller_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_lowenergycontroller_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_lowenergycontroller_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_lowenergycontroller_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_lowenergycontroller_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_lowenergycontroller_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_lowenergycontroller_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_lowenergycontroller_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_lowenergycontroller_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_lowenergycontroller_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_lowenergycontroller_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_lowenergycontroller_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_lowenergycontroller_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_lowenergycontroller_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_lowenergycontroller_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_lowenergycontroller_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_lowenergycontroller_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_lowenergycontroller_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_lowenergycontroller_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_lowenergycontroller_delete(void* self) {
    QLowEnergyController_Delete((QLowEnergyController*)(self));
}
