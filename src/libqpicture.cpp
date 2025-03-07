#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "libqpicture.hpp"
#include "libqpicture.hxx"

QPicture* QPicture_new() {
    return new VirtualQPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
    return new VirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
    return new VirtualQPicture(static_cast<int>(formatVersion));
}

bool QPicture_IsNull(const QPicture* self) {
    return self->isNull();
}

unsigned int QPicture_Size(const QPicture* self) {
    return static_cast<unsigned int>(self->size());
}

const char* QPicture_Data(const QPicture* self) {
    return (const char*)self->data();
}

bool QPicture_Play(QPicture* self, QPainter* p) {
    return self->play(p);
}

bool QPicture_Load(QPicture* self, QIODevice* dev) {
    return self->load(dev);
}

bool QPicture_LoadWithFileName(QPicture* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->load(fileName_QString);
}

bool QPicture_Save(QPicture* self, QIODevice* dev) {
    return self->save(dev);
}

bool QPicture_SaveWithFileName(QPicture* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->save(fileName_QString);
}

QRect* QPicture_BoundingRect(const QPicture* self) {
    return new QRect(self->boundingRect());
}

void QPicture_SetBoundingRect(QPicture* self, QRect* r) {
    self->setBoundingRect(*r);
}

void QPicture_OperatorAssign(QPicture* self, QPicture* p) {
    self->operator=(*p);
}

void QPicture_Swap(QPicture* self, QPicture* other) {
    self->swap(*other);
}

void QPicture_Detach(QPicture* self) {
    self->detach();
}

bool QPicture_IsDetached(const QPicture* self) {
    return self->isDetached();
}

// Derived class handler implementation
int QPicture_DevType(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->devType();
    } else {
        return vqpicture->devType();
    }
}

// Base class handler implementation
int QPicture_QBaseDevType(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_DevType_IsBase(true);
        return vqpicture->devType();
    } else {
        return vqpicture->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnDevType(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_DevType_Callback(reinterpret_cast<VirtualQPicture::QPicture_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPicture_SetData(QPicture* self, const char* data, unsigned int size) {
    if (auto* vqpicture = dynamic_cast<VirtualQPicture*>(self)) {
        vqpicture->setData(data, static_cast<uint>(size));
    } else {
        vqpicture->setData(data, static_cast<uint>(size));
    }
}

// Base class handler implementation
void QPicture_QBaseSetData(QPicture* self, const char* data, unsigned int size) {
    if (auto* vqpicture = dynamic_cast<VirtualQPicture*>(self)) {
        vqpicture->setQPicture_SetData_IsBase(true);
        vqpicture->setData(data, static_cast<uint>(size));
    } else {
        vqpicture->setData(data, static_cast<uint>(size));
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSetData(QPicture* self, intptr_t slot) {
    if (auto* vqpicture = dynamic_cast<VirtualQPicture*>(self)) {
        vqpicture->setQPicture_SetData_Callback(reinterpret_cast<VirtualQPicture::QPicture_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPicture_PaintEngine(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->paintEngine();
    } else {
        return vqpicture->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPicture_QBasePaintEngine(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_PaintEngine_IsBase(true);
        return vqpicture->paintEngine();
    } else {
        return vqpicture->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnPaintEngine(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_PaintEngine_Callback(reinterpret_cast<VirtualQPicture::QPicture_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QPicture_Metric(const QPicture* self, int m) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    } else {
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    }
}

// Base class handler implementation
int QPicture_QBaseMetric(const QPicture* self, int m) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_Metric_IsBase(true);
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    } else {
        return vqpicture->metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnMetric(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_Metric_Callback(reinterpret_cast<VirtualQPicture::QPicture_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPicture_InitPainter(const QPicture* self, QPainter* painter) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->initPainter(painter);
    } else {
        vqpicture->initPainter(painter);
    }
}

// Base class handler implementation
void QPicture_QBaseInitPainter(const QPicture* self, QPainter* painter) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_InitPainter_IsBase(true);
        vqpicture->initPainter(painter);
    } else {
        vqpicture->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnInitPainter(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_InitPainter_Callback(reinterpret_cast<VirtualQPicture::QPicture_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPicture_Redirected(const QPicture* self, QPoint* offset) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->redirected(offset);
    } else {
        return vqpicture->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPicture_QBaseRedirected(const QPicture* self, QPoint* offset) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_Redirected_IsBase(true);
        return vqpicture->redirected(offset);
    } else {
        return vqpicture->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnRedirected(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_Redirected_Callback(reinterpret_cast<VirtualQPicture::QPicture_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPicture_SharedPainter(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        return vqpicture->sharedPainter();
    } else {
        return vqpicture->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPicture_QBaseSharedPainter(const QPicture* self) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_SharedPainter_IsBase(true);
        return vqpicture->sharedPainter();
    } else {
        return vqpicture->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPicture_OnSharedPainter(const QPicture* self, intptr_t slot) {
    if (auto* vqpicture = const_cast<VirtualQPicture*>(dynamic_cast<const VirtualQPicture*>(self))) {
        vqpicture->setQPicture_SharedPainter_Callback(reinterpret_cast<VirtualQPicture::QPicture_SharedPainter_Callback>(slot));
    }
}

void QPicture_Delete(QPicture* self) {
    delete self;
}
