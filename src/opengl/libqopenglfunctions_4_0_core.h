#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_4_0_CORE_H
#define SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_4_0_CORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html

/// q_openglfunctions_4_0_core_new constructs a new QOpenGLFunctions_4_0_Core object.
///
QOpenGLFunctions_4_0_Core* q_openglfunctions_4_0_core_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_4_0_Core*
bool q_openglfunctions_4_0_core_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param callback bool func()
void q_openglfunctions_4_0_core_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_4_0_Core*
bool q_openglfunctions_4_0_core_qbase_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glViewport)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthRange)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param nearVal double
/// @param farVal double
void q_openglfunctions_4_0_core_gl_depth_range(void* self, double nearVal, double farVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param cap uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_enabled(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetString)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param name uint32_t
const uint8_t* q_openglfunctions_4_0_core_gl_get_string(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_0_core_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglfunctions_4_0_core_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glReadPixels)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_read_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_0_core_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_0_core_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param func uint32_t
void q_openglfunctions_4_0_core_gl_depth_func(void* self, uint32_t func);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilOp)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_4_0_core_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLogicOp)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param opcode uint32_t
void q_openglfunctions_4_0_core_gl_logic_op(void* self, uint32_t opcode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_4_0_core_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFlush)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFinish)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnable)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param cap uint32_t
void q_openglfunctions_4_0_core_gl_enable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisable)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param cap uint32_t
void q_openglfunctions_4_0_core_gl_disable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDepthMask)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param flag uint8_t
void q_openglfunctions_4_0_core_gl_depth_mask(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glColorMask)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_4_0_core_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilMask)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_stencil_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearDepth)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param depth double
void q_openglfunctions_4_0_core_gl_clear_depth(void* self, double depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearStencil)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param s int32_t
void q_openglfunctions_4_0_core_gl_clear_stencil(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearColor)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_0_core_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClear)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_clear(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_draw_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_0_core_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_0_core_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glScissor)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointSize)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param size float
void q_openglfunctions_4_0_core_gl_point_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLineWidth)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param width float
void q_openglfunctions_4_0_core_gl_line_width(void* self, float width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glHint)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFrontFace)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_front_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCullFace)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_cull_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsTexture)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param texture uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenTextures)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_0_core_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_0_core_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindTexture)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_4_0_core_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_0_core_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_0_core_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_4_0_core_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
void q_openglfunctions_4_0_core_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param factor float
/// @param units float
void q_openglfunctions_4_0_core_gl_polygon_offset(void* self, float factor, float units);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElements)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_0_core_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_4_0_core_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
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
void q_openglfunctions_4_0_core_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
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
void q_openglfunctions_4_0_core_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_0_core_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_blend_equation(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendColor)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_0_core_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
void q_openglfunctions_4_0_core_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
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
void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_4_0_core_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param texture uint32_t
void q_openglfunctions_4_0_core_gl_active_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameteri)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_0_core_gl_point_parameteri(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_point_parameterfv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPointParameterf)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_0_core_gl_point_parameterf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMultiDrawArrays)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param first int32_t*
/// @param count int32_t*
/// @param drawcount int32_t
void q_openglfunctions_4_0_core_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sfactorRGB uint32_t
/// @param dfactorRGB uint32_t
/// @param sfactorAlpha uint32_t
/// @param dfactorAlpha uint32_t
void q_openglfunctions_4_0_core_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUnmapBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
uint8_t q_openglfunctions_4_0_core_gl_unmap_buffer(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMapBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param access uint32_t
void* q_openglfunctions_4_0_core_gl_map_buffer(void* self, uint32_t target, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferSubData)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param offset int64_t
/// @param size int64_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_get_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBufferSubData)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param offset int64_t
/// @param size int64_t
/// @param data void*
void q_openglfunctions_4_0_core_gl_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBufferData)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param size int64_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_4_0_core_gl_buffer_data(void* self, uint32_t target, int64_t size, void* data, uint32_t usage);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buffer uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_buffer(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenBuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_0_core_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_0_core_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_0_core_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndQuery)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
void q_openglfunctions_4_0_core_gl_end_query(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginQuery)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_0_core_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsQuery)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_query(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteQueries)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_0_core_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenQueries)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_0_core_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_0_core_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glValidateProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
void q_openglfunctions_4_0_core_gl_validate_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4iv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_0_core_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3iv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_0_core_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2iv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_0_core_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1iv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_0_core_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4i)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_4_0_core_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3i)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_4_0_core_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2i)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_4_0_core_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1i)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_4_0_core_gl_uniform1i(void* self, int32_t location, int32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4f)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_4_0_core_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3f)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_0_core_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2f)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_4_0_core_gl_uniform2f(void* self, int32_t location, float v0, float v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1f)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_4_0_core_gl_uniform1f(void* self, int32_t location, float v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUseProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
void q_openglfunctions_4_0_core_gl_use_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glLinkProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
void q_openglfunctions_4_0_core_gl_link_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribdv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_0_core_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_0_core_gl_get_uniform_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglfunctions_4_0_core_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_0_core_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_0_core_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_0_core_gl_get_attrib_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param maxCount int32_t
/// @param count int32_t*
/// @param obj uint32_t*
void q_openglfunctions_4_0_core_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDetachShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_0_core_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
void q_openglfunctions_4_0_core_gl_delete_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
void q_openglfunctions_4_0_core_gl_delete_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCreateShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param type uint32_t
uint32_t q_openglfunctions_4_0_core_gl_create_shader(void* self, uint32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCreateProgram)
///
/// @param self QOpenGLFunctions_4_0_Core*
uint32_t q_openglfunctions_4_0_core_gl_create_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCompileShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shader uint32_t
void q_openglfunctions_4_0_core_gl_compile_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_0_core_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glAttachShader)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_0_core_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param face uint32_t
/// @param sfail uint32_t
/// @param dpfail uint32_t
/// @param dppass uint32_t
void q_openglfunctions_4_0_core_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_0_core_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsVertexArray)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param array uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenVertexArrays)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_0_core_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteVertexArrays)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_0_core_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindVertexArray)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param array uint32_t
void q_openglfunctions_4_0_core_gl_bind_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param offset int64_t
/// @param length int64_t
void q_openglfunctions_4_0_core_gl_flush_mapped_buffer_range(void* self, uint32_t target, int64_t offset, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMapBufferRange)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param offset int64_t
/// @param length int64_t
/// @param access uint32_t
void* q_openglfunctions_4_0_core_gl_map_buffer_range(void* self, uint32_t target, int64_t offset, int64_t length, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglfunctions_4_0_core_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlitFramebuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
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
void q_openglfunctions_4_0_core_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
void q_openglfunctions_4_0_core_gl_generate_mipmap(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_0_core_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture3D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param zoffset int32_t
void q_openglfunctions_4_0_core_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_0_core_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture1D)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_0_core_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_0_core_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_0_core_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglfunctions_4_0_core_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param framebuffer uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_0_core_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_0_core_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_0_core_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_0_core_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param renderbuffer uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetStringi)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param name uint32_t
/// @param index uint32_t
const uint8_t* q_openglfunctions_4_0_core_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferfi)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
void q_openglfunctions_4_0_core_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglfunctions_4_0_core_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClearBufferiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglfunctions_4_0_core_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_4_0_core_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_4_0_core_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_4_0_core_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_4_0_core_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFragDataLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_0_core_gl_get_frag_data_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFragDataLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param color uint32_t
/// @param name char*
void q_openglfunctions_4_0_core_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribIPointer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_0_core_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndConditionalRender)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_end_conditional_render(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginConditionalRender)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glClampColor)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param clamp uint32_t
void q_openglfunctions_4_0_core_gl_clamp_color(void* self, uint32_t target, uint32_t clamp);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBufferBase)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_0_core_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindBufferRange)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset int64_t
/// @param size int64_t
void q_openglfunctions_4_0_core_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_end_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param primitiveMode uint32_t
void q_openglfunctions_4_0_core_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsEnabledi)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDisablei)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEnablei)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetIntegeri_v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
void q_openglfunctions_4_0_core_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBooleani_v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
void q_openglfunctions_4_0_core_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glColorMaski)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
void q_openglfunctions_4_0_core_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glCopyBufferSubData)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset int64_t
/// @param writeOffset int64_t
/// @param size int64_t
void q_openglfunctions_4_0_core_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformBlockBinding)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
void q_openglfunctions_4_0_core_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
void q_openglfunctions_4_0_core_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformBlockName char*
uint32_t q_openglfunctions_4_0_core_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformName)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformName char*
void q_openglfunctions_4_0_core_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPrimitiveRestartIndex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_primitive_restart_index(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexBuffer)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_0_core_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsInstanced)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
void q_openglfunctions_4_0_core_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArraysInstanced)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
void q_openglfunctions_4_0_core_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSampleMaski)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_0_core_gl_sample_maski(void* self, uint32_t index, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetMultisamplefv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param index uint32_t
/// @param val float*
void q_openglfunctions_4_0_core_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage3DMultisample)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_0_core_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glTexImage2DMultisample)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_0_core_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetInteger64v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_0_core_gl_get_integer64v(void* self, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glProvokingVertex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_provoking_vertex(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsInstancedBaseVertex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
void q_openglfunctions_4_0_core_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawRangeElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_0_core_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_0_core_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glFramebufferTexture)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_0_core_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetBufferParameteri64v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_0_core_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetInteger64i_v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int64_t*
void q_openglfunctions_4_0_core_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP4uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP4ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_0_core_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP3uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP3ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_0_core_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP2uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP2ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_0_core_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP1uiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_0_core_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribP1ui)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_0_core_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjectui64v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint64_t*
void q_openglfunctions_4_0_core_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryObjecti64v)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_0_core_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glQueryCounter)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
/// @param target uint32_t
void q_openglfunctions_4_0_core_gl_query_counter(void* self, uint32_t id, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_0_core_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param uint32_t*
void q_openglfunctions_4_0_core_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_0_core_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float*
void q_openglfunctions_4_0_core_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameterf)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_0_core_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_0_core_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glSamplerParameteri)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_0_core_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindSampler)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param unit uint32_t
/// @param sampler uint32_t
void q_openglfunctions_4_0_core_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsSampler)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param sampler uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_sampler(void* self, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteSamplers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_0_core_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenSamplers)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_0_core_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetFragDataIndex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_0_core_gl_get_frag_data_index(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindFragDataLocationIndexed)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param colorNumber uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_0_core_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glVertexAttribDivisor)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param index uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_0_core_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetQueryIndexediv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_0_core_gl_get_query_indexediv(void* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glEndQueryIndexed)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_0_core_gl_end_query_indexed(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBeginQueryIndexed)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param id uint32_t
void q_openglfunctions_4_0_core_gl_begin_query_indexed(void* self, uint32_t target, uint32_t index, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawTransformFeedbackStream)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param id uint32_t
/// @param stream uint32_t
void q_openglfunctions_4_0_core_gl_draw_transform_feedback_stream(void* self, uint32_t mode, uint32_t id, uint32_t stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param id uint32_t
void q_openglfunctions_4_0_core_gl_draw_transform_feedback(void* self, uint32_t mode, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glResumeTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_resume_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPauseTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_gl_pause_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glIsTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param id uint32_t
uint8_t q_openglfunctions_4_0_core_gl_is_transform_feedback(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGenTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_0_core_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDeleteTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_0_core_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBindTransformFeedback)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_0_core_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPatchParameterfv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param values float*
void q_openglfunctions_4_0_core_gl_patch_parameterfv(void* self, uint32_t pname, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glPatchParameteri)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param pname uint32_t
/// @param value int32_t
void q_openglfunctions_4_0_core_gl_patch_parameteri(void* self, uint32_t pname, int32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetProgramStageiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_0_core_gl_get_program_stageiv(void* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformSubroutineuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shadertype uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_0_core_gl_get_uniform_subroutineuiv(void* self, uint32_t shadertype, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformSubroutinesuiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param shadertype uint32_t
/// @param count int32_t
/// @param indices uint32_t*
void q_openglfunctions_4_0_core_gl_uniform_subroutinesuiv(void* self, uint32_t shadertype, int32_t count, uint32_t* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineName)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_0_core_gl_get_active_subroutine_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineUniformName)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_0_core_gl_get_active_subroutine_uniform_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetActiveSubroutineUniformiv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_0_core_gl_get_active_subroutine_uniformiv(void* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSubroutineIndex)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
uint32_t q_openglfunctions_4_0_core_gl_get_subroutine_index(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetSubroutineUniformLocation)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
int32_t q_openglfunctions_4_0_core_gl_get_subroutine_uniform_location(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glGetUniformdv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params double*
void q_openglfunctions_4_0_core_gl_get_uniformdv(void* self, uint32_t program, int32_t location, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x3dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix4x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4x2dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix4x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x4dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix3x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3x2dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix3x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x4dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix2x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2x3dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix2x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix4dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix3dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniformMatrix2dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform_matrix2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform4dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform3dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform2dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1dv)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_0_core_gl_uniform1dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform4d)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_0_core_gl_uniform4d(void* self, int32_t location, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform3d)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_0_core_gl_uniform3d(void* self, int32_t location, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform2d)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_0_core_gl_uniform2d(void* self, int32_t location, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glUniform1d)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param location int32_t
/// @param x double
void q_openglfunctions_4_0_core_gl_uniform1d(void* self, int32_t location, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawElementsIndirect)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
void q_openglfunctions_4_0_core_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glDrawArraysIndirect)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param mode uint32_t
/// @param indirect void*
void q_openglfunctions_4_0_core_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFuncSeparatei)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buf uint32_t
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglfunctions_4_0_core_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendFunci)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buf uint32_t
/// @param src uint32_t
/// @param dst uint32_t
void q_openglfunctions_4_0_core_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationSeparatei)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buf uint32_t
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_0_core_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glBlendEquationi)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param buf uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_0_core_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#glMinSampleShading)
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param value float
void q_openglfunctions_4_0_core_gl_min_sample_shading(void* self, float value);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
bool q_openglfunctions_4_0_core_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
bool q_openglfunctions_4_0_core_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param callback bool func()
void q_openglfunctions_4_0_core_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param context QOpenGLContext*
void q_openglfunctions_4_0_core_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param context QOpenGLContext*
void q_openglfunctions_4_0_core_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param callback void func(QOpenGLFunctions_4_0_Core* self, QOpenGLContext* context)
void q_openglfunctions_4_0_core_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
QOpenGLContext* q_openglfunctions_4_0_core_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
QOpenGLContext* q_openglfunctions_4_0_core_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_0_Core*
/// @param callback QOpenGLContext* func()
void q_openglfunctions_4_0_core_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-0-core.html#dtor.QOpenGLFunctions_4_0_Core)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_0_Core*
void q_openglfunctions_4_0_core_delete(void* self);

#endif
