#pragma once
#ifndef QUICK_LIBQSGTEXTUREMATERIAL_H
#define QUICK_LIBQSGTEXTUREMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html)

/// q_sgopaquetexturematerial_new constructs a new QSGOpaqueTextureMaterial object.
///
QSGOpaqueTextureMaterial* q_sgopaquetexturematerial_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
///
/// @param self QSGOpaqueTextureMaterial*
///
QSGMaterialType* q_sgopaquetexturematerial_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QSGOpaqueTextureMaterial*
/// @param callback QSGMaterialType* func()
///
void q_sgopaquetexturematerial_on_type(void* self, QSGMaterialType* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
///
/// Base class method implementation
///
/// @param self QSGOpaqueTextureMaterial*
///
QSGMaterialType* q_sgopaquetexturematerial_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgopaquetexturematerial_create_shader(void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self QSGOpaqueTextureMaterial*
/// @param callback QSGMaterialShader* func(QSGOpaqueTextureMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgopaquetexturematerial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// Base class method implementation
///
/// @param self QSGOpaqueTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgopaquetexturematerial_super_create_shader(void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgopaquetexturematerial_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Allows for overriding the related default method
///
/// @param self QSGOpaqueTextureMaterial*
/// @param callback int32_t func(QSGOpaqueTextureMaterial* self, QSGMaterial* other)
///
void q_sgopaquetexturematerial_on_compare(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Base class method implementation
///
/// @param self QSGOpaqueTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgopaquetexturematerial_super_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setTexture)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param texture QSGTexture*
///
void q_sgopaquetexturematerial_set_texture(void* self, void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#texture)
///
/// @param self QSGOpaqueTextureMaterial*
///
QSGTexture* q_sgopaquetexturematerial_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setMipmapFiltering)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgopaquetexturematerial_set_mipmap_filtering(void* self, int32_t filteringType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#mipmapFiltering)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgopaquetexturematerial_mipmap_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setFiltering)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgopaquetexturematerial_set_filtering(void* self, int32_t filteringType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#filtering)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgopaquetexturematerial_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setHorizontalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgopaquetexturematerial_set_horizontal_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#horizontalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgopaquetexturematerial_horizontal_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setVerticalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgopaquetexturematerial_set_vertical_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#verticalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgopaquetexturematerial_vertical_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setAnisotropyLevel)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgopaquetexturematerial_set_anisotropy_level(void* self, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#anisotropyLevel)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgopaquetexturematerial_anisotropy_level(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self QSGOpaqueTextureMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgopaquetexturematerial_flags(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param flags flag of enum QSGMaterial__Flag
///
void q_sgopaquetexturematerial_set_flag(void* self, int32_t flags);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
///
/// @param self QSGOpaqueTextureMaterial*
///
int32_t q_sgopaquetexturematerial_view_count(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param flags flag of enum QSGMaterial__Flag
/// @param on bool
///
void q_sgopaquetexturematerial_set_flag2(void* self, int32_t flags, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#dtor.QSGOpaqueTextureMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGOpaqueTextureMaterial*
///
void q_sgopaquetexturematerial_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html)

/// q_sgtexturematerial_new constructs a new QSGTextureMaterial object.
///
QSGTextureMaterial* q_sgtexturematerial_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
///
/// @param self QSGTextureMaterial*
///
QSGMaterialType* q_sgtexturematerial_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QSGTextureMaterial*
/// @param callback QSGMaterialType* func()
///
void q_sgtexturematerial_on_type(void* self, QSGMaterialType* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
///
/// Base class method implementation
///
/// @param self QSGTextureMaterial*
///
QSGMaterialType* q_sgtexturematerial_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// @param self QSGTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgtexturematerial_create_shader(void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self QSGTextureMaterial*
/// @param callback QSGMaterialShader* func(QSGTextureMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgtexturematerial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// Base class method implementation
///
/// @param self QSGTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgtexturematerial_super_create_shader(void* self, int32_t renderMode);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setTexture)
///
/// @param self QSGTextureMaterial*
/// @param texture QSGTexture*
///
void q_sgtexturematerial_set_texture(void* self, void* texture);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#texture)
///
/// @param self QSGTextureMaterial*
///
QSGTexture* q_sgtexturematerial_texture(void* self);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setMipmapFiltering)
///
/// @param self QSGTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgtexturematerial_set_mipmap_filtering(void* self, int32_t filteringType);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#mipmapFiltering)
///
/// @param self QSGTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexturematerial_mipmap_filtering(void* self);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setFiltering)
///
/// @param self QSGTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgtexturematerial_set_filtering(void* self, int32_t filteringType);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#filtering)
///
/// @param self QSGTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexturematerial_filtering(void* self);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setHorizontalWrapMode)
///
/// @param self QSGTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgtexturematerial_set_horizontal_wrap_mode(void* self, int32_t mode);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#horizontalWrapMode)
///
/// @param self QSGTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexturematerial_horizontal_wrap_mode(void* self);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setVerticalWrapMode)
///
/// @param self QSGTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgtexturematerial_set_vertical_wrap_mode(void* self, int32_t mode);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#verticalWrapMode)
///
/// @param self QSGTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexturematerial_vertical_wrap_mode(void* self);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setAnisotropyLevel)
///
/// @param self QSGTextureMaterial*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgtexturematerial_set_anisotropy_level(void* self, int32_t level);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#anisotropyLevel)
///
/// @param self QSGTextureMaterial*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgtexturematerial_anisotropy_level(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self QSGTextureMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgtexturematerial_flags(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGTextureMaterial*
/// @param flags flag of enum QSGMaterial__Flag
///
void q_sgtexturematerial_set_flag(void* self, int32_t flags);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
///
/// @param self QSGTextureMaterial*
///
int32_t q_sgtexturematerial_view_count(void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGTextureMaterial*
/// @param flags flag of enum QSGMaterial__Flag
/// @param on bool
///
void q_sgtexturematerial_set_flag2(void* self, int32_t flags, bool on);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgtexturematerial_compare(void* self, void* other);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgtexturematerial_super_compare(void* self, void* other);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTextureMaterial*
/// @param callback int32_t func(QSGTextureMaterial* self, QSGMaterial* other)
///
void q_sgtexturematerial_on_compare(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#dtor.QSGTextureMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGTextureMaterial*
///
void q_sgtexturematerial_delete(void* self);

#endif
