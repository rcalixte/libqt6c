#pragma once
#ifndef SRCQT6C_LIBQIMAGEREADER_H
#define SRCQT6C_LIBQIMAGEREADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolor.h"
#include "libqiodevice.h"
#include "libqimage.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qimagereader.html

/// q_imagereader_new constructs a new QImageReader object.
///
///
QImageReader* q_imagereader_new();

/// q_imagereader_new2 constructs a new QImageReader object.
///
/// ``` QIODevice* device ```
QImageReader* q_imagereader_new2(void* device);

/// q_imagereader_new3 constructs a new QImageReader object.
///
/// ``` const char* fileName ```
QImageReader* q_imagereader_new3(const char* fileName);

/// q_imagereader_new4 constructs a new QImageReader object.
///
/// ``` QIODevice* device, const char* format ```
QImageReader* q_imagereader_new4(void* device, const char* format);

/// q_imagereader_new5 constructs a new QImageReader object.
///
/// ``` const char* fileName, const char* format ```
QImageReader* q_imagereader_new5(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_imagereader_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setFormat)
///
/// ``` QImageReader* self, const char* format ```
void q_imagereader_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#format)
///
/// ``` QImageReader* self ```
char* q_imagereader_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAutoDetectImageFormat)
///
/// ``` QImageReader* self, bool enabled ```
void q_imagereader_set_auto_detect_image_format(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#autoDetectImageFormat)
///
/// ``` QImageReader* self ```
bool q_imagereader_auto_detect_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setDecideFormatFromContent)
///
/// ``` QImageReader* self, bool ignored ```
void q_imagereader_set_decide_format_from_content(void* self, bool ignored);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#decideFormatFromContent)
///
/// ``` QImageReader* self ```
bool q_imagereader_decide_format_from_content(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setDevice)
///
/// ``` QImageReader* self, QIODevice* device ```
void q_imagereader_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#device)
///
/// ``` QImageReader* self ```
QIODevice* q_imagereader_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setFileName)
///
/// ``` QImageReader* self, const char* fileName ```
void q_imagereader_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#fileName)
///
/// ``` QImageReader* self ```
const char* q_imagereader_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#size)
///
/// ``` QImageReader* self ```
QSize* q_imagereader_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// ``` QImageReader* self ```
int64_t q_imagereader_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#textKeys)
///
/// ``` QImageReader* self ```
const char** q_imagereader_text_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#text)
///
/// ``` QImageReader* self, const char* key ```
const char* q_imagereader_text(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setClipRect)
///
/// ``` QImageReader* self, QRect* rect ```
void q_imagereader_set_clip_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#clipRect)
///
/// ``` QImageReader* self ```
QRect* q_imagereader_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setScaledSize)
///
/// ``` QImageReader* self, QSize* size ```
void q_imagereader_set_scaled_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#scaledSize)
///
/// ``` QImageReader* self ```
QSize* q_imagereader_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setQuality)
///
/// ``` QImageReader* self, int quality ```
void q_imagereader_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#quality)
///
/// ``` QImageReader* self ```
int32_t q_imagereader_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setScaledClipRect)
///
/// ``` QImageReader* self, QRect* rect ```
void q_imagereader_set_scaled_clip_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#scaledClipRect)
///
/// ``` QImageReader* self ```
QRect* q_imagereader_scaled_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setBackgroundColor)
///
/// ``` QImageReader* self, QColor* color ```
void q_imagereader_set_background_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#backgroundColor)
///
/// ``` QImageReader* self ```
QColor* q_imagereader_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportsAnimation)
///
/// ``` QImageReader* self ```
bool q_imagereader_supports_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#transformation)
///
/// ``` QImageReader* self ```
int64_t q_imagereader_transformation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAutoTransform)
///
/// ``` QImageReader* self, bool enabled ```
void q_imagereader_set_auto_transform(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#autoTransform)
///
/// ``` QImageReader* self ```
bool q_imagereader_auto_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#subType)
///
/// ``` QImageReader* self ```
char* q_imagereader_sub_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedSubTypes)
///
/// ``` QImageReader* self ```
const char** q_imagereader_supported_sub_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#canRead)
///
/// ``` QImageReader* self ```
bool q_imagereader_can_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#read)
///
/// ``` QImageReader* self ```
QImage* q_imagereader_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#read)
///
/// ``` QImageReader* self, QImage* image ```
bool q_imagereader_read_with_image(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#jumpToNextImage)
///
/// ``` QImageReader* self ```
bool q_imagereader_jump_to_next_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#jumpToImage)
///
/// ``` QImageReader* self, int imageNumber ```
bool q_imagereader_jump_to_image(void* self, int imageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#loopCount)
///
/// ``` QImageReader* self ```
int32_t q_imagereader_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageCount)
///
/// ``` QImageReader* self ```
int32_t q_imagereader_image_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#nextImageDelay)
///
/// ``` QImageReader* self ```
int32_t q_imagereader_next_image_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#currentImageNumber)
///
/// ``` QImageReader* self ```
int32_t q_imagereader_current_image_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#currentImageRect)
///
/// ``` QImageReader* self ```
QRect* q_imagereader_current_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#error)
///
/// ``` QImageReader* self ```
int64_t q_imagereader_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#errorString)
///
/// ``` QImageReader* self ```
const char* q_imagereader_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportsOption)
///
/// ``` QImageReader* self, enum QImageIOHandler__ImageOption option ```
bool q_imagereader_supports_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// ``` const char* fileName ```
char* q_imagereader_image_format_with_file_name(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// ``` QIODevice* device ```
char* q_imagereader_image_format_with_device(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedImageFormats)
///
///
const char** q_imagereader_supported_image_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedMimeTypes)
///
///
const char** q_imagereader_supported_mime_types();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormatsForMimeType)
///
/// ``` const char* mimeType ```
const char** q_imagereader_image_formats_for_mime_type(const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#allocationLimit)
///
///
int32_t q_imagereader_allocation_limit();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAllocationLimit)
///
/// ``` int mbLimit ```
void q_imagereader_set_allocation_limit(int mbLimit);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_imagereader_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_imagereader_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#dtor.QImageReader)
///
/// Delete this object from C++ memory.
///
/// ``` QImageReader* self ```
void q_imagereader_delete(void* self);

/// https://doc.qt.io/qt-6/qimagereader.html#types

typedef enum {
    QIMAGEREADER_IMAGEREADERERROR_UNKNOWNERROR = 0,
    QIMAGEREADER_IMAGEREADERERROR_FILENOTFOUNDERROR = 1,
    QIMAGEREADER_IMAGEREADERERROR_DEVICEERROR = 2,
    QIMAGEREADER_IMAGEREADERERROR_UNSUPPORTEDFORMATERROR = 3,
    QIMAGEREADER_IMAGEREADERERROR_INVALIDDATAERROR = 4
} QImageReader__ImageReaderError;

#endif
