#include "libqcolorspace.hpp"
#include "libqsurfaceformat.hpp"
#include "libqsurfaceformat.h"

/// https://doc.qt.io/qt-6/qsurfaceformat.html

/// q_surfaceformat_new constructs a new QSurfaceFormat object.
///
///
QSurfaceFormat* q_surfaceformat_new() {
    return QSurfaceFormat_new();
}

/// q_surfaceformat_new2 constructs a new QSurfaceFormat object.
///
/// ``` int options ```
QSurfaceFormat* q_surfaceformat_new2(int64_t options) {
    return QSurfaceFormat_new2(options);
}

/// q_surfaceformat_new3 constructs a new QSurfaceFormat object.
///
/// ``` QSurfaceFormat* other ```
QSurfaceFormat* q_surfaceformat_new3(void* other) {
    return QSurfaceFormat_new3((QSurfaceFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#operator=)
///
/// ``` QSurfaceFormat* self, QSurfaceFormat* other ```
void q_surfaceformat_operator_assign(void* self, void* other) {
    QSurfaceFormat_OperatorAssign((QSurfaceFormat*)self, (QSurfaceFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDepthBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_depth_buffer_size(void* self, int size) {
    QSurfaceFormat_SetDepthBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#depthBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_depth_buffer_size(void* self) {
    return QSurfaceFormat_DepthBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStencilBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_stencil_buffer_size(void* self, int size) {
    QSurfaceFormat_SetStencilBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stencilBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_stencil_buffer_size(void* self) {
    return QSurfaceFormat_StencilBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRedBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_red_buffer_size(void* self, int size) {
    QSurfaceFormat_SetRedBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#redBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_red_buffer_size(void* self) {
    return QSurfaceFormat_RedBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setGreenBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_green_buffer_size(void* self, int size) {
    QSurfaceFormat_SetGreenBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#greenBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_green_buffer_size(void* self) {
    return QSurfaceFormat_GreenBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setBlueBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_blue_buffer_size(void* self, int size) {
    QSurfaceFormat_SetBlueBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#blueBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_blue_buffer_size(void* self) {
    return QSurfaceFormat_BlueBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setAlphaBufferSize)
///
/// ``` QSurfaceFormat* self, int size ```
void q_surfaceformat_set_alpha_buffer_size(void* self, int size) {
    QSurfaceFormat_SetAlphaBufferSize((QSurfaceFormat*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#alphaBufferSize)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_alpha_buffer_size(void* self) {
    return QSurfaceFormat_AlphaBufferSize((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSamples)
///
/// ``` QSurfaceFormat* self, int numSamples ```
void q_surfaceformat_set_samples(void* self, int numSamples) {
    QSurfaceFormat_SetSamples((QSurfaceFormat*)self, numSamples);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#samples)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_samples(void* self) {
    return QSurfaceFormat_Samples((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapBehavior)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__SwapBehavior behavior ```
void q_surfaceformat_set_swap_behavior(void* self, int64_t behavior) {
    QSurfaceFormat_SetSwapBehavior((QSurfaceFormat*)self, behavior);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapBehavior)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_swap_behavior(void* self) {
    return QSurfaceFormat_SwapBehavior((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#hasAlpha)
///
/// ``` QSurfaceFormat* self ```
bool q_surfaceformat_has_alpha(void* self) {
    return QSurfaceFormat_HasAlpha((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setProfile)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__OpenGLContextProfile profile ```
void q_surfaceformat_set_profile(void* self, int64_t profile) {
    QSurfaceFormat_SetProfile((QSurfaceFormat*)self, profile);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#profile)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_profile(void* self) {
    return QSurfaceFormat_Profile((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setRenderableType)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__RenderableType typeVal ```
void q_surfaceformat_set_renderable_type(void* self, int64_t typeVal) {
    QSurfaceFormat_SetRenderableType((QSurfaceFormat*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#renderableType)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_renderable_type(void* self) {
    return QSurfaceFormat_RenderableType((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMajorVersion)
///
/// ``` QSurfaceFormat* self, int majorVersion ```
void q_surfaceformat_set_major_version(void* self, int majorVersion) {
    QSurfaceFormat_SetMajorVersion((QSurfaceFormat*)self, majorVersion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#majorVersion)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_major_version(void* self) {
    return QSurfaceFormat_MajorVersion((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setMinorVersion)
///
/// ``` QSurfaceFormat* self, int minorVersion ```
void q_surfaceformat_set_minor_version(void* self, int minorVersion) {
    QSurfaceFormat_SetMinorVersion((QSurfaceFormat*)self, minorVersion);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#minorVersion)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_minor_version(void* self) {
    return QSurfaceFormat_MinorVersion((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#version)
///
/// ``` QSurfaceFormat* self ```
libqt_pair /* tuple of int and int */ q_surfaceformat_version(void* self) {
    return QSurfaceFormat_Version((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setVersion)
///
/// ``` QSurfaceFormat* self, int major, int minor ```
void q_surfaceformat_set_version(void* self, int major, int minor) {
    QSurfaceFormat_SetVersion((QSurfaceFormat*)self, major, minor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#stereo)
///
/// ``` QSurfaceFormat* self ```
bool q_surfaceformat_stereo(void* self) {
    return QSurfaceFormat_Stereo((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setStereo)
///
/// ``` QSurfaceFormat* self, bool enable ```
void q_surfaceformat_set_stereo(void* self, bool enable) {
    QSurfaceFormat_SetStereo((QSurfaceFormat*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOptions)
///
/// ``` QSurfaceFormat* self, int options ```
void q_surfaceformat_set_options(void* self, int64_t options) {
    QSurfaceFormat_SetOptions((QSurfaceFormat*)self, options);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option ```
void q_surfaceformat_set_option(void* self, int64_t option) {
    QSurfaceFormat_SetOption((QSurfaceFormat*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#testOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option ```
bool q_surfaceformat_test_option(void* self, int64_t option) {
    return QSurfaceFormat_TestOption((QSurfaceFormat*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#options)
///
/// ``` QSurfaceFormat* self ```
int64_t q_surfaceformat_options(void* self) {
    return QSurfaceFormat_Options((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#swapInterval)
///
/// ``` QSurfaceFormat* self ```
int32_t q_surfaceformat_swap_interval(void* self) {
    return QSurfaceFormat_SwapInterval((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setSwapInterval)
///
/// ``` QSurfaceFormat* self, int interval ```
void q_surfaceformat_set_swap_interval(void* self, int interval) {
    QSurfaceFormat_SetSwapInterval((QSurfaceFormat*)self, interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#colorSpace)
///
/// ``` QSurfaceFormat* self ```
QColorSpace* q_surfaceformat_color_space(void* self) {
    return QSurfaceFormat_ColorSpace((QSurfaceFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// ``` QSurfaceFormat* self, QColorSpace* colorSpace ```
void q_surfaceformat_set_color_space(void* self, void* colorSpace) {
    QSurfaceFormat_SetColorSpace((QSurfaceFormat*)self, (QColorSpace*)colorSpace);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setColorSpace)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__ColorSpace colorSpace ```
void q_surfaceformat_set_color_space_with_color_space(void* self, int64_t colorSpace) {
    QSurfaceFormat_SetColorSpaceWithColorSpace((QSurfaceFormat*)self, colorSpace);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setDefaultFormat)
///
/// ``` QSurfaceFormat* format ```
void q_surfaceformat_set_default_format(void* format) {
    QSurfaceFormat_SetDefaultFormat((QSurfaceFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#defaultFormat)
///
///
QSurfaceFormat* q_surfaceformat_default_format() {
    return QSurfaceFormat_DefaultFormat();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsurfaceformat.html#setOption)
///
/// ``` QSurfaceFormat* self, enum QSurfaceFormat__FormatOption option, bool on ```
void q_surfaceformat_set_option2(void* self, int64_t option, bool on) {
    QSurfaceFormat_SetOption2((QSurfaceFormat*)self, option, on);
}

/// Delete this object from C++ memory.
///
/// ``` QSurfaceFormat* self ```
void q_surfaceformat_delete(void* self) {
    QSurfaceFormat_Delete((QSurfaceFormat*)(self));
}