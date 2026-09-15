#pragma once
#ifndef LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_H
#define LOCATION_LIBQGEOSERVICEPROVIDERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html)

/// q_geoserviceproviderfactory_new constructs a new QGeoServiceProviderFactory object.
///
QGeoServiceProviderFactory* q_geoserviceproviderfactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
///
/// @param self QGeoServiceProviderFactory*
/// @param engine QQmlEngine*
///
void q_geoserviceproviderfactory_set_qml_engine(void* self, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
///
/// Allows for overriding the related default method
///
/// @param self QGeoServiceProviderFactory*
/// @param callback void func(QGeoServiceProviderFactory* self, QQmlEngine* engine)
///
void q_geoserviceproviderfactory_on_set_qml_engine(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#setQmlEngine)
///
/// Base class method implementation
///
/// @param self QGeoServiceProviderFactory*
/// @param engine QQmlEngine*
///
void q_geoserviceproviderfactory_super_set_qml_engine(void* self, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#operator-eq)
///
/// @param self QGeoServiceProviderFactory*
/// @param param1 QGeoServiceProviderFactory*
///
void q_geoserviceproviderfactory_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html#dtor.QGeoServiceProviderFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoServiceProviderFactory*
///
void q_geoserviceproviderfactory_delete(void* self);

#endif
