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

/// https://doc.qt.io/qt-6/qsurfaceformat.html

/// q_surfaceformat_new constructs a new QSurfaceFormat object.
///
///
QSurfaceFormat* q_surfaceformat_new();

/// q_surfaceformat_new2 constructs a new QSurfaceFormat object.
///
/// ``` int options ```
QSurfaceFormat* q_surfaceformat_new2(int64_t options);

/// q_surfaceformat_new3 constructs a new QSurfaceFormat object.
///
/// ``` QSurfaceFormat* other ```
QSurfaceFormat* q_surfaceformat_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#operator=)
///
/// ``` QSurfaceFormat* self, QSurfaceFormat* other ```
void q_surfaceformat_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_depth_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_depth_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_stencil_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_stencil_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_red_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_red_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_green_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_green_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_blue_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_blue_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_alpha_buffer_size(void* self, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_alpha_buffer_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
///
/// ``` QSurfaceFormat* self, int numSamples ```
void q_surfaceformat_set_samples(void* self, int numSamples);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_samples(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__SwapBehavior behavior ```
void q_surfaceformat_set_swap_behavior(void* self, int64_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_swap_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
///
/// ``` QSurfaceFormat* self ```
bool q_surfaceformat_has_alpha(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__OpenGLContextProfile profile ```
void q_surfaceformat_set_profile(void* self, int64_t profile);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_profile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__RenderableType typeVal ```
void q_surfaceformat_set_renderable_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_renderable_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
///
/// ``` QSurfaceFormat* self, int majorVersion ```
void q_surfaceformat_set_major_version(void* self, int majorVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
///
/// ``` QSurfaceFormat* self, int minorVersion ```
void q_surfaceformat_set_minor_version(void* self, int minorVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
///
/// ``` QSurfaceFormat* self ```
libqt_pair /* tuple of int and int */ q_surfaceformat_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
///
/// ``` QSurfaceFormat* self, int major, int minor ```
void q_surfaceformat_set_version(void* self, int major, int minor);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
///
/// ``` QSurfaceFormat* self ```
bool q_surfaceformat_stereo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
///
/// ``` QSurfaceFormat* self, bool enable ```
void q_surfaceformat_set_stereo(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
///
/// ``` QSurfaceFormat* self, int options ```
void q_surfaceformat_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option ```
void q_surfaceformat_set_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option ```
bool q_surfaceformat_test_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_swap_interval(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
///
/// ``` QSurfaceFormat* self, int interval ```
void q_surfaceformat_set_swap_interval(void* self, int interval);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
///
/// ``` QSurfaceFormat* self ```
QColorSpace* q_surfaceformat_color_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// ``` QSurfaceFormat* self, QColorSpace* colorSpace ```
void q_surfaceformat_set_color_space(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__ColorSpace colorSpace ```
void q_surfaceformat_set_color_space_with_color_space(void* self, int64_t colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
///
/// ``` QSurfaceFormat* format ```
void q_surfaceformat_set_default_format(void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
///
///
QSurfaceFormat* q_surfaceformat_default_format();

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option, bool on ```
void q_surfaceformat_set_option2(void* self, int64_t option, bool on);

/// Delete this object from C++ memory.
///
/// ``` QSurfaceFormat* self ```
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
