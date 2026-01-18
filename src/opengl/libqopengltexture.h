#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLTEXTURE_H
#define SRC_OPENGL_QT6C_LIBQOPENGLTEXTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html)

/// q_opengltexture_new constructs a new QOpenGLTexture object.
///
/// @param target enum QOpenGLTexture__Target
///
QOpenGLTexture* q_opengltexture_new(int32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html)

/// q_opengltexture_new2 constructs a new QOpenGLTexture object.
///
/// @param image QImage*
///
QOpenGLTexture* q_opengltexture_new2(void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html)

/// q_opengltexture_new3 constructs a new QOpenGLTexture object.
///
/// @param image QImage*
/// @param genMipMaps enum QOpenGLTexture__MipMapGeneration
///
QOpenGLTexture* q_opengltexture_new3(void* image, int32_t genMipMaps);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#target)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__Target
///
int32_t q_opengltexture_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#create)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_create(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#destroy)
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_destroy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isCreated)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_created(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#textureId)
///
/// @param self QOpenGLTexture*
///
uint32_t q_opengltexture_texture_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_bind(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
///
/// @param self QOpenGLTexture*
/// @param unit uint32_t
///
void q_opengltexture_bind2(void* self, uint32_t unit);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_release(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
///
/// @param self QOpenGLTexture*
/// @param unit uint32_t
///
void q_opengltexture_release2(void* self, uint32_t unit);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_bound(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isBound)
///
/// @param self QOpenGLTexture*
/// @param unit uint32_t
///
bool q_opengltexture_is_bound2(void* self, uint32_t unit);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
///
/// @param target enum QOpenGLTexture__BindingTarget
///
uint32_t q_opengltexture_bound_texture_id(int32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#boundTextureId)
///
/// @param unit uint32_t
/// @param target enum QOpenGLTexture__BindingTarget
///
uint32_t q_opengltexture_bound_texture_id2(uint32_t unit, int32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setFormat)
///
/// @param self QOpenGLTexture*
/// @param format enum QOpenGLTexture__TextureFormat
///
void q_opengltexture_set_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#format)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__TextureFormat
///
int32_t q_opengltexture_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
///
/// @param self QOpenGLTexture*
/// @param width int
///
void q_opengltexture_set_size(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#width)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#height)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#depth)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_depth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevels)
///
/// @param self QOpenGLTexture*
/// @param levels int
///
void q_opengltexture_set_mip_levels(void* self, int levels);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipLevels)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_mip_levels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumMipLevels)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_maximum_mip_levels(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLayers)
///
/// @param self QOpenGLTexture*
/// @param layers int
///
void q_opengltexture_set_layers(void* self, int layers);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#layers)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_layers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#faces)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_faces(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSamples)
///
/// @param self QOpenGLTexture*
/// @param samples int
///
void q_opengltexture_set_samples(void* self, int samples);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#samples)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_samples(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setFixedSamplePositions)
///
/// @param self QOpenGLTexture*
/// @param fixed bool
///
void q_opengltexture_set_fixed_sample_positions(void* self, bool fixed);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isFixedSamplePositions)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_fixed_sample_positions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_allocate_storage(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#allocateStorage)
///
/// @param self QOpenGLTexture*
/// @param pixelFormat enum QOpenGLTexture__PixelFormat
/// @param pixelType enum QOpenGLTexture__PixelType
///
void q_opengltexture_allocate_storage2(void* self, int32_t pixelFormat, int32_t pixelType);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isStorageAllocated)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_storage_allocated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#createTextureView)
///
/// @param self QOpenGLTexture*
/// @param target enum QOpenGLTexture__Target
/// @param viewFormat enum QOpenGLTexture__TextureFormat
/// @param minimumMipmapLevel int
/// @param maximumMipmapLevel int
/// @param minimumLayer int
/// @param maximumLayer int
///
QOpenGLTexture* q_opengltexture_create_texture_view(void* self, int32_t target, int32_t viewFormat, int minimumMipmapLevel, int maximumMipmapLevel, int minimumLayer, int maximumLayer);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isTextureView)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_texture_view(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data(void* self, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param layerCount int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data2(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data3(void* self, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data4(void* self, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data5(void* self, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data6(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data7(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data8(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data9(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param layerCount int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
///
void q_opengltexture_set_data10(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int layerCount, int32_t sourceFormat, int32_t sourceType, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param dataSize int
/// @param data void*
///
void q_opengltexture_set_compressed_data(void* self, int mipLevel, int layer, int32_t cubeFace, int dataSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param layerCount int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param dataSize int
/// @param data void*
///
void q_opengltexture_set_compressed_data2(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int dataSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param dataSize int
/// @param data void*
///
void q_opengltexture_set_compressed_data3(void* self, int mipLevel, int layer, int dataSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param dataSize int
/// @param data void*
///
void q_opengltexture_set_compressed_data4(void* self, int mipLevel, int dataSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param dataSize int
/// @param data void*
///
void q_opengltexture_set_compressed_data5(void* self, int dataSize, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param image QImage*
///
void q_opengltexture_set_data11(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#hasFeature)
///
/// @param feature enum QOpenGLTexture__Feature
///
bool q_opengltexture_has_feature(int32_t feature);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipBaseLevel)
///
/// @param self QOpenGLTexture*
/// @param baseLevel int
///
void q_opengltexture_set_mip_base_level(void* self, int baseLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipBaseLevel)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_mip_base_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipMaxLevel)
///
/// @param self QOpenGLTexture*
/// @param maxLevel int
///
void q_opengltexture_set_mip_max_level(void* self, int maxLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipMaxLevel)
///
/// @param self QOpenGLTexture*
///
int32_t q_opengltexture_mip_max_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMipLevelRange)
///
/// @param self QOpenGLTexture*
/// @param baseLevel int
/// @param maxLevel int
///
void q_opengltexture_set_mip_level_range(void* self, int baseLevel, int maxLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#mipLevelRange)
///
/// @param self QOpenGLTexture*
///
/// @return libqt_pair tuple of int and int
///
libqt_pair q_opengltexture_mip_level_range(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setAutoMipMapGenerationEnabled)
///
/// @param self QOpenGLTexture*
/// @param enabled bool
///
void q_opengltexture_set_auto_mip_map_generation_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#isAutoMipMapGenerationEnabled)
///
/// @param self QOpenGLTexture*
///
bool q_opengltexture_is_auto_mip_map_generation_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_generate_mip_maps(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
///
/// @param self QOpenGLTexture*
/// @param baseLevel int
///
void q_opengltexture_generate_mip_maps2(void* self, int baseLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
///
/// @param self QOpenGLTexture*
/// @param component enum QOpenGLTexture__SwizzleComponent
/// @param value enum QOpenGLTexture__SwizzleValue
///
void q_opengltexture_set_swizzle_mask(void* self, int32_t component, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSwizzleMask)
///
/// @param self QOpenGLTexture*
/// @param r enum QOpenGLTexture__SwizzleValue
/// @param g enum QOpenGLTexture__SwizzleValue
/// @param b enum QOpenGLTexture__SwizzleValue
/// @param a enum QOpenGLTexture__SwizzleValue
///
void q_opengltexture_set_swizzle_mask2(void* self, int32_t r, int32_t g, int32_t b, int32_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#swizzleMask)
///
/// @param self QOpenGLTexture*
/// @param component enum QOpenGLTexture__SwizzleComponent
///
/// @return enum QOpenGLTexture__SwizzleValue
///
int32_t q_opengltexture_swizzle_mask(void* self, int32_t component);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setDepthStencilMode)
///
/// @param self QOpenGLTexture*
/// @param mode enum QOpenGLTexture__DepthStencilMode
///
void q_opengltexture_set_depth_stencil_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#depthStencilMode)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__DepthStencilMode
///
int32_t q_opengltexture_depth_stencil_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonFunction)
///
/// @param self QOpenGLTexture*
/// @param function enum QOpenGLTexture__ComparisonFunction
///
void q_opengltexture_set_comparison_function(void* self, int32_t function);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#comparisonFunction)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__ComparisonFunction
///
int32_t q_opengltexture_comparison_function(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setComparisonMode)
///
/// @param self QOpenGLTexture*
/// @param mode enum QOpenGLTexture__ComparisonMode
///
void q_opengltexture_set_comparison_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#comparisonMode)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__ComparisonMode
///
int32_t q_opengltexture_comparison_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinificationFilter)
///
/// @param self QOpenGLTexture*
/// @param filter enum QOpenGLTexture__Filter
///
void q_opengltexture_set_minification_filter(void* self, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minificationFilter)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__Filter
///
int32_t q_opengltexture_minification_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMagnificationFilter)
///
/// @param self QOpenGLTexture*
/// @param filter enum QOpenGLTexture__Filter
///
void q_opengltexture_set_magnification_filter(void* self, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#magnificationFilter)
///
/// @param self QOpenGLTexture*
///
/// @return enum QOpenGLTexture__Filter
///
int32_t q_opengltexture_magnification_filter(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinMagFilters)
///
/// @param self QOpenGLTexture*
/// @param minificationFilter enum QOpenGLTexture__Filter
/// @param magnificationFilter enum QOpenGLTexture__Filter
///
void q_opengltexture_set_min_mag_filters(void* self, int32_t minificationFilter, int32_t magnificationFilter);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minMagFilters)
///
/// @param self QOpenGLTexture*
///
/// @return libqt_pair tuple of enum QOpenGLTexture__Filter and enum QOpenGLTexture__Filter
///
libqt_pair q_opengltexture_min_mag_filters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumAnisotropy)
///
/// @param self QOpenGLTexture*
/// @param anisotropy float
///
void q_opengltexture_set_maximum_anisotropy(void* self, float anisotropy);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumAnisotropy)
///
/// @param self QOpenGLTexture*
///
float q_opengltexture_maximum_anisotropy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
///
/// @param self QOpenGLTexture*
/// @param mode enum QOpenGLTexture__WrapMode
///
void q_opengltexture_set_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setWrapMode)
///
/// @param self QOpenGLTexture*
/// @param direction enum QOpenGLTexture__CoordinateDirection
/// @param mode enum QOpenGLTexture__WrapMode
///
void q_opengltexture_set_wrap_mode2(void* self, int32_t direction, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#wrapMode)
///
/// @param self QOpenGLTexture*
/// @param direction enum QOpenGLTexture__CoordinateDirection
///
/// @return enum QOpenGLTexture__WrapMode
///
int32_t q_opengltexture_wrap_mode(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
///
/// @param self QOpenGLTexture*
/// @param color QColor*
///
void q_opengltexture_set_border_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
///
/// @param self QOpenGLTexture*
/// @param r float
/// @param g float
/// @param b float
/// @param a float
///
void q_opengltexture_set_border_color2(void* self, float r, float g, float b, float a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
///
/// @param self QOpenGLTexture*
/// @param r int
/// @param g int
/// @param b int
/// @param a int
///
void q_opengltexture_set_border_color3(void* self, int r, int g, int b, int a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setBorderColor)
///
/// @param self QOpenGLTexture*
/// @param r uint32_t
/// @param g uint32_t
/// @param b uint32_t
/// @param a uint32_t
///
void q_opengltexture_set_border_color4(void* self, uint32_t r, uint32_t g, uint32_t b, uint32_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
///
/// @param self QOpenGLTexture*
///
QColor* q_opengltexture_border_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
///
/// @param self QOpenGLTexture*
/// @param border float*
///
void q_opengltexture_border_color2(void* self, float* border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
///
/// @param self QOpenGLTexture*
/// @param border int*
///
void q_opengltexture_border_color3(void* self, int* border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#borderColor)
///
/// @param self QOpenGLTexture*
/// @param border uint32_t*
///
void q_opengltexture_border_color4(void* self, uint32_t* border);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMinimumLevelOfDetail)
///
/// @param self QOpenGLTexture*
/// @param value float
///
void q_opengltexture_set_minimum_level_of_detail(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#minimumLevelOfDetail)
///
/// @param self QOpenGLTexture*
///
float q_opengltexture_minimum_level_of_detail(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setMaximumLevelOfDetail)
///
/// @param self QOpenGLTexture*
/// @param value float
///
void q_opengltexture_set_maximum_level_of_detail(void* self, float value);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#maximumLevelOfDetail)
///
/// @param self QOpenGLTexture*
///
float q_opengltexture_maximum_level_of_detail(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLevelOfDetailRange)
///
/// @param self QOpenGLTexture*
/// @param min float
/// @param max float
///
void q_opengltexture_set_level_of_detail_range(void* self, float min, float max);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#levelOfDetailRange)
///
/// @param self QOpenGLTexture*
///
/// @return libqt_pair tuple of float and float
///
libqt_pair q_opengltexture_level_of_detail_range(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setLevelofDetailBias)
///
/// @param self QOpenGLTexture*
/// @param bias float
///
void q_opengltexture_set_levelof_detail_bias(void* self, float bias);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#levelofDetailBias)
///
/// @param self QOpenGLTexture*
///
float q_opengltexture_levelof_detail_bias(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#bind)
///
/// @param self QOpenGLTexture*
/// @param unit uint32_t
/// @param reset enum QOpenGLTexture__TextureUnitReset
///
void q_opengltexture_bind22(void* self, uint32_t unit, int32_t reset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#release)
///
/// @param self QOpenGLTexture*
/// @param unit uint32_t
/// @param reset enum QOpenGLTexture__TextureUnitReset
///
void q_opengltexture_release22(void* self, uint32_t unit, int32_t reset);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
///
/// @param self QOpenGLTexture*
/// @param width int
/// @param height int
///
void q_opengltexture_set_size2(void* self, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setSize)
///
/// @param self QOpenGLTexture*
/// @param width int
/// @param height int
/// @param depth int
///
void q_opengltexture_set_size3(void* self, int width, int height, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data72(void* self, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param layerCount int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data82(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data62(void* self, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data52(void* self, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data42(void* self, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data102(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data112(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data12(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data13(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param xOffset int
/// @param yOffset int
/// @param zOffset int
/// @param width int
/// @param height int
/// @param depth int
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param layerCount int
/// @param sourceFormat enum QOpenGLTexture__PixelFormat
/// @param sourceType enum QOpenGLTexture__PixelType
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_data14(void* self, int xOffset, int yOffset, int zOffset, int width, int height, int depth, int mipLevel, int layer, int32_t cubeFace, int layerCount, int32_t sourceFormat, int32_t sourceType, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param dataSize int
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_compressed_data6(void* self, int mipLevel, int layer, int32_t cubeFace, int dataSize, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param layerCount int
/// @param cubeFace enum QOpenGLTexture__CubeMapFace
/// @param dataSize int
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_compressed_data7(void* self, int mipLevel, int layer, int layerCount, int32_t cubeFace, int dataSize, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param layer int
/// @param dataSize int
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_compressed_data52(void* self, int mipLevel, int layer, int dataSize, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param mipLevel int
/// @param dataSize int
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_compressed_data42(void* self, int mipLevel, int dataSize, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setCompressedData)
///
/// @param self QOpenGLTexture*
/// @param dataSize int
/// @param data void*
/// @param options QOpenGLPixelTransferOptions*
///
void q_opengltexture_set_compressed_data32(void* self, int dataSize, void* data, void* options);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#setData)
///
/// @param self QOpenGLTexture*
/// @param image QImage*
/// @param genMipMaps enum QOpenGLTexture__MipMapGeneration
///
void q_opengltexture_set_data22(void* self, void* image, int32_t genMipMaps);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#generateMipMaps)
///
/// @param self QOpenGLTexture*
/// @param baseLevel int
/// @param resetBaseLevel bool
///
void q_opengltexture_generate_mip_maps22(void* self, int baseLevel, bool resetBaseLevel);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#dtor.QOpenGLTexture)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLTexture*
///
void q_opengltexture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_TARGET_TARGET1D = 3552,
    QOPENGLTEXTURE_TARGET_TARGET1DARRAY = 35864,
    QOPENGLTEXTURE_TARGET_TARGET2D = 3553,
    QOPENGLTEXTURE_TARGET_TARGET2DARRAY = 35866,
    QOPENGLTEXTURE_TARGET_TARGET3D = 32879,
    QOPENGLTEXTURE_TARGET_TARGETCUBEMAP = 34067,
    QOPENGLTEXTURE_TARGET_TARGETCUBEMAPARRAY = 36873,
    QOPENGLTEXTURE_TARGET_TARGET2DMULTISAMPLE = 37120,
    QOPENGLTEXTURE_TARGET_TARGET2DMULTISAMPLEARRAY = 37122,
    QOPENGLTEXTURE_TARGET_TARGETRECTANGLE = 34037,
    QOPENGLTEXTURE_TARGET_TARGETBUFFER = 35882
} QOpenGLTexture__Target;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET1D = 32872,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET1DARRAY = 35868,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET2D = 32873,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET2DARRAY = 35869,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET3D = 32874,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGETCUBEMAP = 34068,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGETCUBEMAPARRAY = 36874,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET2DMULTISAMPLE = 37124,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGET2DMULTISAMPLEARRAY = 37125,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGETRECTANGLE = 34038,
    QOPENGLTEXTURE_BINDINGTARGET_BINDINGTARGETBUFFER = 35884
} QOpenGLTexture__BindingTarget;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_MIPMAPGENERATION_GENERATEMIPMAPS = 0,
    QOPENGLTEXTURE_MIPMAPGENERATION_DONTGENERATEMIPMAPS = 1
} QOpenGLTexture__MipMapGeneration;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_TEXTUREUNITRESET_RESETTEXTUREUNIT = 0,
    QOPENGLTEXTURE_TEXTUREUNITRESET_DONTRESETTEXTUREUNIT = 1
} QOpenGLTexture__TextureUnitReset;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_TEXTUREFORMAT_NOFORMAT = 0,
    QOPENGLTEXTURE_TEXTUREFORMAT_R8_UNORM = 33321,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG8_UNORM = 33323,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8_UNORM = 32849,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA8_UNORM = 32856,
    QOPENGLTEXTURE_TEXTUREFORMAT_R16_UNORM = 33322,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG16_UNORM = 33324,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB16_UNORM = 32852,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA16_UNORM = 32859,
    QOPENGLTEXTURE_TEXTUREFORMAT_R8_SNORM = 36756,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG8_SNORM = 36757,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8_SNORM = 36758,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA8_SNORM = 36759,
    QOPENGLTEXTURE_TEXTUREFORMAT_R16_SNORM = 36760,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG16_SNORM = 36761,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB16_SNORM = 36762,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA16_SNORM = 36763,
    QOPENGLTEXTURE_TEXTUREFORMAT_R8U = 33330,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG8U = 33336,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8U = 36221,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA8U = 36220,
    QOPENGLTEXTURE_TEXTUREFORMAT_R16U = 33332,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG16U = 33338,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB16U = 36215,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA16U = 36214,
    QOPENGLTEXTURE_TEXTUREFORMAT_R32U = 33334,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG32U = 33340,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB32U = 36209,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA32U = 36208,
    QOPENGLTEXTURE_TEXTUREFORMAT_R8I = 33329,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG8I = 33335,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8I = 36239,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA8I = 36238,
    QOPENGLTEXTURE_TEXTUREFORMAT_R16I = 33331,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG16I = 33337,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB16I = 36233,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA16I = 36232,
    QOPENGLTEXTURE_TEXTUREFORMAT_R32I = 33333,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG32I = 33339,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB32I = 36227,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA32I = 36226,
    QOPENGLTEXTURE_TEXTUREFORMAT_R16F = 33325,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG16F = 33327,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB16F = 34843,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA16F = 34842,
    QOPENGLTEXTURE_TEXTUREFORMAT_R32F = 33326,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG32F = 33328,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB32F = 34837,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA32F = 34836,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB9E5 = 35901,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG11B10F = 35898,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG3B2 = 10768,
    QOPENGLTEXTURE_TEXTUREFORMAT_R5G6B5 = 36194,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB5A1 = 32855,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA4 = 32854,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB10A2 = 36975,
    QOPENGLTEXTURE_TEXTUREFORMAT_D16 = 33189,
    QOPENGLTEXTURE_TEXTUREFORMAT_D24 = 33190,
    QOPENGLTEXTURE_TEXTUREFORMAT_D24S8 = 35056,
    QOPENGLTEXTURE_TEXTUREFORMAT_D32 = 33191,
    QOPENGLTEXTURE_TEXTUREFORMAT_D32F = 36012,
    QOPENGLTEXTURE_TEXTUREFORMAT_D32FS8X24 = 36013,
    QOPENGLTEXTURE_TEXTUREFORMAT_S8 = 36168,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB_DXT1 = 33776,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_DXT1 = 33777,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_DXT3 = 33778,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_DXT5 = 33779,
    QOPENGLTEXTURE_TEXTUREFORMAT_R_ATI1N_UNORM = 36283,
    QOPENGLTEXTURE_TEXTUREFORMAT_R_ATI1N_SNORM = 36284,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG_ATI2N_UNORM = 36285,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG_ATI2N_SNORM = 36286,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB_BP_UNSIGNED_FLOAT = 36495,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB_BP_SIGNED_FLOAT = 36494,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB_BP_UNORM = 36492,
    QOPENGLTEXTURE_TEXTUREFORMAT_R11_EAC_UNORM = 37488,
    QOPENGLTEXTURE_TEXTUREFORMAT_R11_EAC_SNORM = 37489,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG11_EAC_UNORM = 37490,
    QOPENGLTEXTURE_TEXTUREFORMAT_RG11_EAC_SNORM = 37491,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8_ETC2 = 37492,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ETC2 = 37493,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 37494,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 37495,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA8_ETC2_EAC = 37496,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ETC2_EAC = 37497,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGB8_ETC1 = 36196,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_4X4 = 37808,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_5X4 = 37809,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_5X5 = 37810,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_6X5 = 37811,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_6X6 = 37812,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_8X5 = 37813,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_8X6 = 37814,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_8X8 = 37815,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_10X5 = 37816,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_10X6 = 37817,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_10X8 = 37818,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_10X10 = 37819,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_12X10 = 37820,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBA_ASTC_12X12 = 37821,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_4X4 = 37840,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_5X4 = 37841,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_5X5 = 37842,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_6X5 = 37843,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_6X6 = 37844,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_8X5 = 37845,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_8X6 = 37846,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_8X8 = 37847,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_10X5 = 37848,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_10X6 = 37849,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_10X8 = 37850,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_10X10 = 37851,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_12X10 = 37852,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8_ASTC_12X12 = 37853,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8 = 35905,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB8_ALPHA8 = 35907,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB_DXT1 = 35916,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB_ALPHA_DXT1 = 35917,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB_ALPHA_DXT3 = 35918,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB_ALPHA_DXT5 = 35919,
    QOPENGLTEXTURE_TEXTUREFORMAT_SRGB_BP_UNORM = 36493,
    QOPENGLTEXTURE_TEXTUREFORMAT_DEPTHFORMAT = 6402,
    QOPENGLTEXTURE_TEXTUREFORMAT_ALPHAFORMAT = 6406,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBFORMAT = 6407,
    QOPENGLTEXTURE_TEXTUREFORMAT_RGBAFORMAT = 6408,
    QOPENGLTEXTURE_TEXTUREFORMAT_LUMINANCEFORMAT = 6409,
    QOPENGLTEXTURE_TEXTUREFORMAT_LUMINANCEALPHAFORMAT = 6410
} QOpenGLTexture__TextureFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_NOFORMATCLASS = 0,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_128BIT = 1,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_96BIT = 2,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_64BIT = 3,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_48BIT = 4,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_32BIT = 5,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_24BIT = 6,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_16BIT = 7,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_8BIT = 8,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_RGTC1_R = 9,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_RGTC2_RG = 10,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_BPTC_UNORM = 11,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_BPTC_FLOAT = 12,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_S3TC_DXT1_RGB = 13,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_S3TC_DXT1_RGBA = 14,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_S3TC_DXT3_RGBA = 15,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_S3TC_DXT5_RGBA = 16,
    QOPENGLTEXTURE_TEXTUREFORMATCLASS_FORMATCLASS_UNIQUE = 17
} QOpenGLTexture__TextureFormatClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPPOSITIVEX = 34069,
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPNEGATIVEX = 34070,
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPPOSITIVEY = 34071,
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPNEGATIVEY = 34072,
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPPOSITIVEZ = 34073,
    QOPENGLTEXTURE_CUBEMAPFACE_CUBEMAPNEGATIVEZ = 34074
} QOpenGLTexture__CubeMapFace;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_PIXELFORMAT_NOSOURCEFORMAT = 0,
    QOPENGLTEXTURE_PIXELFORMAT_RED = 6403,
    QOPENGLTEXTURE_PIXELFORMAT_RG = 33319,
    QOPENGLTEXTURE_PIXELFORMAT_RGB = 6407,
    QOPENGLTEXTURE_PIXELFORMAT_BGR = 32992,
    QOPENGLTEXTURE_PIXELFORMAT_RGBA = 6408,
    QOPENGLTEXTURE_PIXELFORMAT_BGRA = 32993,
    QOPENGLTEXTURE_PIXELFORMAT_RED_INTEGER = 36244,
    QOPENGLTEXTURE_PIXELFORMAT_RG_INTEGER = 33320,
    QOPENGLTEXTURE_PIXELFORMAT_RGB_INTEGER = 36248,
    QOPENGLTEXTURE_PIXELFORMAT_BGR_INTEGER = 36250,
    QOPENGLTEXTURE_PIXELFORMAT_RGBA_INTEGER = 36249,
    QOPENGLTEXTURE_PIXELFORMAT_BGRA_INTEGER = 36251,
    QOPENGLTEXTURE_PIXELFORMAT_STENCIL = 6401,
    QOPENGLTEXTURE_PIXELFORMAT_DEPTH = 6402,
    QOPENGLTEXTURE_PIXELFORMAT_DEPTHSTENCIL = 34041,
    QOPENGLTEXTURE_PIXELFORMAT_ALPHA = 6406,
    QOPENGLTEXTURE_PIXELFORMAT_LUMINANCE = 6409,
    QOPENGLTEXTURE_PIXELFORMAT_LUMINANCEALPHA = 6410
} QOpenGLTexture__PixelFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_PIXELTYPE_NOPIXELTYPE = 0,
    QOPENGLTEXTURE_PIXELTYPE_INT8 = 5120,
    QOPENGLTEXTURE_PIXELTYPE_UINT8 = 5121,
    QOPENGLTEXTURE_PIXELTYPE_INT16 = 5122,
    QOPENGLTEXTURE_PIXELTYPE_UINT16 = 5123,
    QOPENGLTEXTURE_PIXELTYPE_INT32 = 5124,
    QOPENGLTEXTURE_PIXELTYPE_UINT32 = 5125,
    QOPENGLTEXTURE_PIXELTYPE_FLOAT16 = 5131,
    QOPENGLTEXTURE_PIXELTYPE_FLOAT16OES = 36193,
    QOPENGLTEXTURE_PIXELTYPE_FLOAT32 = 5126,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RGB9_E5 = 35902,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RG11B10F = 35899,
    QOPENGLTEXTURE_PIXELTYPE_UINT8_RG3B2 = 32818,
    QOPENGLTEXTURE_PIXELTYPE_UINT8_RG3B2_REV = 33634,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_RGB5A1 = 32820,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_RGB5A1_REV = 33638,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_R5G6B5 = 33635,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_R5G6B5_REV = 33636,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_RGBA4 = 32819,
    QOPENGLTEXTURE_PIXELTYPE_UINT16_RGBA4_REV = 33637,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RGBA8 = 32821,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RGBA8_REV = 33639,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RGB10A2 = 32822,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_RGB10A2_REV = 33640,
    QOPENGLTEXTURE_PIXELTYPE_UINT32_D24S8 = 34042,
    QOPENGLTEXTURE_PIXELTYPE_FLOAT32_D32_UINT32_S8_X24 = 36269
} QOpenGLTexture__PixelType;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_SWIZZLECOMPONENT_SWIZZLERED = 36418,
    QOPENGLTEXTURE_SWIZZLECOMPONENT_SWIZZLEGREEN = 36419,
    QOPENGLTEXTURE_SWIZZLECOMPONENT_SWIZZLEBLUE = 36420,
    QOPENGLTEXTURE_SWIZZLECOMPONENT_SWIZZLEALPHA = 36421
} QOpenGLTexture__SwizzleComponent;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_SWIZZLEVALUE_REDVALUE = 6403,
    QOPENGLTEXTURE_SWIZZLEVALUE_GREENVALUE = 6404,
    QOPENGLTEXTURE_SWIZZLEVALUE_BLUEVALUE = 6405,
    QOPENGLTEXTURE_SWIZZLEVALUE_ALPHAVALUE = 6406,
    QOPENGLTEXTURE_SWIZZLEVALUE_ZEROVALUE = 0,
    QOPENGLTEXTURE_SWIZZLEVALUE_ONEVALUE = 1
} QOpenGLTexture__SwizzleValue;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_WRAPMODE_REPEAT = 10497,
    QOPENGLTEXTURE_WRAPMODE_MIRROREDREPEAT = 33648,
    QOPENGLTEXTURE_WRAPMODE_CLAMPTOEDGE = 33071,
    QOPENGLTEXTURE_WRAPMODE_CLAMPTOBORDER = 33069
} QOpenGLTexture__WrapMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_COORDINATEDIRECTION_DIRECTIONS = 10242,
    QOPENGLTEXTURE_COORDINATEDIRECTION_DIRECTIONT = 10243,
    QOPENGLTEXTURE_COORDINATEDIRECTION_DIRECTIONR = 32882
} QOpenGLTexture__CoordinateDirection;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_FEATURE_IMMUTABLESTORAGE = 1,
    QOPENGLTEXTURE_FEATURE_IMMUTABLEMULTISAMPLESTORAGE = 2,
    QOPENGLTEXTURE_FEATURE_TEXTURERECTANGLE = 4,
    QOPENGLTEXTURE_FEATURE_TEXTUREARRAYS = 8,
    QOPENGLTEXTURE_FEATURE_TEXTURE3D = 16,
    QOPENGLTEXTURE_FEATURE_TEXTUREMULTISAMPLE = 32,
    QOPENGLTEXTURE_FEATURE_TEXTUREBUFFER = 64,
    QOPENGLTEXTURE_FEATURE_TEXTURECUBEMAPARRAYS = 128,
    QOPENGLTEXTURE_FEATURE_SWIZZLE = 256,
    QOPENGLTEXTURE_FEATURE_STENCILTEXTURING = 512,
    QOPENGLTEXTURE_FEATURE_ANISOTROPICFILTERING = 1024,
    QOPENGLTEXTURE_FEATURE_NPOTTEXTURES = 2048,
    QOPENGLTEXTURE_FEATURE_NPOTTEXTUREREPEAT = 4096,
    QOPENGLTEXTURE_FEATURE_TEXTURE1D = 8192,
    QOPENGLTEXTURE_FEATURE_TEXTURECOMPARISONOPERATORS = 16384,
    QOPENGLTEXTURE_FEATURE_TEXTUREMIPMAPLEVEL = 32768,
    QOPENGLTEXTURE_FEATURE_MAXFEATUREFLAG = 65536
} QOpenGLTexture__Feature;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_DEPTHSTENCILMODE_DEPTHMODE = 6402,
    QOPENGLTEXTURE_DEPTHSTENCILMODE_STENCILMODE = 6401
} QOpenGLTexture__DepthStencilMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPARELESSEQUAL = 515,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPAREGREATEREQUAL = 518,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPARELESS = 513,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPAREGREATER = 516,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPAREEQUAL = 514,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPARENOTEQUAL = 517,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPAREALWAYS = 519,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMPARENEVER = 512,
    QOPENGLTEXTURE_COMPARISONFUNCTION_COMMPARENOTEQUAL = 517
} QOpenGLTexture__ComparisonFunction;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_COMPARISONMODE_COMPAREREFTOTEXTURE = 34894,
    QOPENGLTEXTURE_COMPARISONMODE_COMPARENONE = 0
} QOpenGLTexture__ComparisonMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengltexture.html#public-types)

typedef enum {
    QOPENGLTEXTURE_FILTER_NEAREST = 9728,
    QOPENGLTEXTURE_FILTER_LINEAR = 9729,
    QOPENGLTEXTURE_FILTER_NEARESTMIPMAPNEAREST = 9984,
    QOPENGLTEXTURE_FILTER_NEARESTMIPMAPLINEAR = 9986,
    QOPENGLTEXTURE_FILTER_LINEARMIPMAPNEAREST = 9985,
    QOPENGLTEXTURE_FILTER_LINEARMIPMAPLINEAR = 9987
} QOpenGLTexture__Filter;

#endif
