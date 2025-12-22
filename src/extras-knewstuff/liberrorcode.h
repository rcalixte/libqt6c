#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBERRORCODE_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBERRORCODE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-errorcode.html)

/// [Upstream resources](https://api.kde.org/knscore-errorcode.html#qt_getEnumMetaObject)
///
/// @param param1 enum KNSCore__ErrorCode__ErrorCode
///
const QMetaObject* k_nscore__errorcode_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore-errorcode.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum KNSCore__ErrorCode__ErrorCode
///
const char* k_nscore__errorcode_get_enum_name(int32_t param1);

/// [Upstream resources](https://api.kde.org/knscore-errorcode.html#public-types)

typedef enum {
    KNSCORE_ERRORCODE_ERRORCODE_UNKNOWNERROR = 0,
    KNSCORE_ERRORCODE_ERRORCODE_NETWORKERROR = 1,
    KNSCORE_ERRORCODE_ERRORCODE_OCSERROR = 2,
    KNSCORE_ERRORCODE_ERRORCODE_CONFIGFILEERROR = 3,
    KNSCORE_ERRORCODE_ERRORCODE_PROVIDERERROR = 4,
    KNSCORE_ERRORCODE_ERRORCODE_INSTALLATIONERROR = 5,
    KNSCORE_ERRORCODE_ERRORCODE_IMAGEERROR = 6,
    KNSCORE_ERRORCODE_ERRORCODE_ADOPTIONERROR = 7,
    KNSCORE_ERRORCODE_ERRORCODE_TRYAGAINLATERERROR = 8
} KNSCore__ErrorCode__ErrorCode;

#endif
