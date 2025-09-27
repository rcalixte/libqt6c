#pragma once
#ifndef SRCQT6C_LIBQOPENGLEXTRAFUNCTIONS_H
#define SRCQT6C_LIBQOPENGLEXTRAFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglextrafunctions.html

/// q_openglextrafunctions_new constructs a new QOpenGLExtraFunctions object.
///
QOpenGLExtraFunctions* q_openglextrafunctions_new();

/// q_openglextrafunctions_new2 constructs a new QOpenGLExtraFunctions object.
///
/// @param context QOpenGLContext*
QOpenGLExtraFunctions* q_openglextrafunctions_new2(void* context);

/// q_openglextrafunctions_new3 constructs a new QOpenGLExtraFunctions object.
///
/// @param param1 QOpenGLExtraFunctions*
QOpenGLExtraFunctions* q_openglextrafunctions_new3(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
void q_openglextrafunctions_gl_read_buffer(void* self, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElements)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglextrafunctions_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexImage3D)
///
/// @param self QOpenGLExtraFunctions*
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
void q_openglextrafunctions_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexSubImage3D)
///
/// @param self QOpenGLExtraFunctions*
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
void q_openglextrafunctions_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyTexSubImage3D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param zoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexImage3D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglextrafunctions_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCompressedTexSubImage3D)
///
/// @param self QOpenGLExtraFunctions*
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
void q_openglextrafunctions_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenQueries)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglextrafunctions_gl_gen_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteQueries)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglextrafunctions_gl_delete_queries(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsQuery)
///
/// @param self QOpenGLExtraFunctions*
/// @param id uint32_t
uint8_t q_openglextrafunctions_gl_is_query(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginQuery)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param id uint32_t
void q_openglextrafunctions_gl_begin_query(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndQuery)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
void q_openglextrafunctions_gl_end_query(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetQueryObjectuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param id uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUnmapBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
uint8_t q_openglextrafunctions_gl_unmap_buffer(void* self, uint32_t target);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferPointerv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params void*
void q_openglextrafunctions_gl_get_buffer_pointerv(void* self, uint32_t target, uint32_t pname, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix2x4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix3x4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformMatrix4x3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlitFramebuffer)
///
/// @param self QOpenGLExtraFunctions*
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
void q_openglextrafunctions_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glRenderbufferStorageMultisample)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTextureLayer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layer int32_t
void q_openglextrafunctions_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMapBufferRange)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param offset int64_t
/// @param length int64_t
/// @param access uint32_t
void* q_openglextrafunctions_gl_map_buffer_range(void* self, uint32_t target, int64_t offset, int64_t length, uint32_t access);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFlushMappedBufferRange)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param offset int64_t
/// @param length int64_t
void q_openglextrafunctions_gl_flush_mapped_buffer_range(void* self, uint32_t target, int64_t offset, int64_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexArray)
///
/// @param self QOpenGLExtraFunctions*
/// @param array uint32_t
void q_openglextrafunctions_gl_bind_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteVertexArrays)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglextrafunctions_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenVertexArrays)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param arrays uint32_t*
void q_openglextrafunctions_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsVertexArray)
///
/// @param self QOpenGLExtraFunctions*
/// @param array uint32_t
uint8_t q_openglextrafunctions_gl_is_vertex_array(void* self, uint32_t array);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetIntegeri_v)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int32_t*
void q_openglextrafunctions_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBeginTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
/// @param primitiveMode uint32_t
void q_openglextrafunctions_gl_begin_transform_feedback(void* self, uint32_t primitiveMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEndTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_end_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferRange)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
/// @param offset int64_t
/// @param size int64_t
void q_openglextrafunctions_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, int64_t offset, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindBufferBase)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
/// @param buffer uint32_t
void q_openglextrafunctions_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIPointer)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param stride int32_t
/// @param pointer void*
void q_openglextrafunctions_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetVertexAttribIuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4i)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglextrafunctions_gl_vertex_attrib_i4i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param x uint32_t
/// @param y uint32_t
/// @param z uint32_t
/// @param w uint32_t
void q_openglextrafunctions_gl_vertex_attrib_i4ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param v int32_t*
void q_openglextrafunctions_gl_vertex_attrib_i4iv(void* self, uint32_t index, int32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribI4uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param v uint32_t*
void q_openglextrafunctions_gl_vertex_attrib_i4uiv(void* self, uint32_t index, uint32_t* v);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFragDataLocation)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param name char*
int32_t q_openglextrafunctions_gl_get_frag_data_location(void* self, uint32_t program, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param v0 uint32_t
void q_openglextrafunctions_gl_uniform1ui(void* self, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglextrafunctions_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglextrafunctions_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglextrafunctions_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform1uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform2uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform3uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniform4uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value int32_t*
void q_openglextrafunctions_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param value float*
void q_openglextrafunctions_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glClearBufferfi)
///
/// @param self QOpenGLExtraFunctions*
/// @param buffer uint32_t
/// @param drawbuffer int32_t
/// @param depth float
/// @param stencil int32_t
void q_openglextrafunctions_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetStringi)
///
/// @param self QOpenGLExtraFunctions*
/// @param name uint32_t
/// @param index uint32_t
const uint8_t* q_openglextrafunctions_gl_get_stringi(void* self, uint32_t name, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyBufferSubData)
///
/// @param self QOpenGLExtraFunctions*
/// @param readTarget uint32_t
/// @param writeTarget uint32_t
/// @param readOffset int64_t
/// @param writeOffset int64_t
/// @param size int64_t
void q_openglextrafunctions_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, int64_t readOffset, int64_t writeOffset, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformsiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param uniformCount int32_t
/// @param uniformIndices uint32_t*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetUniformBlockIndex)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param uniformBlockName char*
uint32_t q_openglextrafunctions_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetActiveUniformBlockName)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param uniformBlockName char*
void q_openglextrafunctions_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUniformBlockBinding)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param uniformBlockIndex uint32_t
/// @param uniformBlockBinding uint32_t
void q_openglextrafunctions_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysInstanced)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
/// @param instancecount int32_t
void q_openglextrafunctions_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstanced)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
void q_openglextrafunctions_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64v)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param data int64_t*
void q_openglextrafunctions_gl_get_integer64v(void* self, uint32_t pname, int64_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInteger64i_v)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
/// @param data int64_t*
void q_openglextrafunctions_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBufferParameteri64v)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int64_t*
void q_openglextrafunctions_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenSamplers)
///
/// @param self QOpenGLExtraFunctions*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglextrafunctions_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteSamplers)
///
/// @param self QOpenGLExtraFunctions*
/// @param count int32_t
/// @param samplers uint32_t*
void q_openglextrafunctions_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsSampler)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
uint8_t q_openglextrafunctions_gl_is_sampler(void* self, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindSampler)
///
/// @param self QOpenGLExtraFunctions*
/// @param unit uint32_t
/// @param sampler uint32_t
void q_openglextrafunctions_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteri)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglextrafunctions_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglextrafunctions_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterf)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglextrafunctions_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param float*
void q_openglextrafunctions_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribDivisor)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param divisor uint32_t
void q_openglextrafunctions_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param id uint32_t
void q_openglextrafunctions_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteTransformFeedbacks)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglextrafunctions_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenTransformFeedbacks)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param ids uint32_t*
void q_openglextrafunctions_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
/// @param id uint32_t
uint8_t q_openglextrafunctions_gl_is_transform_feedback(void* self, uint32_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPauseTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_pause_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glResumeTransformFeedback)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_resume_transform_feedback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramBinary)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param binaryFormat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglextrafunctions_gl_program_binary(void* self, uint32_t program, uint32_t binaryFormat, void* binary, int32_t length);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramParameteri)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param pname uint32_t
/// @param value int32_t
void q_openglextrafunctions_gl_program_parameteri(void* self, uint32_t program, uint32_t pname, int32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_tex_storage2_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param levels int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
void q_openglextrafunctions_gl_tex_storage3_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetInternalformativ)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param pname uint32_t
/// @param bufSize int32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_internalformativ(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchCompute)
///
/// @param self QOpenGLExtraFunctions*
/// @param num_groups_x uint32_t
/// @param num_groups_y uint32_t
/// @param num_groups_z uint32_t
void q_openglextrafunctions_gl_dispatch_compute(void* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDispatchComputeIndirect)
///
/// @param self QOpenGLExtraFunctions*
/// @param indirect int64_t
void q_openglextrafunctions_gl_dispatch_compute_indirect(void* self, int64_t indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawArraysIndirect)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param indirect void*
void q_openglextrafunctions_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsIndirect)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param type uint32_t
/// @param indirect void*
void q_openglextrafunctions_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferParameteri)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglextrafunctions_gl_framebuffer_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetFramebufferParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_framebuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramInterfaceiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_program_interfaceiv(void* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceIndex)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
uint32_t q_openglextrafunctions_gl_get_program_resource_index(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceName)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param index uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param name char*
void q_openglextrafunctions_gl_get_program_resource_name(void* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramResourceLocation)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param programInterface uint32_t
/// @param name char*
int32_t q_openglextrafunctions_gl_get_program_resource_location(void* self, uint32_t program, uint32_t programInterface, char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glUseProgramStages)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
/// @param stages uint32_t
/// @param program uint32_t
void q_openglextrafunctions_gl_use_program_stages(void* self, uint32_t pipeline, uint32_t stages, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glActiveShaderProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
/// @param program uint32_t
void q_openglextrafunctions_gl_active_shader_program(void* self, uint32_t pipeline, uint32_t program);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindProgramPipeline)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
void q_openglextrafunctions_gl_bind_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDeleteProgramPipelines)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglextrafunctions_gl_delete_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGenProgramPipelines)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param pipelines uint32_t*
void q_openglextrafunctions_gl_gen_program_pipelines(void* self, int32_t n, uint32_t* pipelines);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsProgramPipeline)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
uint8_t q_openglextrafunctions_gl_is_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_program_pipelineiv(void* self, uint32_t pipeline, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1i)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
void q_openglextrafunctions_gl_program_uniform1i(void* self, uint32_t program, int32_t location, int32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2i)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
void q_openglextrafunctions_gl_program_uniform2i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3i)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
void q_openglextrafunctions_gl_program_uniform3i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4i)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 int32_t
/// @param v1 int32_t
/// @param v2 int32_t
/// @param v3 int32_t
void q_openglextrafunctions_gl_program_uniform4i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
void q_openglextrafunctions_gl_program_uniform1ui(void* self, uint32_t program, int32_t location, uint32_t v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
void q_openglextrafunctions_gl_program_uniform2ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
void q_openglextrafunctions_gl_program_uniform3ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4ui)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 uint32_t
/// @param v1 uint32_t
/// @param v2 uint32_t
/// @param v3 uint32_t
void q_openglextrafunctions_gl_program_uniform4ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1f)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
void q_openglextrafunctions_gl_program_uniform1f(void* self, uint32_t program, int32_t location, float v0);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2f)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
void q_openglextrafunctions_gl_program_uniform2f(void* self, uint32_t program, int32_t location, float v0, float v1);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3f)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
void q_openglextrafunctions_gl_program_uniform3f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4f)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param v0 float
/// @param v1 float
/// @param v2 float
/// @param v3 float
void q_openglextrafunctions_gl_program_uniform4f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglextrafunctions_gl_program_uniform1iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglextrafunctions_gl_program_uniform2iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglextrafunctions_gl_program_uniform3iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value int32_t*
void q_openglextrafunctions_gl_program_uniform4iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_program_uniform1uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_program_uniform2uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_program_uniform3uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4uiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value uint32_t*
void q_openglextrafunctions_gl_program_uniform4uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform1fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform1fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform2fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform3fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniform4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform4fv(void* self, uint32_t program, int32_t location, int32_t count, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix2x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix3x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix2x4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix2x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix4x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix3x4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix3x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glProgramUniformMatrix4x3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_program_uniform_matrix4x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glValidateProgramPipeline)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
void q_openglextrafunctions_gl_validate_program_pipeline(void* self, uint32_t pipeline);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetProgramPipelineInfoLog)
///
/// @param self QOpenGLExtraFunctions*
/// @param pipeline uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param infoLog char*
void q_openglextrafunctions_gl_get_program_pipeline_info_log(void* self, uint32_t pipeline, int32_t bufSize, int32_t* length, char* infoLog);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindImageTexture)
///
/// @param self QOpenGLExtraFunctions*
/// @param unit uint32_t
/// @param texture uint32_t
/// @param level int32_t
/// @param layered uint8_t
/// @param layer int32_t
/// @param access uint32_t
/// @param format uint32_t
void q_openglextrafunctions_gl_bind_image_texture(void* self, uint32_t unit, uint32_t texture, int32_t level, uint8_t layered, int32_t layer, uint32_t access, uint32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetBooleani_v)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
/// @param data uint8_t*
void q_openglextrafunctions_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrier)
///
/// @param self QOpenGLExtraFunctions*
/// @param barriers uint32_t
void q_openglextrafunctions_gl_memory_barrier(void* self, uint32_t barriers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMemoryBarrierByRegion)
///
/// @param self QOpenGLExtraFunctions*
/// @param barriers uint32_t
void q_openglextrafunctions_gl_memory_barrier_by_region(void* self, uint32_t barriers);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage2DMultisample)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param fixedsamplelocations uint8_t
void q_openglextrafunctions_gl_tex_storage2_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetMultisamplefv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param index uint32_t
/// @param val float*
void q_openglextrafunctions_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSampleMaski)
///
/// @param self QOpenGLExtraFunctions*
/// @param maskNumber uint32_t
/// @param mask uint32_t
void q_openglextrafunctions_gl_sample_maski(void* self, uint32_t maskNumber, uint32_t mask);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexLevelParameterfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBindVertexBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param bindingindex uint32_t
/// @param buffer uint32_t
/// @param offset int64_t
/// @param stride int32_t
void q_openglextrafunctions_gl_bind_vertex_buffer(void* self, uint32_t bindingindex, uint32_t buffer, int64_t offset, int32_t stride);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribFormat)
///
/// @param self QOpenGLExtraFunctions*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param relativeoffset uint32_t
void q_openglextrafunctions_gl_vertex_attrib_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint8_t normalized, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribIFormat)
///
/// @param self QOpenGLExtraFunctions*
/// @param attribindex uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param relativeoffset uint32_t
void q_openglextrafunctions_gl_vertex_attrib_i_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexAttribBinding)
///
/// @param self QOpenGLExtraFunctions*
/// @param attribindex uint32_t
/// @param bindingindex uint32_t
void q_openglextrafunctions_gl_vertex_attrib_binding(void* self, uint32_t attribindex, uint32_t bindingindex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glVertexBindingDivisor)
///
/// @param self QOpenGLExtraFunctions*
/// @param bindingindex uint32_t
/// @param divisor uint32_t
void q_openglextrafunctions_gl_vertex_binding_divisor(void* self, uint32_t bindingindex, uint32_t divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendBarrier)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_blend_barrier(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glCopyImageSubData)
///
/// @param self QOpenGLExtraFunctions*
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
void q_openglextrafunctions_gl_copy_image_sub_data(void* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageControl)
///
/// @param self QOpenGLExtraFunctions*
/// @param source uint32_t
/// @param type uint32_t
/// @param severity uint32_t
/// @param count int32_t
/// @param ids uint32_t*
/// @param enabled uint8_t
void q_openglextrafunctions_gl_debug_message_control(void* self, uint32_t source, uint32_t type, uint32_t severity, int32_t count, uint32_t* ids, uint8_t enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDebugMessageInsert)
///
/// @param self QOpenGLExtraFunctions*
/// @param source uint32_t
/// @param type uint32_t
/// @param id uint32_t
/// @param severity uint32_t
/// @param length int32_t
/// @param buf char*
void q_openglextrafunctions_gl_debug_message_insert(void* self, uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, char* buf);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPushDebugGroup)
///
/// @param self QOpenGLExtraFunctions*
/// @param source uint32_t
/// @param id uint32_t
/// @param length int32_t
/// @param message char*
void q_openglextrafunctions_gl_push_debug_group(void* self, uint32_t source, uint32_t id, int32_t length, char* message);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPopDebugGroup)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_pop_debug_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectLabel)
///
/// @param self QOpenGLExtraFunctions*
/// @param identifier uint32_t
/// @param name uint32_t
/// @param length int32_t
/// @param label char*
void q_openglextrafunctions_gl_object_label(void* self, uint32_t identifier, uint32_t name, int32_t length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectLabel)
///
/// @param self QOpenGLExtraFunctions*
/// @param identifier uint32_t
/// @param name uint32_t
/// @param bufSize int32_t
/// @param length int32_t*
/// @param label char*
void q_openglextrafunctions_gl_get_object_label(void* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glObjectPtrLabel)
///
/// @param self QOpenGLExtraFunctions*
/// @param ptr void*
/// @param length int32_t
/// @param label char*
void q_openglextrafunctions_gl_object_ptr_label(void* self, void* ptr, int32_t length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetObjectPtrLabel)
///
/// @param self QOpenGLExtraFunctions*
/// @param ptr void*
/// @param bufSize int32_t
/// @param length int32_t*
/// @param label char*
void q_openglextrafunctions_gl_get_object_ptr_label(void* self, void* ptr, int32_t bufSize, int32_t* length, char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetPointerv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param params void*
void q_openglextrafunctions_gl_get_pointerv(void* self, uint32_t pname, void* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glEnablei)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
void q_openglextrafunctions_gl_enablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDisablei)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
void q_openglextrafunctions_gl_disablei(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationi)
///
/// @param self QOpenGLExtraFunctions*
/// @param buf uint32_t
/// @param mode uint32_t
void q_openglextrafunctions_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendEquationSeparatei)
///
/// @param self QOpenGLExtraFunctions*
/// @param buf uint32_t
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglextrafunctions_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFunci)
///
/// @param self QOpenGLExtraFunctions*
/// @param buf uint32_t
/// @param src uint32_t
/// @param dst uint32_t
void q_openglextrafunctions_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glBlendFuncSeparatei)
///
/// @param self QOpenGLExtraFunctions*
/// @param buf uint32_t
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglextrafunctions_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glColorMaski)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param r uint8_t
/// @param g uint8_t
/// @param b uint8_t
/// @param a uint8_t
void q_openglextrafunctions_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glIsEnabledi)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param index uint32_t
uint8_t q_openglextrafunctions_gl_is_enabledi(void* self, uint32_t target, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsBaseVertex)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglextrafunctions_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawRangeElementsBaseVertex)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param start uint32_t
/// @param end uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param basevertex int32_t
void q_openglextrafunctions_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glDrawElementsInstancedBaseVertex)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
/// @param instancecount int32_t
/// @param basevertex int32_t
void q_openglextrafunctions_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glFramebufferTexture)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglextrafunctions_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPrimitiveBoundingBox)
///
/// @param self QOpenGLExtraFunctions*
/// @param minX float
/// @param minY float
/// @param minZ float
/// @param minW float
/// @param maxX float
/// @param maxY float
/// @param maxZ float
/// @param maxW float
void q_openglextrafunctions_gl_primitive_bounding_box(void* self, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glReadnPixels)
///
/// @param self QOpenGLExtraFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param bufSize int32_t
/// @param data void*
void q_openglextrafunctions_gl_readn_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, int32_t bufSize, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params float*
void q_openglextrafunctions_gl_getn_uniformfv(void* self, uint32_t program, int32_t location, int32_t bufSize, float* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_getn_uniformiv(void* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetnUniformuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param bufSize int32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_getn_uniformuiv(void* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glMinSampleShading)
///
/// @param self QOpenGLExtraFunctions*
/// @param value float
void q_openglextrafunctions_gl_min_sample_shading(void* self, float value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glPatchParameteri)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param value int32_t
void q_openglextrafunctions_gl_patch_parameteri(void* self, uint32_t pname, int32_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexParameterIuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetTexParameterIuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param int32_t*
void q_openglextrafunctions_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glSamplerParameterIuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param param uint32_t*
void q_openglextrafunctions_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glGetSamplerParameterIuiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param sampler uint32_t
/// @param pname uint32_t
/// @param params uint32_t*
void q_openglextrafunctions_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
void q_openglextrafunctions_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexBufferRange)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param buffer uint32_t
/// @param offset int64_t
/// @param size int64_t
void q_openglextrafunctions_gl_tex_buffer_range(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer, int64_t offset, int64_t size);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#glTexStorage3DMultisample)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param samples int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param depth int32_t
/// @param fixedsamplelocations uint8_t
void q_openglextrafunctions_gl_tex_storage3_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#openGLFeatures)
///
/// @param self QOpenGLExtraFunctions*
///
/// @return flag of enum QOpenGLFunctions__OpenGLFeature
int32_t q_openglextrafunctions_open_g_l_features(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#hasOpenGLFeature)
///
/// @param self QOpenGLExtraFunctions*
/// @param feature enum QOpenGLFunctions__OpenGLFeature
bool q_openglextrafunctions_has_open_g_l_feature(void* self, int32_t feature);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#initializeOpenGLFunctions)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_initialize_open_g_l_functions(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindTexture)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param texture uint32_t
void q_openglextrafunctions_gl_bind_texture(void* self, uint32_t target, uint32_t texture);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFunc)
///
/// @param self QOpenGLExtraFunctions*
/// @param sfactor uint32_t
/// @param dfactor uint32_t
void q_openglextrafunctions_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClear)
///
/// @param self QOpenGLExtraFunctions*
/// @param mask uint32_t
void q_openglextrafunctions_gl_clear(void* self, uint32_t mask);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearColor)
///
/// @param self QOpenGLExtraFunctions*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglextrafunctions_gl_clear_color(void* self, float red, float green, float blue, float alpha);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearStencil)
///
/// @param self QOpenGLExtraFunctions*
/// @param s int32_t
void q_openglextrafunctions_gl_clear_stencil(void* self, int32_t s);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glColorMask)
///
/// @param self QOpenGLExtraFunctions*
/// @param red uint8_t
/// @param green uint8_t
/// @param blue uint8_t
/// @param alpha uint8_t
void q_openglextrafunctions_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
void q_openglextrafunctions_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCopyTexSubImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCullFace)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
void q_openglextrafunctions_gl_cull_face(void* self, uint32_t mode);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteTextures)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglextrafunctions_gl_delete_textures(void* self, int32_t n, uint32_t* textures);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthFunc)
///
/// @param self QOpenGLExtraFunctions*
/// @param func uint32_t
void q_openglextrafunctions_gl_depth_func(void* self, uint32_t func);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthMask)
///
/// @param self QOpenGLExtraFunctions*
/// @param flag uint8_t
void q_openglextrafunctions_gl_depth_mask(void* self, uint8_t flag);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisable)
///
/// @param self QOpenGLExtraFunctions*
/// @param cap uint32_t
void q_openglextrafunctions_gl_disable(void* self, uint32_t cap);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawArrays)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param first int32_t
/// @param count int32_t
void q_openglextrafunctions_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDrawElements)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
/// @param count int32_t
/// @param type uint32_t
/// @param indices void*
void q_openglextrafunctions_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnable)
///
/// @param self QOpenGLExtraFunctions*
/// @param cap uint32_t
void q_openglextrafunctions_gl_enable(void* self, uint32_t cap);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFinish)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_finish(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFlush)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_flush(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFrontFace)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
void q_openglextrafunctions_gl_front_face(void* self, uint32_t mode);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenTextures)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param textures uint32_t*
void q_openglextrafunctions_gl_gen_textures(void* self, int32_t n, uint32_t* textures);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBooleanv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param params uint8_t*
void q_openglextrafunctions_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFloatv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_get_floatv(void* self, uint32_t pname, float* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetIntegerv)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_integerv(void* self, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetString)
///
/// @param self QOpenGLExtraFunctions*
/// @param name uint32_t
const uint8_t* q_openglextrafunctions_gl_get_string(void* self, uint32_t name);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameterfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetTexParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glHint)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param mode uint32_t
void q_openglextrafunctions_gl_hint(void* self, uint32_t target, uint32_t mode);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsEnabled)
///
/// @param self QOpenGLExtraFunctions*
/// @param cap uint32_t
uint8_t q_openglextrafunctions_gl_is_enabled(void* self, uint32_t cap);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsTexture)
///
/// @param self QOpenGLExtraFunctions*
/// @param texture uint32_t
uint8_t q_openglextrafunctions_gl_is_texture(void* self, uint32_t texture);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLineWidth)
///
/// @param self QOpenGLExtraFunctions*
/// @param width float
void q_openglextrafunctions_gl_line_width(void* self, float width);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPixelStorei)
///
/// @param self QOpenGLExtraFunctions*
/// @param pname uint32_t
/// @param param int32_t
void q_openglextrafunctions_gl_pixel_storei(void* self, uint32_t pname, int32_t param);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glPolygonOffset)
///
/// @param self QOpenGLExtraFunctions*
/// @param factor float
/// @param units float
void q_openglextrafunctions_gl_polygon_offset(void* self, float factor, float units);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReadPixels)
///
/// @param self QOpenGLExtraFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglextrafunctions_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glScissor)
///
/// @param self QOpenGLExtraFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFunc)
///
/// @param self QOpenGLExtraFunctions*
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglextrafunctions_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMask)
///
/// @param self QOpenGLExtraFunctions*
/// @param mask uint32_t
void q_openglextrafunctions_gl_stencil_mask(void* self, uint32_t mask);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOp)
///
/// @param self QOpenGLExtraFunctions*
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglextrafunctions_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat int32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglextrafunctions_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterf)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param float
void q_openglextrafunctions_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameterfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteri)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param param int32_t
void q_openglextrafunctions_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glTexSubImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param type uint32_t
/// @param pixels void*
void q_openglextrafunctions_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glViewport)
///
/// @param self QOpenGLExtraFunctions*
/// @param x int32_t
/// @param y int32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glActiveTexture)
///
/// @param self QOpenGLExtraFunctions*
/// @param texture uint32_t
void q_openglextrafunctions_gl_active_texture(void* self, uint32_t texture);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glAttachShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglextrafunctions_gl_attach_shader(void* self, uint32_t program, uint32_t shader);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindAttribLocation)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param index uint32_t
/// @param name const char*
void q_openglextrafunctions_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param buffer uint32_t
void q_openglextrafunctions_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindFramebuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param framebuffer uint32_t
void q_openglextrafunctions_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBindRenderbuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param renderbuffer uint32_t
void q_openglextrafunctions_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendColor)
///
/// @param self QOpenGLExtraFunctions*
/// @param red float
/// @param green float
/// @param blue float
/// @param alpha float
void q_openglextrafunctions_gl_blend_color(void* self, float red, float green, float blue, float alpha);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquation)
///
/// @param self QOpenGLExtraFunctions*
/// @param mode uint32_t
void q_openglextrafunctions_gl_blend_equation(void* self, uint32_t mode);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendEquationSeparate)
///
/// @param self QOpenGLExtraFunctions*
/// @param modeRGB uint32_t
/// @param modeAlpha uint32_t
void q_openglextrafunctions_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBlendFuncSeparate)
///
/// @param self QOpenGLExtraFunctions*
/// @param srcRGB uint32_t
/// @param dstRGB uint32_t
/// @param srcAlpha uint32_t
/// @param dstAlpha uint32_t
void q_openglextrafunctions_gl_blend_func_separate(void* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferData)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param size int64_t
/// @param data void*
/// @param usage uint32_t
void q_openglextrafunctions_gl_buffer_data(void* self, uint32_t target, int64_t size, void* data, uint32_t usage);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glBufferSubData)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param offset int64_t
/// @param size int64_t
/// @param data void*
void q_openglextrafunctions_gl_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glClearDepthf)
///
/// @param self QOpenGLExtraFunctions*
/// @param depth float
void q_openglextrafunctions_gl_clear_depthf(void* self, float depth);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompileShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
void q_openglextrafunctions_gl_compile_shader(void* self, uint32_t shader);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
/// @param border int32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglextrafunctions_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCompressedTexSubImage2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param level int32_t
/// @param xoffset int32_t
/// @param yoffset int32_t
/// @param width int32_t
/// @param height int32_t
/// @param format uint32_t
/// @param imageSize int32_t
/// @param data void*
void q_openglextrafunctions_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateProgram)
///
/// @param self QOpenGLExtraFunctions*
uint32_t q_openglextrafunctions_gl_create_program(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glCreateShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param type uint32_t
uint32_t q_openglextrafunctions_gl_create_shader(void* self, uint32_t type);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteBuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglextrafunctions_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteFramebuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglextrafunctions_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
void q_openglextrafunctions_gl_delete_program(void* self, uint32_t program);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteRenderbuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglextrafunctions_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDeleteShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
void q_openglextrafunctions_gl_delete_shader(void* self, uint32_t shader);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDepthRangef)
///
/// @param self QOpenGLExtraFunctions*
/// @param zNear float
/// @param zFar float
void q_openglextrafunctions_gl_depth_rangef(void* self, float zNear, float zFar);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDetachShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param shader uint32_t
void q_openglextrafunctions_gl_detach_shader(void* self, uint32_t program, uint32_t shader);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glDisableVertexAttribArray)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
void q_openglextrafunctions_gl_disable_vertex_attrib_array(void* self, uint32_t index);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glEnableVertexAttribArray)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
void q_openglextrafunctions_gl_enable_vertex_attrib_array(void* self, uint32_t index);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferRenderbuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param renderbuffertarget uint32_t
/// @param renderbuffer uint32_t
void q_openglextrafunctions_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glFramebufferTexture2D)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param textarget uint32_t
/// @param texture uint32_t
/// @param level int32_t
void q_openglextrafunctions_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenBuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param buffers uint32_t*
void q_openglextrafunctions_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenerateMipmap)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
void q_openglextrafunctions_gl_generate_mipmap(void* self, uint32_t target);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenFramebuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param framebuffers uint32_t*
void q_openglextrafunctions_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGenRenderbuffers)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param renderbuffers uint32_t*
void q_openglextrafunctions_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttachedShaders)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param maxcount int32_t
/// @param count int32_t*
/// @param shaders uint32_t*
void q_openglextrafunctions_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetAttribLocation)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param name const char*
int32_t q_openglextrafunctions_gl_get_attrib_location(void* self, uint32_t program, const char* name);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetBufferParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetFramebufferAttachmentParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param attachment uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetProgramInfoLog)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param infolog char*
void q_openglextrafunctions_gl_get_program_info_log(void* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetRenderbufferParameteriv)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderInfoLog)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param infolog char*
void q_openglextrafunctions_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderPrecisionFormat)
///
/// @param self QOpenGLExtraFunctions*
/// @param shadertype uint32_t
/// @param precisiontype uint32_t
/// @param range int32_t*
/// @param precision int32_t*
void q_openglextrafunctions_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetShaderSource)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
/// @param bufsize int32_t
/// @param length int32_t*
/// @param source char*
void q_openglextrafunctions_gl_get_shader_source(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param params float*
void q_openglextrafunctions_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param location int32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetUniformLocation)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
/// @param name const char*
int32_t q_openglextrafunctions_gl_get_uniform_location(void* self, uint32_t program, const char* name);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribfv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params float*
void q_openglextrafunctions_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribiv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param params int32_t*
void q_openglextrafunctions_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glGetVertexAttribPointerv)
///
/// @param self QOpenGLExtraFunctions*
/// @param index uint32_t
/// @param pname uint32_t
/// @param pointer void*
void q_openglextrafunctions_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsBuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param buffer uint32_t
uint8_t q_openglextrafunctions_gl_is_buffer(void* self, uint32_t buffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsFramebuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param framebuffer uint32_t
uint8_t q_openglextrafunctions_gl_is_framebuffer(void* self, uint32_t framebuffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
uint8_t q_openglextrafunctions_gl_is_program(void* self, uint32_t program);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsRenderbuffer)
///
/// @param self QOpenGLExtraFunctions*
/// @param renderbuffer uint32_t
uint8_t q_openglextrafunctions_gl_is_renderbuffer(void* self, uint32_t renderbuffer);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glIsShader)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
uint8_t q_openglextrafunctions_gl_is_shader(void* self, uint32_t shader);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glLinkProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
void q_openglextrafunctions_gl_link_program(void* self, uint32_t program);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glReleaseShaderCompiler)
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_gl_release_shader_compiler(void* self);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glRenderbufferStorage)
///
/// @param self QOpenGLExtraFunctions*
/// @param target uint32_t
/// @param internalformat uint32_t
/// @param width int32_t
/// @param height int32_t
void q_openglextrafunctions_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glSampleCoverage)
///
/// @param self QOpenGLExtraFunctions*
/// @param value float
/// @param invert uint8_t
void q_openglextrafunctions_gl_sample_coverage(void* self, float value, uint8_t invert);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderBinary)
///
/// @param self QOpenGLExtraFunctions*
/// @param n int32_t
/// @param shaders uint32_t*
/// @param binaryformat uint32_t
/// @param binary void*
/// @param length int32_t
void q_openglextrafunctions_gl_shader_binary(void* self, int32_t n, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glShaderSource)
///
/// @param self QOpenGLExtraFunctions*
/// @param shader uint32_t
/// @param count int32_t
/// @param stringVal const char**
/// @param length int32_t*
void q_openglextrafunctions_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilFuncSeparate)
///
/// @param self QOpenGLExtraFunctions*
/// @param face uint32_t
/// @param func uint32_t
/// @param ref int32_t
/// @param mask uint32_t
void q_openglextrafunctions_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilMaskSeparate)
///
/// @param self QOpenGLExtraFunctions*
/// @param face uint32_t
/// @param mask uint32_t
void q_openglextrafunctions_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glStencilOpSeparate)
///
/// @param self QOpenGLExtraFunctions*
/// @param face uint32_t
/// @param fail uint32_t
/// @param zfail uint32_t
/// @param zpass uint32_t
void q_openglextrafunctions_gl_stencil_op_separate(void* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1f)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x float
void q_openglextrafunctions_gl_uniform1f(void* self, int32_t location, float x);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglextrafunctions_gl_uniform1fv(void* self, int32_t location, int32_t count, float* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1i)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x int32_t
void q_openglextrafunctions_gl_uniform1i(void* self, int32_t location, int32_t x);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform1iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglextrafunctions_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2f)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
void q_openglextrafunctions_gl_uniform2f(void* self, int32_t location, float x, float y);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglextrafunctions_gl_uniform2fv(void* self, int32_t location, int32_t count, float* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2i)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
void q_openglextrafunctions_gl_uniform2i(void* self, int32_t location, int32_t x, int32_t y);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform2iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglextrafunctions_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3f)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglextrafunctions_gl_uniform3f(void* self, int32_t location, float x, float y, float z);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglextrafunctions_gl_uniform3fv(void* self, int32_t location, int32_t count, float* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3i)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
void q_openglextrafunctions_gl_uniform3i(void* self, int32_t location, int32_t x, int32_t y, int32_t z);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform3iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglextrafunctions_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4f)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglextrafunctions_gl_uniform4f(void* self, int32_t location, float x, float y, float z, float w);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v float*
void q_openglextrafunctions_gl_uniform4fv(void* self, int32_t location, int32_t count, float* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4i)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param x int32_t
/// @param y int32_t
/// @param z int32_t
/// @param w int32_t
void q_openglextrafunctions_gl_uniform4i(void* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniform4iv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param v int32_t*
void q_openglextrafunctions_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* v);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUniformMatrix4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param location int32_t
/// @param count int32_t
/// @param transpose uint8_t
/// @param value float*
void q_openglextrafunctions_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glUseProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
void q_openglextrafunctions_gl_use_program(void* self, uint32_t program);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glValidateProgram)
///
/// @param self QOpenGLExtraFunctions*
/// @param program uint32_t
void q_openglextrafunctions_gl_validate_program(void* self, uint32_t program);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1f)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param x float
void q_openglextrafunctions_gl_vertex_attrib1f(void* self, uint32_t indx, float x);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib1fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglextrafunctions_gl_vertex_attrib1fv(void* self, uint32_t indx, float* values);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2f)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
void q_openglextrafunctions_gl_vertex_attrib2f(void* self, uint32_t indx, float x, float y);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib2fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglextrafunctions_gl_vertex_attrib2fv(void* self, uint32_t indx, float* values);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3f)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
/// @param z float
void q_openglextrafunctions_gl_vertex_attrib3f(void* self, uint32_t indx, float x, float y, float z);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib3fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglextrafunctions_gl_vertex_attrib3fv(void* self, uint32_t indx, float* values);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4f)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param x float
/// @param y float
/// @param z float
/// @param w float
void q_openglextrafunctions_gl_vertex_attrib4f(void* self, uint32_t indx, float x, float y, float z, float w);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttrib4fv)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param values float*
void q_openglextrafunctions_gl_vertex_attrib4fv(void* self, uint32_t indx, float* values);

/// Inherited from QOpenGLFunctions
///
/// [Qt documentation](https://doc.qt.io/qt-6/qopenglfunctions.html#glVertexAttribPointer)
///
/// @param self QOpenGLExtraFunctions*
/// @param indx uint32_t
/// @param size int32_t
/// @param type uint32_t
/// @param normalized uint8_t
/// @param stride int32_t
/// @param ptr void*
void q_openglextrafunctions_gl_vertex_attrib_pointer(void* self, uint32_t indx, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* ptr);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglextrafunctions.html#dtor.QOpenGLExtraFunctions)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLExtraFunctions*
void q_openglextrafunctions_delete(void* self);

#endif
