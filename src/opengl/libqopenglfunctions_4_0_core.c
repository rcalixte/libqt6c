#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_4_0_core.hpp"
#include "libqopenglfunctions_4_0_core.h"

QOpenGLFunctions_4_0_Core* q_openglfunctions_4_0_core_new() {
    return QOpenGLFunctions_4_0_Core_new();
}

bool q_openglfunctions_4_0_core_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_4_0_Core_InitializeOpenGLFunctions((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_4_0_Core_OnInitializeOpenGLFunctions((QOpenGLFunctions_4_0_Core*)self, (intptr_t)callback);
}

bool q_openglfunctions_4_0_core_qbase_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_4_0_Core_QBaseInitializeOpenGLFunctions((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlViewport((QOpenGLFunctions_4_0_Core*)self, x, y, width, height);
}

void q_openglfunctions_4_0_core_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_4_0_Core_GlDepthRange((QOpenGLFunctions_4_0_Core*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_4_0_core_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_4_0_Core_GlIsEnabled((QOpenGLFunctions_4_0_Core*)self, cap);
}

void q_openglfunctions_4_0_core_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexLevelParameteriv((QOpenGLFunctions_4_0_Core*)self, target, level, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexLevelParameterfv((QOpenGLFunctions_4_0_Core*)self, target, level, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexParameteriv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexParameterfv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlGetTexImage((QOpenGLFunctions_4_0_Core*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_4_0_core_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_4_0_Core_GlGetString((QOpenGLFunctions_4_0_Core*)self, name);
}

void q_openglfunctions_4_0_core_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetIntegerv((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetFloatv((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_4_0_Core_GlGetDoublev((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetBooleanv((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlReadPixels((QOpenGLFunctions_4_0_Core*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlReadBuffer((QOpenGLFunctions_4_0_Core*)self, mode);
}

void q_openglfunctions_4_0_core_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_4_0_Core_GlPixelStorei((QOpenGLFunctions_4_0_Core*)self, pname, param);
}

void q_openglfunctions_4_0_core_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_4_0_Core_GlPixelStoref((QOpenGLFunctions_4_0_Core*)self, pname, param);
}

void q_openglfunctions_4_0_core_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_4_0_Core_GlDepthFunc((QOpenGLFunctions_4_0_Core*)self, func);
}

void q_openglfunctions_4_0_core_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_4_0_Core_GlStencilOp((QOpenGLFunctions_4_0_Core*)self, fail, zfail, zpass);
}

void q_openglfunctions_4_0_core_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlStencilFunc((QOpenGLFunctions_4_0_Core*)self, func, ref, mask);
}

void q_openglfunctions_4_0_core_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_4_0_Core_GlLogicOp((QOpenGLFunctions_4_0_Core*)self, opcode);
}

void q_openglfunctions_4_0_core_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_4_0_Core_GlBlendFunc((QOpenGLFunctions_4_0_Core*)self, sfactor, dfactor);
}

void q_openglfunctions_4_0_core_gl_flush(void* self) {
    QOpenGLFunctions_4_0_Core_GlFlush((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_finish(void* self) {
    QOpenGLFunctions_4_0_Core_GlFinish((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_4_0_Core_GlEnable((QOpenGLFunctions_4_0_Core*)self, cap);
}

void q_openglfunctions_4_0_core_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_4_0_Core_GlDisable((QOpenGLFunctions_4_0_Core*)self, cap);
}

void q_openglfunctions_4_0_core_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_4_0_Core_GlDepthMask((QOpenGLFunctions_4_0_Core*)self, flag);
}

void q_openglfunctions_4_0_core_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_4_0_Core_GlColorMask((QOpenGLFunctions_4_0_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_4_0_core_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlStencilMask((QOpenGLFunctions_4_0_Core*)self, mask);
}

void q_openglfunctions_4_0_core_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_4_0_Core_GlClearDepth((QOpenGLFunctions_4_0_Core*)self, depth);
}

void q_openglfunctions_4_0_core_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_4_0_Core_GlClearStencil((QOpenGLFunctions_4_0_Core*)self, s);
}

void q_openglfunctions_4_0_core_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_4_0_Core_GlClearColor((QOpenGLFunctions_4_0_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_4_0_core_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlClear((QOpenGLFunctions_4_0_Core*)self, mask);
}

void q_openglfunctions_4_0_core_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlDrawBuffer((QOpenGLFunctions_4_0_Core*)self, mode);
}

void q_openglfunctions_4_0_core_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlTexParameteriv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_4_0_Core_GlTexParameteri((QOpenGLFunctions_4_0_Core*)self, target, pname, param);
}

void q_openglfunctions_4_0_core_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlTexParameterfv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_4_0_Core_GlTexParameterf((QOpenGLFunctions_4_0_Core*)self, target, pname, param);
}

void q_openglfunctions_4_0_core_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlScissor((QOpenGLFunctions_4_0_Core*)self, x, y, width, height);
}

void q_openglfunctions_4_0_core_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlPolygonMode((QOpenGLFunctions_4_0_Core*)self, face, mode);
}

void q_openglfunctions_4_0_core_gl_point_size(void* self, float size) {
    QOpenGLFunctions_4_0_Core_GlPointSize((QOpenGLFunctions_4_0_Core*)self, size);
}

void q_openglfunctions_4_0_core_gl_line_width(void* self, float width) {
    QOpenGLFunctions_4_0_Core_GlLineWidth((QOpenGLFunctions_4_0_Core*)self, width);
}

void q_openglfunctions_4_0_core_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlHint((QOpenGLFunctions_4_0_Core*)self, target, mode);
}

void q_openglfunctions_4_0_core_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlFrontFace((QOpenGLFunctions_4_0_Core*)self, mode);
}

void q_openglfunctions_4_0_core_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlCullFace((QOpenGLFunctions_4_0_Core*)self, mode);
}

uint8_t q_openglfunctions_4_0_core_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_4_0_Core_GlIsTexture((QOpenGLFunctions_4_0_Core*)self, texture);
}

void q_openglfunctions_4_0_core_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_4_0_Core_GlGenTextures((QOpenGLFunctions_4_0_Core*)self, n, textures);
}

void q_openglfunctions_4_0_core_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_4_0_Core_GlDeleteTextures((QOpenGLFunctions_4_0_Core*)self, n, textures);
}

void q_openglfunctions_4_0_core_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_4_0_Core_GlBindTexture((QOpenGLFunctions_4_0_Core*)self, target, texture);
}

void q_openglfunctions_4_0_core_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexSubImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexSubImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlCopyTexSubImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_4_0_core_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_4_0_Core_GlCopyTexSubImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_4_0_core_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_4_0_Core_GlCopyTexImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_4_0_core_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_4_0_Core_GlCopyTexImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_4_0_core_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_4_0_Core_GlPolygonOffset((QOpenGLFunctions_4_0_Core*)self, factor, units);
}

void q_openglfunctions_4_0_core_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_4_0_Core_GlDrawElements((QOpenGLFunctions_4_0_Core*)self, mode, count, type, indices);
}

void q_openglfunctions_4_0_core_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_4_0_Core_GlDrawArrays((QOpenGLFunctions_4_0_Core*)self, mode, first, count);
}

void q_openglfunctions_4_0_core_gl_copy_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlCopyTexSubImage3D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void q_openglfunctions_4_0_core_gl_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexSubImage3D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_tex_image3_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_4_0_Core_GlTexImage3D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void q_openglfunctions_4_0_core_gl_draw_range_elements(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_4_0_Core_GlDrawRangeElements((QOpenGLFunctions_4_0_Core*)self, mode, start, end, count, type, indices);
}

void q_openglfunctions_4_0_core_gl_blend_equation(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlBlendEquation((QOpenGLFunctions_4_0_Core*)self, mode);
}

void q_openglfunctions_4_0_core_gl_blend_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_4_0_Core_GlBlendColor((QOpenGLFunctions_4_0_Core*)self, red, green, blue, alpha);
}

void q_openglfunctions_4_0_core_gl_get_compressed_tex_image(void* self, uint32_t target, int32_t level, void* img) {
    QOpenGLFunctions_4_0_Core_GlGetCompressedTexImage((QOpenGLFunctions_4_0_Core*)self, target, level, img);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, width, format, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_sub_image3_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t zoffset, int32_t width, int32_t height, int32_t depth, uint32_t format, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexSubImage3D((QOpenGLFunctions_4_0_Core*)self, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexImage1D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, border, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexImage2D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, height, border, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_compressed_tex_image3_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t width, int32_t height, int32_t depth, int32_t border, int32_t imageSize, void* data) {
    QOpenGLFunctions_4_0_Core_GlCompressedTexImage3D((QOpenGLFunctions_4_0_Core*)self, target, level, internalformat, width, height, depth, border, imageSize, data);
}

void q_openglfunctions_4_0_core_gl_sample_coverage(void* self, float value, uint8_t invert) {
    QOpenGLFunctions_4_0_Core_GlSampleCoverage((QOpenGLFunctions_4_0_Core*)self, value, invert);
}

void q_openglfunctions_4_0_core_gl_active_texture(void* self, uint32_t texture) {
    QOpenGLFunctions_4_0_Core_GlActiveTexture((QOpenGLFunctions_4_0_Core*)self, texture);
}

void q_openglfunctions_4_0_core_gl_point_parameteriv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlPointParameteriv((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_point_parameteri(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_4_0_Core_GlPointParameteri((QOpenGLFunctions_4_0_Core*)self, pname, param);
}

void q_openglfunctions_4_0_core_gl_point_parameterfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlPointParameterfv((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_point_parameterf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_4_0_Core_GlPointParameterf((QOpenGLFunctions_4_0_Core*)self, pname, param);
}

void q_openglfunctions_4_0_core_gl_multi_draw_arrays(void* self, uint32_t mode, int32_t* first, int32_t* count, int32_t drawcount) {
    QOpenGLFunctions_4_0_Core_GlMultiDrawArrays((QOpenGLFunctions_4_0_Core*)self, mode, first, count, drawcount);
}

void q_openglfunctions_4_0_core_gl_blend_func_separate(void* self, uint32_t sfactorRGB, uint32_t dfactorRGB, uint32_t sfactorAlpha, uint32_t dfactorAlpha) {
    QOpenGLFunctions_4_0_Core_GlBlendFuncSeparate((QOpenGLFunctions_4_0_Core*)self, sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void q_openglfunctions_4_0_core_gl_get_buffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetBufferParameteriv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

uint8_t q_openglfunctions_4_0_core_gl_unmap_buffer(void* self, uint32_t target) {
    return QOpenGLFunctions_4_0_Core_GlUnmapBuffer((QOpenGLFunctions_4_0_Core*)self, target);
}

void* q_openglfunctions_4_0_core_gl_map_buffer(void* self, uint32_t target, uint32_t access) {
    return QOpenGLFunctions_4_0_Core_GlMapBuffer((QOpenGLFunctions_4_0_Core*)self, target, access);
}

void q_openglfunctions_4_0_core_gl_get_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_4_0_Core_GlGetBufferSubData((QOpenGLFunctions_4_0_Core*)self, target, offset, size, data);
}

void q_openglfunctions_4_0_core_gl_buffer_sub_data(void* self, uint32_t target, intptr_t offset, intptr_t size, void* data) {
    QOpenGLFunctions_4_0_Core_GlBufferSubData((QOpenGLFunctions_4_0_Core*)self, target, offset, size, data);
}

void q_openglfunctions_4_0_core_gl_buffer_data(void* self, uint32_t target, intptr_t size, void* data, uint32_t usage) {
    QOpenGLFunctions_4_0_Core_GlBufferData((QOpenGLFunctions_4_0_Core*)self, target, size, data, usage);
}

uint8_t q_openglfunctions_4_0_core_gl_is_buffer(void* self, uint32_t buffer) {
    return QOpenGLFunctions_4_0_Core_GlIsBuffer((QOpenGLFunctions_4_0_Core*)self, buffer);
}

void q_openglfunctions_4_0_core_gl_gen_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_4_0_Core_GlGenBuffers((QOpenGLFunctions_4_0_Core*)self, n, buffers);
}

void q_openglfunctions_4_0_core_gl_delete_buffers(void* self, int32_t n, uint32_t* buffers) {
    QOpenGLFunctions_4_0_Core_GlDeleteBuffers((QOpenGLFunctions_4_0_Core*)self, n, buffers);
}

void q_openglfunctions_4_0_core_gl_bind_buffer(void* self, uint32_t target, uint32_t buffer) {
    QOpenGLFunctions_4_0_Core_GlBindBuffer((QOpenGLFunctions_4_0_Core*)self, target, buffer);
}

void q_openglfunctions_4_0_core_gl_get_query_objectuiv(void* self, uint32_t id, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryObjectuiv((QOpenGLFunctions_4_0_Core*)self, id, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_query_objectiv(void* self, uint32_t id, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryObjectiv((QOpenGLFunctions_4_0_Core*)self, id, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_queryiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryiv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_end_query(void* self, uint32_t target) {
    QOpenGLFunctions_4_0_Core_GlEndQuery((QOpenGLFunctions_4_0_Core*)self, target);
}

void q_openglfunctions_4_0_core_gl_begin_query(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_4_0_Core_GlBeginQuery((QOpenGLFunctions_4_0_Core*)self, target, id);
}

uint8_t q_openglfunctions_4_0_core_gl_is_query(void* self, uint32_t id) {
    return QOpenGLFunctions_4_0_Core_GlIsQuery((QOpenGLFunctions_4_0_Core*)self, id);
}

void q_openglfunctions_4_0_core_gl_delete_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_4_0_Core_GlDeleteQueries((QOpenGLFunctions_4_0_Core*)self, n, ids);
}

void q_openglfunctions_4_0_core_gl_gen_queries(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_4_0_Core_GlGenQueries((QOpenGLFunctions_4_0_Core*)self, n, ids);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_pointer(void* self, uint32_t index, int32_t size, uint32_t type, uint8_t normalized, int32_t stride, void* pointer) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribPointer((QOpenGLFunctions_4_0_Core*)self, index, size, type, normalized, stride, pointer);
}

void q_openglfunctions_4_0_core_gl_validate_program(void* self, uint32_t program) {
    QOpenGLFunctions_4_0_Core_GlValidateProgram((QOpenGLFunctions_4_0_Core*)self, program);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform4iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform4iv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform3iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform3iv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform2iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform2iv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform1iv(void* self, int32_t location, int32_t count, int32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform1iv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform4fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniform4fv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform3fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniform3fv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform2fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniform2fv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform1fv(void* self, int32_t location, int32_t count, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniform1fv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform4i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2, int32_t v3) {
    QOpenGLFunctions_4_0_Core_GlUniform4i((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_4_0_core_gl_uniform3i(void* self, int32_t location, int32_t v0, int32_t v1, int32_t v2) {
    QOpenGLFunctions_4_0_Core_GlUniform3i((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_4_0_core_gl_uniform2i(void* self, int32_t location, int32_t v0, int32_t v1) {
    QOpenGLFunctions_4_0_Core_GlUniform2i((QOpenGLFunctions_4_0_Core*)self, location, v0, v1);
}

void q_openglfunctions_4_0_core_gl_uniform1i(void* self, int32_t location, int32_t v0) {
    QOpenGLFunctions_4_0_Core_GlUniform1i((QOpenGLFunctions_4_0_Core*)self, location, v0);
}

void q_openglfunctions_4_0_core_gl_uniform4f(void* self, int32_t location, float v0, float v1, float v2, float v3) {
    QOpenGLFunctions_4_0_Core_GlUniform4f((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_4_0_core_gl_uniform3f(void* self, int32_t location, float v0, float v1, float v2) {
    QOpenGLFunctions_4_0_Core_GlUniform3f((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_4_0_core_gl_uniform2f(void* self, int32_t location, float v0, float v1) {
    QOpenGLFunctions_4_0_Core_GlUniform2f((QOpenGLFunctions_4_0_Core*)self, location, v0, v1);
}

void q_openglfunctions_4_0_core_gl_uniform1f(void* self, int32_t location, float v0) {
    QOpenGLFunctions_4_0_Core_GlUniform1f((QOpenGLFunctions_4_0_Core*)self, location, v0);
}

void q_openglfunctions_4_0_core_gl_use_program(void* self, uint32_t program) {
    QOpenGLFunctions_4_0_Core_GlUseProgram((QOpenGLFunctions_4_0_Core*)self, program);
}

void q_openglfunctions_4_0_core_gl_link_program(void* self, uint32_t program) {
    QOpenGLFunctions_4_0_Core_GlLinkProgram((QOpenGLFunctions_4_0_Core*)self, program);
}

uint8_t q_openglfunctions_4_0_core_gl_is_shader(void* self, uint32_t shader) {
    return QOpenGLFunctions_4_0_Core_GlIsShader((QOpenGLFunctions_4_0_Core*)self, shader);
}

uint8_t q_openglfunctions_4_0_core_gl_is_program(void* self, uint32_t program) {
    return QOpenGLFunctions_4_0_Core_GlIsProgram((QOpenGLFunctions_4_0_Core*)self, program);
}

void q_openglfunctions_4_0_core_gl_get_vertex_attribiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetVertexAttribiv((QOpenGLFunctions_4_0_Core*)self, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_vertex_attribfv(void* self, uint32_t index, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetVertexAttribfv((QOpenGLFunctions_4_0_Core*)self, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_vertex_attribdv(void* self, uint32_t index, uint32_t pname, double* params) {
    QOpenGLFunctions_4_0_Core_GlGetVertexAttribdv((QOpenGLFunctions_4_0_Core*)self, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_uniformiv(void* self, uint32_t program, int32_t location, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetUniformiv((QOpenGLFunctions_4_0_Core*)self, program, location, params);
}

void q_openglfunctions_4_0_core_gl_get_uniformfv(void* self, uint32_t program, int32_t location, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetUniformfv((QOpenGLFunctions_4_0_Core*)self, program, location, params);
}

int32_t q_openglfunctions_4_0_core_gl_get_uniform_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetUniformLocation((QOpenGLFunctions_4_0_Core*)self, program, name);
}

void q_openglfunctions_4_0_core_gl_get_shader_source(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* source) {
    QOpenGLFunctions_4_0_Core_GlGetShaderSource((QOpenGLFunctions_4_0_Core*)self, shader, bufSize, length, source);
}

void q_openglfunctions_4_0_core_gl_get_shader_info_log(void* self, uint32_t shader, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_4_0_Core_GlGetShaderInfoLog((QOpenGLFunctions_4_0_Core*)self, shader, bufSize, length, infoLog);
}

void q_openglfunctions_4_0_core_gl_get_shaderiv(void* self, uint32_t shader, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetShaderiv((QOpenGLFunctions_4_0_Core*)self, shader, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_program_info_log(void* self, uint32_t program, int32_t bufSize, int32_t* length, char* infoLog) {
    QOpenGLFunctions_4_0_Core_GlGetProgramInfoLog((QOpenGLFunctions_4_0_Core*)self, program, bufSize, length, infoLog);
}

void q_openglfunctions_4_0_core_gl_get_programiv(void* self, uint32_t program, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetProgramiv((QOpenGLFunctions_4_0_Core*)self, program, pname, params);
}

int32_t q_openglfunctions_4_0_core_gl_get_attrib_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetAttribLocation((QOpenGLFunctions_4_0_Core*)self, program, name);
}

void q_openglfunctions_4_0_core_gl_get_attached_shaders(void* self, uint32_t program, int32_t maxCount, int32_t* count, uint32_t* obj) {
    QOpenGLFunctions_4_0_Core_GlGetAttachedShaders((QOpenGLFunctions_4_0_Core*)self, program, maxCount, count, obj);
}

void q_openglfunctions_4_0_core_gl_enable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlEnableVertexAttribArray((QOpenGLFunctions_4_0_Core*)self, index);
}

void q_openglfunctions_4_0_core_gl_disable_vertex_attrib_array(void* self, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlDisableVertexAttribArray((QOpenGLFunctions_4_0_Core*)self, index);
}

void q_openglfunctions_4_0_core_gl_detach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_4_0_Core_GlDetachShader((QOpenGLFunctions_4_0_Core*)self, program, shader);
}

void q_openglfunctions_4_0_core_gl_delete_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_4_0_Core_GlDeleteShader((QOpenGLFunctions_4_0_Core*)self, shader);
}

void q_openglfunctions_4_0_core_gl_delete_program(void* self, uint32_t program) {
    QOpenGLFunctions_4_0_Core_GlDeleteProgram((QOpenGLFunctions_4_0_Core*)self, program);
}

uint32_t q_openglfunctions_4_0_core_gl_create_shader(void* self, uint32_t type) {
    return QOpenGLFunctions_4_0_Core_GlCreateShader((QOpenGLFunctions_4_0_Core*)self, type);
}

uint32_t q_openglfunctions_4_0_core_gl_create_program(void* self) {
    return QOpenGLFunctions_4_0_Core_GlCreateProgram((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_compile_shader(void* self, uint32_t shader) {
    QOpenGLFunctions_4_0_Core_GlCompileShader((QOpenGLFunctions_4_0_Core*)self, shader);
}

void q_openglfunctions_4_0_core_gl_bind_attrib_location(void* self, uint32_t program, uint32_t index, const char* name) {
    QOpenGLFunctions_4_0_Core_GlBindAttribLocation((QOpenGLFunctions_4_0_Core*)self, program, index, name);
}

void q_openglfunctions_4_0_core_gl_attach_shader(void* self, uint32_t program, uint32_t shader) {
    QOpenGLFunctions_4_0_Core_GlAttachShader((QOpenGLFunctions_4_0_Core*)self, program, shader);
}

void q_openglfunctions_4_0_core_gl_stencil_mask_separate(void* self, uint32_t face, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlStencilMaskSeparate((QOpenGLFunctions_4_0_Core*)self, face, mask);
}

void q_openglfunctions_4_0_core_gl_stencil_func_separate(void* self, uint32_t face, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlStencilFuncSeparate((QOpenGLFunctions_4_0_Core*)self, face, func, ref, mask);
}

void q_openglfunctions_4_0_core_gl_stencil_op_separate(void* self, uint32_t face, uint32_t sfail, uint32_t dpfail, uint32_t dppass) {
    QOpenGLFunctions_4_0_Core_GlStencilOpSeparate((QOpenGLFunctions_4_0_Core*)self, face, sfail, dpfail, dppass);
}

void q_openglfunctions_4_0_core_gl_blend_equation_separate(void* self, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_4_0_Core_GlBlendEquationSeparate((QOpenGLFunctions_4_0_Core*)self, modeRGB, modeAlpha);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4x3fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3x4fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4x2fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2x4fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2x4fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3x2fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3x2fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2x3fv(void* self, int32_t location, int32_t count, uint8_t transpose, float* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2x3fv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

uint8_t q_openglfunctions_4_0_core_gl_is_vertex_array(void* self, uint32_t array) {
    return QOpenGLFunctions_4_0_Core_GlIsVertexArray((QOpenGLFunctions_4_0_Core*)self, array);
}

void q_openglfunctions_4_0_core_gl_gen_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_4_0_Core_GlGenVertexArrays((QOpenGLFunctions_4_0_Core*)self, n, arrays);
}

void q_openglfunctions_4_0_core_gl_delete_vertex_arrays(void* self, int32_t n, uint32_t* arrays) {
    QOpenGLFunctions_4_0_Core_GlDeleteVertexArrays((QOpenGLFunctions_4_0_Core*)self, n, arrays);
}

void q_openglfunctions_4_0_core_gl_bind_vertex_array(void* self, uint32_t array) {
    QOpenGLFunctions_4_0_Core_GlBindVertexArray((QOpenGLFunctions_4_0_Core*)self, array);
}

void q_openglfunctions_4_0_core_gl_flush_mapped_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length) {
    QOpenGLFunctions_4_0_Core_GlFlushMappedBufferRange((QOpenGLFunctions_4_0_Core*)self, target, offset, length);
}

void* q_openglfunctions_4_0_core_gl_map_buffer_range(void* self, uint32_t target, intptr_t offset, intptr_t length, uint32_t access) {
    return QOpenGLFunctions_4_0_Core_GlMapBufferRange((QOpenGLFunctions_4_0_Core*)self, target, offset, length, access);
}

void q_openglfunctions_4_0_core_gl_framebuffer_texture_layer(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level, int32_t layer) {
    QOpenGLFunctions_4_0_Core_GlFramebufferTextureLayer((QOpenGLFunctions_4_0_Core*)self, target, attachment, texture, level, layer);
}

void q_openglfunctions_4_0_core_gl_renderbuffer_storage_multisample(void* self, uint32_t target, int32_t samples, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlRenderbufferStorageMultisample((QOpenGLFunctions_4_0_Core*)self, target, samples, internalformat, width, height);
}

void q_openglfunctions_4_0_core_gl_blit_framebuffer(void* self, int32_t srcX0, int32_t srcY0, int32_t srcX1, int32_t srcY1, int32_t dstX0, int32_t dstY0, int32_t dstX1, int32_t dstY1, uint32_t mask, uint32_t filter) {
    QOpenGLFunctions_4_0_Core_GlBlitFramebuffer((QOpenGLFunctions_4_0_Core*)self, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void q_openglfunctions_4_0_core_gl_generate_mipmap(void* self, uint32_t target) {
    QOpenGLFunctions_4_0_Core_GlGenerateMipmap((QOpenGLFunctions_4_0_Core*)self, target);
}

void q_openglfunctions_4_0_core_gl_get_framebuffer_attachment_parameteriv(void* self, uint32_t target, uint32_t attachment, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetFramebufferAttachmentParameteriv((QOpenGLFunctions_4_0_Core*)self, target, attachment, pname, params);
}

void q_openglfunctions_4_0_core_gl_framebuffer_renderbuffer(void* self, uint32_t target, uint32_t attachment, uint32_t renderbuffertarget, uint32_t renderbuffer) {
    QOpenGLFunctions_4_0_Core_GlFramebufferRenderbuffer((QOpenGLFunctions_4_0_Core*)self, target, attachment, renderbuffertarget, renderbuffer);
}

void q_openglfunctions_4_0_core_gl_framebuffer_texture3_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level, int32_t zoffset) {
    QOpenGLFunctions_4_0_Core_GlFramebufferTexture3D((QOpenGLFunctions_4_0_Core*)self, target, attachment, textarget, texture, level, zoffset);
}

void q_openglfunctions_4_0_core_gl_framebuffer_texture2_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_4_0_Core_GlFramebufferTexture2D((QOpenGLFunctions_4_0_Core*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_4_0_core_gl_framebuffer_texture1_d(void* self, uint32_t target, uint32_t attachment, uint32_t textarget, uint32_t texture, int32_t level) {
    QOpenGLFunctions_4_0_Core_GlFramebufferTexture1D((QOpenGLFunctions_4_0_Core*)self, target, attachment, textarget, texture, level);
}

void q_openglfunctions_4_0_core_gl_gen_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_4_0_Core_GlGenFramebuffers((QOpenGLFunctions_4_0_Core*)self, n, framebuffers);
}

void q_openglfunctions_4_0_core_gl_delete_framebuffers(void* self, int32_t n, uint32_t* framebuffers) {
    QOpenGLFunctions_4_0_Core_GlDeleteFramebuffers((QOpenGLFunctions_4_0_Core*)self, n, framebuffers);
}

void q_openglfunctions_4_0_core_gl_bind_framebuffer(void* self, uint32_t target, uint32_t framebuffer) {
    QOpenGLFunctions_4_0_Core_GlBindFramebuffer((QOpenGLFunctions_4_0_Core*)self, target, framebuffer);
}

uint8_t q_openglfunctions_4_0_core_gl_is_framebuffer(void* self, uint32_t framebuffer) {
    return QOpenGLFunctions_4_0_Core_GlIsFramebuffer((QOpenGLFunctions_4_0_Core*)self, framebuffer);
}

void q_openglfunctions_4_0_core_gl_get_renderbuffer_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetRenderbufferParameteriv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_renderbuffer_storage(void* self, uint32_t target, uint32_t internalformat, int32_t width, int32_t height) {
    QOpenGLFunctions_4_0_Core_GlRenderbufferStorage((QOpenGLFunctions_4_0_Core*)self, target, internalformat, width, height);
}

void q_openglfunctions_4_0_core_gl_gen_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_4_0_Core_GlGenRenderbuffers((QOpenGLFunctions_4_0_Core*)self, n, renderbuffers);
}

void q_openglfunctions_4_0_core_gl_delete_renderbuffers(void* self, int32_t n, uint32_t* renderbuffers) {
    QOpenGLFunctions_4_0_Core_GlDeleteRenderbuffers((QOpenGLFunctions_4_0_Core*)self, n, renderbuffers);
}

void q_openglfunctions_4_0_core_gl_bind_renderbuffer(void* self, uint32_t target, uint32_t renderbuffer) {
    QOpenGLFunctions_4_0_Core_GlBindRenderbuffer((QOpenGLFunctions_4_0_Core*)self, target, renderbuffer);
}

uint8_t q_openglfunctions_4_0_core_gl_is_renderbuffer(void* self, uint32_t renderbuffer) {
    return QOpenGLFunctions_4_0_Core_GlIsRenderbuffer((QOpenGLFunctions_4_0_Core*)self, renderbuffer);
}

const uint8_t* q_openglfunctions_4_0_core_gl_get_stringi(void* self, uint32_t name, uint32_t index) {
    return (uint8_t*)QOpenGLFunctions_4_0_Core_GlGetStringi((QOpenGLFunctions_4_0_Core*)self, name, index);
}

void q_openglfunctions_4_0_core_gl_clear_bufferfi(void* self, uint32_t buffer, int32_t drawbuffer, float depth, int32_t stencil) {
    QOpenGLFunctions_4_0_Core_GlClearBufferfi((QOpenGLFunctions_4_0_Core*)self, buffer, drawbuffer, depth, stencil);
}

void q_openglfunctions_4_0_core_gl_clear_bufferfv(void* self, uint32_t buffer, int32_t drawbuffer, float* value) {
    QOpenGLFunctions_4_0_Core_GlClearBufferfv((QOpenGLFunctions_4_0_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_4_0_core_gl_clear_bufferuiv(void* self, uint32_t buffer, int32_t drawbuffer, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlClearBufferuiv((QOpenGLFunctions_4_0_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_4_0_core_gl_clear_bufferiv(void* self, uint32_t buffer, int32_t drawbuffer, int32_t* value) {
    QOpenGLFunctions_4_0_Core_GlClearBufferiv((QOpenGLFunctions_4_0_Core*)self, buffer, drawbuffer, value);
}

void q_openglfunctions_4_0_core_gl_get_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexParameterIuiv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetTexParameterIiv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_tex_parameter_iuiv(void* self, uint32_t target, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlTexParameterIuiv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_tex_parameter_iiv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlTexParameterIiv((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_uniform4uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform4uiv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform3uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform3uiv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform2uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform2uiv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform1uiv(void* self, int32_t location, int32_t count, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlUniform1uiv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform4ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2, uint32_t v3) {
    QOpenGLFunctions_4_0_Core_GlUniform4ui((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2, v3);
}

void q_openglfunctions_4_0_core_gl_uniform3ui(void* self, int32_t location, uint32_t v0, uint32_t v1, uint32_t v2) {
    QOpenGLFunctions_4_0_Core_GlUniform3ui((QOpenGLFunctions_4_0_Core*)self, location, v0, v1, v2);
}

void q_openglfunctions_4_0_core_gl_uniform2ui(void* self, int32_t location, uint32_t v0, uint32_t v1) {
    QOpenGLFunctions_4_0_Core_GlUniform2ui((QOpenGLFunctions_4_0_Core*)self, location, v0, v1);
}

void q_openglfunctions_4_0_core_gl_uniform1ui(void* self, int32_t location, uint32_t v0) {
    QOpenGLFunctions_4_0_Core_GlUniform1ui((QOpenGLFunctions_4_0_Core*)self, location, v0);
}

int32_t q_openglfunctions_4_0_core_gl_get_frag_data_location(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetFragDataLocation((QOpenGLFunctions_4_0_Core*)self, program, name);
}

void q_openglfunctions_4_0_core_gl_bind_frag_data_location(void* self, uint32_t program, uint32_t color, const char* name) {
    QOpenGLFunctions_4_0_Core_GlBindFragDataLocation((QOpenGLFunctions_4_0_Core*)self, program, color, name);
}

void q_openglfunctions_4_0_core_gl_get_uniformuiv(void* self, uint32_t program, int32_t location, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetUniformuiv((QOpenGLFunctions_4_0_Core*)self, program, location, params);
}

void q_openglfunctions_4_0_core_gl_get_vertex_attrib_iuiv(void* self, uint32_t index, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetVertexAttribIuiv((QOpenGLFunctions_4_0_Core*)self, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_vertex_attrib_iiv(void* self, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetVertexAttribIiv((QOpenGLFunctions_4_0_Core*)self, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_i_pointer(void* self, uint32_t index, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribIPointer((QOpenGLFunctions_4_0_Core*)self, index, size, type, stride, pointer);
}

void q_openglfunctions_4_0_core_gl_end_conditional_render(void* self) {
    QOpenGLFunctions_4_0_Core_GlEndConditionalRender((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_begin_conditional_render(void* self, uint32_t id, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlBeginConditionalRender((QOpenGLFunctions_4_0_Core*)self, id, mode);
}

void q_openglfunctions_4_0_core_gl_clamp_color(void* self, uint32_t target, uint32_t clamp) {
    QOpenGLFunctions_4_0_Core_GlClampColor((QOpenGLFunctions_4_0_Core*)self, target, clamp);
}

void q_openglfunctions_4_0_core_gl_bind_buffer_base(void* self, uint32_t target, uint32_t index, uint32_t buffer) {
    QOpenGLFunctions_4_0_Core_GlBindBufferBase((QOpenGLFunctions_4_0_Core*)self, target, index, buffer);
}

void q_openglfunctions_4_0_core_gl_bind_buffer_range(void* self, uint32_t target, uint32_t index, uint32_t buffer, intptr_t offset, intptr_t size) {
    QOpenGLFunctions_4_0_Core_GlBindBufferRange((QOpenGLFunctions_4_0_Core*)self, target, index, buffer, offset, size);
}

void q_openglfunctions_4_0_core_gl_end_transform_feedback(void* self) {
    QOpenGLFunctions_4_0_Core_GlEndTransformFeedback((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_begin_transform_feedback(void* self, uint32_t primitiveMode) {
    QOpenGLFunctions_4_0_Core_GlBeginTransformFeedback((QOpenGLFunctions_4_0_Core*)self, primitiveMode);
}

uint8_t q_openglfunctions_4_0_core_gl_is_enabledi(void* self, uint32_t target, uint32_t index) {
    return QOpenGLFunctions_4_0_Core_GlIsEnabledi((QOpenGLFunctions_4_0_Core*)self, target, index);
}

void q_openglfunctions_4_0_core_gl_disablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlDisablei((QOpenGLFunctions_4_0_Core*)self, target, index);
}

void q_openglfunctions_4_0_core_gl_enablei(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlEnablei((QOpenGLFunctions_4_0_Core*)self, target, index);
}

void q_openglfunctions_4_0_core_gl_get_integeri_v(void* self, uint32_t target, uint32_t index, int32_t* data) {
    QOpenGLFunctions_4_0_Core_GlGetIntegeriV((QOpenGLFunctions_4_0_Core*)self, target, index, data);
}

void q_openglfunctions_4_0_core_gl_get_booleani_v(void* self, uint32_t target, uint32_t index, uint8_t* data) {
    QOpenGLFunctions_4_0_Core_GlGetBooleaniV((QOpenGLFunctions_4_0_Core*)self, target, index, data);
}

void q_openglfunctions_4_0_core_gl_color_maski(void* self, uint32_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    QOpenGLFunctions_4_0_Core_GlColorMaski((QOpenGLFunctions_4_0_Core*)self, index, r, g, b, a);
}

void q_openglfunctions_4_0_core_gl_copy_buffer_sub_data(void* self, uint32_t readTarget, uint32_t writeTarget, intptr_t readOffset, intptr_t writeOffset, intptr_t size) {
    QOpenGLFunctions_4_0_Core_GlCopyBufferSubData((QOpenGLFunctions_4_0_Core*)self, readTarget, writeTarget, readOffset, writeOffset, size);
}

void q_openglfunctions_4_0_core_gl_uniform_block_binding(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t uniformBlockBinding) {
    QOpenGLFunctions_4_0_Core_GlUniformBlockBinding((QOpenGLFunctions_4_0_Core*)self, program, uniformBlockIndex, uniformBlockBinding);
}

void q_openglfunctions_4_0_core_gl_get_active_uniform_block_name(void* self, uint32_t program, uint32_t uniformBlockIndex, int32_t bufSize, int32_t* length, char* uniformBlockName) {
    QOpenGLFunctions_4_0_Core_GlGetActiveUniformBlockName((QOpenGLFunctions_4_0_Core*)self, program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void q_openglfunctions_4_0_core_gl_get_active_uniform_blockiv(void* self, uint32_t program, uint32_t uniformBlockIndex, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetActiveUniformBlockiv((QOpenGLFunctions_4_0_Core*)self, program, uniformBlockIndex, pname, params);
}

uint32_t q_openglfunctions_4_0_core_gl_get_uniform_block_index(void* self, uint32_t program, const char* uniformBlockName) {
    return QOpenGLFunctions_4_0_Core_GlGetUniformBlockIndex((QOpenGLFunctions_4_0_Core*)self, program, uniformBlockName);
}

void q_openglfunctions_4_0_core_gl_get_active_uniform_name(void* self, uint32_t program, uint32_t uniformIndex, int32_t bufSize, int32_t* length, char* uniformName) {
    QOpenGLFunctions_4_0_Core_GlGetActiveUniformName((QOpenGLFunctions_4_0_Core*)self, program, uniformIndex, bufSize, length, uniformName);
}

void q_openglfunctions_4_0_core_gl_get_active_uniformsiv(void* self, uint32_t program, int32_t uniformCount, uint32_t* uniformIndices, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetActiveUniformsiv((QOpenGLFunctions_4_0_Core*)self, program, uniformCount, uniformIndices, pname, params);
}

void q_openglfunctions_4_0_core_gl_primitive_restart_index(void* self, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlPrimitiveRestartIndex((QOpenGLFunctions_4_0_Core*)self, index);
}

void q_openglfunctions_4_0_core_gl_tex_buffer(void* self, uint32_t target, uint32_t internalformat, uint32_t buffer) {
    QOpenGLFunctions_4_0_Core_GlTexBuffer((QOpenGLFunctions_4_0_Core*)self, target, internalformat, buffer);
}

void q_openglfunctions_4_0_core_gl_draw_elements_instanced(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount) {
    QOpenGLFunctions_4_0_Core_GlDrawElementsInstanced((QOpenGLFunctions_4_0_Core*)self, mode, count, type, indices, instancecount);
}

void q_openglfunctions_4_0_core_gl_draw_arrays_instanced(void* self, uint32_t mode, int32_t first, int32_t count, int32_t instancecount) {
    QOpenGLFunctions_4_0_Core_GlDrawArraysInstanced((QOpenGLFunctions_4_0_Core*)self, mode, first, count, instancecount);
}

void q_openglfunctions_4_0_core_gl_sample_maski(void* self, uint32_t index, uint32_t mask) {
    QOpenGLFunctions_4_0_Core_GlSampleMaski((QOpenGLFunctions_4_0_Core*)self, index, mask);
}

void q_openglfunctions_4_0_core_gl_get_multisamplefv(void* self, uint32_t pname, uint32_t index, float* val) {
    QOpenGLFunctions_4_0_Core_GlGetMultisamplefv((QOpenGLFunctions_4_0_Core*)self, pname, index, val);
}

void q_openglfunctions_4_0_core_gl_tex_image3_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, int32_t depth, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_4_0_Core_GlTexImage3DMultisample((QOpenGLFunctions_4_0_Core*)self, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

void q_openglfunctions_4_0_core_gl_tex_image2_d_multisample(void* self, uint32_t target, int32_t samples, int32_t internalformat, int32_t width, int32_t height, uint8_t fixedsamplelocations) {
    QOpenGLFunctions_4_0_Core_GlTexImage2DMultisample((QOpenGLFunctions_4_0_Core*)self, target, samples, internalformat, width, height, fixedsamplelocations);
}

void q_openglfunctions_4_0_core_gl_get_integer64v(void* self, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetInteger64v((QOpenGLFunctions_4_0_Core*)self, pname, params);
}

void q_openglfunctions_4_0_core_gl_provoking_vertex(void* self, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlProvokingVertex((QOpenGLFunctions_4_0_Core*)self, mode);
}

void q_openglfunctions_4_0_core_gl_draw_elements_instanced_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t instancecount, int32_t basevertex) {
    QOpenGLFunctions_4_0_Core_GlDrawElementsInstancedBaseVertex((QOpenGLFunctions_4_0_Core*)self, mode, count, type, indices, instancecount, basevertex);
}

void q_openglfunctions_4_0_core_gl_draw_range_elements_base_vertex(void* self, uint32_t mode, uint32_t start, uint32_t end, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_4_0_Core_GlDrawRangeElementsBaseVertex((QOpenGLFunctions_4_0_Core*)self, mode, start, end, count, type, indices, basevertex);
}

void q_openglfunctions_4_0_core_gl_draw_elements_base_vertex(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices, int32_t basevertex) {
    QOpenGLFunctions_4_0_Core_GlDrawElementsBaseVertex((QOpenGLFunctions_4_0_Core*)self, mode, count, type, indices, basevertex);
}

void q_openglfunctions_4_0_core_gl_framebuffer_texture(void* self, uint32_t target, uint32_t attachment, uint32_t texture, int32_t level) {
    QOpenGLFunctions_4_0_Core_GlFramebufferTexture((QOpenGLFunctions_4_0_Core*)self, target, attachment, texture, level);
}

void q_openglfunctions_4_0_core_gl_get_buffer_parameteri64v(void* self, uint32_t target, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetBufferParameteri64v((QOpenGLFunctions_4_0_Core*)self, target, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_integer64i_v(void* self, uint32_t target, uint32_t index, int64_t* data) {
    QOpenGLFunctions_4_0_Core_GlGetInteger64iV((QOpenGLFunctions_4_0_Core*)self, target, index, data);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p4uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP4uiv((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p4ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP4ui((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p3uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP3uiv((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p3ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP3ui((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p2uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP2uiv((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p2ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP2ui((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p1uiv(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t* value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP1uiv((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_p1ui(void* self, uint32_t index, uint32_t type, uint8_t normalized, uint32_t value) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribP1ui((QOpenGLFunctions_4_0_Core*)self, index, type, normalized, value);
}

void q_openglfunctions_4_0_core_gl_get_query_objectui64v(void* self, uint32_t id, uint32_t pname, uint64_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryObjectui64v((QOpenGLFunctions_4_0_Core*)self, id, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_query_objecti64v(void* self, uint32_t id, uint32_t pname, int64_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryObjecti64v((QOpenGLFunctions_4_0_Core*)self, id, pname, params);
}

void q_openglfunctions_4_0_core_gl_query_counter(void* self, uint32_t id, uint32_t target) {
    QOpenGLFunctions_4_0_Core_GlQueryCounter((QOpenGLFunctions_4_0_Core*)self, id, target);
}

void q_openglfunctions_4_0_core_gl_get_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetSamplerParameterIuiv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* params) {
    QOpenGLFunctions_4_0_Core_GlGetSamplerParameterfv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetSamplerParameterIiv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, params);
}

void q_openglfunctions_4_0_core_gl_get_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetSamplerParameteriv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, params);
}

void q_openglfunctions_4_0_core_gl_sampler_parameter_iuiv(void* self, uint32_t sampler, uint32_t pname, uint32_t* param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameterIuiv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_sampler_parameter_iiv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameterIiv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_sampler_parameterfv(void* self, uint32_t sampler, uint32_t pname, float* param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameterfv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_sampler_parameterf(void* self, uint32_t sampler, uint32_t pname, float param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameterf((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_sampler_parameteriv(void* self, uint32_t sampler, uint32_t pname, int32_t* param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameteriv((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_sampler_parameteri(void* self, uint32_t sampler, uint32_t pname, int32_t param) {
    QOpenGLFunctions_4_0_Core_GlSamplerParameteri((QOpenGLFunctions_4_0_Core*)self, sampler, pname, param);
}

void q_openglfunctions_4_0_core_gl_bind_sampler(void* self, uint32_t unit, uint32_t sampler) {
    QOpenGLFunctions_4_0_Core_GlBindSampler((QOpenGLFunctions_4_0_Core*)self, unit, sampler);
}

uint8_t q_openglfunctions_4_0_core_gl_is_sampler(void* self, uint32_t sampler) {
    return QOpenGLFunctions_4_0_Core_GlIsSampler((QOpenGLFunctions_4_0_Core*)self, sampler);
}

void q_openglfunctions_4_0_core_gl_delete_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_4_0_Core_GlDeleteSamplers((QOpenGLFunctions_4_0_Core*)self, count, samplers);
}

void q_openglfunctions_4_0_core_gl_gen_samplers(void* self, int32_t count, uint32_t* samplers) {
    QOpenGLFunctions_4_0_Core_GlGenSamplers((QOpenGLFunctions_4_0_Core*)self, count, samplers);
}

int32_t q_openglfunctions_4_0_core_gl_get_frag_data_index(void* self, uint32_t program, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetFragDataIndex((QOpenGLFunctions_4_0_Core*)self, program, name);
}

void q_openglfunctions_4_0_core_gl_bind_frag_data_location_indexed(void* self, uint32_t program, uint32_t colorNumber, uint32_t index, const char* name) {
    QOpenGLFunctions_4_0_Core_GlBindFragDataLocationIndexed((QOpenGLFunctions_4_0_Core*)self, program, colorNumber, index, name);
}

void q_openglfunctions_4_0_core_gl_vertex_attrib_divisor(void* self, uint32_t index, uint32_t divisor) {
    QOpenGLFunctions_4_0_Core_GlVertexAttribDivisor((QOpenGLFunctions_4_0_Core*)self, index, divisor);
}

void q_openglfunctions_4_0_core_gl_get_query_indexediv(void* self, uint32_t target, uint32_t index, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetQueryIndexediv((QOpenGLFunctions_4_0_Core*)self, target, index, pname, params);
}

void q_openglfunctions_4_0_core_gl_end_query_indexed(void* self, uint32_t target, uint32_t index) {
    QOpenGLFunctions_4_0_Core_GlEndQueryIndexed((QOpenGLFunctions_4_0_Core*)self, target, index);
}

void q_openglfunctions_4_0_core_gl_begin_query_indexed(void* self, uint32_t target, uint32_t index, uint32_t id) {
    QOpenGLFunctions_4_0_Core_GlBeginQueryIndexed((QOpenGLFunctions_4_0_Core*)self, target, index, id);
}

void q_openglfunctions_4_0_core_gl_draw_transform_feedback_stream(void* self, uint32_t mode, uint32_t id, uint32_t stream) {
    QOpenGLFunctions_4_0_Core_GlDrawTransformFeedbackStream((QOpenGLFunctions_4_0_Core*)self, mode, id, stream);
}

void q_openglfunctions_4_0_core_gl_draw_transform_feedback(void* self, uint32_t mode, uint32_t id) {
    QOpenGLFunctions_4_0_Core_GlDrawTransformFeedback((QOpenGLFunctions_4_0_Core*)self, mode, id);
}

void q_openglfunctions_4_0_core_gl_resume_transform_feedback(void* self) {
    QOpenGLFunctions_4_0_Core_GlResumeTransformFeedback((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_gl_pause_transform_feedback(void* self) {
    QOpenGLFunctions_4_0_Core_GlPauseTransformFeedback((QOpenGLFunctions_4_0_Core*)self);
}

uint8_t q_openglfunctions_4_0_core_gl_is_transform_feedback(void* self, uint32_t id) {
    return QOpenGLFunctions_4_0_Core_GlIsTransformFeedback((QOpenGLFunctions_4_0_Core*)self, id);
}

void q_openglfunctions_4_0_core_gl_gen_transform_feedbacks(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_4_0_Core_GlGenTransformFeedbacks((QOpenGLFunctions_4_0_Core*)self, n, ids);
}

void q_openglfunctions_4_0_core_gl_delete_transform_feedbacks(void* self, int32_t n, uint32_t* ids) {
    QOpenGLFunctions_4_0_Core_GlDeleteTransformFeedbacks((QOpenGLFunctions_4_0_Core*)self, n, ids);
}

void q_openglfunctions_4_0_core_gl_bind_transform_feedback(void* self, uint32_t target, uint32_t id) {
    QOpenGLFunctions_4_0_Core_GlBindTransformFeedback((QOpenGLFunctions_4_0_Core*)self, target, id);
}

void q_openglfunctions_4_0_core_gl_patch_parameterfv(void* self, uint32_t pname, float* values) {
    QOpenGLFunctions_4_0_Core_GlPatchParameterfv((QOpenGLFunctions_4_0_Core*)self, pname, values);
}

void q_openglfunctions_4_0_core_gl_patch_parameteri(void* self, uint32_t pname, int32_t value) {
    QOpenGLFunctions_4_0_Core_GlPatchParameteri((QOpenGLFunctions_4_0_Core*)self, pname, value);
}

void q_openglfunctions_4_0_core_gl_get_program_stageiv(void* self, uint32_t program, uint32_t shadertype, uint32_t pname, int32_t* values) {
    QOpenGLFunctions_4_0_Core_GlGetProgramStageiv((QOpenGLFunctions_4_0_Core*)self, program, shadertype, pname, values);
}

void q_openglfunctions_4_0_core_gl_get_uniform_subroutineuiv(void* self, uint32_t shadertype, int32_t location, uint32_t* params) {
    QOpenGLFunctions_4_0_Core_GlGetUniformSubroutineuiv((QOpenGLFunctions_4_0_Core*)self, shadertype, location, params);
}

void q_openglfunctions_4_0_core_gl_uniform_subroutinesuiv(void* self, uint32_t shadertype, int32_t count, uint32_t* indices) {
    QOpenGLFunctions_4_0_Core_GlUniformSubroutinesuiv((QOpenGLFunctions_4_0_Core*)self, shadertype, count, indices);
}

void q_openglfunctions_4_0_core_gl_get_active_subroutine_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name) {
    QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineName((QOpenGLFunctions_4_0_Core*)self, program, shadertype, index, bufsize, length, name);
}

void q_openglfunctions_4_0_core_gl_get_active_subroutine_uniform_name(void* self, uint32_t program, uint32_t shadertype, uint32_t index, int32_t bufsize, int32_t* length, char* name) {
    QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineUniformName((QOpenGLFunctions_4_0_Core*)self, program, shadertype, index, bufsize, length, name);
}

void q_openglfunctions_4_0_core_gl_get_active_subroutine_uniformiv(void* self, uint32_t program, uint32_t shadertype, uint32_t index, uint32_t pname, int32_t* values) {
    QOpenGLFunctions_4_0_Core_GlGetActiveSubroutineUniformiv((QOpenGLFunctions_4_0_Core*)self, program, shadertype, index, pname, values);
}

uint32_t q_openglfunctions_4_0_core_gl_get_subroutine_index(void* self, uint32_t program, uint32_t shadertype, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetSubroutineIndex((QOpenGLFunctions_4_0_Core*)self, program, shadertype, name);
}

int32_t q_openglfunctions_4_0_core_gl_get_subroutine_uniform_location(void* self, uint32_t program, uint32_t shadertype, const char* name) {
    return QOpenGLFunctions_4_0_Core_GlGetSubroutineUniformLocation((QOpenGLFunctions_4_0_Core*)self, program, shadertype, name);
}

void q_openglfunctions_4_0_core_gl_get_uniformdv(void* self, uint32_t program, int32_t location, double* params) {
    QOpenGLFunctions_4_0_Core_GlGetUniformdv((QOpenGLFunctions_4_0_Core*)self, program, location, params);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4x3dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4x2dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3x4dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3x2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3x2dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2x4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2x4dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2x3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2x3dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix4dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix4dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix3dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix3dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform_matrix2dv(void* self, int32_t location, int32_t count, uint8_t transpose, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniformMatrix2dv((QOpenGLFunctions_4_0_Core*)self, location, count, transpose, value);
}

void q_openglfunctions_4_0_core_gl_uniform4dv(void* self, int32_t location, int32_t count, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniform4dv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform3dv(void* self, int32_t location, int32_t count, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniform3dv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform2dv(void* self, int32_t location, int32_t count, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniform2dv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform1dv(void* self, int32_t location, int32_t count, double* value) {
    QOpenGLFunctions_4_0_Core_GlUniform1dv((QOpenGLFunctions_4_0_Core*)self, location, count, value);
}

void q_openglfunctions_4_0_core_gl_uniform4d(void* self, int32_t location, double x, double y, double z, double w) {
    QOpenGLFunctions_4_0_Core_GlUniform4d((QOpenGLFunctions_4_0_Core*)self, location, x, y, z, w);
}

void q_openglfunctions_4_0_core_gl_uniform3d(void* self, int32_t location, double x, double y, double z) {
    QOpenGLFunctions_4_0_Core_GlUniform3d((QOpenGLFunctions_4_0_Core*)self, location, x, y, z);
}

void q_openglfunctions_4_0_core_gl_uniform2d(void* self, int32_t location, double x, double y) {
    QOpenGLFunctions_4_0_Core_GlUniform2d((QOpenGLFunctions_4_0_Core*)self, location, x, y);
}

void q_openglfunctions_4_0_core_gl_uniform1d(void* self, int32_t location, double x) {
    QOpenGLFunctions_4_0_Core_GlUniform1d((QOpenGLFunctions_4_0_Core*)self, location, x);
}

void q_openglfunctions_4_0_core_gl_draw_elements_indirect(void* self, uint32_t mode, uint32_t type, void* indirect) {
    QOpenGLFunctions_4_0_Core_GlDrawElementsIndirect((QOpenGLFunctions_4_0_Core*)self, mode, type, indirect);
}

void q_openglfunctions_4_0_core_gl_draw_arrays_indirect(void* self, uint32_t mode, void* indirect) {
    QOpenGLFunctions_4_0_Core_GlDrawArraysIndirect((QOpenGLFunctions_4_0_Core*)self, mode, indirect);
}

void q_openglfunctions_4_0_core_gl_blend_func_separatei(void* self, uint32_t buf, uint32_t srcRGB, uint32_t dstRGB, uint32_t srcAlpha, uint32_t dstAlpha) {
    QOpenGLFunctions_4_0_Core_GlBlendFuncSeparatei((QOpenGLFunctions_4_0_Core*)self, buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void q_openglfunctions_4_0_core_gl_blend_funci(void* self, uint32_t buf, uint32_t src, uint32_t dst) {
    QOpenGLFunctions_4_0_Core_GlBlendFunci((QOpenGLFunctions_4_0_Core*)self, buf, src, dst);
}

void q_openglfunctions_4_0_core_gl_blend_equation_separatei(void* self, uint32_t buf, uint32_t modeRGB, uint32_t modeAlpha) {
    QOpenGLFunctions_4_0_Core_GlBlendEquationSeparatei((QOpenGLFunctions_4_0_Core*)self, buf, modeRGB, modeAlpha);
}

void q_openglfunctions_4_0_core_gl_blend_equationi(void* self, uint32_t buf, uint32_t mode) {
    QOpenGLFunctions_4_0_Core_GlBlendEquationi((QOpenGLFunctions_4_0_Core*)self, buf, mode);
}

void q_openglfunctions_4_0_core_gl_min_sample_shading(void* self, float value) {
    QOpenGLFunctions_4_0_Core_GlMinSampleShading((QOpenGLFunctions_4_0_Core*)self, value);
}

bool q_openglfunctions_4_0_core_is_initialized(void* self) {
    return QOpenGLFunctions_4_0_Core_IsInitialized((QOpenGLFunctions_4_0_Core*)self);
}

bool q_openglfunctions_4_0_core_qbase_is_initialized(void* self) {
    return QOpenGLFunctions_4_0_Core_QBaseIsInitialized((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_4_0_Core_OnIsInitialized((QOpenGLFunctions_4_0_Core*)self, (intptr_t)callback);
}

void q_openglfunctions_4_0_core_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_4_0_Core_SetOwningContext((QOpenGLFunctions_4_0_Core*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_4_0_core_qbase_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_4_0_Core_QBaseSetOwningContext((QOpenGLFunctions_4_0_Core*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_4_0_core_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_4_0_Core_OnSetOwningContext((QOpenGLFunctions_4_0_Core*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_4_0_core_owning_context(void* self) {
    return QOpenGLFunctions_4_0_Core_OwningContext((QOpenGLFunctions_4_0_Core*)self);
}

QOpenGLContext* q_openglfunctions_4_0_core_qbase_owning_context(void* self) {
    return QOpenGLFunctions_4_0_Core_QBaseOwningContext((QOpenGLFunctions_4_0_Core*)self);
}

void q_openglfunctions_4_0_core_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_4_0_Core_OnOwningContext((QOpenGLFunctions_4_0_Core*)self, (intptr_t)callback);
}

void q_openglfunctions_4_0_core_delete(void* self) {
    QOpenGLFunctions_4_0_Core_Delete((QOpenGLFunctions_4_0_Core*)(self));
}
