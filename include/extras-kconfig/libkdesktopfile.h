#pragma once
#ifndef SRC_EXTRAS_KCONFIG_QT6C_LIBKDESKTOPFILE_H
#define SRC_EXTRAS_KCONFIG_QT6C_LIBKDESKTOPFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kdesktopfile.html

/// k_desktopfile_new constructs a new KDesktopFile object.
///
/// @param resourceType enum QStandardPaths__StandardLocation
/// @param fileName const char*
KDesktopFile* k_desktopfile_new(int32_t resourceType, const char* fileName);

/// k_desktopfile_new2 constructs a new KDesktopFile object.
///
/// @param fileName const char*
KDesktopFile* k_desktopfile_new2(const char* fileName);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#isDesktopFile)
///
/// @param path const char*
bool k_desktopfile_is_desktop_file(const char* path);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#isAuthorizedDesktopFile)
///
/// @param path const char*
bool k_desktopfile_is_authorized_desktop_file(const char* path);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#locateLocal)
///
/// Caller is responsible for freeing the returned memory
///
/// @param path const char*
const char* k_desktopfile_locate_local(const char* path);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#desktopGroup)
///
/// @param self KDesktopFile*
KConfigGroup* k_desktopfile_desktop_group(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_type(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readIcon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_icon(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_name(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readComment)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_comment(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readGenericName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_generic_name(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_path(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_url(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readActions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char** k_desktopfile_read_actions(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readMimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char** k_desktopfile_read_mime_types(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#actionGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
KConfigGroup* k_desktopfile_action_group(void* self, const char* group);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#actionGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
KConfigGroup* k_desktopfile_action_group2(void* self, const char* group);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#hasActionGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
bool k_desktopfile_has_action_group(void* self, const char* group);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#hasLinkType)
///
/// @param self KDesktopFile*
bool k_desktopfile_has_link_type(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#hasApplicationType)
///
/// @param self KDesktopFile*
bool k_desktopfile_has_application_type(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#hasDeviceType)
///
/// @param self KDesktopFile*
bool k_desktopfile_has_device_type(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#tryExec)
///
/// @param self KDesktopFile*
bool k_desktopfile_try_exec(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#readDocPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_read_doc_path(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#noDisplay)
///
/// @param self KDesktopFile*
bool k_desktopfile_no_display(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#copyTo)
///
/// @param self KDesktopFile*
/// @param file const char*
KDesktopFile* k_desktopfile_copy_to(void* self, const char* file);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_file_name(void* self);

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#actions)
///
/// @param self KDesktopFile*
libqt_list /* of KDesktopFileAction* */ k_desktopfile_actions(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#locationType)
///
/// @param self KDesktopFile*
///
/// @return enum QStandardPaths__StandardLocation
int32_t k_desktopfile_location_type(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_name(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#openFlags)
///
/// @param self KDesktopFile*
///
/// @return flag of enum KConfig__OpenFlag
int32_t k_desktopfile_open_flags(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isDirty)
///
/// @param self KDesktopFile*
bool k_desktopfile_is_dirty(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isConfigWritable)
///
/// @param self KDesktopFile*
/// @param warnUser bool
bool k_desktopfile_is_config_writable(void* self, bool warnUser);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#checkUpdate)
///
/// @param self KDesktopFile*
/// @param id const char*
/// @param updateFile const char*
void k_desktopfile_check_update(void* self, const char* id, const char* updateFile);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#reparseConfiguration)
///
/// @param self KDesktopFile*
void k_desktopfile_reparse_configuration(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#addConfigSources)
///
/// @param self KDesktopFile*
/// @param sources const char**
void k_desktopfile_add_config_sources(void* self, const char* sources[static 1]);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#additionalConfigSources)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char** k_desktopfile_additional_config_sources(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#locale)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KDesktopFile*
const char* k_desktopfile_locale(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#setLocale)
///
/// @param self KDesktopFile*
/// @param aLocale const char*
bool k_desktopfile_set_locale(void* self, const char* aLocale);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#setReadDefaults)
///
/// @param self KDesktopFile*
/// @param b bool
void k_desktopfile_set_read_defaults(void* self, bool b);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#readDefaults)
///
/// @param self KDesktopFile*
bool k_desktopfile_read_defaults(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#entryMap)
///
/// @param self KDesktopFile*
libqt_map /* of const char* to const char* */ k_desktopfile_entry_map(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#setMainConfigName)
///
/// @param str const char*
void k_desktopfile_set_main_config_name(const char* str);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#mainConfigName)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_desktopfile_main_config_name();

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#copyTo)
///
/// @param self KDesktopFile*
/// @param file const char*
/// @param config KConfig*
KConfig* k_desktopfile_copy_to2(void* self, const char* file, void* config);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#entryMap)
///
/// @param self KDesktopFile*
/// @param aGroup const char*
libqt_map /* of const char* to const char* */ k_desktopfile_entry_map1(void* self, const char* aGroup);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
bool k_desktopfile_has_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KDesktopFile*
/// @param group const char*
KConfigGroup* k_desktopfile_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KDesktopFile*
/// @param group const char*
const KConfigGroup* k_desktopfile_group2(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
void k_desktopfile_delete_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self KDesktopFile*
/// @param group const char*
bool k_desktopfile_is_group_immutable(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Qt documentation](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KDesktopFile*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_desktopfile_delete_group2(void* self, const char* group, int32_t flags);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
bool k_desktopfile_sync(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
bool k_desktopfile_qbase_sync(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#sync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func()
void k_desktopfile_on_sync(void* self, bool (*callback)());

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
void k_desktopfile_mark_as_clean(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
void k_desktopfile_qbase_mark_as_clean(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#markAsClean)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func()
void k_desktopfile_on_mark_as_clean(void* self, void (*callback)());

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
///
/// @return enum KConfigBase__AccessMode
int32_t k_desktopfile_access_mode(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
///
/// @return enum KConfigBase__AccessMode
int32_t k_desktopfile_qbase_access_mode(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#accessMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback int32_t func()
void k_desktopfile_on_access_mode(void* self, int32_t (*callback)());

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
bool k_desktopfile_is_immutable(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
bool k_desktopfile_qbase_is_immutable(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isImmutable)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func()
void k_desktopfile_on_is_immutable(void* self, bool (*callback)());

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupList)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
const char** k_desktopfile_group_list(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupList)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
const char** k_desktopfile_qbase_group_list(void* self);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback const char** func()
void k_desktopfile_on_group_list(void* self, const char** (*callback)());

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
bool k_desktopfile_has_group_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
bool k_desktopfile_qbase_has_group_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#hasGroupImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self, const char* groupName)
void k_desktopfile_on_has_group_impl(void* self, bool (*callback)(void*, const char*));

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
KConfigGroup* k_desktopfile_group_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
KConfigGroup* k_desktopfile_qbase_group_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#groupImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback KConfigGroup* func(KDesktopFile* self, const char* groupName)
void k_desktopfile_on_group_impl(void* self, KConfigGroup* (*callback)(void*, const char*));

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_desktopfile_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
void k_desktopfile_qbase_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#deleteGroupImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func(KDesktopFile* self, const char* groupName, flag of enum KConfigBase__WriteConfigFlag flags)
void k_desktopfile_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
bool k_desktopfile_is_group_immutable_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param groupName const char*
bool k_desktopfile_qbase_is_group_immutable_impl(void* self, const char* groupName);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#isGroupImmutableImpl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback bool func(KDesktopFile* self, const char* groupName)
void k_desktopfile_on_is_group_immutable_impl(void* self, bool (*callback)(void*, const char*));

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KDesktopFile*
/// @param id int
/// @param data void*
void k_desktopfile_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param id int
/// @param data void*
void k_desktopfile_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfig
///
/// [Qt documentation](https://api.kde.org/kconfig.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KDesktopFile*
/// @param callback void func(KDesktopFile* self, int id, void* data)
void k_desktopfile_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api.kde.org/kdesktopfile.html#dtor.KDesktopFile)
///
/// Delete this object from C++ memory.
///
/// @param self KDesktopFile*
void k_desktopfile_delete(void* self);

#endif
