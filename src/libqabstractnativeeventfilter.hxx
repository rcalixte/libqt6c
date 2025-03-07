#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTNATIVEEVENTFILTER_H
#define SRCC_LIBVIRTUALQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractNativeEventFilter so that we can call protected methods
class VirtualQAbstractNativeEventFilter : public QAbstractNativeEventFilter {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractNativeEventFilter_NativeEventFilter_Callback = bool (*)(QAbstractNativeEventFilter*, const QByteArray&, void*, qintptr*);

  protected:
    // Instance callback storage
    QAbstractNativeEventFilter_NativeEventFilter_Callback qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;

    // Instance base flags
    mutable bool qabstractnativeeventfilter_nativeeventfilter_isbase = false;

  public:
    VirtualQAbstractNativeEventFilter() : QAbstractNativeEventFilter(){};

    ~VirtualQAbstractNativeEventFilter() {
        qabstractnativeeventfilter_nativeeventfilter_callback = nullptr;
    }

    // Callback setters
    void setQAbstractNativeEventFilter_NativeEventFilter_Callback(QAbstractNativeEventFilter_NativeEventFilter_Callback cb) { qabstractnativeeventfilter_nativeeventfilter_callback = cb; }

    // Base flag setters
    void setQAbstractNativeEventFilter_NativeEventFilter_IsBase(bool value) const { qabstractnativeeventfilter_nativeeventfilter_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEventFilter(const QByteArray& eventType, void* message, qintptr* result) override {
        return qabstractnativeeventfilter_nativeeventfilter_callback(this, eventType, message, result);
    }
};

#endif
