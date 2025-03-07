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

QImageReader* q_imagereader_new();
QImageReader* q_imagereader_new2(void* device);
QImageReader* q_imagereader_new3(const char* fileName);
QImageReader* q_imagereader_new4(void* device, const char* format);
QImageReader* q_imagereader_new5(const char* fileName, const char* format);
const char* q_imagereader_tr(const char* sourceText);
void q_imagereader_set_format(void* self, const char* format);
char* q_imagereader_format(void* self);
void q_imagereader_set_auto_detect_image_format(void* self, bool enabled);
bool q_imagereader_auto_detect_image_format(void* self);
void q_imagereader_set_decide_format_from_content(void* self, bool ignored);
bool q_imagereader_decide_format_from_content(void* self);
void q_imagereader_set_device(void* self, void* device);
QIODevice* q_imagereader_device(void* self);
void q_imagereader_set_file_name(void* self, const char* fileName);
const char* q_imagereader_file_name(void* self);
QSize* q_imagereader_size(void* self);
int64_t q_imagereader_image_format(void* self);
const char** q_imagereader_text_keys(void* self);
const char* q_imagereader_text(void* self, const char* key);
void q_imagereader_set_clip_rect(void* self, void* rect);
QRect* q_imagereader_clip_rect(void* self);
void q_imagereader_set_scaled_size(void* self, void* size);
QSize* q_imagereader_scaled_size(void* self);
void q_imagereader_set_quality(void* self, int quality);
int32_t q_imagereader_quality(void* self);
void q_imagereader_set_scaled_clip_rect(void* self, void* rect);
QRect* q_imagereader_scaled_clip_rect(void* self);
void q_imagereader_set_background_color(void* self, void* color);
QColor* q_imagereader_background_color(void* self);
bool q_imagereader_supports_animation(void* self);
int64_t q_imagereader_transformation(void* self);
void q_imagereader_set_auto_transform(void* self, bool enabled);
bool q_imagereader_auto_transform(void* self);
char* q_imagereader_sub_type(void* self);
const char** q_imagereader_supported_sub_types(void* self);
bool q_imagereader_can_read(void* self);
QImage* q_imagereader_read(void* self);
bool q_imagereader_read_with_image(void* self, void* image);
bool q_imagereader_jump_to_next_image(void* self);
bool q_imagereader_jump_to_image(void* self, int imageNumber);
int32_t q_imagereader_loop_count(void* self);
int32_t q_imagereader_image_count(void* self);
int32_t q_imagereader_next_image_delay(void* self);
int32_t q_imagereader_current_image_number(void* self);
QRect* q_imagereader_current_image_rect(void* self);
int64_t q_imagereader_error(void* self);
const char* q_imagereader_error_string(void* self);
bool q_imagereader_supports_option(void* self, int64_t option);
char* q_imagereader_image_format_with_file_name(const char* fileName);
char* q_imagereader_image_format_with_device(void* device);
const char** q_imagereader_supported_image_formats();
const char** q_imagereader_supported_mime_types();
const char** q_imagereader_image_formats_for_mime_type(const char* mimeType);
int32_t q_imagereader_allocation_limit();
void q_imagereader_set_allocation_limit(int mbLimit);
const char* q_imagereader_tr2(const char* sourceText, const char* disambiguation);
const char* q_imagereader_tr3(const char* sourceText, const char* disambiguation, int n);
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
