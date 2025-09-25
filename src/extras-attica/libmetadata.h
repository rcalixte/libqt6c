#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBMETADATA_H
#define SRC_EXTRAS_ATTICAQT6C_LIBMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-metadata.html

/// k_attica__metadata_new constructs a new Attica::Metadata object.
///
Attica__Metadata* k_attica__metadata_new();

/// k_attica__metadata_new2 constructs a new Attica::Metadata object.
///
/// @param other Attica__Metadata*
Attica__Metadata* k_attica__metadata_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#operator-eq)
///
/// @param self Attica__Metadata*
/// @param other Attica__Metadata*
void k_attica__metadata_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#error)
///
/// @param self Attica__Metadata*
///
/// @return enum Attica__Metadata__Error
int32_t k_attica__metadata_error(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setError)
///
/// @param self Attica__Metadata*
/// @param error enum Attica__Metadata__Error
void k_attica__metadata_set_error(void* self, int32_t error);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#statusCode)
///
/// @param self Attica__Metadata*
int32_t k_attica__metadata_status_code(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setStatusCode)
///
/// @param self Attica__Metadata*
/// @param code int
void k_attica__metadata_set_status_code(void* self, int code);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#statusString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Metadata*
const char* k_attica__metadata_status_string(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setStatusString)
///
/// @param self Attica__Metadata*
/// @param status const char*
void k_attica__metadata_set_status_string(void* self, const char* status);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Metadata*
const char* k_attica__metadata_message(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setMessage)
///
/// @param self Attica__Metadata*
/// @param message const char*
void k_attica__metadata_set_message(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#totalItems)
///
/// @param self Attica__Metadata*
int32_t k_attica__metadata_total_items(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setTotalItems)
///
/// @param self Attica__Metadata*
/// @param items int
void k_attica__metadata_set_total_items(void* self, int items);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#itemsPerPage)
///
/// @param self Attica__Metadata*
int32_t k_attica__metadata_items_per_page(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setItemsPerPage)
///
/// @param self Attica__Metadata*
/// @param itemsPerPage int
void k_attica__metadata_set_items_per_page(void* self, int itemsPerPage);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#resultingId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Metadata*
const char* k_attica__metadata_resulting_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#setResultingId)
///
/// @param self Attica__Metadata*
/// @param id const char*
void k_attica__metadata_set_resulting_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-metadata.html#headers)
///
/// @param self Attica__Metadata*
libqt_list /* of libqt_pair  tuple of char* and char*  */ k_attica__metadata_headers(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Metadata*
void k_attica__metadata_delete(void* self);

/// https://api.kde.org/attica-metadata.html#types

typedef enum {
    ATTICA_METADATA_ERROR_NOERROR = 0,
    ATTICA_METADATA_ERROR_NETWORKERROR = 1,
    ATTICA_METADATA_ERROR_OCSERROR = 2
} Attica__Metadata__Error;

#endif
