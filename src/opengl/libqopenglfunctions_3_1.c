#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_3_1.hpp"
#include "libqopenglfunctions_3_1.h"

QOpenGLFunctions_3_1* q_openglfunctions_3_1_new() {
    return QOpenGLFunctions_3_1_new();
}

bool q_openglfunctions_3_1_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_1_InitializeOpenGLFunctions((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_1_OnInitializeOpenGLFunctions((QOpenGLFunctions_3_1*)self, (intptr_t)callback);
}

bool q_openglfunctions_3_1_qbase_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_1_QBaseInitializeOpenGLFunctions((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlViewport((QOpenGLFunctions_3_1*)self, x, y, width, height);
}

void q_openglfunctions_3_1_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_3_1_GlDepthRange((QOpenGLFunctions_3_1*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_3_1_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_3_1_GlIsEnabled((QOpenGLFunctions_3_1*)self, cap);
}

void q_openglfunctions_3_1_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetTexLevelParameteriv((QOpenGLFunctions_3_1*)self, target, level, pname, params);
}

void q_openglfunctions_3_1_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlGetTexLevelParameterfv((QOpenGLFunctions_3_1*)self, target, level, pname, params);
}

void q_openglfunctions_3_1_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetTexParameteriv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlGetTexParameterfv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlGetTexImage((QOpenGLFunctions_3_1*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_3_1_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_3_1_GlGetString((QOpenGLFunctions_3_1*)self, name);
}

void q_openglfunctions_3_1_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetIntegerv((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlGetFloatv((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_3_1_GlGetDoublev((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_3_1_GlGetBooleanv((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlReadPixels((QOpenGLFunctions_3_1*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_3_1_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_1_GlReadBuffer((QOpenGLFunctions_3_1*)self, mode);
}

void q_openglfunctions_3_1_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_1_GlPixelStorei((QOpenGLFunctions_3_1*)self, pname, param);
}

void q_openglfunctions_3_1_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_1_GlPixelStoref((QOpenGLFunctions_3_1*)self, pname, param);
}

void q_openglfunctions_3_1_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_3_1_GlDepthFunc((QOpenGLFunctions_3_1*)self, func);
}

void q_openglfunctions_3_1_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_3_1_GlStencilOp((QOpenGLFunctions_3_1*)self, fail, zfail, zpass);
}

void q_openglfunctions_3_1_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_1_GlStencilFunc((QOpenGLFunctions_3_1*)self, func, ref, mask);
}

void q_openglfunctions_3_1_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_3_1_GlLogicOp((QOpenGLFunctions_3_1*)self, opcode);
}

void q_openglfunctions_3_1_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_3_1_GlBlendFunc((QOpenGLFunctions_3_1*)self, sfactor, dfactor);
}

void q_openglfunctions_3_1_gl_flush(void* self) {
    QOpenGLFunctions_3_1_GlFlush((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_finish(void* self) {
    QOpenGLFunctions_3_1_GlFinish((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_1_GlEnable((QOpenGLFunctions_3_1*)self, cap);
}

void q_openglfunctions_3_1_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_1_GlDisable((QOpenGLFunctions_3_1*)self, cap);
}

void q_openglfunctions_3_1_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_3_1_GlDepthMask((QOpenGLFunctions_3_1*)self, flag);
}

void q_openglfunctions_3_1_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_3_1_GlColorMask((QOpenGLFunctions_3_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_1_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_3_1_GlStencilMask((QOpenGLFunctions_3_1*)self, mask);
}

void q_openglfunctions_3_1_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_3_1_GlClearDepth((QOpenGLFunctions_3_1*)self, depth);
}

void q_openglfunctions_3_1_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_3_1_GlClearStencil((QOpenGLFunctions_3_1*)self, s);
}

void q_openglfunctions_3_1_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_1_GlClearColor((QOpenGLFunctions_3_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_1_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_3_1_GlClear((QOpenGLFunctions_3_1*)self, mask);
}

void q_openglfunctions_3_1_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_1_GlDrawBuffer((QOpenGLFunctions_3_1*)self, mode);
}

void q_openglfunctions_3_1_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexImage2D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_3_1_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexImage1D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_3_1_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlTexParameteriv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_1_GlTexParameteri((QOpenGLFunctions_3_1*)self, target, pname, param);
}

void q_openglfunctions_3_1_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlTexParameterfv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_3_1_GlTexParameterf((QOpenGLFunctions_3_1*)self, target, pname, param);
}

void q_openglfunctions_3_1_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlScissor((QOpenGLFunctions_3_1*)self, x, y, width, height);
}

void q_openglfunctions_3_1_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_3_1_GlPolygonMode((QOpenGLFunctions_3_1*)self, face, mode);
}

void q_openglfunctions_3_1_gl_point_size(void* self, float size) {
    QOpenGLFunctions_3_1_GlPointSize((QOpenGLFunctions_3_1*)self, size);
}

void q_openglfunctions_3_1_gl_line_width(void* self, float width) {
    QOpenGLFunctions_3_1_GlLineWidth((QOpenGLFunctions_3_1*)self, width);
}

void q_openglfunctions_3_1_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_3_1_GlHint((QOpenGLFunctions_3_1*)self, target, mode);
}

void q_openglfunctions_3_1_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_1_GlFrontFace((QOpenGLFunctions_3_1*)self, mode);
}

void q_openglfunctions_3_1_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_1_GlCullFace((QOpenGLFunctions_3_1*)self, mode);
}

uint8_t q_openglfunctions_3_1_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_3_1_GlIsTexture((QOpenGLFunctions_3_1*)self, texture);
}

void q_openglfunctions_3_1_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_1_GlGenTextures((QOpenGLFunctions_3_1*)self, n, textures);
}

void q_openglfunctions_3_1_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_1_GlDeleteTextures((QOpenGLFunctions_3_1*)self, n, textures);
}

void q_openglfunctions_3_1_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_3_1_GlBindTexture((QOpenGLFunctions_3_1*)self, target, texture);
}

void q_openglfunctions_3_1_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexSubImage2D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_3_1_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexSubImage1D((QOpenGLFunctions_3_1*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_3_1_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlCopyTexSubImage2D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_3_1_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_1_GlCopyTexSubImage1D((QOpenGLFunctions_3_1*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_3_1_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_3_1_GlCopyTexImage2D((QOpenGLFunctions_3_1*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_3_1_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_3_1_GlCopyTexImage1D((QOpenGLFunctions_3_1*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_3_1_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_3_1_GlPolygonOffset((QOpenGLFunctions_3_1*)self, factor, units);
}

void q_openglfunctions_3_1_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_1_GlDrawElements((QOpenGLFunctions_3_1*)self, mode, count, type, indices);
}

void q_openglfunctions_3_1_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_3_1_GlDrawArrays((QOpenGLFunctions_3_1*)self, mode, first, count);
}

void q_openglfunctions_3_1_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlCopyTexSubImage3D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglfunctions_3_1_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexSubImage3D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglfunctions_3_1_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_1_GlTexImage3D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglfunctions_3_1_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_1_GlDrawRangeElements((QOpenGLFunctions_3_1*)self, mode, start, end, count, type, indices);
}

void q_openglfunctions_3_1_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_3_1_GlBlendEquation((QOpenGLFunctions_3_1*)self, mode);
}

void q_openglfunctions_3_1_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_1_GlBlendColor((QOpenGLFunctions_3_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_1_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img) {
    QOpenGLFunctions_3_1_GlGetCompressedTexImage((QOpenGLFunctions_3_1*)self, target, level, img);
}

void q_openglfunctions_3_1_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexSubImage1D((QOpenGLFunctions_3_1*)self, target, level, xoffset, width, format, imageSize, data);
}

void q_openglfunctions_3_1_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexSubImage2D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void q_openglfunctions_3_1_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexSubImage3D((QOpenGLFunctions_3_1*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglfunctions_3_1_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexImage1D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, border, imageSize, data);
}

void q_openglfunctions_3_1_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexImage2D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_3_1_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_1_GlCompressedTexImage3D((QOpenGLFunctions_3_1*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglfunctions_3_1_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_3_1_GlSampleCoverage((QOpenGLFunctions_3_1*)self, value, invert);
}

void q_openglfunctions_3_1_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_3_1_GlActiveTexture((QOpenGLFunctions_3_1*)self, texture);
}

void q_openglfunctions_3_1_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlPointParameteriv((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_point_parameteri(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_1_GlPointParameteri((QOpenGLFunctions_3_1*)self, pname, param);
}

void q_openglfunctions_3_1_gl_point_parameterfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlPointParameterfv((QOpenGLFunctions_3_1*)self, pname, params);
}

void q_openglfunctions_3_1_gl_point_parameterf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_1_GlPointParameterf((QOpenGLFunctions_3_1*)self, pname, param);
}

void q_openglfunctions_3_1_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount) {
    QOpenGLFunctions_3_1_GlMultiDrawArrays((QOpenGLFunctions_3_1*)self, mode, first, count, drawcount);
}

void q_openglfunctions_3_1_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    QOpenGLFunctions_3_1_GlBlendFuncSeparate((QOpenGLFunctions_3_1*)self, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void q_openglfunctions_3_1_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetBufferParameteriv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

uint8_t q_openglfunctions_3_1_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLFunctions_3_1_GlUnmapBuffer((QOpenGLFunctions_3_1*)self, target);
}

void* q_openglfunctions_3_1_gl_map_buffer(void* self, uint32_t target, uint32_t access) {
    return QOpenGLFunctions_3_1_GlMapBuffer((QOpenGLFunctions_3_1*)self, target, access);
}

void q_openglfunctions_3_1_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_1_GlGetBufferSubData((QOpenGLFunctions_3_1*)self, target, offset, size, data);
}

void q_openglfunctions_3_1_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_1_GlBufferSubData((QOpenGLFunctions_3_1*)self, target, offset, size, data);
}

void q_openglfunctions_3_1_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_3_1_GlBufferData((QOpenGLFunctions_3_1*)self, target, size, data, usage);
}

uint8_t q_openglfunctions_3_1_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_3_1_GlIsBuffer((QOpenGLFunctions_3_1*)self, buffer);
}

void q_openglfunctions_3_1_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_1_GlGenBuffers((QOpenGLFunctions_3_1*)self, n, buffers);
}

void q_openglfunctions_3_1_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_1_GlDeleteBuffers((QOpenGLFunctions_3_1*)self, n, buffers);
}

void q_openglfunctions_3_1_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_3_1_GlBindBuffer((QOpenGLFunctions_3_1*)self, target, buffer);
}

void q_openglfunctions_3_1_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_1_GlGetQueryObjectuiv((QOpenGLFunctions_3_1*)self, id, pname, params);
}

void q_openglfunctions_3_1_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetQueryObjectiv((QOpenGLFunctions_3_1*)self, id, pname, params);
}

void q_openglfunctions_3_1_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetQueryiv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_end_query(void* self, uint32_t target) {
    QOpenGLFunctions_3_1_GlEndQuery((QOpenGLFunctions_3_1*)self, target);
}

void q_openglfunctions_3_1_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_3_1_GlBeginQuery((QOpenGLFunctions_3_1*)self, target, id);
}

uint8_t q_openglfunctions_3_1_gl_is_query(void* self, uint32_t id) {
    return QOpenGLFunctions_3_1_GlIsQuery((QOpenGLFunctions_3_1*)self, id);
}

void q_openglfunctions_3_1_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_1_GlDeleteQueries((QOpenGLFunctions_3_1*)self, n, ids);
}

void q_openglfunctions_3_1_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_1_GlGenQueries((QOpenGLFunctions_3_1*)self, n, ids);
}

void q_openglfunctions_3_1_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_1_GlVertexAttribPointer((QOpenGLFunctions_3_1*)self, index, size, type, normalized, stride, pointer);
}

void q_openglfunctions_3_1_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_1_GlValidateProgram((QOpenGLFunctions_3_1*)self, program);
}

void q_openglfunctions_3_1_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix4fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix3fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix2fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_1_GlUniform4iv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_1_GlUniform3iv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_1_GlUniform2iv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_1_GlUniform1iv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_1_GlUniform4fv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_1_GlUniform3fv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_1_GlUniform2fv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_1_GlUniform1fv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLFunctions_3_1_GlUniform4i((QOpenGLFunctions_3_1*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_1_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLFunctions_3_1_GlUniform3i((QOpenGLFunctions_3_1*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_1_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLFunctions_3_1_GlUniform2i((QOpenGLFunctions_3_1*)self, location, v0, v1);
}

void q_openglfunctions_3_1_gl_uniform1i(void* self, int32_t location, int32_t v0) {
    QOpenGLFunctions_3_1_GlUniform1i((QOpenGLFunctions_3_1*)self, location, v0);
}

void q_openglfunctions_3_1_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLFunctions_3_1_GlUniform4f((QOpenGLFunctions_3_1*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_1_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2) {
    QOpenGLFunctions_3_1_GlUniform3f((QOpenGLFunctions_3_1*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_1_gl_uniform2f(void* self, int32_t location, float v0, float v1) {
    QOpenGLFunctions_3_1_GlUniform2f((QOpenGLFunctions_3_1*)self, location, v0, v1);
}

void q_openglfunctions_3_1_gl_uniform1f(void* self, int32_t location, float v0) {
    QOpenGLFunctions_3_1_GlUniform1f((QOpenGLFunctions_3_1*)self, location, v0);
}

void q_openglfunctions_3_1_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_1_GlUseProgram((QOpenGLFunctions_3_1*)self, program);
}

void q_openglfunctions_3_1_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_1_GlLinkProgram((QOpenGLFunctions_3_1*)self, program);
}

uint8_t q_openglfunctions_3_1_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_3_1_GlIsShader((QOpenGLFunctions_3_1*)self, shader);
}

uint8_t q_openglfunctions_3_1_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_3_1_GlIsProgram((QOpenGLFunctions_3_1*)self, program);
}

void q_openglfunctions_3_1_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetVertexAttribiv((QOpenGLFunctions_3_1*)self, index, pname, params);
}

void q_openglfunctions_3_1_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_3_1_GlGetVertexAttribfv((QOpenGLFunctions_3_1*)self, index, pname, params);
}

void q_openglfunctions_3_1_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params) {
    QOpenGLFunctions_3_1_GlGetVertexAttribdv((QOpenGLFunctions_3_1*)self, index, pname, params);
}

void q_openglfunctions_3_1_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetUniformiv((QOpenGLFunctions_3_1*)self, program, location, params);
}

void q_openglfunctions_3_1_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_3_1_GlGetUniformfv((QOpenGLFunctions_3_1*)self, program, location, params);
}

int32_t q_openglfunctions_3_1_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_1_GlGetUniformLocation((QOpenGLFunctions_3_1*)self, program, name);
}

void q_openglfunctions_3_1_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source) {
    QOpenGLFunctions_3_1_GlGetShaderSource((QOpenGLFunctions_3_1*)self, shader, bufSize, length, source);
}

void q_openglfunctions_3_1_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_1_GlGetShaderInfoLog((QOpenGLFunctions_3_1*)self, shader, bufSize, length, infoLog);
}

void q_openglfunctions_3_1_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetShaderiv((QOpenGLFunctions_3_1*)self, shader, pname, params);
}

void q_openglfunctions_3_1_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_1_GlGetProgramInfoLog((QOpenGLFunctions_3_1*)self, program, bufSize, length, infoLog);
}

void q_openglfunctions_3_1_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetProgramiv((QOpenGLFunctions_3_1*)self, program, pname, params);
}

int32_t q_openglfunctions_3_1_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_1_GlGetAttribLocation((QOpenGLFunctions_3_1*)self, program, name);
}

void q_openglfunctions_3_1_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    QOpenGLFunctions_3_1_GlGetAttachedShaders((QOpenGLFunctions_3_1*)self, program, maxCount, count, obj);
}

void q_openglfunctions_3_1_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_1_GlEnableVertexAttribArray((QOpenGLFunctions_3_1*)self, index);
}

void q_openglfunctions_3_1_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_1_GlDisableVertexAttribArray((QOpenGLFunctions_3_1*)self, index);
}

void q_openglfunctions_3_1_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_1_GlDetachShader((QOpenGLFunctions_3_1*)self, program, shader);
}

void q_openglfunctions_3_1_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_1_GlDeleteShader((QOpenGLFunctions_3_1*)self, shader);
}

void q_openglfunctions_3_1_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_1_GlDeleteProgram((QOpenGLFunctions_3_1*)self, program);
}

uint32_t q_openglfunctions_3_1_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_3_1_GlCreateShader((QOpenGLFunctions_3_1*)self, type);
}

uint32_t q_openglfunctions_3_1_gl_create_program(void* self) {
    return QOpenGLFunctions_3_1_GlCreateProgram((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_1_GlCompileShader((QOpenGLFunctions_3_1*)self, shader);
}

void q_openglfunctions_3_1_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_3_1_GlBindAttribLocation((QOpenGLFunctions_3_1*)self, program, index, name);
}

void q_openglfunctions_3_1_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_1_GlAttachShader((QOpenGLFunctions_3_1*)self, program, shader);
}

void q_openglfunctions_3_1_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_3_1_GlStencilMaskSeparate((QOpenGLFunctions_3_1*)self, face, mask);
}

void q_openglfunctions_3_1_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_1_GlStencilFuncSeparate((QOpenGLFunctions_3_1*)self, face, func, ref, mask);
}

void q_openglfunctions_3_1_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    QOpenGLFunctions_3_1_GlStencilOpSeparate((QOpenGLFunctions_3_1*)self, face, sfail, dpfail, dppass);
}

void q_openglfunctions_3_1_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_3_1_GlBlendEquationSeparate((QOpenGLFunctions_3_1*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_3_1_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix4x3fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix3x4fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix4x2fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix2x4fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix3x2fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

void q_openglfunctions_3_1_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_1_GlUniformMatrix2x3fv((QOpenGLFunctions_3_1*)self, location, count, transpose, value);
}

uint8_t q_openglfunctions_3_1_gl_is_vertex_array(void* self, uint32_t array) {
    return QOpenGLFunctions_3_1_GlIsVertexArray((QOpenGLFunctions_3_1*)self, array);
}

void q_openglfunctions_3_1_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_1_GlGenVertexArrays((QOpenGLFunctions_3_1*)self, n, arrays);
}

void q_openglfunctions_3_1_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_1_GlDeleteVertexArrays((QOpenGLFunctions_3_1*)self, n, arrays);
}

void q_openglfunctions_3_1_gl_bind_vertex_array(void* self, uint32_t array) {
    QOpenGLFunctions_3_1_GlBindVertexArray((QOpenGLFunctions_3_1*)self, array);
}

void q_openglfunctions_3_1_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length) {
    QOpenGLFunctions_3_1_GlFlushMappedBufferRange((QOpenGLFunctions_3_1*)self, target, offset, length);
}

void* q_openglfunctions_3_1_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access) {
    return QOpenGLFunctions_3_1_GlMapBufferRange((QOpenGLFunctions_3_1*)self, target, offset, length, access);
}

void q_openglfunctions_3_1_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    QOpenGLFunctions_3_1_GlFramebufferTextureLayer((QOpenGLFunctions_3_1*)self, target, attachment, texture, level, layer);
}

void q_openglfunctions_3_1_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlRenderbufferStorageMultisample((QOpenGLFunctions_3_1*)self, target, samples, internalformat, width, height);
}

void q_openglfunctions_3_1_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    QOpenGLFunctions_3_1_GlBlitFramebuffer((QOpenGLFunctions_3_1*)self, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void q_openglfunctions_3_1_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_3_1_GlGenerateMipmap((QOpenGLFunctions_3_1*)self, target);
}

void q_openglfunctions_3_1_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions_3_1*)self, target, attachment, pname, params);
}

void q_openglfunctions_3_1_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_3_1_GlFramebufferRenderbuffer((QOpenGLFunctions_3_1*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglfunctions_3_1_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    QOpenGLFunctions_3_1_GlFramebufferTexture3D((QOpenGLFunctions_3_1*)self, target, attachment, textarget, texture, level, zoffset);
}

void q_openglfunctions_3_1_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_1_GlFramebufferTexture2D((QOpenGLFunctions_3_1*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_1_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_1_GlFramebufferTexture1D((QOpenGLFunctions_3_1*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_1_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_1_GlGenFramebuffers((QOpenGLFunctions_3_1*)self, n, framebuffers);
}

void q_openglfunctions_3_1_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_1_GlDeleteFramebuffers((QOpenGLFunctions_3_1*)self, n, framebuffers);
}

void q_openglfunctions_3_1_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_3_1_GlBindFramebuffer((QOpenGLFunctions_3_1*)self, target, framebuffer);
}

uint8_t q_openglfunctions_3_1_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_3_1_GlIsFramebuffer((QOpenGLFunctions_3_1*)self, framebuffer);
}

void q_openglfunctions_3_1_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetRenderbufferParameteriv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_1_GlRenderbufferStorage((QOpenGLFunctions_3_1*)self, target, internalformat, width, height);
}

void q_openglfunctions_3_1_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_1_GlGenRenderbuffers((QOpenGLFunctions_3_1*)self, n, renderbuffers);
}

void q_openglfunctions_3_1_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_1_GlDeleteRenderbuffers((QOpenGLFunctions_3_1*)self, n, renderbuffers);
}

void q_openglfunctions_3_1_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_3_1_GlBindRenderbuffer((QOpenGLFunctions_3_1*)self, target, renderbuffer);
}

uint8_t q_openglfunctions_3_1_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_3_1_GlIsRenderbuffer((QOpenGLFunctions_3_1*)self, renderbuffer);
}

const uint8_t* q_openglfunctions_3_1_gl_get_stringi(void* self, uint32_t name, uint32_t index) {
    return (uint8_t*)QOpenGLFunctions_3_1_GlGetStringi((QOpenGLFunctions_3_1*)self, name, index);
}

void q_openglfunctions_3_1_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    QOpenGLFunctions_3_1_GlClearBufferfi((QOpenGLFunctions_3_1*)self, buffer, drawbuffer, depth, stencil);
}

void q_openglfunctions_3_1_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value) {
    QOpenGLFunctions_3_1_GlClearBufferfv((QOpenGLFunctions_3_1*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_1_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value) {
    QOpenGLFunctions_3_1_GlClearBufferuiv((QOpenGLFunctions_3_1*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_1_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value) {
    QOpenGLFunctions_3_1_GlClearBufferiv((QOpenGLFunctions_3_1*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_1_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_1_GlGetTexParameterIuiv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetTexParameterIiv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_1_GlTexParameterIuiv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlTexParameterIiv((QOpenGLFunctions_3_1*)self, target, pname, params);
}

void q_openglfunctions_3_1_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_1_GlUniform4uiv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_1_GlUniform3uiv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_1_GlUniform2uiv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_1_GlUniform1uiv((QOpenGLFunctions_3_1*)self, location, count, value);
}

void q_openglfunctions_3_1_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLFunctions_3_1_GlUniform4ui((QOpenGLFunctions_3_1*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_1_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLFunctions_3_1_GlUniform3ui((QOpenGLFunctions_3_1*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_1_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLFunctions_3_1_GlUniform2ui((QOpenGLFunctions_3_1*)self, location, v0, v1);
}

void q_openglfunctions_3_1_gl_uniform1ui(void* self, int32_t location, uint32_t v0) {
    QOpenGLFunctions_3_1_GlUniform1ui((QOpenGLFunctions_3_1*)self, location, v0);
}

int32_t q_openglfunctions_3_1_gl_get_frag_data_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_1_GlGetFragDataLocation((QOpenGLFunctions_3_1*)self, program, name);
}

void q_openglfunctions_3_1_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, const char* name) {
    QOpenGLFunctions_3_1_GlBindFragDataLocation((QOpenGLFunctions_3_1*)self, program, color, name);
}

void q_openglfunctions_3_1_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params) {
    QOpenGLFunctions_3_1_GlGetUniformuiv((QOpenGLFunctions_3_1*)self, program, location, params);
}

void q_openglfunctions_3_1_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_1_GlGetVertexAttribIuiv((QOpenGLFunctions_3_1*)self, index, pname, params);
}

void q_openglfunctions_3_1_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetVertexAttribIiv((QOpenGLFunctions_3_1*)self, index, pname, params);
}

void q_openglfunctions_3_1_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_1_GlVertexAttribIPointer((QOpenGLFunctions_3_1*)self, index, size, type, stride, pointer);
}

void q_openglfunctions_3_1_gl_end_conditional_render(void* self) {
    QOpenGLFunctions_3_1_GlEndConditionalRender((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode) {
    QOpenGLFunctions_3_1_GlBeginConditionalRender((QOpenGLFunctions_3_1*)self, id, mode);
}

void q_openglfunctions_3_1_gl_clamp_color(void* self, uint32_t target, uint32_t clamp) {
    QOpenGLFunctions_3_1_GlClampColor((QOpenGLFunctions_3_1*)self, target, clamp);
}

void q_openglfunctions_3_1_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer) {
    QOpenGLFunctions_3_1_GlBindBufferBase((QOpenGLFunctions_3_1*)self, target, index, buffer);
}

void q_openglfunctions_3_1_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLFunctions_3_1_GlBindBufferRange((QOpenGLFunctions_3_1*)self, target, index, buffer, offset, size);
}

void q_openglfunctions_3_1_gl_end_transform_feedback(void* self) {
    QOpenGLFunctions_3_1_GlEndTransformFeedback((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_gl_begin_transform_feedback(void* self, uint32_t primitiveMode) {
    QOpenGLFunctions_3_1_GlBeginTransformFeedback((QOpenGLFunctions_3_1*)self, primitiveMode);
}

uint8_t q_openglfunctions_3_1_gl_is_enabledi(void* self, uint32_t target, uint32_t index) {
    return QOpenGLFunctions_3_1_GlIsEnabledi((QOpenGLFunctions_3_1*)self, target, index);
}

void q_openglfunctions_3_1_gl_disablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_1_GlDisablei((QOpenGLFunctions_3_1*)self, target, index);
}

void q_openglfunctions_3_1_gl_enablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_1_GlEnablei((QOpenGLFunctions_3_1*)self, target, index);
}

void q_openglfunctions_3_1_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data) {
    QOpenGLFunctions_3_1_GlGetIntegeriV((QOpenGLFunctions_3_1*)self, target, index, data);
}

void q_openglfunctions_3_1_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data) {
    QOpenGLFunctions_3_1_GlGetBooleaniV((QOpenGLFunctions_3_1*)self, target, index, data);
}

void q_openglfunctions_3_1_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    QOpenGLFunctions_3_1_GlColorMaski((QOpenGLFunctions_3_1*)self, index, r, g, b, a);
}

void q_openglfunctions_3_1_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size) {
    QOpenGLFunctions_3_1_GlCopyBufferSubData((QOpenGLFunctions_3_1*)self, readTarget, writeTarget, readOffset, writeOffset, size);
}

void q_openglfunctions_3_1_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    QOpenGLFunctions_3_1_GlUniformBlockBinding((QOpenGLFunctions_3_1*)self, program, uniformBlockIndex, uniformBlockBinding);
}

void q_openglfunctions_3_1_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName) {
    QOpenGLFunctions_3_1_GlGetActiveUniformBlockName((QOpenGLFunctions_3_1*)self, program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void q_openglfunctions_3_1_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetActiveUniformBlockiv((QOpenGLFunctions_3_1*)self, program, uniformBlockIndex, pname, params);
}

uint32_t q_openglfunctions_3_1_gl_get_uniform_block_index(void* self, uint32_t program, const char* uniformBlockName) {
    return QOpenGLFunctions_3_1_GlGetUniformBlockIndex((QOpenGLFunctions_3_1*)self, program, uniformBlockName);
}

void q_openglfunctions_3_1_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName) {
    QOpenGLFunctions_3_1_GlGetActiveUniformName((QOpenGLFunctions_3_1*)self, program, uniformIndex, bufSize, length, uniformName);
}

void q_openglfunctions_3_1_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_1_GlGetActiveUniformsiv((QOpenGLFunctions_3_1*)self, program, uniformCount, uniformIndices, pname, params);
}

void q_openglfunctions_3_1_gl_primitive_restart_index(void* self, uint32_t index) {
    QOpenGLFunctions_3_1_GlPrimitiveRestartIndex((QOpenGLFunctions_3_1*)self, index);
}

void q_openglfunctions_3_1_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    QOpenGLFunctions_3_1_GlTexBuffer((QOpenGLFunctions_3_1*)self, target, internalformat, buffer);
}

void q_openglfunctions_3_1_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount) {
    QOpenGLFunctions_3_1_GlDrawElementsInstanced((QOpenGLFunctions_3_1*)self, mode, count, type, indices, instancecount);
}

void q_openglfunctions_3_1_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    QOpenGLFunctions_3_1_GlDrawArraysInstanced((QOpenGLFunctions_3_1*)self, mode, first, count, instancecount);
}

bool q_openglfunctions_3_1_is_initialized(void* self) {
    return QOpenGLFunctions_3_1_IsInitialized((QOpenGLFunctions_3_1*)self);
}

bool q_openglfunctions_3_1_qbase_is_initialized(void* self) {
    return QOpenGLFunctions_3_1_QBaseIsInitialized((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_1_OnIsInitialized((QOpenGLFunctions_3_1*)self, (intptr_t)callback);
}

void q_openglfunctions_3_1_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_1_SetOwningContext((QOpenGLFunctions_3_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_1_qbase_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_1_QBaseSetOwningContext((QOpenGLFunctions_3_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_1_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_3_1_OnSetOwningContext((QOpenGLFunctions_3_1*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_3_1_owning_context(void* self) {
    return QOpenGLFunctions_3_1_OwningContext((QOpenGLFunctions_3_1*)self);
}

QOpenGLContext* q_openglfunctions_3_1_qbase_owning_context(void* self) {
    return QOpenGLFunctions_3_1_QBaseOwningContext((QOpenGLFunctions_3_1*)self);
}

void q_openglfunctions_3_1_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_3_1_OnOwningContext((QOpenGLFunctions_3_1*)self, (intptr_t)callback);
}

void q_openglfunctions_3_1_delete(void* self) {
    QOpenGLFunctions_3_1_Delete((QOpenGLFunctions_3_1*)(self));
}
