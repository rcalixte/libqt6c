#pragma once
#ifndef SRCQT6C_LIBQPIXELFORMAT_H
#define SRCQT6C_LIBQPIXELFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpixelformat.html

/// q_pixelformat_new constructs a new QPixelFormat object.
///
/// ``` QPixelFormat* other ```
QPixelFormat* q_pixelformat_new(void* other);

/// q_pixelformat_new2 constructs a new QPixelFormat object and invalidates the source QPixelFormat object.
///
/// ``` QPixelFormat* other ```
QPixelFormat* q_pixelformat_new2(void* other);

/// q_pixelformat_new3 constructs a new QPixelFormat object.
///
///
QPixelFormat* q_pixelformat_new3();

/// q_pixelformat_new4 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation ```
QPixelFormat* q_pixelformat_new4(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation);

/// q_pixelformat_new5 constructs a new QPixelFormat object.
///
/// ``` QPixelFormat* param1 ```
QPixelFormat* q_pixelformat_new5(void* param1);

/// q_pixelformat_new6 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation, enum QPixelFormat__ByteOrder byteOrder ```
QPixelFormat* q_pixelformat_new6(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation, int64_t byteOrder);

/// q_pixelformat_new7 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation, enum QPixelFormat__ByteOrder byteOrder, unsigned char subEnum ```
QPixelFormat* q_pixelformat_new7(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation, int64_t byteOrder, unsigned char subEnum);

/// q_pixelformat_copy_assign shallow copies `other` into `self`.
///
/// ``` QPixelFormat* self, QPixelFormat* other ```
void q_pixelformat_copy_assign(void* self, void* other);

/// q_pixelformat_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPixelFormat* self, QPixelFormat* other ```
void q_pixelformat_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#colorModel)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_color_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#channelCount)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_channel_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#redSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_red_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#greenSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_green_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#blueSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_blue_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#cyanSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_cyan_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#magentaSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_magenta_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#yellowSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_yellow_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#blackSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_black_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#hueSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_hue_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#saturationSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_saturation_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#lightnessSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_lightness_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#brightnessSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_brightness_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_alpha_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#bitsPerPixel)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_bits_per_pixel(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaUsage)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_alpha_usage(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaPosition)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_alpha_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#premultiplied)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_premultiplied(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#typeInterpretation)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_type_interpretation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#byteOrder)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_byte_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#yuvLayout)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_yuv_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#subEnum)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_sub_enum(void* self);

/// Delete this object from C++ memory.
///
/// ``` QPixelFormat* self ```
void q_pixelformat_delete(void* self);

/// https://doc.qt.io/qt-6/qpixelformat.html#types

typedef enum {
    QPIXELFORMAT_COLORMODEL_RGB = 0,
    QPIXELFORMAT_COLORMODEL_BGR = 1,
    QPIXELFORMAT_COLORMODEL_INDEXED = 2,
    QPIXELFORMAT_COLORMODEL_GRAYSCALE = 3,
    QPIXELFORMAT_COLORMODEL_CMYK = 4,
    QPIXELFORMAT_COLORMODEL_HSL = 5,
    QPIXELFORMAT_COLORMODEL_HSV = 6,
    QPIXELFORMAT_COLORMODEL_YUV = 7,
    QPIXELFORMAT_COLORMODEL_ALPHA = 8
} QPixelFormat__ColorModel;

typedef enum {
    QPIXELFORMAT_ALPHAUSAGE_USESALPHA = 0,
    QPIXELFORMAT_ALPHAUSAGE_IGNORESALPHA = 1
} QPixelFormat__AlphaUsage;

typedef enum {
    QPIXELFORMAT_ALPHAPOSITION_ATBEGINNING = 0,
    QPIXELFORMAT_ALPHAPOSITION_ATEND = 1
} QPixelFormat__AlphaPosition;

typedef enum {
    QPIXELFORMAT_ALPHAPREMULTIPLIED_NOTPREMULTIPLIED = 0,
    QPIXELFORMAT_ALPHAPREMULTIPLIED_PREMULTIPLIED = 1
} QPixelFormat__AlphaPremultiplied;

typedef enum {
    QPIXELFORMAT_TYPEINTERPRETATION_UNSIGNEDINTEGER = 0,
    QPIXELFORMAT_TYPEINTERPRETATION_UNSIGNEDSHORT = 1,
    QPIXELFORMAT_TYPEINTERPRETATION_UNSIGNEDBYTE = 2,
    QPIXELFORMAT_TYPEINTERPRETATION_FLOATINGPOINT = 3
} QPixelFormat__TypeInterpretation;

typedef enum {
    QPIXELFORMAT_YUVLAYOUT_YUV444 = 0,
    QPIXELFORMAT_YUVLAYOUT_YUV422 = 1,
    QPIXELFORMAT_YUVLAYOUT_YUV411 = 2,
    QPIXELFORMAT_YUVLAYOUT_YUV420P = 3,
    QPIXELFORMAT_YUVLAYOUT_YUV420SP = 4,
    QPIXELFORMAT_YUVLAYOUT_YV12 = 5,
    QPIXELFORMAT_YUVLAYOUT_UYVY = 6,
    QPIXELFORMAT_YUVLAYOUT_YUYV = 7,
    QPIXELFORMAT_YUVLAYOUT_NV12 = 8,
    QPIXELFORMAT_YUVLAYOUT_NV21 = 9,
    QPIXELFORMAT_YUVLAYOUT_IMC1 = 10,
    QPIXELFORMAT_YUVLAYOUT_IMC2 = 11,
    QPIXELFORMAT_YUVLAYOUT_IMC3 = 12,
    QPIXELFORMAT_YUVLAYOUT_IMC4 = 13,
    QPIXELFORMAT_YUVLAYOUT_Y8 = 14,
    QPIXELFORMAT_YUVLAYOUT_Y16 = 15
} QPixelFormat__YUVLayout;

typedef enum {
    QPIXELFORMAT_BYTEORDER_LITTLEENDIAN = 0,
    QPIXELFORMAT_BYTEORDER_BIGENDIAN = 1,
    QPIXELFORMAT_BYTEORDER_CURRENTSYSTEMENDIAN = 2
} QPixelFormat__ByteOrder;

#endif
