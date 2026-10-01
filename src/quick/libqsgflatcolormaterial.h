#pragma once
#ifndef QUICK_LIBQSGFLATCOLORMATERIAL_H
#define QUICK_LIBQSGFLATCOLORMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html)

/// q_sgflatcolormaterial_new constructs a new QSGFlatColorMaterial object.
///
QSGFlatColorMaterial* q_sgflatcolormaterial_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
///
/// @param self const QSGFlatColorMaterial*
///
QSGMaterialType* q_sgflatcolormaterial_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QSGFlatColorMaterial*
/// @param callback QSGMaterialType* func(const QSGFlatColorMaterial* self)
///
void q_sgflatcolormaterial_on_type(void* self, QSGMaterialType* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#type)
///
/// Base class method implementation
///
/// @param self const QSGFlatColorMaterial*
///
QSGMaterialType* q_sgflatcolormaterial_super_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
///
/// @param self const QSGFlatColorMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgflatcolormaterial_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self QSGFlatColorMaterial*
/// @param callback QSGMaterialShader* func(const QSGFlatColorMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgflatcolormaterial_on_create_shader(void* self, QSGMaterialShader* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#createShader)
///
/// Base class method implementation
///
/// @param self const QSGFlatColorMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgflatcolormaterial_super_create_shader(const void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#setColor)
///
/// @param self QSGFlatColorMaterial*
/// @param color QColor*
///
void q_sgflatcolormaterial_set_color(void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#color)
///
/// @param self const QSGFlatColorMaterial*
///
const QColor* q_sgflatcolormaterial_color(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
///
/// @param self const QSGFlatColorMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgflatcolormaterial_compare(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
///
/// Allows for overriding the related default method
///
/// @param self QSGFlatColorMaterial*
/// @param callback int32_t func(const QSGFlatColorMaterial* self, QSGMaterial* other)
///
void q_sgflatcolormaterial_on_compare(void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#compare)
///
/// Base class method implementation
///
/// @param self const QSGFlatColorMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgflatcolormaterial_super_compare(const void* self, const void* other);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self const QSGFlatColorMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgflatcolormaterial_flags(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGFlatColorMaterial*
/// @param flags flag of enum QSGMaterial__Flag
///
void q_sgflatcolormaterial_set_flag(void* self, int32_t flags);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
///
/// @param self const QSGFlatColorMaterial*
///
int32_t q_sgflatcolormaterial_view_count(const void* self);

/// Inherited from QSGMaterial
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGFlatColorMaterial*
/// @param flags flag of enum QSGMaterial__Flag
/// @param on bool
///
void q_sgflatcolormaterial_set_flag2(void* self, int32_t flags, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgflatcolormaterial.html#dtor.QSGFlatColorMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGFlatColorMaterial*
///
void q_sgflatcolormaterial_delete(void* self);

#endif
