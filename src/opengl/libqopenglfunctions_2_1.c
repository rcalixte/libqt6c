#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_2_1.hpp"
#include "libqopenglfunctions_2_1.h"

QOpenGLFunctions_2_1* q_openglfunctions_2_1_new() {
    return QOpenGLFunctions_2_1_new();
}

bool q_openglfunctions_2_1_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_2_1_InitializeOpenGLFunctions((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_2_1_OnInitializeOpenGLFunctions((QOpenGLFunctions_2_1*)self, (intptr_t)callback);
}

bool q_openglfunctions_2_1_qbase_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_2_1_QBaseInitializeOpenGLFunctions((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_2_1_GlViewport((QOpenGLFunctions_2_1*)self, x, y, width, height);
}

void q_openglfunctions_2_1_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_2_1_GlDepthRange((QOpenGLFunctions_2_1*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_2_1_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_2_1_GlIsEnabled((QOpenGLFunctions_2_1*)self, cap);
}

void q_openglfunctions_2_1_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetTexLevelParameteriv((QOpenGLFunctions_2_1*)self, target, level, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetTexLevelParameterfv((QOpenGLFunctions_2_1*)self, target, level, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetTexParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetTexParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlGetTexImage((QOpenGLFunctions_2_1*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_2_1_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_2_1_GlGetString((QOpenGLFunctions_2_1*)self, name);
}

void q_openglfunctions_2_1_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetIntegerv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetFloatv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_2_1_GlGetDoublev((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_2_1_GlGetBooleanv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlReadPixels((QOpenGLFunctions_2_1*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_2_1_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlReadBuffer((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlPixelStorei((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlPixelStoref((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_2_1_GlDepthFunc((QOpenGLFunctions_2_1*)self, func);
}

void q_openglfunctions_2_1_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_2_1_GlStencilOp((QOpenGLFunctions_2_1*)self, fail, zfail, zpass);
}

void q_openglfunctions_2_1_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_2_1_GlStencilFunc((QOpenGLFunctions_2_1*)self, func, ref, mask);
}

void q_openglfunctions_2_1_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_2_1_GlLogicOp((QOpenGLFunctions_2_1*)self, opcode);
}

void q_openglfunctions_2_1_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_2_1_GlBlendFunc((QOpenGLFunctions_2_1*)self, sfactor, dfactor);
}

void q_openglfunctions_2_1_gl_flush(void* self) {
    QOpenGLFunctions_2_1_GlFlush((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_finish(void* self) {
    QOpenGLFunctions_2_1_GlFinish((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_2_1_GlEnable((QOpenGLFunctions_2_1*)self, cap);
}

void q_openglfunctions_2_1_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_2_1_GlDisable((QOpenGLFunctions_2_1*)self, cap);
}

void q_openglfunctions_2_1_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_2_1_GlDepthMask((QOpenGLFunctions_2_1*)self, flag);
}

void q_openglfunctions_2_1_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_2_1_GlColorMask((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_2_1_GlStencilMask((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_2_1_GlClearDepth((QOpenGLFunctions_2_1*)self, depth);
}

void q_openglfunctions_2_1_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_2_1_GlClearStencil((QOpenGLFunctions_2_1*)self, s);
}

void q_openglfunctions_2_1_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_2_1_GlClearColor((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_2_1_GlClear((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlDrawBuffer((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexImage2D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_2_1_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexImage1D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_2_1_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlTexParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlTexParameteri((QOpenGLFunctions_2_1*)self, target, pname, param);
}

void q_openglfunctions_2_1_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlTexParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlTexParameterf((QOpenGLFunctions_2_1*)self, target, pname, param);
}

void q_openglfunctions_2_1_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_2_1_GlScissor((QOpenGLFunctions_2_1*)self, x, y, width, height);
}

void q_openglfunctions_2_1_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_2_1_GlPolygonMode((QOpenGLFunctions_2_1*)self, face, mode);
}

void q_openglfunctions_2_1_gl_point_size(void* self, float size) {
    QOpenGLFunctions_2_1_GlPointSize((QOpenGLFunctions_2_1*)self, size);
}

void q_openglfunctions_2_1_gl_line_width(void* self, float width) {
    QOpenGLFunctions_2_1_GlLineWidth((QOpenGLFunctions_2_1*)self, width);
}

void q_openglfunctions_2_1_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_2_1_GlHint((QOpenGLFunctions_2_1*)self, target, mode);
}

void q_openglfunctions_2_1_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlFrontFace((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlCullFace((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_indexubv(void* self, uint8_t* c) {
    QOpenGLFunctions_2_1_GlIndexubv((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexub(void* self, uint8_t c) {
    QOpenGLFunctions_2_1_GlIndexub((QOpenGLFunctions_2_1*)self, c);
}

uint8_t q_openglfunctions_2_1_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_2_1_GlIsTexture((QOpenGLFunctions_2_1*)self, texture);
}

void q_openglfunctions_2_1_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_2_1_GlGenTextures((QOpenGLFunctions_2_1*)self, n, textures);
}

void q_openglfunctions_2_1_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_2_1_GlDeleteTextures((QOpenGLFunctions_2_1*)self, n, textures);
}

void q_openglfunctions_2_1_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_2_1_GlBindTexture((QOpenGLFunctions_2_1*)self, target, texture);
}

void q_openglfunctions_2_1_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexSubImage2D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_2_1_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexSubImage1D((QOpenGLFunctions_2_1*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_2_1_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_2_1_GlCopyTexSubImage2D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_2_1_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_2_1_GlCopyTexSubImage1D((QOpenGLFunctions_2_1*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_2_1_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_2_1_GlCopyTexImage2D((QOpenGLFunctions_2_1*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_2_1_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_2_1_GlCopyTexImage1D((QOpenGLFunctions_2_1*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_2_1_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_2_1_GlPolygonOffset((QOpenGLFunctions_2_1*)self, factor, units);
}

void q_openglfunctions_2_1_gl_get_pointerv(void* self, uint32_t pname, void* params) {
    QOpenGLFunctions_2_1_GlGetPointerv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_2_1_GlDrawElements((QOpenGLFunctions_2_1*)self, mode, count, type, indices);
}

void q_openglfunctions_2_1_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_2_1_GlDrawArrays((QOpenGLFunctions_2_1*)self, mode, first, count);
}

void q_openglfunctions_2_1_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_2_1_GlCopyTexSubImage3D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglfunctions_2_1_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexSubImage3D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglfunctions_2_1_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlTexImage3D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglfunctions_2_1_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_2_1_GlDrawRangeElements((QOpenGLFunctions_2_1*)self, mode, start, end, count, type, indices);
}

void q_openglfunctions_2_1_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlBlendEquation((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_2_1_GlBlendColor((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img) {
    QOpenGLFunctions_2_1_GlGetCompressedTexImage((QOpenGLFunctions_2_1*)self, target, level, img);
}

void q_openglfunctions_2_1_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexSubImage1D((QOpenGLFunctions_2_1*)self, target, level, xoffset, width, format, imageSize, data);
}

void q_openglfunctions_2_1_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexSubImage2D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void q_openglfunctions_2_1_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexSubImage3D((QOpenGLFunctions_2_1*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglfunctions_2_1_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexImage1D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, border, imageSize, data);
}

void q_openglfunctions_2_1_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexImage2D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_2_1_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_2_1_GlCompressedTexImage3D((QOpenGLFunctions_2_1*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglfunctions_2_1_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_2_1_GlSampleCoverage((QOpenGLFunctions_2_1*)self, value, invert);
}

void q_openglfunctions_2_1_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_2_1_GlActiveTexture((QOpenGLFunctions_2_1*)self, texture);
}

void q_openglfunctions_2_1_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlPointParameteriv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_point_parameteri(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlPointParameteri((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_point_parameterfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlPointParameterfv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_point_parameterf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlPointParameterf((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_multi_draw_elements(void* self, uint32_t mode, int32_t* count, uint32_t type, void* indices, int32_t drawcount) {
    QOpenGLFunctions_2_1_GlMultiDrawElements((QOpenGLFunctions_2_1*)self, mode, count, type, indices, drawcount);
}

void q_openglfunctions_2_1_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount) {
    QOpenGLFunctions_2_1_GlMultiDrawArrays((QOpenGLFunctions_2_1*)self, mode, first, count, drawcount);
}

void q_openglfunctions_2_1_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    QOpenGLFunctions_2_1_GlBlendFuncSeparate((QOpenGLFunctions_2_1*)self, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void q_openglfunctions_2_1_gl_get_buffer_pointerv(void* self, uint32_t target, uint32_t pname, void* params) {
    QOpenGLFunctions_2_1_GlGetBufferPointerv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetBufferParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

uint8_t q_openglfunctions_2_1_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLFunctions_2_1_GlUnmapBuffer((QOpenGLFunctions_2_1*)self, target);
}

void* q_openglfunctions_2_1_gl_map_buffer(void* self, uint32_t target, uint32_t access) {
    return QOpenGLFunctions_2_1_GlMapBuffer((QOpenGLFunctions_2_1*)self, target, access);
}

void q_openglfunctions_2_1_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_2_1_GlGetBufferSubData((QOpenGLFunctions_2_1*)self, target, offset, size, data);
}

void q_openglfunctions_2_1_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_2_1_GlBufferSubData((QOpenGLFunctions_2_1*)self, target, offset, size, data);
}

void q_openglfunctions_2_1_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_2_1_GlBufferData((QOpenGLFunctions_2_1*)self, target, size, data, usage);
}

uint8_t q_openglfunctions_2_1_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_2_1_GlIsBuffer((QOpenGLFunctions_2_1*)self, buffer);
}

void q_openglfunctions_2_1_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_2_1_GlGenBuffers((QOpenGLFunctions_2_1*)self, n, buffers);
}

void q_openglfunctions_2_1_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_2_1_GlDeleteBuffers((QOpenGLFunctions_2_1*)self, n, buffers);
}

void q_openglfunctions_2_1_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_2_1_GlBindBuffer((QOpenGLFunctions_2_1*)self, target, buffer);
}

void q_openglfunctions_2_1_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_2_1_GlGetQueryObjectuiv((QOpenGLFunctions_2_1*)self, id, pname, params);
}

void q_openglfunctions_2_1_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetQueryObjectiv((QOpenGLFunctions_2_1*)self, id, pname, params);
}

void q_openglfunctions_2_1_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetQueryiv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_end_query(void* self, uint32_t target) {
    QOpenGLFunctions_2_1_GlEndQuery((QOpenGLFunctions_2_1*)self, target);
}

void q_openglfunctions_2_1_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_2_1_GlBeginQuery((QOpenGLFunctions_2_1*)self, target, id);
}

uint8_t q_openglfunctions_2_1_gl_is_query(void* self, uint32_t id) {
    return QOpenGLFunctions_2_1_GlIsQuery((QOpenGLFunctions_2_1*)self, id);
}

void q_openglfunctions_2_1_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_2_1_GlDeleteQueries((QOpenGLFunctions_2_1*)self, n, ids);
}

void q_openglfunctions_2_1_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_2_1_GlGenQueries((QOpenGLFunctions_2_1*)self, n, ids);
}

void q_openglfunctions_2_1_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlVertexAttribPointer((QOpenGLFunctions_2_1*)self, index, size, type, normalized, stride, pointer);
}

void q_openglfunctions_2_1_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_2_1_GlValidateProgram((QOpenGLFunctions_2_1*)self, program);
}

void q_openglfunctions_2_1_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix4fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix3fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix2fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_2_1_GlUniform4iv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_2_1_GlUniform3iv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_2_1_GlUniform2iv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_2_1_GlUniform1iv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_2_1_GlUniform4fv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_2_1_GlUniform3fv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_2_1_GlUniform2fv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_2_1_GlUniform1fv((QOpenGLFunctions_2_1*)self, location, count, value);
}

void q_openglfunctions_2_1_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLFunctions_2_1_GlUniform4i((QOpenGLFunctions_2_1*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_2_1_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLFunctions_2_1_GlUniform3i((QOpenGLFunctions_2_1*)self, location, v0, v1, v2);
}

void q_openglfunctions_2_1_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLFunctions_2_1_GlUniform2i((QOpenGLFunctions_2_1*)self, location, v0, v1);
}

void q_openglfunctions_2_1_gl_uniform1i(void* self, int32_t location, int32_t v0) {
    QOpenGLFunctions_2_1_GlUniform1i((QOpenGLFunctions_2_1*)self, location, v0);
}

void q_openglfunctions_2_1_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLFunctions_2_1_GlUniform4f((QOpenGLFunctions_2_1*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_2_1_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2) {
    QOpenGLFunctions_2_1_GlUniform3f((QOpenGLFunctions_2_1*)self, location, v0, v1, v2);
}

void q_openglfunctions_2_1_gl_uniform2f(void* self, int32_t location, float v0, float v1) {
    QOpenGLFunctions_2_1_GlUniform2f((QOpenGLFunctions_2_1*)self, location, v0, v1);
}

void q_openglfunctions_2_1_gl_uniform1f(void* self, int32_t location, float v0) {
    QOpenGLFunctions_2_1_GlUniform1f((QOpenGLFunctions_2_1*)self, location, v0);
}

void q_openglfunctions_2_1_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_2_1_GlUseProgram((QOpenGLFunctions_2_1*)self, program);
}

void q_openglfunctions_2_1_gl_shader_source(void* self, uint32_t shader, int32_t count, const char** stringVal, int32_t* length) {
    QOpenGLFunctions_2_1_GlShaderSource((QOpenGLFunctions_2_1*)self, shader, count, stringVal, length);
}

void q_openglfunctions_2_1_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_2_1_GlLinkProgram((QOpenGLFunctions_2_1*)self, program);
}

uint8_t q_openglfunctions_2_1_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_2_1_GlIsShader((QOpenGLFunctions_2_1*)self, shader);
}

uint8_t q_openglfunctions_2_1_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_2_1_GlIsProgram((QOpenGLFunctions_2_1*)self, program);
}

void q_openglfunctions_2_1_gl_get_vertex_attrib_pointerv(void* self, uint32_t index, uint32_t pname, void* pointer) {
    QOpenGLFunctions_2_1_GlGetVertexAttribPointerv((QOpenGLFunctions_2_1*)self, index, pname, pointer);
}

void q_openglfunctions_2_1_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetVertexAttribiv((QOpenGLFunctions_2_1*)self, index, pname, params);
}

void q_openglfunctions_2_1_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetVertexAttribfv((QOpenGLFunctions_2_1*)self, index, pname, params);
}

void q_openglfunctions_2_1_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params) {
    QOpenGLFunctions_2_1_GlGetVertexAttribdv((QOpenGLFunctions_2_1*)self, index, pname, params);
}

void q_openglfunctions_2_1_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetUniformiv((QOpenGLFunctions_2_1*)self, program, location, params);
}

void q_openglfunctions_2_1_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_2_1_GlGetUniformfv((QOpenGLFunctions_2_1*)self, program, location, params);
}

int32_t q_openglfunctions_2_1_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_2_1_GlGetUniformLocation((QOpenGLFunctions_2_1*)self, program, name);
}

void q_openglfunctions_2_1_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source) {
    QOpenGLFunctions_2_1_GlGetShaderSource((QOpenGLFunctions_2_1*)self, shader, bufSize, length, source);
}

void q_openglfunctions_2_1_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_2_1_GlGetShaderInfoLog((QOpenGLFunctions_2_1*)self, shader, bufSize, length, infoLog);
}

void q_openglfunctions_2_1_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetShaderiv((QOpenGLFunctions_2_1*)self, shader, pname, params);
}

void q_openglfunctions_2_1_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_2_1_GlGetProgramInfoLog((QOpenGLFunctions_2_1*)self, program, bufSize, length, infoLog);
}

void q_openglfunctions_2_1_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetProgramiv((QOpenGLFunctions_2_1*)self, program, pname, params);
}

int32_t q_openglfunctions_2_1_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_2_1_GlGetAttribLocation((QOpenGLFunctions_2_1*)self, program, name);
}

void q_openglfunctions_2_1_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    QOpenGLFunctions_2_1_GlGetAttachedShaders((QOpenGLFunctions_2_1*)self, program, maxCount, count, obj);
}

void q_openglfunctions_2_1_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_2_1_GlEnableVertexAttribArray((QOpenGLFunctions_2_1*)self, index);
}

void q_openglfunctions_2_1_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_2_1_GlDisableVertexAttribArray((QOpenGLFunctions_2_1*)self, index);
}

void q_openglfunctions_2_1_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_2_1_GlDetachShader((QOpenGLFunctions_2_1*)self, program, shader);
}

void q_openglfunctions_2_1_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_2_1_GlDeleteShader((QOpenGLFunctions_2_1*)self, shader);
}

void q_openglfunctions_2_1_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_2_1_GlDeleteProgram((QOpenGLFunctions_2_1*)self, program);
}

uint32_t q_openglfunctions_2_1_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_2_1_GlCreateShader((QOpenGLFunctions_2_1*)self, type);
}

uint32_t q_openglfunctions_2_1_gl_create_program(void* self) {
    return QOpenGLFunctions_2_1_GlCreateProgram((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_2_1_GlCompileShader((QOpenGLFunctions_2_1*)self, shader);
}

void q_openglfunctions_2_1_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_2_1_GlBindAttribLocation((QOpenGLFunctions_2_1*)self, program, index, name);
}

void q_openglfunctions_2_1_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_2_1_GlAttachShader((QOpenGLFunctions_2_1*)self, program, shader);
}

void q_openglfunctions_2_1_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_2_1_GlStencilMaskSeparate((QOpenGLFunctions_2_1*)self, face, mask);
}

void q_openglfunctions_2_1_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_2_1_GlStencilFuncSeparate((QOpenGLFunctions_2_1*)self, face, func, ref, mask);
}

void q_openglfunctions_2_1_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    QOpenGLFunctions_2_1_GlStencilOpSeparate((QOpenGLFunctions_2_1*)self, face, sfail, dpfail, dppass);
}

void q_openglfunctions_2_1_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_2_1_GlBlendEquationSeparate((QOpenGLFunctions_2_1*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_2_1_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix4x3fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix3x4fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix4x2fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix2x4fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix3x2fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_2_1_GlUniformMatrix2x3fv((QOpenGLFunctions_2_1*)self, location, count, transpose, value);
}

void q_openglfunctions_2_1_gl_translatef(void* self, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlTranslatef((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_translated(void* self, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlTranslated((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_scalef(void* self, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlScalef((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_scaled(void* self, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlScaled((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_rotatef(void* self, float angle, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlRotatef((QOpenGLFunctions_2_1*)self, angle, x, y, z);
}

void q_openglfunctions_2_1_gl_rotated(void* self, double angle, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlRotated((QOpenGLFunctions_2_1*)self, angle, x, y, z);
}

void q_openglfunctions_2_1_gl_push_matrix(void* self) {
    QOpenGLFunctions_2_1_GlPushMatrix((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_pop_matrix(void* self) {
    QOpenGLFunctions_2_1_GlPopMatrix((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_2_1_GlOrtho((QOpenGLFunctions_2_1*)self, left, right, bottom, top, zNear, zFar);
}

void q_openglfunctions_2_1_gl_mult_matrixd(void* self, double* m) {
    QOpenGLFunctions_2_1_GlMultMatrixd((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_mult_matrixf(void* self, float* m) {
    QOpenGLFunctions_2_1_GlMultMatrixf((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_matrix_mode(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlMatrixMode((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_load_matrixd(void* self, double* m) {
    QOpenGLFunctions_2_1_GlLoadMatrixd((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_load_matrixf(void* self, float* m) {
    QOpenGLFunctions_2_1_GlLoadMatrixf((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_load_identity(void* self) {
    QOpenGLFunctions_2_1_GlLoadIdentity((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_2_1_GlFrustum((QOpenGLFunctions_2_1*)self, left, right, bottom, top, zNear, zFar);
}

uint8_t q_openglfunctions_2_1_gl_is_list(void* self, uint32_t list) {
    return QOpenGLFunctions_2_1_GlIsList((QOpenGLFunctions_2_1*)self, list);
}

void q_openglfunctions_2_1_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetTexGeniv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetTexGenfv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_2_1_GlGetTexGendv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetTexEnviv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetTexEnvfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_2_1_GlGetPolygonStipple((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values) {
    QOpenGLFunctions_2_1_GlGetPixelMapusv((QOpenGLFunctions_2_1*)self, mapVal, values);
}

void q_openglfunctions_2_1_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values) {
    QOpenGLFunctions_2_1_GlGetPixelMapuiv((QOpenGLFunctions_2_1*)self, mapVal, values);
}

void q_openglfunctions_2_1_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values) {
    QOpenGLFunctions_2_1_GlGetPixelMapfv((QOpenGLFunctions_2_1*)self, mapVal, values);
}

void q_openglfunctions_2_1_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetMaterialiv((QOpenGLFunctions_2_1*)self, face, pname, params);
}

void q_openglfunctions_2_1_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetMaterialfv((QOpenGLFunctions_2_1*)self, face, pname, params);
}

void q_openglfunctions_2_1_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v) {
    QOpenGLFunctions_2_1_GlGetMapiv((QOpenGLFunctions_2_1*)self, target, query, v);
}

void q_openglfunctions_2_1_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v) {
    QOpenGLFunctions_2_1_GlGetMapfv((QOpenGLFunctions_2_1*)self, target, query, v);
}

void q_openglfunctions_2_1_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v) {
    QOpenGLFunctions_2_1_GlGetMapdv((QOpenGLFunctions_2_1*)self, target, query, v);
}

void q_openglfunctions_2_1_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetLightiv((QOpenGLFunctions_2_1*)self, light, pname, params);
}

void q_openglfunctions_2_1_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetLightfv((QOpenGLFunctions_2_1*)self, light, pname, params);
}

void q_openglfunctions_2_1_gl_get_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_2_1_GlGetClipPlane((QOpenGLFunctions_2_1*)self, plane, equation);
}

void q_openglfunctions_2_1_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_2_1_GlDrawPixels((QOpenGLFunctions_2_1*)self, width, height, format, type, pixels);
}

void q_openglfunctions_2_1_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type) {
    QOpenGLFunctions_2_1_GlCopyPixels((QOpenGLFunctions_2_1*)self, x, y, width, height, type);
}

void q_openglfunctions_2_1_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values) {
    QOpenGLFunctions_2_1_GlPixelMapusv((QOpenGLFunctions_2_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_2_1_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values) {
    QOpenGLFunctions_2_1_GlPixelMapuiv((QOpenGLFunctions_2_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_2_1_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values) {
    QOpenGLFunctions_2_1_GlPixelMapfv((QOpenGLFunctions_2_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_2_1_gl_pixel_transferi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlPixelTransferi((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_pixel_transferf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlPixelTransferf((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_pixel_zoom(void* self, float xfactor, float yfactor) {
    QOpenGLFunctions_2_1_GlPixelZoom((QOpenGLFunctions_2_1*)self, xfactor, yfactor);
}

void q_openglfunctions_2_1_gl_alpha_func(void* self, uint32_t func, float ref) {
    QOpenGLFunctions_2_1_GlAlphaFunc((QOpenGLFunctions_2_1*)self, func, ref);
}

void q_openglfunctions_2_1_gl_eval_point2(void* self, int32_t i, int32_t j) {
    QOpenGLFunctions_2_1_GlEvalPoint2((QOpenGLFunctions_2_1*)self, i, j);
}

void q_openglfunctions_2_1_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2) {
    QOpenGLFunctions_2_1_GlEvalMesh2((QOpenGLFunctions_2_1*)self, mode, i1, i2, j1, j2);
}

void q_openglfunctions_2_1_gl_eval_point1(void* self, int32_t i) {
    QOpenGLFunctions_2_1_GlEvalPoint1((QOpenGLFunctions_2_1*)self, i);
}

void q_openglfunctions_2_1_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2) {
    QOpenGLFunctions_2_1_GlEvalMesh1((QOpenGLFunctions_2_1*)self, mode, i1, i2);
}

void q_openglfunctions_2_1_gl_eval_coord2fv(void* self, float* u) {
    QOpenGLFunctions_2_1_GlEvalCoord2fv((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_eval_coord2f(void* self, float u, float v) {
    QOpenGLFunctions_2_1_GlEvalCoord2f((QOpenGLFunctions_2_1*)self, u, v);
}

void q_openglfunctions_2_1_gl_eval_coord2dv(void* self, double* u) {
    QOpenGLFunctions_2_1_GlEvalCoord2dv((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_eval_coord2d(void* self, double u, double v) {
    QOpenGLFunctions_2_1_GlEvalCoord2d((QOpenGLFunctions_2_1*)self, u, v);
}

void q_openglfunctions_2_1_gl_eval_coord1fv(void* self, float* u) {
    QOpenGLFunctions_2_1_GlEvalCoord1fv((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_eval_coord1f(void* self, float u) {
    QOpenGLFunctions_2_1_GlEvalCoord1f((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_eval_coord1dv(void* self, double* u) {
    QOpenGLFunctions_2_1_GlEvalCoord1dv((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_eval_coord1d(void* self, double u) {
    QOpenGLFunctions_2_1_GlEvalCoord1d((QOpenGLFunctions_2_1*)self, u);
}

void q_openglfunctions_2_1_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2) {
    QOpenGLFunctions_2_1_GlMapGrid2f((QOpenGLFunctions_2_1*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_2_1_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2) {
    QOpenGLFunctions_2_1_GlMapGrid2d((QOpenGLFunctions_2_1*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_2_1_gl_map_grid1f(void* self, int32_t un, float u1, float u2) {
    QOpenGLFunctions_2_1_GlMapGrid1f((QOpenGLFunctions_2_1*)self, un, u1, u2);
}

void q_openglfunctions_2_1_gl_map_grid1d(void* self, int32_t un, double u1, double u2) {
    QOpenGLFunctions_2_1_GlMapGrid1d((QOpenGLFunctions_2_1*)self, un, u1, u2);
}

void q_openglfunctions_2_1_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points) {
    QOpenGLFunctions_2_1_GlMap2f((QOpenGLFunctions_2_1*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_2_1_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points) {
    QOpenGLFunctions_2_1_GlMap2d((QOpenGLFunctions_2_1*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_2_1_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points) {
    QOpenGLFunctions_2_1_GlMap1f((QOpenGLFunctions_2_1*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_2_1_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points) {
    QOpenGLFunctions_2_1_GlMap1d((QOpenGLFunctions_2_1*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_2_1_gl_push_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_2_1_GlPushAttrib((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_pop_attrib(void* self) {
    QOpenGLFunctions_2_1_GlPopAttrib((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_accum(void* self, uint32_t op, float value) {
    QOpenGLFunctions_2_1_GlAccum((QOpenGLFunctions_2_1*)self, op, value);
}

void q_openglfunctions_2_1_gl_index_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_2_1_GlIndexMask((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_clear_index(void* self, float c) {
    QOpenGLFunctions_2_1_GlClearIndex((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_clear_accum(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_2_1_GlClearAccum((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_push_name(void* self, uint32_t name) {
    QOpenGLFunctions_2_1_GlPushName((QOpenGLFunctions_2_1*)self, name);
}

void q_openglfunctions_2_1_gl_pop_name(void* self) {
    QOpenGLFunctions_2_1_GlPopName((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_pass_through(void* self, float token) {
    QOpenGLFunctions_2_1_GlPassThrough((QOpenGLFunctions_2_1*)self, token);
}

void q_openglfunctions_2_1_gl_load_name(void* self, uint32_t name) {
    QOpenGLFunctions_2_1_GlLoadName((QOpenGLFunctions_2_1*)self, name);
}

void q_openglfunctions_2_1_gl_init_names(void* self) {
    QOpenGLFunctions_2_1_GlInitNames((QOpenGLFunctions_2_1*)self);
}

int32_t q_openglfunctions_2_1_gl_render_mode(void* self, uint32_t mode) {
    return QOpenGLFunctions_2_1_GlRenderMode((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_select_buffer(void* self, int32_t size, uint32_t* buffer) {
    QOpenGLFunctions_2_1_GlSelectBuffer((QOpenGLFunctions_2_1*)self, size, buffer);
}

void q_openglfunctions_2_1_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer) {
    QOpenGLFunctions_2_1_GlFeedbackBuffer((QOpenGLFunctions_2_1*)self, size, type, buffer);
}

void q_openglfunctions_2_1_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlTexGeniv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlTexGeni((QOpenGLFunctions_2_1*)self, coord, pname, param);
}

void q_openglfunctions_2_1_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlTexGenfv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlTexGenf((QOpenGLFunctions_2_1*)self, coord, pname, param);
}

void q_openglfunctions_2_1_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_2_1_GlTexGendv((QOpenGLFunctions_2_1*)self, coord, pname, params);
}

void q_openglfunctions_2_1_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param) {
    QOpenGLFunctions_2_1_GlTexGend((QOpenGLFunctions_2_1*)self, coord, pname, param);
}

void q_openglfunctions_2_1_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlTexEnviv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlTexEnvi((QOpenGLFunctions_2_1*)self, target, pname, param);
}

void q_openglfunctions_2_1_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlTexEnvfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlTexEnvf((QOpenGLFunctions_2_1*)self, target, pname, param);
}

void q_openglfunctions_2_1_gl_shade_model(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlShadeModel((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_2_1_GlPolygonStipple((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlMaterialiv((QOpenGLFunctions_2_1*)self, face, pname, params);
}

void q_openglfunctions_2_1_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlMateriali((QOpenGLFunctions_2_1*)self, face, pname, param);
}

void q_openglfunctions_2_1_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlMaterialfv((QOpenGLFunctions_2_1*)self, face, pname, params);
}

void q_openglfunctions_2_1_gl_materialf(void* self, uint32_t face, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlMaterialf((QOpenGLFunctions_2_1*)self, face, pname, param);
}

void q_openglfunctions_2_1_gl_line_stipple(void* self, int32_t factor, uint16_t pattern) {
    QOpenGLFunctions_2_1_GlLineStipple((QOpenGLFunctions_2_1*)self, factor, pattern);
}

void q_openglfunctions_2_1_gl_light_modeliv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlLightModeliv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_light_modeli(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlLightModeli((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_light_modelfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlLightModelfv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_light_modelf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlLightModelf((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlLightiv((QOpenGLFunctions_2_1*)self, light, pname, params);
}

void q_openglfunctions_2_1_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlLighti((QOpenGLFunctions_2_1*)self, light, pname, param);
}

void q_openglfunctions_2_1_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlLightfv((QOpenGLFunctions_2_1*)self, light, pname, params);
}

void q_openglfunctions_2_1_gl_lightf(void* self, uint32_t light, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlLightf((QOpenGLFunctions_2_1*)self, light, pname, param);
}

void q_openglfunctions_2_1_gl_fogiv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlFogiv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_fogi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_2_1_GlFogi((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_fogfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlFogfv((QOpenGLFunctions_2_1*)self, pname, params);
}

void q_openglfunctions_2_1_gl_fogf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_2_1_GlFogf((QOpenGLFunctions_2_1*)self, pname, param);
}

void q_openglfunctions_2_1_gl_color_material(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_2_1_GlColorMaterial((QOpenGLFunctions_2_1*)self, face, mode);
}

void q_openglfunctions_2_1_gl_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_2_1_GlClipPlane((QOpenGLFunctions_2_1*)self, plane, equation);
}

void q_openglfunctions_2_1_gl_vertex4sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertex4sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_2_1_GlVertex4s((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex4iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlVertex4iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_2_1_GlVertex4i((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex4fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlVertex4fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_2_1_GlVertex4f((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex4dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlVertex4dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_2_1_GlVertex4d((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertex3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_2_1_GlVertex3s((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlVertex3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_2_1_GlVertex3i((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlVertex3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlVertex3f((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlVertex3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlVertex3d((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex2sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertex2sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_2_1_GlVertex2s((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_vertex2iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlVertex2iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_2_1_GlVertex2i((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_vertex2fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlVertex2fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex2f(void* self, float x, float y) {
    QOpenGLFunctions_2_1_GlVertex2f((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_vertex2dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlVertex2dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_vertex2d(void* self, double x, double y) {
    QOpenGLFunctions_2_1_GlVertex2d((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_tex_coord4sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord4sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q) {
    QOpenGLFunctions_2_1_GlTexCoord4s((QOpenGLFunctions_2_1*)self, s, t, r, q);
}

void q_openglfunctions_2_1_gl_tex_coord4iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord4iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q) {
    QOpenGLFunctions_2_1_GlTexCoord4i((QOpenGLFunctions_2_1*)self, s, t, r, q);
}

void q_openglfunctions_2_1_gl_tex_coord4fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlTexCoord4fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord4f(void* self, float s, float t, float r, float q) {
    QOpenGLFunctions_2_1_GlTexCoord4f((QOpenGLFunctions_2_1*)self, s, t, r, q);
}

void q_openglfunctions_2_1_gl_tex_coord4dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlTexCoord4dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord4d(void* self, double s, double t, double r, double q) {
    QOpenGLFunctions_2_1_GlTexCoord4d((QOpenGLFunctions_2_1*)self, s, t, r, q);
}

void q_openglfunctions_2_1_gl_tex_coord3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r) {
    QOpenGLFunctions_2_1_GlTexCoord3s((QOpenGLFunctions_2_1*)self, s, t, r);
}

void q_openglfunctions_2_1_gl_tex_coord3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r) {
    QOpenGLFunctions_2_1_GlTexCoord3i((QOpenGLFunctions_2_1*)self, s, t, r);
}

void q_openglfunctions_2_1_gl_tex_coord3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlTexCoord3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord3f(void* self, float s, float t, float r) {
    QOpenGLFunctions_2_1_GlTexCoord3f((QOpenGLFunctions_2_1*)self, s, t, r);
}

void q_openglfunctions_2_1_gl_tex_coord3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlTexCoord3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord3d(void* self, double s, double t, double r) {
    QOpenGLFunctions_2_1_GlTexCoord3d((QOpenGLFunctions_2_1*)self, s, t, r);
}

void q_openglfunctions_2_1_gl_tex_coord2sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord2sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord2s(void* self, int16_t s, int16_t t) {
    QOpenGLFunctions_2_1_GlTexCoord2s((QOpenGLFunctions_2_1*)self, s, t);
}

void q_openglfunctions_2_1_gl_tex_coord2iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord2iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord2i(void* self, int32_t s, int32_t t) {
    QOpenGLFunctions_2_1_GlTexCoord2i((QOpenGLFunctions_2_1*)self, s, t);
}

void q_openglfunctions_2_1_gl_tex_coord2fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlTexCoord2fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord2f(void* self, float s, float t) {
    QOpenGLFunctions_2_1_GlTexCoord2f((QOpenGLFunctions_2_1*)self, s, t);
}

void q_openglfunctions_2_1_gl_tex_coord2dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlTexCoord2dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord2d(void* self, double s, double t) {
    QOpenGLFunctions_2_1_GlTexCoord2d((QOpenGLFunctions_2_1*)self, s, t);
}

void q_openglfunctions_2_1_gl_tex_coord1sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord1sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord1s(void* self, int16_t s) {
    QOpenGLFunctions_2_1_GlTexCoord1s((QOpenGLFunctions_2_1*)self, s);
}

void q_openglfunctions_2_1_gl_tex_coord1iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlTexCoord1iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord1i(void* self, int32_t s) {
    QOpenGLFunctions_2_1_GlTexCoord1i((QOpenGLFunctions_2_1*)self, s);
}

void q_openglfunctions_2_1_gl_tex_coord1fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlTexCoord1fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord1f(void* self, float s) {
    QOpenGLFunctions_2_1_GlTexCoord1f((QOpenGLFunctions_2_1*)self, s);
}

void q_openglfunctions_2_1_gl_tex_coord1dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlTexCoord1dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_tex_coord1d(void* self, double s) {
    QOpenGLFunctions_2_1_GlTexCoord1d((QOpenGLFunctions_2_1*)self, s);
}

void q_openglfunctions_2_1_gl_rectsv(void* self, int16_t* v1, int16_t* v2) {
    QOpenGLFunctions_2_1_GlRectsv((QOpenGLFunctions_2_1*)self, v1, v2);
}

void q_openglfunctions_2_1_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    QOpenGLFunctions_2_1_GlRects((QOpenGLFunctions_2_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_2_1_gl_rectiv(void* self, int32_t* v1, int32_t* v2) {
    QOpenGLFunctions_2_1_GlRectiv((QOpenGLFunctions_2_1*)self, v1, v2);
}

void q_openglfunctions_2_1_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
    QOpenGLFunctions_2_1_GlRecti((QOpenGLFunctions_2_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_2_1_gl_rectfv(void* self, float* v1, float* v2) {
    QOpenGLFunctions_2_1_GlRectfv((QOpenGLFunctions_2_1*)self, v1, v2);
}

void q_openglfunctions_2_1_gl_rectf(void* self, float x1, float y1, float x2, float y2) {
    QOpenGLFunctions_2_1_GlRectf((QOpenGLFunctions_2_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_2_1_gl_rectdv(void* self, double* v1, double* v2) {
    QOpenGLFunctions_2_1_GlRectdv((QOpenGLFunctions_2_1*)self, v1, v2);
}

void q_openglfunctions_2_1_gl_rectd(void* self, double x1, double y1, double x2, double y2) {
    QOpenGLFunctions_2_1_GlRectd((QOpenGLFunctions_2_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_2_1_gl_raster_pos4sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos4sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_2_1_GlRasterPos4s((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_raster_pos4iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos4iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_2_1_GlRasterPos4i((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_raster_pos4fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlRasterPos4fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_2_1_GlRasterPos4f((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_raster_pos4dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlRasterPos4dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_2_1_GlRasterPos4d((QOpenGLFunctions_2_1*)self, x, y, z, w);
}

void q_openglfunctions_2_1_gl_raster_pos3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_2_1_GlRasterPos3s((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_raster_pos3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_2_1_GlRasterPos3i((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_raster_pos3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlRasterPos3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlRasterPos3f((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_raster_pos3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlRasterPos3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlRasterPos3d((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_raster_pos2sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos2sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_2_1_GlRasterPos2s((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_raster_pos2iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlRasterPos2iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_2_1_GlRasterPos2i((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_raster_pos2fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlRasterPos2fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos2f(void* self, float x, float y) {
    QOpenGLFunctions_2_1_GlRasterPos2f((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_raster_pos2dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlRasterPos2dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_raster_pos2d(void* self, double x, double y) {
    QOpenGLFunctions_2_1_GlRasterPos2d((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_normal3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlNormal3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz) {
    QOpenGLFunctions_2_1_GlNormal3s((QOpenGLFunctions_2_1*)self, nx, ny, nz);
}

void q_openglfunctions_2_1_gl_normal3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlNormal3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz) {
    QOpenGLFunctions_2_1_GlNormal3i((QOpenGLFunctions_2_1*)self, nx, ny, nz);
}

void q_openglfunctions_2_1_gl_normal3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlNormal3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_normal3f(void* self, float nx, float ny, float nz) {
    QOpenGLFunctions_2_1_GlNormal3f((QOpenGLFunctions_2_1*)self, nx, ny, nz);
}

void q_openglfunctions_2_1_gl_normal3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlNormal3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_normal3d(void* self, double nx, double ny, double nz) {
    QOpenGLFunctions_2_1_GlNormal3d((QOpenGLFunctions_2_1*)self, nx, ny, nz);
}

void q_openglfunctions_2_1_gl_normal3bv(void* self, signed char* v) {
    QOpenGLFunctions_2_1_GlNormal3bv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz) {
    QOpenGLFunctions_2_1_GlNormal3b((QOpenGLFunctions_2_1*)self, nx, ny, nz);
}

void q_openglfunctions_2_1_gl_indexsv(void* self, int16_t* c) {
    QOpenGLFunctions_2_1_GlIndexsv((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexs(void* self, int16_t c) {
    QOpenGLFunctions_2_1_GlIndexs((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexiv(void* self, int32_t* c) {
    QOpenGLFunctions_2_1_GlIndexiv((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexi(void* self, int32_t c) {
    QOpenGLFunctions_2_1_GlIndexi((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexfv(void* self, float* c) {
    QOpenGLFunctions_2_1_GlIndexfv((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexf(void* self, float c) {
    QOpenGLFunctions_2_1_GlIndexf((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexdv(void* self, double* c) {
    QOpenGLFunctions_2_1_GlIndexdv((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_indexd(void* self, double c) {
    QOpenGLFunctions_2_1_GlIndexd((QOpenGLFunctions_2_1*)self, c);
}

void q_openglfunctions_2_1_gl_end(void* self) {
    QOpenGLFunctions_2_1_GlEnd((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_edge_flagv(void* self, uint8_t* flag) {
    QOpenGLFunctions_2_1_GlEdgeFlagv((QOpenGLFunctions_2_1*)self, flag);
}

void q_openglfunctions_2_1_gl_edge_flag(void* self, uint8_t flag) {
    QOpenGLFunctions_2_1_GlEdgeFlag((QOpenGLFunctions_2_1*)self, flag);
}

void q_openglfunctions_2_1_gl_color4usv(void* self, uint16_t* v) {
    QOpenGLFunctions_2_1_GlColor4usv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
    QOpenGLFunctions_2_1_GlColor4us((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_2_1_GlColor4uiv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
    QOpenGLFunctions_2_1_GlColor4ui((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_2_1_GlColor4ubv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_2_1_GlColor4ub((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlColor4sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
    QOpenGLFunctions_2_1_GlColor4s((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlColor4iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
    QOpenGLFunctions_2_1_GlColor4i((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlColor4fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4f(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_2_1_GlColor4f((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlColor4dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4d(void* self, double red, double green, double blue, double alpha) {
    QOpenGLFunctions_2_1_GlColor4d((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color4bv(void* self, signed char* v) {
    QOpenGLFunctions_2_1_GlColor4bv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha) {
    QOpenGLFunctions_2_1_GlColor4b((QOpenGLFunctions_2_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_2_1_gl_color3usv(void* self, uint16_t* v) {
    QOpenGLFunctions_2_1_GlColor3usv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue) {
    QOpenGLFunctions_2_1_GlColor3us((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_2_1_GlColor3uiv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue) {
    QOpenGLFunctions_2_1_GlColor3ui((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_2_1_GlColor3ubv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue) {
    QOpenGLFunctions_2_1_GlColor3ub((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlColor3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue) {
    QOpenGLFunctions_2_1_GlColor3s((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlColor3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue) {
    QOpenGLFunctions_2_1_GlColor3i((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlColor3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3f(void* self, float red, float green, float blue) {
    QOpenGLFunctions_2_1_GlColor3f((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlColor3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3d(void* self, double red, double green, double blue) {
    QOpenGLFunctions_2_1_GlColor3d((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_color3bv(void* self, signed char* v) {
    QOpenGLFunctions_2_1_GlColor3bv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_color3b(void* self, signed char red, signed char green, signed char blue) {
    QOpenGLFunctions_2_1_GlColor3b((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap) {
    QOpenGLFunctions_2_1_GlBitmap((QOpenGLFunctions_2_1*)self, width, height, xorig, yorig, xmove, ymove, bitmap);
}

void q_openglfunctions_2_1_gl_begin(void* self, uint32_t mode) {
    QOpenGLFunctions_2_1_GlBegin((QOpenGLFunctions_2_1*)self, mode);
}

void q_openglfunctions_2_1_gl_list_base(void* self, uint32_t base) {
    QOpenGLFunctions_2_1_GlListBase((QOpenGLFunctions_2_1*)self, base);
}

uint32_t q_openglfunctions_2_1_gl_gen_lists(void* self, int32_t range) {
    return QOpenGLFunctions_2_1_GlGenLists((QOpenGLFunctions_2_1*)self, range);
}

void q_openglfunctions_2_1_gl_delete_lists(void* self, uint32_t list, int32_t range) {
    QOpenGLFunctions_2_1_GlDeleteLists((QOpenGLFunctions_2_1*)self, list, range);
}

void q_openglfunctions_2_1_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists) {
    QOpenGLFunctions_2_1_GlCallLists((QOpenGLFunctions_2_1*)self, n, type, lists);
}

void q_openglfunctions_2_1_gl_call_list(void* self, uint32_t list) {
    QOpenGLFunctions_2_1_GlCallList((QOpenGLFunctions_2_1*)self, list);
}

void q_openglfunctions_2_1_gl_end_list(void* self) {
    QOpenGLFunctions_2_1_GlEndList((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_new_list(void* self, uint32_t list, uint32_t mode) {
    QOpenGLFunctions_2_1_GlNewList((QOpenGLFunctions_2_1*)self, list, mode);
}

void q_openglfunctions_2_1_gl_push_client_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_2_1_GlPushClientAttrib((QOpenGLFunctions_2_1*)self, mask);
}

void q_openglfunctions_2_1_gl_pop_client_attrib(void* self) {
    QOpenGLFunctions_2_1_GlPopClientAttrib((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities) {
    QOpenGLFunctions_2_1_GlPrioritizeTextures((QOpenGLFunctions_2_1*)self, n, textures, priorities);
}

uint8_t q_openglfunctions_2_1_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences) {
    return QOpenGLFunctions_2_1_GlAreTexturesResident((QOpenGLFunctions_2_1*)self, n, textures, residences);
}

void q_openglfunctions_2_1_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlVertexPointer((QOpenGLFunctions_2_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlTexCoordPointer((QOpenGLFunctions_2_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlNormalPointer((QOpenGLFunctions_2_1*)self, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlInterleavedArrays((QOpenGLFunctions_2_1*)self, format, stride, pointer);
}

void q_openglfunctions_2_1_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlIndexPointer((QOpenGLFunctions_2_1*)self, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_enable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_2_1_GlEnableClientState((QOpenGLFunctions_2_1*)self, array);
}

void q_openglfunctions_2_1_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlEdgeFlagPointer((QOpenGLFunctions_2_1*)self, stride, pointer);
}

void q_openglfunctions_2_1_gl_disable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_2_1_GlDisableClientState((QOpenGLFunctions_2_1*)self, array);
}

void q_openglfunctions_2_1_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlColorPointer((QOpenGLFunctions_2_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_array_element(void* self, int32_t i) {
    QOpenGLFunctions_2_1_GlArrayElement((QOpenGLFunctions_2_1*)self, i);
}

void q_openglfunctions_2_1_gl_reset_minmax(void* self, uint32_t target) {
    QOpenGLFunctions_2_1_GlResetMinmax((QOpenGLFunctions_2_1*)self, target);
}

void q_openglfunctions_2_1_gl_reset_histogram(void* self, uint32_t target) {
    QOpenGLFunctions_2_1_GlResetHistogram((QOpenGLFunctions_2_1*)self, target);
}

void q_openglfunctions_2_1_gl_minmax(void* self, uint32_t target, uint32_t internalformat, uint8_t sink) {
    QOpenGLFunctions_2_1_GlMinmax((QOpenGLFunctions_2_1*)self, target, internalformat, sink);
}

void q_openglfunctions_2_1_gl_histogram(void* self, uint32_t target, int32_t width, uint32_t internalformat, uint8_t sink) {
    QOpenGLFunctions_2_1_GlHistogram((QOpenGLFunctions_2_1*)self, target, width, internalformat, sink);
}

void q_openglfunctions_2_1_gl_get_minmax_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetMinmaxParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_minmax_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetMinmaxParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_minmax(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values) {
    QOpenGLFunctions_2_1_GlGetMinmax((QOpenGLFunctions_2_1*)self, target, reset, format, type, values);
}

void q_openglfunctions_2_1_gl_get_histogram_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetHistogramParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_histogram_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetHistogramParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_histogram(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values) {
    QOpenGLFunctions_2_1_GlGetHistogram((QOpenGLFunctions_2_1*)self, target, reset, format, type, values);
}

void q_openglfunctions_2_1_gl_separable_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* row, void* column) {
    QOpenGLFunctions_2_1_GlSeparableFilter2D((QOpenGLFunctions_2_1*)self, target, internalformat, width, height, format, type, row, column);
}

void q_openglfunctions_2_1_gl_get_separable_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* row, void* column, void* span) {
    QOpenGLFunctions_2_1_GlGetSeparableFilter((QOpenGLFunctions_2_1*)self, target, format, type, row, column, span);
}

void q_openglfunctions_2_1_gl_get_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetConvolutionParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetConvolutionParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_convolution_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_2_1_GlGetConvolutionFilter((QOpenGLFunctions_2_1*)self, target, format, type, image);
}

void q_openglfunctions_2_1_gl_copy_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_2_1_GlCopyConvolutionFilter2D((QOpenGLFunctions_2_1*)self, target, internalformat, x, y, width, height);
}

void q_openglfunctions_2_1_gl_copy_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_2_1_GlCopyConvolutionFilter1D((QOpenGLFunctions_2_1*)self, target, internalformat, x, y, width);
}

void q_openglfunctions_2_1_gl_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlConvolutionParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_convolution_parameteri(void* self, uint32_t target, uint32_t pname, int32_t params) {
    QOpenGLFunctions_2_1_GlConvolutionParameteri((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlConvolutionParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_convolution_parameterf(void* self, uint32_t target, uint32_t pname, float params) {
    QOpenGLFunctions_2_1_GlConvolutionParameterf((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_2_1_GlConvolutionFilter2D((QOpenGLFunctions_2_1*)self, target, internalformat, width, height, format, type, image);
}

void q_openglfunctions_2_1_gl_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_2_1_GlConvolutionFilter1D((QOpenGLFunctions_2_1*)self, target, internalformat, width, format, type, image);
}

void q_openglfunctions_2_1_gl_copy_color_sub_table(void* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_2_1_GlCopyColorSubTable((QOpenGLFunctions_2_1*)self, target, start, x, y, width);
}

void q_openglfunctions_2_1_gl_color_sub_table(void* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t type, void* data) {
    QOpenGLFunctions_2_1_GlColorSubTable((QOpenGLFunctions_2_1*)self, target, start, count, format, type, data);
}

void q_openglfunctions_2_1_gl_get_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlGetColorTableParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlGetColorTableParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_get_color_table(void* self, uint32_t target, uint32_t format, uint32_t type, void* table) {
    QOpenGLFunctions_2_1_GlGetColorTable((QOpenGLFunctions_2_1*)self, target, format, type, table);
}

void q_openglfunctions_2_1_gl_copy_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_2_1_GlCopyColorTable((QOpenGLFunctions_2_1*)self, target, internalformat, x, y, width);
}

void q_openglfunctions_2_1_gl_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_2_1_GlColorTableParameteriv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_2_1_GlColorTableParameterfv((QOpenGLFunctions_2_1*)self, target, pname, params);
}

void q_openglfunctions_2_1_gl_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* table) {
    QOpenGLFunctions_2_1_GlColorTable((QOpenGLFunctions_2_1*)self, target, internalformat, width, format, type, table);
}

void q_openglfunctions_2_1_gl_mult_transpose_matrixd(void* self, double* m) {
    QOpenGLFunctions_2_1_GlMultTransposeMatrixd((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_mult_transpose_matrixf(void* self, float* m) {
    QOpenGLFunctions_2_1_GlMultTransposeMatrixf((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_load_transpose_matrixd(void* self, double* m) {
    QOpenGLFunctions_2_1_GlLoadTransposeMatrixd((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_load_transpose_matrixf(void* self, float* m) {
    QOpenGLFunctions_2_1_GlLoadTransposeMatrixf((QOpenGLFunctions_2_1*)self, m);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4sv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4s((QOpenGLFunctions_2_1*)self, target, s, t, r, q);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4iv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4i((QOpenGLFunctions_2_1*)self, target, s, t, r, q);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4fv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4f(void* self, uint32_t target, float s, float t, float r, float q) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4f((QOpenGLFunctions_2_1*)self, target, s, t, r, q);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4dv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord4d(void* self, uint32_t target, double s, double t, double r, double q) {
    QOpenGLFunctions_2_1_GlMultiTexCoord4d((QOpenGLFunctions_2_1*)self, target, s, t, r, q);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3sv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3s((QOpenGLFunctions_2_1*)self, target, s, t, r);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3iv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3i((QOpenGLFunctions_2_1*)self, target, s, t, r);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3fv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3f(void* self, uint32_t target, float s, float t, float r) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3f((QOpenGLFunctions_2_1*)self, target, s, t, r);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3dv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord3d(void* self, uint32_t target, double s, double t, double r) {
    QOpenGLFunctions_2_1_GlMultiTexCoord3d((QOpenGLFunctions_2_1*)self, target, s, t, r);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2sv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2s(void* self, uint32_t target, int16_t s, int16_t t) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2s((QOpenGLFunctions_2_1*)self, target, s, t);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2iv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2i(void* self, uint32_t target, int32_t s, int32_t t) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2i((QOpenGLFunctions_2_1*)self, target, s, t);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2fv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2f(void* self, uint32_t target, float s, float t) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2f((QOpenGLFunctions_2_1*)self, target, s, t);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2dv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord2d(void* self, uint32_t target, double s, double t) {
    QOpenGLFunctions_2_1_GlMultiTexCoord2d((QOpenGLFunctions_2_1*)self, target, s, t);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1sv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1s(void* self, uint32_t target, int16_t s) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1s((QOpenGLFunctions_2_1*)self, target, s);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1iv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1i(void* self, uint32_t target, int32_t s) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1i((QOpenGLFunctions_2_1*)self, target, s);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1fv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1f(void* self, uint32_t target, float s) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1f((QOpenGLFunctions_2_1*)self, target, s);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1dv((QOpenGLFunctions_2_1*)self, target, v);
}

void q_openglfunctions_2_1_gl_multi_tex_coord1d(void* self, uint32_t target, double s) {
    QOpenGLFunctions_2_1_GlMultiTexCoord1d((QOpenGLFunctions_2_1*)self, target, s);
}

void q_openglfunctions_2_1_gl_client_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_2_1_GlClientActiveTexture((QOpenGLFunctions_2_1*)self, texture);
}

void q_openglfunctions_2_1_gl_window_pos3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlWindowPos3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_2_1_GlWindowPos3s((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_window_pos3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlWindowPos3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_2_1_GlWindowPos3i((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_window_pos3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlWindowPos3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlWindowPos3f((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_window_pos3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlWindowPos3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlWindowPos3d((QOpenGLFunctions_2_1*)self, x, y, z);
}

void q_openglfunctions_2_1_gl_window_pos2sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlWindowPos2sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_2_1_GlWindowPos2s((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_window_pos2iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlWindowPos2iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_2_1_GlWindowPos2i((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_window_pos2fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlWindowPos2fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos2f(void* self, float x, float y) {
    QOpenGLFunctions_2_1_GlWindowPos2f((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_window_pos2dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlWindowPos2dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_window_pos2d(void* self, double x, double y) {
    QOpenGLFunctions_2_1_GlWindowPos2d((QOpenGLFunctions_2_1*)self, x, y);
}

void q_openglfunctions_2_1_gl_secondary_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlSecondaryColorPointer((QOpenGLFunctions_2_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_secondary_color3usv(void* self, uint16_t* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3usv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3us((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3uiv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3ui((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3ubv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3ub((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3sv(void* self, int16_t* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3sv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3s(void* self, int16_t red, int16_t green, int16_t blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3s((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3iv(void* self, int32_t* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3iv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3i(void* self, int32_t red, int32_t green, int32_t blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3i((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3fv(void* self, float* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3fv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3f(void* self, float red, float green, float blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3f((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3dv(void* self, double* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3dv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3d(void* self, double red, double green, double blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3d((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_secondary_color3bv(void* self, signed char* v) {
    QOpenGLFunctions_2_1_GlSecondaryColor3bv((QOpenGLFunctions_2_1*)self, v);
}

void q_openglfunctions_2_1_gl_secondary_color3b(void* self, signed char red, signed char green, signed char blue) {
    QOpenGLFunctions_2_1_GlSecondaryColor3b((QOpenGLFunctions_2_1*)self, red, green, blue);
}

void q_openglfunctions_2_1_gl_fog_coord_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_2_1_GlFogCoordPointer((QOpenGLFunctions_2_1*)self, type, stride, pointer);
}

void q_openglfunctions_2_1_gl_fog_coorddv(void* self, double* coord) {
    QOpenGLFunctions_2_1_GlFogCoorddv((QOpenGLFunctions_2_1*)self, coord);
}

void q_openglfunctions_2_1_gl_fog_coordd(void* self, double coord) {
    QOpenGLFunctions_2_1_GlFogCoordd((QOpenGLFunctions_2_1*)self, coord);
}

void q_openglfunctions_2_1_gl_fog_coordfv(void* self, float* coord) {
    QOpenGLFunctions_2_1_GlFogCoordfv((QOpenGLFunctions_2_1*)self, coord);
}

void q_openglfunctions_2_1_gl_fog_coordf(void* self, float coord) {
    QOpenGLFunctions_2_1_GlFogCoordf((QOpenGLFunctions_2_1*)self, coord);
}

void q_openglfunctions_2_1_gl_vertex_attrib4usv(void* self, uint32_t index, uint16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4usv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4uiv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4ubv(void* self, uint32_t index, uint8_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4ubv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4sv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_2_1_GlVertexAttrib4s((QOpenGLFunctions_2_1*)self, index, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex_attrib4iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4iv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4fv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4f(void* self, uint32_t index, float x, float y, float z, float w) {
    QOpenGLFunctions_2_1_GlVertexAttrib4f((QOpenGLFunctions_2_1*)self, index, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex_attrib4dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4dv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4d(void* self, uint32_t index, double x, double y, double z, double w) {
    QOpenGLFunctions_2_1_GlVertexAttrib4d((QOpenGLFunctions_2_1*)self, index, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex_attrib4bv(void* self, uint32_t index, signed char* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4bv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nusv(void* self, uint32_t index, uint16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nusv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nuiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nuiv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nubv(void* self, uint32_t index, uint8_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nubv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nub(void* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nub((QOpenGLFunctions_2_1*)self, index, x, y, z, w);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nsv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nsv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_niv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Niv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib4_nbv(void* self, uint32_t index, signed char* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib4Nbv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib3sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib3sv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib3s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_2_1_GlVertexAttrib3s((QOpenGLFunctions_2_1*)self, index, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex_attrib3fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib3fv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib3f(void* self, uint32_t index, float x, float y, float z) {
    QOpenGLFunctions_2_1_GlVertexAttrib3f((QOpenGLFunctions_2_1*)self, index, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex_attrib3dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib3dv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib3d(void* self, uint32_t index, double x, double y, double z) {
    QOpenGLFunctions_2_1_GlVertexAttrib3d((QOpenGLFunctions_2_1*)self, index, x, y, z);
}

void q_openglfunctions_2_1_gl_vertex_attrib2sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib2sv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib2s(void* self, uint32_t index, int16_t x, int16_t y) {
    QOpenGLFunctions_2_1_GlVertexAttrib2s((QOpenGLFunctions_2_1*)self, index, x, y);
}

void q_openglfunctions_2_1_gl_vertex_attrib2fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib2fv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib2f(void* self, uint32_t index, float x, float y) {
    QOpenGLFunctions_2_1_GlVertexAttrib2f((QOpenGLFunctions_2_1*)self, index, x, y);
}

void q_openglfunctions_2_1_gl_vertex_attrib2dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib2dv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib2d(void* self, uint32_t index, double x, double y) {
    QOpenGLFunctions_2_1_GlVertexAttrib2d((QOpenGLFunctions_2_1*)self, index, x, y);
}

void q_openglfunctions_2_1_gl_vertex_attrib1sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib1sv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib1s(void* self, uint32_t index, int16_t x) {
    QOpenGLFunctions_2_1_GlVertexAttrib1s((QOpenGLFunctions_2_1*)self, index, x);
}

void q_openglfunctions_2_1_gl_vertex_attrib1fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib1fv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib1f(void* self, uint32_t index, float x) {
    QOpenGLFunctions_2_1_GlVertexAttrib1f((QOpenGLFunctions_2_1*)self, index, x);
}

void q_openglfunctions_2_1_gl_vertex_attrib1dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_2_1_GlVertexAttrib1dv((QOpenGLFunctions_2_1*)self, index, v);
}

void q_openglfunctions_2_1_gl_vertex_attrib1d(void* self, uint32_t index, double x) {
    QOpenGLFunctions_2_1_GlVertexAttrib1d((QOpenGLFunctions_2_1*)self, index, x);
}

bool q_openglfunctions_2_1_is_initialized(void* self) {
    return QOpenGLFunctions_2_1_IsInitialized((QOpenGLFunctions_2_1*)self);
}

bool q_openglfunctions_2_1_qbase_is_initialized(void* self) {
    return QOpenGLFunctions_2_1_QBaseIsInitialized((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_2_1_OnIsInitialized((QOpenGLFunctions_2_1*)self, (intptr_t)callback);
}

void q_openglfunctions_2_1_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_2_1_SetOwningContext((QOpenGLFunctions_2_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_2_1_qbase_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_2_1_QBaseSetOwningContext((QOpenGLFunctions_2_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_2_1_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_2_1_OnSetOwningContext((QOpenGLFunctions_2_1*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_2_1_owning_context(void* self) {
    return QOpenGLFunctions_2_1_OwningContext((QOpenGLFunctions_2_1*)self);
}

QOpenGLContext* q_openglfunctions_2_1_qbase_owning_context(void* self) {
    return QOpenGLFunctions_2_1_QBaseOwningContext((QOpenGLFunctions_2_1*)self);
}

void q_openglfunctions_2_1_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_2_1_OnOwningContext((QOpenGLFunctions_2_1*)self, (intptr_t)callback);
}

void q_openglfunctions_2_1_delete(void* self) {
    QOpenGLFunctions_2_1_Delete((QOpenGLFunctions_2_1*)(self));
}
