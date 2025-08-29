#pragma once
#ifndef SRCQT6C_LIBQIMAGEREADER_H
#define SRCQT6C_LIBQIMAGEREADER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qimagereader.html

/// q_imagereader_new constructs a new QImageReader object.
///
QImageReader* q_imagereader_new();

/// q_imagereader_new2 constructs a new QImageReader object.
///
/// @param device QIODevice*
QImageReader* q_imagereader_new2(void* device);

/// q_imagereader_new3 constructs a new QImageReader object.
///
/// @param fileName const char*
QImageReader* q_imagereader_new3(const char* fileName);

/// q_imagereader_new4 constructs a new QImageReader object.
///
/// @param device QIODevice*
/// @param format const char*
QImageReader* q_imagereader_new4(void* device, const char* format);

/// q_imagereader_new5 constructs a new QImageReader object.
///
/// @param fileName const char*
/// @param format const char*
QImageReader* q_imagereader_new5(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
const char* q_imagereader_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setFormat)
///
/// @param self QImageReader*
/// @param format const char*
void q_imagereader_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#format)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
char* q_imagereader_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAutoDetectImageFormat)
///
/// @param self QImageReader*
/// @param enabled bool
void q_imagereader_set_auto_detect_image_format(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#autoDetectImageFormat)
///
/// @param self QImageReader*
bool q_imagereader_auto_detect_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setDecideFormatFromContent)
///
/// @param self QImageReader*
/// @param ignored bool
void q_imagereader_set_decide_format_from_content(void* self, bool ignored);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#decideFormatFromContent)
///
/// @param self QImageReader*
bool q_imagereader_decide_format_from_content(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setDevice)
///
/// @param self QImageReader*
/// @param device QIODevice*
void q_imagereader_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#device)
///
/// @param self QImageReader*
QIODevice* q_imagereader_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setFileName)
///
/// @param self QImageReader*
/// @param fileName const char*
void q_imagereader_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
const char* q_imagereader_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#size)
///
/// @param self QImageReader*
QSize* q_imagereader_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// @param self QImageReader*
///
/// @return enum QImage__Format
int32_t q_imagereader_image_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#textKeys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
const char** q_imagereader_text_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
/// @param key const char*
const char* q_imagereader_text(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setClipRect)
///
/// @param self QImageReader*
/// @param rect QRect*
void q_imagereader_set_clip_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#clipRect)
///
/// @param self QImageReader*
QRect* q_imagereader_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setScaledSize)
///
/// @param self QImageReader*
/// @param size QSize*
void q_imagereader_set_scaled_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#scaledSize)
///
/// @param self QImageReader*
QSize* q_imagereader_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setQuality)
///
/// @param self QImageReader*
/// @param quality int
void q_imagereader_set_quality(void* self, int quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#quality)
///
/// @param self QImageReader*
int32_t q_imagereader_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setScaledClipRect)
///
/// @param self QImageReader*
/// @param rect QRect*
void q_imagereader_set_scaled_clip_rect(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#scaledClipRect)
///
/// @param self QImageReader*
QRect* q_imagereader_scaled_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setBackgroundColor)
///
/// @param self QImageReader*
/// @param color QColor*
void q_imagereader_set_background_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#backgroundColor)
///
/// @param self QImageReader*
QColor* q_imagereader_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportsAnimation)
///
/// @param self QImageReader*
bool q_imagereader_supports_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#transformation)
///
/// @param self QImageReader*
///
/// @return flag of enum QImageIOHandler__Transformation
int32_t q_imagereader_transformation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAutoTransform)
///
/// @param self QImageReader*
/// @param enabled bool
void q_imagereader_set_auto_transform(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#autoTransform)
///
/// @param self QImageReader*
bool q_imagereader_auto_transform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#subType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
char* q_imagereader_sub_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedSubTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
const char** q_imagereader_supported_sub_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#canRead)
///
/// @param self QImageReader*
bool q_imagereader_can_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#read)
///
/// @param self QImageReader*
QImage* q_imagereader_read(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#read)
///
/// @param self QImageReader*
/// @param image QImage*
bool q_imagereader_read2(void* self, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#jumpToNextImage)
///
/// @param self QImageReader*
bool q_imagereader_jump_to_next_image(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#jumpToImage)
///
/// @param self QImageReader*
/// @param imageNumber int
bool q_imagereader_jump_to_image(void* self, int imageNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#loopCount)
///
/// @param self QImageReader*
int32_t q_imagereader_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageCount)
///
/// @param self QImageReader*
int32_t q_imagereader_image_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#nextImageDelay)
///
/// @param self QImageReader*
int32_t q_imagereader_next_image_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#currentImageNumber)
///
/// @param self QImageReader*
int32_t q_imagereader_current_image_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#currentImageRect)
///
/// @param self QImageReader*
QRect* q_imagereader_current_image_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#error)
///
/// @param self QImageReader*
///
/// @return enum QImageReader__ImageReaderError
int32_t q_imagereader_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QImageReader*
const char* q_imagereader_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportsOption)
///
/// @param self QImageReader*
/// @param option enum QImageIOHandler__ImageOption
bool q_imagereader_supports_option(void* self, int32_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param fileName const char*
char* q_imagereader_image_format2(const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param device QIODevice*
char* q_imagereader_image_format3(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedImageFormats)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_imagereader_supported_image_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#supportedMimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_imagereader_supported_mime_types();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#imageFormatsForMimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param mimeType const char*
const char** q_imagereader_image_formats_for_mime_type(const char* mimeType);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#allocationLimit)
///
int32_t q_imagereader_allocation_limit();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#setAllocationLimit)
///
/// @param mbLimit int
void q_imagereader_set_allocation_limit(int mbLimit);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
const char* q_imagereader_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
const char* q_imagereader_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagereader.html#dtor.QImageReader)
///
/// Delete this object from C++ memory.
///
/// @param self QImageReader*
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
