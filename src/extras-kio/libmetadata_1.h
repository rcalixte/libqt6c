#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBMETADATA_H
#define SRC_EXTRAS_KIO_QT6C_LIBMETADATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-metadata.html

/// k_io__metadata_new constructs a new KIO::MetaData object.
///
KIO__MetaData* k_io__metadata_new();

/// k_io__metadata_new2 constructs a new KIO::MetaData object.
///
/// @param metaData libqt_map /* of const char* to const char* */
KIO__MetaData* k_io__metadata_new2(libqt_map /* of const char* to const char* */ metaData);

/// k_io__metadata_new3 constructs a new KIO::MetaData object.
///
/// @param param1 libqt_map /* of const char* to QVariant* */
KIO__MetaData* k_io__metadata_new3(libqt_map /* of const char* to QVariant* */ param1);

/// k_io__metadata_new4 constructs a new KIO::MetaData object.
///
/// @param param1 KIO__MetaData*
KIO__MetaData* k_io__metadata_new4(void* param1);

/// [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
///
/// @param self KIO__MetaData*
/// @param metaData libqt_map /* of const char* to const char* */
KIO__MetaData* k_io__metadata_operator_plus_assign(void* self, libqt_map /* of const char* to const char* */ metaData);

/// [Upstream resources](https://api.kde.org/kio-metadata.html#operator-2b-eq)
///
/// @param self KIO__MetaData*
/// @param metaData libqt_map /* of const char* to QVariant* */
KIO__MetaData* k_io__metadata_operator_plus_assign2(void* self, libqt_map /* of const char* to QVariant* */ metaData);

/// [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
///
/// @param self KIO__MetaData*
/// @param metaData libqt_map /* of const char* to QVariant* */
void k_io__metadata_operator_assign(void* self, libqt_map /* of const char* to QVariant* */ metaData);

/// [Upstream resources](https://api.kde.org/kio-metadata.html#toVariant)
///
/// @param self KIO__MetaData*
QVariant* k_io__metadata_to_variant(void* self);

/// [Upstream resources](https://api.kde.org/kio-metadata.html#operator-eq)
///
/// @param self KIO__MetaData*
/// @param param1 KIO__MetaData*
void k_io__metadata_operator_assign2(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KIO__MetaData*
void k_io__metadata_delete(void* self);

#endif
