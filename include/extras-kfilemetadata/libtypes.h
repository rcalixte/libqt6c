#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBTYPES_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBTYPES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-types.html#public-types)

typedef enum {
    KFILEMETADATA_TYPE_TYPE_FIRSTTYPE = 0,
    KFILEMETADATA_TYPE_TYPE_EMPTY = 0,
    KFILEMETADATA_TYPE_TYPE_ARCHIVE = 1,
    KFILEMETADATA_TYPE_TYPE_AUDIO = 2,
    KFILEMETADATA_TYPE_TYPE_VIDEO = 3,
    KFILEMETADATA_TYPE_TYPE_IMAGE = 4,
    KFILEMETADATA_TYPE_TYPE_DOCUMENT = 5,
    KFILEMETADATA_TYPE_TYPE_SPREADSHEET = 6,
    KFILEMETADATA_TYPE_TYPE_PRESENTATION = 7,
    KFILEMETADATA_TYPE_TYPE_TEXT = 8,
    KFILEMETADATA_TYPE_TYPE_FOLDER = 9,
    KFILEMETADATA_TYPE_TYPE_LASTTYPE = 9
} KFileMetaData__Type__Type;

#endif
