#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTIONRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)

/// k_filemetadata__extractionresult_new constructs a new KFileMetaData::ExtractionResult object.
///
/// @param url const char*
///
KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new(const char* url);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)

/// k_filemetadata__extractionresult_new2 constructs a new KFileMetaData::ExtractionResult object.
///
/// @param rhs KFileMetaData__ExtractionResult*
///
KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)

/// k_filemetadata__extractionresult_new3 constructs a new KFileMetaData::ExtractionResult object.
///
/// @param url const char*
/// @param mimetype const char*
///
KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new3(const char* url, const char* mimetype);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html)

/// k_filemetadata__extractionresult_new4 constructs a new KFileMetaData::ExtractionResult object.
///
/// @param url const char*
/// @param mimetype const char*
/// @param flags flag of enum KFileMetaData__ExtractionResult__Flag
///
KFileMetaData__ExtractionResult* k_filemetadata__extractionresult_new4(const char* url, const char* mimetype, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__ExtractionResult*
///
const char* k_filemetadata__extractionresult_input_url(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputMimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__ExtractionResult*
///
const char* k_filemetadata__extractionresult_input_mimetype(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputFlags)
///
/// @param self KFileMetaData__ExtractionResult*
///
/// @return flag of enum KFileMetaData__ExtractionResult__Flag
///
int32_t k_filemetadata__extractionresult_input_flags(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
///
/// @param self KFileMetaData__ExtractionResult*
/// @param text const char*
///
void k_filemetadata__extractionresult_append(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractionResult*
/// @param callback void func(KFileMetaData__ExtractionResult* self, const char* text)
///
void k_filemetadata__extractionresult_on_append(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_filemetadata__extractionresult_super_append` instead
///
#define k_filemetadata__extractionresult_qbase_append k_filemetadata__extractionresult_super_append

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#append)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractionResult*
/// @param text const char*
///
void k_filemetadata__extractionresult_super_append(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
///
/// @param self KFileMetaData__ExtractionResult*
/// @param property enum KFileMetaData__Property__Property
/// @param value QVariant*
///
void k_filemetadata__extractionresult_add(void* self, int32_t property, void* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractionResult*
/// @param callback void func(KFileMetaData__ExtractionResult* self, enum KFileMetaData__Property__Property property, QVariant* value)
///
void k_filemetadata__extractionresult_on_add(void* self, void (*callback)(void*, int32_t, void*));

/// @warning DEPRECATED: Use `k_filemetadata__extractionresult_super_add` instead
///
#define k_filemetadata__extractionresult_qbase_add k_filemetadata__extractionresult_super_add

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#add)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractionResult*
/// @param property enum KFileMetaData__Property__Property
/// @param value QVariant*
///
void k_filemetadata__extractionresult_super_add(void* self, int32_t property, void* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
///
/// @param self KFileMetaData__ExtractionResult*
/// @param type enum KFileMetaData__Type__Type
///
void k_filemetadata__extractionresult_add_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractionResult*
/// @param callback void func(KFileMetaData__ExtractionResult* self, enum KFileMetaData__Type__Type type)
///
void k_filemetadata__extractionresult_on_add_type(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `k_filemetadata__extractionresult_super_add_type` instead
///
#define k_filemetadata__extractionresult_qbase_add_type k_filemetadata__extractionresult_super_add_type

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#addType)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractionResult*
/// @param type enum KFileMetaData__Type__Type
///
void k_filemetadata__extractionresult_super_add_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#imageData)
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
/// @param self KFileMetaData__ExtractionResult*
///
/// @return libqt_map of enum KFileMetaData__EmbeddedImageData__ImageType to char*
///
libqt_map k_filemetadata__extractionresult_image_data(void* self);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__ExtractionResult*
///
void k_filemetadata__extractionresult_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#public-types)

typedef enum {
    KFILEMETADATA_EXTRACTIONRESULT_FLAG_EXTRACTNOTHING = 0,
    KFILEMETADATA_EXTRACTIONRESULT_FLAG_EXTRACTMETADATA = 1,
    KFILEMETADATA_EXTRACTIONRESULT_FLAG_EXTRACTPLAINTEXT = 2,
    KFILEMETADATA_EXTRACTIONRESULT_FLAG_EXTRACTIMAGEDATA = 4
} KFileMetaData__ExtractionResult__Flag;

#endif
