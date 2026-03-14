#include "libqbluetoothuuid.hpp"
#include "libqlowenergycharacteristic.hpp"
#include "libqlowenergydescriptor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqlowenergyservice.hpp"
#include "libqlowenergyservice.h"

const QMetaObject* q_lowenergyservice_meta_object(void* self) {
    return QLowEnergyService_MetaObject((QLowEnergyService*)self);
}

void* q_lowenergyservice_metacast(void* self, const char* param1) {
    return QLowEnergyService_Metacast((QLowEnergyService*)self, param1);
}

int32_t q_lowenergyservice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLowEnergyService_Metacall((QLowEnergyService*)self, param1, param2, param3);
}

const char* q_lowenergyservice_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QBluetoothUuid* */ q_lowenergyservice_included_services(void* self) {
    libqt_list _arr = QLowEnergyService_IncludedServices((QLowEnergyService*)self);
    return _arr;
}

int32_t q_lowenergyservice_type(void* self) {
    return QLowEnergyService_Type((QLowEnergyService*)self);
}

int32_t q_lowenergyservice_state(void* self) {
    return QLowEnergyService_State((QLowEnergyService*)self);
}

QLowEnergyCharacteristic* q_lowenergyservice_characteristic(void* self, void* uuid) {
    return QLowEnergyService_Characteristic((QLowEnergyService*)self, (QBluetoothUuid*)uuid);
}

libqt_list /* of QLowEnergyCharacteristic* */ q_lowenergyservice_characteristics(void* self) {
    libqt_list _arr = QLowEnergyService_Characteristics((QLowEnergyService*)self);
    return _arr;
}

QBluetoothUuid* q_lowenergyservice_service_uuid(void* self) {
    return QLowEnergyService_ServiceUuid((QLowEnergyService*)self);
}

const char* q_lowenergyservice_service_name(void* self) {
    libqt_string _str = QLowEnergyService_ServiceName((QLowEnergyService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergyservice_discover_details(void* self) {
    QLowEnergyService_DiscoverDetails((QLowEnergyService*)self);
}

int32_t q_lowenergyservice_error(void* self) {
    return QLowEnergyService_Error((QLowEnergyService*)self);
}

bool q_lowenergyservice_contains(void* self, void* characteristic) {
    return QLowEnergyService_Contains((QLowEnergyService*)self, (QLowEnergyCharacteristic*)characteristic);
}

void q_lowenergyservice_read_characteristic(void* self, void* characteristic) {
    QLowEnergyService_ReadCharacteristic((QLowEnergyService*)self, (QLowEnergyCharacteristic*)characteristic);
}

void q_lowenergyservice_write_characteristic(void* self, void* characteristic, char* newValue) {
    QLowEnergyService_WriteCharacteristic((QLowEnergyService*)self, (QLowEnergyCharacteristic*)characteristic, qstring(newValue));
}

bool q_lowenergyservice_contains2(void* self, void* descriptor) {
    return QLowEnergyService_Contains2((QLowEnergyService*)self, (QLowEnergyDescriptor*)descriptor);
}

void q_lowenergyservice_read_descriptor(void* self, void* descriptor) {
    QLowEnergyService_ReadDescriptor((QLowEnergyService*)self, (QLowEnergyDescriptor*)descriptor);
}

void q_lowenergyservice_write_descriptor(void* self, void* descriptor, char* newValue) {
    QLowEnergyService_WriteDescriptor((QLowEnergyService*)self, (QLowEnergyDescriptor*)descriptor, qstring(newValue));
}

void q_lowenergyservice_state_changed(void* self, int32_t newState) {
    QLowEnergyService_StateChanged((QLowEnergyService*)self, newState);
}

void q_lowenergyservice_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QLowEnergyService_Connect_StateChanged((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_characteristic_changed(void* self, void* info, char* value) {
    QLowEnergyService_CharacteristicChanged((QLowEnergyService*)self, (QLowEnergyCharacteristic*)info, qstring(value));
}

void q_lowenergyservice_on_characteristic_changed(void* self, void (*callback)(void*, void*, libqt_string)) {
    QLowEnergyService_Connect_CharacteristicChanged((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_characteristic_read(void* self, void* info, char* value) {
    QLowEnergyService_CharacteristicRead((QLowEnergyService*)self, (QLowEnergyCharacteristic*)info, qstring(value));
}

void q_lowenergyservice_on_characteristic_read(void* self, void (*callback)(void*, void*, libqt_string)) {
    QLowEnergyService_Connect_CharacteristicRead((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_characteristic_written(void* self, void* info, char* value) {
    QLowEnergyService_CharacteristicWritten((QLowEnergyService*)self, (QLowEnergyCharacteristic*)info, qstring(value));
}

void q_lowenergyservice_on_characteristic_written(void* self, void (*callback)(void*, void*, libqt_string)) {
    QLowEnergyService_Connect_CharacteristicWritten((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_descriptor_read(void* self, void* info, char* value) {
    QLowEnergyService_DescriptorRead((QLowEnergyService*)self, (QLowEnergyDescriptor*)info, qstring(value));
}

void q_lowenergyservice_on_descriptor_read(void* self, void (*callback)(void*, void*, libqt_string)) {
    QLowEnergyService_Connect_DescriptorRead((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_descriptor_written(void* self, void* info, char* value) {
    QLowEnergyService_DescriptorWritten((QLowEnergyService*)self, (QLowEnergyDescriptor*)info, qstring(value));
}

void q_lowenergyservice_on_descriptor_written(void* self, void (*callback)(void*, void*, libqt_string)) {
    QLowEnergyService_Connect_DescriptorWritten((QLowEnergyService*)self, (intptr_t)callback);
}

void q_lowenergyservice_error_occurred(void* self, int32_t error) {
    QLowEnergyService_ErrorOccurred((QLowEnergyService*)self, error);
}

void q_lowenergyservice_on_error_occurred(void* self, void (*callback)(void*, int32_t)) {
    QLowEnergyService_Connect_ErrorOccurred((QLowEnergyService*)self, (intptr_t)callback);
}

const char* q_lowenergyservice_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_lowenergyservice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergyservice_discover_details1(void* self, int32_t mode) {
    QLowEnergyService_DiscoverDetails1((QLowEnergyService*)self, mode);
}

void q_lowenergyservice_write_characteristic3(void* self, void* characteristic, char* newValue, int32_t mode) {
    QLowEnergyService_WriteCharacteristic3((QLowEnergyService*)self, (QLowEnergyCharacteristic*)characteristic, qstring(newValue), mode);
}

bool q_lowenergyservice_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_lowenergyservice_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_lowenergyservice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergyservice_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_lowenergyservice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_lowenergyservice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_lowenergyservice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_lowenergyservice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_lowenergyservice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_lowenergyservice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_lowenergyservice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_lowenergyservice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_lowenergyservice_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_lowenergyservice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_lowenergyservice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_lowenergyservice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_lowenergyservice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_lowenergyservice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_lowenergyservice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_lowenergyservice_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_lowenergyservice_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_lowenergyservice_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_lowenergyservice_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_lowenergyservice_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_lowenergyservice_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_lowenergyservice_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_lowenergyservice_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_lowenergyservice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_lowenergyservice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_lowenergyservice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_lowenergyservice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_lowenergyservice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_lowenergyservice_dynamic_property_names\n");
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

QBindingStorage* q_lowenergyservice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_lowenergyservice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_lowenergyservice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_lowenergyservice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_lowenergyservice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_lowenergyservice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_lowenergyservice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_lowenergyservice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_lowenergyservice_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_lowenergyservice_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_lowenergyservice_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_lowenergyservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_lowenergyservice_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_lowenergyservice_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_lowenergyservice_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_lowenergyservice_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_lowenergyservice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_lowenergyservice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_lowenergyservice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_lowenergyservice_delete(void* self) {
    QLowEnergyService_Delete((QLowEnergyService*)(self));
}
