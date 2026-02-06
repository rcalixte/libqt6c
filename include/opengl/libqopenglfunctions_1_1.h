#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_1_1_H
#define SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_1_1_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html)

/// q_openglfunctions_1_1_new constructs a new QOpenGLFunctions_1_1 object.
///
QOpenGLFunctions_1_1* q_openglfunctions_1_1_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_1_1*
///
bool q_openglfunctions_1_1_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_1_1*
/// @param callback bool func()
///
void q_openglfunctions_1_1_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_1_1*
///
bool q_openglfunctions_1_1_qbase_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glViewport)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_1_1_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDepthRange)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nearVal double
/// @param farVal double
///
void q_openglfunctions_1_1_gl_depth_range(void* self, double nearVal, double farVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_1_1*
/// @param cap uint32_t
///
uint8_t q_openglfunctions_1_1_gl_is_enabled(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_1_1_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetString)
///
/// @param self QOpenGLFunctions_1_1*
/// @param name uint32_t
///
const uint8_t* q_openglfunctions_1_1_gl_get_string(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params double*
///
void q_openglfunctions_1_1_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params uint8_t*
///
void q_openglfunctions_1_1_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glReadPixels)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_1_1_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_read_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_1_1*
/// @param func uint32_t
///
void q_openglfunctions_1_1_gl_depth_func(void* self, uint32_t func);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glStencilOp)
///
/// @param self QOpenGLFunctions_1_1*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
///
void q_openglfunctions_1_1_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_1_1*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLogicOp)
///
/// @param self QOpenGLFunctions_1_1*
/// @param opcode uint32_t
///
void q_openglfunctions_1_1_gl_logic_op(void* self, uint32_t opcode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_1_1*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
///
void q_openglfunctions_1_1_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFlush)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFinish)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEnable)
///
/// @param self QOpenGLFunctions_1_1*
/// @param cap uint32_t
///
void q_openglfunctions_1_1_gl_enable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDisable)
///
/// @param self QOpenGLFunctions_1_1*
/// @param cap uint32_t
///
void q_openglfunctions_1_1_gl_disable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDepthMask)
///
/// @param self QOpenGLFunctions_1_1*
/// @param flag uint8_t
///
void q_openglfunctions_1_1_gl_depth_mask(void* self, uint8_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColorMask)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
///
void q_openglfunctions_1_1_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glStencilMask)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_stencil_mask(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClearDepth)
///
/// @param self QOpenGLFunctions_1_1*
/// @param depth double
///
void q_openglfunctions_1_1_gl_clear_depth(void* self, double depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClearStencil)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int32_t
///
void q_openglfunctions_1_1_gl_clear_stencil(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClearColor)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
///
void q_openglfunctions_1_1_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClear)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_clear(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_draw_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_1_1*
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
void q_openglfunctions_1_1_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_1_1_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glScissor)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_1_1_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPointSize)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size float
///
void q_openglfunctions_1_1_gl_point_size(void* self, float size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLineWidth)
///
/// @param self QOpenGLFunctions_1_1*
/// @param width float
///
void q_openglfunctions_1_1_gl_line_width(void* self, float width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glHint)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFrontFace)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_front_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCullFace)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_cull_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexubv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c uint8_t*
///
void q_openglfunctions_1_1_gl_indexubv(void* self, uint8_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexub)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c uint8_t
///
void q_openglfunctions_1_1_gl_indexub(void* self, uint8_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIsTexture)
///
/// @param self QOpenGLFunctions_1_1*
/// @param texture uint32_t
///
uint8_t q_openglfunctions_1_1_gl_is_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGenTextures)
///
/// @param self QOpenGLFunctions_1_1*
/// @param n int32_t
/// @param textures uint32_t*
///
void q_openglfunctions_1_1_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_1_1*
/// @param n int32_t
/// @param textures uint32_t*
///
void q_openglfunctions_1_1_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glBindTexture)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param texture uint32_t
///
void q_openglfunctions_1_1_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_1_1*
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
void q_openglfunctions_1_1_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_1_1_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
///
void q_openglfunctions_1_1_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
///
void q_openglfunctions_1_1_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
///
void q_openglfunctions_1_1_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
///
void q_openglfunctions_1_1_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_1_1*
/// @param factor float
/// @param units float
///
void q_openglfunctions_1_1_gl_polygon_offset(void* self, float factor, float units);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetPointerv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params void*
///
void q_openglfunctions_1_1_gl_get_pointerv(void* self, uint32_t pname, void* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDrawElements)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
///
void q_openglfunctions_1_1_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
///
void q_openglfunctions_1_1_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTranslatef)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglfunctions_1_1_gl_translatef(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTranslated)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
///
void q_openglfunctions_1_1_gl_translated(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glScalef)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglfunctions_1_1_gl_scalef(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glScaled)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
///
void q_openglfunctions_1_1_gl_scaled(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRotatef)
///
/// @param self QOpenGLFunctions_1_1*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
///
void q_openglfunctions_1_1_gl_rotatef(void* self, float angle, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRotated)
///
/// @param self QOpenGLFunctions_1_1*
/// @param angle double
/// @param x double
/// @param y double
/// @param z double
///
void q_openglfunctions_1_1_gl_rotated(void* self, double angle, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPushMatrix)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_push_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPopMatrix)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_pop_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glOrtho)
///
/// @param self QOpenGLFunctions_1_1*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
///
void q_openglfunctions_1_1_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMultMatrixd)
///
/// @param self QOpenGLFunctions_1_1*
/// @param m double*
///
void q_openglfunctions_1_1_gl_mult_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMultMatrixf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param m float*
///
void q_openglfunctions_1_1_gl_mult_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMatrixMode)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_matrix_mode(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLoadMatrixd)
///
/// @param self QOpenGLFunctions_1_1*
/// @param m double*
///
void q_openglfunctions_1_1_gl_load_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLoadMatrixf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param m float*
///
void q_openglfunctions_1_1_gl_load_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLoadIdentity)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_load_identity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFrustum)
///
/// @param self QOpenGLFunctions_1_1*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
///
void q_openglfunctions_1_1_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIsList)
///
/// @param self QOpenGLFunctions_1_1*
/// @param list uint32_t
///
uint8_t q_openglfunctions_1_1_gl_is_list(void* self, uint32_t list);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexGeniv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexGenfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexGendv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
///
void q_openglfunctions_1_1_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexEnviv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetTexEnvfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetPolygonStipple)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint8_t*
///
void q_openglfunctions_1_1_gl_get_polygon_stipple(void* self, uint8_t* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetPixelMapusv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param values uint16_t*
///
void q_openglfunctions_1_1_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetPixelMapuiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param values uint32_t*
///
void q_openglfunctions_1_1_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetPixelMapfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param values float*
///
void q_openglfunctions_1_1_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetMaterialiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetMaterialfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetMapiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param query uint32_t
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetMapfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param query uint32_t
/// @param v float*
///
void q_openglfunctions_1_1_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetMapdv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param query uint32_t
/// @param v double*
///
void q_openglfunctions_1_1_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetLightiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetLightfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGetClipPlane)
///
/// @param self QOpenGLFunctions_1_1*
/// @param plane uint32_t
/// @param equation double*
///
void q_openglfunctions_1_1_gl_get_clip_plane(void* self, uint32_t plane, double* equation);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDrawPixels)
///
/// @param self QOpenGLFunctions_1_1*
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
///
void q_openglfunctions_1_1_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCopyPixels)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param type uint32_t
///
void q_openglfunctions_1_1_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelMapusv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint16_t*
///
void q_openglfunctions_1_1_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelMapuiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint32_t*
///
void q_openglfunctions_1_1_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelMapfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values float*
///
void q_openglfunctions_1_1_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelTransferi)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_pixel_transferi(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelTransferf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_pixel_transferf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPixelZoom)
///
/// @param self QOpenGLFunctions_1_1*
/// @param xfactor float
/// @param yfactor float
///
void q_openglfunctions_1_1_gl_pixel_zoom(void* self, float xfactor, float yfactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glAlphaFunc)
///
/// @param self QOpenGLFunctions_1_1*
/// @param func uint32_t
/// @param ref float
///
void q_openglfunctions_1_1_gl_alpha_func(void* self, uint32_t func, float ref);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalPoint2)
///
/// @param self QOpenGLFunctions_1_1*
/// @param i int32_t
/// @param j int32_t
///
void q_openglfunctions_1_1_gl_eval_point2(void* self, int32_t i, int32_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalMesh2)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
/// @param j1 int32_t
/// @param j2 int32_t
///
void q_openglfunctions_1_1_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalPoint1)
///
/// @param self QOpenGLFunctions_1_1*
/// @param i int32_t
///
void q_openglfunctions_1_1_gl_eval_point1(void* self, int32_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalMesh1)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
///
void q_openglfunctions_1_1_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord2fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u float*
///
void q_openglfunctions_1_1_gl_eval_coord2fv(void* self, float* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u float
/// @param v float
///
void q_openglfunctions_1_1_gl_eval_coord2f(void* self, float u, float v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord2dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u double*
///
void q_openglfunctions_1_1_gl_eval_coord2dv(void* self, double* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u double
/// @param v double
///
void q_openglfunctions_1_1_gl_eval_coord2d(void* self, double u, double v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord1fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u float*
///
void q_openglfunctions_1_1_gl_eval_coord1fv(void* self, float* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord1f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u float
///
void q_openglfunctions_1_1_gl_eval_coord1f(void* self, float u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord1dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u double*
///
void q_openglfunctions_1_1_gl_eval_coord1dv(void* self, double* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEvalCoord1d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param u double
///
void q_openglfunctions_1_1_gl_eval_coord1d(void* self, double u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMapGrid2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
/// @param vn int32_t
/// @param v1 float
/// @param v2 float
///
void q_openglfunctions_1_1_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMapGrid2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
/// @param vn int32_t
/// @param v1 double
/// @param v2 double
///
void q_openglfunctions_1_1_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMapGrid1f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
///
void q_openglfunctions_1_1_gl_map_grid1f(void* self, int32_t un, float u1, float u2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMapGrid1d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
///
void q_openglfunctions_1_1_gl_map_grid1d(void* self, int32_t un, double u1, double u2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMap2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param u1 float
/// @param u2 float
/// @param ustride int32_t
/// @param uorder int32_t
/// @param v1 float
/// @param v2 float
/// @param vstride int32_t
/// @param vorder int32_t
/// @param points float*
///
void q_openglfunctions_1_1_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMap2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param u1 double
/// @param u2 double
/// @param ustride int32_t
/// @param uorder int32_t
/// @param v1 double
/// @param v2 double
/// @param vstride int32_t
/// @param vorder int32_t
/// @param points double*
///
void q_openglfunctions_1_1_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMap1f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param u1 float
/// @param u2 float
/// @param stride int32_t
/// @param order int32_t
/// @param points float*
///
void q_openglfunctions_1_1_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMap1d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param u1 double
/// @param u2 double
/// @param stride int32_t
/// @param order int32_t
/// @param points double*
///
void q_openglfunctions_1_1_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPushAttrib)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_push_attrib(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPopAttrib)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_pop_attrib(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glAccum)
///
/// @param self QOpenGLFunctions_1_1*
/// @param op uint32_t
/// @param value float
///
void q_openglfunctions_1_1_gl_accum(void* self, uint32_t op, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexMask)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_index_mask(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClearIndex)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c float
///
void q_openglfunctions_1_1_gl_clear_index(void* self, float c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClearAccum)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
///
void q_openglfunctions_1_1_gl_clear_accum(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPushName)
///
/// @param self QOpenGLFunctions_1_1*
/// @param name uint32_t
///
void q_openglfunctions_1_1_gl_push_name(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPopName)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_pop_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPassThrough)
///
/// @param self QOpenGLFunctions_1_1*
/// @param token float
///
void q_openglfunctions_1_1_gl_pass_through(void* self, float token);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLoadName)
///
/// @param self QOpenGLFunctions_1_1*
/// @param name uint32_t
///
void q_openglfunctions_1_1_gl_load_name(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glInitNames)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_init_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRenderMode)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
int32_t q_openglfunctions_1_1_gl_render_mode(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glSelectBuffer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size int32_t
/// @param buffer uint32_t*
///
void q_openglfunctions_1_1_gl_select_buffer(void* self, int32_t size, uint32_t* buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFeedbackBuffer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size int32_t
/// @param type uint32_t
/// @param buffer float*
///
void q_openglfunctions_1_1_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGeniv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGeni)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGenfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGenf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGendv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
///
void q_openglfunctions_1_1_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexGend)
///
/// @param self QOpenGLFunctions_1_1*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param double
///
void q_openglfunctions_1_1_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexEnviv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexEnvi)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexEnvfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexEnvf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glShadeModel)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_shade_model(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPolygonStipple)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint8_t*
///
void q_openglfunctions_1_1_gl_polygon_stipple(void* self, uint8_t* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMaterialiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMateriali)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMaterialfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glMaterialf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_materialf(void* self, uint32_t face, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLineStipple)
///
/// @param self QOpenGLFunctions_1_1*
/// @param factor int32_t
/// @param pattern uint16_t
///
void q_openglfunctions_1_1_gl_line_stipple(void* self, int32_t factor, uint16_t pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightModeliv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_light_modeliv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightModeli)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_light_modeli(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightModelfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_light_modelfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightModelf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_light_modelf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLighti)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glLightf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_lightf(void* self, uint32_t light, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFogiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params int32_t*
///
void q_openglfunctions_1_1_gl_fogiv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFogi)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param int32_t
///
void q_openglfunctions_1_1_gl_fogi(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFogfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param params float*
///
void q_openglfunctions_1_1_gl_fogfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glFogf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param pname uint32_t
/// @param param float
///
void q_openglfunctions_1_1_gl_fogf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColorMaterial)
///
/// @param self QOpenGLFunctions_1_1*
/// @param face uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_color_material(void* self, uint32_t face, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glClipPlane)
///
/// @param self QOpenGLFunctions_1_1*
/// @param plane uint32_t
/// @param equation double*
///
void q_openglfunctions_1_1_gl_clip_plane(void* self, uint32_t plane, double* equation);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_vertex4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
///
void q_openglfunctions_1_1_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_vertex4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
///
void q_openglfunctions_1_1_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_vertex4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglfunctions_1_1_gl_vertex4f(void* self, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_vertex4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex4d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
///
void q_openglfunctions_1_1_gl_vertex4d(void* self, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_vertex3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
///
void q_openglfunctions_1_1_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_vertex3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
///
void q_openglfunctions_1_1_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_vertex3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglfunctions_1_1_gl_vertex3f(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_vertex3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex3d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
///
void q_openglfunctions_1_1_gl_vertex3d(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_vertex2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
///
void q_openglfunctions_1_1_gl_vertex2s(void* self, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_vertex2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
///
void q_openglfunctions_1_1_gl_vertex2i(void* self, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_vertex2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
///
void q_openglfunctions_1_1_gl_vertex2f(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_vertex2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertex2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
///
void q_openglfunctions_1_1_gl_vertex2d(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_tex_coord4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
/// @param q int16_t
///
void q_openglfunctions_1_1_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_tex_coord4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
/// @param q int32_t
///
void q_openglfunctions_1_1_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_tex_coord4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s float
/// @param t float
/// @param r float
/// @param q float
///
void q_openglfunctions_1_1_gl_tex_coord4f(void* self, float s, float t, float r, float q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_tex_coord4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord4d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s double
/// @param t double
/// @param r double
/// @param q double
///
void q_openglfunctions_1_1_gl_tex_coord4d(void* self, double s, double t, double r, double q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_tex_coord3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
///
void q_openglfunctions_1_1_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_tex_coord3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
///
void q_openglfunctions_1_1_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_tex_coord3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s float
/// @param t float
/// @param r float
///
void q_openglfunctions_1_1_gl_tex_coord3f(void* self, float s, float t, float r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_tex_coord3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord3d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s double
/// @param t double
/// @param r double
///
void q_openglfunctions_1_1_gl_tex_coord3d(void* self, double s, double t, double r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_tex_coord2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int16_t
/// @param t int16_t
///
void q_openglfunctions_1_1_gl_tex_coord2s(void* self, int16_t s, int16_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_tex_coord2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int32_t
/// @param t int32_t
///
void q_openglfunctions_1_1_gl_tex_coord2i(void* self, int32_t s, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_tex_coord2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s float
/// @param t float
///
void q_openglfunctions_1_1_gl_tex_coord2f(void* self, float s, float t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_tex_coord2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s double
/// @param t double
///
void q_openglfunctions_1_1_gl_tex_coord2d(void* self, double s, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_tex_coord1sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int16_t
///
void q_openglfunctions_1_1_gl_tex_coord1s(void* self, int16_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_tex_coord1iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s int32_t
///
void q_openglfunctions_1_1_gl_tex_coord1i(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_tex_coord1fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s float
///
void q_openglfunctions_1_1_gl_tex_coord1f(void* self, float s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_tex_coord1dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoord1d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param s double
///
void q_openglfunctions_1_1_gl_tex_coord1d(void* self, double s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectsv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v1 int16_t*
/// @param v2 int16_t*
///
void q_openglfunctions_1_1_gl_rectsv(void* self, int16_t* v1, int16_t* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRects)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x1 int16_t
/// @param y1 int16_t
/// @param x2 int16_t
/// @param y2 int16_t
///
void q_openglfunctions_1_1_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v1 int32_t*
/// @param v2 int32_t*
///
void q_openglfunctions_1_1_gl_rectiv(void* self, int32_t* v1, int32_t* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRecti)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x1 int32_t
/// @param y1 int32_t
/// @param x2 int32_t
/// @param y2 int32_t
///
void q_openglfunctions_1_1_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v1 float*
/// @param v2 float*
///
void q_openglfunctions_1_1_gl_rectfv(void* self, float* v1, float* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x1 float
/// @param y1 float
/// @param x2 float
/// @param y2 float
///
void q_openglfunctions_1_1_gl_rectf(void* self, float x1, float y1, float x2, float y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectdv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v1 double*
/// @param v2 double*
///
void q_openglfunctions_1_1_gl_rectdv(void* self, double* v1, double* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRectd)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
void q_openglfunctions_1_1_gl_rectd(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_raster_pos4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
///
void q_openglfunctions_1_1_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_raster_pos4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
///
void q_openglfunctions_1_1_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_raster_pos4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
///
void q_openglfunctions_1_1_gl_raster_pos4f(void* self, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_raster_pos4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos4d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
///
void q_openglfunctions_1_1_gl_raster_pos4d(void* self, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_raster_pos3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
///
void q_openglfunctions_1_1_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_raster_pos3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
///
void q_openglfunctions_1_1_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_raster_pos3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
/// @param z float
///
void q_openglfunctions_1_1_gl_raster_pos3f(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_raster_pos3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos3d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
/// @param z double
///
void q_openglfunctions_1_1_gl_raster_pos3d(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_raster_pos2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int16_t
/// @param y int16_t
///
void q_openglfunctions_1_1_gl_raster_pos2s(void* self, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_raster_pos2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x int32_t
/// @param y int32_t
///
void q_openglfunctions_1_1_gl_raster_pos2i(void* self, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_raster_pos2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x float
/// @param y float
///
void q_openglfunctions_1_1_gl_raster_pos2f(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_raster_pos2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glRasterPos2d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param x double
/// @param y double
///
void q_openglfunctions_1_1_gl_raster_pos2d(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_normal3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nx int16_t
/// @param ny int16_t
/// @param nz int16_t
///
void q_openglfunctions_1_1_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_normal3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nx int32_t
/// @param ny int32_t
/// @param nz int32_t
///
void q_openglfunctions_1_1_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_normal3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nx float
/// @param ny float
/// @param nz float
///
void q_openglfunctions_1_1_gl_normal3f(void* self, float nx, float ny, float nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_normal3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nx double
/// @param ny double
/// @param nz double
///
void q_openglfunctions_1_1_gl_normal3d(void* self, double nx, double ny, double nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3bv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v signed char*
///
void q_openglfunctions_1_1_gl_normal3bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormal3b)
///
/// @param self QOpenGLFunctions_1_1*
/// @param nx signed char
/// @param ny signed char
/// @param nz signed char
///
void q_openglfunctions_1_1_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexsv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c int16_t*
///
void q_openglfunctions_1_1_gl_indexsv(void* self, int16_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexs)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c int16_t
///
void q_openglfunctions_1_1_gl_indexs(void* self, int16_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c int32_t*
///
void q_openglfunctions_1_1_gl_indexiv(void* self, int32_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexi)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c int32_t
///
void q_openglfunctions_1_1_gl_indexi(void* self, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexfv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c float*
///
void q_openglfunctions_1_1_gl_indexfv(void* self, float* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexf)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c float
///
void q_openglfunctions_1_1_gl_indexf(void* self, float c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexdv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c double*
///
void q_openglfunctions_1_1_gl_indexdv(void* self, double* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexd)
///
/// @param self QOpenGLFunctions_1_1*
/// @param c double
///
void q_openglfunctions_1_1_gl_indexd(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEnd)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEdgeFlagv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param flag uint8_t*
///
void q_openglfunctions_1_1_gl_edge_flagv(void* self, uint8_t* flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEdgeFlag)
///
/// @param self QOpenGLFunctions_1_1*
/// @param flag uint8_t
///
void q_openglfunctions_1_1_gl_edge_flag(void* self, uint8_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4usv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint16_t*
///
void q_openglfunctions_1_1_gl_color4usv(void* self, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4us)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
/// @param alpha uint16_t
///
void q_openglfunctions_1_1_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4uiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint32_t*
///
void q_openglfunctions_1_1_gl_color4uiv(void* self, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4ui)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
/// @param alpha uint32_t
///
void q_openglfunctions_1_1_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4ubv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint8_t*
///
void q_openglfunctions_1_1_gl_color4ubv(void* self, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4ub)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
///
void q_openglfunctions_1_1_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_color4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
/// @param alpha int16_t
///
void q_openglfunctions_1_1_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_color4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
/// @param alpha int32_t
///
void q_openglfunctions_1_1_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_color4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
///
void q_openglfunctions_1_1_gl_color4f(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_color4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red double
/// @param green double
/// @param blue double
/// @param alpha double
///
void q_openglfunctions_1_1_gl_color4d(void* self, double red, double green, double blue, double alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4bv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v signed char*
///
void q_openglfunctions_1_1_gl_color4bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor4b)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
/// @param alpha signed char
///
void q_openglfunctions_1_1_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3usv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint16_t*
///
void q_openglfunctions_1_1_gl_color3usv(void* self, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3us)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
///
void q_openglfunctions_1_1_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3uiv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint32_t*
///
void q_openglfunctions_1_1_gl_color3uiv(void* self, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3ui)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
///
void q_openglfunctions_1_1_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3ubv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v uint8_t*
///
void q_openglfunctions_1_1_gl_color3ubv(void* self, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3ub)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
///
void q_openglfunctions_1_1_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3sv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int16_t*
///
void q_openglfunctions_1_1_gl_color3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3s)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
///
void q_openglfunctions_1_1_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3iv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v int32_t*
///
void q_openglfunctions_1_1_gl_color3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3i)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
///
void q_openglfunctions_1_1_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3fv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v float*
///
void q_openglfunctions_1_1_gl_color3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3f)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red float
/// @param green float
/// @param blue float
///
void q_openglfunctions_1_1_gl_color3f(void* self, float red, float green, float blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3dv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v double*
///
void q_openglfunctions_1_1_gl_color3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3d)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red double
/// @param green double
/// @param blue double
///
void q_openglfunctions_1_1_gl_color3d(void* self, double red, double green, double blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3bv)
///
/// @param self QOpenGLFunctions_1_1*
/// @param v signed char*
///
void q_openglfunctions_1_1_gl_color3bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColor3b)
///
/// @param self QOpenGLFunctions_1_1*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
///
void q_openglfunctions_1_1_gl_color3b(void* self, signed char red, signed char green, signed char blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glBitmap)
///
/// @param self QOpenGLFunctions_1_1*
/// @param width int32_t
/// @param height int32_t
/// @param xorig float
/// @param yorig float
/// @param xmove float
/// @param ymove float
/// @param bitmap uint8_t*
///
void q_openglfunctions_1_1_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glBegin)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_begin(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glListBase)
///
/// @param self QOpenGLFunctions_1_1*
/// @param base uint32_t
///
void q_openglfunctions_1_1_gl_list_base(void* self, uint32_t base);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glGenLists)
///
/// @param self QOpenGLFunctions_1_1*
/// @param range int32_t
///
uint32_t q_openglfunctions_1_1_gl_gen_lists(void* self, int32_t range);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDeleteLists)
///
/// @param self QOpenGLFunctions_1_1*
/// @param list uint32_t
/// @param range int32_t
///
void q_openglfunctions_1_1_gl_delete_lists(void* self, uint32_t list, int32_t range);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCallLists)
///
/// @param self QOpenGLFunctions_1_1*
/// @param n int32_t
/// @param type uint32_t
/// @param lists void*
///
void q_openglfunctions_1_1_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glCallList)
///
/// @param self QOpenGLFunctions_1_1*
/// @param list uint32_t
///
void q_openglfunctions_1_1_gl_call_list(void* self, uint32_t list);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEndList)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_end_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNewList)
///
/// @param self QOpenGLFunctions_1_1*
/// @param list uint32_t
/// @param mode uint32_t
///
void q_openglfunctions_1_1_gl_new_list(void* self, uint32_t list, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPushClientAttrib)
///
/// @param self QOpenGLFunctions_1_1*
/// @param mask uint32_t
///
void q_openglfunctions_1_1_gl_push_client_attrib(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPopClientAttrib)
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_gl_pop_client_attrib(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glPrioritizeTextures)
///
/// @param self QOpenGLFunctions_1_1*
/// @param n int32_t
/// @param textures uint32_t*
/// @param priorities float*
///
void q_openglfunctions_1_1_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glAreTexturesResident)
///
/// @param self QOpenGLFunctions_1_1*
/// @param n int32_t
/// @param textures uint32_t*
/// @param residences uint8_t*
///
uint8_t q_openglfunctions_1_1_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glVertexPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glTexCoordPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glNormalPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glInterleavedArrays)
///
/// @param self QOpenGLFunctions_1_1*
/// @param format uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glIndexPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEnableClientState)
///
/// @param self QOpenGLFunctions_1_1*
/// @param array uint32_t
///
void q_openglfunctions_1_1_gl_enable_client_state(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glEdgeFlagPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glDisableClientState)
///
/// @param self QOpenGLFunctions_1_1*
/// @param array uint32_t
///
void q_openglfunctions_1_1_gl_disable_client_state(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glColorPointer)
///
/// @param self QOpenGLFunctions_1_1*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
///
void q_openglfunctions_1_1_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#glArrayElement)
///
/// @param self QOpenGLFunctions_1_1*
/// @param i int32_t
///
void q_openglfunctions_1_1_gl_array_element(void* self, int32_t i);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
///
bool q_openglfunctions_1_1_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
///
bool q_openglfunctions_1_1_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
/// @param callback bool func()
///
void q_openglfunctions_1_1_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_1_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_1_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
/// @param callback void func(QOpenGLFunctions_1_1* self, QOpenGLContext* context)
///
void q_openglfunctions_1_1_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
///
QOpenGLContext* q_openglfunctions_1_1_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
///
QOpenGLContext* q_openglfunctions_1_1_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_1*
/// @param callback QOpenGLContext* func()
///
void q_openglfunctions_1_1_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1.html#dtor.QOpenGLFunctions_1_1)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_1*
///
void q_openglfunctions_1_1_delete(void* self);

#endif
