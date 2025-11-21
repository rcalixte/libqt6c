#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBCONTENT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBCONTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-content.html

/// k_attica__content_new constructs a new Attica::Content object.
///
Attica__Content* k_attica__content_new();

/// k_attica__content_new2 constructs a new Attica::Content object.
///
/// @param other Attica__Content*
Attica__Content* k_attica__content_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-content.html#operator-eq)
///
/// @param self Attica__Content*
/// @param other Attica__Content*
void k_attica__content_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-content.html#setId)
///
/// @param self Attica__Content*
/// @param id const char*
void k_attica__content_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-content.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setName)
///
/// @param self Attica__Content*
/// @param name const char*
void k_attica__content_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-content.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setRating)
///
/// @param self Attica__Content*
/// @param rating int
void k_attica__content_set_rating(void* self, int rating);

/// [Qt documentation](https://api.kde.org/attica-content.html#rating)
///
/// @param self Attica__Content*
int32_t k_attica__content_rating(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setDownloads)
///
/// @param self Attica__Content*
/// @param downloads int
void k_attica__content_set_downloads(void* self, int downloads);

/// [Qt documentation](https://api.kde.org/attica-content.html#downloads)
///
/// @param self Attica__Content*
int32_t k_attica__content_downloads(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setNumberOfComments)
///
/// @param self Attica__Content*
/// @param numComments int
void k_attica__content_set_number_of_comments(void* self, int numComments);

/// [Qt documentation](https://api.kde.org/attica-content.html#numberOfComments)
///
/// @param self Attica__Content*
int32_t k_attica__content_number_of_comments(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setCreated)
///
/// @param self Attica__Content*
/// @param created QDateTime*
void k_attica__content_set_created(void* self, void* created);

/// [Qt documentation](https://api.kde.org/attica-content.html#created)
///
/// @param self Attica__Content*
QDateTime* k_attica__content_created(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setUpdated)
///
/// @param self Attica__Content*
/// @param updated QDateTime*
void k_attica__content_set_updated(void* self, void* updated);

/// [Qt documentation](https://api.kde.org/attica-content.html#updated)
///
/// @param self Attica__Content*
QDateTime* k_attica__content_updated(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#summary)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_summary(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_description(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#detailpage)
///
/// @param self Attica__Content*
QUrl* k_attica__content_detailpage(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#changelog)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_changelog(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_version(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#depend)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_depend(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#downloadUrlDescription)
///
/// @param self Attica__Content*
/// @param number int
Attica__DownloadDescription* k_attica__content_download_url_description(void* self, int number);

/// [Qt documentation](https://api.kde.org/attica-content.html#downloadUrlDescriptions)
///
/// @param self Attica__Content*
libqt_list /* of Attica__DownloadDescription* */ k_attica__content_download_url_descriptions(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#homePageEntry)
///
/// @param self Attica__Content*
/// @param number int
Attica__HomePageEntry* k_attica__content_home_page_entry(void* self, int number);

/// [Qt documentation](https://api.kde.org/attica-content.html#homePageEntries)
///
/// @param self Attica__Content*
libqt_list /* of Attica__HomePageEntry* */ k_attica__content_home_page_entries(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#previewPicture)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_preview_picture(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#smallPreviewPicture)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_small_preview_picture(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#license)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_license(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#licenseName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_license_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#author)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char* k_attica__content_author(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#icons)
///
/// @param self Attica__Content*
libqt_list /* of Attica__Icon* */ k_attica__content_icons(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#icons)
///
/// @param self Attica__Content*
libqt_list /* of Attica__Icon* */ k_attica__content_icons2(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setIcons)
///
/// @param self Attica__Content*
/// @param icons libqt_list /* of Attica__Icon* */
void k_attica__content_set_icons(void* self, libqt_list icons);

/// [Qt documentation](https://api.kde.org/attica-content.html#videos)
///
/// @param self Attica__Content*
libqt_list /* of QUrl* */ k_attica__content_videos(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setVideos)
///
/// @param self Attica__Content*
/// @param videos libqt_list /* of QUrl* */
void k_attica__content_set_videos(void* self, libqt_list videos);

/// [Qt documentation](https://api.kde.org/attica-content.html#tags)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
const char** k_attica__content_tags(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#setTags)
///
/// @param self Attica__Content*
/// @param tags const char**
void k_attica__content_set_tags(void* self, const char* tags[static 1]);

/// [Qt documentation](https://api.kde.org/attica-content.html#addAttribute)
///
/// @param self Attica__Content*
/// @param key const char*
/// @param value const char*
void k_attica__content_add_attribute(void* self, const char* key, const char* value);

/// [Qt documentation](https://api.kde.org/attica-content.html#attribute)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
/// @param key const char*
const char* k_attica__content_attribute(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/attica-content.html#attributes)
///
/// @param self Attica__Content*
libqt_map /* of const char* to const char* */ k_attica__content_attributes(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#isValid)
///
/// @param self Attica__Content*
bool k_attica__content_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/attica-content.html#previewPicture)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
/// @param number const char*
const char* k_attica__content_preview_picture1(void* self, const char* number);

/// [Qt documentation](https://api.kde.org/attica-content.html#smallPreviewPicture)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Content*
/// @param number const char*
const char* k_attica__content_small_preview_picture1(void* self, const char* number);

/// Delete this object from C++ memory.
///
/// @param self Attica__Content*
void k_attica__content_delete(void* self);

#endif
