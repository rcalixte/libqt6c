#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_3_3_CORE_H
#define SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_3_3_CORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html)

/// q_openglfunctions_3_3_core_new constructs a new QOpenGLFunctions_3_3_Core object.
///
QOpenGLFunctions_3_3_Core* q_openglfunctions_3_3_core_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
bool q_openglfunctions_3_3_core_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param callback bool func()
///
void q_openglfunctions_3_3_core_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_3_3_Core*
///
bool q_openglfunctions_3_3_core_qbase_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glViewport)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDepthRange)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param nearVal double
/// @param farVal double
///
void q_openglfunctions_3_3_core_gl_depth_range(void* self, double nearVal, double farVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param cap uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_enabled(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetString)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param name uint32_t
///
const uint8_t* q_openglfunctions_3_3_core_gl_get_string(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params double*
///
void q_openglfunctions_3_3_core_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params uint8_t*
///
void q_openglfunctions_3_3_core_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glReadPixels)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_read_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_3_3_core_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_3_3_core_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param func uint32_t
///
void q_openglfunctions_3_3_core_gl_depth_func(void* self, uint32_t func);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilOp)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glLogicOp)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param opcode uint32_t
///
void q_openglfunctions_3_3_core_gl_logic_op(void* self, uint32_t opcode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
///
void q_openglfunctions_3_3_core_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFlush)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
void q_openglfunctions_3_3_core_gl_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFinish)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
void q_openglfunctions_3_3_core_gl_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEnable)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param cap uint32_t
///
void q_openglfunctions_3_3_core_gl_enable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDisable)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param cap uint32_t
///
void q_openglfunctions_3_3_core_gl_disable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDepthMask)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param flag uint8_t
///
void q_openglfunctions_3_3_core_gl_depth_mask(void* self, uint8_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glColorMask)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
///
void q_openglfunctions_3_3_core_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilMask)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_mask(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearDepth)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param depth double
///
void q_openglfunctions_3_3_core_gl_clear_depth(void* self, double depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearStencil)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param s int32_t
///
void q_openglfunctions_3_3_core_gl_clear_stencil(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearColor)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
///
void q_openglfunctions_3_3_core_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClear)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_clear(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_draw_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_3_3_core_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_3_3_core_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glScissor)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param face uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPointSize)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param size float
///
void q_openglfunctions_3_3_core_gl_point_size(void* self, float size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glLineWidth)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param width float
///
void q_openglfunctions_3_3_core_gl_line_width(void* self, float width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glHint)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFrontFace)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_front_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCullFace)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_cull_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsTexture)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param texture uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenTextures)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param textures uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param textures uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindTexture)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param texture uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
///
void q_openglfunctions_3_3_core_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
///
void q_openglfunctions_3_3_core_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
///
void q_openglfunctions_3_3_core_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param factor float
/// @param units float
///
void q_openglfunctions_3_3_core_gl_polygon_offset(void* self, float factor, float units);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawElements)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
///
void q_openglfunctions_3_3_core_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
///
void q_openglfunctions_3_3_core_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_3_3_core_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
///
void q_openglfunctions_3_3_core_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_blend_equation(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlendColor)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
///
void q_openglfunctions_3_3_core_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
///
void q_openglfunctions_3_3_core_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param value float
/// @param invert uint8_t
///
void q_openglfunctions_3_3_core_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param texture uint32_t
///
void q_openglfunctions_3_3_core_gl_active_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPointParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPointParameteri)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_3_3_core_gl_point_parameteri(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPointParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_point_parameterfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPointParameterf)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_3_3_core_gl_point_parameterf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glMultiDrawElements)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t*
/// @param type uint32_t
/// @param indices void*
/// @param drawcount int32_t
///
void q_openglfunctions_3_3_core_gl_multi_draw_elements(void* self, uint32_t mode, int32_t* count, uint32_t type, void* indices, int32_t drawcount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glMultiDrawArrays)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param first int32_t*
/// @param count int32_t*
/// @param drawcount int32_t
///
void q_openglfunctions_3_3_core_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sfactorRGB uint32_t
/// @param dfactorRGB uint32_t
/// @param sfactorAlpha uint32_t
/// @param dfactorAlpha uint32_t
///
void q_openglfunctions_3_3_core_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBufferPointerv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params void*
///
void q_openglfunctions_3_3_core_gl_get_buffer_pointerv(void* self, uint32_t target, uint32_t pname, void* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUnmapBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_unmap_buffer(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glMapBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param access uint32_t
///
void* q_openglfunctions_3_3_core_gl_map_buffer(void* self, uint32_t target, uint32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBufferSubData)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBufferSubData)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
///
void q_openglfunctions_3_3_core_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBufferData)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param size intptr_t
/// @param data void*
/// @param usage uint32_t
///
void q_openglfunctions_3_3_core_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param buffer uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_buffer(void* self, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenBuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param buffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param buffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param buffer uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetQueryObjectiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetQueryiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEndQuery)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
///
void q_openglfunctions_3_3_core_gl_end_query(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBeginQuery)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param id uint32_t
///
void q_openglfunctions_3_3_core_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsQuery)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_query(void* self, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteQueries)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param ids uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenQueries)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param ids uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glValidateProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
///
void q_openglfunctions_3_3_core_gl_validate_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4iv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
///
void q_openglfunctions_3_3_core_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3iv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
///
void q_openglfunctions_3_3_core_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2iv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
///
void q_openglfunctions_3_3_core_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1iv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
///
void q_openglfunctions_3_3_core_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4i)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
///
void q_openglfunctions_3_3_core_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3i)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
///
void q_openglfunctions_3_3_core_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2i)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
///
void q_openglfunctions_3_3_core_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1i)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 int32_t
///
void q_openglfunctions_3_3_core_gl_uniform1i(void* self, int32_t location, int32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4f)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
///
void q_openglfunctions_3_3_core_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3f)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
///
void q_openglfunctions_3_3_core_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2f)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
///
void q_openglfunctions_3_3_core_gl_uniform2f(void* self, int32_t location, float v0, float v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1f)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 float
///
void q_openglfunctions_3_3_core_gl_uniform1f(void* self, int32_t location, float v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUseProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
///
void q_openglfunctions_3_3_core_gl_use_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glShaderSource)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
/// @param count int32_t
/// @param stringVal const char**
/// @param length int32_t*
///
void q_openglfunctions_3_3_core_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glLinkProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
///
void q_openglfunctions_3_3_core_gl_link_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribPointerv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param pointer void*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribdv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param name const char*
///
int32_t q_openglfunctions_3_3_core_gl_get_uniform_location(void* self, uint32_t program, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param source char*
///
void q_openglfunctions_3_3_core_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
///
void q_openglfunctions_3_3_core_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
///
void q_openglfunctions_3_3_core_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param name const char*
///
int32_t q_openglfunctions_3_3_core_gl_get_attrib_location(void* self, uint32_t program, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param maxCount int32_t
/// @param count int32_t*
/// @param obj uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
///
void q_openglfunctions_3_3_core_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
///
void q_openglfunctions_3_3_core_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDetachShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param shader uint32_t
///
void q_openglfunctions_3_3_core_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
///
void q_openglfunctions_3_3_core_gl_delete_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
///
void q_openglfunctions_3_3_core_gl_delete_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCreateShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param type uint32_t
///
uint32_t q_openglfunctions_3_3_core_gl_create_shader(void* self, uint32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCreateProgram)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
uint32_t q_openglfunctions_3_3_core_gl_create_program(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCompileShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param shader uint32_t
///
void q_openglfunctions_3_3_core_gl_compile_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param index uint32_t
/// @param name const char*
///
void q_openglfunctions_3_3_core_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glAttachShader)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param shader uint32_t
///
void q_openglfunctions_3_3_core_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param face uint32_t
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param face uint32_t
/// @param sfail uint32_t
/// @param dpfail uint32_t
/// @param dppass uint32_t
///
void q_openglfunctions_3_3_core_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
///
void q_openglfunctions_3_3_core_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsVertexArray)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param array uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_vertex_array(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenVertexArrays)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param arrays uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteVertexArrays)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param arrays uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindVertexArray)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param array uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_vertex_array(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
///
void q_openglfunctions_3_3_core_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glMapBufferRange)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
/// @param access uint32_t
///
void* q_openglfunctions_3_3_core_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBlitFramebuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param srcX0 int32_t
/// @param srcY0 int32_t
/// @param srcX1 int32_t
/// @param srcY1 int32_t
/// @param dstX0 int32_t
/// @param dstY0 int32_t
/// @param dstX1 int32_t
/// @param dstY1 int32_t
/// @param mask uint32_t
/// @param filter uint32_t
///
void q_openglfunctions_3_3_core_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
///
void q_openglfunctions_3_3_core_gl_generate_mipmap(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferTexture3D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param zoffset int32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferTexture1D)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param framebuffer uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param framebuffer uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_3_3_core_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param renderbuffer uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param renderbuffer uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetStringi)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param name uint32_t
/// @param index uint32_t
///
const uint8_t* q_openglfunctions_3_3_core_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearBufferfi)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
///
void q_openglfunctions_3_3_core_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearBufferfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
///
void q_openglfunctions_3_3_core_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearBufferuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClearBufferiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
///
void q_openglfunctions_3_3_core_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetTexParameterIiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameterIuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexParameterIiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform4ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
///
void q_openglfunctions_3_3_core_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform3ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
///
void q_openglfunctions_3_3_core_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform2ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
///
void q_openglfunctions_3_3_core_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniform1ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param location int32_t
/// @param v0 uint32_t
///
void q_openglfunctions_3_3_core_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetFragDataLocation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param name const char*
///
int32_t q_openglfunctions_3_3_core_gl_get_frag_data_location(void* self, uint32_t program, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindFragDataLocation)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param color uint32_t
/// @param name const char*
///
void q_openglfunctions_3_3_core_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribIPointer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEndConditionalRender)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
void q_openglfunctions_3_3_core_gl_end_conditional_render(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBeginConditionalRender)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glClampColor)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param clamp uint32_t
///
void q_openglfunctions_3_3_core_gl_clamp_color(void* self, uint32_t target, uint32_t clamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTransformFeedbackVaryings)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param count int32_t
/// @param varyings const char**
/// @param bufferMode uint32_t
///
void q_openglfunctions_3_3_core_gl_transform_feedback_varyings(void* self, uint32_t program, int32_t count, const char** varyings, uint32_t bufferMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindBufferBase)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindBufferRange)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
///
void q_openglfunctions_3_3_core_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEndTransformFeedback)
///
/// @param self QOpenGLFunctions_3_3_Core*
///
void q_openglfunctions_3_3_core_gl_end_transform_feedback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBeginTransformFeedback)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param primitiveMode uint32_t
///
void q_openglfunctions_3_3_core_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsEnabledi)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDisablei)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
///
void q_openglfunctions_3_3_core_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glEnablei)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
///
void q_openglfunctions_3_3_core_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetIntegeri_v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
///
void q_openglfunctions_3_3_core_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBooleani_v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
///
void q_openglfunctions_3_3_core_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glColorMaski)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
///
void q_openglfunctions_3_3_core_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glCopyBufferSubData)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset intptr_t
/// @param writeOffset intptr_t
/// @param size intptr_t
///
void q_openglfunctions_3_3_core_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glUniformBlockBinding)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
///
void q_openglfunctions_3_3_core_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
///
void q_openglfunctions_3_3_core_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformBlockName const char*
///
uint32_t q_openglfunctions_3_3_core_gl_get_uniform_block_index(void* self, uint32_t program, const char* uniformBlockName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetActiveUniformName)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformName char*
///
void q_openglfunctions_3_3_core_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetUniformIndices)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformNames const char**
/// @param uniformIndices uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_uniform_indices(void* self, uint32_t program, int32_t uniformCount, const char** uniformNames, uint32_t* uniformIndices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glPrimitiveRestartIndex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
///
void q_openglfunctions_3_3_core_gl_primitive_restart_index(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexBuffer)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
///
void q_openglfunctions_3_3_core_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawElementsInstanced)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
///
void q_openglfunctions_3_3_core_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawArraysInstanced)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
///
void q_openglfunctions_3_3_core_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSampleMaski)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param mask uint32_t
///
void q_openglfunctions_3_3_core_gl_sample_maski(void* self, uint32_t index, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetMultisamplefv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param index uint32_t
/// @param val float*
///
void q_openglfunctions_3_3_core_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexImage3DMultisample)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
///
void q_openglfunctions_3_3_core_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glTexImage2DMultisample)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
///
void q_openglfunctions_3_3_core_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetInteger64v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param pname uint32_t
/// @param params int64_t*
///
void q_openglfunctions_3_3_core_gl_get_integer64v(void* self, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glProvokingVertex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
///
void q_openglfunctions_3_3_core_gl_provoking_vertex(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glMultiDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t*
/// @param type uint32_t
/// @param indices void*
/// @param drawcount int32_t
/// @param basevertex int32_t*
///
void q_openglfunctions_3_3_core_gl_multi_draw_elements_base_vertex(void* self, uint32_t mode, int32_t* count, uint32_t type, void* indices, int32_t drawcount, int32_t* basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawElementsInstancedBaseVertex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
///
void q_openglfunctions_3_3_core_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawRangeElementsBaseVertex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
///
void q_openglfunctions_3_3_core_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
///
void q_openglfunctions_3_3_core_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glFramebufferTexture)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
///
void q_openglfunctions_3_3_core_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetBufferParameteri64v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int64_t*
///
void q_openglfunctions_3_3_core_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetInteger64i_v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int64_t*
///
void q_openglfunctions_3_3_core_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP4uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP4ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP3uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP3ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP2uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP2ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP1uiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribP1ui)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetQueryObjectui64v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint64_t*
///
void q_openglfunctions_3_3_core_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetQueryObjecti64v)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int64_t*
///
void q_openglfunctions_3_3_core_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glQueryCounter)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param id uint32_t
/// @param target uint32_t
///
void q_openglfunctions_3_3_core_gl_query_counter(void* self, uint32_t id, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
///
void q_openglfunctions_3_3_core_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetSamplerParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_3_3_core_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetSamplerParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_3_3_core_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param uint32_t*
///
void q_openglfunctions_3_3_core_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
///
void q_openglfunctions_3_3_core_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameterfv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float*
///
void q_openglfunctions_3_3_core_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameterf)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_3_3_core_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameteriv)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
///
void q_openglfunctions_3_3_core_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glSamplerParameteri)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_3_3_core_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindSampler)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param unit uint32_t
/// @param sampler uint32_t
///
void q_openglfunctions_3_3_core_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glIsSampler)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param sampler uint32_t
///
uint8_t q_openglfunctions_3_3_core_gl_is_sampler(void* self, uint32_t sampler);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glDeleteSamplers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param count int32_t
/// @param samplers uint32_t*
///
void q_openglfunctions_3_3_core_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGenSamplers)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param count int32_t
/// @param samplers uint32_t*
///
void q_openglfunctions_3_3_core_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glGetFragDataIndex)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param name const char*
///
int32_t q_openglfunctions_3_3_core_gl_get_frag_data_index(void* self, uint32_t program, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glBindFragDataLocationIndexed)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param program uint32_t
/// @param colorNumber uint32_t
/// @param index uint32_t
/// @param name const char*
///
void q_openglfunctions_3_3_core_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#glVertexAttribDivisor)
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param index uint32_t
/// @param divisor uint32_t
///
void q_openglfunctions_3_3_core_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
///
bool q_openglfunctions_3_3_core_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
///
bool q_openglfunctions_3_3_core_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param callback bool func()
///
void q_openglfunctions_3_3_core_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_3_core_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_3_core_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param callback void func(QOpenGLFunctions_3_3_Core* self, QOpenGLContext* context)
///
void q_openglfunctions_3_3_core_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
///
QOpenGLContext* q_openglfunctions_3_3_core_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
///
QOpenGLContext* q_openglfunctions_3_3_core_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_3_Core*
/// @param callback QOpenGLContext* func()
///
void q_openglfunctions_3_3_core_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-core.html#dtor.QOpenGLFunctions_3_3_Core)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_3_3_Core*
///
void q_openglfunctions_3_3_core_delete(void* self);

#endif
