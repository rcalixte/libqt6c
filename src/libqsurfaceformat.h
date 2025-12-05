#pragma once
#ifndef SRC_QT6C_LIBQSURFACEFORMAT_H
#define SRC_QT6C_LIBQSURFACEFORMAT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)

/// q_surfaceformat_new constructs a new QSurfaceFormat object.
///
QSurfaceFormat* q_surfaceformat_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)

/// q_surfaceformat_new2 constructs a new QSurfaceFormat object.
///
/// @param options flag of enum QSurfaceFormat__FormatOption
///
QSurfaceFormat* q_surfaceformat_new2(int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html)

/// q_surfaceformat_new3 constructs a new QSurfaceFormat object.
///
/// @param other QSurfaceFormat*
///
QSurfaceFormat* q_surfaceformat_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#operator-eq)
///
/// @param self QSurfaceFormat*
/// @param other QSurfaceFormat*
///
void q_surfaceformat_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_depth_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_depth_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_stencil_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_stencil_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_red_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_red_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_green_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_green_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_blue_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_blue_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
///
/// @param self QSurfaceFormat*
/// @param size int
///
void q_surfaceformat_set_alpha_buffer_size(void* self, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_alpha_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
///
/// @param self QSurfaceFormat*
/// @param numSamples int
///
void q_surfaceformat_set_samples(void* self, int numSamples);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_samples(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
///
/// @param self QSurfaceFormat*
/// @param behavior enum QSurfaceFormat__SwapBehavior
///
void q_surfaceformat_set_swap_behavior(void* self, int32_t behavior);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
///
/// @param self QSurfaceFormat*
///
/// @return enum QSurfaceFormat__SwapBehavior
///
int32_t q_surfaceformat_swap_behavior(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
///
/// @param self QSurfaceFormat*
///
bool q_surfaceformat_has_alpha(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
///
/// @param self QSurfaceFormat*
/// @param profile enum QSurfaceFormat__OpenGLContextProfile
///
void q_surfaceformat_set_profile(void* self, int32_t profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
///
/// @param self QSurfaceFormat*
///
/// @return enum QSurfaceFormat__OpenGLContextProfile
///
int32_t q_surfaceformat_profile(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
///
/// @param self QSurfaceFormat*
/// @param type enum QSurfaceFormat__RenderableType
///
void q_surfaceformat_set_renderable_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
///
/// @param self QSurfaceFormat*
///
/// @return enum QSurfaceFormat__RenderableType
///
int32_t q_surfaceformat_renderable_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
///
/// @param self QSurfaceFormat*
/// @param majorVersion int
///
void q_surfaceformat_set_major_version(void* self, int majorVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_major_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
///
/// @param self QSurfaceFormat*
/// @param minorVersion int
///
void q_surfaceformat_set_minor_version(void* self, int minorVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_minor_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
///
/// @param self QSurfaceFormat*
///
libqt_pair /* tuple of int and int */ q_surfaceformat_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
///
/// @param self QSurfaceFormat*
/// @param major int
/// @param minor int
///
void q_surfaceformat_set_version(void* self, int major, int minor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
///
/// @param self QSurfaceFormat*
///
bool q_surfaceformat_stereo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
///
/// @param self QSurfaceFormat*
/// @param enable bool
///
void q_surfaceformat_set_stereo(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
///
/// @param self QSurfaceFormat*
/// @param options flag of enum QSurfaceFormat__FormatOption
///
void q_surfaceformat_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// @param self QSurfaceFormat*
/// @param option enum QSurfaceFormat__FormatOption
///
void q_surfaceformat_set_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
///
/// @param self QSurfaceFormat*
/// @param option enum QSurfaceFormat__FormatOption
///
bool q_surfaceformat_test_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
///
/// @param self QSurfaceFormat*
///
/// @return flag of enum QSurfaceFormat__FormatOption
///
int32_t q_surfaceformat_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
///
/// @param self QSurfaceFormat*
///
int32_t q_surfaceformat_swap_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
///
/// @param self QSurfaceFormat*
/// @param interval int
///
void q_surfaceformat_set_swap_interval(void* self, int interval);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
///
/// @param self QSurfaceFormat*
///
const QColorSpace* q_surfaceformat_color_space(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// @param self QSurfaceFormat*
/// @param colorSpace QColorSpace*
///
void q_surfaceformat_set_color_space(void* self, void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// @param self QSurfaceFormat*
/// @param colorSpace enum QSurfaceFormat__ColorSpace
///
void q_surfaceformat_set_color_space2(void* self, int32_t colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
///
/// @param format QSurfaceFormat*
///
void q_surfaceformat_set_default_format(void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
///
QSurfaceFormat* q_surfaceformat_default_format();

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// @param self QSurfaceFormat*
/// @param option enum QSurfaceFormat__FormatOption
/// @param on bool
///
void q_surfaceformat_set_option2(void* self, int32_t option, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#dtor.QSurfaceFormat)
///
/// Delete this object from C++ memory.
///
/// @param self QSurfaceFormat*
///
void q_surfaceformat_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)

typedef enum {
    QSURFACEFORMAT_FORMATOPTION_STEREOBUFFERS = 1,
    QSURFACEFORMAT_FORMATOPTION_DEBUGCONTEXT = 2,
    QSURFACEFORMAT_FORMATOPTION_DEPRECATEDFUNCTIONS = 4,
    QSURFACEFORMAT_FORMATOPTION_RESETNOTIFICATION = 8,
    QSURFACEFORMAT_FORMATOPTION_PROTECTEDCONTENT = 16
} QSurfaceFormat__FormatOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)

typedef enum {
    QSURFACEFORMAT_SWAPBEHAVIOR_DEFAULTSWAPBEHAVIOR = 0,
    QSURFACEFORMAT_SWAPBEHAVIOR_SINGLEBUFFER = 1,
    QSURFACEFORMAT_SWAPBEHAVIOR_DOUBLEBUFFER = 2,
    QSURFACEFORMAT_SWAPBEHAVIOR_TRIPLEBUFFER = 3
} QSurfaceFormat__SwapBehavior;

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)

typedef enum {
    QSURFACEFORMAT_RENDERABLETYPE_DEFAULTRENDERABLETYPE = 0,
    QSURFACEFORMAT_RENDERABLETYPE_OPENGL = 1,
    QSURFACEFORMAT_RENDERABLETYPE_OPENGLES = 2,
    QSURFACEFORMAT_RENDERABLETYPE_OPENVG = 4
} QSurfaceFormat__RenderableType;

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)

typedef enum {
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_NOPROFILE = 0,
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_COREPROFILE = 1,
    QSURFACEFORMAT_OPENGLCONTEXTPROFILE_COMPATIBILITYPROFILE = 2
} QSurfaceFormat__OpenGLContextProfile;

/// [Upstream resources](https://doc.qt.io/qt-6/qsurfaceformat.html#public-types)

typedef enum {
    QSURFACEFORMAT_COLORSPACE_DEFAULTCOLORSPACE = 0,
    QSURFACEFORMAT_COLORSPACE_SRGBCOLORSPACE = 1
} QSurfaceFormat__ColorSpace;

#endif
