#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSERVICEGROUP_H
#define EXTRAS_KSERVICE_LIBKSERVICEGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kservicegroup.html)

/// k_servicegroup_new constructs a new KServiceGroup object.
///
/// @param name const char*
///
KServiceGroup* k_servicegroup_new(const char* name);

/// [Upstream resources](https://api.kde.org/kservicegroup.html)

/// k_servicegroup_new2 constructs a new KServiceGroup object.
///
/// @param _fullpath const char*
/// @param _relpath const char*
///
KServiceGroup* k_servicegroup_new2(const char* _fullpath, const char* _relpath);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#relPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_rel_path(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#caption)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_caption(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_comment(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#childCount)
///
/// @param self const KServiceGroup*
///
int32_t k_servicegroup_child_count(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#noDisplay)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_no_display(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#showEmptyMenu)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_show_empty_menu(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
///
/// @param self KServiceGroup*
/// @param b bool
///
void k_servicegroup_set_show_empty_menu(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#showInlineHeader)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_show_inline_header(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
///
/// @param self KServiceGroup*
/// @param _b bool
///
void k_servicegroup_set_show_inline_header(void* self, bool _b);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#inlineAlias)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_inline_alias(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineAlias)
///
/// @param self KServiceGroup*
/// @param _b bool
///
void k_servicegroup_set_inline_alias(void* self, bool _b);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#allowInline)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_allow_inline(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setAllowInline)
///
/// @param self KServiceGroup*
/// @param _b bool
///
void k_servicegroup_set_allow_inline(void* self, bool _b);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#inlineValue)
///
/// @param self const KServiceGroup*
///
int32_t k_servicegroup_inline_value(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineValue)
///
/// @param self KServiceGroup*
/// @param _val int
///
void k_servicegroup_set_inline_value(void* self, int _val);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#suppressGenericNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KServiceGroup*
///
const char** k_servicegroup_suppress_generic_names(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#setLayoutInfo)
///
/// @param self KServiceGroup*
/// @param layout const char**
///
void k_servicegroup_set_layout_info(void* self, const char* layout[static 1]);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#layoutInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KServiceGroup*
///
const char** k_servicegroup_layout_info(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#baseGroupName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_base_group_name(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#directoryEntryPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_directory_entry_path(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self const KServiceGroup*
/// @param t enum KSycocaEntry__KSycocaType
///
bool k_servicegroup_is_type(const void* self, int32_t t);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self const KServiceGroup*
///
/// @return enum KSycocaEntry__KSycocaType
///
int32_t k_servicegroup_sycoca_type(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_name(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_entry_path(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#storageId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceGroup*
///
const char* k_servicegroup_storage_id(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_is_valid(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_is_deleted(const void* self);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KServiceGroup*
/// @param deleted bool
///
void k_servicegroup_set_deleted(void* self, bool deleted);

/// Inherited from KSycocaEntry
///
/// [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self const KServiceGroup*
///
bool k_servicegroup_is_separator(const void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KServiceGroup*
///
void k_servicegroup_delete(void* self);

/// [Upstream resources](https://api.kde.org/kservicegroup.html#public-types)

typedef enum {
    KSERVICEGROUP_ENTRIESOPTION_NOOPTIONS = 0,
    KSERVICEGROUP_ENTRIESOPTION_SORTENTRIES = 1,
    KSERVICEGROUP_ENTRIESOPTION_EXCLUDENODISPLAY = 2,
    KSERVICEGROUP_ENTRIESOPTION_ALLOWSEPARATORS = 4,
    KSERVICEGROUP_ENTRIESOPTION_SORTBYGENERICNAME = 8
} KServiceGroup__EntriesOption;

#endif
