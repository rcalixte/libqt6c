#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBDEVICE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-device.html

/// k_solid__device_new constructs a new Solid::Device object.
///
Solid__Device* k_solid__device_new();

/// k_solid__device_new2 constructs a new Solid::Device object.
///
/// @param device Solid__Device*
Solid__Device* k_solid__device_new2(void* device);

/// k_solid__device_new3 constructs a new Solid::Device object.
///
/// @param udi const char*
Solid__Device* k_solid__device_new3(const char* udi);

/// [Qt documentation](https://api.kde.org/solid-device.html#allDevices)
///
libqt_list /* of Solid__Device* */ k_solid__device_all_devices();

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromType)
///
/// @param type enum Solid__DeviceInterface__Type*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_type(int32_t* type);

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate Solid__Predicate*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_query(void* predicate);

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate const char*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_query2(const char* predicate);

/// [Qt documentation](https://api.kde.org/solid-device.html#storageAccessFromPath)
///
/// @param path const char*
Solid__Device* k_solid__device_storage_access_from_path(const char* path);

/// [Qt documentation](https://api.kde.org/solid-device.html#operator-eq)
///
/// @param self Solid__Device*
/// @param device Solid__Device*
void k_solid__device_operator_assign(void* self, void* device);

/// [Qt documentation](https://api.kde.org/solid-device.html#isValid)
///
/// @param self Solid__Device*
bool k_solid__device_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#udi)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_udi(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#parentUdi)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_parent_udi(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#parent)
///
/// @param self Solid__Device*
Solid__Device* k_solid__device_parent(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#vendor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_vendor(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#product)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_product(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_icon(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#emblems)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char** k_solid__device_emblems(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#displayName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_display_name(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Solid__Device*
const char* k_solid__device_description(void* self);

/// [Qt documentation](https://api.kde.org/solid-device.html#isDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
bool k_solid__device_is_device_interface(void* self, int32_t* type);

/// [Qt documentation](https://api.kde.org/solid-device.html#asDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
Solid__DeviceInterface* k_solid__device_as_device_interface(void* self, int32_t* type);

/// [Qt documentation](https://api.kde.org/solid-device.html#asDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
const Solid__DeviceInterface* k_solid__device_as_device_interface2(void* self, int32_t* type);

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromType)
///
/// @param type enum Solid__DeviceInterface__Type*
/// @param parentUdi const char*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_type2(int32_t* type, const char* parentUdi);

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate Solid__Predicate*
/// @param parentUdi const char*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_query22(void* predicate, const char* parentUdi);

/// [Qt documentation](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate const char*
/// @param parentUdi const char*
libqt_list /* of Solid__Device* */ k_solid__device_list_from_query23(const char* predicate, const char* parentUdi);

/// Delete this object from C++ memory.
///
/// @param self Solid__Device*
void k_solid__device_delete(void* self);

#endif
