#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIG_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new constructs a new KConfig object.
///
KConfig* k_config_new();

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new2 constructs a new KConfig object.
///
/// @param file const char*
/// @param backend const char*
///
KConfig* k_config_new2(const char* file, const char* backend);

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new3 constructs a new KConfig object.
///
/// @param file const char*
///
KConfig* k_config_new3(const char* file);

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new4 constructs a new KConfig object.
///
/// @param file const char*
/// @param mode flag of enum KConfig__OpenFlag
///
KConfig* k_config_new4(const char* file, int32_t mode);

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new5 constructs a new KConfig object.
///
/// @param file const char*
/// @param mode flag of enum KConfig__OpenFlag
/// @param type enum QStandardPaths__StandardLocation
///
KConfig* k_config_new5(const char* file, int32_t mode, int32_t type);

/// [Upstream resources](https://api.kde.org/kconfig.html)

/// k_config_new6 constructs a new KConfig object.
///
/// @param file const char*
/// @param backend const char*
/// @param type enum QStandardPaths__StandardLocation
///
KConfig* k_config_new6(const char* file, const char* backend, int32_t type);

/// [Upstream resources](https://api.kde.org/kconfig.html#locationType)
///
/// @param self KConfig*
///
/// @return enum QStandardPaths__StandardLocation
///
int32_t k_config_location_type(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfig*
///
const char* k_config_name(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
///
/// @param self KConfig*
///
/// @return flag of enum KConfig__OpenFlag
///
int32_t k_config_open_flags(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// @param self KConfig*
///
bool k_config_sync(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback bool func()
///
void k_config_on_sync(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_config_super_sync` instead
///
#define k_config_qbase_sync k_config_super_sync

/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// Base class method implementation
///
/// @param self KConfig*
///
bool k_config_super_sync(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
///
/// @param self KConfig*
///
bool k_config_is_dirty(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// @param self KConfig*
///
void k_config_mark_as_clean(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback void func()
///
void k_config_on_mark_as_clean(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_config_super_mark_as_clean` instead
///
#define k_config_qbase_mark_as_clean k_config_super_mark_as_clean

/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// Base class method implementation
///
/// @param self KConfig*
///
void k_config_super_mark_as_clean(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// @param self KConfig*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_config_access_mode(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback int32_t func()
///
void k_config_on_access_mode(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_config_super_access_mode` instead
///
#define k_config_qbase_access_mode k_config_super_access_mode

/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// Base class method implementation
///
/// @param self KConfig*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_config_super_access_mode(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
///
/// @param self KConfig*
/// @param warnUser bool
///
bool k_config_is_config_writable(void* self, bool warnUser);

/// [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self KConfig*
/// @param file const char*
///
KConfig* k_config_copy_to(void* self, const char* file);

/// [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
///
/// @param self KConfig*
/// @param id const char*
/// @param updateFile const char*
///
void k_config_check_update(void* self, const char* id, const char* updateFile);

/// [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
///
/// @param self KConfig*
///
void k_config_reparse_configuration(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
///
/// @param self KConfig*
/// @param sources const char**
///
void k_config_add_config_sources(void* self, const char* sources[static 1]);

/// [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KConfig*
///
const char** k_config_additional_config_sources(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#locale)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KConfig*
///
const char* k_config_locale(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
///
/// @param self KConfig*
/// @param aLocale const char*
///
bool k_config_set_locale(void* self, const char* aLocale);

/// [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
///
/// @param self KConfig*
/// @param b bool
///
void k_config_set_read_defaults(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
///
/// @param self KConfig*
///
bool k_config_read_defaults(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// @param self KConfig*
///
bool k_config_is_immutable(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback bool func()
///
void k_config_on_is_immutable(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_config_super_is_immutable` instead
///
#define k_config_qbase_is_immutable k_config_super_is_immutable

/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// Base class method implementation
///
/// @param self KConfig*
///
bool k_config_super_is_immutable(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KConfig*
///
const char** k_config_group_list(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback const char** func()
///
void k_config_on_group_list(void* self, const char** (*callback)());

/// @warning DEPRECATED: Use `k_config_super_group_list` instead
///
#define k_config_qbase_group_list k_config_super_group_list

/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// Base class method implementation
///
/// @param self KConfig*
///
const char** k_config_super_group_list(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KConfig*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_config_entry_map(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#setMainConfigName)
///
/// @param str const char*
///
void k_config_set_main_config_name(const char* str);

/// [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_config_main_config_name();

/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// @param self KConfig*
/// @param groupName const char*
///
bool k_config_has_group_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback bool func(KConfig* self, const char* groupName)
///
void k_config_on_has_group_impl(void* self, bool (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_config_super_has_group_impl` instead
///
#define k_config_qbase_has_group_impl k_config_super_has_group_impl

/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param groupName const char*
///
bool k_config_super_has_group_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// @param self KConfig*
/// @param groupName const char*
///
KConfigGroup* k_config_group_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback KConfigGroup* func(KConfig* self, const char* groupName)
///
void k_config_on_group_impl(void* self, KConfigGroup* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_config_super_group_impl` instead
///
#define k_config_qbase_group_impl k_config_super_group_impl

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param groupName const char*
///
KConfigGroup* k_config_super_group_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// @param self KConfig*
/// @param groupName const char*
///
const KConfigGroup* k_config_group_impl2(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback const KConfigGroup* func(KConfig* self, const char* groupName)
///
void k_config_on_group_impl2(void* self, const KConfigGroup* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_config_super_group_impl2` instead
///
#define k_config_qbase_group_impl2 k_config_super_group_impl2

/// [Upstream resources](https://api.kde.org/kconfig.html#groupImpl)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param groupName const char*
///
const KConfigGroup* k_config_super_group_impl2(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// @param self KConfig*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_config_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback void func(KConfig* self, const char* groupName, flag of enum KConfigBase__WriteConfigFlag flags)
///
void k_config_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t));

/// @warning DEPRECATED: Use `k_config_super_delete_group_impl` instead
///
#define k_config_qbase_delete_group_impl k_config_super_delete_group_impl

/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_config_super_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// @param self KConfig*
/// @param groupName const char*
///
bool k_config_is_group_immutable_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback bool func(KConfig* self, const char* groupName)
///
void k_config_on_is_group_immutable_impl(void* self, bool (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_config_super_is_group_immutable_impl` instead
///
#define k_config_qbase_is_group_immutable_impl k_config_super_is_group_immutable_impl

/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param groupName const char*
///
bool k_config_super_is_group_immutable_impl(void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// @param self KConfig*
/// @param id int
/// @param data void*
///
void k_config_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KConfig*
/// @param callback void func(KConfig* self, int id, void* data)
///
void k_config_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// @warning DEPRECATED: Use `k_config_super_virtual_hook` instead
///
#define k_config_qbase_virtual_hook k_config_super_virtual_hook

/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KConfig*
/// @param id int
/// @param data void*
///
void k_config_super_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self KConfig*
/// @param file const char*
/// @param config KConfig*
///
KConfig* k_config_copy_to2(void* self, const char* file, void* config);

/// [Upstream resources](https://api.kde.org/kconfig.html#entryMap)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to const char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KConfig*
/// @param aGroup const char*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_config_entry_map1(void* self, const char* aGroup);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self KConfig*
/// @param group const char*
///
bool k_config_has_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KConfig*
/// @param group const char*
///
KConfigGroup* k_config_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KConfig*
/// @param group const char*
///
const KConfigGroup* k_config_group2(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KConfig*
/// @param group const char*
///
void k_config_delete_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self KConfig*
/// @param group const char*
///
bool k_config_is_group_immutable(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KConfig*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_config_delete_group2(void* self, const char* group, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfig.html#dtor.KConfig)
///
/// Delete this object from C++ memory.
///
/// @param self KConfig*
///
void k_config_delete(void* self);

/// [Upstream resources](https://api.kde.org/kconfig.html#public-types)

typedef enum {
    KCONFIG_OPENFLAG_INCLUDEGLOBALS = 1,
    KCONFIG_OPENFLAG_CASCADECONFIG = 2,
    KCONFIG_OPENFLAG_SIMPLECONFIG = 0,
    KCONFIG_OPENFLAG_NOCASCADE = 1,
    KCONFIG_OPENFLAG_NOGLOBALS = 2,
    KCONFIG_OPENFLAG_FULLCONFIG = 3
} KConfig__OpenFlag;

#endif
