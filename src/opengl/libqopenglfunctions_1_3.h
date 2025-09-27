#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_1_3_H
#define SRC_OPENGLQT6C_LIBQOPENGLFUNCTIONS_1_3_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions-1-3.html

/// q_openglfunctions_1_3_new constructs a new QOpenGLFunctions_1_3 object.
///
QOpenGLFunctions_1_3* q_openglfunctions_1_3_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_1_3*
bool q_openglfunctions_1_3_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_1_3*
/// @param callback bool func()
void q_openglfunctions_1_3_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_1_3*
bool q_openglfunctions_1_3_qbase_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glViewport)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_1_3_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDepthRange)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nearVal double
/// @param farVal double
void q_openglfunctions_1_3_gl_depth_range(void* self, double nearVal, double farVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_1_3*
/// @param cap uint32_t
uint8_t q_openglfunctions_1_3_gl_is_enabled(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetString)
///
/// @param self QOpenGLFunctions_1_3*
/// @param name uint32_t
const uint8_t* q_openglfunctions_1_3_gl_get_string(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_1_3_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglfunctions_1_3_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glReadPixels)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_read_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_1_3*
/// @param func uint32_t
void q_openglfunctions_1_3_gl_depth_func(void* self, uint32_t func);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glStencilOp)
///
/// @param self QOpenGLFunctions_1_3*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_1_3_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_1_3*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLogicOp)
///
/// @param self QOpenGLFunctions_1_3*
/// @param opcode uint32_t
void q_openglfunctions_1_3_gl_logic_op(void* self, uint32_t opcode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_1_3*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_1_3_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFlush)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFinish)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEnable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param cap uint32_t
void q_openglfunctions_1_3_gl_enable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDisable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param cap uint32_t
void q_openglfunctions_1_3_gl_disable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDepthMask)
///
/// @param self QOpenGLFunctions_1_3*
/// @param flag uint8_t
void q_openglfunctions_1_3_gl_depth_mask(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorMask)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_1_3_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glStencilMask)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_stencil_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClearDepth)
///
/// @param self QOpenGLFunctions_1_3*
/// @param depth double
void q_openglfunctions_1_3_gl_clear_depth(void* self, double depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClearStencil)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int32_t
void q_openglfunctions_1_3_gl_clear_stencil(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClearColor)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_1_3_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClear)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_clear(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_draw_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glScissor)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_1_3_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPointSize)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size float
void q_openglfunctions_1_3_gl_point_size(void* self, float size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLineWidth)
///
/// @param self QOpenGLFunctions_1_3*
/// @param width float
void q_openglfunctions_1_3_gl_line_width(void* self, float width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glHint)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFrontFace)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_front_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCullFace)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_cull_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexubv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c uint8_t*
void q_openglfunctions_1_3_gl_indexubv(void* self, uint8_t* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexub)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c uint8_t
void q_openglfunctions_1_3_gl_indexub(void* self, uint8_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIsTexture)
///
/// @param self QOpenGLFunctions_1_3*
/// @param texture uint32_t
uint8_t q_openglfunctions_1_3_gl_is_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGenTextures)
///
/// @param self QOpenGLFunctions_1_3*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_1_3_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_1_3*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_1_3_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBindTexture)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_1_3_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_1_3_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_1_3_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_1_3_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
void q_openglfunctions_1_3_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_1_3*
/// @param factor float
/// @param units float
void q_openglfunctions_1_3_gl_polygon_offset(void* self, float factor, float units);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDrawElements)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_1_3_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_1_3_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_1_3_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_1_3*
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
void q_openglfunctions_1_3_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_1_3*
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
void q_openglfunctions_1_3_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_1_3_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_blend_equation(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBlendColor)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_1_3_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
void q_openglfunctions_1_3_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_1_3_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_1_3_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_1_3*
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
void q_openglfunctions_1_3_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_1_3_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_1_3_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_1_3_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_1_3*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_1_3_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_1_3*
/// @param texture uint32_t
void q_openglfunctions_1_3_gl_active_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTranslatef)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_1_3_gl_translatef(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTranslated)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_1_3_gl_translated(void* self, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glScalef)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_1_3_gl_scalef(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glScaled)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_1_3_gl_scaled(void* self, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRotatef)
///
/// @param self QOpenGLFunctions_1_3*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_1_3_gl_rotatef(void* self, float angle, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRotated)
///
/// @param self QOpenGLFunctions_1_3*
/// @param angle double
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_1_3_gl_rotated(void* self, double angle, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPushMatrix)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_push_matrix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPopMatrix)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_pop_matrix(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glOrtho)
///
/// @param self QOpenGLFunctions_1_3*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
void q_openglfunctions_1_3_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultMatrixd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m double*
void q_openglfunctions_1_3_gl_mult_matrixd(void* self, double* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultMatrixf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m float*
void q_openglfunctions_1_3_gl_mult_matrixf(void* self, float* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMatrixMode)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_matrix_mode(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadMatrixd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m double*
void q_openglfunctions_1_3_gl_load_matrixd(void* self, double* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadMatrixf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m float*
void q_openglfunctions_1_3_gl_load_matrixf(void* self, float* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadIdentity)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_load_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFrustum)
///
/// @param self QOpenGLFunctions_1_3*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
void q_openglfunctions_1_3_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIsList)
///
/// @param self QOpenGLFunctions_1_3*
/// @param list uint32_t
uint8_t q_openglfunctions_1_3_gl_is_list(void* self, uint32_t list);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexGeniv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexGenfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexGendv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_1_3_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexEnviv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetTexEnvfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetPolygonStipple)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint8_t*
void q_openglfunctions_1_3_gl_get_polygon_stipple(void* self, uint8_t* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetPixelMapusv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param values uint16_t*
void q_openglfunctions_1_3_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetPixelMapuiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param values uint32_t*
void q_openglfunctions_1_3_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetPixelMapfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param values float*
void q_openglfunctions_1_3_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMaterialiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMaterialfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMapiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param query uint32_t
/// @param v int32_t*
void q_openglfunctions_1_3_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMapfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param query uint32_t
/// @param v float*
void q_openglfunctions_1_3_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMapdv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param query uint32_t
/// @param v double*
void q_openglfunctions_1_3_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetLightiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetLightfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetClipPlane)
///
/// @param self QOpenGLFunctions_1_3*
/// @param plane uint32_t
/// @param equation double*
void q_openglfunctions_1_3_gl_get_clip_plane(void* self, uint32_t plane, double* equation);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDrawPixels)
///
/// @param self QOpenGLFunctions_1_3*
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_1_3_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyPixels)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param type uint32_t
void q_openglfunctions_1_3_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelMapusv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint16_t*
void q_openglfunctions_1_3_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelMapuiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint32_t*
void q_openglfunctions_1_3_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelMapfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values float*
void q_openglfunctions_1_3_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelTransferi)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_pixel_transferi(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelTransferf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_pixel_transferf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPixelZoom)
///
/// @param self QOpenGLFunctions_1_3*
/// @param xfactor float
/// @param yfactor float
void q_openglfunctions_1_3_gl_pixel_zoom(void* self, float xfactor, float yfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glAlphaFunc)
///
/// @param self QOpenGLFunctions_1_3*
/// @param func uint32_t
/// @param ref float
void q_openglfunctions_1_3_gl_alpha_func(void* self, uint32_t func, float ref);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalPoint2)
///
/// @param self QOpenGLFunctions_1_3*
/// @param i int32_t
/// @param j int32_t
void q_openglfunctions_1_3_gl_eval_point2(void* self, int32_t i, int32_t j);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalMesh2)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
/// @param j1 int32_t
/// @param j2 int32_t
void q_openglfunctions_1_3_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalPoint1)
///
/// @param self QOpenGLFunctions_1_3*
/// @param i int32_t
void q_openglfunctions_1_3_gl_eval_point1(void* self, int32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalMesh1)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
void q_openglfunctions_1_3_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord2fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u float*
void q_openglfunctions_1_3_gl_eval_coord2fv(void* self, float* u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u float
/// @param v float
void q_openglfunctions_1_3_gl_eval_coord2f(void* self, float u, float v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord2dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u double*
void q_openglfunctions_1_3_gl_eval_coord2dv(void* self, double* u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u double
/// @param v double
void q_openglfunctions_1_3_gl_eval_coord2d(void* self, double u, double v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord1fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u float*
void q_openglfunctions_1_3_gl_eval_coord1fv(void* self, float* u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord1f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u float
void q_openglfunctions_1_3_gl_eval_coord1f(void* self, float u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord1dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u double*
void q_openglfunctions_1_3_gl_eval_coord1dv(void* self, double* u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEvalCoord1d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param u double
void q_openglfunctions_1_3_gl_eval_coord1d(void* self, double u);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMapGrid2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
/// @param vn int32_t
/// @param v1 float
/// @param v2 float
void q_openglfunctions_1_3_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMapGrid2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
/// @param vn int32_t
/// @param v1 double
/// @param v2 double
void q_openglfunctions_1_3_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMapGrid1f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
void q_openglfunctions_1_3_gl_map_grid1f(void* self, int32_t un, float u1, float u2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMapGrid1d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
void q_openglfunctions_1_3_gl_map_grid1d(void* self, int32_t un, double u1, double u2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMap2f)
///
/// @param self QOpenGLFunctions_1_3*
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
void q_openglfunctions_1_3_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMap2d)
///
/// @param self QOpenGLFunctions_1_3*
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
void q_openglfunctions_1_3_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMap1f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param u1 float
/// @param u2 float
/// @param stride int32_t
/// @param order int32_t
/// @param points float*
void q_openglfunctions_1_3_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMap1d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param u1 double
/// @param u2 double
/// @param stride int32_t
/// @param order int32_t
/// @param points double*
void q_openglfunctions_1_3_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPushAttrib)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_push_attrib(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPopAttrib)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_pop_attrib(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glAccum)
///
/// @param self QOpenGLFunctions_1_3*
/// @param op uint32_t
/// @param value float
void q_openglfunctions_1_3_gl_accum(void* self, uint32_t op, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexMask)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_index_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClearIndex)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c float
void q_openglfunctions_1_3_gl_clear_index(void* self, float c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClearAccum)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_1_3_gl_clear_accum(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPushName)
///
/// @param self QOpenGLFunctions_1_3*
/// @param name uint32_t
void q_openglfunctions_1_3_gl_push_name(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPopName)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_pop_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPassThrough)
///
/// @param self QOpenGLFunctions_1_3*
/// @param token float
void q_openglfunctions_1_3_gl_pass_through(void* self, float token);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadName)
///
/// @param self QOpenGLFunctions_1_3*
/// @param name uint32_t
void q_openglfunctions_1_3_gl_load_name(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glInitNames)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_init_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRenderMode)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
int32_t q_openglfunctions_1_3_gl_render_mode(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glSelectBuffer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size int32_t
/// @param buffer uint32_t*
void q_openglfunctions_1_3_gl_select_buffer(void* self, int32_t size, uint32_t* buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFeedbackBuffer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size int32_t
/// @param type uint32_t
/// @param buffer float*
void q_openglfunctions_1_3_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGeniv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGeni)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGenfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGenf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGendv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_1_3_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexGend)
///
/// @param self QOpenGLFunctions_1_3*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param double
void q_openglfunctions_1_3_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexEnviv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexEnvi)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexEnvfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexEnvf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glShadeModel)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_shade_model(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPolygonStipple)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint8_t*
void q_openglfunctions_1_3_gl_polygon_stipple(void* self, uint8_t* mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMaterialiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMateriali)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMaterialfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMaterialf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_materialf(void* self, uint32_t face, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLineStipple)
///
/// @param self QOpenGLFunctions_1_3*
/// @param factor int32_t
/// @param pattern uint16_t
void q_openglfunctions_1_3_gl_line_stipple(void* self, int32_t factor, uint16_t pattern);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightModeliv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_light_modeliv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightModeli)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_light_modeli(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightModelfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_light_modelfv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightModelf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_light_modelf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLighti)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLightf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_lightf(void* self, uint32_t light, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFogiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_fogiv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFogi)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_1_3_gl_fogi(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFogfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_fogfv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glFogf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_1_3_gl_fogf(void* self, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorMaterial)
///
/// @param self QOpenGLFunctions_1_3*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_color_material(void* self, uint32_t face, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClipPlane)
///
/// @param self QOpenGLFunctions_1_3*
/// @param plane uint32_t
/// @param equation double*
void q_openglfunctions_1_3_gl_clip_plane(void* self, uint32_t plane, double* equation);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_vertex4sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_1_3_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_vertex4iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_1_3_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_vertex4fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_1_3_gl_vertex4f(void* self, float x, float y, float z, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_vertex4dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex4d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_1_3_gl_vertex4d(void* self, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_vertex3sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_1_3_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_vertex3iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_1_3_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_vertex3fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_1_3_gl_vertex3f(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_vertex3dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_1_3_gl_vertex3d(void* self, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_vertex2sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_1_3_gl_vertex2s(void* self, int16_t x, int16_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_vertex2iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_1_3_gl_vertex2i(void* self, int32_t x, int32_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_vertex2fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
void q_openglfunctions_1_3_gl_vertex2f(void* self, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_vertex2dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertex2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
void q_openglfunctions_1_3_gl_vertex2d(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_tex_coord4sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
/// @param q int16_t
void q_openglfunctions_1_3_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_tex_coord4iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
/// @param q int32_t
void q_openglfunctions_1_3_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_tex_coord4fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s float
/// @param t float
/// @param r float
/// @param q float
void q_openglfunctions_1_3_gl_tex_coord4f(void* self, float s, float t, float r, float q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_tex_coord4dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord4d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s double
/// @param t double
/// @param r double
/// @param q double
void q_openglfunctions_1_3_gl_tex_coord4d(void* self, double s, double t, double r, double q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_tex_coord3sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
void q_openglfunctions_1_3_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_tex_coord3iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
void q_openglfunctions_1_3_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_tex_coord3fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s float
/// @param t float
/// @param r float
void q_openglfunctions_1_3_gl_tex_coord3f(void* self, float s, float t, float r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_tex_coord3dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s double
/// @param t double
/// @param r double
void q_openglfunctions_1_3_gl_tex_coord3d(void* self, double s, double t, double r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_tex_coord2sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int16_t
/// @param t int16_t
void q_openglfunctions_1_3_gl_tex_coord2s(void* self, int16_t s, int16_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_tex_coord2iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int32_t
/// @param t int32_t
void q_openglfunctions_1_3_gl_tex_coord2i(void* self, int32_t s, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_tex_coord2fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s float
/// @param t float
void q_openglfunctions_1_3_gl_tex_coord2f(void* self, float s, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_tex_coord2dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s double
/// @param t double
void q_openglfunctions_1_3_gl_tex_coord2d(void* self, double s, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_tex_coord1sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int16_t
void q_openglfunctions_1_3_gl_tex_coord1s(void* self, int16_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_tex_coord1iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s int32_t
void q_openglfunctions_1_3_gl_tex_coord1i(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_tex_coord1fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s float
void q_openglfunctions_1_3_gl_tex_coord1f(void* self, float s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_tex_coord1dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoord1d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param s double
void q_openglfunctions_1_3_gl_tex_coord1d(void* self, double s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectsv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v1 int16_t*
/// @param v2 int16_t*
void q_openglfunctions_1_3_gl_rectsv(void* self, int16_t* v1, int16_t* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRects)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x1 int16_t
/// @param y1 int16_t
/// @param x2 int16_t
/// @param y2 int16_t
void q_openglfunctions_1_3_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v1 int32_t*
/// @param v2 int32_t*
void q_openglfunctions_1_3_gl_rectiv(void* self, int32_t* v1, int32_t* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRecti)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x1 int32_t
/// @param y1 int32_t
/// @param x2 int32_t
/// @param y2 int32_t
void q_openglfunctions_1_3_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v1 float*
/// @param v2 float*
void q_openglfunctions_1_3_gl_rectfv(void* self, float* v1, float* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x1 float
/// @param y1 float
/// @param x2 float
/// @param y2 float
void q_openglfunctions_1_3_gl_rectf(void* self, float x1, float y1, float x2, float y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectdv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v1 double*
/// @param v2 double*
void q_openglfunctions_1_3_gl_rectdv(void* self, double* v1, double* v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRectd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void q_openglfunctions_1_3_gl_rectd(void* self, double x1, double y1, double x2, double y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_raster_pos4sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_1_3_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_raster_pos4iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_1_3_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_raster_pos4fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_1_3_gl_raster_pos4f(void* self, float x, float y, float z, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_raster_pos4dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos4d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_1_3_gl_raster_pos4d(void* self, double x, double y, double z, double w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_raster_pos3sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_1_3_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_raster_pos3iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_1_3_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_raster_pos3fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_1_3_gl_raster_pos3f(void* self, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_raster_pos3dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_1_3_gl_raster_pos3d(void* self, double x, double y, double z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_raster_pos2sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_1_3_gl_raster_pos2s(void* self, int16_t x, int16_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_raster_pos2iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_1_3_gl_raster_pos2i(void* self, int32_t x, int32_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_raster_pos2fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x float
/// @param y float
void q_openglfunctions_1_3_gl_raster_pos2f(void* self, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_raster_pos2dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glRasterPos2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param x double
/// @param y double
void q_openglfunctions_1_3_gl_raster_pos2d(void* self, double x, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_normal3sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nx int16_t
/// @param ny int16_t
/// @param nz int16_t
void q_openglfunctions_1_3_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_normal3iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nx int32_t
/// @param ny int32_t
/// @param nz int32_t
void q_openglfunctions_1_3_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_normal3fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nx float
/// @param ny float
/// @param nz float
void q_openglfunctions_1_3_gl_normal3f(void* self, float nx, float ny, float nz);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_normal3dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nx double
/// @param ny double
/// @param nz double
void q_openglfunctions_1_3_gl_normal3d(void* self, double nx, double ny, double nz);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3bv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v signed char*
void q_openglfunctions_1_3_gl_normal3bv(void* self, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormal3b)
///
/// @param self QOpenGLFunctions_1_3*
/// @param nx signed char
/// @param ny signed char
/// @param nz signed char
void q_openglfunctions_1_3_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexsv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c int16_t*
void q_openglfunctions_1_3_gl_indexsv(void* self, int16_t* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexs)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c int16_t
void q_openglfunctions_1_3_gl_indexs(void* self, int16_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c int32_t*
void q_openglfunctions_1_3_gl_indexiv(void* self, int32_t* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexi)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c int32_t
void q_openglfunctions_1_3_gl_indexi(void* self, int32_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c float*
void q_openglfunctions_1_3_gl_indexfv(void* self, float* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c float
void q_openglfunctions_1_3_gl_indexf(void* self, float c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexdv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c double*
void q_openglfunctions_1_3_gl_indexdv(void* self, double* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param c double
void q_openglfunctions_1_3_gl_indexd(void* self, double c);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEnd)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEdgeFlagv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param flag uint8_t*
void q_openglfunctions_1_3_gl_edge_flagv(void* self, uint8_t* flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEdgeFlag)
///
/// @param self QOpenGLFunctions_1_3*
/// @param flag uint8_t
void q_openglfunctions_1_3_gl_edge_flag(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4usv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint16_t*
void q_openglfunctions_1_3_gl_color4usv(void* self, uint16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4us)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
/// @param alpha uint16_t
void q_openglfunctions_1_3_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4uiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint32_t*
void q_openglfunctions_1_3_gl_color4uiv(void* self, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4ui)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
/// @param alpha uint32_t
void q_openglfunctions_1_3_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4ubv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint8_t*
void q_openglfunctions_1_3_gl_color4ubv(void* self, uint8_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4ub)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_1_3_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_color4sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
/// @param alpha int16_t
void q_openglfunctions_1_3_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_color4iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
/// @param alpha int32_t
void q_openglfunctions_1_3_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_color4fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_1_3_gl_color4f(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_color4dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red double
/// @param green double
/// @param blue double
/// @param alpha double
void q_openglfunctions_1_3_gl_color4d(void* self, double red, double green, double blue, double alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4bv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v signed char*
void q_openglfunctions_1_3_gl_color4bv(void* self, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor4b)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
/// @param alpha signed char
void q_openglfunctions_1_3_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3usv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint16_t*
void q_openglfunctions_1_3_gl_color3usv(void* self, uint16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3us)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
void q_openglfunctions_1_3_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3uiv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint32_t*
void q_openglfunctions_1_3_gl_color3uiv(void* self, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3ui)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
void q_openglfunctions_1_3_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3ubv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v uint8_t*
void q_openglfunctions_1_3_gl_color3ubv(void* self, uint8_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3ub)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
void q_openglfunctions_1_3_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int16_t*
void q_openglfunctions_1_3_gl_color3sv(void* self, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
void q_openglfunctions_1_3_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v int32_t*
void q_openglfunctions_1_3_gl_color3iv(void* self, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
void q_openglfunctions_1_3_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v float*
void q_openglfunctions_1_3_gl_color3fv(void* self, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red float
/// @param green float
/// @param blue float
void q_openglfunctions_1_3_gl_color3f(void* self, float red, float green, float blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v double*
void q_openglfunctions_1_3_gl_color3dv(void* self, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red double
/// @param green double
/// @param blue double
void q_openglfunctions_1_3_gl_color3d(void* self, double red, double green, double blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3bv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param v signed char*
void q_openglfunctions_1_3_gl_color3bv(void* self, signed char* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColor3b)
///
/// @param self QOpenGLFunctions_1_3*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
void q_openglfunctions_1_3_gl_color3b(void* self, signed char red, signed char green, signed char blue);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBitmap)
///
/// @param self QOpenGLFunctions_1_3*
/// @param width int32_t
/// @param height int32_t
/// @param xorig float
/// @param yorig float
/// @param xmove float
/// @param ymove float
/// @param bitmap uint8_t*
void q_openglfunctions_1_3_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glBegin)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_begin(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glListBase)
///
/// @param self QOpenGLFunctions_1_3*
/// @param base uint32_t
void q_openglfunctions_1_3_gl_list_base(void* self, uint32_t base);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGenLists)
///
/// @param self QOpenGLFunctions_1_3*
/// @param range int32_t
uint32_t q_openglfunctions_1_3_gl_gen_lists(void* self, int32_t range);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDeleteLists)
///
/// @param self QOpenGLFunctions_1_3*
/// @param list uint32_t
/// @param range int32_t
void q_openglfunctions_1_3_gl_delete_lists(void* self, uint32_t list, int32_t range);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCallLists)
///
/// @param self QOpenGLFunctions_1_3*
/// @param n int32_t
/// @param type uint32_t
/// @param lists void*
void q_openglfunctions_1_3_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCallList)
///
/// @param self QOpenGLFunctions_1_3*
/// @param list uint32_t
void q_openglfunctions_1_3_gl_call_list(void* self, uint32_t list);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEndList)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_end_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNewList)
///
/// @param self QOpenGLFunctions_1_3*
/// @param list uint32_t
/// @param mode uint32_t
void q_openglfunctions_1_3_gl_new_list(void* self, uint32_t list, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPushClientAttrib)
///
/// @param self QOpenGLFunctions_1_3*
/// @param mask uint32_t
void q_openglfunctions_1_3_gl_push_client_attrib(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPopClientAttrib)
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_gl_pop_client_attrib(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glPrioritizeTextures)
///
/// @param self QOpenGLFunctions_1_3*
/// @param n int32_t
/// @param textures uint32_t*
/// @param priorities float*
void q_openglfunctions_1_3_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glAreTexturesResident)
///
/// @param self QOpenGLFunctions_1_3*
/// @param n int32_t
/// @param textures uint32_t*
/// @param residences uint8_t*
uint8_t q_openglfunctions_1_3_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glVertexPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glTexCoordPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glNormalPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glInterleavedArrays)
///
/// @param self QOpenGLFunctions_1_3*
/// @param format uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glIndexPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEnableClientState)
///
/// @param self QOpenGLFunctions_1_3*
/// @param array uint32_t
void q_openglfunctions_1_3_gl_enable_client_state(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glEdgeFlagPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glDisableClientState)
///
/// @param self QOpenGLFunctions_1_3*
/// @param array uint32_t
void q_openglfunctions_1_3_gl_disable_client_state(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorPointer)
///
/// @param self QOpenGLFunctions_1_3*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_1_3_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glArrayElement)
///
/// @param self QOpenGLFunctions_1_3*
/// @param i int32_t
void q_openglfunctions_1_3_gl_array_element(void* self, int32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glResetMinmax)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
void q_openglfunctions_1_3_gl_reset_minmax(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glResetHistogram)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
void q_openglfunctions_1_3_gl_reset_histogram(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMinmax)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param sink uint8_t
void q_openglfunctions_1_3_gl_minmax(void* self, uint32_t target, uint32_t internalformat, uint8_t sink);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glHistogram)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param width int32_t
/// @param internalformat uint32_t
/// @param sink uint8_t
void q_openglfunctions_1_3_gl_histogram(void* self, uint32_t target, int32_t width, uint32_t internalformat, uint8_t sink);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMinmaxParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_minmax_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMinmaxParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_minmax_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetMinmax)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param reset uint8_t
/// @param format uint32_t
/// @param type uint32_t
/// @param values void*
void q_openglfunctions_1_3_gl_get_minmax(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetHistogramParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_histogram_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetHistogramParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_histogram_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetHistogram)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param reset uint8_t
/// @param format uint32_t
/// @param type uint32_t
/// @param values void*
void q_openglfunctions_1_3_gl_get_histogram(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glSeparableFilter2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param row void*
/// @param column void*
void q_openglfunctions_1_3_gl_separable_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* row, void* column);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetSeparableFilter)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param row void*
/// @param column void*
/// @param span void*
void q_openglfunctions_1_3_gl_get_separable_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* row, void* column, void* span);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetConvolutionParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetConvolutionParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetConvolutionFilter)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_1_3_gl_get_convolution_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyConvolutionFilter2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_1_3_gl_copy_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyConvolutionFilter1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_1_3_gl_copy_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionParameteri)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t
void q_openglfunctions_1_3_gl_convolution_parameteri(void* self, uint32_t target, uint32_t pname, int32_t params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionParameterf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float
void q_openglfunctions_1_3_gl_convolution_parameterf(void* self, uint32_t target, uint32_t pname, float params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionFilter2D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_1_3_gl_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glConvolutionFilter1D)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_1_3_gl_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* image);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyColorSubTable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param start int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_1_3_gl_copy_color_sub_table(void* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorSubTable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param start int32_t
/// @param count int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_1_3_gl_color_sub_table(void* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t type, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetColorTableParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_get_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetColorTableParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_get_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glGetColorTable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param table void*
void q_openglfunctions_1_3_gl_get_color_table(void* self, uint32_t target, uint32_t format, uint32_t type, void* table);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glCopyColorTable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_1_3_gl_copy_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorTableParameteriv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_1_3_gl_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorTableParameterfv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_1_3_gl_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glColorTable)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param table void*
void q_openglfunctions_1_3_gl_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* table);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultTransposeMatrixd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m double*
void q_openglfunctions_1_3_gl_mult_transpose_matrixd(void* self, double* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultTransposeMatrixf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m float*
void q_openglfunctions_1_3_gl_mult_transpose_matrixf(void* self, float* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadTransposeMatrixd)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m double*
void q_openglfunctions_1_3_gl_load_transpose_matrixd(void* self, double* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glLoadTransposeMatrixf)
///
/// @param self QOpenGLFunctions_1_3*
/// @param m float*
void q_openglfunctions_1_3_gl_load_transpose_matrixf(void* self, float* m);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_1_3_gl_multi_tex_coord4sv(void* self, uint32_t target, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
/// @param q int16_t
void q_openglfunctions_1_3_gl_multi_tex_coord4s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_1_3_gl_multi_tex_coord4iv(void* self, uint32_t target, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
/// @param q int32_t
void q_openglfunctions_1_3_gl_multi_tex_coord4i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_1_3_gl_multi_tex_coord4fv(void* self, uint32_t target, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s float
/// @param t float
/// @param r float
/// @param q float
void q_openglfunctions_1_3_gl_multi_tex_coord4f(void* self, uint32_t target, float s, float t, float r, float q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_1_3_gl_multi_tex_coord4dv(void* self, uint32_t target, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord4d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s double
/// @param t double
/// @param r double
/// @param q double
void q_openglfunctions_1_3_gl_multi_tex_coord4d(void* self, uint32_t target, double s, double t, double r, double q);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_1_3_gl_multi_tex_coord3sv(void* self, uint32_t target, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
void q_openglfunctions_1_3_gl_multi_tex_coord3s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_1_3_gl_multi_tex_coord3iv(void* self, uint32_t target, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
void q_openglfunctions_1_3_gl_multi_tex_coord3i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_1_3_gl_multi_tex_coord3fv(void* self, uint32_t target, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s float
/// @param t float
/// @param r float
void q_openglfunctions_1_3_gl_multi_tex_coord3f(void* self, uint32_t target, float s, float t, float r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_1_3_gl_multi_tex_coord3dv(void* self, uint32_t target, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord3d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s double
/// @param t double
/// @param r double
void q_openglfunctions_1_3_gl_multi_tex_coord3d(void* self, uint32_t target, double s, double t, double r);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_1_3_gl_multi_tex_coord2sv(void* self, uint32_t target, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
void q_openglfunctions_1_3_gl_multi_tex_coord2s(void* self, uint32_t target, int16_t s, int16_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_1_3_gl_multi_tex_coord2iv(void* self, uint32_t target, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
void q_openglfunctions_1_3_gl_multi_tex_coord2i(void* self, uint32_t target, int32_t s, int32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_1_3_gl_multi_tex_coord2fv(void* self, uint32_t target, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s float
/// @param t float
void q_openglfunctions_1_3_gl_multi_tex_coord2f(void* self, uint32_t target, float s, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_1_3_gl_multi_tex_coord2dv(void* self, uint32_t target, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord2d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s double
/// @param t double
void q_openglfunctions_1_3_gl_multi_tex_coord2d(void* self, uint32_t target, double s, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1sv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_1_3_gl_multi_tex_coord1sv(void* self, uint32_t target, int16_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1s)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int16_t
void q_openglfunctions_1_3_gl_multi_tex_coord1s(void* self, uint32_t target, int16_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1iv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_1_3_gl_multi_tex_coord1iv(void* self, uint32_t target, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1i)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s int32_t
void q_openglfunctions_1_3_gl_multi_tex_coord1i(void* self, uint32_t target, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1fv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_1_3_gl_multi_tex_coord1fv(void* self, uint32_t target, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1f)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s float
void q_openglfunctions_1_3_gl_multi_tex_coord1f(void* self, uint32_t target, float s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1dv)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_1_3_gl_multi_tex_coord1dv(void* self, uint32_t target, double* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glMultiTexCoord1d)
///
/// @param self QOpenGLFunctions_1_3*
/// @param target uint32_t
/// @param s double
void q_openglfunctions_1_3_gl_multi_tex_coord1d(void* self, uint32_t target, double s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#glClientActiveTexture)
///
/// @param self QOpenGLFunctions_1_3*
/// @param texture uint32_t
void q_openglfunctions_1_3_gl_client_active_texture(void* self, uint32_t texture);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
bool q_openglfunctions_1_3_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
bool q_openglfunctions_1_3_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
/// @param callback bool func()
void q_openglfunctions_1_3_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
/// @param context QOpenGLContext*
void q_openglfunctions_1_3_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
/// @param context QOpenGLContext*
void q_openglfunctions_1_3_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
/// @param callback void func(QOpenGLFunctions_1_3* self, QOpenGLContext* context)
void q_openglfunctions_1_3_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
QOpenGLContext* q_openglfunctions_1_3_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
QOpenGLContext* q_openglfunctions_1_3_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_1_3*
/// @param callback QOpenGLContext* func()
void q_openglfunctions_1_3_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions-1-3.html#dtor.QOpenGLFunctions_1_3)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_3*
void q_openglfunctions_1_3_delete(void* self);

#endif
