#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPLUGINMETADATA_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKPLUGINMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new constructs a new KPluginMetaData object.
///
KPluginMetaData* k_pluginmetadata_new();

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new2 constructs a new KPluginMetaData object.
///
/// @param loader QPluginLoader*
///
KPluginMetaData* k_pluginmetadata_new2(void* loader);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new3 constructs a new KPluginMetaData object.
///
/// @param pluginFile const char*
///
KPluginMetaData* k_pluginmetadata_new3(const char* pluginFile);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new4 constructs a new KPluginMetaData object.
///
/// @param metaData QJsonObject*
/// @param fileName const char*
///
KPluginMetaData* k_pluginmetadata_new4(void* metaData, const char* fileName);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new5 constructs a new KPluginMetaData object.
///
/// @param param1 KPluginMetaData*
///
KPluginMetaData* k_pluginmetadata_new5(void* param1);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new6 constructs a new KPluginMetaData object.
///
/// @param loader QPluginLoader*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
///
KPluginMetaData* k_pluginmetadata_new6(void* loader, int32_t options);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html)

/// k_pluginmetadata_new7 constructs a new KPluginMetaData object.
///
/// @param pluginFile const char*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
///
KPluginMetaData* k_pluginmetadata_new7(const char* pluginFile, int32_t options);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq)
///
/// @param self KPluginMetaData*
/// @param param1 KPluginMetaData*
///
void k_pluginmetadata_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#fromJsonFile)
///
/// @param jsonFile const char*
///
KPluginMetaData* k_pluginmetadata_from_json_file(const char* jsonFile);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
///
/// @param directory const char*
/// @param pluginId const char*
///
KPluginMetaData* k_pluginmetadata_find_plugin_by_id(const char* directory, const char* pluginId);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPlugins)
///
/// @param directory const char*
///
/// @return libqt_list of KPluginMetaData*
///
libqt_list k_pluginmetadata_find_plugins(const char* directory);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#isValid)
///
/// @param self KPluginMetaData*
///
bool k_pluginmetadata_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#isHidden)
///
/// @param self KPluginMetaData*
///
bool k_pluginmetadata_is_hidden(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_file_name(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#rawData)
///
/// @param self KPluginMetaData*
///
QJsonObject* k_pluginmetadata_raw_data(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_name(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_description(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#authors)
///
/// @param self KPluginMetaData*
///
/// @return libqt_list of KAboutPerson*
///
libqt_list k_pluginmetadata_authors(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#translators)
///
/// @param self KPluginMetaData*
///
/// @return libqt_list of KAboutPerson*
///
libqt_list k_pluginmetadata_translators(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#otherContributors)
///
/// @param self KPluginMetaData*
///
/// @return libqt_list of KAboutPerson*
///
libqt_list k_pluginmetadata_other_contributors(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#category)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_category(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#license)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_license(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#licenseText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_license_text(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#copyrightText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_copyright_text(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#pluginId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_plugin_id(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_version(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#website)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_website(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#bugReportUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
///
const char* k_pluginmetadata_bug_report_url(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#mimeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPluginMetaData*
///
const char** k_pluginmetadata_mime_types(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#supportsMimeType)
///
/// @param self KPluginMetaData*
/// @param mimeType const char*
///
bool k_pluginmetadata_supports_mime_type(void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#formFactors)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPluginMetaData*
///
const char** k_pluginmetadata_form_factors(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#isEnabledByDefault)
///
/// @param self KPluginMetaData*
///
bool k_pluginmetadata_is_enabled_by_default(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
/// @param key const char*
///
const char* k_pluginmetadata_value2(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue bool
///
bool k_pluginmetadata_value4(void* self, const char* key, bool defaultValue);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue int
///
int32_t k_pluginmetadata_value6(void* self, const char* key, int defaultValue);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue const char**
///
const char** k_pluginmetadata_value8(void* self, const char* key, const char* defaultValue[static 1]);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-eq-eq)
///
/// @param self KPluginMetaData*
/// @param other KPluginMetaData*
///
bool k_pluginmetadata_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#operator-not-eq)
///
/// @param self KPluginMetaData*
/// @param other KPluginMetaData*
///
bool k_pluginmetadata_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#isStaticPlugin)
///
/// @param self KPluginMetaData*
///
bool k_pluginmetadata_is_static_plugin(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#findPluginById)
///
/// @param directory const char*
/// @param pluginId const char*
/// @param options flag of enum KPluginMetaData__KPluginMetaDataOption
///
KPluginMetaData* k_pluginmetadata_find_plugin_by_id3(const char* directory, const char* pluginId, int32_t options);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPluginMetaData*
/// @param key const char*
/// @param defaultValue const char*
///
const char* k_pluginmetadata_value23(void* self, const char* key, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#dtor.KPluginMetaData)
///
/// Delete this object from C++ memory.
///
/// @param self KPluginMetaData*
///
void k_pluginmetadata_delete(void* self);

/// [Upstream resources](https://api.kde.org/kpluginmetadata.html#public-types)

typedef enum {
    KPLUGINMETADATA_KPLUGINMETADATAOPTION_ALLOWEMPTYMETADATA = 1,
    KPLUGINMETADATA_KPLUGINMETADATAOPTION_CACHEMETADATA = 2
} KPluginMetaData__KPluginMetaDataOption;

#endif
