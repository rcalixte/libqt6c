#pragma once
#ifndef QUICK_LIBQSGMATERIAL_H
#define QUICK_LIBQSGMATERIAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html)

/// q_sgmaterial_new constructs a new QSGMaterial object.
///
QSGMaterial* q_sgmaterial_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
///
/// @param self QSGMaterial*
///
QSGMaterialType* q_sgmaterial_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterial*
/// @param callback QSGMaterialType* func()
///
void q_sgmaterial_on_type(void* self, QSGMaterialType* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#type)
///
/// Base class method implementation
///
/// @param self QSGMaterial*
///
QSGMaterialType* q_sgmaterial_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
///
/// @param self QSGMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgmaterial_create_shader(void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterial*
/// @param callback QSGMaterialShader* func(QSGMaterial* self, enum QSGRendererInterface__RenderMode renderMode)
///
void q_sgmaterial_on_create_shader(void* self, QSGMaterialShader* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#createShader)
///
/// Base class method implementation
///
/// @param self QSGMaterial*
/// @param renderMode enum QSGRendererInterface__RenderMode
///
QSGMaterialShader* q_sgmaterial_super_create_shader(void* self, int32_t renderMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
///
/// @param self QSGMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgmaterial_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
///
/// Allows for overriding the related default method
///
/// @param self QSGMaterial*
/// @param callback int32_t func(QSGMaterial* self, QSGMaterial* other)
///
void q_sgmaterial_on_compare(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#compare)
///
/// Base class method implementation
///
/// @param self QSGMaterial*
/// @param other QSGMaterial*
///
int32_t q_sgmaterial_super_compare(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#flags)
///
/// @param self QSGMaterial*
///
/// @return flag of enum QSGMaterial__Flag
///
int32_t q_sgmaterial_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGMaterial*
/// @param flags flag of enum QSGMaterial__Flag
///
void q_sgmaterial_set_flag(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#viewCount)
///
/// @param self QSGMaterial*
///
int32_t q_sgmaterial_view_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#setFlag)
///
/// @param self QSGMaterial*
/// @param flags flag of enum QSGMaterial__Flag
/// @param on bool
///
void q_sgmaterial_set_flag2(void* self, int32_t flags, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#dtor.QSGMaterial)
///
/// Delete this object from C++ memory.
///
/// @param self QSGMaterial*
///
void q_sgmaterial_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterial.html#public-types)

typedef enum {
    QSGMATERIAL_FLAG_BLENDING = 1,
    QSGMATERIAL_FLAG_REQUIRESDETERMINANT = 2,
    QSGMATERIAL_FLAG_REQUIRESFULLMATRIXEXCEPTTRANSLATE = 6,
    QSGMATERIAL_FLAG_REQUIRESFULLMATRIX = 14,
    QSGMATERIAL_FLAG_NOBATCHING = 16,
    QSGMATERIAL_FLAG_MULTIVIEW2 = 65536,
    QSGMATERIAL_FLAG_MULTIVIEW3 = 131072,
    QSGMATERIAL_FLAG_MULTIVIEW4 = 262144,
    QSGMATERIAL_FLAG_CUSTOMCOMPILESTEP = 16
} QSGMaterial__Flag;

#endif
