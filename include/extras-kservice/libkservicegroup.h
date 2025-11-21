#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICEGROUP_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICEGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kservicegroup.html

/// k_servicegroup_new constructs a new KServiceGroup object.
///
/// @param name const char*
KServiceGroup* k_servicegroup_new(const char* name);

/// k_servicegroup_new2 constructs a new KServiceGroup object.
///
/// @param _fullpath const char*
/// @param _relpath const char*
KServiceGroup* k_servicegroup_new2(const char* _fullpath, const char* _relpath);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#relPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_rel_path(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#caption)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_caption(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_icon(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#comment)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_comment(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#childCount)
///
/// @param self KServiceGroup*
int32_t k_servicegroup_child_count(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#noDisplay)
///
/// @param self KServiceGroup*
bool k_servicegroup_no_display(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#showEmptyMenu)
///
/// @param self KServiceGroup*
bool k_servicegroup_show_empty_menu(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
///
/// @param self KServiceGroup*
/// @param b bool
void k_servicegroup_set_show_empty_menu(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#showInlineHeader)
///
/// @param self KServiceGroup*
bool k_servicegroup_show_inline_header(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
///
/// @param self KServiceGroup*
/// @param _b bool
void k_servicegroup_set_show_inline_header(void* self, bool _b);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#inlineAlias)
///
/// @param self KServiceGroup*
bool k_servicegroup_inline_alias(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setInlineAlias)
///
/// @param self KServiceGroup*
/// @param _b bool
void k_servicegroup_set_inline_alias(void* self, bool _b);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#allowInline)
///
/// @param self KServiceGroup*
bool k_servicegroup_allow_inline(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setAllowInline)
///
/// @param self KServiceGroup*
/// @param _b bool
void k_servicegroup_set_allow_inline(void* self, bool _b);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#inlineValue)
///
/// @param self KServiceGroup*
int32_t k_servicegroup_inline_value(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setInlineValue)
///
/// @param self KServiceGroup*
/// @param _val int
void k_servicegroup_set_inline_value(void* self, int _val);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#suppressGenericNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char** k_servicegroup_suppress_generic_names(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#setLayoutInfo)
///
/// @param self KServiceGroup*
/// @param layout const char**
void k_servicegroup_set_layout_info(void* self, const char* layout[static 1]);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#layoutInfo)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char** k_servicegroup_layout_info(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#baseGroupName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_base_group_name(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#directoryEntryPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_directory_entry_path(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isType)
///
/// @param self KServiceGroup*
/// @param t enum KSycocaEntry__KSycocaType
bool k_servicegroup_is_type(void* self, int32_t t);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#sycocaType)
///
/// @param self KServiceGroup*
///
/// @return enum KSycocaEntry__KSycocaType
int32_t k_servicegroup_sycoca_type(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_name(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#entryPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_entry_path(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#storageId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceGroup*
const char* k_servicegroup_storage_id(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isValid)
///
/// @param self KServiceGroup*
bool k_servicegroup_is_valid(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isDeleted)
///
/// @param self KServiceGroup*
bool k_servicegroup_is_deleted(void* self);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#setDeleted)
///
/// @param self KServiceGroup*
/// @param deleted bool
void k_servicegroup_set_deleted(void* self, bool deleted);

/// Inherited from KSycocaEntry
///
/// [Qt documentation](https://api.kde.org/ksycocaentry.html#isSeparator)
///
/// @param self KServiceGroup*
bool k_servicegroup_is_separator(void* self);

/// [Qt documentation](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KServiceGroup*
void k_servicegroup_delete(void* self);

/// https://api.kde.org/kservicegroup.html#types

typedef enum {
    KSERVICEGROUP_ENTRIESOPTION_NOOPTIONS = 0,
    KSERVICEGROUP_ENTRIESOPTION_SORTENTRIES = 1,
    KSERVICEGROUP_ENTRIESOPTION_EXCLUDENODISPLAY = 2,
    KSERVICEGROUP_ENTRIESOPTION_ALLOWSEPARATORS = 4,
    KSERVICEGROUP_ENTRIESOPTION_SORTBYGENERICNAME = 8
} KServiceGroup__EntriesOption;

#endif
