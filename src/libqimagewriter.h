#pragma once
#ifndef SRCQT6C_LIBQIMAGEWRITER_H
#define SRCQT6C_LIBQIMAGEWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"
#include "libqimage.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qimagewriter.html

/// q_imagewriter_new constructs a new QImageWriter object.
///
///
QImageWriter* q_imagewriter_new();

/// q_imagewriter_new2 constructs a new QImageWriter object.
///
/// ``` QIODevice* device, const char* format ```
QImageWriter* q_imagewriter_new2(void* device, const char* format);

/// q_imagewriter_new3 constructs a new QImageWriter object.
///
/// ``` const char* fileName ```
QImageWriter* q_imagewriter_new3(const char* fileName);

/// q_imagewriter_new4 constructs a new QImageWriter object.
///
/// ``` const char* fileName, const char* format ```
QImageWriter* q_imagewriter_new4(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_imagewriter_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
///
/// ``` QImageWriter* self, const char* format ```
void q_imagewriter_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#format)
///
/// ``` QImageWriter* self ```
char* q_imagewriter_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
///
/// ``` QImageWriter* self, QIODevice* device ```
void q_imagewriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#device)
///
/// ``` QImageWriter* self ```
QIODevice* q_imagewriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
///
/// ``` QImageWriter* self, const char* fileName ```
void q_imagewriter_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
///
/// ``` QImageWriter* self ```
const char* q_imagewriter_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
///
/// ``` QImageWriter* self, int quality ```
void q_imagewriter_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#quality)
///
/// ``` QImageWriter* self ```
int32_t q_imagewriter_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
///
/// ``` QImageWriter* self, int compression ```
void q_imagewriter_set_compression(void* self, int compression);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#compression)
///
/// ``` QImageWriter* self ```
int32_t q_imagewriter_compression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
///
/// ``` QImageWriter* self, const char* typeVal ```
void q_imagewriter_set_sub_type(void* self, const char* typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#subType)
///
/// ``` QImageWriter* self ```
char* q_imagewriter_sub_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
///
/// ``` QImageWriter* self ```
const char** q_imagewriter_supported_sub_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setOptimizedWrite)
///
/// ``` QImageWriter* self, bool optimize ```
void q_imagewriter_set_optimized_write(void* self, bool optimize);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_optimized_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
///
/// ``` QImageWriter* self, bool progressive ```
void q_imagewriter_set_progressive_scan_write(void* self, bool progressive);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_progressive_scan_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#transformation)
///
/// ``` QImageWriter* self ```
int64_t q_imagewriter_transformation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
///
/// ``` QImageWriter* self, int orientation ```
void q_imagewriter_set_transformation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setText)
///
/// ``` QImageWriter* self, const char* key, const char* text ```
void q_imagewriter_set_text(void* self, const char* key, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
///
/// ``` QImageWriter* self ```
bool q_imagewriter_can_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#write)
///
/// ``` QImageWriter* self, QImage* image ```
bool q_imagewriter_write(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#error)
///
/// ``` QImageWriter* self ```
int64_t q_imagewriter_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
///
/// ``` QImageWriter* self ```
const char* q_imagewriter_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
///
/// ``` QImageWriter* self, enum QImageIOHandler__ImageOption option ```
bool q_imagewriter_supports_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
///
///
const char** q_imagewriter_supported_image_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedMimeTypes)
///
///
const char** q_imagewriter_supported_mime_types();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#imageFormatsForMimeType)
///
/// ``` const char* mimeType ```
const char** q_imagewriter_image_formats_for_mime_type(const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_imagewriter_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_imagewriter_tr3(const char* sourceText, const char* disambiguation, int n);

/// Delete this object from C++ memory.
///
/// ``` QImageWriter* self ```
void q_imagewriter_delete(void* self);

/// https://doc.qt.io/qt-6/qimagewriter.html#types

typedef enum {
    QIMAGEWRITER_IMAGEWRITERERROR_UNKNOWNERROR = 0,
    QIMAGEWRITER_IMAGEWRITERERROR_DEVICEERROR = 1,
    QIMAGEWRITER_IMAGEWRITERERROR_UNSUPPORTEDFORMATERROR = 2,
    QIMAGEWRITER_IMAGEWRITERERROR_INVALIDIMAGEERROR = 3
} QImageWriter__ImageWriterError;

#endif
