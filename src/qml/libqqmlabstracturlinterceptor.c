#include "../libqurl.hpp"
#include "libqqmlabstracturlinterceptor.hpp"
#include "libqqmlabstracturlinterceptor.h"

QQmlAbstractUrlInterceptor* q_qmlabstracturlinterceptor_new() {
    return QQmlAbstractUrlInterceptor_New();
}

QUrl* q_qmlabstracturlinterceptor_intercept(void* self, void* path, int32_t type) {
    return QQmlAbstractUrlInterceptor_Intercept((QQmlAbstractUrlInterceptor*)self, (QUrl*)path, type);
}

void q_qmlabstracturlinterceptor_on_intercept(void* self, QUrl* (*callback)(void*, void*, int32_t)) {
    QQmlAbstractUrlInterceptor_OnIntercept((QQmlAbstractUrlInterceptor*)self, (intptr_t)callback);
}

QUrl* q_qmlabstracturlinterceptor_super_intercept(void* self, void* path, int32_t type) {
    return QQmlAbstractUrlInterceptor_SuperIntercept((QQmlAbstractUrlInterceptor*)self, (QUrl*)path, type);
}

void q_qmlabstracturlinterceptor_operator_assign(void* self, void* param1) {
    QQmlAbstractUrlInterceptor_OperatorAssign((QQmlAbstractUrlInterceptor*)self, (QQmlAbstractUrlInterceptor*)param1);
}

void q_qmlabstracturlinterceptor_delete(void* self) {
    QQmlAbstractUrlInterceptor_Delete((QQmlAbstractUrlInterceptor*)(self));
}
