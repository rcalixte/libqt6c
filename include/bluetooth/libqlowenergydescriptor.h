#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYDESCRIPTOR_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYDESCRIPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html)

/// q_lowenergydescriptor_new constructs a new QLowEnergyDescriptor object.
///
QLowEnergyDescriptor* q_lowenergydescriptor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html)

/// q_lowenergydescriptor_new2 constructs a new QLowEnergyDescriptor object.
///
/// @param other QLowEnergyDescriptor*
///
QLowEnergyDescriptor* q_lowenergydescriptor_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#operator-eq)
///
/// @param self QLowEnergyDescriptor*
/// @param other QLowEnergyDescriptor*
///
void q_lowenergydescriptor_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#isValid)
///
/// @param self QLowEnergyDescriptor*
///
bool q_lowenergydescriptor_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyDescriptor*
///
char* q_lowenergydescriptor_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#uuid)
///
/// @param self QLowEnergyDescriptor*
///
QBluetoothUuid* q_lowenergydescriptor_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLowEnergyDescriptor*
///
const char* q_lowenergydescriptor_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#type)
///
/// @param self QLowEnergyDescriptor*
///
/// @return enum QBluetoothUuid__DescriptorType
///
int32_t q_lowenergydescriptor_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#dtor.QLowEnergyDescriptor)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyDescriptor*
///
void q_lowenergydescriptor_delete(void* self);

#endif
