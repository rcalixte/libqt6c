#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBPARTLOADER_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBPARTLOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts.html)

/// [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
///
/// @param param1 enum KParts__PartCapability
///
const QMetaObject* k_parts_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum KParts__PartCapability
///
const char* k_parts_get_enum_name(int32_t param1);

/// [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumMetaObject)
///
/// @param param1 flag of enum KParts__PartCapability
///
const QMetaObject* k_parts_get_enum_meta_object2(int32_t param1);

/// [Upstream resources](https://api.kde.org/kparts.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 flag of enum KParts__PartCapability
///
const char* k_parts_get_enum_name2(int32_t param1);

/// [Upstream resources](https://api.kde.org/kparts-partloader.html)

/// [Upstream resources](https://api.kde.org/kparts-partloader.html#partCapabilities)
///
/// @param param1 KPluginMetaData*
///
/// @return flag of enum KParts__PartCapability
///
int32_t k_parts__partloader_part_capabilities(void* param1);

/// [Upstream resources](https://api.kde.org/kparts-partloader.html#partsForMimeType)
///
/// @param param1 const char*
///
/// @return libqt_list of KPluginMetaData*
///
libqt_list k_parts__partloader_parts_for_mime_type(const char* param1);

/// [Upstream resources](https://api.kde.org/kparts-partloader.html#public-types)

typedef enum {
    KPARTS_PARTCAPABILITY_READONLY = 1,
    KPARTS_PARTCAPABILITY_READWRITE = 2,
    KPARTS_PARTCAPABILITY_BROWSERVIEW = 4
} KParts__PartCapability;

/// [Upstream resources](https://api.kde.org/kparts-partloader.html#public-types)

typedef enum {
    KPARTS_PARTLOADER_PRIVATE_ERRORTYPE_COULDNOTLOADPLUGIN = 0,
    KPARTS_PARTLOADER_PRIVATE_ERRORTYPE_NOPARTFOUNDFORMIMETYPE = 1,
    KPARTS_PARTLOADER_PRIVATE_ERRORTYPE_NOPARTINSTANTIATEDFORMIMETYPE = 2
} KParts__PartLoader__Private__ErrorType;

#endif
