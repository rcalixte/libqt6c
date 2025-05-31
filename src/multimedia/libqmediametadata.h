#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQMEDIAMETADATA_H
#define SRC_MULTIMEDIAQT6C_LIBQMEDIAMETADATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qmediametadata.html

/// q_mediametadata_new constructs a new QMediaMetaData object.
///
/// ``` QMediaMetaData* param1 ```
QMediaMetaData* q_mediametadata_new(void* param1);

/// q_mediametadata_new2 constructs a new QMediaMetaData object.
///
///
QMediaMetaData* q_mediametadata_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#value)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
QVariant* q_mediametadata_value(void* self, int64_t k);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#insert)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k, QVariant* value ```
void q_mediametadata_insert(void* self, int64_t k, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#remove)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
void q_mediametadata_remove(void* self, int64_t k);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#keys)
///
/// ``` QMediaMetaData* self ```
libqt_list /* of int64_t */ q_mediametadata_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#operator[])
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
QVariant* q_mediametadata_operator_subscript(void* self, int64_t k);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#clear)
///
/// ``` QMediaMetaData* self ```
void q_mediametadata_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#isEmpty)
///
/// ``` QMediaMetaData* self ```
bool q_mediametadata_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#stringValue)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
const char* q_mediametadata_string_value(void* self, int64_t k);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#metaDataKeyToString)
///
/// ``` enum QMediaMetaData__Key k ```
const char* q_mediametadata_meta_data_key_to_string(int64_t k);

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#dtor.QMediaMetaData)
///
/// Delete this object from C++ memory.
///
/// ``` QMediaMetaData* self ```
void q_mediametadata_delete(void* self);

/// https://doc.qt.io/qt-6/qmediametadata.html#types

typedef enum {
    QMEDIAMETADATA_KEY_TITLE = 0,
    QMEDIAMETADATA_KEY_AUTHOR = 1,
    QMEDIAMETADATA_KEY_COMMENT = 2,
    QMEDIAMETADATA_KEY_DESCRIPTION = 3,
    QMEDIAMETADATA_KEY_GENRE = 4,
    QMEDIAMETADATA_KEY_DATE = 5,
    QMEDIAMETADATA_KEY_LANGUAGE = 6,
    QMEDIAMETADATA_KEY_PUBLISHER = 7,
    QMEDIAMETADATA_KEY_COPYRIGHT = 8,
    QMEDIAMETADATA_KEY_URL = 9,
    QMEDIAMETADATA_KEY_DURATION = 10,
    QMEDIAMETADATA_KEY_MEDIATYPE = 11,
    QMEDIAMETADATA_KEY_FILEFORMAT = 12,
    QMEDIAMETADATA_KEY_AUDIOBITRATE = 13,
    QMEDIAMETADATA_KEY_AUDIOCODEC = 14,
    QMEDIAMETADATA_KEY_VIDEOBITRATE = 15,
    QMEDIAMETADATA_KEY_VIDEOCODEC = 16,
    QMEDIAMETADATA_KEY_VIDEOFRAMERATE = 17,
    QMEDIAMETADATA_KEY_ALBUMTITLE = 18,
    QMEDIAMETADATA_KEY_ALBUMARTIST = 19,
    QMEDIAMETADATA_KEY_CONTRIBUTINGARTIST = 20,
    QMEDIAMETADATA_KEY_TRACKNUMBER = 21,
    QMEDIAMETADATA_KEY_COMPOSER = 22,
    QMEDIAMETADATA_KEY_LEADPERFORMER = 23,
    QMEDIAMETADATA_KEY_THUMBNAILIMAGE = 24,
    QMEDIAMETADATA_KEY_COVERARTIMAGE = 25,
    QMEDIAMETADATA_KEY_ORIENTATION = 26,
    QMEDIAMETADATA_KEY_RESOLUTION = 27
} QMediaMetaData__Key;

#endif
