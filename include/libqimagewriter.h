#pragma once
#ifndef SRCQT6C_LIBQIMAGEWRITER_H
#define SRCQT6C_LIBQIMAGEWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qimagewriter.html

/// q_imagewriter_new constructs a new QImageWriter object.
///
QImageWriter* q_imagewriter_new();

/// q_imagewriter_new2 constructs a new QImageWriter object.
///
/// @param device QIODevice*
/// @param format const char*
QImageWriter* q_imagewriter_new2(void* device, const char* format);

/// q_imagewriter_new3 constructs a new QImageWriter object.
///
/// @param fileName const char*
QImageWriter* q_imagewriter_new3(const char* fileName);

/// q_imagewriter_new4 constructs a new QImageWriter object.
///
/// @param fileName const char*
/// @param format const char*
QImageWriter* q_imagewriter_new4(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* q_imagewriter_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFormat)
///
/// @param self QImageWriter*
/// @param format const char*
void q_imagewriter_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#format)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageWriter*
char* q_imagewriter_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setDevice)
///
/// @param self QImageWriter*
/// @param device QIODevice*
void q_imagewriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#device)
///
/// @param self QImageWriter*
QIODevice* q_imagewriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setFileName)
///
/// @param self QImageWriter*
/// @param fileName const char*
void q_imagewriter_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageWriter*
const char* q_imagewriter_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setQuality)
///
/// @param self QImageWriter*
/// @param quality int
void q_imagewriter_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#quality)
///
/// @param self QImageWriter*
int32_t q_imagewriter_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setCompression)
///
/// @param self QImageWriter*
/// @param compression int
void q_imagewriter_set_compression(void* self, int compression);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#compression)
///
/// @param self QImageWriter*
int32_t q_imagewriter_compression(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setSubType)
///
/// @param self QImageWriter*
/// @param typeVal const char*
void q_imagewriter_set_sub_type(void* self, const char* typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#subType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageWriter*
char* q_imagewriter_sub_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedSubTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageWriter*
const char** q_imagewriter_supported_sub_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setOptimizedWrite)
///
/// @param self QImageWriter*
/// @param optimize bool
void q_imagewriter_set_optimized_write(void* self, bool optimize);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#optimizedWrite)
///
/// @param self QImageWriter*
bool q_imagewriter_optimized_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setProgressiveScanWrite)
///
/// @param self QImageWriter*
/// @param progressive bool
void q_imagewriter_set_progressive_scan_write(void* self, bool progressive);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#progressiveScanWrite)
///
/// @param self QImageWriter*
bool q_imagewriter_progressive_scan_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#transformation)
///
/// @param self QImageWriter*
///
/// @return flag of enum QImageIOHandler__Transformation
int64_t q_imagewriter_transformation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setTransformation)
///
/// @param self QImageWriter*
/// @param orientation flag of enum QImageIOHandler__Transformation
void q_imagewriter_set_transformation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#setText)
///
/// @param self QImageWriter*
/// @param key const char*
/// @param text const char*
void q_imagewriter_set_text(void* self, const char* key, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#canWrite)
///
/// @param self QImageWriter*
bool q_imagewriter_can_write(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#write)
///
/// @param self QImageWriter*
/// @param image QImage*
bool q_imagewriter_write(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#error)
///
/// @param self QImageWriter*
///
/// @return enum QImageWriter__ImageWriterError
int32_t q_imagewriter_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageWriter*
const char* q_imagewriter_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportsOption)
///
/// @param self QImageWriter*
/// @param option enum QImageIOHandler__ImageOption
bool q_imagewriter_supports_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedImageFormats)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_imagewriter_supported_image_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#supportedMimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_imagewriter_supported_mime_types();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#imageFormatsForMimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param mimeType const char*
const char** q_imagewriter_image_formats_for_mime_type(const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* q_imagewriter_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* q_imagewriter_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagewriter.html#dtor.QImageWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QImageWriter*
void q_imagewriter_delete(void* self);

/// https://doc.qt.io/qt-6/qimagewriter.html#types

typedef enum {
    QIMAGEWRITER_IMAGEWRITERERROR_UNKNOWNERROR = 0,
    QIMAGEWRITER_IMAGEWRITERERROR_DEVICEERROR = 1,
    QIMAGEWRITER_IMAGEWRITERERROR_UNSUPPORTEDFORMATERROR = 2,
    QIMAGEWRITER_IMAGEWRITERERROR_INVALIDIMAGEERROR = 3
} QImageWriter__ImageWriterError;

#endif
