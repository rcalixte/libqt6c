#include <QBitmap>
#include <QByteArray>
#include <QColor>
#include <QIODevice>
#include <QImage>
#include <QImageReader>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTransform>
#include <QVariant>
#include <qbitmap.h>
#include "libqbitmap.hpp"
#include "libqbitmap.hxx"

QBitmap* QBitmap_new() {
    return new VirtualQBitmap();
}

QBitmap* QBitmap_new2(QPixmap* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
    return new VirtualQBitmap(static_cast<int>(w), static_cast<int>(h));
}

QBitmap* QBitmap_new4(QSize* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new5(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(QBitmap* param1) {
    return new VirtualQBitmap(*param1);
}

QBitmap* QBitmap_new7(libqt_string fileName, const char* format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQBitmap(fileName_QString, format);
}

void QBitmap_OperatorAssign(QBitmap* self, QPixmap* param1) {
    self->operator=(*param1);
}

void QBitmap_Swap(QBitmap* self, QBitmap* other) {
    self->swap(*other);
}

QVariant* QBitmap_ToQVariant(const QBitmap* self) {
    return new QVariant(self->operator QVariant());
}

void QBitmap_Clear(QBitmap* self) {
    self->clear();
}

QBitmap* QBitmap_FromImage(QImage* image) {
    return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits) {
    return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits)));
}

QBitmap* QBitmap_FromPixmap(QPixmap* pixmap) {
    return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_Transformed(const QBitmap* self, QTransform* matrix) {
    return new QBitmap(self->transformed(*matrix));
}

void QBitmap_OperatorAssignWithQBitmap(QBitmap* self, QBitmap* param1) {
    self->operator=(*param1);
}

QBitmap* QBitmap_FromImage2(QImage* image, int flags) {
    return new QBitmap(QBitmap::fromImage(*image, static_cast<Qt::ImageConversionFlags>(flags)));
}

QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat) {
    return new QBitmap(QBitmap::fromData(*size, static_cast<const uchar*>(bits), static_cast<QImage::Format>(monoFormat)));
}

// Derived class handler implementation
int QBitmap_DevType(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->devType();
    } else {
        return vqbitmap->devType();
    }
}

// Base class handler implementation
int QBitmap_QBaseDevType(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_DevType_IsBase(true);
        return vqbitmap->devType();
    } else {
        return vqbitmap->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnDevType(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_DevType_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QBitmap_PaintEngine(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->paintEngine();
    } else {
        return vqbitmap->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QBitmap_QBasePaintEngine(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_PaintEngine_IsBase(true);
        return vqbitmap->paintEngine();
    } else {
        return vqbitmap->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnPaintEngine(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_PaintEngine_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QBitmap_Metric(const QBitmap* self, int param1) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqbitmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QBitmap_QBaseMetric(const QBitmap* self, int param1) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_Metric_IsBase(true);
        return vqbitmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqbitmap->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnMetric(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_Metric_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QBitmap_InitPainter(const QBitmap* self, QPainter* painter) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->initPainter(painter);
    } else {
        vqbitmap->initPainter(painter);
    }
}

// Base class handler implementation
void QBitmap_QBaseInitPainter(const QBitmap* self, QPainter* painter) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_InitPainter_IsBase(true);
        vqbitmap->initPainter(painter);
    } else {
        vqbitmap->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnInitPainter(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_InitPainter_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QBitmap_Redirected(const QBitmap* self, QPoint* offset) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->redirected(offset);
    } else {
        return vqbitmap->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QBitmap_QBaseRedirected(const QBitmap* self, QPoint* offset) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_Redirected_IsBase(true);
        return vqbitmap->redirected(offset);
    } else {
        return vqbitmap->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnRedirected(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_Redirected_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QBitmap_SharedPainter(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        return vqbitmap->sharedPainter();
    } else {
        return vqbitmap->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QBitmap_QBaseSharedPainter(const QBitmap* self) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_SharedPainter_IsBase(true);
        return vqbitmap->sharedPainter();
    } else {
        return vqbitmap->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QBitmap_OnSharedPainter(const QBitmap* self, intptr_t slot) {
    if (auto* vqbitmap = const_cast<VirtualQBitmap*>(dynamic_cast<const VirtualQBitmap*>(self))) {
        vqbitmap->setQBitmap_SharedPainter_Callback(reinterpret_cast<VirtualQBitmap::QBitmap_SharedPainter_Callback>(slot));
    }
}

void QBitmap_Delete(QBitmap* self) {
    delete self;
}
