#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGBASE_H
#define EXTRAS_KCONFIG_LIBKCONFIGBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfigbase.html)

/// [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self const KConfigBase*
/// @param group const char*
///
bool k_configbase_has_group(const void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KConfigBase*
/// @param group const char*
///
KConfigGroup* k_configbase_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self const KConfigBase*
/// @param group const char*
///
const KConfigGroup* k_configbase_group2(const void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KConfigBase*
/// @param group const char*
///
void k_configbase_delete_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self const KConfigBase*
/// @param group const char*
///
bool k_configbase_is_group_immutable(const void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KConfigBase*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configbase_delete_group2(void* self, const char* group, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#dtor.KConfigBase)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigBase*
///
void k_configbase_delete(void* self);

/// [Upstream resources](https://api.kde.org/kconfigbase.html#public-types)

typedef enum {
    KCONFIGBASE_WRITECONFIGFLAG_PERSISTENT = 1,
    KCONFIGBASE_WRITECONFIGFLAG_GLOBAL = 2,
    KCONFIGBASE_WRITECONFIGFLAG_LOCALIZED = 4,
    KCONFIGBASE_WRITECONFIGFLAG_NOTIFY = 9,
    KCONFIGBASE_WRITECONFIGFLAG_NORMAL = 1
} KConfigBase__WriteConfigFlag;

/// [Upstream resources](https://api.kde.org/kconfigbase.html#public-types)

typedef enum {
    KCONFIGBASE_ACCESSMODE_NOACCESS = 0,
    KCONFIGBASE_ACCESSMODE_READONLY = 1,
    KCONFIGBASE_ACCESSMODE_READWRITE = 2
} KConfigBase__AccessMode;

#endif
