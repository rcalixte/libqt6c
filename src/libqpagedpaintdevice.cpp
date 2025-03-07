#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <qpagedpaintdevice.h>
#include "libqpagedpaintdevice.hpp"
#include "libqpagedpaintdevice.hxx"

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self) {
    return self->newPage();
}

bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
    return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
    return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation) {
    return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins, int units) {
    return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self) {
    return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_SetPageRanges(QPagedPaintDevice* self, QPageRanges* ranges) {
    self->setPageRanges(*ranges);
}

QPageRanges* QPagedPaintDevice_PageRanges(const QPagedPaintDevice* self) {
    return new QPageRanges(self->pageRanges());
}

int QPagedPaintDevice_DevType(const QPagedPaintDevice* self) {
    return self->devType();
}

QPaintEngine* QPagedPaintDevice_PaintEngine(const QPagedPaintDevice* self) {
    return self->paintEngine();
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
    delete self;
}
