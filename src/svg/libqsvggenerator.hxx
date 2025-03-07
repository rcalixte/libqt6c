#pragma once
#ifndef SRC_SVGC_LIBVIRTUALQSVGGENERATOR_H
#define SRC_SVGC_LIBVIRTUALQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSvgGenerator so that we can call protected methods
class VirtualQSvgGenerator : public QSvgGenerator {

  public:
    // Virtual class public types (including callbacks)
    using QSvgGenerator_PaintEngine_Callback = QPaintEngine* (*)();
    using QSvgGenerator_Metric_Callback = int (*)(const QSvgGenerator*, QPaintDevice::PaintDeviceMetric);
    using QSvgGenerator_DevType_Callback = int (*)();
    using QSvgGenerator_InitPainter_Callback = void (*)(const QSvgGenerator*, QPainter*);
    using QSvgGenerator_Redirected_Callback = QPaintDevice* (*)(const QSvgGenerator*, QPoint*);
    using QSvgGenerator_SharedPainter_Callback = QPainter* (*)();

  protected:
    // Instance callback storage
    QSvgGenerator_PaintEngine_Callback qsvggenerator_paintengine_callback = nullptr;
    QSvgGenerator_Metric_Callback qsvggenerator_metric_callback = nullptr;
    QSvgGenerator_DevType_Callback qsvggenerator_devtype_callback = nullptr;
    QSvgGenerator_InitPainter_Callback qsvggenerator_initpainter_callback = nullptr;
    QSvgGenerator_Redirected_Callback qsvggenerator_redirected_callback = nullptr;
    QSvgGenerator_SharedPainter_Callback qsvggenerator_sharedpainter_callback = nullptr;

    // Instance base flags
    mutable bool qsvggenerator_paintengine_isbase = false;
    mutable bool qsvggenerator_metric_isbase = false;
    mutable bool qsvggenerator_devtype_isbase = false;
    mutable bool qsvggenerator_initpainter_isbase = false;
    mutable bool qsvggenerator_redirected_isbase = false;
    mutable bool qsvggenerator_sharedpainter_isbase = false;

  public:
    VirtualQSvgGenerator() : QSvgGenerator(){};

    ~VirtualQSvgGenerator() {
        qsvggenerator_paintengine_callback = nullptr;
        qsvggenerator_metric_callback = nullptr;
        qsvggenerator_devtype_callback = nullptr;
        qsvggenerator_initpainter_callback = nullptr;
        qsvggenerator_redirected_callback = nullptr;
        qsvggenerator_sharedpainter_callback = nullptr;
    }

    // Callback setters
    void setQSvgGenerator_PaintEngine_Callback(QSvgGenerator_PaintEngine_Callback cb) { qsvggenerator_paintengine_callback = cb; }
    void setQSvgGenerator_Metric_Callback(QSvgGenerator_Metric_Callback cb) { qsvggenerator_metric_callback = cb; }
    void setQSvgGenerator_DevType_Callback(QSvgGenerator_DevType_Callback cb) { qsvggenerator_devtype_callback = cb; }
    void setQSvgGenerator_InitPainter_Callback(QSvgGenerator_InitPainter_Callback cb) { qsvggenerator_initpainter_callback = cb; }
    void setQSvgGenerator_Redirected_Callback(QSvgGenerator_Redirected_Callback cb) { qsvggenerator_redirected_callback = cb; }
    void setQSvgGenerator_SharedPainter_Callback(QSvgGenerator_SharedPainter_Callback cb) { qsvggenerator_sharedpainter_callback = cb; }

    // Base flag setters
    void setQSvgGenerator_PaintEngine_IsBase(bool value) const { qsvggenerator_paintengine_isbase = value; }
    void setQSvgGenerator_Metric_IsBase(bool value) const { qsvggenerator_metric_isbase = value; }
    void setQSvgGenerator_DevType_IsBase(bool value) const { qsvggenerator_devtype_isbase = value; }
    void setQSvgGenerator_InitPainter_IsBase(bool value) const { qsvggenerator_initpainter_isbase = value; }
    void setQSvgGenerator_Redirected_IsBase(bool value) const { qsvggenerator_redirected_isbase = value; }
    void setQSvgGenerator_SharedPainter_IsBase(bool value) const { qsvggenerator_sharedpainter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsvggenerator_paintengine_isbase) {
            qsvggenerator_paintengine_isbase = false;
            return QSvgGenerator::paintEngine();
        } else if (qsvggenerator_paintengine_callback != nullptr) {
            return qsvggenerator_paintengine_callback();
        } else {
            return QSvgGenerator::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
        if (qsvggenerator_metric_isbase) {
            qsvggenerator_metric_isbase = false;
            return QSvgGenerator::metric(metric);
        } else if (qsvggenerator_metric_callback != nullptr) {
            return qsvggenerator_metric_callback(this, metric);
        } else {
            return QSvgGenerator::metric(metric);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsvggenerator_devtype_isbase) {
            qsvggenerator_devtype_isbase = false;
            return QSvgGenerator::devType();
        } else if (qsvggenerator_devtype_callback != nullptr) {
            return qsvggenerator_devtype_callback();
        } else {
            return QSvgGenerator::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsvggenerator_initpainter_isbase) {
            qsvggenerator_initpainter_isbase = false;
            QSvgGenerator::initPainter(painter);
        } else if (qsvggenerator_initpainter_callback != nullptr) {
            qsvggenerator_initpainter_callback(this, painter);
        } else {
            QSvgGenerator::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsvggenerator_redirected_isbase) {
            qsvggenerator_redirected_isbase = false;
            return QSvgGenerator::redirected(offset);
        } else if (qsvggenerator_redirected_callback != nullptr) {
            return qsvggenerator_redirected_callback(this, offset);
        } else {
            return QSvgGenerator::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsvggenerator_sharedpainter_isbase) {
            qsvggenerator_sharedpainter_isbase = false;
            return QSvgGenerator::sharedPainter();
        } else if (qsvggenerator_sharedpainter_callback != nullptr) {
            return qsvggenerator_sharedpainter_callback();
        } else {
            return QSvgGenerator::sharedPainter();
        }
    }
};

#endif
