#pragma once
#ifndef LIBQCOLORTRANSFORM_H
#define LIBQCOLORTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html)

/// q_colortransform_new constructs a new QColorTransform object.
///
QColorTransform* q_colortransform_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html)

/// q_colortransform_new2 constructs a new QColorTransform object.
///
/// @param colorTransform QColorTransform*
///
QColorTransform* q_colortransform_new2(const void* colorTransform);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#operator-eq)
///
/// @param self QColorTransform*
/// @param other QColorTransform*
///
void q_colortransform_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#swap)
///
/// @param self QColorTransform*
/// @param other QColorTransform*
///
void q_colortransform_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
///
/// @param self const QColorTransform*
///
bool q_colortransform_is_identity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// @param self const QColorTransform*
/// @param argb uint32_t
///
uint32_t q_colortransform_map(const void* self, uint32_t argb);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// @param self const QColorTransform*
/// @param rgba64 QRgba64*
///
QRgba64* q_colortransform_map2(const void* self, void* rgba64);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// @param self const QColorTransform*
/// @param color QColor*
///
QColor* q_colortransform_map5(const void* self, const void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolortransform.html#dtor.QColorTransform)
///
/// Delete this object from C++ memory.
///
/// @param self QColorTransform*
///
void q_colortransform_delete(void* self);

#endif
