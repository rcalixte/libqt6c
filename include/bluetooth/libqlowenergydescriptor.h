#pragma once
#ifndef BLUETOOTH_LIBQLOWENERGYDESCRIPTOR_H
#define BLUETOOTH_LIBQLOWENERGYDESCRIPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QLowEnergyDescriptor* q_lowenergydescriptor_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#operator-eq)
///
/// @param self QLowEnergyDescriptor*
/// @param other QLowEnergyDescriptor*
///
void q_lowenergydescriptor_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#isValid)
///
/// @param self const QLowEnergyDescriptor*
///
bool q_lowenergydescriptor_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLowEnergyDescriptor*
///
char* q_lowenergydescriptor_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#uuid)
///
/// @param self const QLowEnergyDescriptor*
///
QBluetoothUuid* q_lowenergydescriptor_uuid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLowEnergyDescriptor*
///
const char* q_lowenergydescriptor_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#type)
///
/// @param self const QLowEnergyDescriptor*
///
/// @return enum QBluetoothUuid__DescriptorType
///
int32_t q_lowenergydescriptor_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptor.html#dtor.QLowEnergyDescriptor)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyDescriptor*
///
void q_lowenergydescriptor_delete(void* self);

#endif
