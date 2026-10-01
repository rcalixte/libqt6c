#pragma once
#ifndef QUICK_LIBQSGVERTEXCOLORMATERIAL_H
#define QUICK_LIBQSGVERTEXCOLORMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html)

/// q_sgvertexcolormaterial_new constructs a new QSGVertexColorMaterial object.
///
QSGVertexColorMaterial* q_sgvertexcolormaterial_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
///
/// @param self const QSGVertexColorMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgvertexcolormaterial_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
///
/// Allows for overriding the related default method
///
/// @param self const QSGVertexColorMaterial*
/// @param callback int32_t func(const QSGVertexColorMaterial* self, QSGMaterial* other)
///
void q_sgvertexcolormaterial_on_compare(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#compare)
///
/// Base class method implementation
///
/// @param self const QSGVertexColorMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgvertexcolormaterial_super_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
///
/// @param self const QSGVertexColorMaterial*
///
QSGMaterialType* q_sgvertexcolormaterial_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self const QSGVertexColorMaterial*
/// @param callback QSGMaterialType* func(const QSGVertexColorMaterial* self)
///
void q_sgvertexcolormaterial_on_type(const void* self, QSGMaterialType* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#type)
///
/// Base class method implementation
///
/// @param self const QSGVertexColorMaterial*
///
QSGMaterialType* q_sgvertexcolormaterial_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
///
/// @param self const QSGVertexColorMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgvertexcolormaterial_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self const QSGVertexColorMaterial*
/// @param callback QSGMaterialShader* func(const QSGVertexColorMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgvertexcolormaterial_on_create_shader(const void* self, QSGMaterialShader* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#createShader)
///
/// Base class method implementation
///
/// @param self const QSGVertexColorMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgvertexcolormaterial_super_create_shader(const void* self, int32_t renderMode);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self const QSGVertexColorMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgvertexcolormaterial_flags(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGVertexColorMaterial*
/// @param flags flag of enum QSGMaterial__Flag
///
void q_sgvertexcolormaterial_set_flag(void* self, int32_t flags);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
///
/// @param self const QSGVertexColorMaterial*
///
int32_t q_sgvertexcolormaterial_view_count(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGVertexColorMaterial*
/// @param flags flag of enum QSGMaterial__Flag
/// @param on bool
///
void q_sgvertexcolormaterial_set_flag2(void* self, int32_t flags, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgvertexcolormaterial.html#dtor.QSGVertexColorMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGVertexColorMaterial*
///
void q_sgvertexcolormaterial_delete(void* self);

#endif
