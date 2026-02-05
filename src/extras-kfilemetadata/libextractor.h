#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTOR_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html)

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#extract)
///
/// @param self KFileMetaData__Extractor*
/// @param result KFileMetaData__ExtractionResult*
///
void k_filemetadata__extractor_extract(void* self, void* result);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#mimetypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileMetaData__Extractor*
///
const char** k_filemetadata__extractor_mimetypes(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractor.html#extractorProperties)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KFileMetaData__Extractor*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map k_filemetadata__extractor_extractor_properties(void* self);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__Extractor*
///
void k_filemetadata__extractor_delete(void* self);

#endif
