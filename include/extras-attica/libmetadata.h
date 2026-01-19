#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBMETADATA_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-metadata.html)

/// k_attica__metadata_new constructs a new Attica::Metadata object.
///
Attica__Metadata* k_attica__metadata_new();

/// [Upstream resources](https://api.kde.org/attica-metadata.html)

/// k_attica__metadata_new2 constructs a new Attica::Metadata object.
///
/// @param other Attica__Metadata*
///
Attica__Metadata* k_attica__metadata_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#operator-eq)
///
/// @param self Attica__Metadata*
/// @param other Attica__Metadata*
///
void k_attica__metadata_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#error)
///
/// @param self Attica__Metadata*
///
/// @return enum Attica__Metadata__Error
///
int32_t k_attica__metadata_error(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setError)
///
/// @param self Attica__Metadata*
/// @param error enum Attica__Metadata__Error
///
void k_attica__metadata_set_error(void* self, int32_t error);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#statusCode)
///
/// @param self Attica__Metadata*
///
int32_t k_attica__metadata_status_code(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusCode)
///
/// @param self Attica__Metadata*
/// @param code int
///
void k_attica__metadata_set_status_code(void* self, int code);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#statusString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Metadata*
///
const char* k_attica__metadata_status_string(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setStatusString)
///
/// @param self Attica__Metadata*
/// @param status const char*
///
void k_attica__metadata_set_status_string(void* self, const char* status);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#message)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Metadata*
///
const char* k_attica__metadata_message(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setMessage)
///
/// @param self Attica__Metadata*
/// @param message const char*
///
void k_attica__metadata_set_message(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#totalItems)
///
/// @param self Attica__Metadata*
///
int32_t k_attica__metadata_total_items(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setTotalItems)
///
/// @param self Attica__Metadata*
/// @param items int
///
void k_attica__metadata_set_total_items(void* self, int items);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#itemsPerPage)
///
/// @param self Attica__Metadata*
///
int32_t k_attica__metadata_items_per_page(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setItemsPerPage)
///
/// @param self Attica__Metadata*
/// @param itemsPerPage int
///
void k_attica__metadata_set_items_per_page(void* self, int itemsPerPage);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#resultingId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__Metadata*
///
const char* k_attica__metadata_resulting_id(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setResultingId)
///
/// @param self Attica__Metadata*
/// @param id const char*
///
void k_attica__metadata_set_resulting_id(void* self, const char* id);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#headers)
///
/// @param self Attica__Metadata*
///
/// @return libqt_list of libqt_pair tuple of char* and char*
///
libqt_list k_attica__metadata_headers(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#setHeaders)
///
/// @param self Attica__Metadata*
/// @param headers libqt_list of libqt_pair tuple of char* and char*
///
void k_attica__metadata_set_headers(void* self, libqt_list headers);

/// Delete this object from C++ memory.
///
/// @param self Attica__Metadata*
///
void k_attica__metadata_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-metadata.html#public-types)

typedef enum {
    ATTICA_METADATA_ERROR_NOERROR = 0,
    ATTICA_METADATA_ERROR_NETWORKERROR = 1,
    ATTICA_METADATA_ERROR_OCSERROR = 2
} Attica__Metadata__Error;

#endif
