#pragma once
#ifndef SRCQT6C_LIBQCOLORTRANSFORM_H
#define SRCQT6C_LIBQCOLORTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcolortransform.html

/// q_colortransform_new constructs a new QColorTransform object.
///
///
QColorTransform* q_colortransform_new();

/// q_colortransform_new2 constructs a new QColorTransform object.
///
/// ``` QColorTransform* colorTransform ```
QColorTransform* q_colortransform_new2(void* colorTransform);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#operator-eq)
///
/// ``` QColorTransform* self, QColorTransform* other ```
void q_colortransform_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#swap)
///
/// ``` QColorTransform* self, QColorTransform* other ```
void q_colortransform_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#isIdentity)
///
/// ``` QColorTransform* self ```
bool q_colortransform_is_identity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, uint32_t argb ```
uint32_t q_colortransform_map(void* self, uint32_t argb);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, QRgba64* rgba64 ```
QRgba64* q_colortransform_map2(void* self, void* rgba64);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#map)
///
/// ``` QColorTransform* self, QColor* color ```
QColor* q_colortransform_map5(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolortransform.html#dtor.QColorTransform)
///
/// Delete this object from C++ memory.
///
/// ``` QColorTransform* self ```
void q_colortransform_delete(void* self);

#endif
