#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOSERVICEPROVIDERFACTORY_H
#define SRC_LOCATION_QT6C_LIBQGEOSERVICEPROVIDERFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoserviceproviderfactory.html)

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
