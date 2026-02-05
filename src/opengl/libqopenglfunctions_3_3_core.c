#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_3_3_core.hpp"
#include "libqopenglfunctions_3_3_core.h"

QOpenGLFunctions_3_3_Core* q_openglfunctions_3_3_core_new() {
    return QOpenGLFunctions_3_3_Core_new();
}

bool q_openglfunctions_3_3_core_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_3_Core_InitializeOpenGLFunctions((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_3_Core_OnInitializeOpenGLFunctions((QOpenGLFunctions_3_3_Core*)self, (intptr_t)callback);
}

bool q_openglfunctions_3_3_core_qbase_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_3_3_Core_QBaseInitializeOpenGLFunctions((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlViewport((QOpenGLFunctions_3_3_Core*)self, x, y, width, height);
}

void q_openglfunctions_3_3_core_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_3_3_Core_GlDepthRange((QOpenGLFunctions_3_3_Core*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_3_3_core_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_3_3_Core_GlIsEnabled((QOpenGLFunctions_3_3_Core*)self, cap);
}

void q_openglfunctions_3_3_core_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexLevelParameteriv((QOpenGLFunctions_3_3_Core*)self, target, level, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexLevelParameterfv((QOpenGLFunctions_3_3_Core*)self, target, level, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexParameteriv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexParameterfv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlGetTexImage((QOpenGLFunctions_3_3_Core*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_3_3_core_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_3_3_Core_GlGetString((QOpenGLFunctions_3_3_Core*)self, name);
}

void q_openglfunctions_3_3_core_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetIntegerv((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetFloatv((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Core_GlGetDoublev((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetBooleanv((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlReadPixels((QOpenGLFunctions_3_3_Core*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlReadBuffer((QOpenGLFunctions_3_3_Core*)self, mode);
}

void q_openglfunctions_3_3_core_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Core_GlPixelStorei((QOpenGLFunctions_3_3_Core*)self, pname, param);
}

void q_openglfunctions_3_3_core_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Core_GlPixelStoref((QOpenGLFunctions_3_3_Core*)self, pname, param);
}

void q_openglfunctions_3_3_core_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_3_3_Core_GlDepthFunc((QOpenGLFunctions_3_3_Core*)self, func);
}

void q_openglfunctions_3_3_core_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_3_3_Core_GlStencilOp((QOpenGLFunctions_3_3_Core*)self, fail, zfail, zpass);
}

void q_openglfunctions_3_3_core_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlStencilFunc((QOpenGLFunctions_3_3_Core*)self, func, ref, mask);
}

void q_openglfunctions_3_3_core_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_3_3_Core_GlLogicOp((QOpenGLFunctions_3_3_Core*)self, opcode);
}

void q_openglfunctions_3_3_core_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_3_3_Core_GlBlendFunc((QOpenGLFunctions_3_3_Core*)self, sfactor, dfactor);
}

void q_openglfunctions_3_3_core_gl_flush(void* self) {
    QOpenGLFunctions_3_3_Core_GlFlush((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_finish(void* self) {
    QOpenGLFunctions_3_3_Core_GlFinish((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_3_Core_GlEnable((QOpenGLFunctions_3_3_Core*)self, cap);
}

void q_openglfunctions_3_3_core_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_3_3_Core_GlDisable((QOpenGLFunctions_3_3_Core*)self, cap);
}

void q_openglfunctions_3_3_core_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_3_3_Core_GlDepthMask((QOpenGLFunctions_3_3_Core*)self, flag);
}

void q_openglfunctions_3_3_core_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_3_3_Core_GlColorMask((QOpenGLFunctions_3_3_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_core_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlStencilMask((QOpenGLFunctions_3_3_Core*)self, mask);
}

void q_openglfunctions_3_3_core_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_3_3_Core_GlClearDepth((QOpenGLFunctions_3_3_Core*)self, depth);
}

void q_openglfunctions_3_3_core_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_3_3_Core_GlClearStencil((QOpenGLFunctions_3_3_Core*)self, s);
}

void q_openglfunctions_3_3_core_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Core_GlClearColor((QOpenGLFunctions_3_3_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_core_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlClear((QOpenGLFunctions_3_3_Core*)self, mask);
}

void q_openglfunctions_3_3_core_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlDrawBuffer((QOpenGLFunctions_3_3_Core*)self, mode);
}

void q_openglfunctions_3_3_core_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlTexParameteriv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Core_GlTexParameteri((QOpenGLFunctions_3_3_Core*)self, target, pname, param);
}

void q_openglfunctions_3_3_core_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlTexParameterfv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Core_GlTexParameterf((QOpenGLFunctions_3_3_Core*)self, target, pname, param);
}

void q_openglfunctions_3_3_core_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlScissor((QOpenGLFunctions_3_3_Core*)self, x, y, width, height);
}

void q_openglfunctions_3_3_core_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlPolygonMode((QOpenGLFunctions_3_3_Core*)self, face, mode);
}

void q_openglfunctions_3_3_core_gl_point_size(void* self, float size) {
    QOpenGLFunctions_3_3_Core_GlPointSize((QOpenGLFunctions_3_3_Core*)self, size);
}

void q_openglfunctions_3_3_core_gl_line_width(void* self, float width) {
    QOpenGLFunctions_3_3_Core_GlLineWidth((QOpenGLFunctions_3_3_Core*)self, width);
}

void q_openglfunctions_3_3_core_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlHint((QOpenGLFunctions_3_3_Core*)self, target, mode);
}

void q_openglfunctions_3_3_core_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlFrontFace((QOpenGLFunctions_3_3_Core*)self, mode);
}

void q_openglfunctions_3_3_core_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlCullFace((QOpenGLFunctions_3_3_Core*)self, mode);
}

uint8_t q_openglfunctions_3_3_core_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_3_3_Core_GlIsTexture((QOpenGLFunctions_3_3_Core*)self, texture);
}

void q_openglfunctions_3_3_core_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_3_Core_GlGenTextures((QOpenGLFunctions_3_3_Core*)self, n, textures);
}

void q_openglfunctions_3_3_core_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_3_3_Core_GlDeleteTextures((QOpenGLFunctions_3_3_Core*)self, n, textures);
}

void q_openglfunctions_3_3_core_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_3_3_Core_GlBindTexture((QOpenGLFunctions_3_3_Core*)self, target, texture);
}

void q_openglfunctions_3_3_core_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexSubImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexSubImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlCopyTexSubImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_3_3_core_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_3_3_Core_GlCopyTexSubImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_3_3_core_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_3_3_Core_GlCopyTexImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_3_3_core_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_3_3_Core_GlCopyTexImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_3_3_core_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_3_3_Core_GlPolygonOffset((QOpenGLFunctions_3_3_Core*)self, factor, units);
}

void q_openglfunctions_3_3_core_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_3_Core_GlDrawElements((QOpenGLFunctions_3_3_Core*)self, mode, count, type, indices);
}

void q_openglfunctions_3_3_core_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_3_3_Core_GlDrawArrays((QOpenGLFunctions_3_3_Core*)self, mode, first, count);
}

void q_openglfunctions_3_3_core_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlCopyTexSubImage3D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglfunctions_3_3_core_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexSubImage3D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_3_3_Core_GlTexImage3D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglfunctions_3_3_core_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_3_3_Core_GlDrawRangeElements((QOpenGLFunctions_3_3_Core*)self, mode, start, end, count, type, indices);
}

void q_openglfunctions_3_3_core_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlBlendEquation((QOpenGLFunctions_3_3_Core*)self, mode);
}

void q_openglfunctions_3_3_core_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_3_3_Core_GlBlendColor((QOpenGLFunctions_3_3_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_3_3_core_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img) {
    QOpenGLFunctions_3_3_Core_GlGetCompressedTexImage((QOpenGLFunctions_3_3_Core*)self, target, level, img);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexSubImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, width, format, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexSubImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexSubImage3D((QOpenGLFunctions_3_3_Core*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexImage1D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, border, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexImage2D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_3_3_Core_GlCompressedTexImage3D((QOpenGLFunctions_3_3_Core*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglfunctions_3_3_core_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_3_3_Core_GlSampleCoverage((QOpenGLFunctions_3_3_Core*)self, value, invert);
}

void q_openglfunctions_3_3_core_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_3_3_Core_GlActiveTexture((QOpenGLFunctions_3_3_Core*)self, texture);
}

void q_openglfunctions_3_3_core_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlPointParameteriv((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_point_parameteri(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Core_GlPointParameteri((QOpenGLFunctions_3_3_Core*)self, pname, param);
}

void q_openglfunctions_3_3_core_gl_point_parameterfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlPointParameterfv((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_point_parameterf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Core_GlPointParameterf((QOpenGLFunctions_3_3_Core*)self, pname, param);
}

void q_openglfunctions_3_3_core_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount) {
    QOpenGLFunctions_3_3_Core_GlMultiDrawArrays((QOpenGLFunctions_3_3_Core*)self, mode, first, count, drawcount);
}

void q_openglfunctions_3_3_core_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    QOpenGLFunctions_3_3_Core_GlBlendFuncSeparate((QOpenGLFunctions_3_3_Core*)self, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void q_openglfunctions_3_3_core_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetBufferParameteriv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

uint8_t q_openglfunctions_3_3_core_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLFunctions_3_3_Core_GlUnmapBuffer((QOpenGLFunctions_3_3_Core*)self, target);
}

void* q_openglfunctions_3_3_core_gl_map_buffer(void* self, uint32_t target, uint32_t access) {
    return QOpenGLFunctions_3_3_Core_GlMapBuffer((QOpenGLFunctions_3_3_Core*)self, target, access);
}

void q_openglfunctions_3_3_core_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_3_Core_GlGetBufferSubData((QOpenGLFunctions_3_3_Core*)self, target, offset, size, data);
}

void q_openglfunctions_3_3_core_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_3_3_Core_GlBufferSubData((QOpenGLFunctions_3_3_Core*)self, target, offset, size, data);
}

void q_openglfunctions_3_3_core_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_3_3_Core_GlBufferData((QOpenGLFunctions_3_3_Core*)self, target, size, data, usage);
}

uint8_t q_openglfunctions_3_3_core_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_3_3_Core_GlIsBuffer((QOpenGLFunctions_3_3_Core*)self, buffer);
}

void q_openglfunctions_3_3_core_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_3_Core_GlGenBuffers((QOpenGLFunctions_3_3_Core*)self, n, buffers);
}

void q_openglfunctions_3_3_core_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_3_3_Core_GlDeleteBuffers((QOpenGLFunctions_3_3_Core*)self, n, buffers);
}

void q_openglfunctions_3_3_core_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_3_3_Core_GlBindBuffer((QOpenGLFunctions_3_3_Core*)self, target, buffer);
}

void q_openglfunctions_3_3_core_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetQueryObjectuiv((QOpenGLFunctions_3_3_Core*)self, id, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetQueryObjectiv((QOpenGLFunctions_3_3_Core*)self, id, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetQueryiv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_end_query(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Core_GlEndQuery((QOpenGLFunctions_3_3_Core*)self, target);
}

void q_openglfunctions_3_3_core_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_3_3_Core_GlBeginQuery((QOpenGLFunctions_3_3_Core*)self, target, id);
}

uint8_t q_openglfunctions_3_3_core_gl_is_query(void* self, uint32_t id) {
    return QOpenGLFunctions_3_3_Core_GlIsQuery((QOpenGLFunctions_3_3_Core*)self, id);
}

void q_openglfunctions_3_3_core_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_3_Core_GlDeleteQueries((QOpenGLFunctions_3_3_Core*)self, n, ids);
}

void q_openglfunctions_3_3_core_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_3_3_Core_GlGenQueries((QOpenGLFunctions_3_3_Core*)self, n, ids);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribPointer((QOpenGLFunctions_3_3_Core*)self, index, size, type, normalized, stride, pointer);
}

void q_openglfunctions_3_3_core_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Core_GlValidateProgram((QOpenGLFunctions_3_3_Core*)self, program);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix4fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix3fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix2fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform4iv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform3iv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform2iv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform1iv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniform4fv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniform3fv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniform2fv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniform1fv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLFunctions_3_3_Core_GlUniform4i((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_core_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLFunctions_3_3_Core_GlUniform3i((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_core_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLFunctions_3_3_Core_GlUniform2i((QOpenGLFunctions_3_3_Core*)self, location, v0, v1);
}

void q_openglfunctions_3_3_core_gl_uniform1i(void* self, int32_t location, int32_t v0) {
    QOpenGLFunctions_3_3_Core_GlUniform1i((QOpenGLFunctions_3_3_Core*)self, location, v0);
}

void q_openglfunctions_3_3_core_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLFunctions_3_3_Core_GlUniform4f((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_core_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2) {
    QOpenGLFunctions_3_3_Core_GlUniform3f((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_core_gl_uniform2f(void* self, int32_t location, float v0, float v1) {
    QOpenGLFunctions_3_3_Core_GlUniform2f((QOpenGLFunctions_3_3_Core*)self, location, v0, v1);
}

void q_openglfunctions_3_3_core_gl_uniform1f(void* self, int32_t location, float v0) {
    QOpenGLFunctions_3_3_Core_GlUniform1f((QOpenGLFunctions_3_3_Core*)self, location, v0);
}

void q_openglfunctions_3_3_core_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Core_GlUseProgram((QOpenGLFunctions_3_3_Core*)self, program);
}

void q_openglfunctions_3_3_core_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Core_GlLinkProgram((QOpenGLFunctions_3_3_Core*)self, program);
}

uint8_t q_openglfunctions_3_3_core_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_3_3_Core_GlIsShader((QOpenGLFunctions_3_3_Core*)self, shader);
}

uint8_t q_openglfunctions_3_3_core_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_3_3_Core_GlIsProgram((QOpenGLFunctions_3_3_Core*)self, program);
}

void q_openglfunctions_3_3_core_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetVertexAttribiv((QOpenGLFunctions_3_3_Core*)self, index, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetVertexAttribfv((QOpenGLFunctions_3_3_Core*)self, index, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params) {
    QOpenGLFunctions_3_3_Core_GlGetVertexAttribdv((QOpenGLFunctions_3_3_Core*)self, index, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetUniformiv((QOpenGLFunctions_3_3_Core*)self, program, location, params);
}

void q_openglfunctions_3_3_core_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetUniformfv((QOpenGLFunctions_3_3_Core*)self, program, location, params);
}

int32_t q_openglfunctions_3_3_core_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Core_GlGetUniformLocation((QOpenGLFunctions_3_3_Core*)self, program, name);
}

void q_openglfunctions_3_3_core_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source) {
    QOpenGLFunctions_3_3_Core_GlGetShaderSource((QOpenGLFunctions_3_3_Core*)self, shader, bufSize, length, source);
}

void q_openglfunctions_3_3_core_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_3_Core_GlGetShaderInfoLog((QOpenGLFunctions_3_3_Core*)self, shader, bufSize, length, infoLog);
}

void q_openglfunctions_3_3_core_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetShaderiv((QOpenGLFunctions_3_3_Core*)self, shader, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_3_3_Core_GlGetProgramInfoLog((QOpenGLFunctions_3_3_Core*)self, program, bufSize, length, infoLog);
}

void q_openglfunctions_3_3_core_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetProgramiv((QOpenGLFunctions_3_3_Core*)self, program, pname, params);
}

int32_t q_openglfunctions_3_3_core_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Core_GlGetAttribLocation((QOpenGLFunctions_3_3_Core*)self, program, name);
}

void q_openglfunctions_3_3_core_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    QOpenGLFunctions_3_3_Core_GlGetAttachedShaders((QOpenGLFunctions_3_3_Core*)self, program, maxCount, count, obj);
}

void q_openglfunctions_3_3_core_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Core_GlEnableVertexAttribArray((QOpenGLFunctions_3_3_Core*)self, index);
}

void q_openglfunctions_3_3_core_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Core_GlDisableVertexAttribArray((QOpenGLFunctions_3_3_Core*)self, index);
}

void q_openglfunctions_3_3_core_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_3_Core_GlDetachShader((QOpenGLFunctions_3_3_Core*)self, program, shader);
}

void q_openglfunctions_3_3_core_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_3_Core_GlDeleteShader((QOpenGLFunctions_3_3_Core*)self, shader);
}

void q_openglfunctions_3_3_core_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_3_3_Core_GlDeleteProgram((QOpenGLFunctions_3_3_Core*)self, program);
}

uint32_t q_openglfunctions_3_3_core_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_3_3_Core_GlCreateShader((QOpenGLFunctions_3_3_Core*)self, type);
}

uint32_t q_openglfunctions_3_3_core_gl_create_program(void* self) {
    return QOpenGLFunctions_3_3_Core_GlCreateProgram((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_3_3_Core_GlCompileShader((QOpenGLFunctions_3_3_Core*)self, shader);
}

void q_openglfunctions_3_3_core_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_3_3_Core_GlBindAttribLocation((QOpenGLFunctions_3_3_Core*)self, program, index, name);
}

void q_openglfunctions_3_3_core_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_3_3_Core_GlAttachShader((QOpenGLFunctions_3_3_Core*)self, program, shader);
}

void q_openglfunctions_3_3_core_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlStencilMaskSeparate((QOpenGLFunctions_3_3_Core*)self, face, mask);
}

void q_openglfunctions_3_3_core_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlStencilFuncSeparate((QOpenGLFunctions_3_3_Core*)self, face, func, ref, mask);
}

void q_openglfunctions_3_3_core_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    QOpenGLFunctions_3_3_Core_GlStencilOpSeparate((QOpenGLFunctions_3_3_Core*)self, face, sfail, dpfail, dppass);
}

void q_openglfunctions_3_3_core_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_3_3_Core_GlBlendEquationSeparate((QOpenGLFunctions_3_3_Core*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix4x3fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix3x4fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix4x2fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix2x4fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix3x2fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_3_3_core_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_3_3_Core_GlUniformMatrix2x3fv((QOpenGLFunctions_3_3_Core*)self, location, count, transpose, value);
}

uint8_t q_openglfunctions_3_3_core_gl_is_vertex_array(void* self, uint32_t array) {
    return QOpenGLFunctions_3_3_Core_GlIsVertexArray((QOpenGLFunctions_3_3_Core*)self, array);
}

void q_openglfunctions_3_3_core_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_3_Core_GlGenVertexArrays((QOpenGLFunctions_3_3_Core*)self, n, arrays);
}

void q_openglfunctions_3_3_core_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_3_3_Core_GlDeleteVertexArrays((QOpenGLFunctions_3_3_Core*)self, n, arrays);
}

void q_openglfunctions_3_3_core_gl_bind_vertex_array(void* self, uint32_t array) {
    QOpenGLFunctions_3_3_Core_GlBindVertexArray((QOpenGLFunctions_3_3_Core*)self, array);
}

void q_openglfunctions_3_3_core_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length) {
    QOpenGLFunctions_3_3_Core_GlFlushMappedBufferRange((QOpenGLFunctions_3_3_Core*)self, target, offset, length);
}

void* q_openglfunctions_3_3_core_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access) {
    return QOpenGLFunctions_3_3_Core_GlMapBufferRange((QOpenGLFunctions_3_3_Core*)self, target, offset, length, access);
}

void q_openglfunctions_3_3_core_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    QOpenGLFunctions_3_3_Core_GlFramebufferTextureLayer((QOpenGLFunctions_3_3_Core*)self, target, attachment, texture, level, layer);
}

void q_openglfunctions_3_3_core_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlRenderbufferStorageMultisample((QOpenGLFunctions_3_3_Core*)self, target, samples, internalformat, width, height);
}

void q_openglfunctions_3_3_core_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    QOpenGLFunctions_3_3_Core_GlBlitFramebuffer((QOpenGLFunctions_3_3_Core*)self, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void q_openglfunctions_3_3_core_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_3_3_Core_GlGenerateMipmap((QOpenGLFunctions_3_3_Core*)self, target);
}

void q_openglfunctions_3_3_core_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions_3_3_Core*)self, target, attachment, pname, params);
}

void q_openglfunctions_3_3_core_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_3_3_Core_GlFramebufferRenderbuffer((QOpenGLFunctions_3_3_Core*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglfunctions_3_3_core_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    QOpenGLFunctions_3_3_Core_GlFramebufferTexture3D((QOpenGLFunctions_3_3_Core*)self, target, attachment, textarget, texture, level, zoffset);
}

void q_openglfunctions_3_3_core_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Core_GlFramebufferTexture2D((QOpenGLFunctions_3_3_Core*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_3_core_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Core_GlFramebufferTexture1D((QOpenGLFunctions_3_3_Core*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_3_3_core_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_3_Core_GlGenFramebuffers((QOpenGLFunctions_3_3_Core*)self, n, framebuffers);
}

void q_openglfunctions_3_3_core_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_3_3_Core_GlDeleteFramebuffers((QOpenGLFunctions_3_3_Core*)self, n, framebuffers);
}

void q_openglfunctions_3_3_core_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_3_3_Core_GlBindFramebuffer((QOpenGLFunctions_3_3_Core*)self, target, framebuffer);
}

uint8_t q_openglfunctions_3_3_core_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_3_3_Core_GlIsFramebuffer((QOpenGLFunctions_3_3_Core*)self, framebuffer);
}

void q_openglfunctions_3_3_core_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetRenderbufferParameteriv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_3_3_Core_GlRenderbufferStorage((QOpenGLFunctions_3_3_Core*)self, target, internalformat, width, height);
}

void q_openglfunctions_3_3_core_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_3_Core_GlGenRenderbuffers((QOpenGLFunctions_3_3_Core*)self, n, renderbuffers);
}

void q_openglfunctions_3_3_core_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_3_3_Core_GlDeleteRenderbuffers((QOpenGLFunctions_3_3_Core*)self, n, renderbuffers);
}

void q_openglfunctions_3_3_core_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_3_3_Core_GlBindRenderbuffer((QOpenGLFunctions_3_3_Core*)self, target, renderbuffer);
}

uint8_t q_openglfunctions_3_3_core_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_3_3_Core_GlIsRenderbuffer((QOpenGLFunctions_3_3_Core*)self, renderbuffer);
}

const uint8_t* q_openglfunctions_3_3_core_gl_get_stringi(void* self, uint32_t name, uint32_t index) {
    return (uint8_t*)QOpenGLFunctions_3_3_Core_GlGetStringi((QOpenGLFunctions_3_3_Core*)self, name, index);
}

void q_openglfunctions_3_3_core_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    QOpenGLFunctions_3_3_Core_GlClearBufferfi((QOpenGLFunctions_3_3_Core*)self, buffer, drawbuffer, depth, stencil);
}

void q_openglfunctions_3_3_core_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value) {
    QOpenGLFunctions_3_3_Core_GlClearBufferfv((QOpenGLFunctions_3_3_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_core_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlClearBufferuiv((QOpenGLFunctions_3_3_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_core_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value) {
    QOpenGLFunctions_3_3_Core_GlClearBufferiv((QOpenGLFunctions_3_3_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_3_3_core_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexParameterIuiv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetTexParameterIiv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlTexParameterIuiv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlTexParameterIiv((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform4uiv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform3uiv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform2uiv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlUniform1uiv((QOpenGLFunctions_3_3_Core*)self, location, count, value);
}

void q_openglfunctions_3_3_core_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLFunctions_3_3_Core_GlUniform4ui((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_3_3_core_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLFunctions_3_3_Core_GlUniform3ui((QOpenGLFunctions_3_3_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_3_3_core_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLFunctions_3_3_Core_GlUniform2ui((QOpenGLFunctions_3_3_Core*)self, location, v0, v1);
}

void q_openglfunctions_3_3_core_gl_uniform1ui(void* self, int32_t location, uint32_t v0) {
    QOpenGLFunctions_3_3_Core_GlUniform1ui((QOpenGLFunctions_3_3_Core*)self, location, v0);
}

int32_t q_openglfunctions_3_3_core_gl_get_frag_data_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Core_GlGetFragDataLocation((QOpenGLFunctions_3_3_Core*)self, program, name);
}

void q_openglfunctions_3_3_core_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, const char* name) {
    QOpenGLFunctions_3_3_Core_GlBindFragDataLocation((QOpenGLFunctions_3_3_Core*)self, program, color, name);
}

void q_openglfunctions_3_3_core_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetUniformuiv((QOpenGLFunctions_3_3_Core*)self, program, location, params);
}

void q_openglfunctions_3_3_core_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetVertexAttribIuiv((QOpenGLFunctions_3_3_Core*)self, index, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetVertexAttribIiv((QOpenGLFunctions_3_3_Core*)self, index, pname, params);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribIPointer((QOpenGLFunctions_3_3_Core*)self, index, size, type, stride, pointer);
}

void q_openglfunctions_3_3_core_gl_end_conditional_render(void* self) {
    QOpenGLFunctions_3_3_Core_GlEndConditionalRender((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlBeginConditionalRender((QOpenGLFunctions_3_3_Core*)self, id, mode);
}

void q_openglfunctions_3_3_core_gl_clamp_color(void* self, uint32_t target, uint32_t clamp) {
    QOpenGLFunctions_3_3_Core_GlClampColor((QOpenGLFunctions_3_3_Core*)self, target, clamp);
}

void q_openglfunctions_3_3_core_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer) {
    QOpenGLFunctions_3_3_Core_GlBindBufferBase((QOpenGLFunctions_3_3_Core*)self, target, index, buffer);
}

void q_openglfunctions_3_3_core_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLFunctions_3_3_Core_GlBindBufferRange((QOpenGLFunctions_3_3_Core*)self, target, index, buffer, offset, size);
}

void q_openglfunctions_3_3_core_gl_end_transform_feedback(void* self) {
    QOpenGLFunctions_3_3_Core_GlEndTransformFeedback((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_gl_begin_transform_feedback(void* self, uint32_t primitiveMode) {
    QOpenGLFunctions_3_3_Core_GlBeginTransformFeedback((QOpenGLFunctions_3_3_Core*)self, primitiveMode);
}

uint8_t q_openglfunctions_3_3_core_gl_is_enabledi(void* self, uint32_t target, uint32_t index) {
    return QOpenGLFunctions_3_3_Core_GlIsEnabledi((QOpenGLFunctions_3_3_Core*)self, target, index);
}

void q_openglfunctions_3_3_core_gl_disablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_3_Core_GlDisablei((QOpenGLFunctions_3_3_Core*)self, target, index);
}

void q_openglfunctions_3_3_core_gl_enablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_3_3_Core_GlEnablei((QOpenGLFunctions_3_3_Core*)self, target, index);
}

void q_openglfunctions_3_3_core_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data) {
    QOpenGLFunctions_3_3_Core_GlGetIntegeriV((QOpenGLFunctions_3_3_Core*)self, target, index, data);
}

void q_openglfunctions_3_3_core_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data) {
    QOpenGLFunctions_3_3_Core_GlGetBooleaniV((QOpenGLFunctions_3_3_Core*)self, target, index, data);
}

void q_openglfunctions_3_3_core_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    QOpenGLFunctions_3_3_Core_GlColorMaski((QOpenGLFunctions_3_3_Core*)self, index, r, g, b, a);
}

void q_openglfunctions_3_3_core_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size) {
    QOpenGLFunctions_3_3_Core_GlCopyBufferSubData((QOpenGLFunctions_3_3_Core*)self, readTarget, writeTarget, readOffset, writeOffset, size);
}

void q_openglfunctions_3_3_core_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    QOpenGLFunctions_3_3_Core_GlUniformBlockBinding((QOpenGLFunctions_3_3_Core*)self, program, uniformBlockIndex, uniformBlockBinding);
}

void q_openglfunctions_3_3_core_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName) {
    QOpenGLFunctions_3_3_Core_GlGetActiveUniformBlockName((QOpenGLFunctions_3_3_Core*)self, program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void q_openglfunctions_3_3_core_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetActiveUniformBlockiv((QOpenGLFunctions_3_3_Core*)self, program, uniformBlockIndex, pname, params);
}

uint32_t q_openglfunctions_3_3_core_gl_get_uniform_block_index(void* self, uint32_t program, const char* uniformBlockName) {
    return QOpenGLFunctions_3_3_Core_GlGetUniformBlockIndex((QOpenGLFunctions_3_3_Core*)self, program, uniformBlockName);
}

void q_openglfunctions_3_3_core_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName) {
    QOpenGLFunctions_3_3_Core_GlGetActiveUniformName((QOpenGLFunctions_3_3_Core*)self, program, uniformIndex, bufSize, length, uniformName);
}

void q_openglfunctions_3_3_core_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetActiveUniformsiv((QOpenGLFunctions_3_3_Core*)self, program, uniformCount, uniformIndices, pname, params);
}

void q_openglfunctions_3_3_core_gl_primitive_restart_index(void* self, uint32_t index) {
    QOpenGLFunctions_3_3_Core_GlPrimitiveRestartIndex((QOpenGLFunctions_3_3_Core*)self, index);
}

void q_openglfunctions_3_3_core_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    QOpenGLFunctions_3_3_Core_GlTexBuffer((QOpenGLFunctions_3_3_Core*)self, target, internalformat, buffer);
}

void q_openglfunctions_3_3_core_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount) {
    QOpenGLFunctions_3_3_Core_GlDrawElementsInstanced((QOpenGLFunctions_3_3_Core*)self, mode, count, type, indices, instancecount);
}

void q_openglfunctions_3_3_core_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    QOpenGLFunctions_3_3_Core_GlDrawArraysInstanced((QOpenGLFunctions_3_3_Core*)self, mode, first, count, instancecount);
}

void q_openglfunctions_3_3_core_gl_sample_maski(void* self, uint32_t index, uint32_t mask) {
    QOpenGLFunctions_3_3_Core_GlSampleMaski((QOpenGLFunctions_3_3_Core*)self, index, mask);
}

void q_openglfunctions_3_3_core_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val) {
    QOpenGLFunctions_3_3_Core_GlGetMultisamplefv((QOpenGLFunctions_3_3_Core*)self, pname, index, val);
}

void q_openglfunctions_3_3_core_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_3_3_Core_GlTexImage3DMultisample((QOpenGLFunctions_3_3_Core*)self, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void q_openglfunctions_3_3_core_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_3_3_Core_GlTexImage2DMultisample((QOpenGLFunctions_3_3_Core*)self, target, samples, internalformat, width, height, fixedsamplelocations);
}

void q_openglfunctions_3_3_core_gl_get_integer64v(void* self, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetInteger64v((QOpenGLFunctions_3_3_Core*)self, pname, params);
}

void q_openglfunctions_3_3_core_gl_provoking_vertex(void* self, uint32_t mode) {
    QOpenGLFunctions_3_3_Core_GlProvokingVertex((QOpenGLFunctions_3_3_Core*)self, mode);
}

void q_openglfunctions_3_3_core_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex) {
    QOpenGLFunctions_3_3_Core_GlDrawElementsInstancedBaseVertex((QOpenGLFunctions_3_3_Core*)self, mode, count, type, indices, instancecount, basevertex);
}

void q_openglfunctions_3_3_core_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_3_3_Core_GlDrawRangeElementsBaseVertex((QOpenGLFunctions_3_3_Core*)self, mode, start, end, count, type, indices, basevertex);
}

void q_openglfunctions_3_3_core_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_3_3_Core_GlDrawElementsBaseVertex((QOpenGLFunctions_3_3_Core*)self, mode, count, type, indices, basevertex);
}

void q_openglfunctions_3_3_core_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    QOpenGLFunctions_3_3_Core_GlFramebufferTexture((QOpenGLFunctions_3_3_Core*)self, target, attachment, texture, level);
}

void q_openglfunctions_3_3_core_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetBufferParameteri64v((QOpenGLFunctions_3_3_Core*)self, target, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data) {
    QOpenGLFunctions_3_3_Core_GlGetInteger64iV((QOpenGLFunctions_3_3_Core*)self, target, index, data);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP4uiv((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP4ui((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP3uiv((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP3ui((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP2uiv((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP2ui((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP1uiv((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribP1ui((QOpenGLFunctions_3_3_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_3_3_core_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetQueryObjectui64v((QOpenGLFunctions_3_3_Core*)self, id, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetQueryObjecti64v((QOpenGLFunctions_3_3_Core*)self, id, pname, params);
}

void q_openglfunctions_3_3_core_gl_query_counter(void* self, uint32_t id, uint32_t target) {
    QOpenGLFunctions_3_3_Core_GlQueryCounter((QOpenGLFunctions_3_3_Core*)self, id, target);
}

void q_openglfunctions_3_3_core_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetSamplerParameterIuiv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params) {
    QOpenGLFunctions_3_3_Core_GlGetSamplerParameterfv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetSamplerParameterIiv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_core_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_3_3_Core_GlGetSamplerParameteriv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, params);
}

void q_openglfunctions_3_3_core_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameterIuiv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameterIiv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameterfv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameterf((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameteriv((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param) {
    QOpenGLFunctions_3_3_Core_GlSamplerParameteri((QOpenGLFunctions_3_3_Core*)self, sampler, pname, param);
}

void q_openglfunctions_3_3_core_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler) {
    QOpenGLFunctions_3_3_Core_GlBindSampler((QOpenGLFunctions_3_3_Core*)self, unit, sampler);
}

uint8_t q_openglfunctions_3_3_core_gl_is_sampler(void* self, uint32_t sampler) {
    return QOpenGLFunctions_3_3_Core_GlIsSampler((QOpenGLFunctions_3_3_Core*)self, sampler);
}

void q_openglfunctions_3_3_core_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_3_3_Core_GlDeleteSamplers((QOpenGLFunctions_3_3_Core*)self, count, samplers);
}

void q_openglfunctions_3_3_core_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_3_3_Core_GlGenSamplers((QOpenGLFunctions_3_3_Core*)self, count, samplers);
}

int32_t q_openglfunctions_3_3_core_gl_get_frag_data_index(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_3_3_Core_GlGetFragDataIndex((QOpenGLFunctions_3_3_Core*)self, program, name);
}

void q_openglfunctions_3_3_core_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, const char* name) {
    QOpenGLFunctions_3_3_Core_GlBindFragDataLocationIndexed((QOpenGLFunctions_3_3_Core*)self, program, colorNumber, index, name);
}

void q_openglfunctions_3_3_core_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor) {
    QOpenGLFunctions_3_3_Core_GlVertexAttribDivisor((QOpenGLFunctions_3_3_Core*)self, index, divisor);
}

bool q_openglfunctions_3_3_core_is_initialized(void* self) {
    return QOpenGLFunctions_3_3_Core_IsInitialized((QOpenGLFunctions_3_3_Core*)self);
}

bool q_openglfunctions_3_3_core_qbase_is_initialized(void* self) {
    return QOpenGLFunctions_3_3_Core_QBaseIsInitialized((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_3_3_Core_OnIsInitialized((QOpenGLFunctions_3_3_Core*)self, (intptr_t)callback);
}

void q_openglfunctions_3_3_core_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_3_Core_SetOwningContext((QOpenGLFunctions_3_3_Core*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_3_core_qbase_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_3_3_Core_QBaseSetOwningContext((QOpenGLFunctions_3_3_Core*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_3_3_core_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_3_3_Core_OnSetOwningContext((QOpenGLFunctions_3_3_Core*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_3_3_core_owning_context(void* self) {
    return QOpenGLFunctions_3_3_Core_OwningContext((QOpenGLFunctions_3_3_Core*)self);
}

QOpenGLContext* q_openglfunctions_3_3_core_qbase_owning_context(void* self) {
    return QOpenGLFunctions_3_3_Core_QBaseOwningContext((QOpenGLFunctions_3_3_Core*)self);
}

void q_openglfunctions_3_3_core_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_3_3_Core_OnOwningContext((QOpenGLFunctions_3_3_Core*)self, (intptr_t)callback);
}

void q_openglfunctions_3_3_core_delete(void* self) {
    QOpenGLFunctions_3_3_Core_Delete((QOpenGLFunctions_3_3_Core*)(self));
}
