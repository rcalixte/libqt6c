#pragma once
#ifndef SRCC_LIBVIRTUALQPICTURE_H
#define SRCC_LIBVIRTUALQPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPicture so that we can call protected methods
class VirtualQPicture : public QPicture {

  public:
    // Virtual class public types (including callbacks)
    using QPicture_DevType_Callback = int (*)();
    using QPicture_SetData_Callback = void (*)(QPicture*, const char*, uint);
    using QPicture_PaintEngine_Callback = QPaintEngine* (*)();
    using QPicture_Metric_Callback = int (*)(const QPicture*, QPaintDevice::PaintDeviceMetric);
    using QPicture_InitPainter_Callback = void (*)(const QPicture*, QPainter*);
    using QPicture_Redirected_Callback = QPaintDevice* (*)(const QPicture*, QPoint*);
    using QPicture_SharedPainter_Callback = QPainter* (*)();

  protected:
    // Instance callback storage
    QPicture_DevType_Callback qpicture_devtype_callback = nullptr;
    QPicture_SetData_Callback qpicture_setdata_callback = nullptr;
    QPicture_PaintEngine_Callback qpicture_paintengine_callback = nullptr;
    QPicture_Metric_Callback qpicture_metric_callback = nullptr;
    QPicture_InitPainter_Callback qpicture_initpainter_callback = nullptr;
    QPicture_Redirected_Callback qpicture_redirected_callback = nullptr;
    QPicture_SharedPainter_Callback qpicture_sharedpainter_callback = nullptr;

    // Instance base flags
    mutable bool qpicture_devtype_isbase = false;
    mutable bool qpicture_setdata_isbase = false;
    mutable bool qpicture_paintengine_isbase = false;
    mutable bool qpicture_metric_isbase = false;
    mutable bool qpicture_initpainter_isbase = false;
    mutable bool qpicture_redirected_isbase = false;
    mutable bool qpicture_sharedpainter_isbase = false;

  public:
    VirtualQPicture() : QPicture(){};
    VirtualQPicture(const QPicture& param1) : QPicture(param1){};
    VirtualQPicture(int formatVersion) : QPicture(formatVersion){};

    ~VirtualQPicture() {
        qpicture_devtype_callback = nullptr;
        qpicture_setdata_callback = nullptr;
        qpicture_paintengine_callback = nullptr;
        qpicture_metric_callback = nullptr;
        qpicture_initpainter_callback = nullptr;
        qpicture_redirected_callback = nullptr;
        qpicture_sharedpainter_callback = nullptr;
    }

    // Callback setters
    void setQPicture_DevType_Callback(QPicture_DevType_Callback cb) { qpicture_devtype_callback = cb; }
    void setQPicture_SetData_Callback(QPicture_SetData_Callback cb) { qpicture_setdata_callback = cb; }
    void setQPicture_PaintEngine_Callback(QPicture_PaintEngine_Callback cb) { qpicture_paintengine_callback = cb; }
    void setQPicture_Metric_Callback(QPicture_Metric_Callback cb) { qpicture_metric_callback = cb; }
    void setQPicture_InitPainter_Callback(QPicture_InitPainter_Callback cb) { qpicture_initpainter_callback = cb; }
    void setQPicture_Redirected_Callback(QPicture_Redirected_Callback cb) { qpicture_redirected_callback = cb; }
    void setQPicture_SharedPainter_Callback(QPicture_SharedPainter_Callback cb) { qpicture_sharedpainter_callback = cb; }

    // Base flag setters
    void setQPicture_DevType_IsBase(bool value) const { qpicture_devtype_isbase = value; }
    void setQPicture_SetData_IsBase(bool value) const { qpicture_setdata_isbase = value; }
    void setQPicture_PaintEngine_IsBase(bool value) const { qpicture_paintengine_isbase = value; }
    void setQPicture_Metric_IsBase(bool value) const { qpicture_metric_isbase = value; }
    void setQPicture_InitPainter_IsBase(bool value) const { qpicture_initpainter_isbase = value; }
    void setQPicture_Redirected_IsBase(bool value) const { qpicture_redirected_isbase = value; }
    void setQPicture_SharedPainter_IsBase(bool value) const { qpicture_sharedpainter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpicture_devtype_isbase) {
            qpicture_devtype_isbase = false;
            return QPicture::devType();
        } else if (qpicture_devtype_callback != nullptr) {
            return qpicture_devtype_callback();
        } else {
            return QPicture::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setData(const char* data, uint size) override {
        if (qpicture_setdata_isbase) {
            qpicture_setdata_isbase = false;
            QPicture::setData(data, size);
        } else if (qpicture_setdata_callback != nullptr) {
            qpicture_setdata_callback(this, data, size);
        } else {
            QPicture::setData(data, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpicture_paintengine_isbase) {
            qpicture_paintengine_isbase = false;
            return QPicture::paintEngine();
        } else if (qpicture_paintengine_callback != nullptr) {
            return qpicture_paintengine_callback();
        } else {
            return QPicture::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
        if (qpicture_metric_isbase) {
            qpicture_metric_isbase = false;
            return QPicture::metric(m);
        } else if (qpicture_metric_callback != nullptr) {
            return qpicture_metric_callback(this, m);
        } else {
            return QPicture::metric(m);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpicture_initpainter_isbase) {
            qpicture_initpainter_isbase = false;
            QPicture::initPainter(painter);
        } else if (qpicture_initpainter_callback != nullptr) {
            qpicture_initpainter_callback(this, painter);
        } else {
            QPicture::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpicture_redirected_isbase) {
            qpicture_redirected_isbase = false;
            return QPicture::redirected(offset);
        } else if (qpicture_redirected_callback != nullptr) {
            return qpicture_redirected_callback(this, offset);
        } else {
            return QPicture::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpicture_sharedpainter_isbase) {
            qpicture_sharedpainter_isbase = false;
            return QPicture::sharedPainter();
        } else if (qpicture_sharedpainter_callback != nullptr) {
            return qpicture_sharedpainter_callback();
        } else {
            return QPicture::sharedPainter();
        }
    }
};

#endif
