#include "libqmetatype.hpp"
#include "libqpermissions.hpp"
#include "libqpermissions.h"

QPermission* q_permission_new() {
    return QPermission_new();
}

QPermission* q_permission_new2(void* param1) {
    return QPermission_new2((QPermission*)param1);
}

int32_t q_permission_status(void* self) {
    return QPermission_Status((QPermission*)self);
}

QMetaType* q_permission_type(void* self) {
    return QPermission_Type((QPermission*)self);
}

void q_permission_delete(void* self) {
    QPermission_Delete((QPermission*)(self));
}

QLocationPermission* q_locationpermission_new() {
    return QLocationPermission_new();
}

QLocationPermission* q_locationpermission_new2(void* other) {
    return QLocationPermission_new2((QLocationPermission*)other);
}

void q_locationpermission_set_accuracy(void* self, uint8_t accuracy) {
    QLocationPermission_SetAccuracy((QLocationPermission*)self, accuracy);
}

uint8_t q_locationpermission_accuracy(void* self) {
    return QLocationPermission_Accuracy((QLocationPermission*)self);
}

void q_locationpermission_set_availability(void* self, uint8_t availability) {
    QLocationPermission_SetAvailability((QLocationPermission*)self, availability);
}

uint8_t q_locationpermission_availability(void* self) {
    return QLocationPermission_Availability((QLocationPermission*)self);
}

void q_locationpermission_operator_assign(void* self, void* other) {
    QLocationPermission_OperatorAssign((QLocationPermission*)self, (QLocationPermission*)other);
}

void q_locationpermission_swap(void* self, void* other) {
    QLocationPermission_Swap((QLocationPermission*)self, (QLocationPermission*)other);
}

void q_locationpermission_delete(void* self) {
    QLocationPermission_Delete((QLocationPermission*)(self));
}

QCalendarPermission* q_calendarpermission_new() {
    return QCalendarPermission_new();
}

QCalendarPermission* q_calendarpermission_new2(void* other) {
    return QCalendarPermission_new2((QCalendarPermission*)other);
}

void q_calendarpermission_set_access_mode(void* self, uint8_t mode) {
    QCalendarPermission_SetAccessMode((QCalendarPermission*)self, mode);
}

uint8_t q_calendarpermission_access_mode(void* self) {
    return QCalendarPermission_AccessMode((QCalendarPermission*)self);
}

void q_calendarpermission_operator_assign(void* self, void* other) {
    QCalendarPermission_OperatorAssign((QCalendarPermission*)self, (QCalendarPermission*)other);
}

void q_calendarpermission_swap(void* self, void* other) {
    QCalendarPermission_Swap((QCalendarPermission*)self, (QCalendarPermission*)other);
}

void q_calendarpermission_delete(void* self) {
    QCalendarPermission_Delete((QCalendarPermission*)(self));
}

QContactsPermission* q_contactspermission_new() {
    return QContactsPermission_new();
}

QContactsPermission* q_contactspermission_new2(void* other) {
    return QContactsPermission_new2((QContactsPermission*)other);
}

void q_contactspermission_set_access_mode(void* self, uint8_t mode) {
    QContactsPermission_SetAccessMode((QContactsPermission*)self, mode);
}

uint8_t q_contactspermission_access_mode(void* self) {
    return QContactsPermission_AccessMode((QContactsPermission*)self);
}

void q_contactspermission_operator_assign(void* self, void* other) {
    QContactsPermission_OperatorAssign((QContactsPermission*)self, (QContactsPermission*)other);
}

void q_contactspermission_swap(void* self, void* other) {
    QContactsPermission_Swap((QContactsPermission*)self, (QContactsPermission*)other);
}

void q_contactspermission_delete(void* self) {
    QContactsPermission_Delete((QContactsPermission*)(self));
}

QBluetoothPermission* q_bluetoothpermission_new() {
    return QBluetoothPermission_new();
}

QBluetoothPermission* q_bluetoothpermission_new2(void* other) {
    return QBluetoothPermission_new2((QBluetoothPermission*)other);
}

void q_bluetoothpermission_set_communication_modes(void* self, int64_t modes) {
    QBluetoothPermission_SetCommunicationModes((QBluetoothPermission*)self, modes);
}

int64_t q_bluetoothpermission_communication_modes(void* self) {
    return QBluetoothPermission_CommunicationModes((QBluetoothPermission*)self);
}

void q_bluetoothpermission_operator_assign(void* self, void* other) {
    QBluetoothPermission_OperatorAssign((QBluetoothPermission*)self, (QBluetoothPermission*)other);
}

void q_bluetoothpermission_swap(void* self, void* other) {
    QBluetoothPermission_Swap((QBluetoothPermission*)self, (QBluetoothPermission*)other);
}

void q_bluetoothpermission_delete(void* self) {
    QBluetoothPermission_Delete((QBluetoothPermission*)(self));
}

QCameraPermission* q_camerapermission_new() {
    return QCameraPermission_new();
}

QCameraPermission* q_camerapermission_new2(void* other) {
    return QCameraPermission_new2((QCameraPermission*)other);
}

void q_camerapermission_operator_assign(void* self, void* other) {
    QCameraPermission_OperatorAssign((QCameraPermission*)self, (QCameraPermission*)other);
}

void q_camerapermission_swap(void* self, void* other) {
    QCameraPermission_Swap((QCameraPermission*)self, (QCameraPermission*)other);
}

void q_camerapermission_delete(void* self) {
    QCameraPermission_Delete((QCameraPermission*)(self));
}

QMicrophonePermission* q_microphonepermission_new() {
    return QMicrophonePermission_new();
}

QMicrophonePermission* q_microphonepermission_new2(void* other) {
    return QMicrophonePermission_new2((QMicrophonePermission*)other);
}

void q_microphonepermission_operator_assign(void* self, void* other) {
    QMicrophonePermission_OperatorAssign((QMicrophonePermission*)self, (QMicrophonePermission*)other);
}

void q_microphonepermission_swap(void* self, void* other) {
    QMicrophonePermission_Swap((QMicrophonePermission*)self, (QMicrophonePermission*)other);
}

void q_microphonepermission_delete(void* self) {
    QMicrophonePermission_Delete((QMicrophonePermission*)(self));
}
