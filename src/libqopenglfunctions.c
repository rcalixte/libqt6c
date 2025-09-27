#include "libqopenglcontext.hpp"
#include "libqopenglfunctions.hpp"
#include "libqopenglfunctions.h"

QOpenGLFunctions* q_openglfunctions_new() {
    return QOpenGLFunctions_new();
}

QOpenGLFunctions* q_openglfunctions_new2(void* context) {
    return QOpenGLFunctions_new2((QOpenGLContext*)context);
}

int32_t q_openglfunctions_open_g_l_features(void* self) {
    return QOpenGLFunctions_OpenGLFeatures((QOpenGLFunctions*)self);
}

bool q_openglfunctions_has_open_g_l_feature(void* self, int32_t feature) {
    return QOpenGLFunctions_HasOpenGLFeature((QOpenGLFunctions*)self, feature);
}

void q_openglfunctions_initialize_open_g_l_functions(void* self) {
    QOpenGLFunctions_InitializeOpenGLFunctions((QOpenGLFunctions*)self);
}

void q_openglfunctions_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_GlBindTexture((QOpenGLFunctions*)self, target, texture);
}

void q_openglfunctions_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_GlBlendFunc((QOpenGLFunctions*)self, sfactor, dfactor);
}

void q_openglfunctions_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_GlClear((QOpenGLFunctions*)self, mask);
}

void q_openglfunctions_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_GlClearColor((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglfunctions_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_GlClearStencil((QOpenGLFunctions*)self, s);
}

void q_openglfunctions_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_GlColorMask((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglfunctions_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_GlCopyTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlCopyTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_GlCullFace((QOpenGLFunctions*)self, mode);
}

void q_openglfunctions_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_GlDeleteTextures((QOpenGLFunctions*)self, n, textures);
}

void q_openglfunctions_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_GlDepthFunc((QOpenGLFunctions*)self, func);
}

void q_openglfunctions_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_GlDepthMask((QOpenGLFunctions*)self, flag);
}

void q_openglfunctions_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_GlDisable((QOpenGLFunctions*)self, cap);
}

void q_openglfunctions_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_GlDrawArrays((QOpenGLFunctions*)self, mode, first, count);
}

void q_openglfunctions_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_GlDrawElements((QOpenGLFunctions*)self, mode, count, type, indices);
}

void q_openglfunctions_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_GlEnable((QOpenGLFunctions*)self, cap);
}

void q_openglfunctions_gl_finish(void* self) {
    QOpenGLFunctions_GlFinish((QOpenGLFunctions*)self);
}

void q_openglfunctions_gl_flush(void* self) {
    QOpenGLFunctions_GlFlush((QOpenGLFunctions*)self);
}

void q_openglfunctions_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_GlFrontFace((QOpenGLFunctions*)self, mode);
}

void q_openglfunctions_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_GlGenTextures((QOpenGLFunctions*)self, n, textures);
}

void q_openglfunctions_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_GlGetBooleanv((QOpenGLFunctions*)self, pname, params);
}

void q_openglfunctions_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetFloatv((QOpenGLFunctions*)self, pname, params);
}

void q_openglfunctions_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetIntegerv((QOpenGLFunctions*)self, pname, params);
}

const uint8_t* q_openglfunctions_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_GlGetString((QOpenGLFunctions*)self, name);
}

void q_openglfunctions_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetTexParameterfv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetTexParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_GlHint((QOpenGLFunctions*)self, target, mode);
}

uint8_t q_openglfunctions_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_GlIsEnabled((QOpenGLFunctions*)self, cap);
}

uint8_t q_openglfunctions_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_GlIsTexture((QOpenGLFunctions*)self, texture);
}

void q_openglfunctions_gl_line_width(void* self, float width) {
    QOpenGLFunctions_GlLineWidth((QOpenGLFunctions*)self, width);
}

void q_openglfunctions_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_GlPixelStorei((QOpenGLFunctions*)self, pname, param);
}

void q_openglfunctions_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_GlPolygonOffset((QOpenGLFunctions*)self, factor, units);
}

void q_openglfunctions_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlReadPixels((QOpenGLFunctions*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlScissor((QOpenGLFunctions*)self, x, y, width, height);
}

void q_openglfunctions_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_GlStencilFunc((QOpenGLFunctions*)self, func, ref, mask);
}

void q_openglfunctions_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_GlStencilMask((QOpenGLFunctions*)self, mask);
}

void q_openglfunctions_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_GlStencilOp((QOpenGLFunctions*)self, fail, zfail, zpass);
}

void q_openglfunctions_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_GlTexParameterf((QOpenGLFunctions*)self, target, pname, param);
}

void q_openglfunctions_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_GlTexParameterfv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_GlTexParameteri((QOpenGLFunctions*)self, target, pname, param);
}

void q_openglfunctions_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlTexParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_GlTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_GlViewport((QOpenGLFunctions*)self, x, y, width, height);
}

void q_openglfunctions_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_GlActiveTexture((QOpenGLFunctions*)self, texture);
}

void q_openglfunctions_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_GlAttachShader((QOpenGLFunctions*)self, program, shader);
}

void q_openglfunctions_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_GlBindAttribLocation((QOpenGLFunctions*)self, program, index, name);
}

void q_openglfunctions_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_GlBindBuffer((QOpenGLFunctions*)self, target, buffer);
}

void q_openglfunctions_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_GlBindFramebuffer((QOpenGLFunctions*)self, target, framebuffer);
}

void q_openglfunctions_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_GlBindRenderbuffer((QOpenGLFunctions*)self, target, renderbuffer);
}

void q_openglfunctions_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_GlBlendColor((QOpenGLFunctions*)self, red, green, blue, alpha);
}

void q_openglfunctions_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_GlBlendEquation((QOpenGLFunctions*)self, mode);
}

void q_openglfunctions_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_GlBlendEquationSeparate((QOpenGLFunctions*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_gl_blend_func_separate(void* self, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    QOpenGLFunctions_GlBlendFuncSeparate((QOpenGLFunctions*)self, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void q_openglfunctions_gl_buffer_data(void* self, uint32_t target, int64_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_GlBufferData((QOpenGLFunctions*)self, target, size, data, usage);
}

void q_openglfunctions_gl_buffer_sub_data(void* self, uint32_t target, int64_t offset, int64_t size, void* data) {
    QOpenGLFunctions_GlBufferSubData((QOpenGLFunctions*)self, target, offset, size, data);
}

void q_openglfunctions_gl_clear_depthf(void* self, float depth) {
    QOpenGLFunctions_GlClearDepthf((QOpenGLFunctions*)self, depth);
}

void q_openglfunctions_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_GlCompileShader((QOpenGLFunctions*)self, shader);
}

void q_openglfunctions_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_GlCompressedTexImage2D((QOpenGLFunctions*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_GlCompressedTexSubImage2D((QOpenGLFunctions*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

uint32_t q_openglfunctions_gl_create_program(void* self) {
    return QOpenGLFunctions_GlCreateProgram((QOpenGLFunctions*)self);
}

uint32_t q_openglfunctions_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_GlCreateShader((QOpenGLFunctions*)self, type);
}

void q_openglfunctions_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_GlDeleteBuffers((QOpenGLFunctions*)self, n, buffers);
}

void q_openglfunctions_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_GlDeleteFramebuffers((QOpenGLFunctions*)self, n, framebuffers);
}

void q_openglfunctions_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlDeleteProgram((QOpenGLFunctions*)self, program);
}

void q_openglfunctions_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_GlDeleteRenderbuffers((QOpenGLFunctions*)self, n, renderbuffers);
}

void q_openglfunctions_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_GlDeleteShader((QOpenGLFunctions*)self, shader);
}

void q_openglfunctions_gl_depth_rangef(void* self, float zNear, float zFar) {
    QOpenGLFunctions_GlDepthRangef((QOpenGLFunctions*)self, zNear, zFar);
}

void q_openglfunctions_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_GlDetachShader((QOpenGLFunctions*)self, program, shader);
}

void q_openglfunctions_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_GlDisableVertexAttribArray((QOpenGLFunctions*)self, index);
}

void q_openglfunctions_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_GlEnableVertexAttribArray((QOpenGLFunctions*)self, index);
}

void q_openglfunctions_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_GlFramebufferRenderbuffer((QOpenGLFunctions*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglfunctions_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_GlFramebufferTexture2D((QOpenGLFunctions*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_GlGenBuffers((QOpenGLFunctions*)self, n, buffers);
}

void q_openglfunctions_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_GlGenerateMipmap((QOpenGLFunctions*)self, target);
}

void q_openglfunctions_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_GlGenFramebuffers((QOpenGLFunctions*)self, n, framebuffers);
}

void q_openglfunctions_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_GlGenRenderbuffers((QOpenGLFunctions*)self, n, renderbuffers);
}

void q_openglfunctions_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxcount, int32_t* count, uint32_t* shaders) {
    QOpenGLFunctions_GlGetAttachedShaders((QOpenGLFunctions*)self, program, maxcount, count, shaders);
}

int32_t q_openglfunctions_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_GlGetAttribLocation((QOpenGLFunctions*)self, program, name);
}

void q_openglfunctions_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetBufferParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions*)self, target, attachment, pname, params);
}

void q_openglfunctions_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetProgramiv((QOpenGLFunctions*)self, program, pname, params);
}

void q_openglfunctions_gl_get_program_info_log(void* self, uint32_t program, int32_t bufsize, int32_t* length, char* infolog) {
    QOpenGLFunctions_GlGetProgramInfoLog((QOpenGLFunctions*)self, program, bufsize, length, infolog);
}

void q_openglfunctions_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetRenderbufferParameteriv((QOpenGLFunctions*)self, target, pname, params);
}

void q_openglfunctions_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetShaderiv((QOpenGLFunctions*)self, shader, pname, params);
}

void q_openglfunctions_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* infolog) {
    QOpenGLFunctions_GlGetShaderInfoLog((QOpenGLFunctions*)self, shader, bufsize, length, infolog);
}

void q_openglfunctions_gl_get_shader_precision_format(void* self, uint32_t shadertype, uint32_t precisiontype, int32_t* range, int32_t* precision) {
    QOpenGLFunctions_GlGetShaderPrecisionFormat((QOpenGLFunctions*)self, shadertype, precisiontype, range, precision);
}

void q_openglfunctions_gl_get_shader_source(void* self, uint32_t shader, int32_t bufsize, int32_t* length, char* source) {
    QOpenGLFunctions_GlGetShaderSource((QOpenGLFunctions*)self, shader, bufsize, length, source);
}

void q_openglfunctions_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_GlGetUniformfv((QOpenGLFunctions*)self, program, location, params);
}

void q_openglfunctions_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_GlGetUniformiv((QOpenGLFunctions*)self, program, location, params);
}

int32_t q_openglfunctions_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_GlGetUniformLocation((QOpenGLFunctions*)self, program, name);
}

void q_openglfunctions_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_GlGetVertexAttribfv((QOpenGLFunctions*)self, index, pname, params);
}

void q_openglfunctions_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_GlGetVertexAttribiv((QOpenGLFunctions*)self, index, pname, params);
}

void q_openglfunctions_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer) {
    QOpenGLFunctions_GlGetVertexAttribPointerv((QOpenGLFunctions*)self, index, pname, pointer);
}

uint8_t q_openglfunctions_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_GlIsBuffer((QOpenGLFunctions*)self, buffer);
}

uint8_t q_openglfunctions_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_GlIsFramebuffer((QOpenGLFunctions*)self, framebuffer);
}

uint8_t q_openglfunctions_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_GlIsProgram((QOpenGLFunctions*)self, program);
}

uint8_t q_openglfunctions_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_GlIsRenderbuffer((QOpenGLFunctions*)self, renderbuffer);
}

uint8_t q_openglfunctions_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_GlIsShader((QOpenGLFunctions*)self, shader);
}

void q_openglfunctions_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlLinkProgram((QOpenGLFunctions*)self, program);
}

void q_openglfunctions_gl_release_shader_compiler(void* self) {
    QOpenGLFunctions_GlReleaseShaderCompiler((QOpenGLFunctions*)self);
}

void q_openglfunctions_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_GlRenderbufferStorage((QOpenGLFunctions*)self, target, internalformat, width, height);
}

void q_openglfunctions_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_GlSampleCoverage((QOpenGLFunctions*)self, value, invert);
}

void q_openglfunctions_gl_shader_binary(void* self, int32_t n, uint32_t* shaders, uint32_t binaryformat, void* binary, int32_t length) {
    QOpenGLFunctions_GlShaderBinary((QOpenGLFunctions*)self, n, shaders, binaryformat, binary, length);
}

void q_openglfunctions_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length) {
    QOpenGLFunctions_GlShaderSource((QOpenGLFunctions*)self, shader, count, stringVal, length);
}

void q_openglfunctions_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_GlStencilFuncSeparate((QOpenGLFunctions*)self, face, func, ref, mask);
}

void q_openglfunctions_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_GlStencilMaskSeparate((QOpenGLFunctions*)self, face, mask);
}

void q_openglfunctions_gl_stencil_op_separate(void* self, uint32_t face, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_GlStencilOpSeparate((QOpenGLFunctions*)self, face, fail, zfail, zpass);
}

void q_openglfunctions_gl_uniform1f(void* self, int32_t location, float x) {
    QOpenGLFunctions_GlUniform1f((QOpenGLFunctions*)self, location, x);
}

void q_openglfunctions_gl_uniform1fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform1fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform1i(void* self, int32_t location, int32_t x) {
    QOpenGLFunctions_GlUniform1i((QOpenGLFunctions*)self, location, x);
}

void q_openglfunctions_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform1iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform2f(void* self, int32_t location, float x, float y) {
    QOpenGLFunctions_GlUniform2f((QOpenGLFunctions*)self, location, x, y);
}

void q_openglfunctions_gl_uniform2fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform2fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform2i(void* self, int32_t location, int32_t x, int32_t y) {
    QOpenGLFunctions_GlUniform2i((QOpenGLFunctions*)self, location, x, y);
}

void q_openglfunctions_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform2iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform3f(void* self, int32_t location, float x, float y, float z) {
    QOpenGLFunctions_GlUniform3f((QOpenGLFunctions*)self, location, x, y, z);
}

void q_openglfunctions_gl_uniform3fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform3fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform3i(void* self, int32_t location, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_GlUniform3i((QOpenGLFunctions*)self, location, x, y, z);
}

void q_openglfunctions_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform3iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform4f(void* self, int32_t location, float x, float y, float z, float w) {
    QOpenGLFunctions_GlUniform4f((QOpenGLFunctions*)self, location, x, y, z, w);
}

void q_openglfunctions_gl_uniform4fv(void* self, int32_t location, int32_t count, float* v) {
    QOpenGLFunctions_GlUniform4fv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform4i(void* self, int32_t location, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_GlUniform4i((QOpenGLFunctions*)self, location, x, y, z, w);
}

void q_openglfunctions_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* v) {
    QOpenGLFunctions_GlUniform4iv((QOpenGLFunctions*)self, location, count, v);
}

void q_openglfunctions_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix2fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglfunctions_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix3fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglfunctions_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_GlUniformMatrix4fv((QOpenGLFunctions*)self, location, count, transpose, value);
}

void q_openglfunctions_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlUseProgram((QOpenGLFunctions*)self, program);
}

void q_openglfunctions_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_GlValidateProgram((QOpenGLFunctions*)self, program);
}

void q_openglfunctions_gl_vertex_attrib1f(void* self, uint32_t indx, float x) {
    QOpenGLFunctions_GlVertexAttrib1f((QOpenGLFunctions*)self, indx, x);
}

void q_openglfunctions_gl_vertex_attrib1fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib1fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglfunctions_gl_vertex_attrib2f(void* self, uint32_t indx, float x, float y) {
    QOpenGLFunctions_GlVertexAttrib2f((QOpenGLFunctions*)self, indx, x, y);
}

void q_openglfunctions_gl_vertex_attrib2fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib2fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglfunctions_gl_vertex_attrib3f(void* self, uint32_t indx, float x, float y, float z) {
    QOpenGLFunctions_GlVertexAttrib3f((QOpenGLFunctions*)self, indx, x, y, z);
}

void q_openglfunctions_gl_vertex_attrib3fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib3fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglfunctions_gl_vertex_attrib4f(void* self, uint32_t indx, float x, float y, float z, float w) {
    QOpenGLFunctions_GlVertexAttrib4f((QOpenGLFunctions*)self, indx, x, y, z, w);
}

void q_openglfunctions_gl_vertex_attrib4fv(void* self, uint32_t indx, float* values) {
    QOpenGLFunctions_GlVertexAttrib4fv((QOpenGLFunctions*)self, indx, values);
}

void q_openglfunctions_gl_vertex_attrib_pointer(void* self, uint32_t indx, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* ptr) {
    QOpenGLFunctions_GlVertexAttribPointer((QOpenGLFunctions*)self, indx, size, type, normalized, stride, ptr);
}

void q_openglfunctions_delete(void* self) {
    QOpenGLFunctions_Delete((QOpenGLFunctions*)(self));
}
