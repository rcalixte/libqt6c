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
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self QQmlNetworkAccessManagerFactory*
/// @param parent QObject*
///
QNetworkAccessManager* q_qmlnetworkaccessmanagerfactory_create(void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#dtor.QQmlNetworkAccessManagerFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlNetworkAccessManagerFactory*
///
void q_qmlnetworkaccessmanagerfactory_delete(void* self);

#endif
