#pragma once
#ifndef FOSS_EXTRAS_PACKAGEKITQT_LIBDETAILS_H
#define FOSS_EXTRAS_PACKAGEKITQT_LIBDETAILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

/// q_packagekit__details_new constructs a new PackageKit::Details object.
///
PackageKit__Details* q_packagekit__details_new();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

/// q_packagekit__details_new2 constructs a new PackageKit::Details object.
///
/// @param other libqt_map of const char* to QVariant*
///
PackageKit__Details* q_packagekit__details_new2(libqt_map other);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const PackageKit__Details*
///
const char* q_packagekit__details_package_id(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const PackageKit__Details*
///
const char* q_packagekit__details_description(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self const PackageKit__Details*
///
/// @return enum PackageKit__Transaction__Group
///
int32_t q_packagekit__details_group(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const PackageKit__Details*
///
const char* q_packagekit__details_summary(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const PackageKit__Details*
///
const char* q_packagekit__details_url(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const PackageKit__Details*
///
const char* q_packagekit__details_license(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self const PackageKit__Details*
///
uintptr_t q_packagekit__details_size(const void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Details*
///
void q_packagekit__details_delete(void* self);

#endif
