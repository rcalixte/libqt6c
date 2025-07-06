#pragma once
#ifndef SRCQT6C_LIBQPERMISSIONS_H
#define SRCQT6C_LIBQPERMISSIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpermission.html

/// q_permission_new constructs a new QPermission object.
///
///
QPermission* q_permission_new();

/// q_permission_new2 constructs a new QPermission object.
///
/// ``` QPermission* param1 ```
QPermission* q_permission_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#status)
///
/// ``` QPermission* self ```
int64_t q_permission_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#type)
///
/// ``` QPermission* self ```
QMetaType* q_permission_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpermission.html#dtor.QPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QPermission* self ```
void q_permission_delete(void* self);

/// https://doc.qt.io/qt-6/qlocationpermission.html

/// q_locationpermission_new constructs a new QLocationPermission object.
///
///
QLocationPermission* q_locationpermission_new();

/// q_locationpermission_new2 constructs a new QLocationPermission object.
///
/// ``` QLocationPermission* other ```
QLocationPermission* q_locationpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAccuracy)
///
/// ``` QLocationPermission* self, enum QLocationPermission__Accuracy accuracy ```
void q_locationpermission_set_accuracy(void* self, int64_t accuracy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#accuracy)
///
/// ``` QLocationPermission* self ```
int64_t q_locationpermission_accuracy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#setAvailability)
///
/// ``` QLocationPermission* self, enum QLocationPermission__Availability availability ```
void q_locationpermission_set_availability(void* self, int64_t availability);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#availability)
///
/// ``` QLocationPermission* self ```
int64_t q_locationpermission_availability(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#operator=)
///
/// ``` QLocationPermission* self, QLocationPermission* other ```
void q_locationpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#swap)
///
/// ``` QLocationPermission* self, QLocationPermission* other ```
void q_locationpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlocationpermission.html#dtor.QLocationPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QLocationPermission* self ```
void q_locationpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcalendarpermission.html

/// q_calendarpermission_new constructs a new QCalendarPermission object.
///
///
QCalendarPermission* q_calendarpermission_new();

/// q_calendarpermission_new2 constructs a new QCalendarPermission object.
///
/// ``` QCalendarPermission* other ```
QCalendarPermission* q_calendarpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#setAccessMode)
///
/// ``` QCalendarPermission* self, enum QCalendarPermission__AccessMode mode ```
void q_calendarpermission_set_access_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#accessMode)
///
/// ``` QCalendarPermission* self ```
int64_t q_calendarpermission_access_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#operator=)
///
/// ``` QCalendarPermission* self, QCalendarPermission* other ```
void q_calendarpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#swap)
///
/// ``` QCalendarPermission* self, QCalendarPermission* other ```
void q_calendarpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcalendarpermission.html#dtor.QCalendarPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QCalendarPermission* self ```
void q_calendarpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcontactspermission.html

/// q_contactspermission_new constructs a new QContactsPermission object.
///
///
QContactsPermission* q_contactspermission_new();

/// q_contactspermission_new2 constructs a new QContactsPermission object.
///
/// ``` QContactsPermission* other ```
QContactsPermission* q_contactspermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#setAccessMode)
///
/// ``` QContactsPermission* self, enum QContactsPermission__AccessMode mode ```
void q_contactspermission_set_access_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#accessMode)
///
/// ``` QContactsPermission* self ```
int64_t q_contactspermission_access_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#operator=)
///
/// ``` QContactsPermission* self, QContactsPermission* other ```
void q_contactspermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#swap)
///
/// ``` QContactsPermission* self, QContactsPermission* other ```
void q_contactspermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcontactspermission.html#dtor.QContactsPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QContactsPermission* self ```
void q_contactspermission_delete(void* self);

/// https://doc.qt.io/qt-6/qbluetoothpermission.html

/// q_bluetoothpermission_new constructs a new QBluetoothPermission object.
///
///
QBluetoothPermission* q_bluetoothpermission_new();

/// q_bluetoothpermission_new2 constructs a new QBluetoothPermission object.
///
/// ``` QBluetoothPermission* other ```
QBluetoothPermission* q_bluetoothpermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#setCommunicationModes)
///
/// ``` QBluetoothPermission* self, uint8_t modes ```
void q_bluetoothpermission_set_communication_modes(void* self, int64_t modes);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#communicationModes)
///
/// ``` QBluetoothPermission* self ```
int64_t q_bluetoothpermission_communication_modes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#operator=)
///
/// ``` QBluetoothPermission* self, QBluetoothPermission* other ```
void q_bluetoothpermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#swap)
///
/// ``` QBluetoothPermission* self, QBluetoothPermission* other ```
void q_bluetoothpermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbluetoothpermission.html#dtor.QBluetoothPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QBluetoothPermission* self ```
void q_bluetoothpermission_delete(void* self);

/// https://doc.qt.io/qt-6/qcamerapermission.html

/// q_camerapermission_new constructs a new QCameraPermission object.
///
///
QCameraPermission* q_camerapermission_new();

/// q_camerapermission_new2 constructs a new QCameraPermission object.
///
/// ``` QCameraPermission* other ```
QCameraPermission* q_camerapermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#operator=)
///
/// ``` QCameraPermission* self, QCameraPermission* other ```
void q_camerapermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#swap)
///
/// ``` QCameraPermission* self, QCameraPermission* other ```
void q_camerapermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamerapermission.html#dtor.QCameraPermission)
///
/// Delete this object from C++ memory.
///
/// ``` QCameraPermission* self ```
void q_camerapermission_delete(void* self);

/// https://doc.qt.io/qt-6/qmicrophonepermission.html

/// q_microphonepermission_new constructs a new QMicrophonePermission object.
///
///
QMicrophonePermission* q_microphonepermission_new();

/// q_microphonepermission_new2 constructs a new QMicrophonePermission object.
///
/// ``` QMicrophonePermission* other ```
QMicrophonePermission* q_microphonepermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#operator=)
///
/// ``` QMicrophonePermission* self, QMicrophonePermission* other ```
void q_microphonepermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#swap)
///
/// ``` QMicrophonePermission* self, QMicrophonePermission* other ```
void q_microphonepermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmicrophonepermission.html#dtor.QMicrophonePermission)
///
/// Delete this object from C++ memory.
///
/// ``` QMicrophonePermission* self ```
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
