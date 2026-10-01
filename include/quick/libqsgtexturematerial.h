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
/// @param self const QSGOpaqueTextureMaterial*
///
QSGMaterialType* q_sgopaquetexturematerial_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param callback QSGMaterialType* func(const QSGOpaqueTextureMaterial* self)
///
void q_sgopaquetexturematerial_on_type(const void* self, QSGMaterialType* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#type)
///
/// Base class method implementation
///
/// @param self const QSGOpaqueTextureMaterial*
///
QSGMaterialType* q_sgopaquetexturematerial_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgopaquetexturematerial_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param callback QSGMaterialShader* func(const QSGOpaqueTextureMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgopaquetexturematerial_on_create_shader(const void* self, QSGMaterialShader* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#createShader)
///
/// Base class method implementation
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgopaquetexturematerial_super_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgopaquetexturematerial_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Allows for overriding the related default method
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param callback int32_t func(const QSGOpaqueTextureMaterial* self, QSGMaterial* other)
///
void q_sgopaquetexturematerial_on_compare(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Base class method implementation
///
/// @param self const QSGOpaqueTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgopaquetexturematerial_super_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setTexture)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param texture QSGTexture*
///
void q_sgopaquetexturematerial_set_texture(void* self, void* texture);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#texture)
///
/// @param self const QSGOpaqueTextureMaterial*
///
QSGTexture* q_sgopaquetexturematerial_texture(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setMipmapFiltering)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgopaquetexturematerial_set_mipmap_filtering(void* self, int32_t filteringType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#mipmapFiltering)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgopaquetexturematerial_mipmap_filtering(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setFiltering)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param filteringType enum QSGTexture__Filtering
///
void q_sgopaquetexturematerial_set_filtering(void* self, int32_t filteringType);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#filtering)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgopaquetexturematerial_filtering(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setHorizontalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgopaquetexturematerial_set_horizontal_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#horizontalWrapMode)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgopaquetexturematerial_horizontal_wrap_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setVerticalWrapMode)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param mode enum QSGTexture__WrapMode
///
void q_sgopaquetexturematerial_set_vertical_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#verticalWrapMode)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgopaquetexturematerial_vertical_wrap_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#setAnisotropyLevel)
///
/// @param self QSGOpaqueTextureMaterial*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgopaquetexturematerial_set_anisotropy_level(void* self, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#anisotropyLevel)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgopaquetexturematerial_anisotropy_level(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self const QSGOpaqueTextureMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgopaquetexturematerial_flags(const void* self);

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
/// @param self const QSGOpaqueTextureMaterial*
///
int32_t q_sgopaquetexturematerial_view_count(const void* self);

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
/// @param self const QSGTextureMaterial*
///
QSGMaterialType* q_sgtexturematerial_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self const QSGTextureMaterial*
/// @param callback QSGMaterialType* func(const QSGTextureMaterial* self)
///
void q_sgtexturematerial_on_type(const void* self, QSGMaterialType* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#type)
///
/// Base class method implementation
///
/// @param self const QSGTextureMaterial*
///
QSGMaterialType* q_sgtexturematerial_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// @param self const QSGTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgtexturematerial_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self const QSGTextureMaterial*
/// @param callback QSGMaterialShader* func(const QSGTextureMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgtexturematerial_on_create_shader(const void* self, QSGMaterialShader* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#createShader)
///
/// Base class method implementation
///
/// @param self const QSGTextureMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgtexturematerial_super_create_shader(const void* self, int32_t renderMode);

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
/// @param self const QSGTextureMaterial*
///
QSGTexture* q_sgtexturematerial_texture(const void* self);

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
/// @param self const QSGTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexturematerial_mipmap_filtering(const void* self);

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
/// @param self const QSGTextureMaterial*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexturematerial_filtering(const void* self);

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
/// @param self const QSGTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexturematerial_horizontal_wrap_mode(const void* self);

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
/// @param self const QSGTextureMaterial*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexturematerial_vertical_wrap_mode(const void* self);

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
/// @param self const QSGTextureMaterial*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgtexturematerial_anisotropy_level(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self const QSGTextureMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgtexturematerial_flags(const void* self);

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
/// @param self const QSGTextureMaterial*
///
int32_t q_sgtexturematerial_view_count(const void* self);

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
/// @param self const QSGTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgtexturematerial_compare(const void* self, const void* other);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSGTextureMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgtexturematerial_super_compare(const void* self, const void* other);

/// Inherited from QSGOpaqueTextureMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgopaquetexturematerial.html#compare)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QSGTextureMaterial*
/// @param callback int32_t func(QSGTextureMaterial* self, QSGMaterial* other)
///
void q_sgtexturematerial_on_compare(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexturematerial.html#dtor.QSGTextureMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGTextureMaterial*
///
void q_sgtexturematerial_delete(void* self);

#endif
