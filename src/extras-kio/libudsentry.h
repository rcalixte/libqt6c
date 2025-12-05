#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBUDSENTRY_H
#define SRC_EXTRAS_KIO_QT6C_LIBUDSENTRY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-udsentry.html)

/// k_io__udsentry_new constructs a new KIO::UDSEntry object.
///
KIO__UDSEntry* k_io__udsentry_new();

/// [Upstream resources](https://api.kde.org/kio-udsentry.html)

/// k_io__udsentry_new2 constructs a new KIO::UDSEntry object.
///
/// @param param1 KIO__UDSEntry*
///
KIO__UDSEntry* k_io__udsentry_new2(void* param1);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#operator-eq)
///
/// @param self KIO__UDSEntry*
/// @param param1 KIO__UDSEntry*
///
void k_io__udsentry_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#stringValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
///
const char* k_io__udsentry_string_value(void* self, uint32_t field);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#numberValue)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
///
long long k_io__udsentry_number_value(void* self, uint32_t field);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#isDir)
///
/// @param self KIO__UDSEntry*
///
bool k_io__udsentry_is_dir(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#isLink)
///
/// @param self KIO__UDSEntry*
///
bool k_io__udsentry_is_link(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#reserve)
///
/// @param self KIO__UDSEntry*
/// @param size int
///
void k_io__udsentry_reserve(void* self, int size);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#fastInsert)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
/// @param value const char*
///
void k_io__udsentry_fast_insert(void* self, uint32_t field, const char* value);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#fastInsert)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
/// @param l long long
///
void k_io__udsentry_fast_insert2(void* self, uint32_t field, long long l);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#count)
///
/// @param self KIO__UDSEntry*
///
int32_t k_io__udsentry_count(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#contains)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
///
bool k_io__udsentry_contains(void* self, uint32_t field);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#fields)
///
/// @param self KIO__UDSEntry*
///
libqt_list /* of uint32_t */ k_io__udsentry_fields(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#clear)
///
/// @param self KIO__UDSEntry*
///
void k_io__udsentry_clear(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#replace)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
/// @param value const char*
///
void k_io__udsentry_replace(void* self, uint32_t field, const char* value);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#replace)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
/// @param l long long
///
void k_io__udsentry_replace2(void* self, uint32_t field, long long l);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#numberValue)
///
/// @param self KIO__UDSEntry*
/// @param field uint32_t
/// @param defaultValue long long
///
long long k_io__udsentry_number_value2(void* self, uint32_t field, long long defaultValue);

/// Delete this object from C++ memory.
///
/// @param self KIO__UDSEntry*
///
void k_io__udsentry_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#public-types)

typedef enum {
    KIO_UDSENTRY_ITEMTYPES_UDS_STRING = 16777216,
    KIO_UDSENTRY_ITEMTYPES_UDS_NUMBER = 33554432,
    KIO_UDSENTRY_ITEMTYPES_UDS_TIME = 100663296
} KIO__UDSEntry__ItemTypes;

/// [Upstream resources](https://api.kde.org/kio-udsentry.html#public-types)

typedef enum {
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_SIZE = 33554433,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_SIZE_LARGE = 33554434,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_USER = 16777219,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_ICON_NAME = 16777220,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_GROUP = 16777221,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_NAME = 16777222,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_LOCAL_PATH = 16777223,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_HIDDEN = 33554440,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_ACCESS = 33554441,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_MODIFICATION_TIME = 100663306,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_ACCESS_TIME = 100663307,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_CREATION_TIME = 100663308,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_FILE_TYPE = 33554445,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_LINK_DEST = 16777230,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_URL = 16777231,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_MIME_TYPE = 16777232,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_GUESSED_MIME_TYPE = 16777233,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_XML_PROPERTIES = 16777234,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_EXTENDED_ACL = 33554451,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_ACL_STRING = 16777236,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_DEFAULT_ACL_STRING = 16777237,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_DISPLAY_NAME = 16777238,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_TARGET_URL = 16777239,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_DISPLAY_TYPE = 16777240,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_ICON_OVERLAY_NAMES = 16777241,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_COMMENT = 16777242,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_DEVICE_ID = 33554459,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_INODE = 33554460,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_RECURSIVE_SIZE = 33554461,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_LOCAL_USER_ID = 33554462,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_LOCAL_GROUP_ID = 33554463,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_EXTRA = 16777316,
    KIO_UDSENTRY_STANDARDFIELDTYPES_UDS_EXTRA_END = 16777356
} KIO__UDSEntry__StandardFieldTypes;

#endif
