#pragma once
#ifndef EXTRAS_KCONFIG_LIBKCONFIGGROUP_H
#define EXTRAS_KCONFIG_LIBKCONFIGGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kconfiggroup.html)

/// k_configgroup_new constructs a new KConfigGroup object.
///
KConfigGroup* k_configgroup_new();

/// [Upstream resources](https://api.kde.org/kconfiggroup.html)

/// k_configgroup_new2 constructs a new KConfigGroup object.
///
/// @param master KConfigBase*
/// @param group const char*
///
KConfigGroup* k_configgroup_new2(void* master, const char* group);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html)

/// k_configgroup_new3 constructs a new KConfigGroup object.
///
/// @param master KConfigBase*
/// @param group const char*
///
KConfigGroup* k_configgroup_new3(const void* master, const char* group);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html)

/// k_configgroup_new4 constructs a new KConfigGroup object.
///
/// @param param1 KConfigGroup*
///
KConfigGroup* k_configgroup_new4(const void* param1);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isValid)
///
/// @param self const KConfigGroup*
///
bool k_configgroup_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
///
const char* k_configgroup_name(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#exists)
///
/// @param self const KConfigGroup*
///
bool k_configgroup_exists(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
///
/// @param self KConfigGroup*
///
bool k_configgroup_sync(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback bool func(KConfigGroup* self)
///
void k_configgroup_on_sync(void* self, bool (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#sync)
///
/// Base class method implementation
///
/// @param self KConfigGroup*
///
bool k_configgroup_super_sync(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
///
/// @param self KConfigGroup*
///
void k_configgroup_mark_as_clean(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback void func(KConfigGroup* self)
///
void k_configgroup_on_mark_as_clean(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#markAsClean)
///
/// Base class method implementation
///
/// @param self KConfigGroup*
///
void k_configgroup_super_mark_as_clean(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
///
/// @param self const KConfigGroup*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_configgroup_access_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback int32_t func(const KConfigGroup* self)
///
void k_configgroup_on_access_mode(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#accessMode)
///
/// Base class method implementation
///
/// @param self const KConfigGroup*
///
/// @return enum KConfigBase__AccessMode
///
int32_t k_configgroup_super_access_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
///
/// @param self KConfigGroup*
///
KConfig* k_configgroup_config(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#config)
///
/// @param self const KConfigGroup*
///
const KConfig* k_configgroup_config2(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#copyTo)
///
/// @param self const KConfigGroup*
/// @param other KConfigBase*
///
void k_configgroup_copy_to(const void* self, void* other);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
///
/// @param self KConfigGroup*
/// @param parent KConfigBase*
///
void k_configgroup_reparent(void* self, void* parent);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
///
/// @param self KConfigGroup*
/// @param keys libqt_list of const char*
/// @param other KConfigGroup*
///
void k_configgroup_move_values_to(void* self, libqt_list keys, void* other);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
///
/// @param self KConfigGroup*
/// @param other KConfigGroup*
///
void k_configgroup_move_values_to2(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#parent)
///
/// @param self const KConfigGroup*
///
KConfigGroup* k_configgroup_parent(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
///
const char** k_configgroup_group_list(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback const char** func(const KConfigGroup* self)
///
void k_configgroup_on_group_list(void* self, const char** (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#groupList)
///
/// Base class method implementation
///
/// @param self const KConfigGroup*
///
const char** k_configgroup_super_group_list(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#keyList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
///
const char** k_configgroup_key_list(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
///
/// @param self KConfigGroup*
///
void k_configgroup_delete_group(void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault QVariant*
///
QVariant* k_configgroup_read_entry(const void* self, const char* key, const void* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault QVariant*
///
QVariant* k_configgroup_read_entry2(const void* self, const char* key, const void* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry3(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry4(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
///
const char* k_configgroup_read_entry5(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
///
const char* k_configgroup_read_entry6(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault libqt_list of QVariant*
///
/// @return libqt_list of QVariant*
///
libqt_list k_configgroup_read_entry7(const void* self, const char* key, libqt_list aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault libqt_list of QVariant*
///
/// @return libqt_list of QVariant*
///
libqt_list k_configgroup_read_entry8(const void* self, const char* key, libqt_list aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_entry9(const void* self, const char* key, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_entry10(const void* self, const char* key, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
///
const char** k_configgroup_read_xdg_list_entry(const void* self, const char* pKey);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
///
const char** k_configgroup_read_xdg_list_entry2(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_path_entry(const void* self, const char* pKey, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_path_entry2(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_path_entry3(const void* self, const char* pKey, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readPathEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_path_entry4(const void* self, const char* key, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
///
const char* k_configgroup_read_entry_untranslated(const void* self, const char* pKey);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
///
const char* k_configgroup_read_entry_untranslated2(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value QVariant*
///
void k_configgroup_write_entry(void* self, const char* key, const void* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value QVariant*
///
void k_configgroup_write_entry2(void* self, const char* key, const void* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
///
void k_configgroup_write_entry3(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
///
void k_configgroup_write_entry4(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value char*
///
void k_configgroup_write_entry5(void* self, const char* key, char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value char*
///
void k_configgroup_write_entry6(void* self, const char* key, char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
///
void k_configgroup_write_entry7(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
///
void k_configgroup_write_entry8(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
///
void k_configgroup_write_entry9(void* self, const char* key, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
///
void k_configgroup_write_entry10(void* self, const char* key, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value libqt_list of QVariant*
///
void k_configgroup_write_entry11(void* self, const char* key, libqt_list value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value libqt_list of QVariant*
///
void k_configgroup_write_entry12(void* self, const char* key, libqt_list value);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param value const char**
///
void k_configgroup_write_xdg_list_entry(void* self, const char* pKey, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
///
void k_configgroup_write_xdg_list_entry2(void* self, const char* key, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param path const char*
///
void k_configgroup_write_path_entry(void* self, const char* pKey, const char* path);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param Key const char*
/// @param path const char*
///
void k_configgroup_write_path_entry2(void* self, const char* Key, const char* path);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param value const char**
///
void k_configgroup_write_path_entry3(void* self, const char* pKey, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
///
void k_configgroup_write_path_entry4(void* self, const char* key, const char* value[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
///
void k_configgroup_delete_entry(void* self, const char* pKey);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
///
void k_configgroup_delete_entry2(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_has_key(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasKey)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_has_key2(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
///
/// @param self const KConfigGroup*
///
bool k_configgroup_is_immutable(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback bool func(const KConfigGroup* self)
///
void k_configgroup_on_is_immutable(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isImmutable)
///
/// Base class method implementation
///
/// @param self const KConfigGroup*
///
bool k_configgroup_super_is_immutable(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_is_entry_immutable(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isEntryImmutable)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_is_entry_immutable2(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
///
/// @param self KConfigGroup*
/// @param key const char*
///
void k_configgroup_revert_to_default(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
///
/// @param self KConfigGroup*
/// @param key const char*
///
void k_configgroup_revert_to_default2(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_has_default(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasDefault)
///
/// @param self const KConfigGroup*
/// @param key const char*
///
bool k_configgroup_has_default2(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#entryMap)
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
/// @param self const KConfigGroup*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_configgroup_entry_map(const void* self);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
///
/// @param self const KConfigGroup*
/// @param groupName const char*
///
bool k_configgroup_has_group_impl(const void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback bool func(const KConfigGroup* self, const char* groupName)
///
void k_configgroup_on_has_group_impl(void* self, bool (*callback)(const void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#hasGroupImpl)
///
/// Base class method implementation
///
/// @param self const KConfigGroup*
/// @param groupName const char*
///
bool k_configgroup_super_has_group_impl(const void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
///
/// @param self KConfigGroup*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback void func(KConfigGroup* self, const char* groupName, flag of enum KConfigBase__WriteConfigFlag flags)
///
void k_configgroup_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroupImpl)
///
/// Base class method implementation
///
/// @param self KConfigGroup*
/// @param groupName const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_super_delete_group_impl(void* self, const char* groupName, int32_t flags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
///
/// @param self const KConfigGroup*
/// @param groupName const char*
///
bool k_configgroup_is_group_immutable_impl(const void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
///
/// Allows for overriding the related default method
///
/// @param self KConfigGroup*
/// @param callback bool func(const KConfigGroup* self, const char* groupName)
///
void k_configgroup_on_is_group_immutable_impl(void* self, bool (*callback)(const void*, const char*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#isGroupImmutableImpl)
///
/// Base class method implementation
///
/// @param self const KConfigGroup*
/// @param groupName const char*
///
bool k_configgroup_super_is_group_immutable_impl(const void* self, const char* groupName);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#copyTo)
///
/// @param self const KConfigGroup*
/// @param other KConfigBase*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_copy_to2(const void* self, void* other, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#reparent)
///
/// @param self KConfigGroup*
/// @param parent KConfigBase*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_reparent2(void* self, void* parent, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
///
/// @param self KConfigGroup*
/// @param keys libqt_list of const char*
/// @param other KConfigGroup*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_move_values_to3(void* self, libqt_list keys, void* other, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#moveValuesTo)
///
/// @param self KConfigGroup*
/// @param other KConfigGroup*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_move_values_to22(void* self, void* other, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteGroup)
///
/// @param self KConfigGroup*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_delete_group1(void* self, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry22(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry23(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_xdg_list_entry22(const void* self, const char* pKey, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readXdgListEntry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char**
///
const char** k_configgroup_read_xdg_list_entry23(const void* self, const char* key, const char* aDefault[static 1]);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param pKey const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry_untranslated22(const void* self, const char* pKey, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#readEntryUntranslated)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KConfigGroup*
/// @param key const char*
/// @param aDefault const char*
///
const char* k_configgroup_read_entry_untranslated23(const void* self, const char* key, const char* aDefault);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value QVariant*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry32(void* self, const char* key, const void* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value QVariant*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry33(void* self, const char* key, const void* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry34(void* self, const char* key, const char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry35(void* self, const char* key, const char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry36(void* self, const char* key, char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry37(void* self, const char* key, char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry38(void* self, const char* key, const char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry39(void* self, const char* key, const char* value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry310(void* self, const char* key, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry311(void* self, const char* key, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value libqt_list of QVariant*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry312(void* self, const char* key, libqt_list value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value libqt_list of QVariant*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_entry313(void* self, const char* key, libqt_list value, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_xdg_list_entry3(void* self, const char* pKey, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writeXdgListEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_xdg_list_entry32(void* self, const char* key, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param path const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_path_entry32(void* self, const char* pKey, const char* path, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param Key const char*
/// @param path const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_path_entry33(void* self, const char* Key, const char* path, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_path_entry34(void* self, const char* pKey, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#writePathEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param value const char**
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_write_path_entry35(void* self, const char* key, const char* value[static 1], int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
///
/// @param self KConfigGroup*
/// @param pKey const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_delete_entry22(void* self, const char* pKey, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#deleteEntry)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param pFlags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_delete_entry23(void* self, const char* key, int32_t pFlags);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param pFlag flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_revert_to_default22(void* self, const char* key, int32_t pFlag);

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#revertToDefault)
///
/// @param self KConfigGroup*
/// @param key const char*
/// @param pFlag flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_revert_to_default23(void* self, const char* key, int32_t pFlag);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#hasGroup)
///
/// @param self const KConfigGroup*
/// @param group const char*
///
bool k_configgroup_has_group(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self KConfigGroup*
/// @param group const char*
///
KConfigGroup* k_configgroup_group(void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#group)
///
/// @param self const KConfigGroup*
/// @param group const char*
///
const KConfigGroup* k_configgroup_group2(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#isGroupImmutable)
///
/// @param self const KConfigGroup*
/// @param group const char*
///
bool k_configgroup_is_group_immutable(const void* self, const char* group);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#deleteGroup)
///
/// @param self KConfigGroup*
/// @param group const char*
/// @param flags flag of enum KConfigBase__WriteConfigFlag
///
void k_configgroup_delete_group2(void* self, const char* group, int32_t flags);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KConfigGroup*
/// @param id int
/// @param data void*
///
void k_configgroup_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KConfigGroup*
/// @param id int
/// @param data void*
///
void k_configgroup_super_virtual_hook(void* self, int id, void* data);

/// Inherited from KConfigBase
///
/// [Upstream resources](https://api.kde.org/kconfigbase.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KConfigGroup*
/// @param callback void func(KConfigGroup* self, int id, void* data)
///
void k_configgroup_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kconfiggroup.html#dtor.KConfigGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KConfigGroup*
///
void k_configgroup_delete(void* self);

#endif
