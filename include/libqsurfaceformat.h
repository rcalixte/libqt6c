#pragma once
#ifndef SRCQT6C_LIBQSURFACEFORMAT_H
#define SRCQT6C_LIBQSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolorspace.h"

QSurfaceFormat* q_surfaceformat_new();
QSurfaceFormat* q_surfaceformat_new2(int64_t options);
QSurfaceFormat* q_surfaceformat_new3(void* other);
void q_surfaceformat_operator_assign(void* self, void* other);
void q_surfaceformat_set_depth_buffer_size(void* self, int size);
int32_t q_surfaceformat_depth_buffer_size(void* self);
void q_surfaceformat_set_stencil_buffer_size(void* self, int size);
int32_t q_surfaceformat_stencil_buffer_size(void* self);
void q_surfaceformat_set_red_buffer_size(void* self, int size);
int32_t q_surfaceformat_red_buffer_size(void* self);
void q_surfaceformat_set_green_buffer_size(void* self, int size);
int32_t q_surfaceformat_green_buffer_size(void* self);
void q_surfaceformat_set_blue_buffer_size(void* self, int size);
int32_t q_surfaceformat_blue_buffer_size(void* self);
void q_surfaceformat_set_alpha_buffer_size(void* self, int size);
int32_t q_surfaceformat_alpha_buffer_size(void* self);
void q_surfaceformat_set_samples(void* self, int numSamples);
int32_t q_surfaceformat_samples(void* self);
void q_surfaceformat_set_swap_behavior(void* self, int64_t behavior);
int64_t q_surfaceformat_swap_behavior(void* self);
bool q_surfaceformat_has_alpha(void* self);
void q_surfaceformat_set_profile(void* self, int64_t profile);
int64_t q_surfaceformat_profile(void* self);
void q_surfaceformat_set_renderable_type(void* self, int64_t typeVal);
int64_t q_surfaceformat_renderable_type(void* self);
void q_surfaceformat_set_major_version(void* self, int majorVersion);
int32_t q_surfaceformat_major_version(void* self);
void q_surfaceformat_set_minor_version(void* self, int minorVersion);
int32_t q_surfaceformat_minor_version(void* self);
libqt_pair /* tuple of int and int */ q_surfaceformat_version(void* self);
void q_surfaceformat_set_version(void* self, int major, int minor);
bool q_surfaceformat_stereo(void* self);
void q_surfaceformat_set_stereo(void* self, bool enable);
void q_surfaceformat_set_options(void* self, int64_t options);
void q_surfaceformat_set_option(void* self, int64_t option);
bool q_surfaceformat_test_option(void* self, int64_t option);
int64_t q_surfaceformat_options(void* self);
int32_t q_surfaceformat_swap_interval(void* self);
void q_surfaceformat_set_swap_interval(void* self, int interval);
QColorSpace* q_surfaceformat_color_space(void* self);
void q_surfaceformat_set_color_space(void* self, void* colorSpace);
void q_surfaceformat_set_color_space_with_color_space(void* self, int64_t colorSpace);
void q_surfaceformat_set_default_format(void* format);
QSurfaceFormat* q_surfaceformat_default_format();
void q_surfaceformat_set_option2(void* self, int64_t option, bool on);
void q_surfaceformat_delete(void* self);

/// https://doc.qt.io/qt-6/qsurfaceformat.html#types

typedef enum {
    QSURFACEFORMAT_FORMATOPTION_STEREOBUFFERS = 1,
    QSURFACEFORMAT_FORMATOPTION_DEBUGCONTEXT = 2,
    QSURFACEFORMAT_FORMATOPTION_DEPRECATEDFUNCTIONS = 4,
    QSURFACEFORMAT_FORMATOPTION_RESETNOTIFICATION = 8,
    QSURFACEFORMAT_FORMATOPTION_PROTECTEDCONTENT = 16
} QSurfaceFormat__FormatOption;

typedef enum {
    QSURFACEFORMAT_SWAPBEHAVIOR_DEFAULTSWAPBEHAVIOR = 0,
    QSURFACEFORMAT_SWAPBEHAVIOR_SINGLEBUFFER = 1,
    QSURFACEFORMAT_SWAPBEHAVIOR_DOUBLEBUFFER = 2,
    QSURFACEFORMAT_SWAPBEHAVIOR_TRIPLEBUFFER = 3
} QSurfaceFormat__SwapBehavior;

typedef enum {
    QSURFACEFORMAT_RENDERABLETYPE_DEFAULTRENDERABLETYPE = 0,
    QSURFACEFORMAT_RENDERABLETYPE_OPENGL = 1,
    QSURFACEFORMAT_RENDERABLETYPE_OPENGLES = 2,
    QSURFACEFORMAT_RENDERABLETYPE_OPENVG = 4
} QSurfaceFormat__RenderableType;

typedef enum {
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_NOPROFILE = 0,
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_COREPROFILE = 1,
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_COMPATIBILITYPROFILE = 2
} QSurfaceFormat__OpenGLContextProfile;

typedef enum {
    QSURFACEFORMAT_COLORSPACE_DEFAULTCOLORSPACE = 0,
    QSURFACEFORMAT_COLORSPACE_SRGBCOLORSPACE = 1
} QSurfaceFormat__ColorSpace;

#endif
