#pragma once
#ifndef QML_LIBQQMLNETWORKACCESSMANAGERFACTORY_H
#define QML_LIBQQMLNETWORKACCESSMANAGERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#create)
///
/// @param self QQmlNetworkAccessManagerFactory*
/// @param parent QObject*
///
QNetworkAccessManager* q_qmlnetworkaccessmanagerfactory_create(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#operator-eq)
///
/// @param self QQmlNetworkAccessManagerFactory*
/// @param param1 QQmlNetworkAccessManagerFactory*
///
void q_qmlnetworkaccessmanagerfactory_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#dtor.QQmlNetworkAccessManagerFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlNetworkAccessManagerFactory*
///
void q_qmlnetworkaccessmanagerfactory_delete(void* self);

#endif
