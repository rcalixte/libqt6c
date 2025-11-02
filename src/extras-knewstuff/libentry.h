#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFQT6C_LIBENTRY_H
#define SRC_EXTRAS_KNEWSTUFFQT6C_LIBENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore.html

/// [Qt documentation](https://api.kde.org/knscore.html#replaceBBCode)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_nscore_replace_b_b_code(const char* param1);

/// [Qt documentation](https://api.kde.org/knscore.html#qHash)
///
/// @param param1 KNSCore__Entry*
/// @param param2 uint64_t
uint64_t k_nscore_q_hash(void* param1, uint64_t param2);

/// https://api.kde.org/knscore-entry.html

/// k_nscore__entry_new constructs a new KNSCore::Entry object.
///
KNSCore__Entry* k_nscore__entry_new();

/// k_nscore__entry_new2 constructs a new KNSCore::Entry object.
///
/// @param other KNSCore__Entry*
KNSCore__Entry* k_nscore__entry_new2(void* other);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-eq)
///
/// @param self KNSCore__Entry*
/// @param other KNSCore__Entry*
void k_nscore__entry_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-eq-eq)
///
/// @param self KNSCore__Entry*
/// @param other KNSCore__Entry*
bool k_nscore__entry_operator_equal(void* self, void* other);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-lt)
///
/// @param self KNSCore__Entry*
/// @param other KNSCore__Entry*
bool k_nscore__entry_operator_lesser(void* self, void* other);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#isValid)
///
/// @param self KNSCore__Entry*
bool k_nscore__entry_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setName)
///
/// @param self KNSCore__Entry*
/// @param name const char*
void k_nscore__entry_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_name(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setUniqueId)
///
/// @param self KNSCore__Entry*
/// @param id const char*
void k_nscore__entry_set_unique_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#uniqueId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_unique_id(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setCategory)
///
/// @param self KNSCore__Entry*
/// @param category const char*
void k_nscore__entry_set_category(void* self, const char* category);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#category)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_category(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setHomepage)
///
/// @param self KNSCore__Entry*
/// @param page QUrl*
void k_nscore__entry_set_homepage(void* self, void* page);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#homepage)
///
/// @param self KNSCore__Entry*
QUrl* k_nscore__entry_homepage(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setAuthor)
///
/// @param self KNSCore__Entry*
/// @param author KNSCore__Author*
void k_nscore__entry_set_author(void* self, void* author);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#author)
///
/// @param self KNSCore__Entry*
KNSCore__Author* k_nscore__entry_author(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setLicense)
///
/// @param self KNSCore__Entry*
/// @param license const char*
void k_nscore__entry_set_license(void* self, const char* license);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#license)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_license(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setSummary)
///
/// @param self KNSCore__Entry*
/// @param summary const char*
void k_nscore__entry_set_summary(void* self, const char* summary);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#shortSummary)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_short_summary(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setShortSummary)
///
/// @param self KNSCore__Entry*
/// @param summary const char*
void k_nscore__entry_set_short_summary(void* self, const char* summary);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#summary)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_summary(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setChangelog)
///
/// @param self KNSCore__Entry*
/// @param changelog const char*
void k_nscore__entry_set_changelog(void* self, const char* changelog);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#changelog)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_changelog(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setVersion)
///
/// @param self KNSCore__Entry*
/// @param version const char*
void k_nscore__entry_set_version(void* self, const char* version);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_version(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setReleaseDate)
///
/// @param self KNSCore__Entry*
/// @param releasedate QDate*
void k_nscore__entry_set_release_date(void* self, void* releasedate);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#releaseDate)
///
/// @param self KNSCore__Entry*
QDate* k_nscore__entry_release_date(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setUpdateVersion)
///
/// @param self KNSCore__Entry*
/// @param version const char*
void k_nscore__entry_set_update_version(void* self, const char* version);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#updateVersion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_update_version(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setUpdateReleaseDate)
///
/// @param self KNSCore__Entry*
/// @param releasedate QDate*
void k_nscore__entry_set_update_release_date(void* self, void* releasedate);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#updateReleaseDate)
///
/// @param self KNSCore__Entry*
QDate* k_nscore__entry_update_release_date(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setPayload)
///
/// @param self KNSCore__Entry*
/// @param url const char*
void k_nscore__entry_set_payload(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#payload)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_payload(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewUrl)
///
/// @param self KNSCore__Entry*
/// @param url const char*
void k_nscore__entry_set_preview_url(void* self, const char* url);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#previewUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_preview_url(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#previewImage)
///
/// @param self KNSCore__Entry*
QImage* k_nscore__entry_preview_image(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewImage)
///
/// @param self KNSCore__Entry*
/// @param image QImage*
void k_nscore__entry_set_preview_image(void* self, void* image);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setInstalledFiles)
///
/// @param self KNSCore__Entry*
/// @param files const char**
void k_nscore__entry_set_installed_files(void* self, const char* files[static 1]);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#installedFiles)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char** k_nscore__entry_installed_files(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#uninstalledFiles)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char** k_nscore__entry_uninstalled_files(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setRating)
///
/// @param self KNSCore__Entry*
/// @param rating int
void k_nscore__entry_set_rating(void* self, int rating);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#rating)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_rating(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberOfComments)
///
/// @param self KNSCore__Entry*
/// @param comments int
void k_nscore__entry_set_number_of_comments(void* self, int comments);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#numberOfComments)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_number_of_comments(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setDownloadCount)
///
/// @param self KNSCore__Entry*
/// @param downloads int
void k_nscore__entry_set_download_count(void* self, int downloads);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadCount)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_download_count(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#numberFans)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_number_fans(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberFans)
///
/// @param self KNSCore__Entry*
/// @param fans int
void k_nscore__entry_set_number_fans(void* self, int fans);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#numberKnowledgebaseEntries)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_number_knowledgebase_entries(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberKnowledgebaseEntries)
///
/// @param self KNSCore__Entry*
/// @param num int
void k_nscore__entry_set_number_knowledgebase_entries(void* self, int num);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#knowledgebaseLink)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_knowledgebase_link(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setKnowledgebaseLink)
///
/// @param self KNSCore__Entry*
/// @param link const char*
void k_nscore__entry_set_knowledgebase_link(void* self, const char* link);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadLinkCount)
///
/// @param self KNSCore__Entry*
int32_t k_nscore__entry_download_link_count(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadLinkInformationList)
///
/// @param self KNSCore__Entry*
libqt_list /* of KNSCore__Entry__DownloadLinkInformation* */ k_nscore__entry_download_link_information_list(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#appendDownloadLinkInformation)
///
/// @param self KNSCore__Entry*
/// @param info KNSCore__Entry__DownloadLinkInformation*
void k_nscore__entry_append_download_link_information(void* self, void* info);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#clearDownloadLinkInformation)
///
/// @param self KNSCore__Entry*
void k_nscore__entry_clear_download_link_information(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#donationLink)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_donation_link(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setDonationLink)
///
/// @param self KNSCore__Entry*
/// @param link const char*
void k_nscore__entry_set_donation_link(void* self, const char* link);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#tags)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char** k_nscore__entry_tags(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setTags)
///
/// @param self KNSCore__Entry*
/// @param tags const char**
void k_nscore__entry_set_tags(void* self, const char* tags[static 1]);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#providerId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
const char* k_nscore__entry_provider_id(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setProviderId)
///
/// @param self KNSCore__Entry*
/// @param id const char*
void k_nscore__entry_set_provider_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setSource)
///
/// @param self KNSCore__Entry*
/// @param source enum KNSCore__Entry__Source
void k_nscore__entry_set_source(void* self, int32_t source);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#source)
///
/// @param self KNSCore__Entry*
///
/// @return enum KNSCore__Entry__Source
int32_t k_nscore__entry_source(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryType)
///
/// @param self KNSCore__Entry*
/// @param type enum KNSCore__Entry__EntryType
void k_nscore__entry_set_entry_type(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#entryType)
///
/// @param self KNSCore__Entry*
///
/// @return enum KNSCore__Entry__EntryType
int32_t k_nscore__entry_entry_type(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryXML)
///
/// @param self KNSCore__Entry*
/// @param reader QXmlStreamReader*
bool k_nscore__entry_set_entry_x_m_l(void* self, void* reader);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setStatus)
///
/// @param self KNSCore__Entry*
/// @param status enum KNSCore__Entry__Status
void k_nscore__entry_set_status(void* self, int32_t status);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#status)
///
/// @param self KNSCore__Entry*
///
/// @return enum KNSCore__Entry__Status
int32_t k_nscore__entry_status(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryDeleted)
///
/// @param self KNSCore__Entry*
void k_nscore__entry_set_entry_deleted(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewUrl)
///
/// @param self KNSCore__Entry*
/// @param url const char*
/// @param type enum KNSCore__Entry__PreviewType
void k_nscore__entry_set_preview_url2(void* self, const char* url, int32_t type);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#previewUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry*
/// @param type enum KNSCore__Entry__PreviewType
const char* k_nscore__entry_preview_url1(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#previewImage)
///
/// @param self KNSCore__Entry*
/// @param type enum KNSCore__Entry__PreviewType
QImage* k_nscore__entry_preview_image1(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewImage)
///
/// @param self KNSCore__Entry*
/// @param image QImage*
/// @param type enum KNSCore__Entry__PreviewType
void k_nscore__entry_set_preview_image2(void* self, void* image, int32_t type);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Entry*
void k_nscore__entry_delete(void* self);

/// https://api.kde.org/knscore-entry-downloadlinkinformation.html

/// k_nscore__entry__downloadlinkinformation_new constructs a new KNSCore::Entry::DownloadLinkInformation object.
///
/// @param param1 KNSCore__Entry__DownloadLinkInformation*
KNSCore__Entry__DownloadLinkInformation* k_nscore__entry__downloadlinkinformation_new(void* param1);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
const char* k_nscore__entry__downloadlinkinformation_name(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param name const char*
void k_nscore__entry__downloadlinkinformation_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
const char* k_nscore__entry__downloadlinkinformation_price_amount(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param priceAmount const char*
void k_nscore__entry__downloadlinkinformation_set_price_amount(void* self, const char* priceAmount);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
const char* k_nscore__entry__downloadlinkinformation_distribution_type(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param distributionType const char*
void k_nscore__entry__downloadlinkinformation_set_distribution_type(void* self, const char* distributionType);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
const char* k_nscore__entry__downloadlinkinformation_description_link(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param descriptionLink const char*
void k_nscore__entry__downloadlinkinformation_set_description_link(void* self, const char* descriptionLink);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
int32_t k_nscore__entry__downloadlinkinformation_id(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param id int
void k_nscore__entry__downloadlinkinformation_set_id(void* self, int id);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
bool k_nscore__entry__downloadlinkinformation_is_downloadtype_link(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param isDownloadtypeLink bool
void k_nscore__entry__downloadlinkinformation_set_is_downloadtype_link(void* self, bool isDownloadtypeLink);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
uint64_t k_nscore__entry__downloadlinkinformation_size(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param size uint64_t
void k_nscore__entry__downloadlinkinformation_set_size(void* self, uint64_t size);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
const char** k_nscore__entry__downloadlinkinformation_tags(void* self);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param tags const char**
void k_nscore__entry__downloadlinkinformation_set_tags(void* self, const char* tags[static 1]);

/// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#operator-eq)
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
/// @param param1 KNSCore__Entry__DownloadLinkInformation*
void k_nscore__entry__downloadlinkinformation_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Entry__DownloadLinkInformation*
void k_nscore__entry__downloadlinkinformation_delete(void* self);

/// https://api.kde.org/knscore-entry.html#types

typedef enum {
    KNSCORE_ENTRY_STATUS_INVALID = 0,
    KNSCORE_ENTRY_STATUS_DOWNLOADABLE = 1,
    KNSCORE_ENTRY_STATUS_INSTALLED = 2,
    KNSCORE_ENTRY_STATUS_UPDATEABLE = 3,
    KNSCORE_ENTRY_STATUS_DELETED = 4,
    KNSCORE_ENTRY_STATUS_INSTALLING = 5,
    KNSCORE_ENTRY_STATUS_UPDATING = 6
} KNSCore__Entry__Status;

typedef enum {
    KNSCORE_ENTRY_SOURCE_CACHE = 0,
    KNSCORE_ENTRY_SOURCE_ONLINE = 1,
    KNSCORE_ENTRY_SOURCE_REGISTRY = 2
} KNSCore__Entry__Source;

typedef enum {
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWSMALL1 = 0,
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWSMALL2 = 1,
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWSMALL3 = 2,
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWBIG1 = 3,
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWBIG2 = 4,
    KNSCORE_ENTRY_PREVIEWTYPE_PREVIEWBIG3 = 5
} KNSCore__Entry__PreviewType;

typedef enum {
    KNSCORE_ENTRY_ENTRYEVENT_UNKNOWNEVENT = 0,
    KNSCORE_ENTRY_ENTRYEVENT_STATUSCHANGEDEVENT = 1,
    KNSCORE_ENTRY_ENTRYEVENT_ADOPTEDEVENT = 2,
    KNSCORE_ENTRY_ENTRYEVENT_DETAILSLOADEDEVENT = 3
} KNSCore__Entry__EntryEvent;

typedef enum {
    KNSCORE_ENTRY_ENTRYTYPE_CATALOGENTRY = 0,
    KNSCORE_ENTRY_ENTRYTYPE_GROUPENTRY = 1
} KNSCore__Entry__EntryType;

#endif
