#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITEDATA_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html)

/// k_filemetadata__writedata_new constructs a new KFileMetaData::WriteData object.
///
/// @param url const char*
/// @param mimetype const char*
///
KFileMetaData__WriteData* k_filemetadata__writedata_new(const char* url, const char* mimetype);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html)

/// k_filemetadata__writedata_new2 constructs a new KFileMetaData::WriteData object.
///
/// @param rhs KFileMetaData__WriteData*
///
KFileMetaData__WriteData* k_filemetadata__writedata_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq)
///
/// @param self KFileMetaData__WriteData*
/// @param rhs KFileMetaData__WriteData*
///
void k_filemetadata__writedata_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#operator-eq-eq)
///
/// @param self KFileMetaData__WriteData*
/// @param rhs KFileMetaData__WriteData*
///
bool k_filemetadata__writedata_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__WriteData*
///
const char* k_filemetadata__writedata_input_url(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#inputMimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__WriteData*
///
const char* k_filemetadata__writedata_input_mimetype(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#add)
///
/// @param self KFileMetaData__WriteData*
/// @param property enum KFileMetaData__Property__Property
/// @param value QVariant*
///
void k_filemetadata__writedata_add(void* self, int32_t property, void* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#addImageData)
///
/// @param self KFileMetaData__WriteData*
/// @param images libqt_map of enum KFileMetaData__EmbeddedImageData__ImageType to char*
///
void k_filemetadata__writedata_add_image_data(void* self, libqt_map images);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#properties)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum KFileMetaData__Property__Property to QVariant**
/// for (size_t i = 0; i < map.len; ++i) {
///     for (size_t j = 0; ((QVariant**)map.values)[i][j] != NULL; j++) {
///         free(((QVariant**)map.values)[i][j]);
///     }
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KFileMetaData__WriteData*
///
/// @return libqt_map of enum KFileMetaData__Property__Property to QVariant**
///
libqt_map k_filemetadata__writedata_properties(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writedata.html#imageData)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum KFileMetaData__EmbeddedImageData__ImageType to char*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.values[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KFileMetaData__WriteData*
///
/// @return libqt_map of enum KFileMetaData__EmbeddedImageData__ImageType to char*
///
libqt_map k_filemetadata__writedata_image_data(void* self);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__WriteData*
///
void k_filemetadata__writedata_delete(void* self);

#endif
