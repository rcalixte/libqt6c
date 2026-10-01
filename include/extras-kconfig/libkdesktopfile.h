#pragma once
#ifndef EXTRAS_KCONFIG_LIBKDESKTOPFILE_H
#define EXTRAS_KCONFIG_LIBKDESKTOPFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kdesktopfile.html)

/// k_desktopfile_new constructs a new KDesktopFile object.
///
/// @param resourceType enum QStandardPaths__StandardLocation
/// @param fileName const char*
///
KDesktopFile* k_desktopfile_new(int32_t resourceType, const char* fileName);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html)

/// k_desktopfile_new2 constructs a new KDesktopFile object.
///
/// @param fileName const char*
///
KDesktopFile* k_desktopfile_new2(const char* fileName);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#isDesktopFile)
///
/// @param path const char*
///
bool k_desktopfile_is_desktop_file(const char* path);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#isAuthorizedDesktopFile)
///
/// @param path const char*
///
bool k_desktopfile_is_authorized_desktop_file(const char* path);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#locateLocal)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param path const char*
///
const char* k_desktopfile_locate_local(const char* path);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#desktopGroup)
///
/// @param self const KDesktopFile*
///
KConfigGroup* k_desktopfile_desktop_group(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_type(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readIcon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_name(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readComment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_comment(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readGenericName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_generic_name(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_path(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_url(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readActions)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDesktopFile*
///
const char** k_desktopfile_read_actions(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readMimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDesktopFile*
///
const char** k_desktopfile_read_mime_types(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
///
KConfigGroup* k_desktopfile_action_group(void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#actionGroup)
///
/// @param self const KDesktopFile*
/// @param group const char*
///
KConfigGroup* k_desktopfile_action_group2(const void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#hasActionGroup)
///
/// @param self const KDesktopFile*
/// @param group const char*
///
bool k_desktopfile_has_action_group(const void* self, const char* group);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#hasLinkType)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_has_link_type(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#hasApplicationType)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_has_application_type(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#hasDeviceType)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_has_device_type(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#tryExec)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_try_exec(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#readDocPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_read_doc_path(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#noDisplay)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_no_display(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#copyTo)
///
/// @param self const KDesktopFile*
/// @param file const char*
///
KDesktopFile* k_desktopfile_copy_to(const void* self, const char* file);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_file_name(const void* self);

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#actions)
///
/// @param self const KDesktopFile*
///
/// @return libqt_list of KDesktopFileAction*
///
libqt_list k_desktopfile_actions(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#locationType)
///
/// @param self const KDesktopFile*
///
/// @return enum QStandardPaths__StandardLocation
///
int32_t k_desktopfile_location_type(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_name(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#openFlags)
///
/// @param self const KDesktopFile*
///
/// @return flag of enum KConfig__OpenFlag
///
int32_t k_desktopfile_open_flags(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isDirty)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_is_dirty(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isConfigWritable)
///
/// @param self KDesktopFile*
/// @param warnUser bool
///
bool k_desktopfile_is_config_writable(void* self, bool warnUser);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#checkUpdate)
///
/// @param self KDesktopFile*
/// @param id const char*
/// @param updateFile const char*
///
void k_desktopfile_check_update(void* self, const char* id, const char* updateFile);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#reparseConfiguration)
///
/// @param self KDesktopFile*
///
void k_desktopfile_reparse_configuration(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#addConfigSources)
///
/// @param self KDesktopFile*
/// @param sources const char**
///
void k_desktopfile_add_config_sources(void* self, const char* sources[static 1]);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#additionalConfigSources)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KDesktopFile*
///
const char** k_desktopfile_additional_config_sources(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#locale)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KDesktopFile*
///
const char* k_desktopfile_locale(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setLocale)
///
/// @param self KDesktopFile*
/// @param aLocale const char*
///
bool k_desktopfile_set_locale(void* self, const char* aLocale);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setReadDefaults)
///
/// @param self KDesktopFile*
/// @param b bool
///
void k_desktopfile_set_read_defaults(void* self, bool b);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#readDefaults)
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_read_defaults(const void* self);

/// Inherited from KConfig
///
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
/// @param self const KDesktopFile*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_desktopfile_entry_map(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#setMainConfigName)
///
/// @param str const char*
///
void k_desktopfile_set_main_config_name(const char* str);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#mainConfigName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* k_desktopfile_main_config_name();

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self const KDesktopFile*
/// @param file const char*
/// @param config KConfig*
///
KConfig* k_desktopfile_copy_to2(const void* self, const char* file, void* config);

/// Inherited from KConfig
///
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
/// @param self const KDesktopFile*
/// @param aGroup const char*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_desktopfile_entry_map1(const void* self, const char* aGroup);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self const KDesktopFile*
/// @param group const char*
///
bool k_desktopfile_has_group(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KDesktopFile*
/// @param group const char*
///
KConfigGroup* k_desktopfile_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self const KDesktopFile*
/// @param group const char*
///
const KConfigGroup* k_desktopfile_group2(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
///
void k_desktopfile_delete_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self const KDesktopFile*
/// @param group const char*
///
bool k_desktopfile_is_group_immutable(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#operator-eq)
///
/// @param self KDesktopFile*
/// @param param1 KConfigBase*
///
void k_desktopfile_operator_assign(void* self, const void* param1);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_desktopfile_delete_group2(void* self, const char* group, int32_t flags);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
///
bool k_desktopfile_sync(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
///
bool k_desktopfile_super_sync(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self)
///
void k_desktopfile_on_sync(void* self, bool (*callback)(void*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
///
void k_desktopfile_mark_as_clean(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
///
void k_desktopfile_super_mark_as_clean(void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func(KDesktopFile* self)
///
void k_desktopfile_on_mark_as_clean(void* self, void (*callback)(void*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDesktopFile*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_desktopfile_access_mode(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDesktopFile*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_desktopfile_super_access_mode(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback int32_t func(KDesktopFile* self)
///
void k_desktopfile_on_access_mode(void* self, int32_t (*callback)(const void*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_is_immutable(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDesktopFile*
///
bool k_desktopfile_super_is_immutable(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self)
///
void k_desktopfile_on_is_immutable(void* self, bool (*callback)(const void*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDesktopFile*
///
const char** k_desktopfile_group_list(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDesktopFile*
///
const char** k_desktopfile_super_group_list(const void* self);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#groupList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback const char** func(KDesktopFile* self)
///
void k_desktopfile_on_group_list(void* self, const char** (*callback)(const void*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDesktopFile*
/// @param groupName const char*
///
bool k_desktopfile_has_group_impl(const void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDesktopFile*
/// @param groupName const char*
///
bool k_desktopfile_super_has_group_impl(const void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self, const char* groupName)
///
void k_desktopfile_on_has_group_impl(void* self, bool (*callback)(const void*, const char*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_desktopfile_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_desktopfile_super_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func(KDesktopFile* self, const char* groupName, flag of enum KConfigBase__WriteConfigFlag flags)
///
void k_desktopfile_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KDesktopFile*
/// @param groupName const char*
///
bool k_desktopfile_is_group_immutable_impl(const void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KDesktopFile*
/// @param groupName const char*
///
bool k_desktopfile_super_is_group_immutable_impl(const void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self, const char* groupName)
///
void k_desktopfile_on_is_group_immutable_impl(void* self, bool (*callback)(const void*, const char*));

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param id int
/// @param data void*
///
void k_desktopfile_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param id int
/// @param data void*
///
void k_desktopfile_super_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfig
///
/// [Upstream resources](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func(KDesktopFile* self, int id, void* data)
///
void k_desktopfile_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kdesktopfile.html#dtor.KDesktopFile)
///
/// Delete this object from C++ memory.
///
/// @param self KDesktopFile*
///
void k_desktopfile_delete(void* self);

#endif
