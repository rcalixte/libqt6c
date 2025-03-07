#include "libqpaintdevice.hpp"
#include "libqpoint.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqwindow.hpp"
#include "libqbackingstore.hpp"
#include "libqbackingstore.h"

/// https://doc.qt.io/qt-6/qbackingstore.html

/// q_backingstore_new constructs a new QBackingStore object.
///
/// ``` QWindow* window ```
QBackingStore* q_backingstore_new(void* window) {
    return QBackingStore_new((QWindow*)window);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#window)
///
/// ``` QBackingStore* self ```
QWindow* q_backingstore_window(void* self) {
    return QBackingStore_Window((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#paintDevice)
///
/// ``` QBackingStore* self ```
QPaintDevice* q_backingstore_paint_device(void* self) {
    return QBackingStore_PaintDevice((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region ```
void q_backingstore_flush(void* self, void* region) {
    QBackingStore_Flush((QBackingStore*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#resize)
///
/// ``` QBackingStore* self, QSize* size ```
void q_backingstore_resize(void* self, void* size) {
    QBackingStore_Resize((QBackingStore*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#size)
///
/// ``` QBackingStore* self ```
QSize* q_backingstore_size(void* self) {
    return QBackingStore_Size((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#scroll)
///
/// ``` QBackingStore* self, QRegion* area, int dx, int dy ```
bool q_backingstore_scroll(void* self, void* area, int dx, int dy) {
    return QBackingStore_Scroll((QBackingStore*)self, (QRegion*)area, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#beginPaint)
///
/// ``` QBackingStore* self, QRegion* param1 ```
void q_backingstore_begin_paint(void* self, void* param1) {
    QBackingStore_BeginPaint((QBackingStore*)self, (QRegion*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#endPaint)
///
/// ``` QBackingStore* self ```
void q_backingstore_end_paint(void* self) {
    QBackingStore_EndPaint((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#setStaticContents)
///
/// ``` QBackingStore* self, QRegion* region ```
void q_backingstore_set_static_contents(void* self, void* region) {
    QBackingStore_SetStaticContents((QBackingStore*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#staticContents)
///
/// ``` QBackingStore* self ```
QRegion* q_backingstore_static_contents(void* self) {
    return QBackingStore_StaticContents((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#hasStaticContents)
///
/// ``` QBackingStore* self ```
bool q_backingstore_has_static_contents(void* self) {
    return QBackingStore_HasStaticContents((QBackingStore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region, QWindow* window ```
void q_backingstore_flush2(void* self, void* region, void* window) {
    QBackingStore_Flush2((QBackingStore*)self, (QRegion*)region, (QWindow*)window);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbackingstore.html#flush)
///
/// ``` QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset ```
void q_backingstore_flush3(void* self, void* region, void* window, void* offset) {
    QBackingStore_Flush3((QBackingStore*)self, (QRegion*)region, (QWindow*)window, (QPoint*)offset);
}

/// Delete this object from C++ memory.
///
/// ``` QBackingStore* self ```
void q_backingstore_delete(void* self) {
    QBackingStore_Delete((QBackingStore*)(self));
}