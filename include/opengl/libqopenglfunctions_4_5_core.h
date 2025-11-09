#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_4_5_CORE_H
#define SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_4_5_CORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html

/// q_openglfunctions_4_5_core_new constructs a new QOpenGLFunctions_4_5_Core object.
///
QOpenGLFunctions_4_5_Core* q_openglfunctions_4_5_core_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_4_5_Core*
bool q_openglfunctions_4_5_core_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param callback bool func()
void q_openglfunctions_4_5_core_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_4_5_Core*
bool q_openglfunctions_4_5_core_qbase_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glViewport)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param nearVal double
/// @param farVal double
void q_openglfunctions_4_5_core_gl_depth_range(void* self, double nearVal, double farVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param cap uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_enabled(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetString)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param name uint32_t
const uint8_t* q_openglfunctions_4_5_core_gl_get_string(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param data int32_t*
void q_openglfunctions_4_5_core_gl_get_integerv(void* self, uint32_t pname, int32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param data float*
void q_openglfunctions_4_5_core_gl_get_floatv(void* self, uint32_t pname, float* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param data double*
void q_openglfunctions_4_5_core_gl_get_doublev(void* self, uint32_t pname, double* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param data uint8_t*
void q_openglfunctions_4_5_core_gl_get_booleanv(void* self, uint32_t pname, uint8_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glReadPixels)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param src uint32_t
void q_openglfunctions_4_5_core_gl_read_buffer(void* self, uint32_t src);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_5_core_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param func uint32_t
void q_openglfunctions_4_5_core_gl_depth_func(void* self, uint32_t func);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilOp)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_4_5_core_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glLogicOp)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param opcode uint32_t
void q_openglfunctions_4_5_core_gl_logic_op(void* self, uint32_t opcode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_4_5_core_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFlush)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFinish)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEnable)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param cap uint32_t
void q_openglfunctions_4_5_core_gl_enable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDisable)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param cap uint32_t
void q_openglfunctions_4_5_core_gl_disable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthMask)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param flag uint8_t
void q_openglfunctions_4_5_core_gl_depth_mask(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glColorMask)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_4_5_core_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilMask)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_stencil_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearDepth)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param depth double
void q_openglfunctions_4_5_core_gl_clear_depth(void* self, double depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearStencil)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param s int32_t
void q_openglfunctions_4_5_core_gl_clear_stencil(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearColor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_5_core_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClear)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_clear(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buf uint32_t
void q_openglfunctions_4_5_core_gl_draw_buffer(void* self, uint32_t buf);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_5_core_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glScissor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPointSize)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param size float
void q_openglfunctions_4_5_core_gl_point_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glLineWidth)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param width float
void q_openglfunctions_4_5_core_gl_line_width(void* self, float width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glHint)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFrontFace)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_front_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCullFace)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_cull_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenTextures)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_5_core_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_5_core_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_4_5_core_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_5_core_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_4_5_core_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
void q_openglfunctions_4_5_core_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param factor float
/// @param units float
void q_openglfunctions_4_5_core_gl_polygon_offset(void* self, float factor, float units);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElements)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_5_core_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_4_5_core_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendColor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_5_core_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_blend_equation(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
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
void q_openglfunctions_4_5_core_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
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
void q_openglfunctions_4_5_core_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_5_core_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
void q_openglfunctions_4_5_core_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
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
void q_openglfunctions_4_5_core_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_4_5_core_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
void q_openglfunctions_4_5_core_gl_active_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPointParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPointParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_point_parameteri(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPointParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_point_parameterfv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPointParameterf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_5_core_gl_point_parameterf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMultiDrawElements)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t*
/// @param type uint32_t
/// @param indices void*
/// @param drawcount int32_t
void q_openglfunctions_4_5_core_gl_multi_draw_elements(void* self, uint32_t mode, int32_t* count, uint32_t type, void* indices, int32_t drawcount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMultiDrawArrays)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param first int32_t*
/// @param count int32_t*
/// @param drawcount int32_t
void q_openglfunctions_4_5_core_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sfactorRGB uint32_t
/// @param dfactorRGB uint32_t
/// @param sfactorAlpha uint32_t
/// @param dfactorAlpha uint32_t
void q_openglfunctions_4_5_core_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBufferPointerv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params void*
void q_openglfunctions_4_5_core_gl_get_buffer_pointerv(void* self, uint32_t target, uint32_t pname, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUnmapBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
uint8_t q_openglfunctions_4_5_core_gl_unmap_buffer(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMapBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param access uint32_t
void* q_openglfunctions_4_5_core_gl_map_buffer(void* self, uint32_t target, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBufferData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param size intptr_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_4_5_core_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_buffer(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenBuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_5_core_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_5_core_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryObjectiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEndQuery)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
void q_openglfunctions_4_5_core_gl_end_query(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBeginQuery)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_5_core_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsQuery)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_query(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteQueries)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenQueries)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_5_core_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4usv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4usv(void* self, uint32_t index, uint16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4ubv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4ubv(void* self, uint32_t index, uint8_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4sv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4sv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4s)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_4_5_core_gl_vertex_attrib4s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_vertex_attrib4fv(void* self, uint32_t index, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_4_5_core_gl_vertex_attrib4f(void* self, uint32_t index, float x, float y, float z, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib4dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_5_core_gl_vertex_attrib4d(void* self, uint32_t index, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4bv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_5_core_gl_vertex_attrib4bv(void* self, uint32_t index, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nusv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nusv(void* self, uint32_t index, uint16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nuiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nubv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nubv(void* self, uint32_t index, uint8_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nub)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x uint8_t
/// @param y uint8_t
/// @param z uint8_t
/// @param w uint8_t
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nub(void* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nsv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nsv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Niv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_niv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib4Nbv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_5_core_gl_vertex_attrib4_nbv(void* self, uint32_t index, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3sv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib3sv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3s)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_4_5_core_gl_vertex_attrib3s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_vertex_attrib3fv(void* self, uint32_t index, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_5_core_gl_vertex_attrib3f(void* self, uint32_t index, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib3dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib3d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_5_core_gl_vertex_attrib3d(void* self, uint32_t index, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2sv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib2sv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2s)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_4_5_core_gl_vertex_attrib2s(void* self, uint32_t index, int16_t x, int16_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_vertex_attrib2fv(void* self, uint32_t index, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x float
/// @param y float
void q_openglfunctions_4_5_core_gl_vertex_attrib2f(void* self, uint32_t index, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib2dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib2d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_5_core_gl_vertex_attrib2d(void* self, uint32_t index, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1sv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib1sv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1s)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int16_t
void q_openglfunctions_4_5_core_gl_vertex_attrib1s(void* self, uint32_t index, int16_t x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_vertex_attrib1fv(void* self, uint32_t index, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x float
void q_openglfunctions_4_5_core_gl_vertex_attrib1f(void* self, uint32_t index, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib1dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttrib1d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
void q_openglfunctions_4_5_core_gl_vertex_attrib1d(void* self, uint32_t index, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glValidateProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_validate_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_4_5_core_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_4_5_core_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_4_5_core_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_4_5_core_gl_uniform1i(void* self, int32_t location, int32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_4_5_core_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_5_core_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_4_5_core_gl_uniform2f(void* self, int32_t location, float v0, float v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_4_5_core_gl_uniform1f(void* self, int32_t location, float v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUseProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_use_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glLinkProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_link_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribPointerv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param pointer void*
void q_openglfunctions_4_5_core_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribdv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_5_core_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_uniform_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglfunctions_4_5_core_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_5_core_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_5_core_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_attrib_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param maxCount int32_t
/// @param count int32_t*
/// @param shaders uint32_t*
void q_openglfunctions_4_5_core_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* shaders);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDetachShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_5_core_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
void q_openglfunctions_4_5_core_gl_delete_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_delete_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param type uint32_t
uint32_t q_openglfunctions_4_5_core_gl_create_shader(void* self, uint32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
uint32_t q_openglfunctions_4_5_core_gl_create_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompileShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shader uint32_t
void q_openglfunctions_4_5_core_gl_compile_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_5_core_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glAttachShader)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_5_core_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param face uint32_t
/// @param sfail uint32_t
/// @param dpfail uint32_t
/// @param dppass uint32_t
void q_openglfunctions_4_5_core_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_5_core_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsVertexArray)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param array uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenVertexArrays)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_5_core_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteVertexArrays)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_5_core_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindVertexArray)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param array uint32_t
void q_openglfunctions_4_5_core_gl_bind_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_4_5_core_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMapBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
/// @param access uint32_t
void* q_openglfunctions_4_5_core_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlitFramebuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
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
void q_openglfunctions_4_5_core_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
void q_openglfunctions_4_5_core_gl_generate_mipmap(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_5_core_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferTexture3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param zoffset int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferTexture1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_5_core_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_5_core_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglfunctions_4_5_core_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_5_core_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_5_core_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_5_core_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param renderbuffer uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetStringi)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param name uint32_t
/// @param index uint32_t
const uint8_t* q_openglfunctions_4_5_core_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferfi)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
void q_openglfunctions_4_5_core_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_4_5_core_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_4_5_core_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_4_5_core_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_4_5_core_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFragDataLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_frag_data_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindFragDataLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param color uint32_t
/// @param name char*
void q_openglfunctions_4_5_core_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4usv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4usv(void* self, uint32_t index, uint16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4ubv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4ubv(void* self, uint32_t index, uint8_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4sv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4sv(void* self, uint32_t index, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4bv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4bv(void* self, uint32_t index, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI3uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i3uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI2uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i2uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI1uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i1uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI3iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i3iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI2iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i2iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI1iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i1iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
/// @param z uint32_t
/// @param w uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI3ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
/// @param z uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i3ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI2ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i2ui(void* self, uint32_t index, uint32_t x, uint32_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI1ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i1ui(void* self, uint32_t index, uint32_t x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI4i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i4i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI3i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i3i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI2i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i2i(void* self, uint32_t index, int32_t x, int32_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribI1i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x int32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i1i(void* self, uint32_t index, int32_t x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribIPointer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_5_core_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEndConditionalRender)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_end_conditional_render(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBeginConditionalRender)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClampColor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param clamp uint32_t
void q_openglfunctions_4_5_core_gl_clamp_color(void* self, uint32_t target, uint32_t clamp);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindBufferBase)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_5_core_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEndTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_end_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBeginTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param primitiveMode uint32_t
void q_openglfunctions_4_5_core_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsEnabledi)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDisablei)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEnablei)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetIntegeri_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
void q_openglfunctions_4_5_core_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBooleani_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
void q_openglfunctions_4_5_core_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glColorMaski)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
void q_openglfunctions_4_5_core_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformBlockBinding)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
void q_openglfunctions_4_5_core_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
void q_openglfunctions_4_5_core_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformBlockName char*
uint32_t q_openglfunctions_4_5_core_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveUniformName)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformName char*
void q_openglfunctions_4_5_core_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset intptr_t
/// @param writeOffset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_5_core_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPrimitiveRestartIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_primitive_restart_index(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsInstanced)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
void q_openglfunctions_4_5_core_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawArraysInstanced)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
void q_openglfunctions_4_5_core_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSampleMaski)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param maskNumber uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_5_core_gl_sample_maski(void* self, uint32_t maskNumber, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetMultisamplefv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param index uint32_t
/// @param val float*
void q_openglfunctions_4_5_core_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexImage3DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexImage2DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetBufferParameteri64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_5_core_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetInteger64i_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int64_t*
void q_openglfunctions_4_5_core_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetInteger64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param data int64_t*
void q_openglfunctions_4_5_core_gl_get_integer64v(void* self, uint32_t pname, int64_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProvokingVertex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_provoking_vertex(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMultiDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t*
/// @param type uint32_t
/// @param indices void*
/// @param drawcount int32_t
/// @param basevertex int32_t*
void q_openglfunctions_4_5_core_gl_multi_draw_elements_base_vertex(void* self, uint32_t mode, int32_t* count, uint32_t type, void* indices, int32_t drawcount, int32_t* basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsInstancedBaseVertex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
void q_openglfunctions_4_5_core_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawRangeElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_5_core_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_5_core_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP4uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP4ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP3uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP3ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP2uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP2ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP1uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribP1ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribDivisor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryObjectui64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint64_t*
void q_openglfunctions_4_5_core_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryObjecti64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_5_core_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glQueryCounter)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
/// @param target uint32_t
void q_openglfunctions_4_5_core_gl_query_counter(void* self, uint32_t id, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param uint32_t*
void q_openglfunctions_4_5_core_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float*
void q_openglfunctions_4_5_core_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameterf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_5_core_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glSamplerParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindSampler)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param unit uint32_t
/// @param sampler uint32_t
void q_openglfunctions_4_5_core_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsSampler)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param sampler uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_sampler(void* self, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteSamplers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_5_core_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenSamplers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_5_core_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFragDataIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_frag_data_index(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindFragDataLocationIndexed)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param colorNumber uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_5_core_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetQueryIndexediv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_query_indexediv(void* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEndQueryIndexed)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_end_query_indexed(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBeginQueryIndexed)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param id uint32_t
void q_openglfunctions_4_5_core_gl_begin_query_indexed(void* self, uint32_t target, uint32_t index, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawTransformFeedbackStream)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param id uint32_t
/// @param stream uint32_t
void q_openglfunctions_4_5_core_gl_draw_transform_feedback_stream(void* self, uint32_t mode, uint32_t id, uint32_t stream);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param id uint32_t
void q_openglfunctions_4_5_core_gl_draw_transform_feedback(void* self, uint32_t mode, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glResumeTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_resume_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPauseTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_pause_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param id uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_transform_feedback(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindTransformFeedback)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_5_core_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPatchParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param values float*
void q_openglfunctions_4_5_core_gl_patch_parameterfv(void* self, uint32_t pname, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPatchParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pname uint32_t
/// @param value int32_t
void q_openglfunctions_4_5_core_gl_patch_parameteri(void* self, uint32_t pname, int32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramStageiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_5_core_gl_get_program_stageiv(void* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformSubroutineuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shadertype uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_uniform_subroutineuiv(void* self, uint32_t shadertype, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformSubroutinesuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shadertype uint32_t
/// @param count int32_t
/// @param indices uint32_t*
void q_openglfunctions_4_5_core_gl_uniform_subroutinesuiv(void* self, uint32_t shadertype, int32_t count, uint32_t* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveSubroutineName)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_5_core_gl_get_active_subroutine_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveSubroutineUniformName)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_5_core_gl_get_active_subroutine_uniform_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveSubroutineUniformiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_5_core_gl_get_active_subroutine_uniformiv(void* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSubroutineIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
uint32_t q_openglfunctions_4_5_core_gl_get_subroutine_index(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetSubroutineUniformLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_subroutine_uniform_location(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetUniformdv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param params double*
void q_openglfunctions_4_5_core_gl_get_uniformdv(void* self, uint32_t program, int32_t location, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4x3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix4x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4x2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix4x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3x4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix3x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3x2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix3x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2x4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix2x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2x3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix2x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniformMatrix2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform_matrix2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform4dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform3dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform2dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_uniform1dv(void* self, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform4d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_5_core_gl_uniform4d(void* self, int32_t location, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform3d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_5_core_gl_uniform3d(void* self, int32_t location, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform2d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_5_core_gl_uniform2d(void* self, int32_t location, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUniform1d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param location int32_t
/// @param x double
void q_openglfunctions_4_5_core_gl_uniform1d(void* self, int32_t location, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsIndirect)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
void q_openglfunctions_4_5_core_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawArraysIndirect)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param indirect void*
void q_openglfunctions_4_5_core_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendFuncSeparatei)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buf uint32_t
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglfunctions_4_5_core_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendFunci)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buf uint32_t
/// @param src uint32_t
/// @param dst uint32_t
void q_openglfunctions_4_5_core_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendEquationSeparatei)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buf uint32_t
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_5_core_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlendEquationi)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buf uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_5_core_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMinSampleShading)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param value float
void q_openglfunctions_4_5_core_gl_min_sample_shading(void* self, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetDoublei_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data double*
void q_openglfunctions_4_5_core_gl_get_doublei_v(void* self, uint32_t target, uint32_t index, double* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFloati_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param index uint32_t
/// @param data float*
void q_openglfunctions_4_5_core_gl_get_floati_v(void* self, uint32_t target, uint32_t index, float* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthRangeIndexed)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param n double
/// @param f double
void q_openglfunctions_4_5_core_gl_depth_range_indexed(void* self, uint32_t index, double n, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthRangeArrayv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_depth_range_arrayv(void* self, uint32_t first, int32_t count, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glScissorIndexedv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_scissor_indexedv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glScissorIndexed)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param left int32_t
/// @param bottom int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_scissor_indexed(void* self, uint32_t index, int32_t left, int32_t bottom, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glScissorArrayv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_4_5_core_gl_scissor_arrayv(void* self, uint32_t first, int32_t count, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glViewportIndexedfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_viewport_indexedfv(void* self, uint32_t index, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glViewportIndexedf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param w float
/// @param h float
void q_openglfunctions_4_5_core_gl_viewport_indexedf(void* self, uint32_t index, float x, float y, float w, float h);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glViewportArrayv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_4_5_core_gl_viewport_arrayv(void* self, uint32_t first, int32_t count, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexAttribLdv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_5_core_gl_get_vertex_attrib_ldv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribLPointer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_5_core_gl_vertex_attrib_l_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib_l4dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib_l3dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib_l2dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL1dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_5_core_gl_vertex_attrib_l1dv(void* self, uint32_t index, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL4d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_5_core_gl_vertex_attrib_l4d(void* self, uint32_t index, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL3d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_5_core_gl_vertex_attrib_l3d(void* self, uint32_t index, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL2d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_5_core_gl_vertex_attrib_l2d(void* self, uint32_t index, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribL1d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param index uint32_t
/// @param x double
void q_openglfunctions_4_5_core_gl_vertex_attrib_l1d(void* self, uint32_t index, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramPipelineInfoLog)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_5_core_gl_get_program_pipeline_info_log(void* self, uint32_t pipeline, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glValidateProgramPipeline)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
void q_openglfunctions_4_5_core_gl_validate_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4x3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4x3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3x4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3x4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4x2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4x2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2x4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2x4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3x2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3x2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2x3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2x3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform_matrix2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_program_uniform4uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_4_5_core_gl_program_uniform4ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform4dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
/// @param v2 double
/// @param v3 double
void q_openglfunctions_4_5_core_gl_program_uniform4d(void* self, uint32_t program, int32_t location, double v0, double v1, double v2, double v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform4fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_4_5_core_gl_program_uniform4f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_program_uniform4iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform4i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_4_5_core_gl_program_uniform4i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_program_uniform3uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_4_5_core_gl_program_uniform3ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform3dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
/// @param v2 double
void q_openglfunctions_4_5_core_gl_program_uniform3d(void* self, uint32_t program, int32_t location, double v0, double v1, double v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform3fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_5_core_gl_program_uniform3f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_program_uniform3iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform3i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_4_5_core_gl_program_uniform3i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_program_uniform2uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_4_5_core_gl_program_uniform2ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform2dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
void q_openglfunctions_4_5_core_gl_program_uniform2d(void* self, uint32_t program, int32_t location, double v0, double v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform2fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_4_5_core_gl_program_uniform2f(void* self, uint32_t program, int32_t location, float v0, float v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_program_uniform2iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform2i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_4_5_core_gl_program_uniform2i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1uiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_program_uniform1uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1ui)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_4_5_core_gl_program_uniform1ui(void* self, uint32_t program, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1dv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_5_core_gl_program_uniform1dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1d)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
void q_openglfunctions_4_5_core_gl_program_uniform1d(void* self, uint32_t program, int32_t location, double v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1fv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_program_uniform1fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1f)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_4_5_core_gl_program_uniform1f(void* self, uint32_t program, int32_t location, float v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_program_uniform1iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramUniform1i)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_4_5_core_gl_program_uniform1i(void* self, uint32_t program, int32_t location, int32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramPipelineiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_program_pipelineiv(void* self, uint32_t pipeline, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glIsProgramPipeline)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
uint8_t q_openglfunctions_4_5_core_gl_is_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenProgramPipelines)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglfunctions_4_5_core_gl_gen_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDeleteProgramPipelines)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglfunctions_4_5_core_gl_delete_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindProgramPipeline)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
void q_openglfunctions_4_5_core_gl_bind_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glActiveShaderProgram)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_active_shader_program(void* self, uint32_t pipeline, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUseProgramStages)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param pipeline uint32_t
/// @param stages uint32_t
/// @param program uint32_t
void q_openglfunctions_4_5_core_gl_use_program_stages(void* self, uint32_t pipeline, uint32_t stages, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param pname uint32_t
/// @param value int32_t
void q_openglfunctions_4_5_core_gl_program_parameteri(void* self, uint32_t program, uint32_t pname, int32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glProgramBinary)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param binaryFormat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglfunctions_4_5_core_gl_program_binary(void* self, uint32_t program, uint32_t binaryFormat, void* binary, int32_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearDepthf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param dd float
void q_openglfunctions_4_5_core_gl_clear_depthf(void* self, float dd);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDepthRangef)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n float
/// @param f float
void q_openglfunctions_4_5_core_gl_depth_rangef(void* self, float n, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetShaderPrecisionFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param shadertype uint32_t
/// @param precisiontype uint32_t
/// @param range int32_t*
/// @param precision int32_t*
void q_openglfunctions_4_5_core_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glShaderBinary)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param count int32_t
/// @param shaders uint32_t*
/// @param binaryformat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglfunctions_4_5_core_gl_shader_binary(void* self, int32_t count, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glReleaseShaderCompiler)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_release_shader_compiler(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawTransformFeedbackStreamInstanced)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param id uint32_t
/// @param stream uint32_t
/// @param instancecount int32_t
void q_openglfunctions_4_5_core_gl_draw_transform_feedback_stream_instanced(void* self, uint32_t mode, uint32_t id, uint32_t stream, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawTransformFeedbackInstanced)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param id uint32_t
/// @param instancecount int32_t
void q_openglfunctions_4_5_core_gl_draw_transform_feedback_instanced(void* self, uint32_t mode, uint32_t id, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexStorage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglfunctions_4_5_core_gl_tex_storage3_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexStorage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_tex_storage2_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexStorage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
void q_openglfunctions_4_5_core_gl_tex_storage1_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMemoryBarrier)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param barriers uint32_t
void q_openglfunctions_4_5_core_gl_memory_barrier(void* self, uint32_t barriers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindImageTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param unit uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layered uint8_t
/// @param layer int32_t
/// @param access uint32_t
/// @param format uint32_t
void q_openglfunctions_4_5_core_gl_bind_image_texture(void* self, uint32_t unit, uint32_t texture, int32_t level, uint8_t layered, int32_t layer, uint32_t access, uint32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetActiveAtomicCounterBufferiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param bufferIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_active_atomic_counter_bufferiv(void* self, uint32_t program, uint32_t bufferIndex, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetInternalformativ)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param pname uint32_t
/// @param bufSize int32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_internalformativ(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsInstancedBaseVertexBaseInstance)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_5_core_gl_draw_elements_instanced_base_vertex_base_instance(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex, uint32_t baseinstance);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawElementsInstancedBaseInstance)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_5_core_gl_draw_elements_instanced_base_instance(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, uint32_t baseinstance);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDrawArraysInstancedBaseInstance)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_5_core_gl_draw_arrays_instanced_base_instance(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount, uint32_t baseinstance);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetObjectPtrLabel)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param ptr void*
/// @param bufSize int32_t
/// @param length int32_t*
/// @param label char*
void q_openglfunctions_4_5_core_gl_get_object_ptr_label(void* self, void* ptr, int32_t bufSize, int32_t* length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glObjectPtrLabel)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param ptr void*
/// @param length int32_t
/// @param label char*
void q_openglfunctions_4_5_core_gl_object_ptr_label(void* self, void* ptr, int32_t length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetObjectLabel)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param identifier uint32_t
/// @param name uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param label char*
void q_openglfunctions_4_5_core_gl_get_object_label(void* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glObjectLabel)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param identifier uint32_t
/// @param name uint32_t
/// @param length int32_t
/// @param label char*
void q_openglfunctions_4_5_core_gl_object_label(void* self, uint32_t identifier, uint32_t name, int32_t length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPopDebugGroup)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_pop_debug_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glPushDebugGroup)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param source uint32_t
/// @param id uint32_t
/// @param length int32_t
/// @param message char*
void q_openglfunctions_4_5_core_gl_push_debug_group(void* self, uint32_t source, uint32_t id, int32_t length, char* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDebugMessageInsert)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param source uint32_t
/// @param type uint32_t
/// @param id uint32_t
/// @param severity uint32_t
/// @param length int32_t
/// @param buf char*
void q_openglfunctions_4_5_core_gl_debug_message_insert(void* self, uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, char* buf);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDebugMessageControl)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param source uint32_t
/// @param type uint32_t
/// @param severity uint32_t
/// @param count int32_t
/// @param ids uint32_t*
/// @param enabled uint8_t
void q_openglfunctions_4_5_core_gl_debug_message_control(void* self, uint32_t source, uint32_t type, uint32_t severity, int32_t count, uint32_t* ids, uint8_t enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexBindingDivisor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param bindingindex uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_5_core_gl_vertex_binding_divisor(void* self, uint32_t bindingindex, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribBinding)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param attribindex uint32_t
/// @param bindingindex uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_binding(void* self, uint32_t attribindex, uint32_t bindingindex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribLFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_l_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribIFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_i_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexAttribFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_attrib_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint8_t normalized, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindVertexBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param bindingindex uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param stride int32_t
void q_openglfunctions_4_5_core_gl_bind_vertex_buffer(void* self, uint32_t bindingindex, uint32_t buffer, intptr_t offset, int32_t stride);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureView)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param target uint32_t
/// @param origtexture uint32_t
/// @param internalformat uint32_t
/// @param minlevel uint32_t
/// @param numlevels uint32_t
/// @param minlayer uint32_t
/// @param numlayers uint32_t
void q_openglfunctions_4_5_core_gl_texture_view(void* self, uint32_t texture, uint32_t target, uint32_t origtexture, uint32_t internalformat, uint32_t minlevel, uint32_t numlevels, uint32_t minlayer, uint32_t numlayers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexStorage3DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_tex_storage3_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexStorage2DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_tex_storage2_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTexBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_5_core_gl_tex_buffer_range(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glShaderStorageBlockBinding)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param storageBlockIndex uint32_t
/// @param storageBlockBinding uint32_t
void q_openglfunctions_4_5_core_gl_shader_storage_block_binding(void* self, uint32_t program, uint32_t storageBlockIndex, uint32_t storageBlockBinding);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramResourceLocationIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_program_resource_location_index(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramResourceLocation)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
int32_t q_openglfunctions_4_5_core_gl_get_program_resource_location(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramResourceName)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param index uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_5_core_gl_get_program_resource_name(void* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramResourceIndex)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
uint32_t q_openglfunctions_4_5_core_gl_get_program_resource_index(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetProgramInterfaceiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_program_interfaceiv(void* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMultiDrawElementsIndirect)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
/// @param drawcount int32_t
/// @param stride int32_t
void q_openglfunctions_4_5_core_gl_multi_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect, int32_t drawcount, int32_t stride);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMultiDrawArraysIndirect)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param mode uint32_t
/// @param indirect void*
/// @param drawcount int32_t
/// @param stride int32_t
void q_openglfunctions_4_5_core_gl_multi_draw_arrays_indirect(void* self, uint32_t mode, void* indirect, int32_t drawcount, int32_t stride);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glInvalidateBufferData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_invalidate_buffer_data(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glInvalidateBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_4_5_core_gl_invalidate_buffer_sub_data(void* self, uint32_t buffer, intptr_t offset, intptr_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glInvalidateTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_5_core_gl_invalidate_tex_image(void* self, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glInvalidateTexSubImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglfunctions_4_5_core_gl_invalidate_tex_sub_image(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetInternalformati64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param pname uint32_t
/// @param bufSize int32_t
/// @param params int64_t*
void q_openglfunctions_4_5_core_gl_get_internalformati64v(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetFramebufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_framebuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFramebufferParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_framebuffer_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyImageSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param srcName uint32_t
/// @param srcTarget uint32_t
/// @param srcLevel int32_t
/// @param srcX int32_t
/// @param srcY int32_t
/// @param srcZ int32_t
/// @param dstName uint32_t
/// @param dstTarget uint32_t
/// @param dstLevel int32_t
/// @param dstX int32_t
/// @param dstY int32_t
/// @param dstZ int32_t
/// @param srcWidth int32_t
/// @param srcHeight int32_t
/// @param srcDepth int32_t
void q_openglfunctions_4_5_core_gl_copy_image_sub_data(void* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDispatchComputeIndirect)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param indirect intptr_t
void q_openglfunctions_4_5_core_gl_dispatch_compute_indirect(void* self, intptr_t indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDispatchCompute)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param num_groups_x uint32_t
/// @param num_groups_y uint32_t
/// @param num_groups_z uint32_t
void q_openglfunctions_4_5_core_gl_dispatch_compute(void* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_buffer_sub_data(void* self, uint32_t target, uint32_t internalformat, intptr_t offset, intptr_t size, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearBufferData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_buffer_data(void* self, uint32_t target, uint32_t internalformat, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindVertexBuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param buffers uint32_t*
/// @param offsets intptr_t*
/// @param strides int32_t*
void q_openglfunctions_4_5_core_gl_bind_vertex_buffers(void* self, uint32_t first, int32_t count, uint32_t* buffers, intptr_t* offsets, int32_t* strides);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindImageTextures)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_5_core_gl_bind_image_textures(void* self, uint32_t first, int32_t count, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindSamplers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_5_core_gl_bind_samplers(void* self, uint32_t first, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindTextures)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param first uint32_t
/// @param count int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_5_core_gl_bind_textures(void* self, uint32_t first, int32_t count, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindBuffersRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param first uint32_t
/// @param count int32_t
/// @param buffers uint32_t*
/// @param offsets intptr_t*
/// @param sizes intptr_t*
void q_openglfunctions_4_5_core_gl_bind_buffers_range(void* self, uint32_t target, uint32_t first, int32_t count, uint32_t* buffers, intptr_t* offsets, intptr_t* sizes);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindBuffersBase)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param first uint32_t
/// @param count int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_5_core_gl_bind_buffers_base(void* self, uint32_t target, uint32_t first, int32_t count, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearTexSubImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_tex_sub_image(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_tex_image(void* self, uint32_t texture, int32_t level, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBufferStorage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param size intptr_t
/// @param data void*
/// @param flags uint32_t
void q_openglfunctions_4_5_core_gl_buffer_storage(void* self, uint32_t target, intptr_t size, void* data, uint32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureBarrier)
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_gl_texture_barrier(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glReadnPixels)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param bufSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_readn_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, int32_t bufSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnUniformuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_getn_uniformuiv(void* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnUniformiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_getn_uniformiv(void* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnUniformfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_getn_uniformfv(void* self, uint32_t program, int32_t location, int32_t bufSize, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnUniformdv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params double*
void q_openglfunctions_4_5_core_gl_getn_uniformdv(void* self, uint32_t program, int32_t location, int32_t bufSize, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_getn_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetnCompressedTexImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param lod int32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_getn_compressed_tex_image(void* self, uint32_t target, int32_t lod, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetCompressedTextureSubImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_get_compressed_texture_sub_image(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureSubImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_get_texture_sub_image(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMemoryBarrierByRegion)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param barriers uint32_t
void q_openglfunctions_4_5_core_gl_memory_barrier_by_region(void* self, uint32_t barriers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateQueries)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_create_queries(void* self, uint32_t target, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateProgramPipelines)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglfunctions_4_5_core_gl_create_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateSamplers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_5_core_gl_create_samplers(void* self, int32_t n, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexArrayIndexed64iv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param param int64_t*
void q_openglfunctions_4_5_core_gl_get_vertex_array_indexed64iv(void* self, uint32_t vaobj, uint32_t index, uint32_t pname, int64_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexArrayIndexediv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_get_vertex_array_indexediv(void* self, uint32_t vaobj, uint32_t index, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetVertexArrayiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_get_vertex_arrayiv(void* self, uint32_t vaobj, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayBindingDivisor)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param bindingindex uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_binding_divisor(void* self, uint32_t vaobj, uint32_t bindingindex, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayAttribLFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_attrib_l_format(void* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayAttribIFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_attrib_i_format(void* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayAttribFormat)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_attrib_format(void* self, uint32_t vaobj, uint32_t attribindex, int32_t size, uint32_t type, uint8_t normalized, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayAttribBinding)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param attribindex uint32_t
/// @param bindingindex uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_attrib_binding(void* self, uint32_t vaobj, uint32_t attribindex, uint32_t bindingindex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayVertexBuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param first uint32_t
/// @param count int32_t
/// @param buffers uint32_t*
/// @param offsets intptr_t*
/// @param strides int32_t*
void q_openglfunctions_4_5_core_gl_vertex_array_vertex_buffers(void* self, uint32_t vaobj, uint32_t first, int32_t count, uint32_t* buffers, intptr_t* offsets, int32_t* strides);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayVertexBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param bindingindex uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param stride int32_t
void q_openglfunctions_4_5_core_gl_vertex_array_vertex_buffer(void* self, uint32_t vaobj, uint32_t bindingindex, uint32_t buffer, intptr_t offset, int32_t stride);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glVertexArrayElementBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_vertex_array_element_buffer(void* self, uint32_t vaobj, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glEnableVertexArrayAttrib)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_enable_vertex_array_attrib(void* self, uint32_t vaobj, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glDisableVertexArrayAttrib)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param vaobj uint32_t
/// @param index uint32_t
void q_openglfunctions_4_5_core_gl_disable_vertex_array_attrib(void* self, uint32_t vaobj, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateVertexArrays)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_5_core_gl_create_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_texture_parameteriv(void* self, uint32_t texture, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_get_texture_parameter_iuiv(void* self, uint32_t texture, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_texture_parameter_iiv(void* self, uint32_t texture, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_texture_parameterfv(void* self, uint32_t texture, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureLevelParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_texture_level_parameteriv(void* self, uint32_t texture, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureLevelParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_5_core_gl_get_texture_level_parameterfv(void* self, uint32_t texture, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetCompressedTextureImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_get_compressed_texture_image(void* self, uint32_t texture, int32_t level, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTextureImage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param bufSize int32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_get_texture_image(void* self, uint32_t texture, int32_t level, uint32_t format, uint32_t type, int32_t bufSize, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBindTextureUnit)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param unit uint32_t
/// @param texture uint32_t
void q_openglfunctions_4_5_core_gl_bind_texture_unit(void* self, uint32_t unit, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGenerateTextureMipmap)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
void q_openglfunctions_4_5_core_gl_generate_texture_mipmap(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_texture_parameteriv(void* self, uint32_t texture, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameterIuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_5_core_gl_texture_parameter_iuiv(void* self, uint32_t texture, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameterIiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_texture_parameter_iiv(void* self, uint32_t texture, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_texture_parameteri(void* self, uint32_t texture, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameterfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param param float*
void q_openglfunctions_4_5_core_gl_texture_parameterfv(void* self, uint32_t texture, uint32_t pname, float* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureParameterf)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_5_core_gl_texture_parameterf(void* self, uint32_t texture, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTextureSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_copy_texture_sub_image3_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTextureSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_copy_texture_sub_image2_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyTextureSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_5_core_gl_copy_texture_sub_image1_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTextureSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
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
void q_openglfunctions_4_5_core_gl_compressed_texture_sub_image3_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTextureSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_texture_sub_image2_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCompressedTextureSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_compressed_texture_sub_image1_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureSubImage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
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
void q_openglfunctions_4_5_core_gl_texture_sub_image3_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureSubImage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_texture_sub_image2_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureSubImage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_5_core_gl_texture_sub_image1_d(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureStorage3DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_texture_storage3_d_multisample(void* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureStorage2DMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_5_core_gl_texture_storage2_d_multisample(void* self, uint32_t texture, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureStorage3D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglfunctions_4_5_core_gl_texture_storage3_d(void* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureStorage2D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_texture_storage2_d(void* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureStorage1D)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
void q_openglfunctions_4_5_core_gl_texture_storage1_d(void* self, uint32_t texture, int32_t levels, uint32_t internalformat, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size int32_t
void q_openglfunctions_4_5_core_gl_texture_buffer_range(void* self, uint32_t texture, uint32_t internalformat, uint32_t buffer, intptr_t offset, int32_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTextureBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param texture uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_texture_buffer(void* self, uint32_t texture, uint32_t internalformat, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateTextures)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param target uint32_t
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_5_core_gl_create_textures(void* self, uint32_t target, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param renderbuffer uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_named_renderbuffer_parameteriv(void* self, uint32_t renderbuffer, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param renderbuffer uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_named_renderbuffer_storage_multisample(void* self, uint32_t renderbuffer, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedRenderbufferStorage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param renderbuffer uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_5_core_gl_named_renderbuffer_storage(void* self, uint32_t renderbuffer, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateRenderbuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_5_core_gl_create_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_named_framebuffer_attachment_parameteriv(void* self, uint32_t framebuffer, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedFramebufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_get_named_framebuffer_parameteriv(void* self, uint32_t framebuffer, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glBlitNamedFramebuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param readFramebuffer uint32_t
/// @param drawFramebuffer uint32_t
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
void q_openglfunctions_4_5_core_gl_blit_named_framebuffer(void* self, uint32_t readFramebuffer, uint32_t drawFramebuffer, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedFramebufferfi)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param buffer uint32_t
/// @param depth float
/// @param stencil int32_t
void q_openglfunctions_4_5_core_gl_clear_named_framebufferfi(void* self, uint32_t framebuffer, uint32_t buffer, float depth, int32_t stencil);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedFramebufferfv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglfunctions_4_5_core_gl_clear_named_framebufferfv(void* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedFramebufferuiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglfunctions_4_5_core_gl_clear_named_framebufferuiv(void* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedFramebufferiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglfunctions_4_5_core_gl_clear_named_framebufferiv(void* self, uint32_t framebuffer, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferReadBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param src uint32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_read_buffer(void* self, uint32_t framebuffer, uint32_t src);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferDrawBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param buf uint32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_draw_buffer(void* self, uint32_t framebuffer, uint32_t buf);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_texture_layer(void* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferTexture)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_texture(void* self, uint32_t framebuffer, uint32_t attachment, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferParameteri)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_parameteri(void* self, uint32_t framebuffer, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param framebuffer uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_5_core_gl_named_framebuffer_renderbuffer(void* self, uint32_t framebuffer, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateFramebuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_5_core_gl_create_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_get_named_buffer_sub_data(void* self, uint32_t buffer, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedBufferPointerv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param pname uint32_t
/// @param params void*
void q_openglfunctions_4_5_core_gl_get_named_buffer_pointerv(void* self, uint32_t buffer, uint32_t pname, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedBufferParameteri64v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_5_core_gl_get_named_buffer_parameteri64v(void* self, uint32_t buffer, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetNamedBufferParameteriv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_5_core_gl_get_named_buffer_parameteriv(void* self, uint32_t buffer, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glFlushMappedNamedBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_4_5_core_gl_flush_mapped_named_buffer_range(void* self, uint32_t buffer, intptr_t offset, intptr_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glUnmapNamedBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
uint8_t q_openglfunctions_4_5_core_gl_unmap_named_buffer(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMapNamedBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param length intptr_t
/// @param access uint32_t
void* q_openglfunctions_4_5_core_gl_map_named_buffer_range(void* self, uint32_t buffer, intptr_t offset, intptr_t length, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glMapNamedBuffer)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param access uint32_t
void* q_openglfunctions_4_5_core_gl_map_named_buffer(void* self, uint32_t buffer, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param internalformat uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_named_buffer_sub_data(void* self, uint32_t buffer, uint32_t internalformat, intptr_t offset, intptr_t size, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClearNamedBufferData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param internalformat uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_clear_named_buffer_data(void* self, uint32_t buffer, uint32_t internalformat, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCopyNamedBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param readBuffer uint32_t
/// @param writeBuffer uint32_t
/// @param readOffset intptr_t
/// @param writeOffset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_5_core_gl_copy_named_buffer_sub_data(void* self, uint32_t readBuffer, uint32_t writeBuffer, intptr_t readOffset, intptr_t writeOffset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedBufferSubData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_5_core_gl_named_buffer_sub_data(void* self, uint32_t buffer, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedBufferData)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param size intptr_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_4_5_core_gl_named_buffer_data(void* self, uint32_t buffer, intptr_t size, void* data, uint32_t usage);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glNamedBufferStorage)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param buffer uint32_t
/// @param size intptr_t
/// @param data void*
/// @param flags uint32_t
void q_openglfunctions_4_5_core_gl_named_buffer_storage(void* self, uint32_t buffer, intptr_t size, void* data, uint32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateBuffers)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_5_core_gl_create_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTransformFeedbacki64_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param xfb uint32_t
/// @param pname uint32_t
/// @param index uint32_t
/// @param param int64_t*
void q_openglfunctions_4_5_core_gl_get_transform_feedbacki64_v(void* self, uint32_t xfb, uint32_t pname, uint32_t index, int64_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTransformFeedbacki_v)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param xfb uint32_t
/// @param pname uint32_t
/// @param index uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_get_transform_feedbacki_v(void* self, uint32_t xfb, uint32_t pname, uint32_t index, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glGetTransformFeedbackiv)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param xfb uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_5_core_gl_get_transform_feedbackiv(void* self, uint32_t xfb, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTransformFeedbackBufferRange)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param xfb uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_5_core_gl_transform_feedback_buffer_range(void* self, uint32_t xfb, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glTransformFeedbackBufferBase)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param xfb uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_5_core_gl_transform_feedback_buffer_base(void* self, uint32_t xfb, uint32_t index, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glCreateTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_5_core_gl_create_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#glClipControl)
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param origin uint32_t
/// @param depth uint32_t
void q_openglfunctions_4_5_core_gl_clip_control(void* self, uint32_t origin, uint32_t depth);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
bool q_openglfunctions_4_5_core_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
bool q_openglfunctions_4_5_core_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param callback bool func()
void q_openglfunctions_4_5_core_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param context QOpenGLContext*
void q_openglfunctions_4_5_core_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param context QOpenGLContext*
void q_openglfunctions_4_5_core_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param callback void func(QOpenGLFunctions_4_5_Core* self, QOpenGLContext* context)
void q_openglfunctions_4_5_core_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
QOpenGLContext* q_openglfunctions_4_5_core_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
QOpenGLContext* q_openglfunctions_4_5_core_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_5_Core*
/// @param callback QOpenGLContext* func()
void q_openglfunctions_4_5_core_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-4-5-core.html#dtor.QOpenGLFunctions_4_5_Core)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_5_Core*
void q_openglfunctions_4_5_core_delete(void* self);

#endif
