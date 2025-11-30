#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_4_3_COMPATIBILITY_H
#define SRC_OPENGL_QT6C_LIBQOPENGLFUNCTIONS_4_3_COMPATIBILITY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html

/// q_openglfunctions_4_3_compatibility_new constructs a new QOpenGLFunctions_4_3_Compatibility object.
///
QOpenGLFunctions_4_3_Compatibility* q_openglfunctions_4_3_compatibility_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
bool q_openglfunctions_4_3_compatibility_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#initializeOpenGLFunctions)
///
/// Allows for overriding the related default method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param callback bool func()
void q_openglfunctions_4_3_compatibility_on_initialize_open_g_l_functions(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#initializeOpenGLFunctions)
///
/// Base class method implementation
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
bool q_openglfunctions_4_3_compatibility_qbase_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glViewport)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthRange)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nearVal double
/// @param farVal double
void q_openglfunctions_4_3_compatibility_gl_depth_range(void* self, double nearVal, double farVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsEnabled)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param cap uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_enabled(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexImage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetString)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param name uint32_t
const uint8_t* q_openglfunctions_4_3_compatibility_gl_get_string(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFloatv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetDoublev)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_get_doublev(void* self, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglfunctions_4_3_compatibility_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glReadPixels)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glReadBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_read_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelStorei)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelStoref)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_pixel_storef(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthFunc)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param func uint32_t
void q_openglfunctions_4_3_compatibility_gl_depth_func(void* self, uint32_t func);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilOp)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilFunc)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLogicOp)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param opcode uint32_t
void q_openglfunctions_4_3_compatibility_gl_logic_op(void* self, uint32_t opcode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendFunc)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFlush)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_flush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFinish)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_finish(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEnable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param cap uint32_t
void q_openglfunctions_4_3_compatibility_gl_enable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDisable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param cap uint32_t
void q_openglfunctions_4_3_compatibility_gl_disable(void* self, uint32_t cap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthMask)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param flag uint8_t
void q_openglfunctions_4_3_compatibility_gl_depth_mask(void* self, uint8_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorMask)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_4_3_compatibility_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilMask)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_mask(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearDepth)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param depth double
void q_openglfunctions_4_3_compatibility_gl_clear_depth(void* self, double depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearStencil)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int32_t
void q_openglfunctions_4_3_compatibility_gl_clear_stencil(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearColor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_3_compatibility_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClear)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_clear(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_buffer(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameterf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScissor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPolygonMode)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_polygon_mode(void* self, uint32_t face, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPointSize)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size float
void q_openglfunctions_4_3_compatibility_gl_point_size(void* self, float size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLineWidth)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param width float
void q_openglfunctions_4_3_compatibility_gl_line_width(void* self, float width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glHint)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFrontFace)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_front_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCullFace)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_cull_face(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c uint8_t*
void q_openglfunctions_4_3_compatibility_gl_indexubv(void* self, uint8_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexub)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c uint8_t
void q_openglfunctions_4_3_compatibility_gl_indexub(void* self, uint8_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenTextures)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyTexImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param border int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param factor float
/// @param units float
void q_openglfunctions_4_3_compatibility_gl_polygon_offset(void* self, float factor, float units);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElements)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_3_compatibility_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawArrays)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexImage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawRangeElements)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_4_3_compatibility_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendEquation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_equation(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendColor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_3_compatibility_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetCompressedTexImage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param img void*
void q_openglfunctions_4_3_compatibility_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexSubImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param width int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexImage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompressedTexImage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_4_3_compatibility_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glActiveTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
void q_openglfunctions_4_3_compatibility_gl_active_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPointParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPointParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_point_parameteri(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPointParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_point_parameterfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPointParameterf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_point_parameterf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiDrawArrays)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param first int32_t*
/// @param count int32_t*
/// @param drawcount int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sfactorRGB uint32_t
/// @param dfactorRGB uint32_t
/// @param sfactorAlpha uint32_t
/// @param dfactorAlpha uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUnmapBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_unmap_buffer(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param access uint32_t
void* q_openglfunctions_4_3_compatibility_gl_map_buffer(void* self, uint32_t target, uint32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetBufferSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBufferSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBufferData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param size intptr_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_4_3_compatibility_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_buffer(void* self, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenBuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryObjectiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEndQuery)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
void q_openglfunctions_4_3_compatibility_gl_end_query(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBeginQuery)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_3_compatibility_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsQuery)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_query(void* self, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteQueries)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenQueries)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glValidateProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_validate_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_4_3_compatibility_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_4_3_compatibility_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_4_3_compatibility_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_4_3_compatibility_gl_uniform1i(void* self, int32_t location, int32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_4_3_compatibility_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_3_compatibility_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_4_3_compatibility_gl_uniform2f(void* self, int32_t location, float v0, float v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_4_3_compatibility_gl_uniform1f(void* self, int32_t location, float v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUseProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_use_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLinkProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_link_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_uniform_location(void* self, uint32_t program, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglfunctions_4_3_compatibility_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_3_compatibility_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_3_compatibility_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_attrib_location(void* self, uint32_t program, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param maxCount int32_t
/// @param count int32_t*
/// @param obj uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDetachShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_3_compatibility_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
void q_openglfunctions_4_3_compatibility_gl_delete_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_delete_program(void* self, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCreateShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
uint32_t q_openglfunctions_4_3_compatibility_gl_create_shader(void* self, uint32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCreateProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
uint32_t q_openglfunctions_4_3_compatibility_gl_create_program(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCompileShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shader uint32_t
void q_openglfunctions_4_3_compatibility_gl_compile_shader(void* self, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glAttachShader)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_4_3_compatibility_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param sfail uint32_t
/// @param dpfail uint32_t
/// @param dppass uint32_t
void q_openglfunctions_4_3_compatibility_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsVertexArray)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param array uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_vertex_array(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenVertexArrays)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteVertexArrays)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindVertexArray)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param array uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_vertex_array(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_4_3_compatibility_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapBufferRange)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param offset intptr_t
/// @param length intptr_t
/// @param access uint32_t
void* q_openglfunctions_4_3_compatibility_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlitFramebuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
void q_openglfunctions_4_3_compatibility_gl_generate_mipmap(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferTexture3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param zoffset int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferTexture1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param framebuffer uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param renderbuffer uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetStringi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param name uint32_t
/// @param index uint32_t
const uint8_t* q_openglfunctions_4_3_compatibility_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferfi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
void q_openglfunctions_4_3_compatibility_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameterIuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexParameterIiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_4_3_compatibility_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_4_3_compatibility_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_4_3_compatibility_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_4_3_compatibility_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFragDataLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_frag_data_location(void* self, uint32_t program, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindFragDataLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param color uint32_t
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribIPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEndConditionalRender)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_end_conditional_render(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBeginConditionalRender)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClampColor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param clamp uint32_t
void q_openglfunctions_4_3_compatibility_gl_clamp_color(void* self, uint32_t target, uint32_t clamp);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindBufferBase)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindBufferRange)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_3_compatibility_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEndTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_end_transform_feedback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBeginTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param primitiveMode uint32_t
void q_openglfunctions_4_3_compatibility_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsEnabledi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDisablei)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEnablei)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetIntegeri_v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetBooleani_v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
void q_openglfunctions_4_3_compatibility_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorMaski)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
void q_openglfunctions_4_3_compatibility_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyBufferSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset intptr_t
/// @param writeOffset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_3_compatibility_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformBlockBinding)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
void q_openglfunctions_4_3_compatibility_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
void q_openglfunctions_4_3_compatibility_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformBlockName char*
uint32_t q_openglfunctions_4_3_compatibility_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveUniformName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformName char*
void q_openglfunctions_4_3_compatibility_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPrimitiveRestartIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_primitive_restart_index(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsInstanced)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawArraysInstanced)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSampleMaski)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_sample_maski(void* self, uint32_t index, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMultisamplefv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param index uint32_t
/// @param val float*
void q_openglfunctions_4_3_compatibility_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexImage3DMultisample)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_3_compatibility_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexImage2DMultisample)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_3_compatibility_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetInteger64v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_3_compatibility_gl_get_integer64v(void* self, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProvokingVertex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_provoking_vertex(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsInstancedBaseVertex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawRangeElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsBaseVertex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetBufferParameteri64v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_3_compatibility_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetInteger64i_v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int64_t*
void q_openglfunctions_4_3_compatibility_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribP1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColorP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color_p3uiv(void* self, uint32_t type, uint32_t* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColorP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color_p3ui(void* self, uint32_t type, uint32_t color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorP4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t*
void q_openglfunctions_4_3_compatibility_gl_color_p4uiv(void* self, uint32_t type, uint32_t* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorP4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t
void q_openglfunctions_4_3_compatibility_gl_color_p4ui(void* self, uint32_t type, uint32_t color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t*
void q_openglfunctions_4_3_compatibility_gl_color_p3uiv(void* self, uint32_t type, uint32_t* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param color uint32_t
void q_openglfunctions_4_3_compatibility_gl_color_p3ui(void* self, uint32_t type, uint32_t color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormalP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_normal_p3uiv(void* self, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormalP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_normal_p3ui(void* self, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p4uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p4ui(void* self, uint32_t texture, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p3uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p3ui(void* self, uint32_t texture, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p2uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p2ui(void* self, uint32_t texture, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p1uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoordP1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord_p1ui(void* self, uint32_t texture, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p4uiv(void* self, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p4ui(void* self, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p3uiv(void* self, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p3ui(void* self, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p2uiv(void* self, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p2ui(void* self, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p1uiv(void* self, uint32_t type, uint32_t* coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordP1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param coords uint32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord_p1ui(void* self, uint32_t type, uint32_t coords);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_p4uiv(void* self, uint32_t type, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_p4ui(void* self, uint32_t type, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_p3uiv(void* self, uint32_t type, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_p3ui(void* self, uint32_t type, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_p2uiv(void* self, uint32_t type, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexP2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param value uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_p2ui(void* self, uint32_t type, uint32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryObjectui64v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint64_t*
void q_openglfunctions_4_3_compatibility_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryObjecti64v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglfunctions_4_3_compatibility_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glQueryCounter)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
/// @param target uint32_t
void q_openglfunctions_4_3_compatibility_gl_query_counter(void* self, uint32_t id, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameterIuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param uint32_t*
void q_openglfunctions_4_3_compatibility_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameterIiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_3_compatibility_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float*
void q_openglfunctions_4_3_compatibility_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameterf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglfunctions_4_3_compatibility_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSamplerParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindSampler)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param unit uint32_t
/// @param sampler uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsSampler)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param sampler uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_sampler(void* self, uint32_t sampler);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteSamplers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenSamplers)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFragDataIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_frag_data_index(void* self, uint32_t program, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindFragDataLocationIndexed)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param colorNumber uint32_t
/// @param index uint32_t
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribDivisor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetQueryIndexediv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_query_indexediv(void* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEndQueryIndexed)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
void q_openglfunctions_4_3_compatibility_gl_end_query_indexed(void* self, uint32_t target, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBeginQueryIndexed)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param id uint32_t
void q_openglfunctions_4_3_compatibility_gl_begin_query_indexed(void* self, uint32_t target, uint32_t index, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawTransformFeedbackStream)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param id uint32_t
/// @param stream uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_transform_feedback_stream(void* self, uint32_t mode, uint32_t id, uint32_t stream);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param id uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_transform_feedback(void* self, uint32_t mode, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glResumeTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_resume_transform_feedback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPauseTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_pause_transform_feedback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param id uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_transform_feedback(void* self, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteTransformFeedbacks)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindTransformFeedback)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param id uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPatchParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param values float*
void q_openglfunctions_4_3_compatibility_gl_patch_parameterfv(void* self, uint32_t pname, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPatchParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param value int32_t
void q_openglfunctions_4_3_compatibility_gl_patch_parameteri(void* self, uint32_t pname, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramStageiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_program_stageiv(void* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformSubroutineuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shadertype uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_uniform_subroutineuiv(void* self, uint32_t shadertype, int32_t location, uint32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformSubroutinesuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shadertype uint32_t
/// @param count int32_t
/// @param indices uint32_t*
void q_openglfunctions_4_3_compatibility_gl_uniform_subroutinesuiv(void* self, uint32_t shadertype, int32_t count, uint32_t* indices);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveSubroutineName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_get_active_subroutine_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveSubroutineUniformName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_get_active_subroutine_uniform_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveSubroutineUniformiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param index uint32_t
/// @param pname uint32_t
/// @param values int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_active_subroutine_uniformiv(void* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSubroutineIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
uint32_t q_openglfunctions_4_3_compatibility_gl_get_subroutine_index(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSubroutineUniformLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param shadertype uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_subroutine_uniform_location(void* self, uint32_t program, uint32_t shadertype, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetUniformdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_get_uniformdv(void* self, uint32_t program, int32_t location, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4x3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4x2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3x4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3x2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2x4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2x3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniformMatrix2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform_matrix2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform4dv(void* self, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform3dv(void* self, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform2dv(void* self, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_uniform1dv(void* self, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_3_compatibility_gl_uniform4d(void* self, int32_t location, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_uniform3d(void* self, int32_t location, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_uniform2d(void* self, int32_t location, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUniform1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param location int32_t
/// @param x double
void q_openglfunctions_4_3_compatibility_gl_uniform1d(void* self, int32_t location, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsIndirect)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
void q_openglfunctions_4_3_compatibility_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawArraysIndirect)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param indirect void*
void q_openglfunctions_4_3_compatibility_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendFuncSeparatei)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buf uint32_t
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendFunci)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buf uint32_t
/// @param src uint32_t
/// @param dst uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendEquationSeparatei)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buf uint32_t
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBlendEquationi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buf uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMinSampleShading)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param value float
void q_openglfunctions_4_3_compatibility_gl_min_sample_shading(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetDoublei_v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param data double*
void q_openglfunctions_4_3_compatibility_gl_get_doublei_v(void* self, uint32_t target, uint32_t index, double* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFloati_v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param index uint32_t
/// @param data float*
void q_openglfunctions_4_3_compatibility_gl_get_floati_v(void* self, uint32_t target, uint32_t index, float* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthRangeIndexed)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param n double
/// @param f double
void q_openglfunctions_4_3_compatibility_gl_depth_range_indexed(void* self, uint32_t index, double n, double f);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthRangeArrayv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param first uint32_t
/// @param count int32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_depth_range_arrayv(void* self, uint32_t first, int32_t count, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScissorIndexedv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_scissor_indexedv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScissorIndexed)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param left int32_t
/// @param bottom int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_scissor_indexed(void* self, uint32_t index, int32_t left, int32_t bottom, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScissorArrayv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param first uint32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_scissor_arrayv(void* self, uint32_t first, int32_t count, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glViewportIndexedfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_viewport_indexedfv(void* self, uint32_t index, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glViewportIndexedf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param w float
/// @param h float
void q_openglfunctions_4_3_compatibility_gl_viewport_indexedf(void* self, uint32_t index, float x, float y, float w, float h);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glViewportArrayv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param first uint32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_viewport_arrayv(void* self, uint32_t first, int32_t count, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetVertexAttribLdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_get_vertex_attrib_ldv(void* self, uint32_t index, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribLPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l4dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l3dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l2dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l1dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l4d(void* self, uint32_t index, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l3d(void* self, uint32_t index, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l2d(void* self, uint32_t index, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribL1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l1d(void* self, uint32_t index, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramPipelineInfoLog)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglfunctions_4_3_compatibility_gl_get_program_pipeline_info_log(void* self, uint32_t pipeline, int32_t bufSize, int32_t* length, char* infoLog);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glValidateProgramPipeline)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
void q_openglfunctions_4_3_compatibility_gl_validate_program_pipeline(void* self, uint32_t pipeline);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4x3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4x3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3x4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3x4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4x2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4x2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2x4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2x4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3x2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3x2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2x3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2x3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4x3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3x4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4x2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2x4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3x2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2x3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2dv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniformMatrix2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform_matrix2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform4uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform4ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform4dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
/// @param v2 double
/// @param v3 double
void q_openglfunctions_4_3_compatibility_gl_program_uniform4d(void* self, uint32_t program, int32_t location, double v0, double v1, double v2, double v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform4fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglfunctions_4_3_compatibility_gl_program_uniform4f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform4iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform4i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform3uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform3ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform3dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
/// @param v2 double
void q_openglfunctions_4_3_compatibility_gl_program_uniform3d(void* self, uint32_t program, int32_t location, double v0, double v1, double v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform3fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_3_compatibility_gl_program_uniform3f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform3iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform3i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform2uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform2ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform2dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
/// @param v1 double
void q_openglfunctions_4_3_compatibility_gl_program_uniform2d(void* self, uint32_t program, int32_t location, double v0, double v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform2fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglfunctions_4_3_compatibility_gl_program_uniform2f(void* self, uint32_t program, int32_t location, float v0, float v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform2iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform2i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform1uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform1ui(void* self, uint32_t program, int32_t location, uint32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value double*
void q_openglfunctions_4_3_compatibility_gl_program_uniform1dv(void* self, uint32_t program, int32_t location, int32_t count, double* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 double
void q_openglfunctions_4_3_compatibility_gl_program_uniform1d(void* self, uint32_t program, int32_t location, double v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglfunctions_4_3_compatibility_gl_program_uniform1fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
void q_openglfunctions_4_3_compatibility_gl_program_uniform1f(void* self, uint32_t program, int32_t location, float v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglfunctions_4_3_compatibility_gl_program_uniform1iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramUniform1i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
void q_openglfunctions_4_3_compatibility_gl_program_uniform1i(void* self, uint32_t program, int32_t location, int32_t v0);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramPipelineiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_program_pipelineiv(void* self, uint32_t pipeline, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsProgramPipeline)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_program_pipeline(void* self, uint32_t pipeline);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenProgramPipelines)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglfunctions_4_3_compatibility_gl_gen_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteProgramPipelines)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglfunctions_4_3_compatibility_gl_delete_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindProgramPipeline)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_program_pipeline(void* self, uint32_t pipeline);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glActiveShaderProgram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_active_shader_program(void* self, uint32_t pipeline, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glUseProgramStages)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pipeline uint32_t
/// @param stages uint32_t
/// @param program uint32_t
void q_openglfunctions_4_3_compatibility_gl_use_program_stages(void* self, uint32_t pipeline, uint32_t stages, uint32_t program);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param pname uint32_t
/// @param value int32_t
void q_openglfunctions_4_3_compatibility_gl_program_parameteri(void* self, uint32_t program, uint32_t pname, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glProgramBinary)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param binaryFormat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglfunctions_4_3_compatibility_gl_program_binary(void* self, uint32_t program, uint32_t binaryFormat, void* binary, int32_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearDepthf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param dd float
void q_openglfunctions_4_3_compatibility_gl_clear_depthf(void* self, float dd);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDepthRangef)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n float
/// @param f float
void q_openglfunctions_4_3_compatibility_gl_depth_rangef(void* self, float n, float f);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetShaderPrecisionFormat)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param shadertype uint32_t
/// @param precisiontype uint32_t
/// @param range int32_t*
/// @param precision int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glShaderBinary)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param count int32_t
/// @param shaders uint32_t*
/// @param binaryformat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglfunctions_4_3_compatibility_gl_shader_binary(void* self, int32_t count, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glReleaseShaderCompiler)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_release_shader_compiler(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexStorage3D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_storage3_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexStorage2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_storage2_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexStorage1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_storage1_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMemoryBarrier)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param barriers uint32_t
void q_openglfunctions_4_3_compatibility_gl_memory_barrier(void* self, uint32_t barriers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindImageTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param unit uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layered uint8_t
/// @param layer int32_t
/// @param access uint32_t
/// @param format uint32_t
void q_openglfunctions_4_3_compatibility_gl_bind_image_texture(void* self, uint32_t unit, uint32_t texture, int32_t level, uint8_t layered, int32_t layer, uint32_t access, uint32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetActiveAtomicCounterBufferiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param bufferIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_active_atomic_counter_bufferiv(void* self, uint32_t program, uint32_t bufferIndex, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetInternalformativ)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param pname uint32_t
/// @param bufSize int32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_internalformativ(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawTransformFeedbackStreamInstanced)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param id uint32_t
/// @param stream uint32_t
/// @param instancecount int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_transform_feedback_stream_instanced(void* self, uint32_t mode, uint32_t id, uint32_t stream, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawTransformFeedbackInstanced)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param id uint32_t
/// @param instancecount int32_t
void q_openglfunctions_4_3_compatibility_gl_draw_transform_feedback_instanced(void* self, uint32_t mode, uint32_t id, int32_t instancecount);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsInstancedBaseVertexBaseInstance)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_elements_instanced_base_vertex_base_instance(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex, uint32_t baseinstance);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawElementsInstancedBaseInstance)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_elements_instanced_base_instance(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, uint32_t baseinstance);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawArraysInstancedBaseInstance)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
/// @param baseinstance uint32_t
void q_openglfunctions_4_3_compatibility_gl_draw_arrays_instanced_base_instance(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount, uint32_t baseinstance);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexStorage3DMultisample)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_3_compatibility_gl_tex_storage3_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexStorage2DMultisample)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglfunctions_4_3_compatibility_gl_tex_storage2_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexBufferRange)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param size intptr_t
void q_openglfunctions_4_3_compatibility_gl_tex_buffer_range(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer, intptr_t offset, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glShaderStorageBlockBinding)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param storageBlockIndex uint32_t
/// @param storageBlockBinding uint32_t
void q_openglfunctions_4_3_compatibility_gl_shader_storage_block_binding(void* self, uint32_t program, uint32_t storageBlockIndex, uint32_t storageBlockBinding);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramResourceLocationIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_program_resource_location_index(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramResourceLocation)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
int32_t q_openglfunctions_4_3_compatibility_gl_get_program_resource_location(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramResourceName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param index uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglfunctions_4_3_compatibility_gl_get_program_resource_name(void* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramResourceIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
uint32_t q_openglfunctions_4_3_compatibility_gl_get_program_resource_index(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetProgramInterfaceiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_program_interfaceiv(void* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiDrawElementsIndirect)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
/// @param drawcount int32_t
/// @param stride int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect, int32_t drawcount, int32_t stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiDrawArraysIndirect)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param indirect void*
/// @param drawcount int32_t
/// @param stride int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_draw_arrays_indirect(void* self, uint32_t mode, void* indirect, int32_t drawcount, int32_t stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInvalidateBufferData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
void q_openglfunctions_4_3_compatibility_gl_invalidate_buffer_data(void* self, uint32_t buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInvalidateBufferSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param length intptr_t
void q_openglfunctions_4_3_compatibility_gl_invalidate_buffer_sub_data(void* self, uint32_t buffer, intptr_t offset, intptr_t length);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInvalidateTexImage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_4_3_compatibility_gl_invalidate_tex_image(void* self, uint32_t texture, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInvalidateTexSubImage)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglfunctions_4_3_compatibility_gl_invalidate_tex_sub_image(void* self, uint32_t texture, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetInternalformati64v)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param pname uint32_t
/// @param bufSize int32_t
/// @param params int64_t*
void q_openglfunctions_4_3_compatibility_gl_get_internalformati64v(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int64_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetFramebufferParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_framebuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFramebufferParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_framebuffer_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexBindingDivisor)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param bindingindex uint32_t
/// @param divisor uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_binding_divisor(void* self, uint32_t bindingindex, uint32_t divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribBinding)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param attribindex uint32_t
/// @param bindingindex uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_binding(void* self, uint32_t attribindex, uint32_t bindingindex);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribLFormat)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_l_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribIFormat)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribFormat)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param relativeoffset uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint8_t normalized, uint32_t relativeoffset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBindVertexBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param bindingindex uint32_t
/// @param buffer uint32_t
/// @param offset intptr_t
/// @param stride int32_t
void q_openglfunctions_4_3_compatibility_gl_bind_vertex_buffer(void* self, uint32_t bindingindex, uint32_t buffer, intptr_t offset, int32_t stride);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTextureView)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
/// @param target uint32_t
/// @param origtexture uint32_t
/// @param internalformat uint32_t
/// @param minlevel uint32_t
/// @param numlevels uint32_t
/// @param minlayer uint32_t
/// @param numlayers uint32_t
void q_openglfunctions_4_3_compatibility_gl_texture_view(void* self, uint32_t texture, uint32_t target, uint32_t origtexture, uint32_t internalformat, uint32_t minlevel, uint32_t numlevels, uint32_t minlayer, uint32_t numlayers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyImageSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_copy_image_sub_data(void* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDispatchComputeIndirect)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param indirect intptr_t
void q_openglfunctions_4_3_compatibility_gl_dispatch_compute_indirect(void* self, intptr_t indirect);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDispatchCompute)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param num_groups_x uint32_t
/// @param num_groups_y uint32_t
/// @param num_groups_z uint32_t
void q_openglfunctions_4_3_compatibility_gl_dispatch_compute(void* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferSubData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param offset intptr_t
/// @param size intptr_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_clear_buffer_sub_data(void* self, uint32_t target, uint32_t internalformat, intptr_t offset, intptr_t size, uint32_t format, uint32_t type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearBufferData)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_clear_buffer_data(void* self, uint32_t target, uint32_t internalformat, uint32_t format, uint32_t type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTranslatef)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_translatef(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTranslated)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_translated(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScalef)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_scalef(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glScaled)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_scaled(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRotatef)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param angle float
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_rotatef(void* self, float angle, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRotated)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param angle double
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_rotated(void* self, double angle, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPushMatrix)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_push_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPopMatrix)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_pop_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glOrtho)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
void q_openglfunctions_4_3_compatibility_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultMatrixd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m double*
void q_openglfunctions_4_3_compatibility_gl_mult_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultMatrixf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m float*
void q_openglfunctions_4_3_compatibility_gl_mult_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMatrixMode)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_matrix_mode(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadMatrixd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m double*
void q_openglfunctions_4_3_compatibility_gl_load_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadMatrixf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m float*
void q_openglfunctions_4_3_compatibility_gl_load_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadIdentity)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_load_identity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFrustum)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param left double
/// @param right double
/// @param bottom double
/// @param top double
/// @param zNear double
/// @param zFar double
void q_openglfunctions_4_3_compatibility_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIsList)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param list uint32_t
uint8_t q_openglfunctions_4_3_compatibility_gl_is_list(void* self, uint32_t list);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexGeniv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexGenfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexGendv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexEnviv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetTexEnvfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetPolygonStipple)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint8_t*
void q_openglfunctions_4_3_compatibility_gl_get_polygon_stipple(void* self, uint8_t* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetPixelMapusv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param values uint16_t*
void q_openglfunctions_4_3_compatibility_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetPixelMapuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param values uint32_t*
void q_openglfunctions_4_3_compatibility_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetPixelMapfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param values float*
void q_openglfunctions_4_3_compatibility_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMaterialiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMaterialfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMapiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param query uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMapfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param query uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMapdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param query uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetLightiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetLightfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetClipPlane)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param plane uint32_t
/// @param equation double*
void q_openglfunctions_4_3_compatibility_gl_get_clip_plane(void* self, uint32_t plane, double* equation);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDrawPixels)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_4_3_compatibility_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyPixels)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param type uint32_t
void q_openglfunctions_4_3_compatibility_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelMapusv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint16_t*
void q_openglfunctions_4_3_compatibility_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelMapuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values uint32_t*
void q_openglfunctions_4_3_compatibility_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelMapfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mapVal uint32_t
/// @param mapsize int32_t
/// @param values float*
void q_openglfunctions_4_3_compatibility_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelTransferi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_pixel_transferi(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelTransferf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_pixel_transferf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPixelZoom)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param xfactor float
/// @param yfactor float
void q_openglfunctions_4_3_compatibility_gl_pixel_zoom(void* self, float xfactor, float yfactor);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glAlphaFunc)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param func uint32_t
/// @param ref float
void q_openglfunctions_4_3_compatibility_gl_alpha_func(void* self, uint32_t func, float ref);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalPoint2)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param i int32_t
/// @param j int32_t
void q_openglfunctions_4_3_compatibility_gl_eval_point2(void* self, int32_t i, int32_t j);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalMesh2)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
/// @param j1 int32_t
/// @param j2 int32_t
void q_openglfunctions_4_3_compatibility_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalPoint1)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param i int32_t
void q_openglfunctions_4_3_compatibility_gl_eval_point1(void* self, int32_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalMesh1)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
/// @param i1 int32_t
/// @param i2 int32_t
void q_openglfunctions_4_3_compatibility_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u float*
void q_openglfunctions_4_3_compatibility_gl_eval_coord2fv(void* self, float* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u float
/// @param v float
void q_openglfunctions_4_3_compatibility_gl_eval_coord2f(void* self, float u, float v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u double*
void q_openglfunctions_4_3_compatibility_gl_eval_coord2dv(void* self, double* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u double
/// @param v double
void q_openglfunctions_4_3_compatibility_gl_eval_coord2d(void* self, double u, double v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u float*
void q_openglfunctions_4_3_compatibility_gl_eval_coord1fv(void* self, float* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u float
void q_openglfunctions_4_3_compatibility_gl_eval_coord1f(void* self, float u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u double*
void q_openglfunctions_4_3_compatibility_gl_eval_coord1dv(void* self, double* u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEvalCoord1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param u double
void q_openglfunctions_4_3_compatibility_gl_eval_coord1d(void* self, double u);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapGrid2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
/// @param vn int32_t
/// @param v1 float
/// @param v2 float
void q_openglfunctions_4_3_compatibility_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapGrid2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
/// @param vn int32_t
/// @param v1 double
/// @param v2 double
void q_openglfunctions_4_3_compatibility_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapGrid1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param un int32_t
/// @param u1 float
/// @param u2 float
void q_openglfunctions_4_3_compatibility_gl_map_grid1f(void* self, int32_t un, float u1, float u2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMapGrid1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param un int32_t
/// @param u1 double
/// @param u2 double
void q_openglfunctions_4_3_compatibility_gl_map_grid1d(void* self, int32_t un, double u1, double u2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMap2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMap2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
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
void q_openglfunctions_4_3_compatibility_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMap1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param u1 float
/// @param u2 float
/// @param stride int32_t
/// @param order int32_t
/// @param points float*
void q_openglfunctions_4_3_compatibility_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMap1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param u1 double
/// @param u2 double
/// @param stride int32_t
/// @param order int32_t
/// @param points double*
void q_openglfunctions_4_3_compatibility_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPushAttrib)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_push_attrib(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPopAttrib)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_pop_attrib(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glAccum)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param op uint32_t
/// @param value float
void q_openglfunctions_4_3_compatibility_gl_accum(void* self, uint32_t op, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexMask)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_index_mask(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearIndex)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c float
void q_openglfunctions_4_3_compatibility_gl_clear_index(void* self, float c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClearAccum)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_3_compatibility_gl_clear_accum(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPushName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param name uint32_t
void q_openglfunctions_4_3_compatibility_gl_push_name(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPopName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_pop_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPassThrough)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param token float
void q_openglfunctions_4_3_compatibility_gl_pass_through(void* self, float token);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadName)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param name uint32_t
void q_openglfunctions_4_3_compatibility_gl_load_name(void* self, uint32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInitNames)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_init_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRenderMode)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
int32_t q_openglfunctions_4_3_compatibility_gl_render_mode(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSelectBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param buffer uint32_t*
void q_openglfunctions_4_3_compatibility_gl_select_buffer(void* self, int32_t size, uint32_t* buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFeedbackBuffer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param type uint32_t
/// @param buffer float*
void q_openglfunctions_4_3_compatibility_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGeniv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGeni)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGenfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGenf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGendv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param params double*
void q_openglfunctions_4_3_compatibility_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexGend)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord uint32_t
/// @param pname uint32_t
/// @param param double
void q_openglfunctions_4_3_compatibility_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexEnviv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexEnvi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexEnvfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexEnvf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glShadeModel)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_shade_model(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPolygonStipple)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint8_t*
void q_openglfunctions_4_3_compatibility_gl_polygon_stipple(void* self, uint8_t* mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMaterialiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMateriali)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMaterialfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMaterialf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_materialf(void* self, uint32_t face, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLineStipple)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param factor int32_t
/// @param pattern uint16_t
void q_openglfunctions_4_3_compatibility_gl_line_stipple(void* self, int32_t factor, uint16_t pattern);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightModeliv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_light_modeliv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightModeli)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_light_modeli(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightModelfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_light_modelfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightModelf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_light_modelf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLighti)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLightf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param light uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_lightf(void* self, uint32_t light, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_fogiv(void* self, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_4_3_compatibility_gl_fogi(void* self, uint32_t pname, int32_t param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_fogfv(void* self, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_4_3_compatibility_gl_fogf(void* self, uint32_t pname, float param);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorMaterial)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param face uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_color_material(void* self, uint32_t face, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClipPlane)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param plane uint32_t
/// @param equation double*
void q_openglfunctions_4_3_compatibility_gl_clip_plane(void* self, uint32_t plane, double* equation);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_4_3_compatibility_gl_vertex4f(void* self, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_3_compatibility_gl_vertex4d(void* self, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_vertex3f(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_vertex3d(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex2s(void* self, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex2i(void* self, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
void q_openglfunctions_4_3_compatibility_gl_vertex2f(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertex2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_vertex2d(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
/// @param q int16_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
/// @param q int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_tex_coord4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s float
/// @param t float
/// @param r float
/// @param q float
void q_openglfunctions_4_3_compatibility_gl_tex_coord4f(void* self, float s, float t, float r, float q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_tex_coord4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s double
/// @param t double
/// @param r double
/// @param q double
void q_openglfunctions_4_3_compatibility_gl_tex_coord4d(void* self, double s, double t, double r, double q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_tex_coord3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s float
/// @param t float
/// @param r float
void q_openglfunctions_4_3_compatibility_gl_tex_coord3f(void* self, float s, float t, float r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_tex_coord3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s double
/// @param t double
/// @param r double
void q_openglfunctions_4_3_compatibility_gl_tex_coord3d(void* self, double s, double t, double r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int16_t
/// @param t int16_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord2s(void* self, int16_t s, int16_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int32_t
/// @param t int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord2i(void* self, int32_t s, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_tex_coord2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s float
/// @param t float
void q_openglfunctions_4_3_compatibility_gl_tex_coord2f(void* self, float s, float t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_tex_coord2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s double
/// @param t double
void q_openglfunctions_4_3_compatibility_gl_tex_coord2d(void* self, double s, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord1sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int16_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord1s(void* self, int16_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_tex_coord1iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s int32_t
void q_openglfunctions_4_3_compatibility_gl_tex_coord1i(void* self, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_tex_coord1fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s float
void q_openglfunctions_4_3_compatibility_gl_tex_coord1f(void* self, float s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_tex_coord1dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoord1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param s double
void q_openglfunctions_4_3_compatibility_gl_tex_coord1d(void* self, double s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectsv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v1 int16_t*
/// @param v2 int16_t*
void q_openglfunctions_4_3_compatibility_gl_rectsv(void* self, int16_t* v1, int16_t* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRects)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x1 int16_t
/// @param y1 int16_t
/// @param x2 int16_t
/// @param y2 int16_t
void q_openglfunctions_4_3_compatibility_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v1 int32_t*
/// @param v2 int32_t*
void q_openglfunctions_4_3_compatibility_gl_rectiv(void* self, int32_t* v1, int32_t* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRecti)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x1 int32_t
/// @param y1 int32_t
/// @param x2 int32_t
/// @param y2 int32_t
void q_openglfunctions_4_3_compatibility_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v1 float*
/// @param v2 float*
void q_openglfunctions_4_3_compatibility_gl_rectfv(void* self, float* v1, float* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x1 float
/// @param y1 float
/// @param x2 float
/// @param y2 float
void q_openglfunctions_4_3_compatibility_gl_rectf(void* self, float x1, float y1, float x2, float y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v1 double*
/// @param v2 double*
void q_openglfunctions_4_3_compatibility_gl_rectdv(void* self, double* v1, double* v2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRectd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void q_openglfunctions_4_3_compatibility_gl_rectd(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_raster_pos4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_4_3_compatibility_gl_raster_pos4f(void* self, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_raster_pos4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_3_compatibility_gl_raster_pos4d(void* self, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_raster_pos3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_raster_pos3f(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_raster_pos3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_raster_pos3d(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos2s(void* self, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_raster_pos2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_4_3_compatibility_gl_raster_pos2i(void* self, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_raster_pos2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
void q_openglfunctions_4_3_compatibility_gl_raster_pos2f(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_raster_pos2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glRasterPos2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_raster_pos2d(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_normal3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nx int16_t
/// @param ny int16_t
/// @param nz int16_t
void q_openglfunctions_4_3_compatibility_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_normal3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nx int32_t
/// @param ny int32_t
/// @param nz int32_t
void q_openglfunctions_4_3_compatibility_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_normal3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nx float
/// @param ny float
/// @param nz float
void q_openglfunctions_4_3_compatibility_gl_normal3f(void* self, float nx, float ny, float nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_normal3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nx double
/// @param ny double
/// @param nz double
void q_openglfunctions_4_3_compatibility_gl_normal3d(void* self, double nx, double ny, double nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_normal3bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormal3b)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param nx signed char
/// @param ny signed char
/// @param nz signed char
void q_openglfunctions_4_3_compatibility_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexsv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c int16_t*
void q_openglfunctions_4_3_compatibility_gl_indexsv(void* self, int16_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexs)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c int16_t
void q_openglfunctions_4_3_compatibility_gl_indexs(void* self, int16_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c int32_t*
void q_openglfunctions_4_3_compatibility_gl_indexiv(void* self, int32_t* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexi)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c int32_t
void q_openglfunctions_4_3_compatibility_gl_indexi(void* self, int32_t c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c float*
void q_openglfunctions_4_3_compatibility_gl_indexfv(void* self, float* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c float
void q_openglfunctions_4_3_compatibility_gl_indexf(void* self, float c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexdv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c double*
void q_openglfunctions_4_3_compatibility_gl_indexdv(void* self, double* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param c double
void q_openglfunctions_4_3_compatibility_gl_indexd(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEnd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEdgeFlagv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param flag uint8_t*
void q_openglfunctions_4_3_compatibility_gl_edge_flagv(void* self, uint8_t* flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEdgeFlag)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param flag uint8_t
void q_openglfunctions_4_3_compatibility_gl_edge_flag(void* self, uint8_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4usv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_color4usv(void* self, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4us)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
/// @param alpha uint16_t
void q_openglfunctions_4_3_compatibility_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_color4uiv(void* self, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
/// @param alpha uint32_t
void q_openglfunctions_4_3_compatibility_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4ubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_color4ubv(void* self, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4ub)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_4_3_compatibility_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_color4sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
/// @param alpha int16_t
void q_openglfunctions_4_3_compatibility_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_color4iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
/// @param alpha int32_t
void q_openglfunctions_4_3_compatibility_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_color4fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_4_3_compatibility_gl_color4f(void* self, float red, float green, float blue, float alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_color4dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red double
/// @param green double
/// @param blue double
/// @param alpha double
void q_openglfunctions_4_3_compatibility_gl_color4d(void* self, double red, double green, double blue, double alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_color4bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor4b)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
/// @param alpha signed char
void q_openglfunctions_4_3_compatibility_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3usv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_color3usv(void* self, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3us)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
void q_openglfunctions_4_3_compatibility_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_color3uiv(void* self, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
void q_openglfunctions_4_3_compatibility_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3ubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_color3ubv(void* self, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3ub)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
void q_openglfunctions_4_3_compatibility_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_color3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
void q_openglfunctions_4_3_compatibility_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_color3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
void q_openglfunctions_4_3_compatibility_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_color3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
void q_openglfunctions_4_3_compatibility_gl_color3f(void* self, float red, float green, float blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_color3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red double
/// @param green double
/// @param blue double
void q_openglfunctions_4_3_compatibility_gl_color3d(void* self, double red, double green, double blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_color3bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColor3b)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
void q_openglfunctions_4_3_compatibility_gl_color3b(void* self, signed char red, signed char green, signed char blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBitmap)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param width int32_t
/// @param height int32_t
/// @param xorig float
/// @param yorig float
/// @param xmove float
/// @param ymove float
/// @param bitmap uint8_t*
void q_openglfunctions_4_3_compatibility_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glBegin)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_begin(void* self, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glListBase)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param base uint32_t
void q_openglfunctions_4_3_compatibility_gl_list_base(void* self, uint32_t base);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGenLists)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param range int32_t
uint32_t q_openglfunctions_4_3_compatibility_gl_gen_lists(void* self, int32_t range);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDeleteLists)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param list uint32_t
/// @param range int32_t
void q_openglfunctions_4_3_compatibility_gl_delete_lists(void* self, uint32_t list, int32_t range);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCallLists)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param type uint32_t
/// @param lists void*
void q_openglfunctions_4_3_compatibility_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCallList)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param list uint32_t
void q_openglfunctions_4_3_compatibility_gl_call_list(void* self, uint32_t list);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEndList)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_end_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNewList)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param list uint32_t
/// @param mode uint32_t
void q_openglfunctions_4_3_compatibility_gl_new_list(void* self, uint32_t list, uint32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPushClientAttrib)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param mask uint32_t
void q_openglfunctions_4_3_compatibility_gl_push_client_attrib(void* self, uint32_t mask);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPopClientAttrib)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_gl_pop_client_attrib(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glPrioritizeTextures)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param textures uint32_t*
/// @param priorities float*
void q_openglfunctions_4_3_compatibility_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glAreTexturesResident)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param n int32_t
/// @param textures uint32_t*
/// @param residences uint8_t*
uint8_t q_openglfunctions_4_3_compatibility_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glTexCoordPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glNormalPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glInterleavedArrays)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param format uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glIndexPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEnableClientState)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param array uint32_t
void q_openglfunctions_4_3_compatibility_gl_enable_client_state(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glEdgeFlagPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glDisableClientState)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param array uint32_t
void q_openglfunctions_4_3_compatibility_gl_disable_client_state(void* self, uint32_t array);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glArrayElement)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param i int32_t
void q_openglfunctions_4_3_compatibility_gl_array_element(void* self, int32_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glResetMinmax)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
void q_openglfunctions_4_3_compatibility_gl_reset_minmax(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glResetHistogram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
void q_openglfunctions_4_3_compatibility_gl_reset_histogram(void* self, uint32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMinmax)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param sink uint8_t
void q_openglfunctions_4_3_compatibility_gl_minmax(void* self, uint32_t target, uint32_t internalformat, uint8_t sink);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glHistogram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param width int32_t
/// @param internalformat uint32_t
/// @param sink uint8_t
void q_openglfunctions_4_3_compatibility_gl_histogram(void* self, uint32_t target, int32_t width, uint32_t internalformat, uint8_t sink);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMinmaxParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_minmax_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMinmaxParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_minmax_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetMinmax)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param reset uint8_t
/// @param format uint32_t
/// @param type uint32_t
/// @param values void*
void q_openglfunctions_4_3_compatibility_gl_get_minmax(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetHistogramParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_histogram_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetHistogramParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_histogram_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetHistogram)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param reset uint8_t
/// @param format uint32_t
/// @param type uint32_t
/// @param values void*
void q_openglfunctions_4_3_compatibility_gl_get_histogram(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSeparableFilter2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param row void*
/// @param column void*
void q_openglfunctions_4_3_compatibility_gl_separable_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* row, void* column);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetSeparableFilter)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param row void*
/// @param column void*
/// @param span void*
void q_openglfunctions_4_3_compatibility_gl_get_separable_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* row, void* column, void* span);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetConvolutionParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetConvolutionParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetConvolutionFilter)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_4_3_compatibility_gl_get_convolution_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyConvolutionFilter2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyConvolutionFilter1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionParameteri)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t
void q_openglfunctions_4_3_compatibility_gl_convolution_parameteri(void* self, uint32_t target, uint32_t pname, int32_t params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionParameterf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float
void q_openglfunctions_4_3_compatibility_gl_convolution_parameterf(void* self, uint32_t target, uint32_t pname, float params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionFilter2D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_4_3_compatibility_gl_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glConvolutionFilter1D)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param image void*
void q_openglfunctions_4_3_compatibility_gl_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyColorSubTable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param start int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_color_sub_table(void* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorSubTable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param start int32_t
/// @param count int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param data void*
void q_openglfunctions_4_3_compatibility_gl_color_sub_table(void* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t type, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetColorTableParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_get_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetColorTableParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_get_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glGetColorTable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param table void*
void q_openglfunctions_4_3_compatibility_gl_get_color_table(void* self, uint32_t target, uint32_t format, uint32_t type, void* table);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glCopyColorTable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
void q_openglfunctions_4_3_compatibility_gl_copy_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorTableParameteriv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_4_3_compatibility_gl_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorTableParameterfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_4_3_compatibility_gl_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glColorTable)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param table void*
void q_openglfunctions_4_3_compatibility_gl_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* table);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultTransposeMatrixd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m double*
void q_openglfunctions_4_3_compatibility_gl_mult_transpose_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultTransposeMatrixf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m float*
void q_openglfunctions_4_3_compatibility_gl_mult_transpose_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadTransposeMatrixd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m double*
void q_openglfunctions_4_3_compatibility_gl_load_transpose_matrixd(void* self, double* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glLoadTransposeMatrixf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param m float*
void q_openglfunctions_4_3_compatibility_gl_load_transpose_matrixf(void* self, float* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4sv(void* self, uint32_t target, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
/// @param q int16_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4iv(void* self, uint32_t target, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
/// @param q int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4fv(void* self, uint32_t target, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s float
/// @param t float
/// @param r float
/// @param q float
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4f(void* self, uint32_t target, float s, float t, float r, float q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4dv(void* self, uint32_t target, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s double
/// @param t double
/// @param r double
/// @param q double
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord4d(void* self, uint32_t target, double s, double t, double r, double q);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3sv(void* self, uint32_t target, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
/// @param r int16_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3iv(void* self, uint32_t target, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
/// @param r int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3fv(void* self, uint32_t target, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s float
/// @param t float
/// @param r float
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3f(void* self, uint32_t target, float s, float t, float r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3dv(void* self, uint32_t target, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s double
/// @param t double
/// @param r double
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord3d(void* self, uint32_t target, double s, double t, double r);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2sv(void* self, uint32_t target, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int16_t
/// @param t int16_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2s(void* self, uint32_t target, int16_t s, int16_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2iv(void* self, uint32_t target, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int32_t
/// @param t int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2i(void* self, uint32_t target, int32_t s, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2fv(void* self, uint32_t target, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s float
/// @param t float
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2f(void* self, uint32_t target, float s, float t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2dv(void* self, uint32_t target, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s double
/// @param t double
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord2d(void* self, uint32_t target, double s, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1sv(void* self, uint32_t target, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int16_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1s(void* self, uint32_t target, int16_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1iv(void* self, uint32_t target, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s int32_t
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1i(void* self, uint32_t target, int32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1fv(void* self, uint32_t target, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s float
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1f(void* self, uint32_t target, float s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1dv(void* self, uint32_t target, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glMultiTexCoord1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param target uint32_t
/// @param s double
void q_openglfunctions_4_3_compatibility_gl_multi_tex_coord1d(void* self, uint32_t target, double s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glClientActiveTexture)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param texture uint32_t
void q_openglfunctions_4_3_compatibility_gl_client_active_texture(void* self, uint32_t texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_window_pos3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_4_3_compatibility_gl_window_pos3s(void* self, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_window_pos3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_4_3_compatibility_gl_window_pos3i(void* self, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_window_pos3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_window_pos3f(void* self, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_window_pos3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_window_pos3d(void* self, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_window_pos2sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_4_3_compatibility_gl_window_pos2s(void* self, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_window_pos2iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_4_3_compatibility_gl_window_pos2i(void* self, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_window_pos2fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x float
/// @param y float
void q_openglfunctions_4_3_compatibility_gl_window_pos2f(void* self, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_window_pos2dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glWindowPos2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_window_pos2d(void* self, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColorPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_secondary_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3usv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3usv(void* self, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3us)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint16_t
/// @param green uint16_t
/// @param blue uint16_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3uiv(void* self, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint32_t
/// @param green uint32_t
/// @param blue uint32_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3ubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3ubv(void* self, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3ub)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3sv(void* self, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int16_t
/// @param green int16_t
/// @param blue int16_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color3s(void* self, int16_t red, int16_t green, int16_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3iv(void* self, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red int32_t
/// @param green int32_t
/// @param blue int32_t
void q_openglfunctions_4_3_compatibility_gl_secondary_color3i(void* self, int32_t red, int32_t green, int32_t blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3fv(void* self, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red float
/// @param green float
/// @param blue float
void q_openglfunctions_4_3_compatibility_gl_secondary_color3f(void* self, float red, float green, float blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3dv(void* self, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red double
/// @param green double
/// @param blue double
void q_openglfunctions_4_3_compatibility_gl_secondary_color3d(void* self, double red, double green, double blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_secondary_color3bv(void* self, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glSecondaryColor3b)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param red signed char
/// @param green signed char
/// @param blue signed char
void q_openglfunctions_4_3_compatibility_gl_secondary_color3b(void* self, signed char red, signed char green, signed char blue);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogCoordPointer)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglfunctions_4_3_compatibility_gl_fog_coord_pointer(void* self, uint32_t type, int32_t stride, void* pointer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogCoorddv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord double*
void q_openglfunctions_4_3_compatibility_gl_fog_coorddv(void* self, double* coord);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogCoordd)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord double
void q_openglfunctions_4_3_compatibility_gl_fog_coordd(void* self, double coord);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogCoordfv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord float*
void q_openglfunctions_4_3_compatibility_gl_fog_coordfv(void* self, float* coord);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glFogCoordf)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param coord float
void q_openglfunctions_4_3_compatibility_gl_fog_coordf(void* self, float coord);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4usv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4usv(void* self, uint32_t index, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4uiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4ubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4ubv(void* self, uint32_t index, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4sv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
/// @param w int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4iv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4fv(void* self, uint32_t index, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4f(void* self, uint32_t index, float x, float y, float z, float w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
/// @param w double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4d(void* self, uint32_t index, double x, double y, double z, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4bv(void* self, uint32_t index, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nusv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nusv(void* self, uint32_t index, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nuiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nuiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nubv(void* self, uint32_t index, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nub)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x uint8_t
/// @param y uint8_t
/// @param z uint8_t
/// @param w uint8_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nub(void* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nsv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nsv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Niv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_niv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib4Nbv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib4_nbv(void* self, uint32_t index, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3sv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
/// @param z int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3fv(void* self, uint32_t index, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3f(void* self, uint32_t index, float x, float y, float z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib3d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
/// @param z double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib3d(void* self, uint32_t index, double x, double y, double z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2sv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int16_t
/// @param y int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2s(void* self, uint32_t index, int16_t x, int16_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2fv(void* self, uint32_t index, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x float
/// @param y float
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2f(void* self, uint32_t index, float x, float y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib2d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
/// @param y double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib2d(void* self, uint32_t index, double x, double y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1sv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1s)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int16_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1s(void* self, uint32_t index, int16_t x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1fv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v float*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1fv(void* self, uint32_t index, float* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1f)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x float
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1f(void* self, uint32_t index, float x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1dv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v double*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1dv(void* self, uint32_t index, double* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttrib1d)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x double
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib1d(void* self, uint32_t index, double x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4usv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4usv(void* self, uint32_t index, uint16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4ubv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint8_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4ubv(void* self, uint32_t index, uint8_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4sv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int16_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4sv(void* self, uint32_t index, int16_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4bv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v signed char*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4bv(void* self, uint32_t index, signed char* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4uiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI3uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i3uiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI2uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i2uiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI1uiv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i1uiv(void* self, uint32_t index, uint32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4iv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI3iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i3iv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI2iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i2iv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI1iv)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param v int32_t*
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i1iv(void* self, uint32_t index, int32_t* v);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
/// @param z uint32_t
/// @param w uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI3ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
/// @param z uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i3ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI2ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i2ui(void* self, uint32_t index, uint32_t x, uint32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI1ui)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x uint32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i1ui(void* self, uint32_t index, uint32_t x);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI4i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i4i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI3i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i3i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI2i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i2i(void* self, uint32_t index, int32_t x, int32_t y);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#glVertexAttribI1i)
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param index uint32_t
/// @param x int32_t
void q_openglfunctions_4_3_compatibility_gl_vertex_attrib_i1i(void* self, uint32_t index, int32_t x);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
bool q_openglfunctions_4_3_compatibility_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
bool q_openglfunctions_4_3_compatibility_qbase_is_initialized(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#isInitialized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param callback bool func()
void q_openglfunctions_4_3_compatibility_on_is_initialized(void* self, bool (*callback)());

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param context QOpenGLContext*
void q_openglfunctions_4_3_compatibility_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param context QOpenGLContext*
void q_openglfunctions_4_3_compatibility_qbase_set_owning_context(void* self, void* context);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#setOwningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param callback void func(QOpenGLFunctions_4_3_Compatibility* self, QOpenGLContext* context)
void q_openglfunctions_4_3_compatibility_on_set_owning_context(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
QOpenGLContext* q_openglfunctions_4_3_compatibility_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
QOpenGLContext* q_openglfunctions_4_3_compatibility_qbase_owning_context(void* self);

/// Inherited from QAbstractOpenGLFunctions
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#owningContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
/// @param callback QOpenGLContext* func()
void q_openglfunctions_4_3_compatibility_on_owning_context(void* self, QOpenGLContext* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-compatibility.html#dtor.QOpenGLFunctions_4_3_Compatibility)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_3_Compatibility*
void q_openglfunctions_4_3_compatibility_delete(void* self);

#endif
