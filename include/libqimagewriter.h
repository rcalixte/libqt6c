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

QImageWriter* q_imagewriter_new();
QImageWriter* q_imagewriter_new2(void* device, const char* format);
QImageWriter* q_imagewriter_new3(const char* fileName);
QImageWriter* q_imagewriter_new4(const char* fileName, const char* format);
const char* q_imagewriter_tr(const char* sourceText);
void q_imagewriter_set_format(void* self, const char* format);
char* q_imagewriter_format(void* self);
void q_imagewriter_set_device(void* self, void* device);
QIODevice* q_imagewriter_device(void* self);
void q_imagewriter_set_file_name(void* self, const char* fileName);
const char* q_imagewriter_file_name(void* self);
void q_imagewriter_set_quality(void* self, int quality);
int32_t q_imagewriter_quality(void* self);
void q_imagewriter_set_compression(void* self, int compression);
int32_t q_imagewriter_compression(void* self);
void q_imagewriter_set_sub_type(void* self, const char* typeVal);
char* q_imagewriter_sub_type(void* self);
const char** q_imagewriter_supported_sub_types(void* self);
void q_imagewriter_set_optimized_write(void* self, bool optimize);
bool q_imagewriter_optimized_write(void* self);
void q_imagewriter_set_progressive_scan_write(void* self, bool progressive);
bool q_imagewriter_progressive_scan_write(void* self);
int64_t q_imagewriter_transformation(void* self);
void q_imagewriter_set_transformation(void* self, int64_t orientation);
void q_imagewriter_set_text(void* self, const char* key, const char* text);
bool q_imagewriter_can_write(void* self);
bool q_imagewriter_write(void* self, void* image);
int64_t q_imagewriter_error(void* self);
const char* q_imagewriter_error_string(void* self);
bool q_imagewriter_supports_option(void* self, int64_t option);
const char** q_imagewriter_supported_image_formats();
const char** q_imagewriter_supported_mime_types();
const char** q_imagewriter_image_formats_for_mime_type(const char* mimeType);
const char* q_imagewriter_tr2(const char* sourceText, const char* disambiguation);
const char* q_imagewriter_tr3(const char* sourceText, const char* disambiguation, int n);
void q_imagewriter_delete(void* self);

/// https://doc.qt.io/qt-6/qimagewriter.html#types

typedef enum {
    QIMAGEWRITER_IMAGEWRITERERROR_UNKNOWNERROR = 0,
    QIMAGEWRITER_IMAGEWRITERERROR_DEVICEERROR = 1,
    QIMAGEWRITER_IMAGEWRITERERROR_UNSUPPORTEDFORMATERROR = 2,
    QIMAGEWRITER_IMAGEWRITERERROR_INVALIDIMAGEERROR = 3
} QImageWriter__ImageWriterError;

#endif
