#include "../libqopenglcontext.hpp"
#include "libqopenglfunctions_1_1.hpp"
#include "libqopenglfunctions_1_1.h"

QOpenGLFunctions_1_1* q_openglfunctions_1_1_new() {
    return QOpenGLFunctions_1_1_new();
}

bool q_openglfunctions_1_1_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_1_1_InitializeOpenGLFunctions((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_on_initialize_open_g_l_functions(void* self, bool (*callback)()) {
    QOpenGLFunctions_1_1_OnInitializeOpenGLFunctions((QOpenGLFunctions_1_1*)self, (intptr_t)callback);
}

bool q_openglfunctions_1_1_super_initialize_open_g_l_functions(void* self) {
    return QOpenGLFunctions_1_1_SuperInitializeOpenGLFunctions((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_viewport(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_1_1_GlViewport((QOpenGLFunctions_1_1*)self, x, y, width, height);
}

void q_openglfunctions_1_1_gl_depth_range(void* self, double nearVal, double farVal) {
    QOpenGLFunctions_1_1_GlDepthRange((QOpenGLFunctions_1_1*)self, nearVal, farVal);
}

uint8_t q_openglfunctions_1_1_gl_is_enabled(void* self, uint32_t cap) {
    return QOpenGLFunctions_1_1_GlIsEnabled((QOpenGLFunctions_1_1*)self, cap);
}

void q_openglfunctions_1_1_gl_get_tex_level_parameteriv(void* self, uint32_t target, int32_t level, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetTexLevelParameteriv((QOpenGLFunctions_1_1*)self, target, level, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_level_parameterfv(void* self, uint32_t target, int32_t level, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetTexLevelParameterfv((QOpenGLFunctions_1_1*)self, target, level, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetTexParameteriv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetTexParameterfv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_image(void* self, uint32_t target, int32_t level, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlGetTexImage((QOpenGLFunctions_1_1*)self, target, level, format, type, pixels);
}

const uint8_t* q_openglfunctions_1_1_gl_get_string(void* self, uint32_t name) {
    return (uint8_t*)QOpenGLFunctions_1_1_GlGetString((QOpenGLFunctions_1_1*)self, name);
}

void q_openglfunctions_1_1_gl_get_integerv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetIntegerv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_get_floatv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetFloatv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_get_doublev(void* self, uint32_t pname, double* params) {
    QOpenGLFunctions_1_1_GlGetDoublev((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_get_booleanv(void* self, uint32_t pname, uint8_t* params) {
    QOpenGLFunctions_1_1_GlGetBooleanv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_read_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlReadPixels((QOpenGLFunctions_1_1*)self, x, y, width, height, format, type, pixels);
}

void q_openglfunctions_1_1_gl_read_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlReadBuffer((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_pixel_storei(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlPixelStorei((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_pixel_storef(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlPixelStoref((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_depth_func(void* self, uint32_t func) {
    QOpenGLFunctions_1_1_GlDepthFunc((QOpenGLFunctions_1_1*)self, func);
}

void q_openglfunctions_1_1_gl_stencil_op(void* self, uint32_t fail, uint32_t zfail, uint32_t zpass) {
    QOpenGLFunctions_1_1_GlStencilOp((QOpenGLFunctions_1_1*)self, fail, zfail, zpass);
}

void q_openglfunctions_1_1_gl_stencil_func(void* self, uint32_t func, int32_t ref, uint32_t mask) {
    QOpenGLFunctions_1_1_GlStencilFunc((QOpenGLFunctions_1_1*)self, func, ref, mask);
}

void q_openglfunctions_1_1_gl_logic_op(void* self, uint32_t opcode) {
    QOpenGLFunctions_1_1_GlLogicOp((QOpenGLFunctions_1_1*)self, opcode);
}

void q_openglfunctions_1_1_gl_blend_func(void* self, uint32_t sfactor, uint32_t dfactor) {
    QOpenGLFunctions_1_1_GlBlendFunc((QOpenGLFunctions_1_1*)self, sfactor, dfactor);
}

void q_openglfunctions_1_1_gl_flush(void* self) {
    QOpenGLFunctions_1_1_GlFlush((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_finish(void* self) {
    QOpenGLFunctions_1_1_GlFinish((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_enable(void* self, uint32_t cap) {
    QOpenGLFunctions_1_1_GlEnable((QOpenGLFunctions_1_1*)self, cap);
}

void q_openglfunctions_1_1_gl_disable(void* self, uint32_t cap) {
    QOpenGLFunctions_1_1_GlDisable((QOpenGLFunctions_1_1*)self, cap);
}

void q_openglfunctions_1_1_gl_depth_mask(void* self, uint8_t flag) {
    QOpenGLFunctions_1_1_GlDepthMask((QOpenGLFunctions_1_1*)self, flag);
}

void q_openglfunctions_1_1_gl_color_mask(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_1_1_GlColorMask((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_stencil_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_1_1_GlStencilMask((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_clear_depth(void* self, double depth) {
    QOpenGLFunctions_1_1_GlClearDepth((QOpenGLFunctions_1_1*)self, depth);
}

void q_openglfunctions_1_1_gl_clear_stencil(void* self, int32_t s) {
    QOpenGLFunctions_1_1_GlClearStencil((QOpenGLFunctions_1_1*)self, s);
}

void q_openglfunctions_1_1_gl_clear_color(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_1_1_GlClearColor((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_clear(void* self, uint32_t mask) {
    QOpenGLFunctions_1_1_GlClear((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_draw_buffer(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlDrawBuffer((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_tex_image2_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t height, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlTexImage2D((QOpenGLFunctions_1_1*)self, target, level, internalformat, width, height, border, format, type, pixels);
}

void q_openglfunctions_1_1_gl_tex_image1_d(void* self, uint32_t target, int32_t level, int32_t internalformat, int32_t width, int32_t border, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlTexImage1D((QOpenGLFunctions_1_1*)self, target, level, internalformat, width, border, format, type, pixels);
}

void q_openglfunctions_1_1_gl_tex_parameteriv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlTexParameteriv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_tex_parameteri(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlTexParameteri((QOpenGLFunctions_1_1*)self, target, pname, param);
}

void q_openglfunctions_1_1_gl_tex_parameterfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlTexParameterfv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_tex_parameterf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlTexParameterf((QOpenGLFunctions_1_1*)self, target, pname, param);
}

void q_openglfunctions_1_1_gl_scissor(void* self, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_1_1_GlScissor((QOpenGLFunctions_1_1*)self, x, y, width, height);
}

void q_openglfunctions_1_1_gl_polygon_mode(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_1_1_GlPolygonMode((QOpenGLFunctions_1_1*)self, face, mode);
}

void q_openglfunctions_1_1_gl_point_size(void* self, float size) {
    QOpenGLFunctions_1_1_GlPointSize((QOpenGLFunctions_1_1*)self, size);
}

void q_openglfunctions_1_1_gl_line_width(void* self, float width) {
    QOpenGLFunctions_1_1_GlLineWidth((QOpenGLFunctions_1_1*)self, width);
}

void q_openglfunctions_1_1_gl_hint(void* self, uint32_t target, uint32_t mode) {
    QOpenGLFunctions_1_1_GlHint((QOpenGLFunctions_1_1*)self, target, mode);
}

void q_openglfunctions_1_1_gl_front_face(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlFrontFace((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_cull_face(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlCullFace((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_indexubv(void* self, uint8_t* c) {
    QOpenGLFunctions_1_1_GlIndexubv((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexub(void* self, uint8_t c) {
    QOpenGLFunctions_1_1_GlIndexub((QOpenGLFunctions_1_1*)self, c);
}

uint8_t q_openglfunctions_1_1_gl_is_texture(void* self, uint32_t texture) {
    return QOpenGLFunctions_1_1_GlIsTexture((QOpenGLFunctions_1_1*)self, texture);
}

void q_openglfunctions_1_1_gl_gen_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_1_1_GlGenTextures((QOpenGLFunctions_1_1*)self, n, textures);
}

void q_openglfunctions_1_1_gl_delete_textures(void* self, int32_t n, uint32_t* textures) {
    QOpenGLFunctions_1_1_GlDeleteTextures((QOpenGLFunctions_1_1*)self, n, textures);
}

void q_openglfunctions_1_1_gl_bind_texture(void* self, uint32_t target, uint32_t texture) {
    QOpenGLFunctions_1_1_GlBindTexture((QOpenGLFunctions_1_1*)self, target, texture);
}

void q_openglfunctions_1_1_gl_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlTexSubImage2D((QOpenGLFunctions_1_1*)self, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void q_openglfunctions_1_1_gl_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t width, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlTexSubImage1D((QOpenGLFunctions_1_1*)self, target, level, xoffset, width, format, type, pixels);
}

void q_openglfunctions_1_1_gl_copy_tex_sub_image2_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t yoffset, int32_t x, int32_t y, int32_t width, int32_t height) {
    QOpenGLFunctions_1_1_GlCopyTexSubImage2D((QOpenGLFunctions_1_1*)self, target, level, xoffset, yoffset, x, y, width, height);
}

void q_openglfunctions_1_1_gl_copy_tex_sub_image1_d(void* self, uint32_t target, int32_t level, int32_t xoffset, int32_t x, int32_t y, int32_t width) {
    QOpenGLFunctions_1_1_GlCopyTexSubImage1D((QOpenGLFunctions_1_1*)self, target, level, xoffset, x, y, width);
}

void q_openglfunctions_1_1_gl_copy_tex_image2_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t height, int32_t border) {
    QOpenGLFunctions_1_1_GlCopyTexImage2D((QOpenGLFunctions_1_1*)self, target, level, internalformat, x, y, width, height, border);
}

void q_openglfunctions_1_1_gl_copy_tex_image1_d(void* self, uint32_t target, int32_t level, uint32_t internalformat, int32_t x, int32_t y, int32_t width, int32_t border) {
    QOpenGLFunctions_1_1_GlCopyTexImage1D((QOpenGLFunctions_1_1*)self, target, level, internalformat, x, y, width, border);
}

void q_openglfunctions_1_1_gl_polygon_offset(void* self, float factor, float units) {
    QOpenGLFunctions_1_1_GlPolygonOffset((QOpenGLFunctions_1_1*)self, factor, units);
}

void q_openglfunctions_1_1_gl_get_pointerv(void* self, uint32_t pname, void* params) {
    QOpenGLFunctions_1_1_GlGetPointerv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_draw_elements(void* self, uint32_t mode, int32_t count, uint32_t type, void* indices) {
    QOpenGLFunctions_1_1_GlDrawElements((QOpenGLFunctions_1_1*)self, mode, count, type, indices);
}

void q_openglfunctions_1_1_gl_draw_arrays(void* self, uint32_t mode, int32_t first, int32_t count) {
    QOpenGLFunctions_1_1_GlDrawArrays((QOpenGLFunctions_1_1*)self, mode, first, count);
}

void q_openglfunctions_1_1_gl_translatef(void* self, float x, float y, float z) {
    QOpenGLFunctions_1_1_GlTranslatef((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_translated(void* self, double x, double y, double z) {
    QOpenGLFunctions_1_1_GlTranslated((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_scalef(void* self, float x, float y, float z) {
    QOpenGLFunctions_1_1_GlScalef((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_scaled(void* self, double x, double y, double z) {
    QOpenGLFunctions_1_1_GlScaled((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_rotatef(void* self, float angle, float x, float y, float z) {
    QOpenGLFunctions_1_1_GlRotatef((QOpenGLFunctions_1_1*)self, angle, x, y, z);
}

void q_openglfunctions_1_1_gl_rotated(void* self, double angle, double x, double y, double z) {
    QOpenGLFunctions_1_1_GlRotated((QOpenGLFunctions_1_1*)self, angle, x, y, z);
}

void q_openglfunctions_1_1_gl_push_matrix(void* self) {
    QOpenGLFunctions_1_1_GlPushMatrix((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_pop_matrix(void* self) {
    QOpenGLFunctions_1_1_GlPopMatrix((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_ortho(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_1_1_GlOrtho((QOpenGLFunctions_1_1*)self, left, right, bottom, top, zNear, zFar);
}

void q_openglfunctions_1_1_gl_mult_matrixd(void* self, double* m) {
    QOpenGLFunctions_1_1_GlMultMatrixd((QOpenGLFunctions_1_1*)self, m);
}

void q_openglfunctions_1_1_gl_mult_matrixf(void* self, float* m) {
    QOpenGLFunctions_1_1_GlMultMatrixf((QOpenGLFunctions_1_1*)self, m);
}

void q_openglfunctions_1_1_gl_matrix_mode(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlMatrixMode((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_load_matrixd(void* self, double* m) {
    QOpenGLFunctions_1_1_GlLoadMatrixd((QOpenGLFunctions_1_1*)self, m);
}

void q_openglfunctions_1_1_gl_load_matrixf(void* self, float* m) {
    QOpenGLFunctions_1_1_GlLoadMatrixf((QOpenGLFunctions_1_1*)self, m);
}

void q_openglfunctions_1_1_gl_load_identity(void* self) {
    QOpenGLFunctions_1_1_GlLoadIdentity((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_frustum(void* self, double left, double right, double bottom, double top, double zNear, double zFar) {
    QOpenGLFunctions_1_1_GlFrustum((QOpenGLFunctions_1_1*)self, left, right, bottom, top, zNear, zFar);
}

uint8_t q_openglfunctions_1_1_gl_is_list(void* self, uint32_t list) {
    return QOpenGLFunctions_1_1_GlIsList((QOpenGLFunctions_1_1*)self, list);
}

void q_openglfunctions_1_1_gl_get_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetTexGeniv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetTexGenfv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_1_1_GlGetTexGendv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetTexEnviv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_get_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetTexEnvfv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_get_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_1_1_GlGetPolygonStipple((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_get_pixel_mapusv(void* self, uint32_t mapVal, uint16_t* values) {
    QOpenGLFunctions_1_1_GlGetPixelMapusv((QOpenGLFunctions_1_1*)self, mapVal, values);
}

void q_openglfunctions_1_1_gl_get_pixel_mapuiv(void* self, uint32_t mapVal, uint32_t* values) {
    QOpenGLFunctions_1_1_GlGetPixelMapuiv((QOpenGLFunctions_1_1*)self, mapVal, values);
}

void q_openglfunctions_1_1_gl_get_pixel_mapfv(void* self, uint32_t mapVal, float* values) {
    QOpenGLFunctions_1_1_GlGetPixelMapfv((QOpenGLFunctions_1_1*)self, mapVal, values);
}

void q_openglfunctions_1_1_gl_get_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetMaterialiv((QOpenGLFunctions_1_1*)self, face, pname, params);
}

void q_openglfunctions_1_1_gl_get_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetMaterialfv((QOpenGLFunctions_1_1*)self, face, pname, params);
}

void q_openglfunctions_1_1_gl_get_mapiv(void* self, uint32_t target, uint32_t query, int32_t* v) {
    QOpenGLFunctions_1_1_GlGetMapiv((QOpenGLFunctions_1_1*)self, target, query, v);
}

void q_openglfunctions_1_1_gl_get_mapfv(void* self, uint32_t target, uint32_t query, float* v) {
    QOpenGLFunctions_1_1_GlGetMapfv((QOpenGLFunctions_1_1*)self, target, query, v);
}

void q_openglfunctions_1_1_gl_get_mapdv(void* self, uint32_t target, uint32_t query, double* v) {
    QOpenGLFunctions_1_1_GlGetMapdv((QOpenGLFunctions_1_1*)self, target, query, v);
}

void q_openglfunctions_1_1_gl_get_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlGetLightiv((QOpenGLFunctions_1_1*)self, light, pname, params);
}

void q_openglfunctions_1_1_gl_get_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlGetLightfv((QOpenGLFunctions_1_1*)self, light, pname, params);
}

void q_openglfunctions_1_1_gl_get_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_1_1_GlGetClipPlane((QOpenGLFunctions_1_1*)self, plane, equation);
}

void q_openglfunctions_1_1_gl_draw_pixels(void* self, int32_t width, int32_t height, uint32_t format, uint32_t type, void* pixels) {
    QOpenGLFunctions_1_1_GlDrawPixels((QOpenGLFunctions_1_1*)self, width, height, format, type, pixels);
}

void q_openglfunctions_1_1_gl_copy_pixels(void* self, int32_t x, int32_t y, int32_t width, int32_t height, uint32_t type) {
    QOpenGLFunctions_1_1_GlCopyPixels((QOpenGLFunctions_1_1*)self, x, y, width, height, type);
}

void q_openglfunctions_1_1_gl_pixel_mapusv(void* self, uint32_t mapVal, int32_t mapsize, uint16_t* values) {
    QOpenGLFunctions_1_1_GlPixelMapusv((QOpenGLFunctions_1_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_1_1_gl_pixel_mapuiv(void* self, uint32_t mapVal, int32_t mapsize, uint32_t* values) {
    QOpenGLFunctions_1_1_GlPixelMapuiv((QOpenGLFunctions_1_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_1_1_gl_pixel_mapfv(void* self, uint32_t mapVal, int32_t mapsize, float* values) {
    QOpenGLFunctions_1_1_GlPixelMapfv((QOpenGLFunctions_1_1*)self, mapVal, mapsize, values);
}

void q_openglfunctions_1_1_gl_pixel_transferi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlPixelTransferi((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_pixel_transferf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlPixelTransferf((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_pixel_zoom(void* self, float xfactor, float yfactor) {
    QOpenGLFunctions_1_1_GlPixelZoom((QOpenGLFunctions_1_1*)self, xfactor, yfactor);
}

void q_openglfunctions_1_1_gl_alpha_func(void* self, uint32_t func, float ref) {
    QOpenGLFunctions_1_1_GlAlphaFunc((QOpenGLFunctions_1_1*)self, func, ref);
}

void q_openglfunctions_1_1_gl_eval_point2(void* self, int32_t i, int32_t j) {
    QOpenGLFunctions_1_1_GlEvalPoint2((QOpenGLFunctions_1_1*)self, i, j);
}

void q_openglfunctions_1_1_gl_eval_mesh2(void* self, uint32_t mode, int32_t i1, int32_t i2, int32_t j1, int32_t j2) {
    QOpenGLFunctions_1_1_GlEvalMesh2((QOpenGLFunctions_1_1*)self, mode, i1, i2, j1, j2);
}

void q_openglfunctions_1_1_gl_eval_point1(void* self, int32_t i) {
    QOpenGLFunctions_1_1_GlEvalPoint1((QOpenGLFunctions_1_1*)self, i);
}

void q_openglfunctions_1_1_gl_eval_mesh1(void* self, uint32_t mode, int32_t i1, int32_t i2) {
    QOpenGLFunctions_1_1_GlEvalMesh1((QOpenGLFunctions_1_1*)self, mode, i1, i2);
}

void q_openglfunctions_1_1_gl_eval_coord2fv(void* self, float* u) {
    QOpenGLFunctions_1_1_GlEvalCoord2fv((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_eval_coord2f(void* self, float u, float v) {
    QOpenGLFunctions_1_1_GlEvalCoord2f((QOpenGLFunctions_1_1*)self, u, v);
}

void q_openglfunctions_1_1_gl_eval_coord2dv(void* self, double* u) {
    QOpenGLFunctions_1_1_GlEvalCoord2dv((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_eval_coord2d(void* self, double u, double v) {
    QOpenGLFunctions_1_1_GlEvalCoord2d((QOpenGLFunctions_1_1*)self, u, v);
}

void q_openglfunctions_1_1_gl_eval_coord1fv(void* self, float* u) {
    QOpenGLFunctions_1_1_GlEvalCoord1fv((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_eval_coord1f(void* self, float u) {
    QOpenGLFunctions_1_1_GlEvalCoord1f((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_eval_coord1dv(void* self, double* u) {
    QOpenGLFunctions_1_1_GlEvalCoord1dv((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_eval_coord1d(void* self, double u) {
    QOpenGLFunctions_1_1_GlEvalCoord1d((QOpenGLFunctions_1_1*)self, u);
}

void q_openglfunctions_1_1_gl_map_grid2f(void* self, int32_t un, float u1, float u2, int32_t vn, float v1, float v2) {
    QOpenGLFunctions_1_1_GlMapGrid2f((QOpenGLFunctions_1_1*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_1_1_gl_map_grid2d(void* self, int32_t un, double u1, double u2, int32_t vn, double v1, double v2) {
    QOpenGLFunctions_1_1_GlMapGrid2d((QOpenGLFunctions_1_1*)self, un, u1, u2, vn, v1, v2);
}

void q_openglfunctions_1_1_gl_map_grid1f(void* self, int32_t un, float u1, float u2) {
    QOpenGLFunctions_1_1_GlMapGrid1f((QOpenGLFunctions_1_1*)self, un, u1, u2);
}

void q_openglfunctions_1_1_gl_map_grid1d(void* self, int32_t un, double u1, double u2) {
    QOpenGLFunctions_1_1_GlMapGrid1d((QOpenGLFunctions_1_1*)self, un, u1, u2);
}

void q_openglfunctions_1_1_gl_map2f(void* self, uint32_t target, float u1, float u2, int32_t ustride, int32_t uorder, float v1, float v2, int32_t vstride, int32_t vorder, float* points) {
    QOpenGLFunctions_1_1_GlMap2f((QOpenGLFunctions_1_1*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_1_1_gl_map2d(void* self, uint32_t target, double u1, double u2, int32_t ustride, int32_t uorder, double v1, double v2, int32_t vstride, int32_t vorder, double* points) {
    QOpenGLFunctions_1_1_GlMap2d((QOpenGLFunctions_1_1*)self, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void q_openglfunctions_1_1_gl_map1f(void* self, uint32_t target, float u1, float u2, int32_t stride, int32_t order, float* points) {
    QOpenGLFunctions_1_1_GlMap1f((QOpenGLFunctions_1_1*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_1_1_gl_map1d(void* self, uint32_t target, double u1, double u2, int32_t stride, int32_t order, double* points) {
    QOpenGLFunctions_1_1_GlMap1d((QOpenGLFunctions_1_1*)self, target, u1, u2, stride, order, points);
}

void q_openglfunctions_1_1_gl_push_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_1_1_GlPushAttrib((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_pop_attrib(void* self) {
    QOpenGLFunctions_1_1_GlPopAttrib((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_accum(void* self, uint32_t op, float value) {
    QOpenGLFunctions_1_1_GlAccum((QOpenGLFunctions_1_1*)self, op, value);
}

void q_openglfunctions_1_1_gl_index_mask(void* self, uint32_t mask) {
    QOpenGLFunctions_1_1_GlIndexMask((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_clear_index(void* self, float c) {
    QOpenGLFunctions_1_1_GlClearIndex((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_clear_accum(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_1_1_GlClearAccum((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_push_name(void* self, uint32_t name) {
    QOpenGLFunctions_1_1_GlPushName((QOpenGLFunctions_1_1*)self, name);
}

void q_openglfunctions_1_1_gl_pop_name(void* self) {
    QOpenGLFunctions_1_1_GlPopName((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_pass_through(void* self, float token) {
    QOpenGLFunctions_1_1_GlPassThrough((QOpenGLFunctions_1_1*)self, token);
}

void q_openglfunctions_1_1_gl_load_name(void* self, uint32_t name) {
    QOpenGLFunctions_1_1_GlLoadName((QOpenGLFunctions_1_1*)self, name);
}

void q_openglfunctions_1_1_gl_init_names(void* self) {
    QOpenGLFunctions_1_1_GlInitNames((QOpenGLFunctions_1_1*)self);
}

int32_t q_openglfunctions_1_1_gl_render_mode(void* self, uint32_t mode) {
    return QOpenGLFunctions_1_1_GlRenderMode((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_select_buffer(void* self, int32_t size, uint32_t* buffer) {
    QOpenGLFunctions_1_1_GlSelectBuffer((QOpenGLFunctions_1_1*)self, size, buffer);
}

void q_openglfunctions_1_1_gl_feedback_buffer(void* self, int32_t size, uint32_t type, float* buffer) {
    QOpenGLFunctions_1_1_GlFeedbackBuffer((QOpenGLFunctions_1_1*)self, size, type, buffer);
}

void q_openglfunctions_1_1_gl_tex_geniv(void* self, uint32_t coord, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlTexGeniv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_tex_geni(void* self, uint32_t coord, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlTexGeni((QOpenGLFunctions_1_1*)self, coord, pname, param);
}

void q_openglfunctions_1_1_gl_tex_genfv(void* self, uint32_t coord, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlTexGenfv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_tex_genf(void* self, uint32_t coord, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlTexGenf((QOpenGLFunctions_1_1*)self, coord, pname, param);
}

void q_openglfunctions_1_1_gl_tex_gendv(void* self, uint32_t coord, uint32_t pname, double* params) {
    QOpenGLFunctions_1_1_GlTexGendv((QOpenGLFunctions_1_1*)self, coord, pname, params);
}

void q_openglfunctions_1_1_gl_tex_gend(void* self, uint32_t coord, uint32_t pname, double param) {
    QOpenGLFunctions_1_1_GlTexGend((QOpenGLFunctions_1_1*)self, coord, pname, param);
}

void q_openglfunctions_1_1_gl_tex_enviv(void* self, uint32_t target, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlTexEnviv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_tex_envi(void* self, uint32_t target, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlTexEnvi((QOpenGLFunctions_1_1*)self, target, pname, param);
}

void q_openglfunctions_1_1_gl_tex_envfv(void* self, uint32_t target, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlTexEnvfv((QOpenGLFunctions_1_1*)self, target, pname, params);
}

void q_openglfunctions_1_1_gl_tex_envf(void* self, uint32_t target, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlTexEnvf((QOpenGLFunctions_1_1*)self, target, pname, param);
}

void q_openglfunctions_1_1_gl_shade_model(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlShadeModel((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_polygon_stipple(void* self, uint8_t* mask) {
    QOpenGLFunctions_1_1_GlPolygonStipple((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_materialiv(void* self, uint32_t face, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlMaterialiv((QOpenGLFunctions_1_1*)self, face, pname, params);
}

void q_openglfunctions_1_1_gl_materiali(void* self, uint32_t face, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlMateriali((QOpenGLFunctions_1_1*)self, face, pname, param);
}

void q_openglfunctions_1_1_gl_materialfv(void* self, uint32_t face, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlMaterialfv((QOpenGLFunctions_1_1*)self, face, pname, params);
}

void q_openglfunctions_1_1_gl_materialf(void* self, uint32_t face, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlMaterialf((QOpenGLFunctions_1_1*)self, face, pname, param);
}

void q_openglfunctions_1_1_gl_line_stipple(void* self, int32_t factor, uint16_t pattern) {
    QOpenGLFunctions_1_1_GlLineStipple((QOpenGLFunctions_1_1*)self, factor, pattern);
}

void q_openglfunctions_1_1_gl_light_modeliv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlLightModeliv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_light_modeli(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlLightModeli((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_light_modelfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlLightModelfv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_light_modelf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlLightModelf((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_lightiv(void* self, uint32_t light, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlLightiv((QOpenGLFunctions_1_1*)self, light, pname, params);
}

void q_openglfunctions_1_1_gl_lighti(void* self, uint32_t light, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlLighti((QOpenGLFunctions_1_1*)self, light, pname, param);
}

void q_openglfunctions_1_1_gl_lightfv(void* self, uint32_t light, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlLightfv((QOpenGLFunctions_1_1*)self, light, pname, params);
}

void q_openglfunctions_1_1_gl_lightf(void* self, uint32_t light, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlLightf((QOpenGLFunctions_1_1*)self, light, pname, param);
}

void q_openglfunctions_1_1_gl_fogiv(void* self, uint32_t pname, int32_t* params) {
    QOpenGLFunctions_1_1_GlFogiv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_fogi(void* self, uint32_t pname, int32_t param) {
    QOpenGLFunctions_1_1_GlFogi((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_fogfv(void* self, uint32_t pname, float* params) {
    QOpenGLFunctions_1_1_GlFogfv((QOpenGLFunctions_1_1*)self, pname, params);
}

void q_openglfunctions_1_1_gl_fogf(void* self, uint32_t pname, float param) {
    QOpenGLFunctions_1_1_GlFogf((QOpenGLFunctions_1_1*)self, pname, param);
}

void q_openglfunctions_1_1_gl_color_material(void* self, uint32_t face, uint32_t mode) {
    QOpenGLFunctions_1_1_GlColorMaterial((QOpenGLFunctions_1_1*)self, face, mode);
}

void q_openglfunctions_1_1_gl_clip_plane(void* self, uint32_t plane, double* equation) {
    QOpenGLFunctions_1_1_GlClipPlane((QOpenGLFunctions_1_1*)self, plane, equation);
}

void q_openglfunctions_1_1_gl_vertex4sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlVertex4sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_1_1_GlVertex4s((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_vertex4iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlVertex4iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_1_1_GlVertex4i((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_vertex4fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlVertex4fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_1_1_GlVertex4f((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_vertex4dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlVertex4dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_1_1_GlVertex4d((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_vertex3sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlVertex3sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_1_1_GlVertex3s((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_vertex3iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlVertex3iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_1_1_GlVertex3i((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_vertex3fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlVertex3fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_1_1_GlVertex3f((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_vertex3dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlVertex3dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_1_1_GlVertex3d((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_vertex2sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlVertex2sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_1_1_GlVertex2s((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_vertex2iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlVertex2iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_1_1_GlVertex2i((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_vertex2fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlVertex2fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex2f(void* self, float x, float y) {
    QOpenGLFunctions_1_1_GlVertex2f((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_vertex2dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlVertex2dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_vertex2d(void* self, double x, double y) {
    QOpenGLFunctions_1_1_GlVertex2d((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_tex_coord4sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord4sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord4s(void* self, int16_t s, int16_t t, int16_t r, int16_t q) {
    QOpenGLFunctions_1_1_GlTexCoord4s((QOpenGLFunctions_1_1*)self, s, t, r, q);
}

void q_openglfunctions_1_1_gl_tex_coord4iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord4iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord4i(void* self, int32_t s, int32_t t, int32_t r, int32_t q) {
    QOpenGLFunctions_1_1_GlTexCoord4i((QOpenGLFunctions_1_1*)self, s, t, r, q);
}

void q_openglfunctions_1_1_gl_tex_coord4fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlTexCoord4fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord4f(void* self, float s, float t, float r, float q) {
    QOpenGLFunctions_1_1_GlTexCoord4f((QOpenGLFunctions_1_1*)self, s, t, r, q);
}

void q_openglfunctions_1_1_gl_tex_coord4dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlTexCoord4dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord4d(void* self, double s, double t, double r, double q) {
    QOpenGLFunctions_1_1_GlTexCoord4d((QOpenGLFunctions_1_1*)self, s, t, r, q);
}

void q_openglfunctions_1_1_gl_tex_coord3sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord3sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord3s(void* self, int16_t s, int16_t t, int16_t r) {
    QOpenGLFunctions_1_1_GlTexCoord3s((QOpenGLFunctions_1_1*)self, s, t, r);
}

void q_openglfunctions_1_1_gl_tex_coord3iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord3iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord3i(void* self, int32_t s, int32_t t, int32_t r) {
    QOpenGLFunctions_1_1_GlTexCoord3i((QOpenGLFunctions_1_1*)self, s, t, r);
}

void q_openglfunctions_1_1_gl_tex_coord3fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlTexCoord3fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord3f(void* self, float s, float t, float r) {
    QOpenGLFunctions_1_1_GlTexCoord3f((QOpenGLFunctions_1_1*)self, s, t, r);
}

void q_openglfunctions_1_1_gl_tex_coord3dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlTexCoord3dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord3d(void* self, double s, double t, double r) {
    QOpenGLFunctions_1_1_GlTexCoord3d((QOpenGLFunctions_1_1*)self, s, t, r);
}

void q_openglfunctions_1_1_gl_tex_coord2sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord2sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord2s(void* self, int16_t s, int16_t t) {
    QOpenGLFunctions_1_1_GlTexCoord2s((QOpenGLFunctions_1_1*)self, s, t);
}

void q_openglfunctions_1_1_gl_tex_coord2iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord2iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord2i(void* self, int32_t s, int32_t t) {
    QOpenGLFunctions_1_1_GlTexCoord2i((QOpenGLFunctions_1_1*)self, s, t);
}

void q_openglfunctions_1_1_gl_tex_coord2fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlTexCoord2fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord2f(void* self, float s, float t) {
    QOpenGLFunctions_1_1_GlTexCoord2f((QOpenGLFunctions_1_1*)self, s, t);
}

void q_openglfunctions_1_1_gl_tex_coord2dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlTexCoord2dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord2d(void* self, double s, double t) {
    QOpenGLFunctions_1_1_GlTexCoord2d((QOpenGLFunctions_1_1*)self, s, t);
}

void q_openglfunctions_1_1_gl_tex_coord1sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord1sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord1s(void* self, int16_t s) {
    QOpenGLFunctions_1_1_GlTexCoord1s((QOpenGLFunctions_1_1*)self, s);
}

void q_openglfunctions_1_1_gl_tex_coord1iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlTexCoord1iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord1i(void* self, int32_t s) {
    QOpenGLFunctions_1_1_GlTexCoord1i((QOpenGLFunctions_1_1*)self, s);
}

void q_openglfunctions_1_1_gl_tex_coord1fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlTexCoord1fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord1f(void* self, float s) {
    QOpenGLFunctions_1_1_GlTexCoord1f((QOpenGLFunctions_1_1*)self, s);
}

void q_openglfunctions_1_1_gl_tex_coord1dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlTexCoord1dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_tex_coord1d(void* self, double s) {
    QOpenGLFunctions_1_1_GlTexCoord1d((QOpenGLFunctions_1_1*)self, s);
}

void q_openglfunctions_1_1_gl_rectsv(void* self, int16_t* v1, int16_t* v2) {
    QOpenGLFunctions_1_1_GlRectsv((QOpenGLFunctions_1_1*)self, v1, v2);
}

void q_openglfunctions_1_1_gl_rects(void* self, int16_t x1, int16_t y1, int16_t x2, int16_t y2) {
    QOpenGLFunctions_1_1_GlRects((QOpenGLFunctions_1_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_1_1_gl_rectiv(void* self, int32_t* v1, int32_t* v2) {
    QOpenGLFunctions_1_1_GlRectiv((QOpenGLFunctions_1_1*)self, v1, v2);
}

void q_openglfunctions_1_1_gl_recti(void* self, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
    QOpenGLFunctions_1_1_GlRecti((QOpenGLFunctions_1_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_1_1_gl_rectfv(void* self, float* v1, float* v2) {
    QOpenGLFunctions_1_1_GlRectfv((QOpenGLFunctions_1_1*)self, v1, v2);
}

void q_openglfunctions_1_1_gl_rectf(void* self, float x1, float y1, float x2, float y2) {
    QOpenGLFunctions_1_1_GlRectf((QOpenGLFunctions_1_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_1_1_gl_rectdv(void* self, double* v1, double* v2) {
    QOpenGLFunctions_1_1_GlRectdv((QOpenGLFunctions_1_1*)self, v1, v2);
}

void q_openglfunctions_1_1_gl_rectd(void* self, double x1, double y1, double x2, double y2) {
    QOpenGLFunctions_1_1_GlRectd((QOpenGLFunctions_1_1*)self, x1, y1, x2, y2);
}

void q_openglfunctions_1_1_gl_raster_pos4sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos4sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos4s(void* self, int16_t x, int16_t y, int16_t z, int16_t w) {
    QOpenGLFunctions_1_1_GlRasterPos4s((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_raster_pos4iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos4iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos4i(void* self, int32_t x, int32_t y, int32_t z, int32_t w) {
    QOpenGLFunctions_1_1_GlRasterPos4i((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_raster_pos4fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlRasterPos4fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos4f(void* self, float x, float y, float z, float w) {
    QOpenGLFunctions_1_1_GlRasterPos4f((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_raster_pos4dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlRasterPos4dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos4d(void* self, double x, double y, double z, double w) {
    QOpenGLFunctions_1_1_GlRasterPos4d((QOpenGLFunctions_1_1*)self, x, y, z, w);
}

void q_openglfunctions_1_1_gl_raster_pos3sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos3sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos3s(void* self, int16_t x, int16_t y, int16_t z) {
    QOpenGLFunctions_1_1_GlRasterPos3s((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_raster_pos3iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos3iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos3i(void* self, int32_t x, int32_t y, int32_t z) {
    QOpenGLFunctions_1_1_GlRasterPos3i((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_raster_pos3fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlRasterPos3fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos3f(void* self, float x, float y, float z) {
    QOpenGLFunctions_1_1_GlRasterPos3f((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_raster_pos3dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlRasterPos3dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos3d(void* self, double x, double y, double z) {
    QOpenGLFunctions_1_1_GlRasterPos3d((QOpenGLFunctions_1_1*)self, x, y, z);
}

void q_openglfunctions_1_1_gl_raster_pos2sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos2sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos2s(void* self, int16_t x, int16_t y) {
    QOpenGLFunctions_1_1_GlRasterPos2s((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_raster_pos2iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlRasterPos2iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos2i(void* self, int32_t x, int32_t y) {
    QOpenGLFunctions_1_1_GlRasterPos2i((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_raster_pos2fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlRasterPos2fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos2f(void* self, float x, float y) {
    QOpenGLFunctions_1_1_GlRasterPos2f((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_raster_pos2dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlRasterPos2dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_raster_pos2d(void* self, double x, double y) {
    QOpenGLFunctions_1_1_GlRasterPos2d((QOpenGLFunctions_1_1*)self, x, y);
}

void q_openglfunctions_1_1_gl_normal3sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlNormal3sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_normal3s(void* self, int16_t nx, int16_t ny, int16_t nz) {
    QOpenGLFunctions_1_1_GlNormal3s((QOpenGLFunctions_1_1*)self, nx, ny, nz);
}

void q_openglfunctions_1_1_gl_normal3iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlNormal3iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_normal3i(void* self, int32_t nx, int32_t ny, int32_t nz) {
    QOpenGLFunctions_1_1_GlNormal3i((QOpenGLFunctions_1_1*)self, nx, ny, nz);
}

void q_openglfunctions_1_1_gl_normal3fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlNormal3fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_normal3f(void* self, float nx, float ny, float nz) {
    QOpenGLFunctions_1_1_GlNormal3f((QOpenGLFunctions_1_1*)self, nx, ny, nz);
}

void q_openglfunctions_1_1_gl_normal3dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlNormal3dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_normal3d(void* self, double nx, double ny, double nz) {
    QOpenGLFunctions_1_1_GlNormal3d((QOpenGLFunctions_1_1*)self, nx, ny, nz);
}

void q_openglfunctions_1_1_gl_normal3bv(void* self, signed char* v) {
    QOpenGLFunctions_1_1_GlNormal3bv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_normal3b(void* self, signed char nx, signed char ny, signed char nz) {
    QOpenGLFunctions_1_1_GlNormal3b((QOpenGLFunctions_1_1*)self, nx, ny, nz);
}

void q_openglfunctions_1_1_gl_indexsv(void* self, int16_t* c) {
    QOpenGLFunctions_1_1_GlIndexsv((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexs(void* self, int16_t c) {
    QOpenGLFunctions_1_1_GlIndexs((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexiv(void* self, int32_t* c) {
    QOpenGLFunctions_1_1_GlIndexiv((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexi(void* self, int32_t c) {
    QOpenGLFunctions_1_1_GlIndexi((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexfv(void* self, float* c) {
    QOpenGLFunctions_1_1_GlIndexfv((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexf(void* self, float c) {
    QOpenGLFunctions_1_1_GlIndexf((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexdv(void* self, double* c) {
    QOpenGLFunctions_1_1_GlIndexdv((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_indexd(void* self, double c) {
    QOpenGLFunctions_1_1_GlIndexd((QOpenGLFunctions_1_1*)self, c);
}

void q_openglfunctions_1_1_gl_end(void* self) {
    QOpenGLFunctions_1_1_GlEnd((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_edge_flagv(void* self, uint8_t* flag) {
    QOpenGLFunctions_1_1_GlEdgeFlagv((QOpenGLFunctions_1_1*)self, flag);
}

void q_openglfunctions_1_1_gl_edge_flag(void* self, uint8_t flag) {
    QOpenGLFunctions_1_1_GlEdgeFlag((QOpenGLFunctions_1_1*)self, flag);
}

void q_openglfunctions_1_1_gl_color4usv(void* self, uint16_t* v) {
    QOpenGLFunctions_1_1_GlColor4usv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4us(void* self, uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha) {
    QOpenGLFunctions_1_1_GlColor4us((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_1_1_GlColor4uiv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4ui(void* self, uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha) {
    QOpenGLFunctions_1_1_GlColor4ui((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_1_1_GlColor4ubv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4ub(void* self, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    QOpenGLFunctions_1_1_GlColor4ub((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlColor4sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4s(void* self, int16_t red, int16_t green, int16_t blue, int16_t alpha) {
    QOpenGLFunctions_1_1_GlColor4s((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlColor4iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4i(void* self, int32_t red, int32_t green, int32_t blue, int32_t alpha) {
    QOpenGLFunctions_1_1_GlColor4i((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlColor4fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4f(void* self, float red, float green, float blue, float alpha) {
    QOpenGLFunctions_1_1_GlColor4f((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlColor4dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4d(void* self, double red, double green, double blue, double alpha) {
    QOpenGLFunctions_1_1_GlColor4d((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color4bv(void* self, signed char* v) {
    QOpenGLFunctions_1_1_GlColor4bv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color4b(void* self, signed char red, signed char green, signed char blue, signed char alpha) {
    QOpenGLFunctions_1_1_GlColor4b((QOpenGLFunctions_1_1*)self, red, green, blue, alpha);
}

void q_openglfunctions_1_1_gl_color3usv(void* self, uint16_t* v) {
    QOpenGLFunctions_1_1_GlColor3usv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3us(void* self, uint16_t red, uint16_t green, uint16_t blue) {
    QOpenGLFunctions_1_1_GlColor3us((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3uiv(void* self, uint32_t* v) {
    QOpenGLFunctions_1_1_GlColor3uiv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3ui(void* self, uint32_t red, uint32_t green, uint32_t blue) {
    QOpenGLFunctions_1_1_GlColor3ui((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3ubv(void* self, uint8_t* v) {
    QOpenGLFunctions_1_1_GlColor3ubv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3ub(void* self, uint8_t red, uint8_t green, uint8_t blue) {
    QOpenGLFunctions_1_1_GlColor3ub((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3sv(void* self, int16_t* v) {
    QOpenGLFunctions_1_1_GlColor3sv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3s(void* self, int16_t red, int16_t green, int16_t blue) {
    QOpenGLFunctions_1_1_GlColor3s((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3iv(void* self, int32_t* v) {
    QOpenGLFunctions_1_1_GlColor3iv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3i(void* self, int32_t red, int32_t green, int32_t blue) {
    QOpenGLFunctions_1_1_GlColor3i((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3fv(void* self, float* v) {
    QOpenGLFunctions_1_1_GlColor3fv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3f(void* self, float red, float green, float blue) {
    QOpenGLFunctions_1_1_GlColor3f((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3dv(void* self, double* v) {
    QOpenGLFunctions_1_1_GlColor3dv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3d(void* self, double red, double green, double blue) {
    QOpenGLFunctions_1_1_GlColor3d((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_color3bv(void* self, signed char* v) {
    QOpenGLFunctions_1_1_GlColor3bv((QOpenGLFunctions_1_1*)self, v);
}

void q_openglfunctions_1_1_gl_color3b(void* self, signed char red, signed char green, signed char blue) {
    QOpenGLFunctions_1_1_GlColor3b((QOpenGLFunctions_1_1*)self, red, green, blue);
}

void q_openglfunctions_1_1_gl_bitmap(void* self, int32_t width, int32_t height, float xorig, float yorig, float xmove, float ymove, uint8_t* bitmap) {
    QOpenGLFunctions_1_1_GlBitmap((QOpenGLFunctions_1_1*)self, width, height, xorig, yorig, xmove, ymove, bitmap);
}

void q_openglfunctions_1_1_gl_begin(void* self, uint32_t mode) {
    QOpenGLFunctions_1_1_GlBegin((QOpenGLFunctions_1_1*)self, mode);
}

void q_openglfunctions_1_1_gl_list_base(void* self, uint32_t base) {
    QOpenGLFunctions_1_1_GlListBase((QOpenGLFunctions_1_1*)self, base);
}

uint32_t q_openglfunctions_1_1_gl_gen_lists(void* self, int32_t range) {
    return QOpenGLFunctions_1_1_GlGenLists((QOpenGLFunctions_1_1*)self, range);
}

void q_openglfunctions_1_1_gl_delete_lists(void* self, uint32_t list, int32_t range) {
    QOpenGLFunctions_1_1_GlDeleteLists((QOpenGLFunctions_1_1*)self, list, range);
}

void q_openglfunctions_1_1_gl_call_lists(void* self, int32_t n, uint32_t type, void* lists) {
    QOpenGLFunctions_1_1_GlCallLists((QOpenGLFunctions_1_1*)self, n, type, lists);
}

void q_openglfunctions_1_1_gl_call_list(void* self, uint32_t list) {
    QOpenGLFunctions_1_1_GlCallList((QOpenGLFunctions_1_1*)self, list);
}

void q_openglfunctions_1_1_gl_end_list(void* self) {
    QOpenGLFunctions_1_1_GlEndList((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_new_list(void* self, uint32_t list, uint32_t mode) {
    QOpenGLFunctions_1_1_GlNewList((QOpenGLFunctions_1_1*)self, list, mode);
}

void q_openglfunctions_1_1_gl_push_client_attrib(void* self, uint32_t mask) {
    QOpenGLFunctions_1_1_GlPushClientAttrib((QOpenGLFunctions_1_1*)self, mask);
}

void q_openglfunctions_1_1_gl_pop_client_attrib(void* self) {
    QOpenGLFunctions_1_1_GlPopClientAttrib((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_gl_prioritize_textures(void* self, int32_t n, uint32_t* textures, float* priorities) {
    QOpenGLFunctions_1_1_GlPrioritizeTextures((QOpenGLFunctions_1_1*)self, n, textures, priorities);
}

uint8_t q_openglfunctions_1_1_gl_are_textures_resident(void* self, int32_t n, uint32_t* textures, uint8_t* residences) {
    return QOpenGLFunctions_1_1_GlAreTexturesResident((QOpenGLFunctions_1_1*)self, n, textures, residences);
}

void q_openglfunctions_1_1_gl_vertex_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlVertexPointer((QOpenGLFunctions_1_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_1_1_gl_tex_coord_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlTexCoordPointer((QOpenGLFunctions_1_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_1_1_gl_normal_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlNormalPointer((QOpenGLFunctions_1_1*)self, type, stride, pointer);
}

void q_openglfunctions_1_1_gl_interleaved_arrays(void* self, uint32_t format, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlInterleavedArrays((QOpenGLFunctions_1_1*)self, format, stride, pointer);
}

void q_openglfunctions_1_1_gl_index_pointer(void* self, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlIndexPointer((QOpenGLFunctions_1_1*)self, type, stride, pointer);
}

void q_openglfunctions_1_1_gl_enable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_1_1_GlEnableClientState((QOpenGLFunctions_1_1*)self, array);
}

void q_openglfunctions_1_1_gl_edge_flag_pointer(void* self, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlEdgeFlagPointer((QOpenGLFunctions_1_1*)self, stride, pointer);
}

void q_openglfunctions_1_1_gl_disable_client_state(void* self, uint32_t array) {
    QOpenGLFunctions_1_1_GlDisableClientState((QOpenGLFunctions_1_1*)self, array);
}

void q_openglfunctions_1_1_gl_color_pointer(void* self, int32_t size, uint32_t type, int32_t stride, void* pointer) {
    QOpenGLFunctions_1_1_GlColorPointer((QOpenGLFunctions_1_1*)self, size, type, stride, pointer);
}

void q_openglfunctions_1_1_gl_array_element(void* self, int32_t i) {
    QOpenGLFunctions_1_1_GlArrayElement((QOpenGLFunctions_1_1*)self, i);
}

bool q_openglfunctions_1_1_is_initialized(void* self) {
    return QOpenGLFunctions_1_1_IsInitialized((QOpenGLFunctions_1_1*)self);
}

bool q_openglfunctions_1_1_super_is_initialized(void* self) {
    return QOpenGLFunctions_1_1_SuperIsInitialized((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_on_is_initialized(void* self, bool (*callback)()) {
    QOpenGLFunctions_1_1_OnIsInitialized((QOpenGLFunctions_1_1*)self, (intptr_t)callback);
}

void q_openglfunctions_1_1_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_1_1_SetOwningContext((QOpenGLFunctions_1_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_1_1_super_set_owning_context(void* self, void* context) {
    QOpenGLFunctions_1_1_SuperSetOwningContext((QOpenGLFunctions_1_1*)self, (QOpenGLContext*)context);
}

void q_openglfunctions_1_1_on_set_owning_context(void* self, void (*callback)(void*, void*)) {
    QOpenGLFunctions_1_1_OnSetOwningContext((QOpenGLFunctions_1_1*)self, (intptr_t)callback);
}

QOpenGLContext* q_openglfunctions_1_1_owning_context(void* self) {
    return QOpenGLFunctions_1_1_OwningContext((QOpenGLFunctions_1_1*)self);
}

QOpenGLContext* q_openglfunctions_1_1_super_owning_context(void* self) {
    return QOpenGLFunctions_1_1_SuperOwningContext((QOpenGLFunctions_1_1*)self);
}

void q_openglfunctions_1_1_on_owning_context(void* self, QOpenGLContext* (*callback)()) {
    QOpenGLFunctions_1_1_OnOwningContext((QOpenGLFunctions_1_1*)self, (intptr_t)callback);
}

void q_openglfunctions_1_1_delete(void* self) {
    QOpenGLFunctions_1_1_Delete((QOpenGLFunctions_1_1*)(self));
}
