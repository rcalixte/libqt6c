#include "libqpixelformat.hpp"
#include "libqpixelformat.h"

QPixelFormat* q_pixelformat_new(void* other) {
    return QPixelFormat_new((QPixelFormat*)other);
}

QPixelFormat* q_pixelformat_new2(void* other) {
    return QPixelFormat_new2((QPixelFormat*)other);
}

QPixelFormat* q_pixelformat_new3() {
    return QPixelFormat_new3();
}

QPixelFormat* q_pixelformat_new4(int32_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int32_t alphaUsage, int32_t alphaPosition, int32_t premultiplied, int32_t typeInterpretation) {
    return QPixelFormat_new4(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation);
}

QPixelFormat* q_pixelformat_new5(void* param1) {
    return QPixelFormat_new5((QPixelFormat*)param1);
}

QPixelFormat* q_pixelformat_new6(int32_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int32_t alphaUsage, int32_t alphaPosition, int32_t premultiplied, int32_t typeInterpretation, int32_t byteOrder) {
    return QPixelFormat_new6(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder);
}

QPixelFormat* q_pixelformat_new7(int32_t colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int32_t alphaUsage, int32_t alphaPosition, int32_t premultiplied, int32_t typeInterpretation, int32_t byteOrder, unsigned char subEnum) {
    return QPixelFormat_new7(colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, byteOrder, subEnum);
}

void q_pixelformat_copy_assign(void* self, void* other) {
    QPixelFormat_CopyAssign((QPixelFormat*)self, (QPixelFormat*)other);
}

void q_pixelformat_move_assign(void* self, void* other) {
    QPixelFormat_MoveAssign((QPixelFormat*)self, (QPixelFormat*)other);
}

int32_t q_pixelformat_color_model(void* self) {
    return QPixelFormat_ColorModel((QPixelFormat*)self);
}

unsigned char q_pixelformat_channel_count(void* self) {
    return QPixelFormat_ChannelCount((QPixelFormat*)self);
}

unsigned char q_pixelformat_red_size(void* self) {
    return QPixelFormat_RedSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_green_size(void* self) {
    return QPixelFormat_GreenSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_blue_size(void* self) {
    return QPixelFormat_BlueSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_cyan_size(void* self) {
    return QPixelFormat_CyanSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_magenta_size(void* self) {
    return QPixelFormat_MagentaSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_yellow_size(void* self) {
    return QPixelFormat_YellowSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_black_size(void* self) {
    return QPixelFormat_BlackSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_hue_size(void* self) {
    return QPixelFormat_HueSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_saturation_size(void* self) {
    return QPixelFormat_SaturationSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_lightness_size(void* self) {
    return QPixelFormat_LightnessSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_brightness_size(void* self) {
    return QPixelFormat_BrightnessSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_alpha_size(void* self) {
    return QPixelFormat_AlphaSize((QPixelFormat*)self);
}

unsigned char q_pixelformat_bits_per_pixel(void* self) {
    return QPixelFormat_BitsPerPixel((QPixelFormat*)self);
}

int32_t q_pixelformat_alpha_usage(void* self) {
    return QPixelFormat_AlphaUsage((QPixelFormat*)self);
}

int32_t q_pixelformat_alpha_position(void* self) {
    return QPixelFormat_AlphaPosition((QPixelFormat*)self);
}

int32_t q_pixelformat_premultiplied(void* self) {
    return QPixelFormat_Premultiplied((QPixelFormat*)self);
}

int32_t q_pixelformat_type_interpretation(void* self) {
    return QPixelFormat_TypeInterpretation((QPixelFormat*)self);
}

int32_t q_pixelformat_byte_order(void* self) {
    return QPixelFormat_ByteOrder((QPixelFormat*)self);
}

int32_t q_pixelformat_yuv_layout(void* self) {
    return QPixelFormat_YuvLayout((QPixelFormat*)self);
}

unsigned char q_pixelformat_sub_enum(void* self) {
    return QPixelFormat_SubEnum((QPixelFormat*)self);
}

void q_pixelformat_delete(void* self) {
    QPixelFormat_Delete((QPixelFormat*)(self));
}
