#pragma once
#ifndef SRC_MULTIMEDIA_QT6C_LIBQABSTRACTVIDEOBUFFER_H
#define SRC_MULTIMEDIA_QT6C_LIBQABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
///
/// @param self QAbstractVideoBuffer*
///
void q_abstractvideobuffer_unmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
///
/// @param self QAbstractVideoBuffer*
///
QVideoFrameFormat* q_abstractvideobuffer_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#operator-eq)
///
/// @param self QAbstractVideoBuffer*
/// @param param1 QAbstractVideoBuffer*
///
void q_abstractvideobuffer_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractVideoBuffer*
///
void q_abstractvideobuffer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html)

/// q_abstractvideobuffer__mapdata_new constructs a new QAbstractVideoBuffer::MapData object.
///
/// @param other QAbstractVideoBuffer__MapData*
///
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html)

/// q_abstractvideobuffer__mapdata_new2 constructs a new QAbstractVideoBuffer::MapData object and invalidates the source QAbstractVideoBuffer::MapData object.
///
/// @param other QAbstractVideoBuffer__MapData*
///
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new2(void* other);

/// q_abstractvideobuffer__mapdata_copy_assign shallow copies `other` into `self`.
///
/// @param self QAbstractVideoBuffer__MapData*
/// @param other QAbstractVideoBuffer__MapData*
///
void q_abstractvideobuffer__mapdata_copy_assign(void* self, void* other);

/// q_abstractvideobuffer__mapdata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAbstractVideoBuffer__MapData*
/// @param other QAbstractVideoBuffer__MapData*
///
void q_abstractvideobuffer__mapdata_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
///
/// @param self QAbstractVideoBuffer__MapData*
///
int32_t q_abstractvideobuffer__mapdata_plane_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html#planeCount-var)
///
/// @param self QAbstractVideoBuffer__MapData*
/// @param planeCount int
///
void q_abstractvideobuffer__mapdata_set_plane_count(void* self, int planeCount);

/// Delete this object from C++ memory.
///
/// @param self QAbstractVideoBuffer__MapData*
///
void q_abstractvideobuffer__mapdata_delete(void* self);

#endif
