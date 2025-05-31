#include "libqcolorspace.hpp"
#include "libqsurfaceformat.hpp"
#include "libqsurfaceformat.h"

QSurfaceFormat* q_surfaceformat_new() {
    return QSurfaceFormat_new();
}

QSurfaceFormat* q_surfaceformat_new2(int64_t options) {
    return QSurfaceFormat_new2(options);
}

QSurfaceFormat* q_surfaceformat_new3(void* other) {
    return QSurfaceFormat_new3((QSurfaceFormat*)other);
}

void q_surfaceformat_operator_assign(void* self, void* other) {
    QSurfaceFormat_OperatorAssign((QSurfaceFormat*)self, (QSurfaceFormat*)other);
}

void q_surfaceformat_set_depth_buffer_size(void* self, int size) {
    QSurfaceFormat_SetDepthBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_depth_buffer_size(void* self) {
    return QSurfaceFormat_DepthBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_stencil_buffer_size(void* self, int size) {
    QSurfaceFormat_SetStencilBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_stencil_buffer_size(void* self) {
    return QSurfaceFormat_StencilBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_red_buffer_size(void* self, int size) {
    QSurfaceFormat_SetRedBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_red_buffer_size(void* self) {
    return QSurfaceFormat_RedBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_green_buffer_size(void* self, int size) {
    QSurfaceFormat_SetGreenBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_green_buffer_size(void* self) {
    return QSurfaceFormat_GreenBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_blue_buffer_size(void* self, int size) {
    QSurfaceFormat_SetBlueBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_blue_buffer_size(void* self) {
    return QSurfaceFormat_BlueBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_alpha_buffer_size(void* self, int size) {
    QSurfaceFormat_SetAlphaBufferSize((QSurfaceFormat*)self, size);
}

int32_t q_surfaceformat_alpha_buffer_size(void* self) {
    return QSurfaceFormat_AlphaBufferSize((QSurfaceFormat*)self);
}

void q_surfaceformat_set_samples(void* self, int numSamples) {
    QSurfaceFormat_SetSamples((QSurfaceFormat*)self, numSamples);
}

int32_t q_surfaceformat_samples(void* self) {
    return QSurfaceFormat_Samples((QSurfaceFormat*)self);
}

void q_surfaceformat_set_swap_behavior(void* self, int64_t behavior) {
    QSurfaceFormat_SetSwapBehavior((QSurfaceFormat*)self, behavior);
}

int64_t q_surfaceformat_swap_behavior(void* self) {
    return QSurfaceFormat_SwapBehavior((QSurfaceFormat*)self);
}

bool q_surfaceformat_has_alpha(void* self) {
    return QSurfaceFormat_HasAlpha((QSurfaceFormat*)self);
}

void q_surfaceformat_set_profile(void* self, int64_t profile) {
    QSurfaceFormat_SetProfile((QSurfaceFormat*)self, profile);
}

int64_t q_surfaceformat_profile(void* self) {
    return QSurfaceFormat_Profile((QSurfaceFormat*)self);
}

void q_surfaceformat_set_renderable_type(void* self, int64_t typeVal) {
    QSurfaceFormat_SetRenderableType((QSurfaceFormat*)self, typeVal);
}

int64_t q_surfaceformat_renderable_type(void* self) {
    return QSurfaceFormat_RenderableType((QSurfaceFormat*)self);
}

void q_surfaceformat_set_major_version(void* self, int majorVersion) {
    QSurfaceFormat_SetMajorVersion((QSurfaceFormat*)self, majorVersion);
}

int32_t q_surfaceformat_major_version(void* self) {
    return QSurfaceFormat_MajorVersion((QSurfaceFormat*)self);
}

void q_surfaceformat_set_minor_version(void* self, int minorVersion) {
    QSurfaceFormat_SetMinorVersion((QSurfaceFormat*)self, minorVersion);
}

int32_t q_surfaceformat_minor_version(void* self) {
    return QSurfaceFormat_MinorVersion((QSurfaceFormat*)self);
}

libqt_pair /* tuple of int and int */ q_surfaceformat_version(void* self) {
    return QSurfaceFormat_Version((QSurfaceFormat*)self);
}

void q_surfaceformat_set_version(void* self, int major, int minor) {
    QSurfaceFormat_SetVersion((QSurfaceFormat*)self, major, minor);
}

bool q_surfaceformat_stereo(void* self) {
    return QSurfaceFormat_Stereo((QSurfaceFormat*)self);
}

void q_surfaceformat_set_stereo(void* self, bool enable) {
    QSurfaceFormat_SetStereo((QSurfaceFormat*)self, enable);
}

void q_surfaceformat_set_options(void* self, int64_t options) {
    QSurfaceFormat_SetOptions((QSurfaceFormat*)self, options);
}

void q_surfaceformat_set_option(void* self, int64_t option) {
    QSurfaceFormat_SetOption((QSurfaceFormat*)self, option);
}

bool q_surfaceformat_test_option(void* self, int64_t option) {
    return QSurfaceFormat_TestOption((QSurfaceFormat*)self, option);
}

int64_t q_surfaceformat_options(void* self) {
    return QSurfaceFormat_Options((QSurfaceFormat*)self);
}

int32_t q_surfaceformat_swap_interval(void* self) {
    return QSurfaceFormat_SwapInterval((QSurfaceFormat*)self);
}

void q_surfaceformat_set_swap_interval(void* self, int interval) {
    QSurfaceFormat_SetSwapInterval((QSurfaceFormat*)self, interval);
}

const QColorSpace* q_surfaceformat_color_space(void* self) {
    return QSurfaceFormat_ColorSpace((QSurfaceFormat*)self);
}

void q_surfaceformat_set_color_space(void* self, void* colorSpace) {
    QSurfaceFormat_SetColorSpace((QSurfaceFormat*)self, (QColorSpace*)colorSpace);
}

void q_surfaceformat_set_color_space_with_color_space(void* self, int64_t colorSpace) {
    QSurfaceFormat_SetColorSpaceWithColorSpace((QSurfaceFormat*)self, colorSpace);
}

void q_surfaceformat_set_default_format(void* format) {
    QSurfaceFormat_SetDefaultFormat((QSurfaceFormat*)format);
}

QSurfaceFormat* q_surfaceformat_default_format() {
    return QSurfaceFormat_DefaultFormat();
}

void q_surfaceformat_set_option2(void* self, int64_t option, bool on) {
    QSurfaceFormat_SetOption2((QSurfaceFormat*)self, option, on);
}

void q_surfaceformat_delete(void* self) {
    QSurfaceFormat_Delete((QSurfaceFormat*)(self));
}
