#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_3_1_H
#define SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_3_1_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions-3-1.html

/// q_openglfunctions_3_1_new constructs a new QOpenGLFunctions_3_1 object.
///
QOpenGLFunctions_3_1* q_openglfunctions_3_1_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_3_1*
bool q_openglfunctions_3_1_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_3_1*
/// @param callback bool func()
void q_openglfunctions_3_1_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_3_1*
bool q_openglfunctions_3_1_qbase_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glViewport)
///
/// @param self QOpenGLFunctions_3_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthRange)
///
/// @param self QOpenGLFunctions_3_1*
/// @param nearVal double
/// @param farVal double
void q_openglfunctions_3_1_gl_depth_range(void* self, double nearVal, double farVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_3_1*
/// @param cap uint32_t
uint8_t q_openglfunctions_3_1_gl_is_enabled(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetString)
///
/// @param self QOpenGLFunctions_3_1*
/// @param name uint32_t
const uint8_t* q_openglfunctions_3_1_gl_get_string(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_3_1_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglfunctions_3_1_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glReadPixels)
///
/// @param self QOpenGLFunctions_3_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_read_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_3_1_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_3_1_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_3_1*
/// @param func uint32_t
void q_openglfunctions_3_1_gl_depth_func(void* self, uint32_t func);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilOp)
///
/// @param self QOpenGLFunctions_3_1*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_3_1_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_3_1*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_3_1_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLogicOp)
///
/// @param self QOpenGLFunctions_3_1*
/// @param opcode uint32_t
void q_openglfunctions_3_1_gl_logic_op(void* self, uint32_t opcode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_3_1*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_3_1_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFlush)
///
/// @param self QOpenGLFunctions_3_1*
void q_openglfunctions_3_1_gl_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFinish)
///
/// @param self QOpenGLFunctions_3_1*
void q_openglfunctions_3_1_gl_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnable)
///
/// @param self QOpenGLFunctions_3_1*
/// @param cap uint32_t
void q_openglfunctions_3_1_gl_enable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisable)
///
/// @param self QOpenGLFunctions_3_1*
/// @param cap uint32_t
void q_openglfunctions_3_1_gl_disable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDepthMask)
///
/// @param self QOpenGLFunctions_3_1*
/// @param flag uint8_t
void q_openglfunctions_3_1_gl_depth_mask(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glColorMask)
///
/// @param self QOpenGLFunctions_3_1*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_3_1_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilMask)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mask uint32_t
void q_openglfunctions_3_1_gl_stencil_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearDepth)
///
/// @param self QOpenGLFunctions_3_1*
/// @param depth double
void q_openglfunctions_3_1_gl_clear_depth(void* self, double depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearStencil)
///
/// @param self QOpenGLFunctions_3_1*
/// @param s int32_t
void q_openglfunctions_3_1_gl_clear_stencil(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearColor)
///
/// @param self QOpenGLFunctions_3_1*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_3_1_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClear)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mask uint32_t
void q_openglfunctions_3_1_gl_clear(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_draw_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_3_1_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_3_1_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glScissor)
///
/// @param self QOpenGLFunctions_3_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_3_1*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointSize)
///
/// @param self QOpenGLFunctions_3_1*
/// @param size float
void q_openglfunctions_3_1_gl_point_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLineWidth)
///
/// @param self QOpenGLFunctions_3_1*
/// @param width float
void q_openglfunctions_3_1_gl_line_width(void* self, float width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glHint)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFrontFace)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_front_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCullFace)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_cull_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsTexture)
///
/// @param self QOpenGLFunctions_3_1*
/// @param texture uint32_t
uint8_t q_openglfunctions_3_1_gl_is_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenTextures)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_3_1_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_3_1_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindTexture)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_3_1_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_3_1_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_3_1_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_3_1_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
void q_openglfunctions_3_1_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_3_1*
/// @param factor float
/// @param units float
void q_openglfunctions_3_1_gl_polygon_offset(void* self, float factor, float units);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawElements)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_3_1_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_3_1_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_1*
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
void q_openglfunctions_3_1_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_3_1*
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
void q_openglfunctions_3_1_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_3_1_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_blend_equation(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendColor)
///
/// @param self QOpenGLFunctions_3_1*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_3_1_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
void q_openglfunctions_3_1_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_3_1_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_3_1_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_3_1*
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
void q_openglfunctions_3_1_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_3_1_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_3_1_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_3_1_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_3_1*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_3_1_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_3_1*
/// @param texture uint32_t
void q_openglfunctions_3_1_gl_active_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameteri)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_3_1_gl_point_parameteri(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameterfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_point_parameterfv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPointParameterf)
///
/// @param self QOpenGLFunctions_3_1*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_3_1_gl_point_parameterf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMultiDrawArrays)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param first int32_t*
/// @param count int32_t*
/// @param drawcount int32_t
void q_openglfunctions_3_1_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions_3_1*
/// @param sfactorRGB uint32_t
/// @param dfactorRGB uint32_t
/// @param sfactorAlpha uint32_t
/// @param dfactorAlpha uint32_t
void q_openglfunctions_3_1_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUnmapBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
uint8_t q_openglfunctions_3_1_gl_unmap_buffer(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMapBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param access uint32_t
void* q_openglfunctions_3_1_gl_map_buffer(void* self, uint32_t target, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBufferSubData)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_3_1_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBufferSubData)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_3_1_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBufferData)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param size intptr_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_3_1_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param buffer uint32_t
uint8_t q_openglfunctions_3_1_gl_is_buffer(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenBuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_3_1_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_3_1_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglfunctions_3_1_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_3_1_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryObjectiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetQueryiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndQuery)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
void q_openglfunctions_3_1_gl_end_query(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginQuery)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_3_1_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsQuery)
///
/// @param self QOpenGLFunctions_3_1*
/// @param id uint32_t
uint8_t q_openglfunctions_3_1_gl_is_query(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteQueries)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_3_1_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenQueries)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_3_1_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_3_1_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glValidateProgram)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
void q_openglfunctions_3_1_gl_validate_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4iv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_3_1_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3iv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_3_1_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2iv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_3_1_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1iv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_3_1_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4i)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_3_1_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3i)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_3_1_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2i)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_3_1_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1i)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_3_1_gl_uniform1i(void* self, int32_t location, int32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4f)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_3_1_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3f)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_3_1_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2f)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_3_1_gl_uniform2f(void* self, int32_t location, float v0, float v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1f)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_3_1_gl_uniform1f(void* self, int32_t location, float v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUseProgram)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
void q_openglfunctions_3_1_gl_use_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glLinkProgram)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
void q_openglfunctions_3_1_gl_link_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
uint8_t q_openglfunctions_3_1_gl_is_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsProgram)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
uint8_t q_openglfunctions_3_1_gl_is_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_3_1_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribdv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_3_1_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglfunctions_3_1_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_3_1_gl_get_uniform_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglfunctions_3_1_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_3_1_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_3_1_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_3_1_gl_get_attrib_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param maxCount int32_t
/// @param count int32_t*
/// @param obj uint32_t*
void q_openglfunctions_3_1_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
void q_openglfunctions_3_1_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
void q_openglfunctions_3_1_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDetachShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_3_1_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
void q_openglfunctions_3_1_gl_delete_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
void q_openglfunctions_3_1_gl_delete_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCreateShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param type uint32_t
uint32_t q_openglfunctions_3_1_gl_create_shader(void* self, uint32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCreateProgram)
///
/// @param self QOpenGLFunctions_3_1*
uint32_t q_openglfunctions_3_1_gl_create_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCompileShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param shader uint32_t
void q_openglfunctions_3_1_gl_compile_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_3_1_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glAttachShader)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_3_1_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions_3_1*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglfunctions_3_1_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions_3_1*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_3_1_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions_3_1*
/// @param face uint32_t
/// @param sfail uint32_t
/// @param dpfail uint32_t
/// @param dppass uint32_t
void q_openglfunctions_3_1_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions_3_1*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_3_1_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_3_1_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsVertexArray)
///
/// @param self QOpenGLFunctions_3_1*
/// @param array uint32_t
uint8_t q_openglfunctions_3_1_gl_is_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenVertexArrays)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_3_1_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteVertexArrays)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_3_1_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindVertexArray)
///
/// @param self QOpenGLFunctions_3_1*
/// @param array uint32_t
void q_openglfunctions_3_1_gl_bind_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_3_1_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glMapBufferRange)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
/// @param access uint32_t
void* q_openglfunctions_3_1_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglfunctions_3_1_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBlitFramebuffer)
///
/// @param self QOpenGLFunctions_3_1*
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
void q_openglfunctions_3_1_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
void q_openglfunctions_3_1_gl_generate_mipmap(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_3_1_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture3D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param zoffset int32_t
void q_openglfunctions_3_1_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_3_1_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glFramebufferTexture1D)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_3_1_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_3_1_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_3_1_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglfunctions_3_1_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param framebuffer uint32_t
uint8_t q_openglfunctions_3_1_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_3_1_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_3_1_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions_3_1*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_3_1_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_3_1_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param renderbuffer uint32_t
uint8_t q_openglfunctions_3_1_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetStringi)
///
/// @param self QOpenGLFunctions_3_1*
/// @param name uint32_t
/// @param index uint32_t
const uint8_t* q_openglfunctions_3_1_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferfi)
///
/// @param self QOpenGLFunctions_3_1*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
void q_openglfunctions_3_1_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferfv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglfunctions_3_1_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglfunctions_3_1_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClearBufferiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglfunctions_3_1_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_3_1_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetTexParameterIiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterIuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_3_1_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexParameterIiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4uiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_3_1_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3uiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_3_1_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2uiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_3_1_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1uiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_3_1_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform4ui)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_3_1_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform3ui)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_3_1_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform2ui)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_3_1_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniform1ui)
///
/// @param self QOpenGLFunctions_3_1*
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_3_1_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetFragDataLocation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_3_1_gl_get_frag_data_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindFragDataLocation)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param color uint32_t
/// @param name char*
void q_openglfunctions_3_1_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_3_1_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_3_1_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glVertexAttribIPointer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_3_1_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndConditionalRender)
///
/// @param self QOpenGLFunctions_3_1*
void q_openglfunctions_3_1_gl_end_conditional_render(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginConditionalRender)
///
/// @param self QOpenGLFunctions_3_1*
/// @param id uint32_t
/// @param mode uint32_t
void q_openglfunctions_3_1_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glClampColor)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param clamp uint32_t
void q_openglfunctions_3_1_gl_clamp_color(void* self, uint32_t target, uint32_t clamp);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBufferBase)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglfunctions_3_1_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBindBufferRange)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_3_1_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEndTransformFeedback)
///
/// @param self QOpenGLFunctions_3_1*
void q_openglfunctions_3_1_gl_end_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glBeginTransformFeedback)
///
/// @param self QOpenGLFunctions_3_1*
/// @param primitiveMode uint32_t
void q_openglfunctions_3_1_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glIsEnabledi)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
uint8_t q_openglfunctions_3_1_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDisablei)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_3_1_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glEnablei)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_3_1_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetIntegeri_v)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
void q_openglfunctions_3_1_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetBooleani_v)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
void q_openglfunctions_3_1_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glColorMaski)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
void q_openglfunctions_3_1_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glCopyBufferSubData)
///
/// @param self QOpenGLFunctions_3_1*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset intptr_t
/// @param writeOffset intptr_t
/// @param size intptr_t
void q_openglfunctions_3_1_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glUniformBlockBinding)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
void q_openglfunctions_3_1_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
void q_openglfunctions_3_1_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformBlockName char*
uint32_t q_openglfunctions_3_1_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformName)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformName char*
void q_openglfunctions_3_1_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLFunctions_3_1*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_3_1_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glPrimitiveRestartIndex)
///
/// @param self QOpenGLFunctions_3_1*
/// @param index uint32_t
void q_openglfunctions_3_1_gl_primitive_restart_index(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glTexBuffer)
///
/// @param self QOpenGLFunctions_3_1*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglfunctions_3_1_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawElementsInstanced)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
void q_openglfunctions_3_1_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#glDrawArraysInstanced)
///
/// @param self QOpenGLFunctions_3_1*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
void q_openglfunctions_3_1_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
bool q_openglfunctions_3_1_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
bool q_openglfunctions_3_1_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
/// @param callback bool func()
void q_openglfunctions_3_1_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
/// @param context QOpenGLContext*
void q_openglfunctions_3_1_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
/// @param context QOpenGLContext*
void q_openglfunctions_3_1_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
/// @param callback void func(QOpenGLFunctions_3_1* self, QOpenGLContext* context)
void q_openglfunctions_3_1_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
QOpenGLContext* q_openglfunctions_3_1_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
QOpenGLContext* q_openglfunctions_3_1_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_3_1*
/// @param callback QOpenGLContext* func()
void q_openglfunctions_3_1_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-3-1.html#dtor.QOpenGLFunctions_3_1)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_3_1*
void q_openglfunctions_3_1_delete(void* self);

#endif
