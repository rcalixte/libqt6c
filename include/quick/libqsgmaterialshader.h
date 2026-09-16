#pragma once
#ifndef QUICK_LIBQSGMATERIALSHADER_H
#define QUICK_LIBQSGMATERIALSHADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html)

/// q_sgmaterialshader_new constructs a new QSGMaterialShader object.
///
QSGMaterialShader* q_sgmaterialshader_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
bool q_sgmaterialshader_update_uniform_data(void* self, void* state, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterialShader*
/// @param callback bool func(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterial* newMaterial, QSGMaterial* oldMaterial)
///
void q_sgmaterialshader_on_update_uniform_data(void* self, bool (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateUniformData)
///
/// Base class method implementation
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
bool q_sgmaterialshader_super_update_uniform_data(void* self, void* state, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param binding int
/// @param texture QSGTexture**
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
void q_sgmaterialshader_update_sampled_image(void* self, void* state, int binding, void** texture, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterialShader*
/// @param callback void func(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, int binding, QSGTexture** texture, QSGMaterial* newMaterial, QSGMaterial* oldMaterial)
///
void q_sgmaterialshader_on_update_sampled_image(void* self, void (*callback)(void*, void*, int, void**, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateSampledImage)
///
/// Base class method implementation
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param binding int
/// @param texture QSGTexture**
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
void q_sgmaterialshader_super_update_sampled_image(void* self, void* state, int binding, void** texture, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param ps QSGMaterialShader__GraphicsPipelineState*
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
bool q_sgmaterialshader_update_graphics_pipeline_state(void* self, void* state, void* ps, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterialShader*
/// @param callback bool func(QSGMaterialShader* self, QSGMaterialShader__RenderState* state, QSGMaterialShader__GraphicsPipelineState* ps, QSGMaterial* newMaterial, QSGMaterial* oldMaterial)
///
void q_sgmaterialshader_on_update_graphics_pipeline_state(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#updateGraphicsPipelineState)
///
/// Base class method implementation
///
/// @param self QSGMaterialShader*
/// @param state QSGMaterialShader__RenderState*
/// @param ps QSGMaterialShader__GraphicsPipelineState*
/// @param newMaterial QSGMaterial*
/// @param oldMaterial QSGMaterial*
///
bool q_sgmaterialshader_super_update_graphics_pipeline_state(void* self, void* state, void* ps, void* newMaterial, void* oldMaterial);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#flags)
///
/// @param self QSGMaterialShader*
///
/// @return flag of enum QSGMaterialShader__Flag
///
int32_t q_sgmaterialshader_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlag)
///
/// @param self QSGMaterialShader*
/// @param flags flag of enum QSGMaterialShader__Flag
///
void q_sgmaterialshader_set_flag(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlags)
///
/// @param self QSGMaterialShader*
/// @param flags flag of enum QSGMaterialShader__Flag
///
void q_sgmaterialshader_set_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#combinedImageSamplerCount)
///
/// @param self QSGMaterialShader*
/// @param binding int
///
int32_t q_sgmaterialshader_combined_image_sampler_count(void* self, int binding);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// @param self QSGMaterialShader*
/// @param stage enum QSGMaterialShader__Stage
/// @param filename const char*
///
void q_sgmaterialshader_set_shader_file_name(void* self, int32_t stage, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterialShader*
/// @param callback void func(QSGMaterialShader* self, enum QSGMaterialShader__Stage stage, const char* filename)
///
void q_sgmaterialshader_on_set_shader_file_name(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// Base class method implementation
///
/// @param self QSGMaterialShader*
/// @param stage enum QSGMaterialShader__Stage
/// @param filename const char*
///
void q_sgmaterialshader_super_set_shader_file_name(void* self, int32_t stage, const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// @param self QSGMaterialShader*
/// @param stage enum QSGMaterialShader__Stage
/// @param filename const char*
/// @param viewCount int
///
void q_sgmaterialshader_set_shader_file_name2(void* self, int32_t stage, const char* filename, int viewCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterialShader*
/// @param callback void func(QSGMaterialShader* self, enum QSGMaterialShader__Stage stage, const char* filename, int viewCount)
///
void q_sgmaterialshader_on_set_shader_file_name2(void* self, void (*callback)(void*, int32_t, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setShaderFileName)
///
/// Base class method implementation
///
/// @param self QSGMaterialShader*
/// @param stage enum QSGMaterialShader__Stage
/// @param filename const char*
/// @param viewCount int
///
void q_sgmaterialshader_super_set_shader_file_name2(void* self, int32_t stage, const char* filename, int viewCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#setFlag)
///
/// @param self QSGMaterialShader*
/// @param flags flag of enum QSGMaterialShader__Flag
/// @param on bool
///
void q_sgmaterialshader_set_flag2(void* self, int32_t flags, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#dtor.QSGMaterialShader)
///
/// Delete this object from C++ memory.
///
/// @param self QSGMaterialShader*
///
void q_sgmaterialshader_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html)

/// q_sgmaterialshader__renderstate_new constructs a new QSGMaterialShader::RenderState object.
///
QSGMaterialShader__RenderState* q_sgmaterialshader__renderstate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#dirtyStates)
///
/// @param self QSGMaterialShader__RenderState*
///
/// @return flag of enum QSGMaterialShader__RenderState__DirtyState
///
int32_t q_sgmaterialshader__renderstate_dirty_states(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#isMatrixDirty)
///
/// @param self QSGMaterialShader__RenderState*
///
bool q_sgmaterialshader__renderstate_is_matrix_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#isOpacityDirty)
///
/// @param self QSGMaterialShader__RenderState*
///
bool q_sgmaterialshader__renderstate_is_opacity_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#opacity)
///
/// @param self QSGMaterialShader__RenderState*
///
float q_sgmaterialshader__renderstate_opacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#combinedMatrix)
///
/// @param self QSGMaterialShader__RenderState*
///
QMatrix4x4* q_sgmaterialshader__renderstate_combined_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#combinedMatrix)
///
/// @param self QSGMaterialShader__RenderState*
/// @param index intptr_t
///
QMatrix4x4* q_sgmaterialshader__renderstate_combined_matrix2(void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#modelViewMatrix)
///
/// @param self QSGMaterialShader__RenderState*
///
QMatrix4x4* q_sgmaterialshader__renderstate_model_view_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrix)
///
/// @param self QSGMaterialShader__RenderState*
///
QMatrix4x4* q_sgmaterialshader__renderstate_projection_matrix(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrix)
///
/// @param self QSGMaterialShader__RenderState*
/// @param index intptr_t
///
QMatrix4x4* q_sgmaterialshader__renderstate_projection_matrix2(void* self, intptr_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#projectionMatrixCount)
///
/// @param self QSGMaterialShader__RenderState*
///
intptr_t q_sgmaterialshader__renderstate_projection_matrix_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#viewportRect)
///
/// @param self QSGMaterialShader__RenderState*
///
QRect* q_sgmaterialshader__renderstate_viewport_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#deviceRect)
///
/// @param self QSGMaterialShader__RenderState*
///
QRect* q_sgmaterialshader__renderstate_device_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#determinant)
///
/// @param self QSGMaterialShader__RenderState*
///
float q_sgmaterialshader__renderstate_determinant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#devicePixelRatio)
///
/// @param self QSGMaterialShader__RenderState*
///
float q_sgmaterialshader__renderstate_device_pixel_ratio(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-renderstate.html#uniformData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSGMaterialShader__RenderState*
///
char* q_sgmaterialshader__renderstate_uniform_data(void* self);

/// Delete this object from C++ memory.
///
/// @param self QSGMaterialShader__RenderState*
///
void q_sgmaterialshader__renderstate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html)

/// q_sgmaterialshader__graphicspipelinestate_new constructs a new QSGMaterialShader::GraphicsPipelineState object.
///
QSGMaterialShader__GraphicsPipelineState* q_sgmaterialshader__graphicspipelinestate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendEnable-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
bool q_sgmaterialshader__graphicspipelinestate_blend_enable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendEnable-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param blendEnable bool
///
void q_sgmaterialshader__graphicspipelinestate_set_blend_enable(void* self, bool blendEnable);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
int32_t q_sgmaterialshader__graphicspipelinestate_src_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param srcColor enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
void q_sgmaterialshader__graphicspipelinestate_set_src_color(void* self, int32_t srcColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
int32_t q_sgmaterialshader__graphicspipelinestate_dst_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param dstColor enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
void q_sgmaterialshader__graphicspipelinestate_set_dst_color(void* self, int32_t dstColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#colorWrite-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return flag of enum QSGMaterialShader__GraphicsPipelineState__ColorMaskComponent
///
int32_t q_sgmaterialshader__graphicspipelinestate_color_write(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#colorWrite-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param colorWrite flag of enum QSGMaterialShader__GraphicsPipelineState__ColorMaskComponent
///
void q_sgmaterialshader__graphicspipelinestate_set_color_write(void* self, int32_t colorWrite);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendConstant-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
QColor* q_sgmaterialshader__graphicspipelinestate_blend_constant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#blendConstant-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param blendConstant QColor*
///
void q_sgmaterialshader__graphicspipelinestate_set_blend_constant(void* self, void* blendConstant);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#cullMode-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__CullMode
///
int32_t q_sgmaterialshader__graphicspipelinestate_cull_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#cullMode-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param cullMode enum QSGMaterialShader__GraphicsPipelineState__CullMode
///
void q_sgmaterialshader__graphicspipelinestate_set_cull_mode(void* self, int32_t cullMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#polygonMode-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__PolygonMode
///
int32_t q_sgmaterialshader__graphicspipelinestate_polygon_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#polygonMode-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param polygonMode enum QSGMaterialShader__GraphicsPipelineState__PolygonMode
///
void q_sgmaterialshader__graphicspipelinestate_set_polygon_mode(void* self, int32_t polygonMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#separateBlendFactors-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
bool q_sgmaterialshader__graphicspipelinestate_separate_blend_factors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#separateBlendFactors-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param separateBlendFactors bool
///
void q_sgmaterialshader__graphicspipelinestate_set_separate_blend_factors(void* self, bool separateBlendFactors);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
int32_t q_sgmaterialshader__graphicspipelinestate_src_alpha(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#srcAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param srcAlpha enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
void q_sgmaterialshader__graphicspipelinestate_set_src_alpha(void* self, int32_t srcAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
int32_t q_sgmaterialshader__graphicspipelinestate_dst_alpha(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#dstAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param dstAlpha enum QSGMaterialShader__GraphicsPipelineState__BlendFactor
///
void q_sgmaterialshader__graphicspipelinestate_set_dst_alpha(void* self, int32_t dstAlpha);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendOp
///
int32_t q_sgmaterialshader__graphicspipelinestate_op_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opColor-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param opColor enum QSGMaterialShader__GraphicsPipelineState__BlendOp
///
void q_sgmaterialshader__graphicspipelinestate_set_op_color(void* self, int32_t opColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
/// @return enum QSGMaterialShader__GraphicsPipelineState__BlendOp
///
int32_t q_sgmaterialshader__graphicspipelinestate_op_alpha(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader-graphicspipelinestate.html#opAlpha-var)
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
/// @param opAlpha enum QSGMaterialShader__GraphicsPipelineState__BlendOp
///
void q_sgmaterialshader__graphicspipelinestate_set_op_alpha(void* self, int32_t opAlpha);

/// Delete this object from C++ memory.
///
/// @param self QSGMaterialShader__GraphicsPipelineState*
///
void q_sgmaterialshader__graphicspipelinestate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_FLAG_UPDATESGRAPHICSPIPELINESTATE = 1
} QSGMaterialShader__Flag;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_STAGE_VERTEXSTAGE = 0,
    QSGMATERIALSHADER_STAGE_FRAGMENTSTAGE = 1
} QSGMaterialShader__Stage;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_DIRTYMATRIX = 1,
    QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_DIRTYOPACITY = 2,
    QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_DIRTYCACHEDMATERIALDATA = 4,
    QSGMATERIALSHADER_RENDERSTATE_DIRTYSTATE_DIRTYALL = 65535
} QSGMaterialShader__RenderState__DirtyState;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ZERO = 0,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONE = 1,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_SRCCOLOR = 2,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSSRCCOLOR = 3,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_DSTCOLOR = 4,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSDSTCOLOR = 5,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_SRCALPHA = 6,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSSRCALPHA = 7,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_DSTALPHA = 8,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSDSTALPHA = 9,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_CONSTANTCOLOR = 10,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSCONSTANTCOLOR = 11,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_CONSTANTALPHA = 12,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSCONSTANTALPHA = 13,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_SRCALPHASATURATE = 14,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_SRC1COLOR = 15,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSSRC1COLOR = 16,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_SRC1ALPHA = 17,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDFACTOR_ONEMINUSSRC1ALPHA = 18
} QSGMaterialShader__GraphicsPipelineState__BlendFactor;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDOP_ADD = 0,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDOP_SUBTRACT = 1,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDOP_REVERSESUBTRACT = 2,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDOP_MIN = 3,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_BLENDOP_MAX = 4
} QSGMaterialShader__GraphicsPipelineState__BlendOp;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_COLORMASKCOMPONENT_R = 1,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_COLORMASKCOMPONENT_G = 2,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_COLORMASKCOMPONENT_B = 4,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_COLORMASKCOMPONENT_A = 8
} QSGMaterialShader__GraphicsPipelineState__ColorMaskComponent;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_CULLMODE_CULLNONE = 0,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_CULLMODE_CULLFRONT = 1,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_CULLMODE_CULLBACK = 2
} QSGMaterialShader__GraphicsPipelineState__CullMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialshader.html#public-types)

typedef enum {
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_POLYGONMODE_FILL = 0,
    QSGMATERIALSHADER_GRAPHICSPIPELINESTATE_POLYGONMODE_LINE = 1
} QSGMaterialShader__GraphicsPipelineState__PolygonMode;

#endif
