#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBSIMPLEEXTRACTIONRESULT_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBSIMPLEEXTRACTIONRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)

/// k_filemetadata__simpleextractionresult_new constructs a new KFileMetaData::SimpleExtractionResult object.
///
/// @param url const char*
///
KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new(const char* url);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)

/// k_filemetadata__simpleextractionresult_new2 constructs a new KFileMetaData::SimpleExtractionResult object.
///
/// @param rhs KFileMetaData__SimpleExtractionResult*
///
KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)

/// k_filemetadata__simpleextractionresult_new3 constructs a new KFileMetaData::SimpleExtractionResult object.
///
/// @param url const char*
/// @param mimetype const char*
///
KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new3(const char* url, const char* mimetype);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html)

/// k_filemetadata__simpleextractionresult_new4 constructs a new KFileMetaData::SimpleExtractionResult object.
///
/// @param url const char*
/// @param mimetype const char*
/// @param flags flag of enum KFileMetaData__ExtractionResult__Flag
///
KFileMetaData__SimpleExtractionResult* k_filemetadata__simpleextractionresult_new4(const char* url, const char* mimetype, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq)
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param rhs KFileMetaData__SimpleExtractionResult*
///
void k_filemetadata__simpleextractionresult_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#operator-eq-eq)
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param rhs KFileMetaData__SimpleExtractionResult*
///
bool k_filemetadata__simpleextractionresult_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param property enum KFileMetaData__Property__Property
/// @param value QVariant*
///
void k_filemetadata__simpleextractionresult_add(void* self, int32_t property, void* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param callback void func(KFileMetaData__SimpleExtractionResult* self, enum KFileMetaData__Property__Property property, QVariant* value)
///
void k_filemetadata__simpleextractionresult_on_add(void* self, void (*callback)(void*, int32_t, void*));

/// @warning DEPRECATED: Use `k_filemetadata__simpleextractionresult_super_add` instead
///
#define k_filemetadata__simpleextractionresult_qbase_add k_filemetadata__simpleextractionresult_super_add

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#add)
///
/// Base class method implementation
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param property enum KFileMetaData__Property__Property
/// @param value QVariant*
///
void k_filemetadata__simpleextractionresult_super_add(void* self, int32_t property, void* value);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param type enum KFileMetaData__Type__Type
///
void k_filemetadata__simpleextractionresult_add_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param callback void func(KFileMetaData__SimpleExtractionResult* self, enum KFileMetaData__Type__Type type)
///
void k_filemetadata__simpleextractionresult_on_add_type(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `k_filemetadata__simpleextractionresult_super_add_type` instead
///
#define k_filemetadata__simpleextractionresult_qbase_add_type k_filemetadata__simpleextractionresult_super_add_type

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#addType)
///
/// Base class method implementation
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param type enum KFileMetaData__Type__Type
///
void k_filemetadata__simpleextractionresult_super_add_type(void* self, int32_t type);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param text const char*
///
void k_filemetadata__simpleextractionresult_append(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param callback void func(KFileMetaData__SimpleExtractionResult* self, const char* text)
///
void k_filemetadata__simpleextractionresult_on_append(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_filemetadata__simpleextractionresult_super_append` instead
///
#define k_filemetadata__simpleextractionresult_qbase_append k_filemetadata__simpleextractionresult_super_append

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#append)
///
/// Base class method implementation
///
/// @param self KFileMetaData__SimpleExtractionResult*
/// @param text const char*
///
void k_filemetadata__simpleextractionresult_super_append(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#properties)
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
/// @param self KFileMetaData__SimpleExtractionResult*
///
/// @return libqt_map of enum KFileMetaData__Property__Property to QVariant**
///
libqt_map k_filemetadata__simpleextractionresult_properties(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
const char* k_filemetadata__simpleextractionresult_text(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-simpleextractionresult.html#types)
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
/// @return libqt_list of enum KFileMetaData__Type__Type
///
libqt_list k_filemetadata__simpleextractionresult_types(void* self);

/// Inherited from KFileMetaData::ExtractionResult
///
/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
const char* k_filemetadata__simpleextractionresult_input_url(void* self);

/// Inherited from KFileMetaData::ExtractionResult
///
/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputMimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
const char* k_filemetadata__simpleextractionresult_input_mimetype(void* self);

/// Inherited from KFileMetaData::ExtractionResult
///
/// [Upstream resources](https://api.kde.org/kfilemetadata-extractionresult.html#inputFlags)
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
/// @return flag of enum KFileMetaData__ExtractionResult__Flag
///
int32_t k_filemetadata__simpleextractionresult_input_flags(void* self);

/// Inherited from KFileMetaData::ExtractionResult
///
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
/// @param self KFileMetaData__SimpleExtractionResult*
///
/// @return libqt_map of enum KFileMetaData__EmbeddedImageData__ImageType to char*
///
libqt_map k_filemetadata__simpleextractionresult_image_data(void* self);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__SimpleExtractionResult*
///
void k_filemetadata__simpleextractionresult_delete(void* self);

#endif
