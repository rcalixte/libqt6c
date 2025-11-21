#pragma once
#ifndef SRC_QT6C_LIBQOPENGLFUNCTIONS_H
#define SRC_QT6C_LIBQOPENGLFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglfunctions.html

/// q_openglfunctions_new constructs a new QOpenGLFunctions object.
///
QOpenGLFunctions* q_openglfunctions_new();

/// q_openglfunctions_new2 constructs a new QOpenGLFunctions object.
///
/// @param context QOpenGLContext*
QOpenGLFunctions* q_openglfunctions_new2(void* context);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
///
/// @param self QOpenGLFunctions*
///
/// @return flag of enum QOpenGLFunctions__OpenGLFeature
int32_t q_openglfunctions_open_g_l_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
///
/// @param self QOpenGLFunctions*
/// @param feature enum QOpenGLFunctions__OpenGLFeature
bool q_openglfunctions_has_open_g_l_feature(void* self, int32_t feature);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLFunctions*
void q_openglfunctions_initialize_open_g_l_functions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglfunctions_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
///
/// @param self QOpenGLFunctions*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglfunctions_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
///
/// @param self QOpenGLFunctions*
/// @param mask uint32_t
void q_openglfunctions_gl_clear(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
///
/// @param self QOpenGLFunctions*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
///
/// @param self QOpenGLFunctions*
/// @param s int32_t
void q_openglfunctions_gl_clear_stencil(void* self, int32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
///
/// @param self QOpenGLFunctions*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglfunctions_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglfunctions_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
///
/// @param self QOpenGLFunctions*
/// @param mode uint32_t
void q_openglfunctions_gl_cull_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
///
/// @param self QOpenGLFunctions*
/// @param func uint32_t
void q_openglfunctions_gl_depth_func(void* self, uint32_t func);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
///
/// @param self QOpenGLFunctions*
/// @param flag uint8_t
void q_openglfunctions_gl_depth_mask(void* self, uint8_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
///
/// @param self QOpenGLFunctions*
/// @param cap uint32_t
void q_openglfunctions_gl_disable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
///
/// @param self QOpenGLFunctions*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglfunctions_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
///
/// @param self QOpenGLFunctions*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglfunctions_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
///
/// @param self QOpenGLFunctions*
/// @param cap uint32_t
void q_openglfunctions_gl_enable(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
///
/// @param self QOpenGLFunctions*
void q_openglfunctions_gl_finish(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
///
/// @param self QOpenGLFunctions*
void q_openglfunctions_gl_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
///
/// @param self QOpenGLFunctions*
/// @param mode uint32_t
void q_openglfunctions_gl_front_face(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglfunctions_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
///
/// @param self QOpenGLFunctions*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglfunctions_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
///
/// @param self QOpenGLFunctions*
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_gl_get_floatv(void* self, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
///
/// @param self QOpenGLFunctions*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
///
/// @param self QOpenGLFunctions*
/// @param name uint32_t
const uint8_t* q_openglfunctions_gl_get_string(void* self, uint32_t name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglfunctions_gl_hint(void* self, uint32_t target, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
///
/// @param self QOpenGLFunctions*
/// @param cap uint32_t
uint8_t q_openglfunctions_gl_is_enabled(void* self, uint32_t cap);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
///
/// @param self QOpenGLFunctions*
/// @param texture uint32_t
uint8_t q_openglfunctions_gl_is_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
///
/// @param self QOpenGLFunctions*
/// @param width float
void q_openglfunctions_gl_line_width(void* self, float width);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
///
/// @param self QOpenGLFunctions*
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
///
/// @param self QOpenGLFunctions*
/// @param factor float
/// @param units float
void q_openglfunctions_gl_polygon_offset(void* self, float factor, float units);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
///
/// @param self QOpenGLFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
///
/// @param self QOpenGLFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
///
/// @param self QOpenGLFunctions*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
///
/// @param self QOpenGLFunctions*
/// @param mask uint32_t
void q_openglfunctions_gl_stencil_mask(void* self, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
///
/// @param self QOpenGLFunctions*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglfunctions_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglfunctions_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglfunctions_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
///
/// @param self QOpenGLFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
///
/// @param self QOpenGLFunctions*
/// @param texture uint32_t
void q_openglfunctions_gl_active_texture(void* self, uint32_t texture);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param index uint32_t
/// @param name const char*
void q_openglfunctions_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglfunctions_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglfunctions_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
///
/// @param self QOpenGLFunctions*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglfunctions_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
///
/// @param self QOpenGLFunctions*
/// @param mode uint32_t
void q_openglfunctions_gl_blend_equation(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
///
/// @param self QOpenGLFunctions*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglfunctions_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
///
/// @param self QOpenGLFunctions*
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglfunctions_gl_blend_func_separate(void* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param size int64_t
/// @param data void*
/// @param usage uint32_t
void q_openglfunctions_gl_buffer_data(void* self, uint32_t target, int64_t size, void* data, uint32_t usage);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param offset int64_t
/// @param size int64_t
/// @param data void*
void q_openglfunctions_gl_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
///
/// @param self QOpenGLFunctions*
/// @param depth float
void q_openglfunctions_gl_clear_depthf(void* self, float depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
void q_openglfunctions_gl_compile_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglfunctions_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
///
/// @param self QOpenGLFunctions*
uint32_t q_openglfunctions_gl_create_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
///
/// @param self QOpenGLFunctions*
/// @param type uint32_t
uint32_t q_openglfunctions_gl_create_shader(void* self, uint32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
void q_openglfunctions_gl_delete_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
void q_openglfunctions_gl_delete_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
///
/// @param self QOpenGLFunctions*
/// @param zNear float
/// @param zFar float
void q_openglfunctions_gl_depth_rangef(void* self, float zNear, float zFar);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglfunctions_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLFunctions*
/// @param index uint32_t
void q_openglfunctions_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLFunctions*
/// @param index uint32_t
void q_openglfunctions_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglfunctions_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglfunctions_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglfunctions_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
void q_openglfunctions_gl_generate_mipmap(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglfunctions_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglfunctions_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param maxcount int32_t
/// @param count int32_t*
/// @param shaders uint32_t*
void q_openglfunctions_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param name const char*
int32_t q_openglfunctions_gl_get_attrib_location(void* self, uint32_t program, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param infolog char*
void q_openglfunctions_gl_get_program_info_log(void* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param infolog char*
void q_openglfunctions_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
///
/// @param self QOpenGLFunctions*
/// @param shadertype uint32_t
/// @param precisiontype uint32_t
/// @param range int32_t*
/// @param precision int32_t*
void q_openglfunctions_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglfunctions_gl_get_shader_source(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglfunctions_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
/// @param name const char*
int32_t q_openglfunctions_gl_get_uniform_location(void* self, uint32_t program, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
///
/// @param self QOpenGLFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglfunctions_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
///
/// @param self QOpenGLFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglfunctions_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
///
/// @param self QOpenGLFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param pointer void*
void q_openglfunctions_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
///
/// @param self QOpenGLFunctions*
/// @param buffer uint32_t
uint8_t q_openglfunctions_gl_is_buffer(void* self, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
///
/// @param self QOpenGLFunctions*
/// @param framebuffer uint32_t
uint8_t q_openglfunctions_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
uint8_t q_openglfunctions_gl_is_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
///
/// @param self QOpenGLFunctions*
/// @param renderbuffer uint32_t
uint8_t q_openglfunctions_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
uint8_t q_openglfunctions_gl_is_shader(void* self, uint32_t shader);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
void q_openglfunctions_gl_link_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
///
/// @param self QOpenGLFunctions*
void q_openglfunctions_gl_release_shader_compiler(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
///
/// @param self QOpenGLFunctions*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglfunctions_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
///
/// @param self QOpenGLFunctions*
/// @param value float
/// @param invert uint8_t
void q_openglfunctions_gl_sample_coverage(void* self, float value, uint8_t invert);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
///
/// @param self QOpenGLFunctions*
/// @param n int32_t
/// @param shaders uint32_t*
/// @param binaryformat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglfunctions_gl_shader_binary(void* self, int32_t n, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
///
/// @param self QOpenGLFunctions*
/// @param shader uint32_t
/// @param count int32_t
/// @param stringVal const char**
/// @param length int32_t*
void q_openglfunctions_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
///
/// @param self QOpenGLFunctions*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglfunctions_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
///
/// @param self QOpenGLFunctions*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglfunctions_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
///
/// @param self QOpenGLFunctions*
/// @param face uint32_t
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglfunctions_gl_stencil_op_separate(void* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x float
void q_openglfunctions_gl_uniform1f(void* self, int32_t location, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_gl_uniform1fv(void* self, int32_t location, int32_t count, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x int32_t
void q_openglfunctions_gl_uniform1i(void* self, int32_t location, int32_t x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
void q_openglfunctions_gl_uniform2f(void* self, int32_t location, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_gl_uniform2fv(void* self, int32_t location, int32_t count, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
void q_openglfunctions_gl_uniform2i(void* self, int32_t location, int32_t x, int32_t y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_gl_uniform3f(void* self, int32_t location, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_gl_uniform3fv(void* self, int32_t location, int32_t count, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglfunctions_gl_uniform3i(void* self, int32_t location, int32_t x, int32_t y, int32_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_gl_uniform4f(void* self, int32_t location, float x, float y, float z, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglfunctions_gl_uniform4fv(void* self, int32_t location, int32_t count, float* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglfunctions_gl_uniform4i(void* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglfunctions_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
///
/// @param self QOpenGLFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglfunctions_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
void q_openglfunctions_gl_use_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
///
/// @param self QOpenGLFunctions*
/// @param program uint32_t
void q_openglfunctions_gl_validate_program(void* self, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param x float
void q_openglfunctions_gl_vertex_attrib1f(void* self, uint32_t indx, float x);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglfunctions_gl_vertex_attrib1fv(void* self, uint32_t indx, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
void q_openglfunctions_gl_vertex_attrib2f(void* self, uint32_t indx, float x, float y);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglfunctions_gl_vertex_attrib2fv(void* self, uint32_t indx, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglfunctions_gl_vertex_attrib3f(void* self, uint32_t indx, float x, float y, float z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglfunctions_gl_vertex_attrib3fv(void* self, uint32_t indx, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglfunctions_gl_vertex_attrib4f(void* self, uint32_t indx, float x, float y, float z, float w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglfunctions_gl_vertex_attrib4fv(void* self, uint32_t indx, float* values);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
///
/// @param self QOpenGLFunctions*
/// @param indx uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param ptr void*
void q_openglfunctions_gl_vertex_attrib_pointer(void* self, uint32_t indx, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* ptr);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#dtor.QOpenGLFunctions)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions*
void q_openglfunctions_delete(void* self);

/// https://doc.qt.io/qt-6/qopenglfunctions.html#types

typedef enum {
    QOPENGLFUNCTIONS_OPENGLFEATURE_MULTITEXTURE = 1,
    QOPENGLFUNCTIONS_OPENGLFEATURE_SHADERS = 2,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BUFFERS = 4,
    QOPENGLFUNCTIONS_OPENGLFEATURE_FRAMEBUFFERS = 8,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDCOLOR = 16,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDEQUATION = 32,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDEQUATIONSEPARATE = 64,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDFUNCSEPARATE = 128,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDSUBTRACT = 256,
    QOPENGLFUNCTIONS_OPENGLFEATURE_COMPRESSEDTEXTURES = 512,
    QOPENGLFUNCTIONS_OPENGLFEATURE_MULTISAMPLE = 1024,
    QOPENGLFUNCTIONS_OPENGLFEATURE_STENCILSEPARATE = 2048,
    QOPENGLFUNCTIONS_OPENGLFEATURE_NPOTTEXTURES = 4096,
    QOPENGLFUNCTIONS_OPENGLFEATURE_NPOTTEXTUREREPEAT = 8192,
    QOPENGLFUNCTIONS_OPENGLFEATURE_FIXEDFUNCTIONPIPELINE = 16384,
    QOPENGLFUNCTIONS_OPENGLFEATURE_TEXTURERGFORMATS = 32768,
    QOPENGLFUNCTIONS_OPENGLFEATURE_MULTIPLERENDERTARGETS = 65536,
    QOPENGLFUNCTIONS_OPENGLFEATURE_BLENDEQUATIONADVANCED = 131072
} QOpenGLFunctions__OpenGLFeature;

#endif
