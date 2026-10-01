#pragma once
#ifndef POSITIONING_LIBQGEOPOSITIONINFOSOURCEFACTORY_H
#define POSITIONING_LIBQGEOPOSITIONINFOSOURCEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#operator-eq)
///
/// @param self QGeoPositionInfoSourceFactory*
/// @param param1 QGeoPositionInfoSourceFactory*
///
void q_geopositioninfosourcefactory_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#dtor.QGeoPositionInfoSourceFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPositionInfoSourceFactory*
///
void q_geopositioninfosourcefactory_delete(void* self);

#endif
