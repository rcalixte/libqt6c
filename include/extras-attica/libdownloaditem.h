#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBDOWNLOADITEM_H
#define SRC_EXTRAS_ATTICAQT6C_LIBDOWNLOADITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-downloaditem.html

/// k_attica__downloaditem_new constructs a new Attica::DownloadItem object.
///
Attica__DownloadItem* k_attica__downloaditem_new();

/// k_attica__downloaditem_new2 constructs a new Attica::DownloadItem object.
///
/// @param other Attica__DownloadItem*
Attica__DownloadItem* k_attica__downloaditem_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#operator-eq)
///
/// @param self Attica__DownloadItem*
/// @param other Attica__DownloadItem*
void k_attica__downloaditem_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setUrl)
///
/// @param self Attica__DownloadItem*
/// @param url QUrl*
void k_attica__downloaditem_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#url)
///
/// @param self Attica__DownloadItem*
QUrl* k_attica__downloaditem_url(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setMimeType)
///
/// @param self Attica__DownloadItem*
/// @param mimeType const char*
void k_attica__downloaditem_set_mime_type(void* self, const char* mimeType);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadItem*
const char* k_attica__downloaditem_mime_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setPackageName)
///
/// @param self Attica__DownloadItem*
/// @param packageName const char*
void k_attica__downloaditem_set_package_name(void* self, const char* packageName);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#packageName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadItem*
const char* k_attica__downloaditem_package_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setPackageRepository)
///
/// @param self Attica__DownloadItem*
/// @param packageRepository const char*
void k_attica__downloaditem_set_package_repository(void* self, const char* packageRepository);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#packageRepository)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadItem*
const char* k_attica__downloaditem_package_repository(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setGpgFingerprint)
///
/// @param self Attica__DownloadItem*
/// @param gpgFingerprint const char*
void k_attica__downloaditem_set_gpg_fingerprint(void* self, const char* gpgFingerprint);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#gpgFingerprint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadItem*
const char* k_attica__downloaditem_gpg_fingerprint(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setGpgSignature)
///
/// @param self Attica__DownloadItem*
/// @param gpgSignature const char*
void k_attica__downloaditem_set_gpg_signature(void* self, const char* gpgSignature);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#gpgSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__DownloadItem*
const char* k_attica__downloaditem_gpg_signature(void* self);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#setType)
///
/// @param self Attica__DownloadItem*
/// @param type enum Attica__DownloadDescription__Type
void k_attica__downloaditem_set_type(void* self, int32_t type);

/// [Qt documentation](https://api.kde.org/attica-downloaditem.html#type)
///
/// @param self Attica__DownloadItem*
///
/// @return enum Attica__DownloadDescription__Type
int32_t k_attica__downloaditem_type(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__DownloadItem*
void k_attica__downloaditem_delete(void* self);

#endif
