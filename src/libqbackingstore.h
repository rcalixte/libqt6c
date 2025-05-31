#pragma once
#ifndef SRCQT6C_LIBQBACKINGSTORE_H
#define SRCQT6C_LIBQBACKINGSTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpaintdevice.h"
#include "libqpoint.h"
#include "libqregion.h"
#include "libqsize.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qbackingstore.html

/// q_backingstore_new constructs a new QBackingStore object.
///
/// ``` QWindow* window ```
QBackingStore* q_backingstore_new(void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#window)
///
/// ``` QBackingStore* self ```
QWindow* q_backingstore_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
///
/// ``` QBackingStore* self ```
QPaintDevice* q_backingstore_paint_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region ```
void q_backingstore_flush(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#resize)
///
/// ``` QBackingStore* self, QSize* size ```
void q_backingstore_resize(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#size)
///
/// ``` QBackingStore* self ```
QSize* q_backingstore_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
///
/// ``` QBackingStore* self, QRegion* area, int dx, int dy ```
bool q_backingstore_scroll(void* self, void* area, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
///
/// ``` QBackingStore* self, QRegion* param1 ```
void q_backingstore_begin_paint(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
///
/// ``` QBackingStore* self ```
void q_backingstore_end_paint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
///
/// ``` QBackingStore* self, QRegion* region ```
void q_backingstore_set_static_contents(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
///
/// ``` QBackingStore* self ```
QRegion* q_backingstore_static_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
///
/// ``` QBackingStore* self ```
bool q_backingstore_has_static_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region, QWindow* window ```
void q_backingstore_flush2(void* self, void* region, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset ```
void q_backingstore_flush3(void* self, void* region, void* window, void* offset);

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
///
/// Delete this object from C++ memory.
///
/// ``` QBackingStore* self ```
void q_backingstore_delete(void* self);

#endif
