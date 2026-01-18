#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBDEVICE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/solid-device.html)

/// k_solid__device_new constructs a new Solid::Device object.
///
Solid__Device* k_solid__device_new();

/// [Upstream resources](https://api.kde.org/solid-device.html)

/// k_solid__device_new2 constructs a new Solid::Device object.
///
/// @param device Solid__Device*
///
Solid__Device* k_solid__device_new2(void* device);

/// [Upstream resources](https://api.kde.org/solid-device.html)

/// k_solid__device_new3 constructs a new Solid::Device object.
///
/// @param udi const char*
///
Solid__Device* k_solid__device_new3(const char* udi);

/// [Upstream resources](https://api.kde.org/solid-device.html#allDevices)
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_all_devices();

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
///
/// @param type enum Solid__DeviceInterface__Type*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_type(int32_t* type);

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate Solid__Predicate*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_query(void* predicate);

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate const char*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_query2(const char* predicate);

/// [Upstream resources](https://api.kde.org/solid-device.html#storageAccessFromPath)
///
/// @param path const char*
///
Solid__Device* k_solid__device_storage_access_from_path(const char* path);

/// [Upstream resources](https://api.kde.org/solid-device.html#operator-eq)
///
/// @param self Solid__Device*
/// @param device Solid__Device*
///
void k_solid__device_operator_assign(void* self, void* device);

/// [Upstream resources](https://api.kde.org/solid-device.html#isValid)
///
/// @param self Solid__Device*
///
bool k_solid__device_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#udi)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_udi(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#parentUdi)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_parent_udi(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#parent)
///
/// @param self Solid__Device*
///
Solid__Device* k_solid__device_parent(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#vendor)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_vendor(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#product)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_product(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_icon(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#emblems)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Solid__Device*
///
const char** k_solid__device_emblems(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_display_name(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Solid__Device*
///
const char* k_solid__device_description(void* self);

/// [Upstream resources](https://api.kde.org/solid-device.html#isDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
///
bool k_solid__device_is_device_interface(void* self, int32_t* type);

/// [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
///
Solid__DeviceInterface* k_solid__device_as_device_interface(void* self, int32_t* type);

/// [Upstream resources](https://api.kde.org/solid-device.html#asDeviceInterface)
///
/// @param self Solid__Device*
/// @param type enum Solid__DeviceInterface__Type*
///
const Solid__DeviceInterface* k_solid__device_as_device_interface2(void* self, int32_t* type);

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromType)
///
/// @param type enum Solid__DeviceInterface__Type*
/// @param parentUdi const char*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_type2(int32_t* type, const char* parentUdi);

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate Solid__Predicate*
/// @param parentUdi const char*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_query22(void* predicate, const char* parentUdi);

/// [Upstream resources](https://api.kde.org/solid-device.html#listFromQuery)
///
/// @param predicate const char*
/// @param parentUdi const char*
///
/// @return libqt_list of Solid__Device*
///
libqt_list k_solid__device_list_from_query23(const char* predicate, const char* parentUdi);

/// Delete this object from C++ memory.
///
/// @param self Solid__Device*
///
void k_solid__device_delete(void* self);

#endif
