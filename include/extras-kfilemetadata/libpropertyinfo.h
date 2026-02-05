#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBPROPERTYINFO_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBPROPERTYINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)

/// k_filemetadata__propertyinfo_new constructs a new KFileMetaData::PropertyInfo object.
///
KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new();

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)

/// k_filemetadata__propertyinfo_new2 constructs a new KFileMetaData::PropertyInfo object.
///
/// @param property enum KFileMetaData__Property__Property
///
KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new2(int32_t property);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html)

/// k_filemetadata__propertyinfo_new3 constructs a new KFileMetaData::PropertyInfo object.
///
/// @param pi KFileMetaData__PropertyInfo*
///
KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new3(void* pi);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq)
///
/// @param self KFileMetaData__PropertyInfo*
/// @param rhs KFileMetaData__PropertyInfo*
///
void k_filemetadata__propertyinfo_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#operator-eq-eq)
///
/// @param self KFileMetaData__PropertyInfo*
/// @param rhs KFileMetaData__PropertyInfo*
///
bool k_filemetadata__propertyinfo_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#property)
///
/// @param self KFileMetaData__PropertyInfo*
///
/// @return enum KFileMetaData__Property__Property
///
int32_t k_filemetadata__propertyinfo_property(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__PropertyInfo*
///
const char* k_filemetadata__propertyinfo_name(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#displayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__PropertyInfo*
///
const char* k_filemetadata__propertyinfo_display_name(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#valueType)
///
/// @param self KFileMetaData__PropertyInfo*
///
/// @return enum QMetaType__Type
///
int32_t k_filemetadata__propertyinfo_value_type(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#shouldBeIndexed)
///
/// @param self KFileMetaData__PropertyInfo*
///
bool k_filemetadata__propertyinfo_should_be_indexed(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#fromName)
///
/// @param name const char*
///
KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_from_name(const char* name);

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#allNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_filemetadata__propertyinfo_all_names();

/// [Upstream resources](https://api.kde.org/kfilemetadata-propertyinfo.html#formatAsDisplayString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__PropertyInfo*
/// @param value QVariant*
///
const char* k_filemetadata__propertyinfo_format_as_display_string(void* self, void* value);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__PropertyInfo*
///
void k_filemetadata__propertyinfo_delete(void* self);

#endif
