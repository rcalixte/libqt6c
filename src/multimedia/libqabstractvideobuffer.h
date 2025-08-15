#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQABSTRACTVIDEOBUFFER_H
#define SRC_MULTIMEDIAQT6C_LIBQABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractvideobuffer.html

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
///
/// @param self QAbstractVideoBuffer*
void q_abstractvideobuffer_unmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
///
/// @param self QAbstractVideoBuffer*
QVideoFrameFormat* q_abstractvideobuffer_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractVideoBuffer*
void q_abstractvideobuffer_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html

/// q_abstractvideobuffer__mapdata_new constructs a new QAbstractVideoBuffer::MapData object.
///
/// @param other QAbstractVideoBuffer__MapData*
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new(void* other);

/// q_abstractvideobuffer__mapdata_new2 constructs a new QAbstractVideoBuffer::MapData object and invalidates the source QAbstractVideoBuffer::MapData object.
///
/// @param other QAbstractVideoBuffer__MapData*
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new2(void* other);

/// q_abstractvideobuffer__mapdata_copy_assign shallow copies `other` into `self`.
///
/// @param self QAbstractVideoBuffer__MapData*
/// @param other QAbstractVideoBuffer__MapData*
void q_abstractvideobuffer__mapdata_copy_assign(void* self, void* other);

/// q_abstractvideobuffer__mapdata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAbstractVideoBuffer__MapData*
/// @param other QAbstractVideoBuffer__MapData*
void q_abstractvideobuffer__mapdata_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer::mapdata.html#dtor.QAbstractVideoBuffer::MapData)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractVideoBuffer__MapData*
void q_abstractvideobuffer__mapdata_delete(void* self);

#endif
