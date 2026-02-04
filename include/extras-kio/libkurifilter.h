#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKURIFILTER_H
#define SRC_EXTRAS_KIO_QT6C_LIBKURIFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html)

/// k_urifiltersearchprovider_new constructs a new KUriFilterSearchProvider object.
///
KUriFilterSearchProvider* k_urifiltersearchprovider_new();

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html)

/// k_urifiltersearchprovider_new2 constructs a new KUriFilterSearchProvider object.
///
/// @param param1 KUriFilterSearchProvider*
///
KUriFilterSearchProvider* k_urifiltersearchprovider_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#desktopEntryName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterSearchProvider*
///
const char* k_urifiltersearchprovider_desktop_entry_name(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterSearchProvider*
///
const char* k_urifiltersearchprovider_name(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterSearchProvider*
///
const char* k_urifiltersearchprovider_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
///
/// Allows for overriding the related default method
///
/// @param self KUriFilterSearchProvider*
/// @param callback const char* func()
///
void k_urifiltersearchprovider_on_icon_name(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#iconName)
///
/// Base class method implementation
///
/// @param self KUriFilterSearchProvider*
///
const char* k_urifiltersearchprovider_qbase_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUriFilterSearchProvider*
///
const char** k_urifiltersearchprovider_keys(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#defaultKey)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterSearchProvider*
///
const char* k_urifiltersearchprovider_default_key(void* self);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#operator-eq)
///
/// @param self KUriFilterSearchProvider*
/// @param param1 KUriFilterSearchProvider*
///
void k_urifiltersearchprovider_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
///
/// @param self KUriFilterSearchProvider*
/// @param desktopEntryName const char*
///
void k_urifiltersearchprovider_set_desktop_entry_name(void* self, const char* desktopEntryName);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
///
/// Allows for overriding the related default method
///
/// @param self KUriFilterSearchProvider*
/// @param callback void func(KUriFilterSearchProvider* self, const char* desktopEntryName)
///
void k_urifiltersearchprovider_on_set_desktop_entry_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setDesktopEntryName)
///
/// Base class method implementation
///
/// @param self KUriFilterSearchProvider*
/// @param desktopEntryName const char*
///
void k_urifiltersearchprovider_qbase_set_desktop_entry_name(void* self, const char* desktopEntryName);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
///
/// @param self KUriFilterSearchProvider*
/// @param iconName const char*
///
void k_urifiltersearchprovider_set_icon_name(void* self, const char* iconName);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
///
/// Allows for overriding the related default method
///
/// @param self KUriFilterSearchProvider*
/// @param callback void func(KUriFilterSearchProvider* self, const char* iconName)
///
void k_urifiltersearchprovider_on_set_icon_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setIconName)
///
/// Base class method implementation
///
/// @param self KUriFilterSearchProvider*
/// @param iconName const char*
///
void k_urifiltersearchprovider_qbase_set_icon_name(void* self, const char* iconName);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
///
/// @param self KUriFilterSearchProvider*
/// @param keys const char**
///
void k_urifiltersearchprovider_set_keys(void* self, const char* keys[static 1]);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
///
/// Allows for overriding the related default method
///
/// @param self KUriFilterSearchProvider*
/// @param callback void func(KUriFilterSearchProvider* self, const char** keys)
///
void k_urifiltersearchprovider_on_set_keys(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setKeys)
///
/// Base class method implementation
///
/// @param self KUriFilterSearchProvider*
/// @param keys const char**
///
void k_urifiltersearchprovider_qbase_set_keys(void* self, const char* keys[static 1]);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
///
/// @param self KUriFilterSearchProvider*
/// @param name const char*
///
void k_urifiltersearchprovider_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
///
/// Allows for overriding the related default method
///
/// @param self KUriFilterSearchProvider*
/// @param callback void func(KUriFilterSearchProvider* self, const char* name)
///
void k_urifiltersearchprovider_on_set_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#setName)
///
/// Base class method implementation
///
/// @param self KUriFilterSearchProvider*
/// @param name const char*
///
void k_urifiltersearchprovider_qbase_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kurifiltersearchprovider.html#dtor.KUriFilterSearchProvider)
///
/// Delete this object from C++ memory.
///
/// @param self KUriFilterSearchProvider*
///
void k_urifiltersearchprovider_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html)

/// k_urifilterdata_new constructs a new KUriFilterData object.
///
KUriFilterData* k_urifilterdata_new();

/// [Upstream resources](https://api.kde.org/kurifilterdata.html)

/// k_urifilterdata_new2 constructs a new KUriFilterData object.
///
/// @param url QUrl*
///
KUriFilterData* k_urifilterdata_new2(void* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html)

/// k_urifilterdata_new3 constructs a new KUriFilterData object.
///
/// @param url const char*
///
KUriFilterData* k_urifilterdata_new3(const char* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html)

/// k_urifilterdata_new4 constructs a new KUriFilterData object.
///
/// @param other KUriFilterData*
///
KUriFilterData* k_urifilterdata_new4(void* other);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#uri)
///
/// @param self KUriFilterData*
///
QUrl* k_urifilterdata_uri(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#errorMsg)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_error_msg(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#uriType)
///
/// @param self KUriFilterData*
///
/// @return enum KUriFilterData__UriTypes
///
int32_t k_urifilterdata_uri_type(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#absolutePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_absolute_path(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#hasAbsolutePath)
///
/// @param self KUriFilterData*
///
bool k_urifilterdata_has_absolute_path(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#argsAndOptions)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_args_and_options(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#hasArgsAndOptions)
///
/// @param self KUriFilterData*
///
bool k_urifilterdata_has_args_and_options(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#checkForExecutables)
///
/// @param self KUriFilterData*
///
bool k_urifilterdata_check_for_executables(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#typedString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_typed_string(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTerm)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_search_term(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#searchTermSeparator)
///
/// @param self KUriFilterData*
///
QChar* k_urifilterdata_search_term_separator(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#searchProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_search_provider(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#preferredSearchProviders)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUriFilterData*
///
const char** k_urifilterdata_preferred_search_providers(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForSearchProvider)
///
/// @param self KUriFilterData*
/// @param provider const char*
///
KUriFilterSearchProvider* k_urifilterdata_query_for_search_provider(void* self, const char* provider);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#queryForPreferredSearchProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
/// @param provider const char*
///
const char* k_urifilterdata_query_for_preferred_search_provider(void* self, const char* provider);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#allQueriesForSearchProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUriFilterData*
/// @param provider const char*
///
const char** k_urifilterdata_all_queries_for_search_provider(void* self, const char* provider);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#iconNameForPreferredSearchProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
/// @param provider const char*
///
const char* k_urifilterdata_icon_name_for_preferred_search_provider(void* self, const char* provider);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateSearchProviders)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUriFilterData*
///
const char** k_urifilterdata_alternate_search_providers(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#alternateDefaultSearchProvider)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_alternate_default_search_provider(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#defaultUrlScheme)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_default_url_scheme(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#searchFilteringOptions)
///
/// @param self KUriFilterData*
///
/// @return flag of enum KUriFilterData__SearchFilterOption
///
int32_t k_urifilterdata_search_filtering_options(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilterData*
///
const char* k_urifilterdata_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setCheckForExecutables)
///
/// @param self KUriFilterData*
/// @param check bool
///
void k_urifilterdata_set_check_for_executables(void* self, bool check);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
///
/// @param self KUriFilterData*
/// @param url QUrl*
///
void k_urifilterdata_set_data(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setData)
///
/// @param self KUriFilterData*
/// @param url const char*
///
void k_urifilterdata_set_data2(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setAbsolutePath)
///
/// @param self KUriFilterData*
/// @param abs_path const char*
///
bool k_urifilterdata_set_absolute_path(void* self, const char* abs_path);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateSearchProviders)
///
/// @param self KUriFilterData*
/// @param providers const char**
///
void k_urifilterdata_set_alternate_search_providers(void* self, const char* providers[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setAlternateDefaultSearchProvider)
///
/// @param self KUriFilterData*
/// @param provider const char*
///
void k_urifilterdata_set_alternate_default_search_provider(void* self, const char* provider);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setDefaultUrlScheme)
///
/// @param self KUriFilterData*
/// @param defaultUrlScheme const char*
///
void k_urifilterdata_set_default_url_scheme(void* self, const char* defaultUrlScheme);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#setSearchFilteringOptions)
///
/// @param self KUriFilterData*
/// @param options flag of enum KUriFilterData__SearchFilterOption
///
void k_urifilterdata_set_search_filtering_options(void* self, int32_t options);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
///
/// @param self KUriFilterData*
/// @param url QUrl*
///
void k_urifilterdata_operator_assign(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#operator-eq)
///
/// @param self KUriFilterData*
/// @param url const char*
///
void k_urifilterdata_operator_assign2(void* self, const char* url);

/// [Upstream resources](https://api.kde.org/kurifilterdata.html#dtor.KUriFilterData)
///
/// Delete this object from C++ memory.
///
/// @param self KUriFilterData*
///
void k_urifilterdata_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurifilter.html)

/// [Upstream resources](https://api.kde.org/kurifilter.html#self)
///
KUriFilter* k_urifilter_self();

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param data KUriFilterData*
///
bool k_urifilter_filter_uri(void* self, void* data);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param uri QUrl*
///
bool k_urifilter_filter_uri2(void* self, void* uri);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param uri const char*
///
bool k_urifilter_filter_uri3(void* self, const char* uri);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
///
/// @param self KUriFilter*
/// @param uri QUrl*
///
QUrl* k_urifilter_filtered_uri(void* self, void* uri);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilter*
/// @param uri const char*
///
const char* k_urifilter_filtered_uri2(void* self, const char* uri);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterSearchUri)
///
/// @param self KUriFilter*
/// @param data KUriFilterData*
/// @param types flag of enum KUriFilter__SearchFilterType
///
bool k_urifilter_filter_search_uri(void* self, void* data, int32_t types);

/// [Upstream resources](https://api.kde.org/kurifilter.html#pluginNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUriFilter*
///
const char** k_urifilter_plugin_names(void* self);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param data KUriFilterData*
/// @param filters const char**
///
bool k_urifilter_filter_uri22(void* self, void* data, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param uri QUrl*
/// @param filters const char**
///
bool k_urifilter_filter_uri23(void* self, void* uri, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filterUri)
///
/// @param self KUriFilter*
/// @param uri const char*
/// @param filters const char**
///
bool k_urifilter_filter_uri24(void* self, const char* uri, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
///
/// @param self KUriFilter*
/// @param uri QUrl*
/// @param filters const char**
///
QUrl* k_urifilter_filtered_uri22(void* self, void* uri, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilter.html#filteredUri)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUriFilter*
/// @param uri const char*
/// @param filters const char**
///
const char* k_urifilter_filtered_uri23(void* self, const char* uri, const char* filters[static 1]);

/// [Upstream resources](https://api.kde.org/kurifilter.html#dtor.KUriFilter)
///
/// Delete this object from C++ memory.
///
/// @param self KUriFilter*
///
void k_urifilter_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurifilter.html#public-types)

typedef enum {
    KURIFILTERDATA_URITYPES_NETPROTOCOL = 0,
    KURIFILTERDATA_URITYPES_LOCALFILE = 1,
    KURIFILTERDATA_URITYPES_LOCALDIR = 2,
    KURIFILTERDATA_URITYPES_EXECUTABLE = 3,
    KURIFILTERDATA_URITYPES_HELP = 4,
    KURIFILTERDATA_URITYPES_SHELL = 5,
    KURIFILTERDATA_URITYPES_BLOCKED = 6,
    KURIFILTERDATA_URITYPES_ERROR = 7,
    KURIFILTERDATA_URITYPES_UNKNOWN = 8
} KUriFilterData__UriTypes;

/// [Upstream resources](https://api.kde.org/kurifilter.html#public-types)

typedef enum {
    KURIFILTERDATA_SEARCHFILTEROPTION_SEARCHFILTEROPTIONNONE = 0,
    KURIFILTERDATA_SEARCHFILTEROPTION_RETRIEVESEARCHPROVIDERSONLY = 1,
    KURIFILTERDATA_SEARCHFILTEROPTION_RETRIEVEPREFERREDSEARCHPROVIDERSONLY = 2,
    KURIFILTERDATA_SEARCHFILTEROPTION_RETRIEVEAVAILABLESEARCHPROVIDERSONLY = 3
} KUriFilterData__SearchFilterOption;

/// [Upstream resources](https://api.kde.org/kurifilter.html#public-types)

typedef enum {
    KURIFILTER_SEARCHFILTERTYPE_NORMALTEXTFILTER = 1,
    KURIFILTER_SEARCHFILTERTYPE_WEBSHORTCUTFILTER = 2
} KUriFilter__SearchFilterType;

#endif
