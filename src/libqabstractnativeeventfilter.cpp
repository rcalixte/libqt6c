#include <QAbstractNativeEventFilter>
#include <QByteArray>
#include <qabstractnativeeventfilter.h>
#include "libqabstractnativeeventfilter.hpp"
#include "libqabstractnativeeventfilter.hxx"

QAbstractNativeEventFilter* QAbstractNativeEventFilter_new() {
    return new VirtualQAbstractNativeEventFilter();
}

// Derived class handler implementation
bool QAbstractNativeEventFilter_NativeEventFilter(QAbstractNativeEventFilter* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self)) {
        return vqabstractnativeeventfilter->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractnativeeventfilter->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractNativeEventFilter_QBaseNativeEventFilter(QAbstractNativeEventFilter* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self)) {
        vqabstractnativeeventfilter->setQAbstractNativeEventFilter_NativeEventFilter_IsBase(true);
        return vqabstractnativeeventfilter->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractnativeeventfilter->nativeEventFilter(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractNativeEventFilter_OnNativeEventFilter(QAbstractNativeEventFilter* self, intptr_t slot) {
    if (auto* vqabstractnativeeventfilter = dynamic_cast<VirtualQAbstractNativeEventFilter*>(self)) {
        vqabstractnativeeventfilter->setQAbstractNativeEventFilter_NativeEventFilter_Callback(reinterpret_cast<VirtualQAbstractNativeEventFilter::QAbstractNativeEventFilter_NativeEventFilter_Callback>(slot));
    }
}

void QAbstractNativeEventFilter_Delete(QAbstractNativeEventFilter* self) {
    delete self;
}
