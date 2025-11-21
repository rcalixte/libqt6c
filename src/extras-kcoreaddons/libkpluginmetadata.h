#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPLUGINMETADATA_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPLUGINMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kpluginmetadata.html

/// k_pluginmetadata_new constructs a new KPluginMetaData object.
///
KPluginMetaData* k_pluginmetadata_new();

/// k_pluginmetadata_new2 constructs a new KPluginMetaData object.
///
/// @param loader QPluginLoader*
KPluginMetaData* k_pluginmetadata_new2(void* loader);

/// k_pluginmetadata_new3 constructs a new KPluginMetaData object.
///
/// @param pluginFile const char*
KPluginMetaData* k_pluginmetadata_new3(const char* pluginFile);

/// k_pluginmetadata_new4 constructs a new KPluginMetaData object.
///
/// @param metaData QJsonObject*
/// @param fileName const char*
KPluginMetaData* k_pluginmetadata_new4(void* metaData, const char* fileName);

/// k_pluginmetadata_new5 constructs a new KPluginMetaData object.
///
/// @param param1 KPluginMetaData*
KPluginMetaData* k_pluginmetadata_new5(void* param1);

/// k_pluginmetadata_new6 constructs a new KPluginMetaData object.
///
/// @param loader QPluginLoader*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
KPluginMetaData* k_pluginmetadata_new6(void* loader, int32_t options);

/// k_pluginmetadata_new7 constructs a new KPluginMetaData object.
///
/// @param pluginFile const char*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
KPluginMetaData* k_pluginmetadata_new7(const char* pluginFile, int32_t options);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#operator-eq)
///
/// @param self KPluginMetaData*
/// @param param1 KPluginMetaData*
void k_pluginmetadata_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#fromJsonFile)
///
/// @param jsonFile const char*
KPluginMetaData* k_pluginmetadata_from_json_file(const char* jsonFile);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#findPluginById)
///
/// @param directory const char*
/// @param pluginId const char*
KPluginMetaData* k_pluginmetadata_find_plugin_by_id(const char* directory, const char* pluginId);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#isValid)
///
/// @param self KPluginMetaData*
bool k_pluginmetadata_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#isHidden)
///
/// @param self KPluginMetaData*
bool k_pluginmetadata_is_hidden(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_file_name(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#rawData)
///
/// @param self KPluginMetaData*
QJsonObject* k_pluginmetadata_raw_data(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_name(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_description(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#authors)
///
/// @param self KPluginMetaData*
libqt_list /* of KAboutPerson* */ k_pluginmetadata_authors(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#translators)
///
/// @param self KPluginMetaData*
libqt_list /* of KAboutPerson* */ k_pluginmetadata_translators(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#otherContributors)
///
/// @param self KPluginMetaData*
libqt_list /* of KAboutPerson* */ k_pluginmetadata_other_contributors(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#category)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_category(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_icon_name(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#license)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_license(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#licenseText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_license_text(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#copyrightText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_copyright_text(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#pluginId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_plugin_id(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_version(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#website)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_website(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#bugReportUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char* k_pluginmetadata_bug_report_url(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char** k_pluginmetadata_mime_types(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#supportsMimeType)
///
/// @param self KPluginMetaData*
/// @param mimeType const char*
bool k_pluginmetadata_supports_mime_type(void* self, const char* mimeType);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#formFactors)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
const char** k_pluginmetadata_form_factors(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#isEnabledByDefault)
///
/// @param self KPluginMetaData*
bool k_pluginmetadata_is_enabled_by_default(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
/// @param key const char*
const char* k_pluginmetadata_value2(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#value)
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue bool
bool k_pluginmetadata_value4(void* self, const char* key, bool defaultValue);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#value)
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue int
int32_t k_pluginmetadata_value6(void* self, const char* key, int defaultValue);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue const char**
const char** k_pluginmetadata_value8(void* self, const char* key, const char* defaultValue[static 1]);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#operator-eq-eq)
///
/// @param self KPluginMetaData*
/// @param other KPluginMetaData*
bool k_pluginmetadata_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#operator-not-eq)
///
/// @param self KPluginMetaData*
/// @param other KPluginMetaData*
bool k_pluginmetadata_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#isStaticPlugin)
///
/// @param self KPluginMetaData*
bool k_pluginmetadata_is_static_plugin(void* self);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#findPluginById)
///
/// @param directory const char*
/// @param pluginId const char*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
KPluginMetaData* k_pluginmetadata_find_plugin_by_id3(const char* directory, const char* pluginId, int32_t options);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue const char*
const char* k_pluginmetadata_value23(void* self, const char* key, const char* defaultValue);

/// [Qt documentation](https://api.kde.org/kpluginmetadata.html#dtor.KPluginMetaData)
///
/// Delete this object from C++ memory.
///
/// @param self KPluginMetaData*
void k_pluginmetadata_delete(void* self);

/// https://api.kde.org/kpluginmetadata.html#types

typedef enum {
    KPLUGINMETADATA_KPLUGINMETADATAOPTION_ALLOWEMPTYMETADATA = 1,
    KPLUGINMETADATA_KPLUGINMETADATAOPTION_CACHEMETADATA = 2
} KPluginMetaData__KPluginMetaDataOption;

#endif
