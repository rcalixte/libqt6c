#include "libqpaintdevice.hpp"
#include "libqpoint.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqwindow.hpp"
#include "libqbackingstore.hpp"
#include "libqbackingstore.h"

QBackingStore* q_backingstore_new(void* window) {
    return QBackingStore_new((QWindow*)window);
}

QWindow* q_backingstore_window(void* self) {
    return QBackingStore_Window((QBackingStore*)self);
}

QPaintDevice* q_backingstore_paint_device(void* self) {
    return QBackingStore_PaintDevice((QBackingStore*)self);
}

void q_backingstore_flush(void* self, void* region) {
    QBackingStore_Flush((QBackingStore*)self, (QRegion*)region);
}

void q_backingstore_resize(void* self, void* size) {
    QBackingStore_Resize((QBackingStore*)self, (QSize*)size);
}

QSize* q_backingstore_size(void* self) {
    return QBackingStore_Size((QBackingStore*)self);
}

bool q_backingstore_scroll(void* self, void* area, int dx, int dy) {
    return QBackingStore_Scroll((QBackingStore*)self, (QRegion*)area, dx, dy);
}

void q_backingstore_begin_paint(void* self, void* param1) {
    QBackingStore_BeginPaint((QBackingStore*)self, (QRegion*)param1);
}

void q_backingstore_end_paint(void* self) {
    QBackingStore_EndPaint((QBackingStore*)self);
}

void q_backingstore_set_static_contents(void* self, void* region) {
    QBackingStore_SetStaticContents((QBackingStore*)self, (QRegion*)region);
}

QRegion* q_backingstore_static_contents(void* self) {
    return QBackingStore_StaticContents((QBackingStore*)self);
}

bool q_backingstore_has_static_contents(void* self) {
    return QBackingStore_HasStaticContents((QBackingStore*)self);
}

void q_backingstore_flush2(void* self, void* region, void* window) {
    QBackingStore_Flush2((QBackingStore*)self, (QRegion*)region, (QWindow*)window);
}

void q_backingstore_flush3(void* self, void* region, void* window, void* offset) {
    QBackingStore_Flush3((QBackingStore*)self, (QRegion*)region, (QWindow*)window, (QPoint*)offset);
}

void q_backingstore_delete(void* self) {
    QBackingStore_Delete((QBackingStore*)(self));
}
