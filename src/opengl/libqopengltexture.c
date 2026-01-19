#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "libqopenglpixeltransferoptions.hpp"
#include "libqopengltexture.hpp"
#include "libqopengltexture.h"

QOpenGLTexture* q_opengltexture_new(int32_t target) {
    return QOpenGLTexture_new(target);
}

QOpenGLTexture* q_opengltexture_new2(void* image) {
    return QOpenGLTexture_new2((QImage*)image);
}

QOpenGLTexture* q_opengltexture_new3(void* image, int32_t genMipMaps) {
    return QOpenGLTexture_new3((QImage*)image, genMipMaps);
}

int32_t q_opengltexture_target(void* self) {
    return QOpenGLTexture_Target((QOpenGLTexture*)self);
}

bool q_opengltexture_create(void* self) {
    return QOpenGLTexture_Create((QOpenGLTexture*)self);
}

void q_opengltexture_destroy(void* self) {
    QOpenGLTexture_Destroy((QOpenGLTexture*)self);
}

bool q_opengltexture_is_created(void* self) {
    return QOpenGLTexture_IsCreated((QOpenGLTexture*)self);
}

uint32_t q_opengltexture_texture_id(void* self) {
    return QOpenGLTexture_TextureId((QOpenGLTexture*)self);
}

void q_opengltexture_bind(void* self) {
    QOpenGLTexture_Bind((QOpenGLTexture*)self);
}

void q_opengltexture_bind2(void* self, uint32_t unit) {
    QOpenGLTexture_Bind2((QOpenGLTexture*)self, unit);
}

void q_opengltexture_release(void* self) {
    QOpenGLTexture_Release((QOpenGLTexture*)self);
}

void q_opengltexture_release2(void* self, uint32_t unit) {
    QOpenGLTexture_Release2((QOpenGLTexture*)self, unit);
}

bool q_opengltexture_is_bound(void* self) {
    return QOpenGLTexture_IsBound((QOpenGLTexture*)self);
}

bool q_opengltexture_is_bound2(void* self, uint32_t unit) {
    return QOpenGLTexture_IsBound2((QOpenGLTexture*)self, unit);
}

uint32_t q_opengltexture_bound_texture_id(int32_t target) {
    return QOpenGLTexture_BoundTextureId(target);
}

uint32_t q_opengltexture_bound_texture_id2(uint32_t unit, int32_t target) {
    return QOpenGLTexture_BoundTextureId2(unit, target);
}

void q_opengltexture_set_format(void* self, int32_t format) {
    QOpenGLTexture_SetFormat((QOpenGLTexture*)self, format);
}

int32_t q_opengltexture_format(void* self) {
    return QOpenGLTexture_Format((QOpenGLTexture*)self);
}

void q_opengltexture_set_size(void* self, int width) {
    QOpenGLTexture_SetSize((QOpenGLTexture*)self, width);
}

int32_t q_opengltexture_width(void* self) {
    return QOpenGLTexture_Width((QOpenGLTexture*)self);
}

int32_t q_opengltexture_height(void* self) {
    return QOpenGLTexture_Height((QOpenGLTexture*)self);
}

int32_t q_opengltexture_depth(void* self) {
    return QOpenGLTexture_Depth((QOpenGLTexture*)self);
}

void q_opengltexture_set_mip_levels(void* self, int levels) {
    QOpenGLTexture_SetMipLevels((QOpenGLTexture*)self, levels);
}

int32_t q_opengltexture_mip_levels(void* self) {
    return QOpenGLTexture_MipLevels((QOpenGLTexture*)self);
}

int32_t q_opengltexture_maximum_mip_levels(void* self) {
    return QOpenGLTexture_MaximumMipLevels((QOpenGLTexture*)self);
}

void q_opengltexture_set_layers(void* self, int layers) {
    QOpenGLTexture_SetLayers((QOpenGLTexture*)self, layers);
}

int32_t q_opengltexture_layers(void* self) {
    return QOpenGLTexture_Layers((QOpenGLTexture*)self);
}

int32_t q_opengltexture_faces(void* self) {
    return QOpenGLTexture_Faces((QOpenGLTexture*)self);
}

void q_opengltexture_set_samples(void* self, int samples) {
    QOpenGLTexture_SetSamples((QOpenGLTexture*)self, samples);
}

int32_t q_opengltexture_samples(void* self) {
    return QOpenGLTexture_Samples((QOpenGLTexture*)self);
}

void q_opengltexture_set_fixed_sample_positions(void* self, bool fixed) {
    QOpenGLTexture_SetFixedSamplePositions((QOpenGLTexture*)self, fixed);
}

bool q_opengltexture_is_fixed_sample_positions(void* self) {
    return QOpenGLTexture_IsFixedSamplePositions((QOpenGLTexture*)self);
}

void q_opengltexture_allocate_storage(void* self) {
    QOpenGLTexture_AllocateStorage((QOpenGLTexture*)self);
}

void q_opengltexture_allocate_storage2(void* self, int32_t pixelFormat, int32_t pixelType) {
    QOpenGLTexture_AllocateStorage2((QOpenGLTexture*)self, pixelFormat, pixelType);
}

bool q_opengltexture_is_storage_allocated(void* self) {
    return QOpenGLTexture_IsStorageAllocated((QOpenGLTexture*)self);
}

QOpenGLTexture* q_opengltexture_create_texture_view(void* self, int32_t target, int32_t viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer) {
    return QOpenGLTexture_CreateTextureView((QOpenGLTexture*)self, target, viewFormat, minimumMipmapLevel, maximumMipmapLevel, minimumLayer, maximumLayer);
}

bool q_opengltexture_is_texture_view(void* self) {
    return QOpenGLTexture_IsTextureView((QOpenGLTexture*)self);
}

void q_opengltexture_set_data(void* self, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData((QOpenGLTexture*)self, mipLevel, layer, cubeFace, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data2(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData2((QOpenGLTexture*)self, mipLevel, layer, layerCount, cubeFace, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data3(void* self, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData3((QOpenGLTexture*)self, mipLevel, layer, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data4(void* self, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData4((QOpenGLTexture*)self, mipLevel, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data5(void* self, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData5((QOpenGLTexture*)self, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data6(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData6((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data7(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData7((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data8(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData8((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data9(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData9((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, cubeFace, sourceFormat, sourceType, data);
}

void q_opengltexture_set_data10(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int layerCount, int32_t sourceFormat, int32_t sourceType, void* data) {
    QOpenGLTexture_SetData10((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, cubeFace, layerCount, sourceFormat, sourceType, data);
}

void q_opengltexture_set_compressed_data(void* self, int mipLevel, int layer, int32_t cubeFace, int dataSize, void* data) {
    QOpenGLTexture_SetCompressedData((QOpenGLTexture*)self, mipLevel, layer, cubeFace, dataSize, data);
}

void q_opengltexture_set_compressed_data2(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int dataSize, void* data) {
    QOpenGLTexture_SetCompressedData2((QOpenGLTexture*)self, mipLevel, layer, layerCount, cubeFace, dataSize, data);
}

void q_opengltexture_set_compressed_data3(void* self, int mipLevel, int layer, int dataSize, void* data) {
    QOpenGLTexture_SetCompressedData3((QOpenGLTexture*)self, mipLevel, layer, dataSize, data);
}

void q_opengltexture_set_compressed_data4(void* self, int mipLevel, int dataSize, void* data) {
    QOpenGLTexture_SetCompressedData4((QOpenGLTexture*)self, mipLevel, dataSize, data);
}

void q_opengltexture_set_compressed_data5(void* self, int dataSize, void* data) {
    QOpenGLTexture_SetCompressedData5((QOpenGLTexture*)self, dataSize, data);
}

void q_opengltexture_set_data11(void* self, void* image) {
    QOpenGLTexture_SetData11((QOpenGLTexture*)self, (QImage*)image);
}

bool q_opengltexture_has_feature(int32_t feature) {
    return QOpenGLTexture_HasFeature(feature);
}

void q_opengltexture_set_mip_base_level(void* self, int baseLevel) {
    QOpenGLTexture_SetMipBaseLevel((QOpenGLTexture*)self, baseLevel);
}

int32_t q_opengltexture_mip_base_level(void* self) {
    return QOpenGLTexture_MipBaseLevel((QOpenGLTexture*)self);
}

void q_opengltexture_set_mip_max_level(void* self, int maxLevel) {
    QOpenGLTexture_SetMipMaxLevel((QOpenGLTexture*)self, maxLevel);
}

int32_t q_opengltexture_mip_max_level(void* self) {
    return QOpenGLTexture_MipMaxLevel((QOpenGLTexture*)self);
}

void q_opengltexture_set_mip_level_range(void* self, int baseLevel, int maxLevel) {
    QOpenGLTexture_SetMipLevelRange((QOpenGLTexture*)self, baseLevel, maxLevel);
}

pair_int_int /* tuple of int and int */ q_opengltexture_mip_level_range(void* self) {
    return QOpenGLTexture_MipLevelRange((QOpenGLTexture*)self);
}

void q_opengltexture_set_auto_mip_map_generation_enabled(void* self, bool enabled) {
    QOpenGLTexture_SetAutoMipMapGenerationEnabled((QOpenGLTexture*)self, enabled);
}

bool q_opengltexture_is_auto_mip_map_generation_enabled(void* self) {
    return QOpenGLTexture_IsAutoMipMapGenerationEnabled((QOpenGLTexture*)self);
}

void q_opengltexture_generate_mip_maps(void* self) {
    QOpenGLTexture_GenerateMipMaps((QOpenGLTexture*)self);
}

void q_opengltexture_generate_mip_maps2(void* self, int baseLevel) {
    QOpenGLTexture_GenerateMipMaps2((QOpenGLTexture*)self, baseLevel);
}

void q_opengltexture_set_swizzle_mask(void* self, int32_t component, int32_t value) {
    QOpenGLTexture_SetSwizzleMask((QOpenGLTexture*)self, component, value);
}

void q_opengltexture_set_swizzle_mask2(void* self, int32_t r, int32_t g, int32_t b, int32_t a) {
    QOpenGLTexture_SetSwizzleMask2((QOpenGLTexture*)self, r, g, b, a);
}

int32_t q_opengltexture_swizzle_mask(void* self, int32_t component) {
    return QOpenGLTexture_SwizzleMask((QOpenGLTexture*)self, component);
}

void q_opengltexture_set_depth_stencil_mode(void* self, int32_t mode) {
    QOpenGLTexture_SetDepthStencilMode((QOpenGLTexture*)self, mode);
}

int32_t q_opengltexture_depth_stencil_mode(void* self) {
    return QOpenGLTexture_DepthStencilMode((QOpenGLTexture*)self);
}

void q_opengltexture_set_comparison_function(void* self, int32_t function) {
    QOpenGLTexture_SetComparisonFunction((QOpenGLTexture*)self, function);
}

int32_t q_opengltexture_comparison_function(void* self) {
    return QOpenGLTexture_ComparisonFunction((QOpenGLTexture*)self);
}

void q_opengltexture_set_comparison_mode(void* self, int32_t mode) {
    QOpenGLTexture_SetComparisonMode((QOpenGLTexture*)self, mode);
}

int32_t q_opengltexture_comparison_mode(void* self) {
    return QOpenGLTexture_ComparisonMode((QOpenGLTexture*)self);
}

void q_opengltexture_set_minification_filter(void* self, int32_t filter) {
    QOpenGLTexture_SetMinificationFilter((QOpenGLTexture*)self, filter);
}

int32_t q_opengltexture_minification_filter(void* self) {
    return QOpenGLTexture_MinificationFilter((QOpenGLTexture*)self);
}

void q_opengltexture_set_magnification_filter(void* self, int32_t filter) {
    QOpenGLTexture_SetMagnificationFilter((QOpenGLTexture*)self, filter);
}

int32_t q_opengltexture_magnification_filter(void* self) {
    return QOpenGLTexture_MagnificationFilter((QOpenGLTexture*)self);
}

void q_opengltexture_set_min_mag_filters(void* self, int32_t minificationFilter, int32_t magnificationFilter) {
    QOpenGLTexture_SetMinMagFilters((QOpenGLTexture*)self, minificationFilter, magnificationFilter);
}

pair_int32_t_int32_t /* tuple of enum QOpenGLTexture__Filter and enum QOpenGLTexture__Filter */ q_opengltexture_min_mag_filters(void* self) {
    return QOpenGLTexture_MinMagFilters((QOpenGLTexture*)self);
}

void q_opengltexture_set_maximum_anisotropy(void* self, float anisotropy) {
    QOpenGLTexture_SetMaximumAnisotropy((QOpenGLTexture*)self, anisotropy);
}

float q_opengltexture_maximum_anisotropy(void* self) {
    return QOpenGLTexture_MaximumAnisotropy((QOpenGLTexture*)self);
}

void q_opengltexture_set_wrap_mode(void* self, int32_t mode) {
    QOpenGLTexture_SetWrapMode((QOpenGLTexture*)self, mode);
}

void q_opengltexture_set_wrap_mode2(void* self, int32_t direction, int32_t mode) {
    QOpenGLTexture_SetWrapMode2((QOpenGLTexture*)self, direction, mode);
}

int32_t q_opengltexture_wrap_mode(void* self, int32_t direction) {
    return QOpenGLTexture_WrapMode((QOpenGLTexture*)self, direction);
}

void q_opengltexture_set_border_color(void* self, void* color) {
    QOpenGLTexture_SetBorderColor((QOpenGLTexture*)self, (QColor*)color);
}

void q_opengltexture_set_border_color2(void* self, float r, float g, float b, float a) {
    QOpenGLTexture_SetBorderColor2((QOpenGLTexture*)self, r, g, b, a);
}

void q_opengltexture_set_border_color3(void* self, int r, int g, int b, int a) {
    QOpenGLTexture_SetBorderColor3((QOpenGLTexture*)self, r, g, b, a);
}

void q_opengltexture_set_border_color4(void* self, uint32_t r, uint32_t g, uint32_t b, uint32_t a) {
    QOpenGLTexture_SetBorderColor4((QOpenGLTexture*)self, r, g, b, a);
}

QColor* q_opengltexture_border_color(void* self) {
    return QOpenGLTexture_BorderColor((QOpenGLTexture*)self);
}

void q_opengltexture_border_color2(void* self, float* border) {
    QOpenGLTexture_BorderColor2((QOpenGLTexture*)self, border);
}

void q_opengltexture_border_color3(void* self, int* border) {
    QOpenGLTexture_BorderColor3((QOpenGLTexture*)self, border);
}

void q_opengltexture_border_color4(void* self, uint32_t* border) {
    QOpenGLTexture_BorderColor4((QOpenGLTexture*)self, border);
}

void q_opengltexture_set_minimum_level_of_detail(void* self, float value) {
    QOpenGLTexture_SetMinimumLevelOfDetail((QOpenGLTexture*)self, value);
}

float q_opengltexture_minimum_level_of_detail(void* self) {
    return QOpenGLTexture_MinimumLevelOfDetail((QOpenGLTexture*)self);
}

void q_opengltexture_set_maximum_level_of_detail(void* self, float value) {
    QOpenGLTexture_SetMaximumLevelOfDetail((QOpenGLTexture*)self, value);
}

float q_opengltexture_maximum_level_of_detail(void* self) {
    return QOpenGLTexture_MaximumLevelOfDetail((QOpenGLTexture*)self);
}

void q_opengltexture_set_level_of_detail_range(void* self, float min, float max) {
    QOpenGLTexture_SetLevelOfDetailRange((QOpenGLTexture*)self, min, max);
}

pair_float_float /* tuple of float and float */ q_opengltexture_level_of_detail_range(void* self) {
    return QOpenGLTexture_LevelOfDetailRange((QOpenGLTexture*)self);
}

void q_opengltexture_set_levelof_detail_bias(void* self, float bias) {
    QOpenGLTexture_SetLevelofDetailBias((QOpenGLTexture*)self, bias);
}

float q_opengltexture_levelof_detail_bias(void* self) {
    return QOpenGLTexture_LevelofDetailBias((QOpenGLTexture*)self);
}

void q_opengltexture_bind22(void* self, uint32_t unit, int32_t reset) {
    QOpenGLTexture_Bind22((QOpenGLTexture*)self, unit, reset);
}

void q_opengltexture_release22(void* self, uint32_t unit, int32_t reset) {
    QOpenGLTexture_Release22((QOpenGLTexture*)self, unit, reset);
}

void q_opengltexture_set_size2(void* self, int width, int height) {
    QOpenGLTexture_SetSize2((QOpenGLTexture*)self, width, height);
}

void q_opengltexture_set_size3(void* self, int width, int height, int depth) {
    QOpenGLTexture_SetSize3((QOpenGLTexture*)self, width, height, depth);
}

void q_opengltexture_set_data72(void* self, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData72((QOpenGLTexture*)self, mipLevel, layer, cubeFace, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data82(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData82((QOpenGLTexture*)self, mipLevel, layer, layerCount, cubeFace, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data62(void* self, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData62((QOpenGLTexture*)self, mipLevel, layer, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data52(void* self, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData52((QOpenGLTexture*)self, mipLevel, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data42(void* self, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData42((QOpenGLTexture*)self, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data102(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData102((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data112(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData112((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data12(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData12((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data13(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData13((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, cubeFace, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data14(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int layerCount, int32_t sourceFormat, int32_t sourceType, void* data, void* options) {
    QOpenGLTexture_SetData14((QOpenGLTexture*)self, xOffset, yOffset, zOffset, width, height, depth, mipLevel, layer, cubeFace, layerCount, sourceFormat, sourceType, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_compressed_data6(void* self, int mipLevel, int layer, int32_t cubeFace, int dataSize, void* data, void* options) {
    QOpenGLTexture_SetCompressedData6((QOpenGLTexture*)self, mipLevel, layer, cubeFace, dataSize, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_compressed_data7(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int dataSize, void* data, void* options) {
    QOpenGLTexture_SetCompressedData7((QOpenGLTexture*)self, mipLevel, layer, layerCount, cubeFace, dataSize, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_compressed_data52(void* self, int mipLevel, int layer, int dataSize, void* data, void* options) {
    QOpenGLTexture_SetCompressedData52((QOpenGLTexture*)self, mipLevel, layer, dataSize, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_compressed_data42(void* self, int mipLevel, int dataSize, void* data, void* options) {
    QOpenGLTexture_SetCompressedData42((QOpenGLTexture*)self, mipLevel, dataSize, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_compressed_data32(void* self, int dataSize, void* data, void* options) {
    QOpenGLTexture_SetCompressedData32((QOpenGLTexture*)self, dataSize, data, (QOpenGLPixelTransferOptions*)options);
}

void q_opengltexture_set_data22(void* self, void* image, int32_t genMipMaps) {
    QOpenGLTexture_SetData22((QOpenGLTexture*)self, (QImage*)image, genMipMaps);
}

void q_opengltexture_generate_mip_maps22(void* self, int baseLevel, bool resetBaseLevel) {
    QOpenGLTexture_GenerateMipMaps22((QOpenGLTexture*)self, baseLevel, resetBaseLevel);
}

void q_opengltexture_delete(void* self) {
    QOpenGLTexture_Delete((QOpenGLTexture*)(self));
}
