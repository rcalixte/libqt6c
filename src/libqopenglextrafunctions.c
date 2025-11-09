#include "libqopenglcontext.hpp"
#include "libqopenglfunctions.hpp"
#include "libqopenglextrafunctions.hpp"
#include "libqopenglextrafunctions.h"

QOpenGLExtraFunctions* q_openglextrafunctions_new() {
    return QOpenGLExtraFunctions_new();
}

QOpenGLExtraFunctions* q_openglextrafunctions_new2(void* context) {
    return QOpenGLExtraFunctions_new2((QOpenGLContext*)context);
}

QOpenGLExtraFunctions* q_openglextrafunctions_new3(void* param1) {
    return QOpenGLExtraFunctions_new3((QOpenGLExtraFunctions*)param1);
}

void q_openglextrafunctions_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLExtraFunctions_GlReadBuffer((QOpenGLExtraFunctions*)self, mode);
}

void q_openglextrafunctions_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLExtraFunctions_GlDrawRangeElements((QOpenGLExtraFunctions*)self, mode, start, end, count, type, indices);
}

void q_openglextrafunctions_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLExtraFunctions_GlTexImage3D((QOpenGLExtraFunctions*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglextrafunctions_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLExtraFunctions_GlTexSubImage3D((QOpenGLExtraFunctions*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglextrafunctions_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLExtraFunctions_GlCopyTexSubImage3D((QOpenGLExtraFunctions*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglextrafunctions_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLExtraFunctions_GlCompressedTexImage3D((QOpenGLExtraFunctions*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglextrafunctions_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLExtraFunctions_GlCompressedTexSubImage3D((QOpenGLExtraFunctions*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglextrafunctions_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLExtraFunctions_GlGenQueries((QOpenGLExtraFunctions*)self, n, ids);
}

void q_openglextrafunctions_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLExtraFunctions_GlDeleteQueries((QOpenGLExtraFunctions*)self, n, ids);
}

uint8_t q_openglextrafunctions_gl_is_query(void* self, uint32_t id) {
    return QOpenGLExtraFunctions_GlIsQuery((QOpenGLExtraFunctions*)self, id);
}

void q_openglextrafunctions_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLExtraFunctions_GlBeginQuery((QOpenGLExtraFunctions*)self, target, id);
}

void q_openglextrafunctions_gl_end_query(void* self, uint32_t target) {
    QOpenGLExtraFunctions_GlEndQuery((QOpenGLExtraFunctions*)self, target);
}

void q_openglextrafunctions_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetQueryiv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetQueryObjectuiv((QOpenGLExtraFunctions*)self, id, pname, params);
}

uint8_t q_openglextrafunctions_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLExtraFunctions_GlUnmapBuffer((QOpenGLExtraFunctions*)self, target);
}

void q_openglextrafunctions_gl_get_buffer_pointerv(void* self, uint32_t target, uint32_t pname, void* params) {
    QOpenGLExtraFunctions_GlGetBufferPointerv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix2x3fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix3x2fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix2x4fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix4x2fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix3x4fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlUniformMatrix4x3fv((QOpenGLExtraFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    QOpenGLExtraFunctions_GlBlitFramebuffer((QOpenGLExtraFunctions*)self, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void q_openglextrafunctions_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLExtraFunctions_GlRenderbufferStorageMultisample((QOpenGLExtraFunctions*)self, target, samples, internalformat, width, height);
}

void q_openglextrafunctions_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    QOpenGLExtraFunctions_GlFramebufferTextureLayer((QOpenGLExtraFunctions*)self, target, attachment, texture, level, layer);
}

void* q_openglextrafunctions_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access) {
    return QOpenGLExtraFunctions_GlMapBufferRange((QOpenGLExtraFunctions*)self, target, offset, length, access);
}

void q_openglextrafunctions_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length) {
    QOpenGLExtraFunctions_GlFlushMappedBufferRange((QOpenGLExtraFunctions*)self, target, offset, length);
}

void q_openglextrafunctions_gl_bind_vertex_array(void* self, uint32_t array) {
    QOpenGLExtraFunctions_GlBindVertexArray((QOpenGLExtraFunctions*)self, array);
}

void q_openglextrafunctions_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLExtraFunctions_GlDeleteVertexArrays((QOpenGLExtraFunctions*)self, n, arrays);
}

void q_openglextrafunctions_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLExtraFunctions_GlGenVertexArrays((QOpenGLExtraFunctions*)self, n, arrays);
}

uint8_t q_openglextrafunctions_gl_is_vertex_array(void* self, uint32_t array) {
    return QOpenGLExtraFunctions_GlIsVertexArray((QOpenGLExtraFunctions*)self, array);
}

void q_openglextrafunctions_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data) {
    QOpenGLExtraFunctions_GlGetIntegeriV((QOpenGLExtraFunctions*)self, target, index, data);
}

void q_openglextrafunctions_gl_begin_transform_feedback(void* self, uint32_t primitiveMode) {
    QOpenGLExtraFunctions_GlBeginTransformFeedback((QOpenGLExtraFunctions*)self, primitiveMode);
}

void q_openglextrafunctions_gl_end_transform_feedback(void* self) {
    QOpenGLExtraFunctions_GlEndTransformFeedback((QOpenGLExtraFunctions*)self);
}

void q_openglextrafunctions_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLExtraFunctions_GlBindBufferRange((QOpenGLExtraFunctions*)self, target, index, buffer, offset, size);
}

void q_openglextrafunctions_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer) {
    QOpenGLExtraFunctions_GlBindBufferBase((QOpenGLExtraFunctions*)self, target, index, buffer);
}

void q_openglextrafunctions_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLExtraFunctions_GlVertexAttribIPointer((QOpenGLExtraFunctions*)self, index, size, type, stride, pointer);
}

void q_openglextrafunctions_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetVertexAttribIiv((QOpenGLExtraFunctions*)self, index, pname, params);
}

void q_openglextrafunctions_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetVertexAttribIuiv((QOpenGLExtraFunctions*)self, index, pname, params);
}

void q_openglextrafunctions_gl_vertex_attrib_i4i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLExtraFunctions_GlVertexAttribI4i((QOpenGLExtraFunctions*)self, index, x, y, z, w);
}

void q_openglextrafunctions_gl_vertex_attrib_i4ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    QOpenGLExtraFunctions_GlVertexAttribI4ui((QOpenGLExtraFunctions*)self, index, x, y, z, w);
}

void q_openglextrafunctions_gl_vertex_attrib_i4iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLExtraFunctions_GlVertexAttribI4iv((QOpenGLExtraFunctions*)self, index, v);
}

void q_openglextrafunctions_gl_vertex_attrib_i4uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLExtraFunctions_GlVertexAttribI4uiv((QOpenGLExtraFunctions*)self, index, v);
}

void q_openglextrafunctions_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetUniformuiv((QOpenGLExtraFunctions*)self, program, location, params);
}

int32_t q_openglextrafunctions_gl_get_frag_data_location(void* self, uint32_t program, char* name) {
    return QOpenGLExtraFunctions_GlGetFragDataLocation((QOpenGLExtraFunctions*)self, program, name);
}

void q_openglextrafunctions_gl_uniform1ui(void* self, int32_t location, uint32_t v0) {
    QOpenGLExtraFunctions_GlUniform1ui((QOpenGLExtraFunctions*)self, location, v0);
}

void q_openglextrafunctions_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLExtraFunctions_GlUniform2ui((QOpenGLExtraFunctions*)self, location, v0, v1);
}

void q_openglextrafunctions_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLExtraFunctions_GlUniform3ui((QOpenGLExtraFunctions*)self, location, v0, v1, v2);
}

void q_openglextrafunctions_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLExtraFunctions_GlUniform4ui((QOpenGLExtraFunctions*)self, location, v0, v1, v2, v3);
}

void q_openglextrafunctions_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlUniform1uiv((QOpenGLExtraFunctions*)self, location, count, value);
}

void q_openglextrafunctions_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlUniform2uiv((QOpenGLExtraFunctions*)self, location, count, value);
}

void q_openglextrafunctions_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlUniform3uiv((QOpenGLExtraFunctions*)self, location, count, value);
}

void q_openglextrafunctions_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlUniform4uiv((QOpenGLExtraFunctions*)self, location, count, value);
}

void q_openglextrafunctions_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value) {
    QOpenGLExtraFunctions_GlClearBufferiv((QOpenGLExtraFunctions*)self, buffer, drawbuffer, value);
}

void q_openglextrafunctions_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value) {
    QOpenGLExtraFunctions_GlClearBufferuiv((QOpenGLExtraFunctions*)self, buffer, drawbuffer, value);
}

void q_openglextrafunctions_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value) {
    QOpenGLExtraFunctions_GlClearBufferfv((QOpenGLExtraFunctions*)self, buffer, drawbuffer, value);
}

void q_openglextrafunctions_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    QOpenGLExtraFunctions_GlClearBufferfi((QOpenGLExtraFunctions*)self, buffer, drawbuffer, depth, stencil);
}

const uint8_t* q_openglextrafunctions_gl_get_stringi(void* self, uint32_t name, uint32_t index) {
    return (uint8_t*)QOpenGLExtraFunctions_GlGetStringi((QOpenGLExtraFunctions*)self, name, index);
}

void q_openglextrafunctions_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size) {
    QOpenGLExtraFunctions_GlCopyBufferSubData((QOpenGLExtraFunctions*)self, readTarget, writeTarget, readOffset, writeOffset, size);
}

void q_openglextrafunctions_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetActiveUniformsiv((QOpenGLExtraFunctions*)self, program, uniformCount, uniformIndices, pname, params);
}

uint32_t q_openglextrafunctions_gl_get_uniform_block_index(void* self, uint32_t program, char* uniformBlockName) {
    return QOpenGLExtraFunctions_GlGetUniformBlockIndex((QOpenGLExtraFunctions*)self, program, uniformBlockName);
}

void q_openglextrafunctions_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetActiveUniformBlockiv((QOpenGLExtraFunctions*)self, program, uniformBlockIndex, pname, params);
}

void q_openglextrafunctions_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName) {
    QOpenGLExtraFunctions_GlGetActiveUniformBlockName((QOpenGLExtraFunctions*)self, program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void q_openglextrafunctions_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    QOpenGLExtraFunctions_GlUniformBlockBinding((QOpenGLExtraFunctions*)self, program, uniformBlockIndex, uniformBlockBinding);
}

void q_openglextrafunctions_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    QOpenGLExtraFunctions_GlDrawArraysInstanced((QOpenGLExtraFunctions*)self, mode, first, count, instancecount);
}

void q_openglextrafunctions_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount) {
    QOpenGLExtraFunctions_GlDrawElementsInstanced((QOpenGLExtraFunctions*)self, mode, count, type, indices, instancecount);
}

void q_openglextrafunctions_gl_get_integer64v(void* self, uint32_t pname, int64_t* data) {
    QOpenGLExtraFunctions_GlGetInteger64v((QOpenGLExtraFunctions*)self, pname, data);
}

void q_openglextrafunctions_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data) {
    QOpenGLExtraFunctions_GlGetInteger64iV((QOpenGLExtraFunctions*)self, target, index, data);
}

void q_openglextrafunctions_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params) {
    QOpenGLExtraFunctions_GlGetBufferParameteri64v((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLExtraFunctions_GlGenSamplers((QOpenGLExtraFunctions*)self, count, samplers);
}

void q_openglextrafunctions_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLExtraFunctions_GlDeleteSamplers((QOpenGLExtraFunctions*)self, count, samplers);
}

uint8_t q_openglextrafunctions_gl_is_sampler(void* self, uint32_t sampler) {
    return QOpenGLExtraFunctions_GlIsSampler((QOpenGLExtraFunctions*)self, sampler);
}

void q_openglextrafunctions_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler) {
    QOpenGLExtraFunctions_GlBindSampler((QOpenGLExtraFunctions*)self, unit, sampler);
}

void q_openglextrafunctions_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param) {
    QOpenGLExtraFunctions_GlSamplerParameteri((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLExtraFunctions_GlSamplerParameteriv((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param) {
    QOpenGLExtraFunctions_GlSamplerParameterf((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param) {
    QOpenGLExtraFunctions_GlSamplerParameterfv((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetSamplerParameteriv((QOpenGLExtraFunctions*)self, sampler, pname, params);
}

void q_openglextrafunctions_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params) {
    QOpenGLExtraFunctions_GlGetSamplerParameterfv((QOpenGLExtraFunctions*)self, sampler, pname, params);
}

void q_openglextrafunctions_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor) {
    QOpenGLExtraFunctions_GlVertexAttribDivisor((QOpenGLExtraFunctions*)self, index, divisor);
}

void q_openglextrafunctions_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id) {
    QOpenGLExtraFunctions_GlBindTransformFeedback((QOpenGLExtraFunctions*)self, target, id);
}

void q_openglextrafunctions_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids) {
    QOpenGLExtraFunctions_GlDeleteTransformFeedbacks((QOpenGLExtraFunctions*)self, n, ids);
}

void q_openglextrafunctions_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids) {
    QOpenGLExtraFunctions_GlGenTransformFeedbacks((QOpenGLExtraFunctions*)self, n, ids);
}

uint8_t q_openglextrafunctions_gl_is_transform_feedback(void* self, uint32_t id) {
    return QOpenGLExtraFunctions_GlIsTransformFeedback((QOpenGLExtraFunctions*)self, id);
}

void q_openglextrafunctions_gl_pause_transform_feedback(void* self) {
    QOpenGLExtraFunctions_GlPauseTransformFeedback((QOpenGLExtraFunctions*)self);
}

void q_openglextrafunctions_gl_resume_transform_feedback(void* self) {
    QOpenGLExtraFunctions_GlResumeTransformFeedback((QOpenGLExtraFunctions*)self);
}

void q_openglextrafunctions_gl_program_binary(void* self, uint32_t program, uint32_t binaryFormat, void* binary, int32_t length) {
    QOpenGLExtraFunctions_GlProgramBinary((QOpenGLExtraFunctions*)self, program, binaryFormat, binary, length);
}

void q_openglextrafunctions_gl_program_parameteri(void* self, uint32_t program, uint32_t pname, int32_t value) {
    QOpenGLExtraFunctions_GlProgramParameteri((QOpenGLExtraFunctions*)self, program, pname, value);
}

void q_openglextrafunctions_gl_tex_storage2_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLExtraFunctions_GlTexStorage2D((QOpenGLExtraFunctions*)self, target, levels, internalformat, width, height);
}

void q_openglextrafunctions_gl_tex_storage3_d(void* self, uint32_t target, int32_t levels, uint32_t internalformat, int32_t width, int32_t height, int32_t depth) {
    QOpenGLExtraFunctions_GlTexStorage3D((QOpenGLExtraFunctions*)self, target, levels, internalformat, width, height, depth);
}

void q_openglextrafunctions_gl_get_internalformativ(void* self, uint32_t target, uint32_t internalformat, uint32_t pname, int32_t bufSize, int32_t* params) {
    QOpenGLExtraFunctions_GlGetInternalformativ((QOpenGLExtraFunctions*)self, target, internalformat, pname, bufSize, params);
}

void q_openglextrafunctions_gl_dispatch_compute(void* self, uint32_t num_groups_x, uint32_t num_groups_y, uint32_t num_groups_z) {
    QOpenGLExtraFunctions_GlDispatchCompute((QOpenGLExtraFunctions*)self, num_groups_x, num_groups_y, num_groups_z);
}

void q_openglextrafunctions_gl_dispatch_compute_indirect(void* self, intptr_t indirect) {
    QOpenGLExtraFunctions_GlDispatchComputeIndirect((QOpenGLExtraFunctions*)self, indirect);
}

void q_openglextrafunctions_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect) {
    QOpenGLExtraFunctions_GlDrawArraysIndirect((QOpenGLExtraFunctions*)self, mode, indirect);
}

void q_openglextrafunctions_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect) {
    QOpenGLExtraFunctions_GlDrawElementsIndirect((QOpenGLExtraFunctions*)self, mode, type, indirect);
}

void q_openglextrafunctions_gl_framebuffer_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLExtraFunctions_GlFramebufferParameteri((QOpenGLExtraFunctions*)self, target, pname, param);
}

void q_openglextrafunctions_gl_get_framebuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetFramebufferParameteriv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_program_interfaceiv(void* self, uint32_t program, uint32_t programInterface, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetProgramInterfaceiv((QOpenGLExtraFunctions*)self, program, programInterface, pname, params);
}

uint32_t q_openglextrafunctions_gl_get_program_resource_index(void* self, uint32_t program, uint32_t programInterface, char* name) {
    return QOpenGLExtraFunctions_GlGetProgramResourceIndex((QOpenGLExtraFunctions*)self, program, programInterface, name);
}

void q_openglextrafunctions_gl_get_program_resource_name(void* self, uint32_t program, uint32_t programInterface, uint32_t index, int32_t bufSize, int32_t* length, char* name) {
    QOpenGLExtraFunctions_GlGetProgramResourceName((QOpenGLExtraFunctions*)self, program, programInterface, index, bufSize, length, name);
}

int32_t q_openglextrafunctions_gl_get_program_resource_location(void* self, uint32_t program, uint32_t programInterface, char* name) {
    return QOpenGLExtraFunctions_GlGetProgramResourceLocation((QOpenGLExtraFunctions*)self, program, programInterface, name);
}

void q_openglextrafunctions_gl_use_program_stages(void* self, uint32_t pipeline, uint32_t stages, uint32_t program) {
    QOpenGLExtraFunctions_GlUseProgramStages((QOpenGLExtraFunctions*)self, pipeline, stages, program);
}

void q_openglextrafunctions_gl_active_shader_program(void* self, uint32_t pipeline, uint32_t program) {
    QOpenGLExtraFunctions_GlActiveShaderProgram((QOpenGLExtraFunctions*)self, pipeline, program);
}

void q_openglextrafunctions_gl_bind_program_pipeline(void* self, uint32_t pipeline) {
    QOpenGLExtraFunctions_GlBindProgramPipeline((QOpenGLExtraFunctions*)self, pipeline);
}

void q_openglextrafunctions_gl_delete_program_pipelines(void* self, int32_t n, uint32_t* pipelines) {
    QOpenGLExtraFunctions_GlDeleteProgramPipelines((QOpenGLExtraFunctions*)self, n, pipelines);
}

void q_openglextrafunctions_gl_gen_program_pipelines(void* self, int32_t n, uint32_t* pipelines) {
    QOpenGLExtraFunctions_GlGenProgramPipelines((QOpenGLExtraFunctions*)self, n, pipelines);
}

uint8_t q_openglextrafunctions_gl_is_program_pipeline(void* self, uint32_t pipeline) {
    return QOpenGLExtraFunctions_GlIsProgramPipeline((QOpenGLExtraFunctions*)self, pipeline);
}

void q_openglextrafunctions_gl_get_program_pipelineiv(void* self, uint32_t pipeline, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetProgramPipelineiv((QOpenGLExtraFunctions*)self, pipeline, pname, params);
}

void q_openglextrafunctions_gl_program_uniform1i(void* self, uint32_t program, int32_t location, int32_t v0) {
    QOpenGLExtraFunctions_GlProgramUniform1i((QOpenGLExtraFunctions*)self, program, location, v0);
}

void q_openglextrafunctions_gl_program_uniform2i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLExtraFunctions_GlProgramUniform2i((QOpenGLExtraFunctions*)self, program, location, v0, v1);
}

void q_openglextrafunctions_gl_program_uniform3i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLExtraFunctions_GlProgramUniform3i((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2);
}

void q_openglextrafunctions_gl_program_uniform4i(void* self, uint32_t program, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLExtraFunctions_GlProgramUniform4i((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2, v3);
}

void q_openglextrafunctions_gl_program_uniform1ui(void* self, uint32_t program, int32_t location, uint32_t v0) {
    QOpenGLExtraFunctions_GlProgramUniform1ui((QOpenGLExtraFunctions*)self, program, location, v0);
}

void q_openglextrafunctions_gl_program_uniform2ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLExtraFunctions_GlProgramUniform2ui((QOpenGLExtraFunctions*)self, program, location, v0, v1);
}

void q_openglextrafunctions_gl_program_uniform3ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLExtraFunctions_GlProgramUniform3ui((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2);
}

void q_openglextrafunctions_gl_program_uniform4ui(void* self, uint32_t program, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLExtraFunctions_GlProgramUniform4ui((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2, v3);
}

void q_openglextrafunctions_gl_program_uniform1f(void* self, uint32_t program, int32_t location, float v0) {
    QOpenGLExtraFunctions_GlProgramUniform1f((QOpenGLExtraFunctions*)self, program, location, v0);
}

void q_openglextrafunctions_gl_program_uniform2f(void* self, uint32_t program, int32_t location, float v0, float v1) {
    QOpenGLExtraFunctions_GlProgramUniform2f((QOpenGLExtraFunctions*)self, program, location, v0, v1);
}

void q_openglextrafunctions_gl_program_uniform3f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2) {
    QOpenGLExtraFunctions_GlProgramUniform3f((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2);
}

void q_openglextrafunctions_gl_program_uniform4f(void* self, uint32_t program, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLExtraFunctions_GlProgramUniform4f((QOpenGLExtraFunctions*)self, program, location, v0, v1, v2, v3);
}

void q_openglextrafunctions_gl_program_uniform1iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform1iv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform2iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform2iv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform3iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform3iv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform4iv(void* self, uint32_t program, int32_t location, int32_t count, int32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform4iv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform1uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform1uiv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform2uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform2uiv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform3uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform3uiv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform4uiv(void* self, uint32_t program, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLExtraFunctions_GlProgramUniform4uiv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform1fv(void* self, uint32_t program, int32_t location, int32_t count, float* value) {
    QOpenGLExtraFunctions_GlProgramUniform1fv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform2fv(void* self, uint32_t program, int32_t location, int32_t count, float* value) {
    QOpenGLExtraFunctions_GlProgramUniform2fv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform3fv(void* self, uint32_t program, int32_t location, int32_t count, float* value) {
    QOpenGLExtraFunctions_GlProgramUniform3fv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform4fv(void* self, uint32_t program, int32_t location, int32_t count, float* value) {
    QOpenGLExtraFunctions_GlProgramUniform4fv((QOpenGLExtraFunctions*)self, program, location, count, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix2fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix3fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix4fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix2x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix2x3fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix3x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix3x2fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix2x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix2x4fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix4x2fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix4x2fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix3x4fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix3x4fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_program_uniform_matrix4x3fv(void* self, uint32_t program, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLExtraFunctions_GlProgramUniformMatrix4x3fv((QOpenGLExtraFunctions*)self, program, location, count, transpose, value);
}

void q_openglextrafunctions_gl_validate_program_pipeline(void* self, uint32_t pipeline) {
    QOpenGLExtraFunctions_GlValidateProgramPipeline((QOpenGLExtraFunctions*)self, pipeline);
}

void q_openglextrafunctions_gl_get_program_pipeline_info_log(void* self, uint32_t pipeline, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLExtraFunctions_GlGetProgramPipelineInfoLog((QOpenGLExtraFunctions*)self, pipeline, bufSize, length, infoLog);
}

void q_openglextrafunctions_gl_bind_image_texture(void* self, uint32_t unit, uint32_t texture, int32_t level, uint8_t layered, int32_t layer, uint32_t access, uint32_t format) {
    QOpenGLExtraFunctions_GlBindImageTexture((QOpenGLExtraFunctions*)self, unit, texture, level, layered, layer, access, format);
}

void q_openglextrafunctions_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data) {
    QOpenGLExtraFunctions_GlGetBooleaniV((QOpenGLExtraFunctions*)self, target, index, data);
}

void q_openglextrafunctions_gl_memory_barrier(void* self, uint32_t barriers) {
    QOpenGLExtraFunctions_GlMemoryBarrier((QOpenGLExtraFunctions*)self, barriers);
}

void q_openglextrafunctions_gl_memory_barrier_by_region(void* self, uint32_t barriers) {
    QOpenGLExtraFunctions_GlMemoryBarrierByRegion((QOpenGLExtraFunctions*)self, barriers);
}

void q_openglextrafunctions_gl_tex_storage2_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations) {
    QOpenGLExtraFunctions_GlTexStorage2DMultisample((QOpenGLExtraFunctions*)self, target, samples, internalformat, width, height, fixedsamplelocations);
}

void q_openglextrafunctions_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val) {
    QOpenGLExtraFunctions_GlGetMultisamplefv((QOpenGLExtraFunctions*)self, pname, index, val);
}

void q_openglextrafunctions_gl_sample_maski(void* self, uint32_t maskNumber, uint32_t mask) {
    QOpenGLExtraFunctions_GlSampleMaski((QOpenGLExtraFunctions*)self, maskNumber, mask);
}

void q_openglextrafunctions_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetTexLevelParameteriv((QOpenGLExtraFunctions*)self, target, level, pname, params);
}

void q_openglextrafunctions_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLExtraFunctions_GlGetTexLevelParameterfv((QOpenGLExtraFunctions*)self, target, level, pname, params);
}

void q_openglextrafunctions_gl_bind_vertex_buffer(void* self, uint32_t bindingindex, uint32_t buffer, intptr_t offset, int32_t stride) {
    QOpenGLExtraFunctions_GlBindVertexBuffer((QOpenGLExtraFunctions*)self, bindingindex, buffer, offset, stride);
}

void q_openglextrafunctions_gl_vertex_attrib_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint8_t normalized, uint32_t relativeoffset) {
    QOpenGLExtraFunctions_GlVertexAttribFormat((QOpenGLExtraFunctions*)self, attribindex, size, type, normalized, relativeoffset);
}

void q_openglextrafunctions_gl_vertex_attrib_i_format(void* self, uint32_t attribindex, int32_t size, uint32_t type, uint32_t relativeoffset) {
    QOpenGLExtraFunctions_GlVertexAttribIFormat((QOpenGLExtraFunctions*)self, attribindex, size, type, relativeoffset);
}

void q_openglextrafunctions_gl_vertex_attrib_binding(void* self, uint32_t attribindex, uint32_t bindingindex) {
    QOpenGLExtraFunctions_GlVertexAttribBinding((QOpenGLExtraFunctions*)self, attribindex, bindingindex);
}

void q_openglextrafunctions_gl_vertex_binding_divisor(void* self, uint32_t bindingindex, uint32_t divisor) {
    QOpenGLExtraFunctions_GlVertexBindingDivisor((QOpenGLExtraFunctions*)self, bindingindex, divisor);
}

void q_openglextrafunctions_gl_blend_barrier(void* self) {
    QOpenGLExtraFunctions_GlBlendBarrier((QOpenGLExtraFunctions*)self);
}

void q_openglextrafunctions_gl_copy_image_sub_data(void* self, uint32_t srcName, uint32_t srcTarget, int32_t srcLevel, int32_t srcX, int32_t srcY, int32_t srcZ, uint32_t dstName, uint32_t dstTarget, int32_t dstLevel, int32_t dstX, int32_t dstY, int32_t dstZ, int32_t srcWidth, int32_t srcHeight, int32_t srcDepth) {
    QOpenGLExtraFunctions_GlCopyImageSubData((QOpenGLExtraFunctions*)self, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void q_openglextrafunctions_gl_debug_message_control(void* self, uint32_t source, uint32_t type, uint32_t severity, int32_t count, uint32_t* ids, uint8_t enabled) {
    QOpenGLExtraFunctions_GlDebugMessageControl((QOpenGLExtraFunctions*)self, source, type, severity, count, ids, enabled);
}

void q_openglextrafunctions_gl_debug_message_insert(void* self, uint32_t source, uint32_t type, uint32_t id, uint32_t severity, int32_t length, char* buf) {
    QOpenGLExtraFunctions_GlDebugMessageInsert((QOpenGLExtraFunctions*)self, source, type, id, severity, length, buf);
}

void q_openglextrafunctions_gl_push_debug_group(void* self, uint32_t source, uint32_t id, int32_t length, char* message) {
    QOpenGLExtraFunctions_GlPushDebugGroup((QOpenGLExtraFunctions*)self, source, id, length, message);
}

void q_openglextrafunctions_gl_pop_debug_group(void* self) {
    QOpenGLExtraFunctions_GlPopDebugGroup((QOpenGLExtraFunctions*)self);
}

void q_openglextrafunctions_gl_object_label(void* self, uint32_t identifier, uint32_t name, int32_t length, char* label) {
    QOpenGLExtraFunctions_GlObjectLabel((QOpenGLExtraFunctions*)self, identifier, name, length, label);
}

void q_openglextrafunctions_gl_get_object_label(void* self, uint32_t identifier, uint32_t name, int32_t bufSize, int32_t* length, char* label) {
    QOpenGLExtraFunctions_GlGetObjectLabel((QOpenGLExtraFunctions*)self, identifier, name, bufSize, length, label);
}

void q_openglextrafunctions_gl_object_ptr_label(void* self, void* ptr, int32_t length, char* label) {
    QOpenGLExtraFunctions_GlObjectPtrLabel((QOpenGLExtraFunctions*)self, ptr, length, label);
}

void q_openglextrafunctions_gl_get_object_ptr_label(void* self, void* ptr, int32_t bufSize, int32_t* length, char* label) {
    QOpenGLExtraFunctions_GlGetObjectPtrLabel((QOpenGLExtraFunctions*)self, ptr, bufSize, length, label);
}

void q_openglextrafunctions_gl_get_pointerv(void* self, uint32_t pname, void* params) {
    QOpenGLExtraFunctions_GlGetPointerv((QOpenGLExtraFunctions*)self, pname, params);
}

void q_openglextrafunctions_gl_enablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLExtraFunctions_GlEnablei((QOpenGLExtraFunctions*)self, target, index);
}

void q_openglextrafunctions_gl_disablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLExtraFunctions_GlDisablei((QOpenGLExtraFunctions*)self, target, index);
}

void q_openglextrafunctions_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode) {
    QOpenGLExtraFunctions_GlBlendEquationi((QOpenGLExtraFunctions*)self, buf, mode);
}

void q_openglextrafunctions_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLExtraFunctions_GlBlendEquationSeparatei((QOpenGLExtraFunctions*)self, buf, modeRGB, modeAlpha);
}

void q_openglextrafunctions_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst) {
    QOpenGLExtraFunctions_GlBlendFunci((QOpenGLExtraFunctions*)self, buf, src, dst);
}

void q_openglextrafunctions_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    QOpenGLExtraFunctions_GlBlendFuncSeparatei((QOpenGLExtraFunctions*)self, buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void q_openglextrafunctions_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    QOpenGLExtraFunctions_GlColorMaski((QOpenGLExtraFunctions*)self, index, r, g, b, a);
}

uint8_t q_openglextrafunctions_gl_is_enabledi(void* self, uint32_t target, uint32_t index) {
    return QOpenGLExtraFunctions_GlIsEnabledi((QOpenGLExtraFunctions*)self, target, index);
}

void q_openglextrafunctions_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLExtraFunctions_GlDrawElementsBaseVertex((QOpenGLExtraFunctions*)self, mode, count, type, indices, basevertex);
}

void q_openglextrafunctions_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLExtraFunctions_GlDrawRangeElementsBaseVertex((QOpenGLExtraFunctions*)self, mode, start, end, count, type, indices, basevertex);
}

void q_openglextrafunctions_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex) {
    QOpenGLExtraFunctions_GlDrawElementsInstancedBaseVertex((QOpenGLExtraFunctions*)self, mode, count, type, indices, instancecount, basevertex);
}

void q_openglextrafunctions_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    QOpenGLExtraFunctions_GlFramebufferTexture((QOpenGLExtraFunctions*)self, target, attachment, texture, level);
}

void q_openglextrafunctions_gl_primitive_bounding_box(void* self, float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW) {
    QOpenGLExtraFunctions_GlPrimitiveBoundingBox((QOpenGLExtraFunctions*)self, minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

void q_openglextrafunctions_gl_readn_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, int32_t bufSize, void* data) {
    QOpenGLExtraFunctions_GlReadnPixels((QOpenGLExtraFunctions*)self, x, y, width, height, format, type, bufSize, data);
}

void q_openglextrafunctions_gl_getn_uniformfv(void* self, uint32_t program, int32_t location, int32_t bufSize, float* params) {
    QOpenGLExtraFunctions_GlGetnUniformfv((QOpenGLExtraFunctions*)self, program, location, bufSize, params);
}

void q_openglextrafunctions_gl_getn_uniformiv(void* self, uint32_t program, int32_t location, int32_t bufSize, int32_t* params) {
    QOpenGLExtraFunctions_GlGetnUniformiv((QOpenGLExtraFunctions*)self, program, location, bufSize, params);
}

void q_openglextrafunctions_gl_getn_uniformuiv(void* self, uint32_t program, int32_t location, int32_t bufSize, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetnUniformuiv((QOpenGLExtraFunctions*)self, program, location, bufSize, params);
}

void q_openglextrafunctions_gl_min_sample_shading(void* self, float value) {
    QOpenGLExtraFunctions_GlMinSampleShading((QOpenGLExtraFunctions*)self, value);
}

void q_openglextrafunctions_gl_patch_parameteri(void* self, uint32_t pname, int32_t value) {
    QOpenGLExtraFunctions_GlPatchParameteri((QOpenGLExtraFunctions*)self, pname, value);
}

void q_openglextrafunctions_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlTexParameterIiv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLExtraFunctions_GlTexParameterIuiv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetTexParameterIiv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetTexParameterIuiv((QOpenGLExtraFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLExtraFunctions_GlSamplerParameterIiv((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param) {
    QOpenGLExtraFunctions_GlSamplerParameterIuiv((QOpenGLExtraFunctions*)self, sampler, pname, param);
}

void q_openglextrafunctions_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLExtraFunctions_GlGetSamplerParameterIiv((QOpenGLExtraFunctions*)self, sampler, pname, params);
}

void q_openglextrafunctions_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    QOpenGLExtraFunctions_GlGetSamplerParameterIuiv((QOpenGLExtraFunctions*)self, sampler, pname, params);
}

void q_openglextrafunctions_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    QOpenGLExtraFunctions_GlTexBuffer((QOpenGLExtraFunctions*)self, target, internalformat, buffer);
}

void q_openglextrafunctions_gl_tex_buffer_range(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLExtraFunctions_GlTexBufferRange((QOpenGLExtraFunctions*)self, target, internalformat, buffer, offset, size);
}

void q_openglextrafunctions_gl_tex_storage3_d_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations) {
    QOpenGLExtraFunctions_GlTexStorage3DMultisample((QOpenGLExtraFunctions*)self, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

int32_t q_openglextrafunctions_open_g_l_features(void* self) {
    return QOpenGLFunctions_OpenGLFeatures((QOpenGLFunctions*)self);
}

bool q_openglextrafunctions_has_open_g_l_feature(void* self, int32_t feature) {
    return QOpenGLFunctions_HasOpenGLFeature((QOpenGLFunctions*)self, feature);
}

void q_openglextrafunctions_initialize_open_g_l_functions(void* self) {
    QOpenGLFunctions_InitializeOpenGLFunctions((QOpenGLFunctions*)self);
}

void q_openglextrafunctions_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_GlBindTexture((QOpenGLFunctions*)self, target, texture);
}

void q_openglextrafunctions_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_GlBlendFunc((QOpenGLFunctions*)self, sfactor, dfactor);
}

void q_openglextrafunctions_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_GlClear((QOpenGLFunctions*)self, mask);
}

void q_openglextrafunctions_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_GlClearColor((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglextrafunctions_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_GlClearStencil((QOpenGLFunctions*)self, s);
}

void q_openglextrafunctions_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_GlColorMask((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglextrafunctions_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_GlCopyTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglextrafunctions_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlCopyTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglextrafunctions_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_GlCullFace((QOpenGLFunctions*)self, mode);
}

void q_openglextrafunctions_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_GlDeleteTextures((QOpenGLFunctions*)self, n, textures);
}

void q_openglextrafunctions_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_GlDepthFunc((QOpenGLFunctions*)self, func);
}

void q_openglextrafunctions_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_GlDepthMask((QOpenGLFunctions*)self, flag);
}

void q_openglextrafunctions_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_GlDisable((QOpenGLFunctions*)self, cap);
}

void q_openglextrafunctions_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_GlDrawArrays((QOpenGLFunctions*)self, mode, first, count);
}

void q_openglextrafunctions_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_GlDrawElements((QOpenGLFunctions*)self, mode, count, type, indices);
}

void q_openglextrafunctions_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_GlEnable((QOpenGLFunctions*)self, cap);
}

void q_openglextrafunctions_gl_finish(void* self) {
    QOpenGLFunctions_GlFinish((QOpenGLFunctions*)self);
}

void q_openglextrafunctions_gl_flush(void* self) {
    QOpenGLFunctions_GlFlush((QOpenGLFunctions*)self);
}

void q_openglextrafunctions_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_GlFrontFace((QOpenGLFunctions*)self, mode);
}

void q_openglextrafunctions_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_GlGenTextures((QOpenGLFunctions*)self, n, textures);
}

void q_openglextrafunctions_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_GlGetBooleanv((QOpenGLFunctions*)self, pname, params);
}

void q_openglextrafunctions_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetFloatv((QOpenGLFunctions*)self, pname, params);
}

void q_openglextrafunctions_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetIntegerv((QOpenGLFunctions*)self, pname, params);
}

const uint8_t* q_openglextrafunctions_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_GlGetString((QOpenGLFunctions*)self, name);
}

void q_openglextrafunctions_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetTexParameterfv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetTexParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_GlHint((QOpenGLFunctions*)self, target, mode);
}

uint8_t q_openglextrafunctions_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_GlIsEnabled((QOpenGLFunctions*)self, cap);
}

uint8_t q_openglextrafunctions_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_GlIsTexture((QOpenGLFunctions*)self, texture);
}

void q_openglextrafunctions_gl_line_width(void* self, float width) {
    QOpenGLFunctions_GlLineWidth((QOpenGLFunctions*)self, width);
}

void q_openglextrafunctions_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_GlPixelStorei((QOpenGLFunctions*)self, pname, param);
}

void q_openglextrafunctions_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_GlPolygonOffset((QOpenGLFunctions*)self, factor, units);
}

void q_openglextrafunctions_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlReadPixels((QOpenGLFunctions*)self, x, y, width, height, format, type, pixels);
}

void q_openglextrafunctions_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlScissor((QOpenGLFunctions*)self, x, y, width, height);
}

void q_openglextrafunctions_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_GlStencilFunc((QOpenGLFunctions*)self, func, ref, mask);
}

void q_openglextrafunctions_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_GlStencilMask((QOpenGLFunctions*)self, mask);
}

void q_openglextrafunctions_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_GlStencilOp((QOpenGLFunctions*)self, fail, zfail, zpass);
}

void q_openglextrafunctions_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglextrafunctions_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_GlTexParameterf((QOpenGLFunctions*)self, target, pname, param);
}

void q_openglextrafunctions_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_GlTexParameterfv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_GlTexParameteri((QOpenGLFunctions*)self, target, pname, param);
}

void q_openglextrafunctions_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlTexParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglextrafunctions_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlViewport((QOpenGLFunctions*)self, x, y, width, height);
}

void q_openglextrafunctions_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_GlActiveTexture((QOpenGLFunctions*)self, texture);
}

void q_openglextrafunctions_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_GlAttachShader((QOpenGLFunctions*)self, program, shader);
}

void q_openglextrafunctions_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_GlBindAttribLocation((QOpenGLFunctions*)self, program, index, name);
}

void q_openglextrafunctions_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_GlBindBuffer((QOpenGLFunctions*)self, target, buffer);
}

void q_openglextrafunctions_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_GlBindFramebuffer((QOpenGLFunctions*)self, target, framebuffer);
}

void q_openglextrafunctions_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_GlBindRenderbuffer((QOpenGLFunctions*)self, target, renderbuffer);
}

void q_openglextrafunctions_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_GlBlendColor((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglextrafunctions_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_GlBlendEquation((QOpenGLFunctions*)self, mode);
}

void q_openglextrafunctions_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_GlBlendEquationSeparate((QOpenGLFunctions*)self, modeRGB, modeAlpha);
}

void q_openglextrafunctions_gl_blend_func_separate(void* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    QOpenGLFunctions_GlBlendFuncSeparate((QOpenGLFunctions*)self, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void q_openglextrafunctions_gl_buffer_data(void* self, uint32_t target, int64_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_GlBufferData((QOpenGLFunctions*)self, target, size, data, usage);
}

void q_openglextrafunctions_gl_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data) {
    QOpenGLFunctions_GlBufferSubData((QOpenGLFunctions*)self, target, offset, size, data);
}

void q_openglextrafunctions_gl_clear_depthf(void* self, float depth) {
    QOpenGLFunctions_GlClearDepthf((QOpenGLFunctions*)self, depth);
}

void q_openglextrafunctions_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_GlCompileShader((QOpenGLFunctions*)self, shader);
}

void q_openglextrafunctions_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_GlCompressedTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglextrafunctions_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_GlCompressedTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

uint32_t q_openglextrafunctions_gl_create_program(void* self) {
    return QOpenGLFunctions_GlCreateProgram((QOpenGLFunctions*)self);
}

uint32_t q_openglextrafunctions_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_GlCreateShader((QOpenGLFunctions*)self, type);
}

void q_openglextrafunctions_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_GlDeleteBuffers((QOpenGLFunctions*)self, n, buffers);
}

void q_openglextrafunctions_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_GlDeleteFramebuffers((QOpenGLFunctions*)self, n, framebuffers);
}

void q_openglextrafunctions_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlDeleteProgram((QOpenGLFunctions*)self, program);
}

void q_openglextrafunctions_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_GlDeleteRenderbuffers((QOpenGLFunctions*)self, n, renderbuffers);
}

void q_openglextrafunctions_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_GlDeleteShader((QOpenGLFunctions*)self, shader);
}

void q_openglextrafunctions_gl_depth_rangef(void* self, float zNear, float zFar) {
    QOpenGLFunctions_GlDepthRangef((QOpenGLFunctions*)self, zNear, zFar);
}

void q_openglextrafunctions_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_GlDetachShader((QOpenGLFunctions*)self, program, shader);
}

void q_openglextrafunctions_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_GlDisableVertexAttribArray((QOpenGLFunctions*)self, index);
}

void q_openglextrafunctions_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_GlEnableVertexAttribArray((QOpenGLFunctions*)self, index);
}

void q_openglextrafunctions_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_GlFramebufferRenderbuffer((QOpenGLFunctions*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglextrafunctions_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_GlFramebufferTexture2D((QOpenGLFunctions*)self, target, attachment, textarget, texture, level);
}

void q_openglextrafunctions_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_GlGenBuffers((QOpenGLFunctions*)self, n, buffers);
}

void q_openglextrafunctions_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_GlGenerateMipmap((QOpenGLFunctions*)self, target);
}

void q_openglextrafunctions_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_GlGenFramebuffers((QOpenGLFunctions*)self, n, framebuffers);
}

void q_openglextrafunctions_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_GlGenRenderbuffers((QOpenGLFunctions*)self, n, renderbuffers);
}

void q_openglextrafunctions_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders) {
    QOpenGLFunctions_GlGetAttachedShaders((QOpenGLFunctions*)self, program, maxcount, count, shaders);
}

int32_t q_openglextrafunctions_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_GlGetAttribLocation((QOpenGLFunctions*)self, program, name);
}

void q_openglextrafunctions_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetBufferParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions*)self, target, attachment, pname, params);
}

void q_openglextrafunctions_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetProgramiv((QOpenGLFunctions*)self, program, pname, params);
}

void q_openglextrafunctions_gl_get_program_info_log(void* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog) {
    QOpenGLFunctions_GlGetProgramInfoLog((QOpenGLFunctions*)self, program, bufsize, length, infolog);
}

void q_openglextrafunctions_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetRenderbufferParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglextrafunctions_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetShaderiv((QOpenGLFunctions*)self, shader, pname, params);
}

void q_openglextrafunctions_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog) {
    QOpenGLFunctions_GlGetShaderInfoLog((QOpenGLFunctions*)self, shader, bufsize, length, infolog);
}

void q_openglextrafunctions_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
    QOpenGLFunctions_GlGetShaderPrecisionFormat((QOpenGLFunctions*)self, shadertype, precisiontype, range, precision);
}

void q_openglextrafunctions_gl_get_shader_source(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source) {
    QOpenGLFunctions_GlGetShaderSource((QOpenGLFunctions*)self, shader, bufsize, length, source);
}

void q_openglextrafunctions_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_GlGetUniformfv((QOpenGLFunctions*)self, program, location, params);
}

void q_openglextrafunctions_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_GlGetUniformiv((QOpenGLFunctions*)self, program, location, params);
}

int32_t q_openglextrafunctions_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_GlGetUniformLocation((QOpenGLFunctions*)self, program, name);
}

void q_openglextrafunctions_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetVertexAttribfv((QOpenGLFunctions*)self, index, pname, params);
}

void q_openglextrafunctions_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetVertexAttribiv((QOpenGLFunctions*)self, index, pname, params);
}

void q_openglextrafunctions_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer) {
    QOpenGLFunctions_GlGetVertexAttribPointerv((QOpenGLFunctions*)self, index, pname, pointer);
}

uint8_t q_openglextrafunctions_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_GlIsBuffer((QOpenGLFunctions*)self, buffer);
}

uint8_t q_openglextrafunctions_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_GlIsFramebuffer((QOpenGLFunctions*)self, framebuffer);
}

uint8_t q_openglextrafunctions_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_GlIsProgram((QOpenGLFunctions*)self, program);
}

uint8_t q_openglextrafunctions_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_GlIsRenderbuffer((QOpenGLFunctions*)self, renderbuffer);
}

uint8_t q_openglextrafunctions_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_GlIsShader((QOpenGLFunctions*)self, shader);
}

void q_openglextrafunctions_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlLinkProgram((QOpenGLFunctions*)self, program);
}

void q_openglextrafunctions_gl_release_shader_compiler(void* self) {
    QOpenGLFunctions_GlReleaseShaderCompiler((QOpenGLFunctions*)self);
}

void q_openglextrafunctions_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_GlRenderbufferStorage((QOpenGLFunctions*)self, target, internalformat, width, height);
}

void q_openglextrafunctions_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_GlSampleCoverage((QOpenGLFunctions*)self, value, invert);
}

void q_openglextrafunctions_gl_shader_binary(void* self, int32_t n, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length) {
    QOpenGLFunctions_GlShaderBinary((QOpenGLFunctions*)self, n, shaders, binaryformat, binary, length);
}

void q_openglextrafunctions_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length) {
    QOpenGLFunctions_GlShaderSource((QOpenGLFunctions*)self, shader, count, stringVal, length);
}

void q_openglextrafunctions_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_GlStencilFuncSeparate((QOpenGLFunctions*)self, face, func, ref, mask);
}

void q_openglextrafunctions_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_GlStencilMaskSeparate((QOpenGLFunctions*)self, face, mask);
}

void q_openglextrafunctions_gl_stencil_op_separate(void* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_GlStencilOpSeparate((QOpenGLFunctions*)self, face, fail, zfail, zpass);
}

void q_openglextrafunctions_gl_uniform1f(void* self, int32_t location, float x) {
    QOpenGLFunctions_GlUniform1f((QOpenGLFunctions*)self, location, x);
}

void q_openglextrafunctions_gl_uniform1fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform1fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform1i(void* self, int32_t location, int32_t x) {
    QOpenGLFunctions_GlUniform1i((QOpenGLFunctions*)self, location, x);
}

void q_openglextrafunctions_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform1iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform2f(void* self, int32_t location, float x, float y) {
    QOpenGLFunctions_GlUniform2f((QOpenGLFunctions*)self, location, x, y);
}

void q_openglextrafunctions_gl_uniform2fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform2fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform2i(void* self, int32_t location, int32_t x, int32_t y) {
    QOpenGLFunctions_GlUniform2i((QOpenGLFunctions*)self, location, x, y);
}

void q_openglextrafunctions_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform2iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform3f(void* self, int32_t location, float x, float y, float z) {
    QOpenGLFunctions_GlUniform3f((QOpenGLFunctions*)self, location, x, y, z);
}

void q_openglextrafunctions_gl_uniform3fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform3fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform3i(void* self, int32_t location, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_GlUniform3i((QOpenGLFunctions*)self, location, x, y, z);
}

void q_openglextrafunctions_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform3iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform4f(void* self, int32_t location, float x, float y, float z, float w) {
    QOpenGLFunctions_GlUniform4f((QOpenGLFunctions*)self, location, x, y, z, w);
}

void q_openglextrafunctions_gl_uniform4fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform4fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform4i(void* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_GlUniform4i((QOpenGLFunctions*)self, location, x, y, z, w);
}

void q_openglextrafunctions_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform4iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglextrafunctions_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix2fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix3fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix4fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglextrafunctions_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlUseProgram((QOpenGLFunctions*)self, program);
}

void q_openglextrafunctions_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlValidateProgram((QOpenGLFunctions*)self, program);
}

void q_openglextrafunctions_gl_vertex_attrib1f(void* self, uint32_t indx, float x) {
    QOpenGLFunctions_GlVertexAttrib1f((QOpenGLFunctions*)self, indx, x);
}

void q_openglextrafunctions_gl_vertex_attrib1fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib1fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglextrafunctions_gl_vertex_attrib2f(void* self, uint32_t indx, float x, float y) {
    QOpenGLFunctions_GlVertexAttrib2f((QOpenGLFunctions*)self, indx, x, y);
}

void q_openglextrafunctions_gl_vertex_attrib2fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib2fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglextrafunctions_gl_vertex_attrib3f(void* self, uint32_t indx, float x, float y, float z) {
    QOpenGLFunctions_GlVertexAttrib3f((QOpenGLFunctions*)self, indx, x, y, z);
}

void q_openglextrafunctions_gl_vertex_attrib3fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib3fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglextrafunctions_gl_vertex_attrib4f(void* self, uint32_t indx, float x, float y, float z, float w) {
    QOpenGLFunctions_GlVertexAttrib4f((QOpenGLFunctions*)self, indx, x, y, z, w);
}

void q_openglextrafunctions_gl_vertex_attrib4fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib4fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglextrafunctions_gl_vertex_attrib_pointer(void* self, uint32_t indx, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* ptr) {
    QOpenGLFunctions_GlVertexAttribPointer((QOpenGLFunctions*)self, indx, size, type, normalized, stride, ptr);
}

void q_openglextrafunctions_delete(void* self) {
    QOpenGLExtraFunctions_Delete((QOpenGLExtraFunctions*)(self));
}
