#include "libqpixelformat.hpp"
#include "libqpixelformat.h"

/// https://doc.qt.io/qt-6/qpixelformat.html

/// q_pixelformat_new constructs a new QPixelFormat object.
///
/// ``` QPixelFormat* other ```
QPixelFormat* q_pixelformat_new(void* other) {
    return QPixelFormat_new((QPixelFormat*)other);
}

/// q_pixelformat_new2 constructs a new QPixelFormat object and invalidates the source QPixelFormat object.
///
/// ``` QPixelFormat* other ```
QPixelFormat* q_pixelformat_new2(void* other) {
    return QPixelFormat_new2((QPixelFormat*)other);
}

/// q_pixelformat_new3 constructs a new QPixelFormat object.
///
///
QPixelFormat* q_pixelformat_new3() {
    return QPixelFormat_new3();
}

/// q_pixelformat_new4 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation ```
QPixelFormat* q_pixelformat_new4(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation) {
    return QPixelFormat_new4(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation);
}

/// q_pixelformat_new5 constructs a new QPixelFormat object.
///
/// ``` QPixelFormat* param1 ```
QPixelFormat* q_pixelformat_new5(void* param1) {
    return QPixelFormat_new5((QPixelFormat*)param1);
}

/// q_pixelformat_new6 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation, enum QPixelFormat__ByteOrder byteOrder ```
QPixelFormat* q_pixelformat_new6(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation, int64_t byteOrder) {
    return QPixelFormat_new6(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder);
}

/// q_pixelformat_new7 constructs a new QPixelFormat object.
///
/// ``` enum QPixelFormat__ColorModel colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, enum QPixelFormat__AlphaUsage alphaUsage, enum QPixelFormat__AlphaPosition alphaPosition, enum QPixelFormat__AlphaPremultiplied premultiplied, enum QPixelFormat__TypeInterpretation typeInterpretation, enum QPixelFormat__ByteOrder byteOrder, unsigned char subEnum ```
QPixelFormat* q_pixelformat_new7(int64_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int64_t alphaUsage, int64_t alphaPosition, int64_t premultiplied, int64_t typeInterpretation, int64_t byteOrder, unsigned char subEnum) {
    return QPixelFormat_new7(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum);
}

/// q_pixelformat_copy_assign shallow copies `other` into `self`.
///
/// ``` QPixelFormat* self, QPixelFormat* other ```
void q_pixelformat_copy_assign(void* self, void* other) {
    QPixelFormat_CopyAssign((QPixelFormat*)self, (QPixelFormat*)other);
}

/// q_pixelformat_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPixelFormat* self, QPixelFormat* other ```
void q_pixelformat_move_assign(void* self, void* other) {
    QPixelFormat_MoveAssign((QPixelFormat*)self, (QPixelFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#colorModel)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_color_model(void* self) {
    return QPixelFormat_ColorModel((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#channelCount)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_channel_count(void* self) {
    return QPixelFormat_ChannelCount((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#redSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_red_size(void* self) {
    return QPixelFormat_RedSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#greenSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_green_size(void* self) {
    return QPixelFormat_GreenSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#blueSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_blue_size(void* self) {
    return QPixelFormat_BlueSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#cyanSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_cyan_size(void* self) {
    return QPixelFormat_CyanSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#magentaSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_magenta_size(void* self) {
    return QPixelFormat_MagentaSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#yellowSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_yellow_size(void* self) {
    return QPixelFormat_YellowSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#blackSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_black_size(void* self) {
    return QPixelFormat_BlackSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#hueSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_hue_size(void* self) {
    return QPixelFormat_HueSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#saturationSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_saturation_size(void* self) {
    return QPixelFormat_SaturationSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#lightnessSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_lightness_size(void* self) {
    return QPixelFormat_LightnessSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#brightnessSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_brightness_size(void* self) {
    return QPixelFormat_BrightnessSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaSize)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_alpha_size(void* self) {
    return QPixelFormat_AlphaSize((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#bitsPerPixel)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_bits_per_pixel(void* self) {
    return QPixelFormat_BitsPerPixel((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaUsage)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_alpha_usage(void* self) {
    return QPixelFormat_AlphaUsage((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#alphaPosition)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_alpha_position(void* self) {
    return QPixelFormat_AlphaPosition((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#premultiplied)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_premultiplied(void* self) {
    return QPixelFormat_Premultiplied((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#typeInterpretation)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_type_interpretation(void* self) {
    return QPixelFormat_TypeInterpretation((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#byteOrder)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_byte_order(void* self) {
    return QPixelFormat_ByteOrder((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#yuvLayout)
///
/// ``` QPixelFormat* self ```
int64_t q_pixelformat_yuv_layout(void* self) {
    return QPixelFormat_YuvLayout((QPixelFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixelformat.html#subEnum)
///
/// ``` QPixelFormat* self ```
unsigned char q_pixelformat_sub_enum(void* self) {
    return QPixelFormat_SubEnum((QPixelFormat*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPixelFormat* self ```
void q_pixelformat_delete(void* self) {
    QPixelFormat_Delete((QPixelFormat*)(self));
}