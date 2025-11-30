#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBDETAILS_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBDETAILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://github.com/PackageKit/PackageKit-Qt

/// q_packagekit__details_new constructs a new PackageKit::Details object.
///
PackageKit__Details* q_packagekit__details_new();

/// q_packagekit__details_new2 constructs a new PackageKit::Details object.
///
/// @param other libqt_map /* of const char* to QVariant* */
PackageKit__Details* q_packagekit__details_new2(libqt_map /* of const char* to QVariant* */ other);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Details*
const char* q_packagekit__details_package_id(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Details*
const char* q_packagekit__details_description(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Details*
///
/// @return enum PackageKit__Transaction__Group
int32_t q_packagekit__details_group(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Details*
const char* q_packagekit__details_summary(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Details*
const char* q_packagekit__details_url(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Details*
const char* q_packagekit__details_license(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Details*
uint64_t q_packagekit__details_size(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Details*
void q_packagekit__details_delete(void* self);

#endif
