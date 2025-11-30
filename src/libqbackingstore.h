#pragma once
#ifndef SRC_QT6C_LIBQBACKINGSTORE_H
#define SRC_QT6C_LIBQBACKINGSTORE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbackingstore.html

/// q_backingstore_new constructs a new QBackingStore object.
///
/// @param window QWindow*
QBackingStore* q_backingstore_new(void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#window)
///
/// @param self QBackingStore*
QWindow* q_backingstore_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
///
/// @param self QBackingStore*
QPaintDevice* q_backingstore_paint_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// @param self QBackingStore*
/// @param region QRegion*
void q_backingstore_flush(void* self, void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#resize)
///
/// @param self QBackingStore*
/// @param size QSize*
void q_backingstore_resize(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#size)
///
/// @param self QBackingStore*
QSize* q_backingstore_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
///
/// @param self QBackingStore*
/// @param area QRegion*
/// @param dx int
/// @param dy int
bool q_backingstore_scroll(void* self, void* area, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
///
/// @param self QBackingStore*
/// @param param1 QRegion*
void q_backingstore_begin_paint(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
///
/// @param self QBackingStore*
void q_backingstore_end_paint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
///
/// @param self QBackingStore*
/// @param region QRegion*
void q_backingstore_set_static_contents(void* self, void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
///
/// @param self QBackingStore*
QRegion* q_backingstore_static_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
///
/// @param self QBackingStore*
bool q_backingstore_has_static_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// @param self QBackingStore*
/// @param region QRegion*
/// @param window QWindow*
void q_backingstore_flush2(void* self, void* region, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// @param self QBackingStore*
/// @param region QRegion*
/// @param window QWindow*
/// @param offset QPoint*
void q_backingstore_flush3(void* self, void* region, void* window, void* offset);

/// [Upstream resources](https://doc.qt.io/qt-6/qbackingstore.html#dtor.QBackingStore)
///
/// Delete this object from C++ memory.
///
/// @param self QBackingStore*
void q_backingstore_delete(void* self);

#endif
