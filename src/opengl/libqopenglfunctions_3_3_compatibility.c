#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_3_3_compatibility.hpp"
#include "libqopenglfunctions_3_3_compatibility.h"

QOpenGLFunctions_3_3_Compatibility* q_openglfunctions_3_3_compatibility_new() {
    return QOpenGLFunctions_3_3_Compatibility_new();
}

bool q_openglfunctions_3_3_compatibility_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_InitializeOpenGLFunctions((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_3_Compatibility_OnInitializeOpenGLFunctions((QOpenGLFunctions_3_3_Compatibility*)self, (intptr_t)callback);
}

bool q_openglfunctions_3_3_compatibility_qbase_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_QBaseInitializeOpenGLFunctions((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlViewport((QOpenGLFunctions_3_3_Compatibility*)self, x, y, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_3_3_Compatibility_GlDepthRange((QOpenGLFunctions_3_3_Compatibility*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsEnabled((QOpenGLFunctions_3_3_Compatibility*)self, cap);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexLevelParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, level, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexLevelParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, level, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexImage((QOpenGLFunctions_3_3_Compatibility*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_3_3_compatibility_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_3_3_Compatibility_GlGetString((QOpenGLFunctions_3_3_Compatibility*)self, name);
}

void q_openglfunctions_3_3_compatibility_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetIntegerv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetFloatv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetDoublev((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetBooleanv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlReadPixels((QOpenGLFunctions_3_3_Compatibility*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlReadBuffer((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelStorei((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelStoref((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_3_3_Compatibility_GlDepthFunc((QOpenGLFunctions_3_3_Compatibility*)self, func);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilOp((QOpenGLFunctions_3_3_Compatibility*)self, fail, zfail, zpass);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilFunc((QOpenGLFunctions_3_3_Compatibility*)self, func, ref, mask);
}

void q_openglfunctions_3_3_compatibility_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_3_3_Compatibility_GlLogicOp((QOpenGLFunctions_3_3_Compatibility*)self, opcode);
}

void q_openglfunctions_3_3_compatibility_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_3_3_Compatibility_GlBlendFunc((QOpenGLFunctions_3_3_Compatibility*)self, sfactor, dfactor);
}

void q_openglfunctions_3_3_compatibility_gl_flush(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlFlush((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_finish(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlFinish((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_3_Compatibility_GlEnable((QOpenGLFunctions_3_3_Compatibility*)self, cap);
}

void q_openglfunctions_3_3_compatibility_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_3_Compatibility_GlDisable((QOpenGLFunctions_3_3_Compatibility*)self, cap);
}

void q_openglfunctions_3_3_compatibility_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_3_3_Compatibility_GlDepthMask((QOpenGLFunctions_3_3_Compatibility*)self, flag);
}

void q_openglfunctions_3_3_compatibility_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColorMask((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilMask((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_3_3_Compatibility_GlClearDepth((QOpenGLFunctions_3_3_Compatibility*)self, depth);
}

void q_openglfunctions_3_3_compatibility_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_3_3_Compatibility_GlClearStencil((QOpenGLFunctions_3_3_Compatibility*)self, s);
}

void q_openglfunctions_3_3_compatibility_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlClearColor((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlClear((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawBuffer((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameteri((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameterf((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlScissor((QOpenGLFunctions_3_3_Compatibility*)self, x, y, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlPolygonMode((QOpenGLFunctions_3_3_Compatibility*)self, face, mode);
}

void q_openglfunctions_3_3_compatibility_gl_point_size(void* self, float size) {
    QOpenGLFunctions_3_3_Compatibility_GlPointSize((QOpenGLFunctions_3_3_Compatibility*)self, size);
}

void q_openglfunctions_3_3_compatibility_gl_line_width(void* self, float width) {
    QOpenGLFunctions_3_3_Compatibility_GlLineWidth((QOpenGLFunctions_3_3_Compatibility*)self, width);
}

void q_openglfunctions_3_3_compatibility_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlHint((QOpenGLFunctions_3_3_Compatibility*)self, target, mode);
}

void q_openglfunctions_3_3_compatibility_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlFrontFace((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlCullFace((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_indexubv(void* self, uint8_t* c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexubv((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexub(void* self, uint8_t c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexub((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsTexture((QOpenGLFunctions_3_3_Compatibility*)self, texture);
}

void q_openglfunctions_3_3_compatibility_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_3_Compatibility_GlGenTextures((QOpenGLFunctions_3_3_Compatibility*)self, n, textures);
}

void q_openglfunctions_3_3_compatibility_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteTextures((QOpenGLFunctions_3_3_Compatibility*)self, n, textures);
}

void q_openglfunctions_3_3_compatibility_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_3_3_Compatibility_GlBindTexture((QOpenGLFunctions_3_3_Compatibility*)self, target, texture);
}

void q_openglfunctions_3_3_compatibility_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexSubImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexSubImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_3_3_compatibility_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyTexImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_3_3_compatibility_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyTexImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_3_3_compatibility_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_3_3_Compatibility_GlPolygonOffset((QOpenGLFunctions_3_3_Compatibility*)self, factor, units);
}

void q_openglfunctions_3_3_compatibility_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawElements((QOpenGLFunctions_3_3_Compatibility*)self, mode, count, type, indices);
}

void q_openglfunctions_3_3_compatibility_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawArrays((QOpenGLFunctions_3_3_Compatibility*)self, mode, first, count);
}

void q_openglfunctions_3_3_compatibility_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyTexSubImage3D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexSubImage3D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlTexImage3D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawRangeElements((QOpenGLFunctions_3_3_Compatibility*)self, mode, start, end, count, type, indices);
}

void q_openglfunctions_3_3_compatibility_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlBlendEquation((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlBlendColor((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img) {
    QOpenGLFunctions_3_3_Compatibility_GlGetCompressedTexImage((QOpenGLFunctions_3_3_Compatibility*)self, target, level, img);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, width, format, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexSubImage3D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage1D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, border, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage2D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlCompressedTexImage3D((QOpenGLFunctions_3_3_Compatibility*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglfunctions_3_3_compatibility_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_3_3_Compatibility_GlSampleCoverage((QOpenGLFunctions_3_3_Compatibility*)self, value, invert);
}

void q_openglfunctions_3_3_compatibility_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_3_3_Compatibility_GlActiveTexture((QOpenGLFunctions_3_3_Compatibility*)self, texture);
}

void q_openglfunctions_3_3_compatibility_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlPointParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_point_parameteri(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlPointParameteri((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_point_parameterfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlPointParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_point_parameterf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlPointParameterf((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiDrawArrays((QOpenGLFunctions_3_3_Compatibility*)self, mode, first, count, drawcount);
}

void q_openglfunctions_3_3_compatibility_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    QOpenGLFunctions_3_3_Compatibility_GlBlendFuncSeparate((QOpenGLFunctions_3_3_Compatibility*)self, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void q_openglfunctions_3_3_compatibility_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetBufferParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLFunctions_3_3_Compatibility_GlUnmapBuffer((QOpenGLFunctions_3_3_Compatibility*)self, target);
}

void* q_openglfunctions_3_3_compatibility_gl_map_buffer(void* self, uint32_t target, uint32_t access) {
    return QOpenGLFunctions_3_3_Compatibility_GlMapBuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, access);
}

void q_openglfunctions_3_3_compatibility_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlGetBufferSubData((QOpenGLFunctions_3_3_Compatibility*)self, target, offset, size, data);
}

void q_openglfunctions_3_3_compatibility_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlBufferSubData((QOpenGLFunctions_3_3_Compatibility*)self, target, offset, size, data);
}

void q_openglfunctions_3_3_compatibility_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_3_3_Compatibility_GlBufferData((QOpenGLFunctions_3_3_Compatibility*)self, target, size, data, usage);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsBuffer((QOpenGLFunctions_3_3_Compatibility*)self, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_3_Compatibility_GlGenBuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, buffers);
}

void q_openglfunctions_3_3_compatibility_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteBuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, buffers);
}

void q_openglfunctions_3_3_compatibility_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_3_3_Compatibility_GlBindBuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectuiv((QOpenGLFunctions_3_3_Compatibility*)self, id, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectiv((QOpenGLFunctions_3_3_Compatibility*)self, id, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetQueryiv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_end_query(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Compatibility_GlEndQuery((QOpenGLFunctions_3_3_Compatibility*)self, target);
}

void q_openglfunctions_3_3_compatibility_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_3_3_Compatibility_GlBeginQuery((QOpenGLFunctions_3_3_Compatibility*)self, target, id);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_query(void* self, uint32_t id) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsQuery((QOpenGLFunctions_3_3_Compatibility*)self, id);
}

void q_openglfunctions_3_3_compatibility_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteQueries((QOpenGLFunctions_3_3_Compatibility*)self, n, ids);
}

void q_openglfunctions_3_3_compatibility_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_3_Compatibility_GlGenQueries((QOpenGLFunctions_3_3_Compatibility*)self, n, ids);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribPointer((QOpenGLFunctions_3_3_Compatibility*)self, index, size, type, normalized, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Compatibility_GlValidateProgram((QOpenGLFunctions_3_3_Compatibility*)self, program);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4iv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3iv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2iv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1iv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4i((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3i((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2i((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1i(void* self, int32_t location, int32_t v0) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1i((QOpenGLFunctions_3_3_Compatibility*)self, location, v0);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4f((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3f((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2f(void* self, int32_t location, float v0, float v1) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2f((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1f(void* self, int32_t location, float v0) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1f((QOpenGLFunctions_3_3_Compatibility*)self, location, v0);
}

void q_openglfunctions_3_3_compatibility_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Compatibility_GlUseProgram((QOpenGLFunctions_3_3_Compatibility*)self, program);
}

void q_openglfunctions_3_3_compatibility_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Compatibility_GlLinkProgram((QOpenGLFunctions_3_3_Compatibility*)self, program);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsShader((QOpenGLFunctions_3_3_Compatibility*)self, shader);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsProgram((QOpenGLFunctions_3_3_Compatibility*)self, program);
}

void q_openglfunctions_3_3_compatibility_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribiv((QOpenGLFunctions_3_3_Compatibility*)self, index, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribfv((QOpenGLFunctions_3_3_Compatibility*)self, index, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribdv((QOpenGLFunctions_3_3_Compatibility*)self, index, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetUniformiv((QOpenGLFunctions_3_3_Compatibility*)self, program, location, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetUniformfv((QOpenGLFunctions_3_3_Compatibility*)self, program, location, params);
}

int32_t q_openglfunctions_3_3_compatibility_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Compatibility_GlGetUniformLocation((QOpenGLFunctions_3_3_Compatibility*)self, program, name);
}

void q_openglfunctions_3_3_compatibility_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source) {
    QOpenGLFunctions_3_3_Compatibility_GlGetShaderSource((QOpenGLFunctions_3_3_Compatibility*)self, shader, bufSize, length, source);
}

void q_openglfunctions_3_3_compatibility_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_3_Compatibility_GlGetShaderInfoLog((QOpenGLFunctions_3_3_Compatibility*)self, shader, bufSize, length, infoLog);
}

void q_openglfunctions_3_3_compatibility_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetShaderiv((QOpenGLFunctions_3_3_Compatibility*)self, shader, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_3_Compatibility_GlGetProgramInfoLog((QOpenGLFunctions_3_3_Compatibility*)self, program, bufSize, length, infoLog);
}

void q_openglfunctions_3_3_compatibility_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetProgramiv((QOpenGLFunctions_3_3_Compatibility*)self, program, pname, params);
}

int32_t q_openglfunctions_3_3_compatibility_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Compatibility_GlGetAttribLocation((QOpenGLFunctions_3_3_Compatibility*)self, program, name);
}

void q_openglfunctions_3_3_compatibility_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    QOpenGLFunctions_3_3_Compatibility_GlGetAttachedShaders((QOpenGLFunctions_3_3_Compatibility*)self, program, maxCount, count, obj);
}

void q_openglfunctions_3_3_compatibility_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Compatibility_GlEnableVertexAttribArray((QOpenGLFunctions_3_3_Compatibility*)self, index);
}

void q_openglfunctions_3_3_compatibility_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Compatibility_GlDisableVertexAttribArray((QOpenGLFunctions_3_3_Compatibility*)self, index);
}

void q_openglfunctions_3_3_compatibility_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_3_Compatibility_GlDetachShader((QOpenGLFunctions_3_3_Compatibility*)self, program, shader);
}

void q_openglfunctions_3_3_compatibility_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteShader((QOpenGLFunctions_3_3_Compatibility*)self, shader);
}

void q_openglfunctions_3_3_compatibility_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteProgram((QOpenGLFunctions_3_3_Compatibility*)self, program);
}

uint32_t q_openglfunctions_3_3_compatibility_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_3_3_Compatibility_GlCreateShader((QOpenGLFunctions_3_3_Compatibility*)self, type);
}

uint32_t q_openglfunctions_3_3_compatibility_gl_create_program(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_GlCreateProgram((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_3_Compatibility_GlCompileShader((QOpenGLFunctions_3_3_Compatibility*)self, shader);
}

void q_openglfunctions_3_3_compatibility_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_3_3_Compatibility_GlBindAttribLocation((QOpenGLFunctions_3_3_Compatibility*)self, program, index, name);
}

void q_openglfunctions_3_3_compatibility_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_3_Compatibility_GlAttachShader((QOpenGLFunctions_3_3_Compatibility*)self, program, shader);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilMaskSeparate((QOpenGLFunctions_3_3_Compatibility*)self, face, mask);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilFuncSeparate((QOpenGLFunctions_3_3_Compatibility*)self, face, func, ref, mask);
}

void q_openglfunctions_3_3_compatibility_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    QOpenGLFunctions_3_3_Compatibility_GlStencilOpSeparate((QOpenGLFunctions_3_3_Compatibility*)self, face, sfail, dpfail, dppass);
}

void q_openglfunctions_3_3_compatibility_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_3_3_Compatibility_GlBlendEquationSeparate((QOpenGLFunctions_3_3_Compatibility*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4x3fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3x4fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix4x2fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2x4fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix3x2fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformMatrix2x3fv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, transpose, value);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_vertex_array(void* self, uint32_t array) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsVertexArray((QOpenGLFunctions_3_3_Compatibility*)self, array);
}

void q_openglfunctions_3_3_compatibility_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_3_Compatibility_GlGenVertexArrays((QOpenGLFunctions_3_3_Compatibility*)self, n, arrays);
}

void q_openglfunctions_3_3_compatibility_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteVertexArrays((QOpenGLFunctions_3_3_Compatibility*)self, n, arrays);
}

void q_openglfunctions_3_3_compatibility_gl_bind_vertex_array(void* self, uint32_t array) {
    QOpenGLFunctions_3_3_Compatibility_GlBindVertexArray((QOpenGLFunctions_3_3_Compatibility*)self, array);
}

void q_openglfunctions_3_3_compatibility_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length) {
    QOpenGLFunctions_3_3_Compatibility_GlFlushMappedBufferRange((QOpenGLFunctions_3_3_Compatibility*)self, target, offset, length);
}

void* q_openglfunctions_3_3_compatibility_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access) {
    return QOpenGLFunctions_3_3_Compatibility_GlMapBufferRange((QOpenGLFunctions_3_3_Compatibility*)self, target, offset, length, access);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferTextureLayer((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, texture, level, layer);
}

void q_openglfunctions_3_3_compatibility_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlRenderbufferStorageMultisample((QOpenGLFunctions_3_3_Compatibility*)self, target, samples, internalformat, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    QOpenGLFunctions_3_3_Compatibility_GlBlitFramebuffer((QOpenGLFunctions_3_3_Compatibility*)self, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void q_openglfunctions_3_3_compatibility_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Compatibility_GlGenerateMipmap((QOpenGLFunctions_3_3_Compatibility*)self, target);
}

void q_openglfunctions_3_3_compatibility_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferRenderbuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture3D((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, textarget, texture, level, zoffset);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture2D((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture1D((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_3_compatibility_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_3_Compatibility_GlGenFramebuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, framebuffers);
}

void q_openglfunctions_3_3_compatibility_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteFramebuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, framebuffers);
}

void q_openglfunctions_3_3_compatibility_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_3_3_Compatibility_GlBindFramebuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, framebuffer);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsFramebuffer((QOpenGLFunctions_3_3_Compatibility*)self, framebuffer);
}

void q_openglfunctions_3_3_compatibility_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetRenderbufferParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlRenderbufferStorage((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_3_Compatibility_GlGenRenderbuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, renderbuffers);
}

void q_openglfunctions_3_3_compatibility_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteRenderbuffers((QOpenGLFunctions_3_3_Compatibility*)self, n, renderbuffers);
}

void q_openglfunctions_3_3_compatibility_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_3_3_Compatibility_GlBindRenderbuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, renderbuffer);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsRenderbuffer((QOpenGLFunctions_3_3_Compatibility*)self, renderbuffer);
}

const uint8_t* q_openglfunctions_3_3_compatibility_gl_get_stringi(void* self, uint32_t name, uint32_t index) {
    return (uint8_t*)QOpenGLFunctions_3_3_Compatibility_GlGetStringi((QOpenGLFunctions_3_3_Compatibility*)self, name, index);
}

void q_openglfunctions_3_3_compatibility_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    QOpenGLFunctions_3_3_Compatibility_GlClearBufferfi((QOpenGLFunctions_3_3_Compatibility*)self, buffer, drawbuffer, depth, stencil);
}

void q_openglfunctions_3_3_compatibility_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value) {
    QOpenGLFunctions_3_3_Compatibility_GlClearBufferfv((QOpenGLFunctions_3_3_Compatibility*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_compatibility_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlClearBufferuiv((QOpenGLFunctions_3_3_Compatibility*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_compatibility_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlClearBufferiv((QOpenGLFunctions_3_3_Compatibility*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterIuiv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexParameterIiv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameterIuiv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexParameterIiv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4uiv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3uiv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2uiv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1uiv((QOpenGLFunctions_3_3_Compatibility*)self, location, count, value);
}

void q_openglfunctions_3_3_compatibility_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform4ui((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_compatibility_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform3ui((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform2ui((QOpenGLFunctions_3_3_Compatibility*)self, location, v0, v1);
}

void q_openglfunctions_3_3_compatibility_gl_uniform1ui(void* self, int32_t location, uint32_t v0) {
    QOpenGLFunctions_3_3_Compatibility_GlUniform1ui((QOpenGLFunctions_3_3_Compatibility*)self, location, v0);
}

int32_t q_openglfunctions_3_3_compatibility_gl_get_frag_data_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Compatibility_GlGetFragDataLocation((QOpenGLFunctions_3_3_Compatibility*)self, program, name);
}

void q_openglfunctions_3_3_compatibility_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, const char* name) {
    QOpenGLFunctions_3_3_Compatibility_GlBindFragDataLocation((QOpenGLFunctions_3_3_Compatibility*)self, program, color, name);
}

void q_openglfunctions_3_3_compatibility_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetUniformuiv((QOpenGLFunctions_3_3_Compatibility*)self, program, location, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribIuiv((QOpenGLFunctions_3_3_Compatibility*)self, index, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetVertexAttribIiv((QOpenGLFunctions_3_3_Compatibility*)self, index, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribIPointer((QOpenGLFunctions_3_3_Compatibility*)self, index, size, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_end_conditional_render(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlEndConditionalRender((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlBeginConditionalRender((QOpenGLFunctions_3_3_Compatibility*)self, id, mode);
}

void q_openglfunctions_3_3_compatibility_gl_clamp_color(void* self, uint32_t target, uint32_t clamp) {
    QOpenGLFunctions_3_3_Compatibility_GlClampColor((QOpenGLFunctions_3_3_Compatibility*)self, target, clamp);
}

void q_openglfunctions_3_3_compatibility_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer) {
    QOpenGLFunctions_3_3_Compatibility_GlBindBufferBase((QOpenGLFunctions_3_3_Compatibility*)self, target, index, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLFunctions_3_3_Compatibility_GlBindBufferRange((QOpenGLFunctions_3_3_Compatibility*)self, target, index, buffer, offset, size);
}

void q_openglfunctions_3_3_compatibility_gl_end_transform_feedback(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlEndTransformFeedback((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_begin_transform_feedback(void* self, uint32_t primitiveMode) {
    QOpenGLFunctions_3_3_Compatibility_GlBeginTransformFeedback((QOpenGLFunctions_3_3_Compatibility*)self, primitiveMode);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_enabledi(void* self, uint32_t target, uint32_t index) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsEnabledi((QOpenGLFunctions_3_3_Compatibility*)self, target, index);
}

void q_openglfunctions_3_3_compatibility_gl_disablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_3_Compatibility_GlDisablei((QOpenGLFunctions_3_3_Compatibility*)self, target, index);
}

void q_openglfunctions_3_3_compatibility_gl_enablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_3_Compatibility_GlEnablei((QOpenGLFunctions_3_3_Compatibility*)self, target, index);
}

void q_openglfunctions_3_3_compatibility_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data) {
    QOpenGLFunctions_3_3_Compatibility_GlGetIntegeriV((QOpenGLFunctions_3_3_Compatibility*)self, target, index, data);
}

void q_openglfunctions_3_3_compatibility_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data) {
    QOpenGLFunctions_3_3_Compatibility_GlGetBooleaniV((QOpenGLFunctions_3_3_Compatibility*)self, target, index, data);
}

void q_openglfunctions_3_3_compatibility_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    QOpenGLFunctions_3_3_Compatibility_GlColorMaski((QOpenGLFunctions_3_3_Compatibility*)self, index, r, g, b, a);
}

void q_openglfunctions_3_3_compatibility_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyBufferSubData((QOpenGLFunctions_3_3_Compatibility*)self, readTarget, writeTarget, readOffset, writeOffset, size);
}

void q_openglfunctions_3_3_compatibility_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    QOpenGLFunctions_3_3_Compatibility_GlUniformBlockBinding((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformBlockIndex, uniformBlockBinding);
}

void q_openglfunctions_3_3_compatibility_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName) {
    QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformBlockName((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void q_openglfunctions_3_3_compatibility_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformBlockiv((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformBlockIndex, pname, params);
}

uint32_t q_openglfunctions_3_3_compatibility_gl_get_uniform_block_index(void* self, uint32_t program, const char* uniformBlockName) {
    return QOpenGLFunctions_3_3_Compatibility_GlGetUniformBlockIndex((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformBlockName);
}

void q_openglfunctions_3_3_compatibility_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName) {
    QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformName((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformIndex, bufSize, length, uniformName);
}

void q_openglfunctions_3_3_compatibility_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetActiveUniformsiv((QOpenGLFunctions_3_3_Compatibility*)self, program, uniformCount, uniformIndices, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_primitive_restart_index(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Compatibility_GlPrimitiveRestartIndex((QOpenGLFunctions_3_3_Compatibility*)self, index);
}

void q_openglfunctions_3_3_compatibility_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    QOpenGLFunctions_3_3_Compatibility_GlTexBuffer((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawElementsInstanced((QOpenGLFunctions_3_3_Compatibility*)self, mode, count, type, indices, instancecount);
}

void q_openglfunctions_3_3_compatibility_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawArraysInstanced((QOpenGLFunctions_3_3_Compatibility*)self, mode, first, count, instancecount);
}

void q_openglfunctions_3_3_compatibility_gl_sample_maski(void* self, uint32_t index, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlSampleMaski((QOpenGLFunctions_3_3_Compatibility*)self, index, mask);
}

void q_openglfunctions_3_3_compatibility_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMultisamplefv((QOpenGLFunctions_3_3_Compatibility*)self, pname, index, val);
}

void q_openglfunctions_3_3_compatibility_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_3_3_Compatibility_GlTexImage3DMultisample((QOpenGLFunctions_3_3_Compatibility*)self, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void q_openglfunctions_3_3_compatibility_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_3_3_Compatibility_GlTexImage2DMultisample((QOpenGLFunctions_3_3_Compatibility*)self, target, samples, internalformat, width, height, fixedsamplelocations);
}

void q_openglfunctions_3_3_compatibility_gl_get_integer64v(void* self, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetInteger64v((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_provoking_vertex(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlProvokingVertex((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawElementsInstancedBaseVertex((QOpenGLFunctions_3_3_Compatibility*)self, mode, count, type, indices, instancecount, basevertex);
}

void q_openglfunctions_3_3_compatibility_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawRangeElementsBaseVertex((QOpenGLFunctions_3_3_Compatibility*)self, mode, start, end, count, type, indices, basevertex);
}

void q_openglfunctions_3_3_compatibility_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawElementsBaseVertex((QOpenGLFunctions_3_3_Compatibility*)self, mode, count, type, indices, basevertex);
}

void q_openglfunctions_3_3_compatibility_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Compatibility_GlFramebufferTexture((QOpenGLFunctions_3_3_Compatibility*)self, target, attachment, texture, level);
}

void q_openglfunctions_3_3_compatibility_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetBufferParameteri64v((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data) {
    QOpenGLFunctions_3_3_Compatibility_GlGetInteger64iV((QOpenGLFunctions_3_3_Compatibility*)self, target, index, data);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP4uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP4ui((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP3ui((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP2uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP2ui((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP1uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribP1ui((QOpenGLFunctions_3_3_Compatibility*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color_p3uiv(void* self, uint32_t type, uint32_t* color) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color_p3ui(void* self, uint32_t type, uint32_t color) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorP3ui((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_color_p4uiv(void* self, uint32_t type, uint32_t* color) {
    QOpenGLFunctions_3_3_Compatibility_GlColorP4uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_color_p4ui(void* self, uint32_t type, uint32_t color) {
    QOpenGLFunctions_3_3_Compatibility_GlColorP4ui((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_color_p3uiv(void* self, uint32_t type, uint32_t* color) {
    QOpenGLFunctions_3_3_Compatibility_GlColorP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_color_p3ui(void* self, uint32_t type, uint32_t color) {
    QOpenGLFunctions_3_3_Compatibility_GlColorP3ui((QOpenGLFunctions_3_3_Compatibility*)self, type, color);
}

void q_openglfunctions_3_3_compatibility_gl_normal_p3uiv(void* self, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlNormalP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_normal_p3ui(void* self, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlNormalP3ui((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p4uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP4uiv((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p4ui(void* self, uint32_t texture, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP4ui((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p3uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p3ui(void* self, uint32_t texture, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP3ui((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p2uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP2uiv((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p2ui(void* self, uint32_t texture, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP2ui((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p1uiv(void* self, uint32_t texture, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP1uiv((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord_p1ui(void* self, uint32_t texture, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoordP1ui((QOpenGLFunctions_3_3_Compatibility*)self, texture, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p4uiv(void* self, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP4uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p4ui(void* self, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP4ui((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p3uiv(void* self, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p3ui(void* self, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP3ui((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p2uiv(void* self, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP2uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p2ui(void* self, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP2ui((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p1uiv(void* self, uint32_t type, uint32_t* coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP1uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_p1ui(void* self, uint32_t type, uint32_t coords) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordP1ui((QOpenGLFunctions_3_3_Compatibility*)self, type, coords);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p4uiv(void* self, uint32_t type, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP4uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p4ui(void* self, uint32_t type, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP4ui((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p3uiv(void* self, uint32_t type, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP3uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p3ui(void* self, uint32_t type, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP3ui((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p2uiv(void* self, uint32_t type, uint32_t* value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP2uiv((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_p2ui(void* self, uint32_t type, uint32_t value) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexP2ui((QOpenGLFunctions_3_3_Compatibility*)self, type, value);
}

void q_openglfunctions_3_3_compatibility_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjectui64v((QOpenGLFunctions_3_3_Compatibility*)self, id, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetQueryObjecti64v((QOpenGLFunctions_3_3_Compatibility*)self, id, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_query_counter(void* self, uint32_t id, uint32_t target) {
    QOpenGLFunctions_3_3_Compatibility_GlQueryCounter((QOpenGLFunctions_3_3_Compatibility*)self, id, target);
}

void q_openglfunctions_3_3_compatibility_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterIuiv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameterIiv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetSamplerParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterIuiv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterIiv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameterf((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlSamplerParameteri((QOpenGLFunctions_3_3_Compatibility*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler) {
    QOpenGLFunctions_3_3_Compatibility_GlBindSampler((QOpenGLFunctions_3_3_Compatibility*)self, unit, sampler);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_sampler(void* self, uint32_t sampler) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsSampler((QOpenGLFunctions_3_3_Compatibility*)self, sampler);
}

void q_openglfunctions_3_3_compatibility_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteSamplers((QOpenGLFunctions_3_3_Compatibility*)self, count, samplers);
}

void q_openglfunctions_3_3_compatibility_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_3_3_Compatibility_GlGenSamplers((QOpenGLFunctions_3_3_Compatibility*)self, count, samplers);
}

int32_t q_openglfunctions_3_3_compatibility_gl_get_frag_data_index(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Compatibility_GlGetFragDataIndex((QOpenGLFunctions_3_3_Compatibility*)self, program, name);
}

void q_openglfunctions_3_3_compatibility_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, const char* name) {
    QOpenGLFunctions_3_3_Compatibility_GlBindFragDataLocationIndexed((QOpenGLFunctions_3_3_Compatibility*)self, program, colorNumber, index, name);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribDivisor((QOpenGLFunctions_3_3_Compatibility*)self, index, divisor);
}

void q_openglfunctions_3_3_compatibility_gl_translatef(void* self, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlTranslatef((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_translated(void* self, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlTranslated((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_scalef(void* self, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlScalef((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_scaled(void* self, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlScaled((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_rotatef(void* self, float angle, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlRotatef((QOpenGLFunctions_3_3_Compatibility*)self, angle, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_rotated(void* self, double angle, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlRotated((QOpenGLFunctions_3_3_Compatibility*)self, angle, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_push_matrix(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlPushMatrix((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_pop_matrix(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlPopMatrix((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_3_3_Compatibility_GlOrtho((QOpenGLFunctions_3_3_Compatibility*)self, left, right, bottom, top, zNear, zFar);
}

void q_openglfunctions_3_3_compatibility_gl_mult_matrixd(void* self, double* m) {
    QOpenGLFunctions_3_3_Compatibility_GlMultMatrixd((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_mult_matrixf(void* self, float* m) {
    QOpenGLFunctions_3_3_Compatibility_GlMultMatrixf((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_matrix_mode(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlMatrixMode((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_load_matrixd(void* self, double* m) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadMatrixd((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_load_matrixf(void* self, float* m) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadMatrixf((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_load_identity(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadIdentity((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_3_3_Compatibility_GlFrustum((QOpenGLFunctions_3_3_Compatibility*)self, left, right, bottom, top, zNear, zFar);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_is_list(void* self, uint32_t list) {
    return QOpenGLFunctions_3_3_Compatibility_GlIsList((QOpenGLFunctions_3_3_Compatibility*)self, list);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexGeniv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexGenfv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexGendv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexEnviv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetTexEnvfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_3_3_Compatibility_GlGetPolygonStipple((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values) {
    QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapusv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, values);
}

void q_openglfunctions_3_3_compatibility_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values) {
    QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapuiv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, values);
}

void q_openglfunctions_3_3_compatibility_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values) {
    QOpenGLFunctions_3_3_Compatibility_GlGetPixelMapfv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, values);
}

void q_openglfunctions_3_3_compatibility_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMaterialiv((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMaterialfv((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMapiv((QOpenGLFunctions_3_3_Compatibility*)self, target, query, v);
}

void q_openglfunctions_3_3_compatibility_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMapfv((QOpenGLFunctions_3_3_Compatibility*)self, target, query, v);
}

void q_openglfunctions_3_3_compatibility_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMapdv((QOpenGLFunctions_3_3_Compatibility*)self, target, query, v);
}

void q_openglfunctions_3_3_compatibility_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetLightiv((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetLightfv((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_3_3_Compatibility_GlGetClipPlane((QOpenGLFunctions_3_3_Compatibility*)self, plane, equation);
}

void q_openglfunctions_3_3_compatibility_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Compatibility_GlDrawPixels((QOpenGLFunctions_3_3_Compatibility*)self, width, height, format, type, pixels);
}

void q_openglfunctions_3_3_compatibility_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyPixels((QOpenGLFunctions_3_3_Compatibility*)self, x, y, width, height, type);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelMapusv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, mapsize, values);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelMapuiv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, mapsize, values);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelMapfv((QOpenGLFunctions_3_3_Compatibility*)self, mapVal, mapsize, values);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_transferi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelTransferi((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_transferf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelTransferf((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_pixel_zoom(void* self, float xfactor, float yfactor) {
    QOpenGLFunctions_3_3_Compatibility_GlPixelZoom((QOpenGLFunctions_3_3_Compatibility*)self, xfactor, yfactor);
}

void q_openglfunctions_3_3_compatibility_gl_alpha_func(void* self, uint32_t func, float ref) {
    QOpenGLFunctions_3_3_Compatibility_GlAlphaFunc((QOpenGLFunctions_3_3_Compatibility*)self, func, ref);
}

void q_openglfunctions_3_3_compatibility_gl_eval_point2(void* self, int32_t i, int32_t j) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalPoint2((QOpenGLFunctions_3_3_Compatibility*)self, i, j);
}

void q_openglfunctions_3_3_compatibility_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalMesh2((QOpenGLFunctions_3_3_Compatibility*)self, mode, i1, i2, j1, j2);
}

void q_openglfunctions_3_3_compatibility_gl_eval_point1(void* self, int32_t i) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalPoint1((QOpenGLFunctions_3_3_Compatibility*)self, i);
}

void q_openglfunctions_3_3_compatibility_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalMesh1((QOpenGLFunctions_3_3_Compatibility*)self, mode, i1, i2);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord2fv(void* self, float* u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2fv((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord2f(void* self, float u, float v) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2f((QOpenGLFunctions_3_3_Compatibility*)self, u, v);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord2dv(void* self, double* u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2dv((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord2d(void* self, double u, double v) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord2d((QOpenGLFunctions_3_3_Compatibility*)self, u, v);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord1fv(void* self, float* u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1fv((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord1f(void* self, float u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1f((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord1dv(void* self, double* u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1dv((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_eval_coord1d(void* self, double u) {
    QOpenGLFunctions_3_3_Compatibility_GlEvalCoord1d((QOpenGLFunctions_3_3_Compatibility*)self, u);
}

void q_openglfunctions_3_3_compatibility_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2) {
    QOpenGLFunctions_3_3_Compatibility_GlMapGrid2f((QOpenGLFunctions_3_3_Compatibility*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2) {
    QOpenGLFunctions_3_3_Compatibility_GlMapGrid2d((QOpenGLFunctions_3_3_Compatibility*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_map_grid1f(void* self, int32_t un, float u1, float u2) {
    QOpenGLFunctions_3_3_Compatibility_GlMapGrid1f((QOpenGLFunctions_3_3_Compatibility*)self, un, u1, u2);
}

void q_openglfunctions_3_3_compatibility_gl_map_grid1d(void* self, int32_t un, double u1, double u2) {
    QOpenGLFunctions_3_3_Compatibility_GlMapGrid1d((QOpenGLFunctions_3_3_Compatibility*)self, un, u1, u2);
}

void q_openglfunctions_3_3_compatibility_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points) {
    QOpenGLFunctions_3_3_Compatibility_GlMap2f((QOpenGLFunctions_3_3_Compatibility*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_3_3_compatibility_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points) {
    QOpenGLFunctions_3_3_Compatibility_GlMap2d((QOpenGLFunctions_3_3_Compatibility*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_3_3_compatibility_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points) {
    QOpenGLFunctions_3_3_Compatibility_GlMap1f((QOpenGLFunctions_3_3_Compatibility*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_3_3_compatibility_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points) {
    QOpenGLFunctions_3_3_Compatibility_GlMap1d((QOpenGLFunctions_3_3_Compatibility*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_3_3_compatibility_gl_push_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlPushAttrib((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_pop_attrib(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlPopAttrib((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_accum(void* self, uint32_t op, float value) {
    QOpenGLFunctions_3_3_Compatibility_GlAccum((QOpenGLFunctions_3_3_Compatibility*)self, op, value);
}

void q_openglfunctions_3_3_compatibility_gl_index_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexMask((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_clear_index(void* self, float c) {
    QOpenGLFunctions_3_3_Compatibility_GlClearIndex((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_clear_accum(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlClearAccum((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_push_name(void* self, uint32_t name) {
    QOpenGLFunctions_3_3_Compatibility_GlPushName((QOpenGLFunctions_3_3_Compatibility*)self, name);
}

void q_openglfunctions_3_3_compatibility_gl_pop_name(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlPopName((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_pass_through(void* self, float token) {
    QOpenGLFunctions_3_3_Compatibility_GlPassThrough((QOpenGLFunctions_3_3_Compatibility*)self, token);
}

void q_openglfunctions_3_3_compatibility_gl_load_name(void* self, uint32_t name) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadName((QOpenGLFunctions_3_3_Compatibility*)self, name);
}

void q_openglfunctions_3_3_compatibility_gl_init_names(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlInitNames((QOpenGLFunctions_3_3_Compatibility*)self);
}

int32_t q_openglfunctions_3_3_compatibility_gl_render_mode(void* self, uint32_t mode) {
    return QOpenGLFunctions_3_3_Compatibility_GlRenderMode((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_select_buffer(void* self, int32_t size, uint32_t* buffer) {
    QOpenGLFunctions_3_3_Compatibility_GlSelectBuffer((QOpenGLFunctions_3_3_Compatibility*)self, size, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer) {
    QOpenGLFunctions_3_3_Compatibility_GlFeedbackBuffer((QOpenGLFunctions_3_3_Compatibility*)self, size, type, buffer);
}

void q_openglfunctions_3_3_compatibility_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGeniv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGeni((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGenfv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGenf((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGendv((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexGend((QOpenGLFunctions_3_3_Compatibility*)self, coord, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexEnviv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexEnvi((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlTexEnvfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlTexEnvf((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_shade_model(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlShadeModel((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_3_3_Compatibility_GlPolygonStipple((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlMaterialiv((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlMateriali((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlMaterialfv((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_materialf(void* self, uint32_t face, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlMaterialf((QOpenGLFunctions_3_3_Compatibility*)self, face, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_line_stipple(void* self, int32_t factor, uint16_t pattern) {
    QOpenGLFunctions_3_3_Compatibility_GlLineStipple((QOpenGLFunctions_3_3_Compatibility*)self, factor, pattern);
}

void q_openglfunctions_3_3_compatibility_gl_light_modeliv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlLightModeliv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_light_modeli(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlLightModeli((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_light_modelfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlLightModelfv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_light_modelf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlLightModelf((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlLightiv((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlLighti((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlLightfv((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_lightf(void* self, uint32_t light, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlLightf((QOpenGLFunctions_3_3_Compatibility*)self, light, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_fogiv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlFogiv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_fogi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Compatibility_GlFogi((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_fogfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlFogfv((QOpenGLFunctions_3_3_Compatibility*)self, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_fogf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Compatibility_GlFogf((QOpenGLFunctions_3_3_Compatibility*)self, pname, param);
}

void q_openglfunctions_3_3_compatibility_gl_color_material(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlColorMaterial((QOpenGLFunctions_3_3_Compatibility*)self, face, mode);
}

void q_openglfunctions_3_3_compatibility_gl_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_3_3_Compatibility_GlClipPlane((QOpenGLFunctions_3_3_Compatibility*)self, plane, equation);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4s((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4i((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4f((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex4d((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3s((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3i((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3f((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex3d((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2s((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2i((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2f(void* self, float x, float y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2f((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex2d(void* self, double x, double y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertex2d((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4s((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4i((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4f(void* self, float s, float t, float r, float q) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4f((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord4d(void* self, double s, double t, double r, double q) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord4d((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3s((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3i((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3f(void* self, float s, float t, float r) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3f((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord3d(void* self, double s, double t, double r) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord3d((QOpenGLFunctions_3_3_Compatibility*)self, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2s(void* self, int16_t s, int16_t t) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2s((QOpenGLFunctions_3_3_Compatibility*)self, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2i(void* self, int32_t s, int32_t t) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2i((QOpenGLFunctions_3_3_Compatibility*)self, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2f(void* self, float s, float t) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2f((QOpenGLFunctions_3_3_Compatibility*)self, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord2d(void* self, double s, double t) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord2d((QOpenGLFunctions_3_3_Compatibility*)self, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1s(void* self, int16_t s) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1s((QOpenGLFunctions_3_3_Compatibility*)self, s);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1i(void* self, int32_t s) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1i((QOpenGLFunctions_3_3_Compatibility*)self, s);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1f(void* self, float s) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1f((QOpenGLFunctions_3_3_Compatibility*)self, s);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord1d(void* self, double s) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoord1d((QOpenGLFunctions_3_3_Compatibility*)self, s);
}

void q_openglfunctions_3_3_compatibility_gl_rectsv(void* self, int16_t* v1, int16_t* v2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectsv((QOpenGLFunctions_3_3_Compatibility*)self, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    QOpenGLFunctions_3_3_Compatibility_GlRects((QOpenGLFunctions_3_3_Compatibility*)self, x1, y1, x2, y2);
}

void q_openglfunctions_3_3_compatibility_gl_rectiv(void* self, int32_t* v1, int32_t* v2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectiv((QOpenGLFunctions_3_3_Compatibility*)self, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
    QOpenGLFunctions_3_3_Compatibility_GlRecti((QOpenGLFunctions_3_3_Compatibility*)self, x1, y1, x2, y2);
}

void q_openglfunctions_3_3_compatibility_gl_rectfv(void* self, float* v1, float* v2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectfv((QOpenGLFunctions_3_3_Compatibility*)self, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_rectf(void* self, float x1, float y1, float x2, float y2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectf((QOpenGLFunctions_3_3_Compatibility*)self, x1, y1, x2, y2);
}

void q_openglfunctions_3_3_compatibility_gl_rectdv(void* self, double* v1, double* v2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectdv((QOpenGLFunctions_3_3_Compatibility*)self, v1, v2);
}

void q_openglfunctions_3_3_compatibility_gl_rectd(void* self, double x1, double y1, double x2, double y2) {
    QOpenGLFunctions_3_3_Compatibility_GlRectd((QOpenGLFunctions_3_3_Compatibility*)self, x1, y1, x2, y2);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4s((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4i((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4f((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos4d((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3s((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3i((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3f((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos3d((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2s((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2i((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2f(void* self, float x, float y) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2f((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_raster_pos2d(void* self, double x, double y) {
    QOpenGLFunctions_3_3_Compatibility_GlRasterPos2d((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_normal3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3s((QOpenGLFunctions_3_3_Compatibility*)self, nx, ny, nz);
}

void q_openglfunctions_3_3_compatibility_gl_normal3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3i((QOpenGLFunctions_3_3_Compatibility*)self, nx, ny, nz);
}

void q_openglfunctions_3_3_compatibility_gl_normal3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_normal3f(void* self, float nx, float ny, float nz) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3f((QOpenGLFunctions_3_3_Compatibility*)self, nx, ny, nz);
}

void q_openglfunctions_3_3_compatibility_gl_normal3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_normal3d(void* self, double nx, double ny, double nz) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3d((QOpenGLFunctions_3_3_Compatibility*)self, nx, ny, nz);
}

void q_openglfunctions_3_3_compatibility_gl_normal3bv(void* self, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3bv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz) {
    QOpenGLFunctions_3_3_Compatibility_GlNormal3b((QOpenGLFunctions_3_3_Compatibility*)self, nx, ny, nz);
}

void q_openglfunctions_3_3_compatibility_gl_indexsv(void* self, int16_t* c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexsv((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexs(void* self, int16_t c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexs((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexiv(void* self, int32_t* c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexiv((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexi(void* self, int32_t c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexi((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexfv(void* self, float* c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexfv((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexf(void* self, float c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexf((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexdv(void* self, double* c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexdv((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_indexd(void* self, double c) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexd((QOpenGLFunctions_3_3_Compatibility*)self, c);
}

void q_openglfunctions_3_3_compatibility_gl_end(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlEnd((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_edge_flagv(void* self, uint8_t* flag) {
    QOpenGLFunctions_3_3_Compatibility_GlEdgeFlagv((QOpenGLFunctions_3_3_Compatibility*)self, flag);
}

void q_openglfunctions_3_3_compatibility_gl_edge_flag(void* self, uint8_t flag) {
    QOpenGLFunctions_3_3_Compatibility_GlEdgeFlag((QOpenGLFunctions_3_3_Compatibility*)self, flag);
}

void q_openglfunctions_3_3_compatibility_gl_color4usv(void* self, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4usv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4us((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4uiv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4ui((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4ubv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4ub((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4s((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4i((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4f(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4f((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4d(void* self, double red, double green, double blue, double alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4d((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color4bv(void* self, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4bv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha) {
    QOpenGLFunctions_3_3_Compatibility_GlColor4b((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_compatibility_gl_color3usv(void* self, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3usv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3us((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3uiv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3ui((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3ubv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3ub((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3s((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3i((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3f(void* self, float red, float green, float blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3f((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3d(void* self, double red, double green, double blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3d((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_color3bv(void* self, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3bv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_color3b(void* self, signed char red, signed char green, signed char blue) {
    QOpenGLFunctions_3_3_Compatibility_GlColor3b((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap) {
    QOpenGLFunctions_3_3_Compatibility_GlBitmap((QOpenGLFunctions_3_3_Compatibility*)self, width, height, xorig, yorig, xmove, ymove, bitmap);
}

void q_openglfunctions_3_3_compatibility_gl_begin(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlBegin((QOpenGLFunctions_3_3_Compatibility*)self, mode);
}

void q_openglfunctions_3_3_compatibility_gl_list_base(void* self, uint32_t base) {
    QOpenGLFunctions_3_3_Compatibility_GlListBase((QOpenGLFunctions_3_3_Compatibility*)self, base);
}

uint32_t q_openglfunctions_3_3_compatibility_gl_gen_lists(void* self, int32_t range) {
    return QOpenGLFunctions_3_3_Compatibility_GlGenLists((QOpenGLFunctions_3_3_Compatibility*)self, range);
}

void q_openglfunctions_3_3_compatibility_gl_delete_lists(void* self, uint32_t list, int32_t range) {
    QOpenGLFunctions_3_3_Compatibility_GlDeleteLists((QOpenGLFunctions_3_3_Compatibility*)self, list, range);
}

void q_openglfunctions_3_3_compatibility_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists) {
    QOpenGLFunctions_3_3_Compatibility_GlCallLists((QOpenGLFunctions_3_3_Compatibility*)self, n, type, lists);
}

void q_openglfunctions_3_3_compatibility_gl_call_list(void* self, uint32_t list) {
    QOpenGLFunctions_3_3_Compatibility_GlCallList((QOpenGLFunctions_3_3_Compatibility*)self, list);
}

void q_openglfunctions_3_3_compatibility_gl_end_list(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlEndList((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_new_list(void* self, uint32_t list, uint32_t mode) {
    QOpenGLFunctions_3_3_Compatibility_GlNewList((QOpenGLFunctions_3_3_Compatibility*)self, list, mode);
}

void q_openglfunctions_3_3_compatibility_gl_push_client_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Compatibility_GlPushClientAttrib((QOpenGLFunctions_3_3_Compatibility*)self, mask);
}

void q_openglfunctions_3_3_compatibility_gl_pop_client_attrib(void* self) {
    QOpenGLFunctions_3_3_Compatibility_GlPopClientAttrib((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities) {
    QOpenGLFunctions_3_3_Compatibility_GlPrioritizeTextures((QOpenGLFunctions_3_3_Compatibility*)self, n, textures, priorities);
}

uint8_t q_openglfunctions_3_3_compatibility_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences) {
    return QOpenGLFunctions_3_3_Compatibility_GlAreTexturesResident((QOpenGLFunctions_3_3_Compatibility*)self, n, textures, residences);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexPointer((QOpenGLFunctions_3_3_Compatibility*)self, size, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlTexCoordPointer((QOpenGLFunctions_3_3_Compatibility*)self, size, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlNormalPointer((QOpenGLFunctions_3_3_Compatibility*)self, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlInterleavedArrays((QOpenGLFunctions_3_3_Compatibility*)self, format, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlIndexPointer((QOpenGLFunctions_3_3_Compatibility*)self, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_enable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_3_3_Compatibility_GlEnableClientState((QOpenGLFunctions_3_3_Compatibility*)self, array);
}

void q_openglfunctions_3_3_compatibility_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlEdgeFlagPointer((QOpenGLFunctions_3_3_Compatibility*)self, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_disable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_3_3_Compatibility_GlDisableClientState((QOpenGLFunctions_3_3_Compatibility*)self, array);
}

void q_openglfunctions_3_3_compatibility_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlColorPointer((QOpenGLFunctions_3_3_Compatibility*)self, size, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_array_element(void* self, int32_t i) {
    QOpenGLFunctions_3_3_Compatibility_GlArrayElement((QOpenGLFunctions_3_3_Compatibility*)self, i);
}

void q_openglfunctions_3_3_compatibility_gl_reset_minmax(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Compatibility_GlResetMinmax((QOpenGLFunctions_3_3_Compatibility*)self, target);
}

void q_openglfunctions_3_3_compatibility_gl_reset_histogram(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Compatibility_GlResetHistogram((QOpenGLFunctions_3_3_Compatibility*)self, target);
}

void q_openglfunctions_3_3_compatibility_gl_minmax(void* self, uint32_t target, uint32_t internalformat, uint8_t sink) {
    QOpenGLFunctions_3_3_Compatibility_GlMinmax((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, sink);
}

void q_openglfunctions_3_3_compatibility_gl_histogram(void* self, uint32_t target, int32_t width, uint32_t internalformat, uint8_t sink) {
    QOpenGLFunctions_3_3_Compatibility_GlHistogram((QOpenGLFunctions_3_3_Compatibility*)self, target, width, internalformat, sink);
}

void q_openglfunctions_3_3_compatibility_gl_get_minmax_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMinmaxParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_minmax_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMinmaxParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_minmax(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values) {
    QOpenGLFunctions_3_3_Compatibility_GlGetMinmax((QOpenGLFunctions_3_3_Compatibility*)self, target, reset, format, type, values);
}

void q_openglfunctions_3_3_compatibility_gl_get_histogram_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetHistogramParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_histogram_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetHistogramParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_histogram(void* self, uint32_t target, uint8_t reset, uint32_t format, uint32_t type, void* values) {
    QOpenGLFunctions_3_3_Compatibility_GlGetHistogram((QOpenGLFunctions_3_3_Compatibility*)self, target, reset, format, type, values);
}

void q_openglfunctions_3_3_compatibility_gl_separable_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* row, void* column) {
    QOpenGLFunctions_3_3_Compatibility_GlSeparableFilter2D((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, width, height, format, type, row, column);
}

void q_openglfunctions_3_3_compatibility_gl_get_separable_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* row, void* column, void* span) {
    QOpenGLFunctions_3_3_Compatibility_GlGetSeparableFilter((QOpenGLFunctions_3_3_Compatibility*)self, target, format, type, row, column, span);
}

void q_openglfunctions_3_3_compatibility_gl_get_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_convolution_filter(void* self, uint32_t target, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_3_3_Compatibility_GlGetConvolutionFilter((QOpenGLFunctions_3_3_Compatibility*)self, target, format, type, image);
}

void q_openglfunctions_3_3_compatibility_gl_copy_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyConvolutionFilter2D((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, x, y, width, height);
}

void q_openglfunctions_3_3_compatibility_gl_copy_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyConvolutionFilter1D((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, x, y, width);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_parameteri(void* self, uint32_t target, uint32_t pname, int32_t params) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameteri((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_parameterf(void* self, uint32_t target, uint32_t pname, float params) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionParameterf((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_filter2_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionFilter2D((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, width, height, format, type, image);
}

void q_openglfunctions_3_3_compatibility_gl_convolution_filter1_d(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* image) {
    QOpenGLFunctions_3_3_Compatibility_GlConvolutionFilter1D((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, width, format, type, image);
}

void q_openglfunctions_3_3_compatibility_gl_copy_color_sub_table(void* self, uint32_t target, int32_t start, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyColorSubTable((QOpenGLFunctions_3_3_Compatibility*)self, target, start, x, y, width);
}

void q_openglfunctions_3_3_compatibility_gl_color_sub_table(void* self, uint32_t target, int32_t start, int32_t count, uint32_t format, uint32_t type, void* data) {
    QOpenGLFunctions_3_3_Compatibility_GlColorSubTable((QOpenGLFunctions_3_3_Compatibility*)self, target, start, count, format, type, data);
}

void q_openglfunctions_3_3_compatibility_gl_get_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetColorTableParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlGetColorTableParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_get_color_table(void* self, uint32_t target, uint32_t format, uint32_t type, void* table) {
    QOpenGLFunctions_3_3_Compatibility_GlGetColorTable((QOpenGLFunctions_3_3_Compatibility*)self, target, format, type, table);
}

void q_openglfunctions_3_3_compatibility_gl_copy_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_3_Compatibility_GlCopyColorTable((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, x, y, width);
}

void q_openglfunctions_3_3_compatibility_gl_color_table_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Compatibility_GlColorTableParameteriv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_color_table_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Compatibility_GlColorTableParameterfv((QOpenGLFunctions_3_3_Compatibility*)self, target, pname, params);
}

void q_openglfunctions_3_3_compatibility_gl_color_table(void* self, uint32_t target, uint32_t internalformat, int32_t width, uint32_t format, uint32_t type, void* table) {
    QOpenGLFunctions_3_3_Compatibility_GlColorTable((QOpenGLFunctions_3_3_Compatibility*)self, target, internalformat, width, format, type, table);
}

void q_openglfunctions_3_3_compatibility_gl_mult_transpose_matrixd(void* self, double* m) {
    QOpenGLFunctions_3_3_Compatibility_GlMultTransposeMatrixd((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_mult_transpose_matrixf(void* self, float* m) {
    QOpenGLFunctions_3_3_Compatibility_GlMultTransposeMatrixf((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_load_transpose_matrixd(void* self, double* m) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadTransposeMatrixd((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_load_transpose_matrixf(void* self, float* m) {
    QOpenGLFunctions_3_3_Compatibility_GlLoadTransposeMatrixf((QOpenGLFunctions_3_3_Compatibility*)self, m);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4sv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r, int16_t q) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4s((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4iv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r, int32_t q) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4i((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4fv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4f(void* self, uint32_t target, float s, float t, float r, float q) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4f((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4dv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord4d(void* self, uint32_t target, double s, double t, double r, double q) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord4d((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r, q);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3sv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3s(void* self, uint32_t target, int16_t s, int16_t t, int16_t r) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3s((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3iv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3i(void* self, uint32_t target, int32_t s, int32_t t, int32_t r) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3i((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3fv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3f(void* self, uint32_t target, float s, float t, float r) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3f((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3dv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord3d(void* self, uint32_t target, double s, double t, double r) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord3d((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t, r);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2sv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2s(void* self, uint32_t target, int16_t s, int16_t t) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2s((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2iv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2i(void* self, uint32_t target, int32_t s, int32_t t) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2i((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2fv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2f(void* self, uint32_t target, float s, float t) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2f((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2dv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord2d(void* self, uint32_t target, double s, double t) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord2d((QOpenGLFunctions_3_3_Compatibility*)self, target, s, t);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1sv(void* self, uint32_t target, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1sv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1s(void* self, uint32_t target, int16_t s) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1s((QOpenGLFunctions_3_3_Compatibility*)self, target, s);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1iv(void* self, uint32_t target, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1iv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1i(void* self, uint32_t target, int32_t s) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1i((QOpenGLFunctions_3_3_Compatibility*)self, target, s);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1fv(void* self, uint32_t target, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1fv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1f(void* self, uint32_t target, float s) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1f((QOpenGLFunctions_3_3_Compatibility*)self, target, s);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1dv(void* self, uint32_t target, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1dv((QOpenGLFunctions_3_3_Compatibility*)self, target, v);
}

void q_openglfunctions_3_3_compatibility_gl_multi_tex_coord1d(void* self, uint32_t target, double s) {
    QOpenGLFunctions_3_3_Compatibility_GlMultiTexCoord1d((QOpenGLFunctions_3_3_Compatibility*)self, target, s);
}

void q_openglfunctions_3_3_compatibility_gl_client_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_3_3_Compatibility_GlClientActiveTexture((QOpenGLFunctions_3_3_Compatibility*)self, texture);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3s((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3i((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3f((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos3d((QOpenGLFunctions_3_3_Compatibility*)self, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2s((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2i((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2f(void* self, float x, float y) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2f((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_window_pos2d(void* self, double x, double y) {
    QOpenGLFunctions_3_3_Compatibility_GlWindowPos2d((QOpenGLFunctions_3_3_Compatibility*)self, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColorPointer((QOpenGLFunctions_3_3_Compatibility*)self, size, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3usv(void* self, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3usv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3us((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3uiv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ui((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ubv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3ub((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3sv(void* self, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3sv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3s(void* self, int16_t red, int16_t green, int16_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3s((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3iv(void* self, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3iv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3i(void* self, int32_t red, int32_t green, int32_t blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3i((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3fv(void* self, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3fv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3f(void* self, float red, float green, float blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3f((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3dv(void* self, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3dv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3d(void* self, double red, double green, double blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3d((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3bv(void* self, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3bv((QOpenGLFunctions_3_3_Compatibility*)self, v);
}

void q_openglfunctions_3_3_compatibility_gl_secondary_color3b(void* self, signed char red, signed char green, signed char blue) {
    QOpenGLFunctions_3_3_Compatibility_GlSecondaryColor3b((QOpenGLFunctions_3_3_Compatibility*)self, red, green, blue);
}

void q_openglfunctions_3_3_compatibility_gl_fog_coord_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Compatibility_GlFogCoordPointer((QOpenGLFunctions_3_3_Compatibility*)self, type, stride, pointer);
}

void q_openglfunctions_3_3_compatibility_gl_fog_coorddv(void* self, double* coord) {
    QOpenGLFunctions_3_3_Compatibility_GlFogCoorddv((QOpenGLFunctions_3_3_Compatibility*)self, coord);
}

void q_openglfunctions_3_3_compatibility_gl_fog_coordd(void* self, double coord) {
    QOpenGLFunctions_3_3_Compatibility_GlFogCoordd((QOpenGLFunctions_3_3_Compatibility*)self, coord);
}

void q_openglfunctions_3_3_compatibility_gl_fog_coordfv(void* self, float* coord) {
    QOpenGLFunctions_3_3_Compatibility_GlFogCoordfv((QOpenGLFunctions_3_3_Compatibility*)self, coord);
}

void q_openglfunctions_3_3_compatibility_gl_fog_coordf(void* self, float coord) {
    QOpenGLFunctions_3_3_Compatibility_GlFogCoordf((QOpenGLFunctions_3_3_Compatibility*)self, coord);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4usv(void* self, uint32_t index, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4usv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4ubv(void* self, uint32_t index, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4ubv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4sv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4s((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4iv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4fv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4f(void* self, uint32_t index, float x, float y, float z, float w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4f((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4dv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4d(void* self, uint32_t index, double x, double y, double z, double w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4d((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4bv(void* self, uint32_t index, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4bv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nusv(void* self, uint32_t index, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nusv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nuiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nuiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nubv(void* self, uint32_t index, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nubv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nub(void* self, uint32_t index, uint8_t x, uint8_t y, uint8_t z, uint8_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nub((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nsv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nsv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_niv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Niv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib4_nbv(void* self, uint32_t index, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib4Nbv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3sv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3s(void* self, uint32_t index, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3s((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3fv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3f(void* self, uint32_t index, float x, float y, float z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3f((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3dv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib3d(void* self, uint32_t index, double x, double y, double z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib3d((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2sv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2s(void* self, uint32_t index, int16_t x, int16_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2s((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2fv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2f(void* self, uint32_t index, float x, float y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2f((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2dv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib2d(void* self, uint32_t index, double x, double y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib2d((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1sv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1s(void* self, uint32_t index, int16_t x) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1s((QOpenGLFunctions_3_3_Compatibility*)self, index, x);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1fv(void* self, uint32_t index, float* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1fv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1f(void* self, uint32_t index, float x) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1f((QOpenGLFunctions_3_3_Compatibility*)self, index, x);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1dv(void* self, uint32_t index, double* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1dv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib1d(void* self, uint32_t index, double x) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttrib1d((QOpenGLFunctions_3_3_Compatibility*)self, index, x);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4usv(void* self, uint32_t index, uint16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4usv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4ubv(void* self, uint32_t index, uint8_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4ubv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4sv(void* self, uint32_t index, int16_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4sv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4bv(void* self, uint32_t index, signed char* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4bv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i3uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i2uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i1uiv(void* self, uint32_t index, uint32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1uiv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4iv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i3iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3iv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i2iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2iv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i1iv(void* self, uint32_t index, int32_t* v) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1iv((QOpenGLFunctions_3_3_Compatibility*)self, index, v);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z, uint32_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4ui((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i3ui(void* self, uint32_t index, uint32_t x, uint32_t y, uint32_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3ui((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i2ui(void* self, uint32_t index, uint32_t x, uint32_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2ui((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i1ui(void* self, uint32_t index, uint32_t x) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1ui((QOpenGLFunctions_3_3_Compatibility*)self, index, x);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i4i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI4i((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z, w);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i3i(void* self, uint32_t index, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI3i((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y, z);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i2i(void* self, uint32_t index, int32_t x, int32_t y) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI2i((QOpenGLFunctions_3_3_Compatibility*)self, index, x, y);
}

void q_openglfunctions_3_3_compatibility_gl_vertex_attrib_i1i(void* self, uint32_t index, int32_t x) {
    QOpenGLFunctions_3_3_Compatibility_GlVertexAttribI1i((QOpenGLFunctions_3_3_Compatibility*)self, index, x);
}

bool q_openglfunctions_3_3_compatibility_is_initialized(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_IsInitialized((QOpenGLFunctions_3_3_Compatibility*)self);
}

bool q_openglfunctions_3_3_compatibility_qbase_is_initialized(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_QBaseIsInitialized((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_3_Compatibility_OnIsInitialized((QOpenGLFunctions_3_3_Compatibility*)self, (intptr_t)callback);
}

void q_openglfunctions_3_3_compatibility_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_3_Compatibility_SetOwningContext((QOpenGLFunctions_3_3_Compatibility*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_3_compatibility_qbase_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_3_Compatibility_QBaseSetOwningContext((QOpenGLFunctions_3_3_Compatibility*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_3_compatibility_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_3_3_Compatibility_OnSetOwningContext((QOpenGLFunctions_3_3_Compatibility*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_3_3_compatibility_owning_context(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_OwningContext((QOpenGLFunctions_3_3_Compatibility*)self);
}

QOpenGLContext* q_openglfunctions_3_3_compatibility_qbase_owning_context(void* self) {
    return QOpenGLFunctions_3_3_Compatibility_QBaseOwningContext((QOpenGLFunctions_3_3_Compatibility*)self);
}

void q_openglfunctions_3_3_compatibility_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_3_3_Compatibility_OnOwningContext((QOpenGLFunctions_3_3_Compatibility*)self, (intptr_t)callback);
}

void q_openglfunctions_3_3_compatibility_delete(void* self) {
    QOpenGLFunctions_3_3_Compatibility_Delete((QOpenGLFunctions_3_3_Compatibility*)(self));
}
