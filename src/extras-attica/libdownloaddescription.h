#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBDOWNLOADDESCRIPTION_H
#define SRC_EXTRAS_ATTICAQT6C_LIBDOWNLOADDESCRIPTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-downloaddescription.html

/// k_attica__downloaddescription_new constructs a new Attica::DownloadDescription object.
///
Attica__DownloadDescription* k_attica__downloaddescription_new();

/// k_attica__downloaddescription_new2 constructs a new Attica::DownloadDescription object.
///
/// @param other Attica__DownloadDescription*
Attica__DownloadDescription* k_attica__downloaddescription_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#operator-eq)
///
/// @param self Attica__DownloadDescription*
/// @param other Attica__DownloadDescription*
void k_attica__downloaddescription_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#id)
///
/// @param self Attica__DownloadDescription*
int32_t k_attica__downloaddescription_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#type)
///
/// @param self Attica__DownloadDescription*
///
/// @return enum Attica__DownloadDescription__Type
int32_t k_attica__downloaddescription_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#hasPrice)
///
/// @param self Attica__DownloadDescription*
bool k_attica__downloaddescription_has_price(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#category)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_category(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#link)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_link(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#distributionType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_distribution_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#priceReason)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_price_reason(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#priceAmount)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_price_amount(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#size)
///
/// @param self Attica__DownloadDescription*
uint32_t k_attica__downloaddescription_size(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#gpgFingerprint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_gpg_fingerprint(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#gpgSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_gpg_signature(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#packageName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_package_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#repository)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_repository(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#tags)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char** k_attica__downloaddescription_tags(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setId)
///
/// @param self Attica__DownloadDescription*
/// @param id int
void k_attica__downloaddescription_set_id(void* self, int id);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setType)
///
/// @param self Attica__DownloadDescription*
/// @param type enum Attica__DownloadDescription__Type
void k_attica__downloaddescription_set_type(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setHasPrice)
///
/// @param self Attica__DownloadDescription*
/// @param hasPrice bool
void k_attica__downloaddescription_set_has_price(void* self, bool hasPrice);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setCategory)
///
/// @param self Attica__DownloadDescription*
/// @param category const char*
void k_attica__downloaddescription_set_category(void* self, const char* category);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setName)
///
/// @param self Attica__DownloadDescription*
/// @param name const char*
void k_attica__downloaddescription_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setLink)
///
/// @param self Attica__DownloadDescription*
/// @param link const char*
void k_attica__downloaddescription_set_link(void* self, const char* link);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setDistributionType)
///
/// @param self Attica__DownloadDescription*
/// @param distributionType const char*
void k_attica__downloaddescription_set_distribution_type(void* self, const char* distributionType);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPriceReason)
///
/// @param self Attica__DownloadDescription*
/// @param priceReason const char*
void k_attica__downloaddescription_set_price_reason(void* self, const char* priceReason);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPriceAmount)
///
/// @param self Attica__DownloadDescription*
/// @param priceAmount const char*
void k_attica__downloaddescription_set_price_amount(void* self, const char* priceAmount);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setSize)
///
/// @param self Attica__DownloadDescription*
/// @param size uint32_t
void k_attica__downloaddescription_set_size(void* self, uint32_t size);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setGpgFingerprint)
///
/// @param self Attica__DownloadDescription*
/// @param fingerprint const char*
void k_attica__downloaddescription_set_gpg_fingerprint(void* self, const char* fingerprint);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setGpgSignature)
///
/// @param self Attica__DownloadDescription*
/// @param signature const char*
void k_attica__downloaddescription_set_gpg_signature(void* self, const char* signature);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setPackageName)
///
/// @param self Attica__DownloadDescription*
/// @param packageName const char*
void k_attica__downloaddescription_set_package_name(void* self, const char* packageName);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setRepository)
///
/// @param self Attica__DownloadDescription*
/// @param repository const char*
void k_attica__downloaddescription_set_repository(void* self, const char* repository);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setTags)
///
/// @param self Attica__DownloadDescription*
/// @param tags const char**
void k_attica__downloaddescription_set_tags(void* self, const char* tags[]);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#version)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadDescription*
const char* k_attica__downloaddescription_version(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaddescription.html#setVersion)
///
/// @param self Attica__DownloadDescription*
/// @param version const char*
void k_attica__downloaddescription_set_version(void* self, const char* version);

/// Delete this object from C++ memory.
///
/// @param self Attica__DownloadDescription*
void k_attica__downloaddescription_delete(void* self);

/// https://api.kde.org/attica-downloaddescription.html#types

typedef enum {
    ATTICA_DOWNLOADDESCRIPTION_TYPE_FILEDOWNLOAD = 0,
    ATTICA_DOWNLOADDESCRIPTION_TYPE_LINKDOWNLOAD = 1,
    ATTICA_DOWNLOADDESCRIPTION_TYPE_PACKAGEDOWNLOAD = 2
} Attica__DownloadDescription__Type;

#endif
