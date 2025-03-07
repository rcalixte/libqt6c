#pragma once
#ifndef SRCC_LIBVIRTUALQPIXMAP_H
#define SRCC_LIBVIRTUALQPIXMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPixmap so that we can call protected methods
class VirtualQPixmap : public QPixmap {

  public:
    // Virtual class public types (including callbacks)
    using QPixmap_DevType_Callback = int (*)();
    using QPixmap_PaintEngine_Callback = QPaintEngine* (*)();
    using QPixmap_Metric_Callback = int (*)(const QPixmap*, QPaintDevice::PaintDeviceMetric);
    using QPixmap_InitPainter_Callback = void (*)(const QPixmap*, QPainter*);
    using QPixmap_Redirected_Callback = QPaintDevice* (*)(const QPixmap*, QPoint*);
    using QPixmap_SharedPainter_Callback = QPainter* (*)();

  protected:
    // Instance callback storage
    QPixmap_DevType_Callback qpixmap_devtype_callback = nullptr;
    QPixmap_PaintEngine_Callback qpixmap_paintengine_callback = nullptr;
    QPixmap_Metric_Callback qpixmap_metric_callback = nullptr;
    QPixmap_InitPainter_Callback qpixmap_initpainter_callback = nullptr;
    QPixmap_Redirected_Callback qpixmap_redirected_callback = nullptr;
    QPixmap_SharedPainter_Callback qpixmap_sharedpainter_callback = nullptr;

    // Instance base flags
    mutable bool qpixmap_devtype_isbase = false;
    mutable bool qpixmap_paintengine_isbase = false;
    mutable bool qpixmap_metric_isbase = false;
    mutable bool qpixmap_initpainter_isbase = false;
    mutable bool qpixmap_redirected_isbase = false;
    mutable bool qpixmap_sharedpainter_isbase = false;

  public:
    VirtualQPixmap() : QPixmap(){};
    VirtualQPixmap(int w, int h) : QPixmap(w, h){};
    VirtualQPixmap(const QSize& param1) : QPixmap(param1){};
    VirtualQPixmap(const QString& fileName) : QPixmap(fileName){};
    VirtualQPixmap(const QPixmap& param1) : QPixmap(param1){};
    VirtualQPixmap(const QString& fileName, const char* format) : QPixmap(fileName, format){};
    VirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags) : QPixmap(fileName, format, flags){};

    ~VirtualQPixmap() {
        qpixmap_devtype_callback = nullptr;
        qpixmap_paintengine_callback = nullptr;
        qpixmap_metric_callback = nullptr;
        qpixmap_initpainter_callback = nullptr;
        qpixmap_redirected_callback = nullptr;
        qpixmap_sharedpainter_callback = nullptr;
    }

    // Callback setters
    void setQPixmap_DevType_Callback(QPixmap_DevType_Callback cb) { qpixmap_devtype_callback = cb; }
    void setQPixmap_PaintEngine_Callback(QPixmap_PaintEngine_Callback cb) { qpixmap_paintengine_callback = cb; }
    void setQPixmap_Metric_Callback(QPixmap_Metric_Callback cb) { qpixmap_metric_callback = cb; }
    void setQPixmap_InitPainter_Callback(QPixmap_InitPainter_Callback cb) { qpixmap_initpainter_callback = cb; }
    void setQPixmap_Redirected_Callback(QPixmap_Redirected_Callback cb) { qpixmap_redirected_callback = cb; }
    void setQPixmap_SharedPainter_Callback(QPixmap_SharedPainter_Callback cb) { qpixmap_sharedpainter_callback = cb; }

    // Base flag setters
    void setQPixmap_DevType_IsBase(bool value) const { qpixmap_devtype_isbase = value; }
    void setQPixmap_PaintEngine_IsBase(bool value) const { qpixmap_paintengine_isbase = value; }
    void setQPixmap_Metric_IsBase(bool value) const { qpixmap_metric_isbase = value; }
    void setQPixmap_InitPainter_IsBase(bool value) const { qpixmap_initpainter_isbase = value; }
    void setQPixmap_Redirected_IsBase(bool value) const { qpixmap_redirected_isbase = value; }
    void setQPixmap_SharedPainter_IsBase(bool value) const { qpixmap_sharedpainter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpixmap_devtype_isbase) {
            qpixmap_devtype_isbase = false;
            return QPixmap::devType();
        } else if (qpixmap_devtype_callback != nullptr) {
            return qpixmap_devtype_callback();
        } else {
            return QPixmap::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpixmap_paintengine_isbase) {
            qpixmap_paintengine_isbase = false;
            return QPixmap::paintEngine();
        } else if (qpixmap_paintengine_callback != nullptr) {
            return qpixmap_paintengine_callback();
        } else {
            return QPixmap::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpixmap_metric_isbase) {
            qpixmap_metric_isbase = false;
            return QPixmap::metric(param1);
        } else if (qpixmap_metric_callback != nullptr) {
            return qpixmap_metric_callback(this, param1);
        } else {
            return QPixmap::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpixmap_initpainter_isbase) {
            qpixmap_initpainter_isbase = false;
            QPixmap::initPainter(painter);
        } else if (qpixmap_initpainter_callback != nullptr) {
            qpixmap_initpainter_callback(this, painter);
        } else {
            QPixmap::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpixmap_redirected_isbase) {
            qpixmap_redirected_isbase = false;
            return QPixmap::redirected(offset);
        } else if (qpixmap_redirected_callback != nullptr) {
            return qpixmap_redirected_callback(this, offset);
        } else {
            return QPixmap::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpixmap_sharedpainter_isbase) {
            qpixmap_sharedpainter_isbase = false;
            return QPixmap::sharedPainter();
        } else if (qpixmap_sharedpainter_callback != nullptr) {
            return qpixmap_sharedpainter_callback();
        } else {
            return QPixmap::sharedPainter();
        }
    }
};

#endif
