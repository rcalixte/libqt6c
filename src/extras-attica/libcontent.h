#pragma once
#ifndef EXTRAS_ATTICA_LIBCONTENT_H
#define EXTRAS_ATTICA_LIBCONTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-content.html)

/// k_attica__content_new constructs a new Attica::Content object.
///
Attica__Content* k_attica__content_new();

/// [Upstream resources](https://api.kde.org/attica-content.html)

/// k_attica__content_new2 constructs a new Attica::Content object.
///
/// @param other Attica__Content*
///
Attica__Content* k_attica__content_new2(const void* other);

/// [Upstream resources](https://api.kde.org/attica-content.html#operator-eq)
///
/// @param self Attica__Content*
/// @param other Attica__Content*
///
void k_attica__content_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/attica-content.html#setId)
///
/// @param self Attica__Content*
/// @param id const char*
///
void k_attica__content_set_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-content.html#id)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_id(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setName)
///
/// @param self Attica__Content*
/// @param name const char*
///
void k_attica__content_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-content.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setRating)
///
/// @param self Attica__Content*
/// @param rating int
///
void k_attica__content_set_rating(void* self, int rating);

/// [Upstream resources](https://api.kde.org/attica-content.html#rating)
///
/// @param self const Attica__Content*
///
int32_t k_attica__content_rating(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setDownloads)
///
/// @param self Attica__Content*
/// @param downloads int
///
void k_attica__content_set_downloads(void* self, int downloads);

/// [Upstream resources](https://api.kde.org/attica-content.html#downloads)
///
/// @param self const Attica__Content*
///
int32_t k_attica__content_downloads(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setNumberOfComments)
///
/// @param self Attica__Content*
/// @param numComments int
///
void k_attica__content_set_number_of_comments(void* self, int numComments);

/// [Upstream resources](https://api.kde.org/attica-content.html#numberOfComments)
///
/// @param self const Attica__Content*
///
int32_t k_attica__content_number_of_comments(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setCreated)
///
/// @param self Attica__Content*
/// @param created QDateTime*
///
void k_attica__content_set_created(void* self, const void* created);

/// [Upstream resources](https://api.kde.org/attica-content.html#created)
///
/// @param self const Attica__Content*
///
QDateTime* k_attica__content_created(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setUpdated)
///
/// @param self Attica__Content*
/// @param updated QDateTime*
///
void k_attica__content_set_updated(void* self, const void* updated);

/// [Upstream resources](https://api.kde.org/attica-content.html#updated)
///
/// @param self const Attica__Content*
///
QDateTime* k_attica__content_updated(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#summary)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_summary(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_description(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#detailpage)
///
/// @param self const Attica__Content*
///
QUrl* k_attica__content_detailpage(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#changelog)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_changelog(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_version(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#depend)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_depend(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescription)
///
/// @param self const Attica__Content*
/// @param number int
///
Attica__DownloadDescription* k_attica__content_download_url_description(const void* self, int number);

/// [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescriptions)
///
/// @param self const Attica__Content*
///
/// @return libqt_list of Attica__DownloadDescription*
///
libqt_list k_attica__content_download_url_descriptions(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#homePageEntry)
///
/// @param self const Attica__Content*
/// @param number int
///
Attica__HomePageEntry* k_attica__content_home_page_entry(const void* self, int number);

/// [Upstream resources](https://api.kde.org/attica-content.html#homePageEntries)
///
/// @param self Attica__Content*
///
/// @return libqt_list of Attica__HomePageEntry*
///
libqt_list k_attica__content_home_page_entries(void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#previewPicture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_preview_picture(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#smallPreviewPicture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_small_preview_picture(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#license)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_license(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#licenseName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_license_name(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#author)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
///
const char* k_attica__content_author(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#icons)
///
/// @param self Attica__Content*
///
/// @return libqt_list of Attica__Icon*
///
libqt_list k_attica__content_icons(void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#icons)
///
/// @param self const Attica__Content*
///
/// @return libqt_list of Attica__Icon*
///
libqt_list k_attica__content_icons2(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setIcons)
///
/// @param self Attica__Content*
/// @param icons libqt_list of Attica__Icon*
///
void k_attica__content_set_icons(void* self, libqt_list icons);

/// [Upstream resources](https://api.kde.org/attica-content.html#videos)
///
/// @param self Attica__Content*
///
/// @return libqt_list of QUrl*
///
libqt_list k_attica__content_videos(void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setVideos)
///
/// @param self Attica__Content*
/// @param videos libqt_list of QUrl*
///
void k_attica__content_set_videos(void* self, libqt_list videos);

/// [Upstream resources](https://api.kde.org/attica-content.html#tags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Attica__Content*
///
const char** k_attica__content_tags(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#setTags)
///
/// @param self Attica__Content*
/// @param tags const char**
///
void k_attica__content_set_tags(void* self, const char* tags[static 1]);

/// [Upstream resources](https://api.kde.org/attica-content.html#addAttribute)
///
/// @param self Attica__Content*
/// @param key const char*
/// @param value const char*
///
void k_attica__content_add_attribute(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/attica-content.html#attribute)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
/// @param key const char*
///
const char* k_attica__content_attribute(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/attica-content.html#attributes)
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
/// @param self const Attica__Content*
///
/// @return libqt_map of const char* to const char*
///
libqt_map k_attica__content_attributes(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#isValid)
///
/// @param self const Attica__Content*
///
bool k_attica__content_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/attica-content.html#previewPicture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
/// @param number const char*
///
const char* k_attica__content_preview_picture1(const void* self, const char* number);

/// [Upstream resources](https://api.kde.org/attica-content.html#smallPreviewPicture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Attica__Content*
/// @param number const char*
///
const char* k_attica__content_small_preview_picture1(const void* self, const char* number);

/// Delete this object from C++ memory.
///
/// @param self Attica__Content*
///
void k_attica__content_delete(void* self);

#endif
