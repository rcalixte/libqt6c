#pragma once
#ifndef QML_LIBQQMLABSTRACTURLINTERCEPTOR_H
#define QML_LIBQQMLABSTRACTURLINTERCEPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html)

/// q_qmlabstracturlinterceptor_new constructs a new QQmlAbstractUrlInterceptor object.
///
QQmlAbstractUrlInterceptor* q_qmlabstracturlinterceptor_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
///
/// @param self QQmlAbstractUrlInterceptor*
/// @param path QUrl*
/// @param type enum QQmlAbstractUrlInterceptor__DataType
///
QUrl* q_qmlabstracturlinterceptor_intercept(void* self, void* path, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
///
/// Allows for overriding the related default method
///
/// @param self QQmlAbstractUrlInterceptor*
/// @param callback QUrl* func(QQmlAbstractUrlInterceptor* self, QUrl* path, enum QQmlAbstractUrlInterceptor__DataType type)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_qmlabstracturlinterceptor_on_intercept(void* self, QUrl* (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#intercept)
///
/// Base class method implementation
///
/// @param self QQmlAbstractUrlInterceptor*
/// @param path QUrl*
/// @param type enum QQmlAbstractUrlInterceptor__DataType
///
QUrl* q_qmlabstracturlinterceptor_super_intercept(void* self, void* path, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#operator-eq)
///
/// @param self QQmlAbstractUrlInterceptor*
/// @param param1 QQmlAbstractUrlInterceptor*
///
void q_qmlabstracturlinterceptor_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#dtor.QQmlAbstractUrlInterceptor)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlAbstractUrlInterceptor*
///
void q_qmlabstracturlinterceptor_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlabstracturlinterceptor.html#public-types)

typedef enum {
    QQMLABSTRACTURLINTERCEPTOR_DATATYPE_QMLFILE = 0,
    QQMLABSTRACTURLINTERCEPTOR_DATATYPE_JAVASCRIPTFILE = 1,
    QQMLABSTRACTURLINTERCEPTOR_DATATYPE_QMLDIRFILE = 2,
    QQMLABSTRACTURLINTERCEPTOR_DATATYPE_URLSTRING = 4096
} QQmlAbstractUrlInterceptor__DataType;

#endif
