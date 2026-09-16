#include "../libqcolor.hpp"
#include "../libqmatrix4x4.hpp"
#include "../libqrect.hpp"
#include "libqsgmaterial.hpp"
#include "libqsgtexture.hpp"
#include "libqsgmaterialshader.hpp"
#include "libqsgmaterialshader.h"

QSGMaterialShader* q_sgmaterialshader_new() {
    return QSGMaterialShader_New();
}

bool q_sgmaterialshader_update_uniform_data(void* self, void* state, void* newMaterial, void* oldMaterial) {
    return QSGMaterialShader_UpdateUniformData((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

void q_sgmaterialshader_on_update_uniform_data(void* self, bool (*callback)(void*, void*, void*, void*)) {
    QSGMaterialShader_OnUpdateUniformData((QSGMaterialShader*)self, (intptr_t)callback);
}

bool q_sgmaterialshader_super_update_uniform_data(void* self, void* state, void* newMaterial, void* oldMaterial) {
    return QSGMaterialShader_SuperUpdateUniformData((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

void q_sgmaterialshader_update_sampled_image(void* self, void* state, int binding, void** texture, void* newMaterial, void* oldMaterial) {
    QSGMaterialShader_UpdateSampledImage((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, binding, (QSGTexture**)texture, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

void q_sgmaterialshader_on_update_sampled_image(void* self, void (*callback)(void*, void*, int, void**, void*, void*)) {
    QSGMaterialShader_OnUpdateSampledImage((QSGMaterialShader*)self, (intptr_t)callback);
}

void q_sgmaterialshader_super_update_sampled_image(void* self, void* state, int binding, void** texture, void* newMaterial, void* oldMaterial) {
    QSGMaterialShader_SuperUpdateSampledImage((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, binding, (QSGTexture**)texture, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

bool q_sgmaterialshader_update_graphics_pipeline_state(void* self, void* state, void* ps, void* newMaterial, void* oldMaterial) {
    return QSGMaterialShader_UpdateGraphicsPipelineState((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, (QSGMaterialShader__GraphicsPipelineState*)ps, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

void q_sgmaterialshader_on_update_graphics_pipeline_state(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    QSGMaterialShader_OnUpdateGraphicsPipelineState((QSGMaterialShader*)self, (intptr_t)callback);
}

bool q_sgmaterialshader_super_update_graphics_pipeline_state(void* self, void* state, void* ps, void* newMaterial, void* oldMaterial) {
    return QSGMaterialShader_SuperUpdateGraphicsPipelineState((QSGMaterialShader*)self, (QSGMaterialShader__RenderState*)state, (QSGMaterialShader__GraphicsPipelineState*)ps, (QSGMaterial*)newMaterial, (QSGMaterial*)oldMaterial);
}

int32_t q_sgmaterialshader_flags(void* self) {
    return QSGMaterialShader_Flags((QSGMaterialShader*)self);
}

void q_sgmaterialshader_set_flag(void* self, int32_t flags) {
    QSGMaterialShader_SetFlag((QSGMaterialShader*)self, flags);
}

void q_sgmaterialshader_set_flags(void* self, int32_t flags) {
    QSGMaterialShader_SetFlags((QSGMaterialShader*)self, flags);
}

int32_t q_sgmaterialshader_combined_image_sampler_count(void* self, int binding) {
    return QSGMaterialShader_CombinedImageSamplerCount((QSGMaterialShader*)self, binding);
}

void q_sgmaterialshader_set_shader_file_name(void* self, int32_t stage, const char* filename) {
    QSGMaterialShader_SetShaderFileName((QSGMaterialShader*)self, stage, qstring(filename));
}

void q_sgmaterialshader_on_set_shader_file_name(void* self, void (*callback)(void*, int32_t, const char*)) {
    QSGMaterialShader_OnSetShaderFileName((QSGMaterialShader*)self, (intptr_t)callback);
}

void q_sgmaterialshader_super_set_shader_file_name(void* self, int32_t stage, const char* filename) {
    QSGMaterialShader_SuperSetShaderFileName((QSGMaterialShader*)self, stage, qstring(filename));
}

void q_sgmaterialshader_set_shader_file_name2(void* self, int32_t stage, const char* filename, int viewCount) {
    QSGMaterialShader_SetShaderFileName2((QSGMaterialShader*)self, stage, qstring(filename), viewCount);
}

void q_sgmaterialshader_on_set_shader_file_name2(void* self, void (*callback)(void*, int32_t, const char*, int)) {
    QSGMaterialShader_OnSetShaderFileName2((QSGMaterialShader*)self, (intptr_t)callback);
}

void q_sgmaterialshader_super_set_shader_file_name2(void* self, int32_t stage, const char* filename, int viewCount) {
    QSGMaterialShader_SuperSetShaderFileName2((QSGMaterialShader*)self, stage, qstring(filename), viewCount);
}

void q_sgmaterialshader_set_flag2(void* self, int32_t flags, bool on) {
    QSGMaterialShader_SetFlag2((QSGMaterialShader*)self, flags, on);
}

void q_sgmaterialshader_delete(void* self) {
    QSGMaterialShader_Delete((QSGMaterialShader*)(self));
}

QSGMaterialShader__RenderState* q_sgmaterialshader__renderstate_new() {
    return QSGMaterialShader__RenderState_New();
}

int32_t q_sgmaterialshader__renderstate_dirty_states(void* self) {
    return QSGMaterialShader__RenderState_DirtyStates((QSGMaterialShader__RenderState*)self);
}

bool q_sgmaterialshader__renderstate_is_matrix_dirty(void* self) {
    return QSGMaterialShader__RenderState_IsMatrixDirty((QSGMaterialShader__RenderState*)self);
}

bool q_sgmaterialshader__renderstate_is_opacity_dirty(void* self) {
    return QSGMaterialShader__RenderState_IsOpacityDirty((QSGMaterialShader__RenderState*)self);
}

float q_sgmaterialshader__renderstate_opacity(void* self) {
    return QSGMaterialShader__RenderState_Opacity((QSGMaterialShader__RenderState*)self);
}

QMatrix4x4* q_sgmaterialshader__renderstate_combined_matrix(void* self) {
    return QSGMaterialShader__RenderState_CombinedMatrix((QSGMaterialShader__RenderState*)self);
}

QMatrix4x4* q_sgmaterialshader__renderstate_combined_matrix2(void* self, intptr_t index) {
    return QSGMaterialShader__RenderState_CombinedMatrix2((QSGMaterialShader__RenderState*)self, index);
}

QMatrix4x4* q_sgmaterialshader__renderstate_model_view_matrix(void* self) {
    return QSGMaterialShader__RenderState_ModelViewMatrix((QSGMaterialShader__RenderState*)self);
}

QMatrix4x4* q_sgmaterialshader__renderstate_projection_matrix(void* self) {
    return QSGMaterialShader__RenderState_ProjectionMatrix((QSGMaterialShader__RenderState*)self);
}

QMatrix4x4* q_sgmaterialshader__renderstate_projection_matrix2(void* self, intptr_t index) {
    return QSGMaterialShader__RenderState_ProjectionMatrix2((QSGMaterialShader__RenderState*)self, index);
}

intptr_t q_sgmaterialshader__renderstate_projection_matrix_count(void* self) {
    return QSGMaterialShader__RenderState_ProjectionMatrixCount((QSGMaterialShader__RenderState*)self);
}

QRect* q_sgmaterialshader__renderstate_viewport_rect(void* self) {
    return QSGMaterialShader__RenderState_ViewportRect((QSGMaterialShader__RenderState*)self);
}

QRect* q_sgmaterialshader__renderstate_device_rect(void* self) {
    return QSGMaterialShader__RenderState_DeviceRect((QSGMaterialShader__RenderState*)self);
}

float q_sgmaterialshader__renderstate_determinant(void* self) {
    return QSGMaterialShader__RenderState_Determinant((QSGMaterialShader__RenderState*)self);
}

float q_sgmaterialshader__renderstate_device_pixel_ratio(void* self) {
    return QSGMaterialShader__RenderState_DevicePixelRatio((QSGMaterialShader__RenderState*)self);
}

char* q_sgmaterialshader__renderstate_uniform_data(void* self) {
    libqt_string _str = QSGMaterialShader__RenderState_UniformData((QSGMaterialShader__RenderState*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sgmaterialshader__renderstate_delete(void* self) {
    QSGMaterialShader__RenderState_Delete((QSGMaterialShader__RenderState*)(self));
}

QSGMaterialShader__GraphicsPipelineState* q_sgmaterialshader__graphicspipelinestate_new() {
    return QSGMaterialShader__GraphicsPipelineState_New();
}

bool q_sgmaterialshader__graphicspipelinestate_blend_enable(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_BlendEnable((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_blend_enable(void* self, bool blendEnable) {
    QSGMaterialShader__GraphicsPipelineState_SetBlendEnable((QSGMaterialShader__GraphicsPipelineState*)self, blendEnable);
}

int32_t q_sgmaterialshader__graphicspipelinestate_src_color(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_SrcColor((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_src_color(void* self, int32_t srcColor) {
    QSGMaterialShader__GraphicsPipelineState_SetSrcColor((QSGMaterialShader__GraphicsPipelineState*)self, srcColor);
}

int32_t q_sgmaterialshader__graphicspipelinestate_dst_color(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_DstColor((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_dst_color(void* self, int32_t dstColor) {
    QSGMaterialShader__GraphicsPipelineState_SetDstColor((QSGMaterialShader__GraphicsPipelineState*)self, dstColor);
}

int32_t q_sgmaterialshader__graphicspipelinestate_color_write(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_ColorWrite((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_color_write(void* self, int32_t colorWrite) {
    QSGMaterialShader__GraphicsPipelineState_SetColorWrite((QSGMaterialShader__GraphicsPipelineState*)self, colorWrite);
}

QColor* q_sgmaterialshader__graphicspipelinestate_blend_constant(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_BlendConstant((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_blend_constant(void* self, void* blendConstant) {
    QSGMaterialShader__GraphicsPipelineState_SetBlendConstant((QSGMaterialShader__GraphicsPipelineState*)self, (QColor*)blendConstant);
}

int32_t q_sgmaterialshader__graphicspipelinestate_cull_mode(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_CullMode((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_cull_mode(void* self, int32_t cullMode) {
    QSGMaterialShader__GraphicsPipelineState_SetCullMode((QSGMaterialShader__GraphicsPipelineState*)self, cullMode);
}

int32_t q_sgmaterialshader__graphicspipelinestate_polygon_mode(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_PolygonMode((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_polygon_mode(void* self, int32_t polygonMode) {
    QSGMaterialShader__GraphicsPipelineState_SetPolygonMode((QSGMaterialShader__GraphicsPipelineState*)self, polygonMode);
}

bool q_sgmaterialshader__graphicspipelinestate_separate_blend_factors(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_SeparateBlendFactors((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_separate_blend_factors(void* self, bool separateBlendFactors) {
    QSGMaterialShader__GraphicsPipelineState_SetSeparateBlendFactors((QSGMaterialShader__GraphicsPipelineState*)self, separateBlendFactors);
}

int32_t q_sgmaterialshader__graphicspipelinestate_src_alpha(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_SrcAlpha((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_src_alpha(void* self, int32_t srcAlpha) {
    QSGMaterialShader__GraphicsPipelineState_SetSrcAlpha((QSGMaterialShader__GraphicsPipelineState*)self, srcAlpha);
}

int32_t q_sgmaterialshader__graphicspipelinestate_dst_alpha(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_DstAlpha((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_dst_alpha(void* self, int32_t dstAlpha) {
    QSGMaterialShader__GraphicsPipelineState_SetDstAlpha((QSGMaterialShader__GraphicsPipelineState*)self, dstAlpha);
}

int32_t q_sgmaterialshader__graphicspipelinestate_op_color(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_OpColor((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_op_color(void* self, int32_t opColor) {
    QSGMaterialShader__GraphicsPipelineState_SetOpColor((QSGMaterialShader__GraphicsPipelineState*)self, opColor);
}

int32_t q_sgmaterialshader__graphicspipelinestate_op_alpha(void* self) {
    return QSGMaterialShader__GraphicsPipelineState_OpAlpha((QSGMaterialShader__GraphicsPipelineState*)self);
}

void q_sgmaterialshader__graphicspipelinestate_set_op_alpha(void* self, int32_t opAlpha) {
    QSGMaterialShader__GraphicsPipelineState_SetOpAlpha((QSGMaterialShader__GraphicsPipelineState*)self, opAlpha);
}

void q_sgmaterialshader__graphicspipelinestate_delete(void* self) {
    QSGMaterialShader__GraphicsPipelineState_Delete((QSGMaterialShader__GraphicsPipelineState*)(self));
}
