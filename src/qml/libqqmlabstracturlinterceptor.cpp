#include <QQmlAbstractUrlInterceptor>
#include <QUrl>
#include <qqmlabstracturlinterceptor.h>
#include "libqqmlabstracturlinterceptor.hpp"
#include "libqqmlabstracturlinterceptor.hxx"

QQmlAbstractUrlInterceptor* QQmlAbstractUrlInterceptor_New() {
    return new VirtualQQmlAbstractUrlInterceptor();
}

QUrl* QQmlAbstractUrlInterceptor_Intercept(QQmlAbstractUrlInterceptor* self, const QUrl* path, int type) {
    return new QUrl(self->intercept(*path, static_cast<QQmlAbstractUrlInterceptor::DataType>(type)));
}

void QQmlAbstractUrlInterceptor_OperatorAssign(QQmlAbstractUrlInterceptor* self, const QQmlAbstractUrlInterceptor* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
QUrl* QQmlAbstractUrlInterceptor_SuperIntercept(QQmlAbstractUrlInterceptor* self, const QUrl* path, int type) {
    auto* vqqmlabstracturlinterceptor = dynamic_cast<VirtualQQmlAbstractUrlInterceptor*>(self);
    if (vqqmlabstracturlinterceptor && vqqmlabstracturlinterceptor->isVirtualQQmlAbstractUrlInterceptor) {
        vqqmlabstracturlinterceptor->setQQmlAbstractUrlInterceptor_Intercept_IsBase(true);
        return new QUrl(vqqmlabstracturlinterceptor->intercept(*path, static_cast<QQmlAbstractUrlInterceptor::DataType>(type)));
    } else {
        return new QUrl(((VirtualQQmlAbstractUrlInterceptor*)self)->intercept(*path, static_cast<QQmlAbstractUrlInterceptor::DataType>(type)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlAbstractUrlInterceptor_OnIntercept(QQmlAbstractUrlInterceptor* self, intptr_t slot) {
    auto* vqqmlabstracturlinterceptor = dynamic_cast<VirtualQQmlAbstractUrlInterceptor*>(self);
    if (vqqmlabstracturlinterceptor && vqqmlabstracturlinterceptor->isVirtualQQmlAbstractUrlInterceptor)
        vqqmlabstracturlinterceptor->setQQmlAbstractUrlInterceptor_Intercept_Callback(reinterpret_cast<VirtualQQmlAbstractUrlInterceptor::QQmlAbstractUrlInterceptor_Intercept_Callback>(slot));
}

void QQmlAbstractUrlInterceptor_Delete(QQmlAbstractUrlInterceptor* self) {
    delete self;
}
