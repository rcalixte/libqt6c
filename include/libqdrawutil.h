#pragma once
#ifndef SRCQT6C_LIBQDRAWUTIL_H
#define SRCQT6C_LIBQDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtilerules.html

/// q_tilerules_new constructs a new QTileRules object.
///
/// ``` QTileRules* other ```
QTileRules* q_tilerules_new(void* other);

/// q_tilerules_new2 constructs a new QTileRules object and invalidates the source QTileRules object.
///
/// ``` QTileRules* other ```
QTileRules* q_tilerules_new2(void* other);

/// q_tilerules_new3 constructs a new QTileRules object.
///
/// ``` enum Qt__TileRule horizontalRule, enum Qt__TileRule verticalRule ```
QTileRules* q_tilerules_new3(int64_t horizontalRule, int64_t verticalRule);

/// q_tilerules_new4 constructs a new QTileRules object.
///
///
QTileRules* q_tilerules_new4();

/// q_tilerules_new5 constructs a new QTileRules object.
///
/// ``` QTileRules* param1 ```
QTileRules* q_tilerules_new5(void* param1);

/// q_tilerules_new6 constructs a new QTileRules object.
///
/// ``` enum Qt__TileRule rule ```
QTileRules* q_tilerules_new6(int64_t rule);

/// q_tilerules_copy_assign shallow copies `other` into `self`.
///
/// ``` QTileRules* self, QTileRules* other ```
void q_tilerules_copy_assign(void* self, void* other);

/// q_tilerules_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTileRules* self, QTileRules* other ```
void q_tilerules_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtilerules.html#dtor.QTileRules)
///
/// Delete this object from C++ memory.
///
/// ``` QTileRules* self ```
void q_tilerules_delete(void* self);

/// https://doc.qt.io/qt-6/qdrawutil.html#types

typedef enum {
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOPLEFT = 1,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOP = 2,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUETOPRIGHT = 4,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUELEFT = 8,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUECENTER = 16,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUERIGHT = 32,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOMLEFT = 64,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOM = 128,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEBOTTOMRIGHT = 256,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUECORNERS = 325,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEEDGES = 170,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEFRAME = 495,
    QDRAWBORDERPIXMAP_DRAWINGHINT_OPAQUEALL = 511
} QDrawBorderPixmap__DrawingHint;

#endif
