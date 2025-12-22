#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKSHAREDCONFIG_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKSHAREDCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksharedconfig.html)

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#locationType)
///
/// @param self KSharedConfig*
///
/// @return enum QStandardPaths__StandardLocation
///
int32_t k_sharedconfig_location_type(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSharedConfig*
///
const char* k_sharedconfig_name(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
///
/// @param self KSharedConfig*
///
/// @return flag of enum KConfig__OpenFlag
///
int32_t k_sharedconfig_open_flags(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// @param self KSharedConfig*
///
bool k_sharedconfig_sync(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
///
/// @param self KSharedConfig*
///
bool k_sharedconfig_is_dirty(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// @param self KSharedConfig*
///
void k_sharedconfig_mark_as_clean(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// @param self KSharedConfig*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_sharedconfig_access_mode(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
///
/// @param self KSharedConfig*
/// @param warnUser bool
///
bool k_sharedconfig_is_config_writable(void* self, bool warnUser);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self KSharedConfig*
/// @param file const char*
///
KConfig* k_sharedconfig_copy_to(void* self, const char* file);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
///
/// @param self KSharedConfig*
/// @param id const char*
/// @param updateFile const char*
///
void k_sharedconfig_check_update(void* self, const char* id, const char* updateFile);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
///
/// @param self KSharedConfig*
///
void k_sharedconfig_reparse_configuration(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
///
/// @param self KSharedConfig*
/// @param sources const char**
///
void k_sharedconfig_add_config_sources(void* self, const char* sources[static 1]);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSharedConfig*
///
const char** k_sharedconfig_additional_config_sources(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#locale)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSharedConfig*
///
const char* k_sharedconfig_locale(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
///
/// @param self KSharedConfig*
/// @param aLocale const char*
///
bool k_sharedconfig_set_locale(void* self, const char* aLocale);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
///
/// @param self KSharedConfig*
/// @param b bool
///
void k_sharedconfig_set_read_defaults(void* self, bool b);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
///
/// @param self KSharedConfig*
///
bool k_sharedconfig_read_defaults(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// @param self KSharedConfig*
///
bool k_sharedconfig_is_immutable(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSharedConfig*
///
const char** k_sharedconfig_group_list(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
///
/// @param self KSharedConfig*
///
libqt_map /* of const char* to const char* */ k_sharedconfig_entry_map(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setMainConfigName)
///
/// @param str const char*
///
void k_sharedconfig_set_main_config_name(const char* str);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_sharedconfig_main_config_name();

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self KSharedConfig*
/// @param file const char*
/// @param config KConfig*
///
KConfig* k_sharedconfig_copy_to2(void* self, const char* file, void* config);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
///
/// @param self KSharedConfig*
/// @param aGroup const char*
///
libqt_map /* of const char* to const char* */ k_sharedconfig_entry_map1(void* self, const char* aGroup);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self KSharedConfig*
/// @param group const char*
///
bool k_sharedconfig_has_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KSharedConfig*
/// @param group const char*
///
KConfigGroup* k_sharedconfig_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KSharedConfig*
/// @param group const char*
///
const KConfigGroup* k_sharedconfig_group2(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KSharedConfig*
/// @param group const char*
///
void k_sharedconfig_delete_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self KSharedConfig*
/// @param group const char*
///
bool k_sharedconfig_is_group_immutable(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KSharedConfig*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_sharedconfig_delete_group2(void* self, const char* group, int32_t flags);
#endif
