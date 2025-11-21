#pragma once
#ifndef SRC_QT6C_LIBQPERMISSIONS_H
#define SRC_QT6C_LIBQPERMISSIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpermission.html

/// q_permission_new constructs a new QPermission object.
///
QPermission* q_permission_new();

/// q_permission_new2 constructs a new QPermission object.
///
/// @param param1 QPermission*
QPermission* q_permission_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#status)
///
/// @param self QPermission*
///
/// @return enum Qt__PermissionStatus
int32_t q_permission_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#type)
///
/// @param self QPermission*
QMetaType* q_permission_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#dtor.QPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QPermission*
void q_permission_delete(void* self);

/// https://doc.qt.io/qt-6/qlocationpermission.html

/// q_locationpermission_new constructs a new QLocationPermission object.
///
QLocationPermission* q_locationpermission_new();

/// q_locationpermission_new2 constructs a new QLocationPermission object.
///
/// @param other QLocationPermission*
QLocationPermission* q_locationpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAccuracy)
///
/// @param self QLocationPermission*
/// @param accuracy enum QLocationPermission__Accuracy
void q_locationpermission_set_accuracy(void* self, uint8_t accuracy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#accuracy)
///
/// @param self QLocationPermission*
///
/// @return enum QLocationPermission__Accuracy
uint8_t q_locationpermission_accuracy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAvailability)
///
/// @param self QLocationPermission*
/// @param availability enum QLocationPermission__Availability
void q_locationpermission_set_availability(void* self, uint8_t availability);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#availability)
///
/// @param self QLocationPermission*
///
/// @return enum QLocationPermission__Availability
uint8_t q_locationpermission_availability(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#operator-eq)
///
/// @param self QLocationPermission*
/// @param other QLocationPermission*
void q_locationpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#swap)
///
/// @param self QLocationPermission*
/// @param other QLocationPermission*
void q_locationpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#dtor.QLocationPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QLocationPermission*
void q_locationpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendarpermission.html

/// q_calendarpermission_new constructs a new QCalendarPermission object.
///
QCalendarPermission* q_calendarpermission_new();

/// q_calendarpermission_new2 constructs a new QCalendarPermission object.
///
/// @param other QCalendarPermission*
QCalendarPermission* q_calendarpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#setAccessMode)
///
/// @param self QCalendarPermission*
/// @param mode enum QCalendarPermission__AccessMode
void q_calendarpermission_set_access_mode(void* self, uint8_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#accessMode)
///
/// @param self QCalendarPermission*
///
/// @return enum QCalendarPermission__AccessMode
uint8_t q_calendarpermission_access_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#operator-eq)
///
/// @param self QCalendarPermission*
/// @param other QCalendarPermission*
void q_calendarpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#swap)
///
/// @param self QCalendarPermission*
/// @param other QCalendarPermission*
void q_calendarpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#dtor.QCalendarPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QCalendarPermission*
void q_calendarpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcontactspermission.html

/// q_contactspermission_new constructs a new QContactsPermission object.
///
QContactsPermission* q_contactspermission_new();

/// q_contactspermission_new2 constructs a new QContactsPermission object.
///
/// @param other QContactsPermission*
QContactsPermission* q_contactspermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#setAccessMode)
///
/// @param self QContactsPermission*
/// @param mode enum QContactsPermission__AccessMode
void q_contactspermission_set_access_mode(void* self, uint8_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#accessMode)
///
/// @param self QContactsPermission*
///
/// @return enum QContactsPermission__AccessMode
uint8_t q_contactspermission_access_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#operator-eq)
///
/// @param self QContactsPermission*
/// @param other QContactsPermission*
void q_contactspermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#swap)
///
/// @param self QContactsPermission*
/// @param other QContactsPermission*
void q_contactspermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#dtor.QContactsPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QContactsPermission*
void q_contactspermission_delete(void* self);

/// https://doc.qt.io/qt-6/qbluetoothpermission.html

/// q_bluetoothpermission_new constructs a new QBluetoothPermission object.
///
QBluetoothPermission* q_bluetoothpermission_new();

/// q_bluetoothpermission_new2 constructs a new QBluetoothPermission object.
///
/// @param other QBluetoothPermission*
QBluetoothPermission* q_bluetoothpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#setCommunicationModes)
///
/// @param self QBluetoothPermission*
/// @param modes flag of enum QBluetoothPermission__CommunicationMode
void q_bluetoothpermission_set_communication_modes(void* self, uint8_t modes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#communicationModes)
///
/// @param self QBluetoothPermission*
///
/// @return flag of enum QBluetoothPermission__CommunicationMode
uint8_t q_bluetoothpermission_communication_modes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#operator-eq)
///
/// @param self QBluetoothPermission*
/// @param other QBluetoothPermission*
void q_bluetoothpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#swap)
///
/// @param self QBluetoothPermission*
/// @param other QBluetoothPermission*
void q_bluetoothpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#dtor.QBluetoothPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothPermission*
void q_bluetoothpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcamerapermission.html

/// q_camerapermission_new constructs a new QCameraPermission object.
///
QCameraPermission* q_camerapermission_new();

/// q_camerapermission_new2 constructs a new QCameraPermission object.
///
/// @param other QCameraPermission*
QCameraPermission* q_camerapermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#operator-eq)
///
/// @param self QCameraPermission*
/// @param other QCameraPermission*
void q_camerapermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#swap)
///
/// @param self QCameraPermission*
/// @param other QCameraPermission*
void q_camerapermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#dtor.QCameraPermission)
///
/// Delete this object from C++ memory.
///
/// @param self QCameraPermission*
void q_camerapermission_delete(void* self);

/// https://doc.qt.io/qt-6/qmicrophonepermission.html

/// q_microphonepermission_new constructs a new QMicrophonePermission object.
///
QMicrophonePermission* q_microphonepermission_new();

/// q_microphonepermission_new2 constructs a new QMicrophonePermission object.
///
/// @param other QMicrophonePermission*
QMicrophonePermission* q_microphonepermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#operator-eq)
///
/// @param self QMicrophonePermission*
/// @param other QMicrophonePermission*
void q_microphonepermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#swap)
///
/// @param self QMicrophonePermission*
/// @param other QMicrophonePermission*
void q_microphonepermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#dtor.QMicrophonePermission)
///
/// Delete this object from C++ memory.
///
/// @param self QMicrophonePermission*
void q_microphonepermission_delete(void* self);

/// https://doc.qt.io/qt-6/qpermissions.html#types

typedef enum {
    QLOCATIONPERMISSION_ACCURACY_APPROXIMATE = 0,
    QLOCATIONPERMISSION_ACCURACY_PRECISE = 1
} QLocationPermission__Accuracy;

typedef enum {
    QLOCATIONPERMISSION_AVAILABILITY_WHENINUSE = 0,
    QLOCATIONPERMISSION_AVAILABILITY_ALWAYS = 1
} QLocationPermission__Availability;

typedef enum {
    QCALENDARPERMISSION_ACCESSMODE_READONLY = 0,
    QCALENDARPERMISSION_ACCESSMODE_READWRITE = 1
} QCalendarPermission__AccessMode;

typedef enum {
    QCONTACTSPERMISSION_ACCESSMODE_READONLY = 0,
    QCONTACTSPERMISSION_ACCESSMODE_READWRITE = 1
} QContactsPermission__AccessMode;

typedef enum {
    QBLUETOOTHPERMISSION_COMMUNICATIONMODE_ACCESS = 1,
    QBLUETOOTHPERMISSION_COMMUNICATIONMODE_ADVERTISE = 2,
    QBLUETOOTHPERMISSION_COMMUNICATIONMODE_DEFAULT = 3
} QBluetoothPermission__CommunicationMode;

#endif
