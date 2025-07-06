#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQABSTRACTVIDEOBUFFER_H
#define SRC_MULTIMEDIAQT6C_LIBQABSTRACTVIDEOBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractvideobuffer.html

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#unmap)
///
/// ``` QAbstractVideoBuffer* self ```
void q_abstractvideobuffer_unmap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#format)
///
/// ``` QAbstractVideoBuffer* self ```
QVideoFrameFormat* q_abstractvideobuffer_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer.html#dtor.QAbstractVideoBuffer)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractVideoBuffer* self ```
void q_abstractvideobuffer_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractvideobuffer-mapdata.html

/// q_abstractvideobuffer__mapdata_new constructs a new QAbstractVideoBuffer::MapData object.
///
/// ``` QAbstractVideoBuffer__MapData* other ```
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new(void* other);

/// q_abstractvideobuffer__mapdata_new2 constructs a new QAbstractVideoBuffer::MapData object and invalidates the source QAbstractVideoBuffer::MapData object.
///
/// ``` QAbstractVideoBuffer__MapData* other ```
QAbstractVideoBuffer__MapData* q_abstractvideobuffer__mapdata_new2(void* other);

/// q_abstractvideobuffer__mapdata_copy_assign shallow copies `other` into `self`.
///
/// ``` QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other ```
void q_abstractvideobuffer__mapdata_copy_assign(void* self, void* other);

/// q_abstractvideobuffer__mapdata_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAbstractVideoBuffer__MapData* self, QAbstractVideoBuffer__MapData* other ```
void q_abstractvideobuffer__mapdata_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractvideobuffer::mapdata.html#dtor.QAbstractVideoBuffer::MapData)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractVideoBuffer__MapData* self ```
void q_abstractvideobuffer__mapdata_delete(void* self);

#endif
