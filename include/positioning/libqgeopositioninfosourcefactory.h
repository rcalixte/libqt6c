#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFOSOURCEFACTORY_H
#define SRC_POSITIONING_QT6C_LIBQGEOPOSITIONINFOSOURCEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#positionInfoSource)
///
/// @param self QGeoPositionInfoSourceFactory*
/// @param parent QObject*
/// @param parameters libqt_map /* of const char* to QVariant* */
///
QGeoPositionInfoSource* q_geopositioninfosourcefactory_position_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#satelliteInfoSource)
///
/// @param self QGeoPositionInfoSourceFactory*
/// @param parent QObject*
/// @param parameters libqt_map /* of const char* to QVariant* */
///
QGeoSatelliteInfoSource* q_geopositioninfosourcefactory_satellite_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#areaMonitor)
///
/// @param self QGeoPositionInfoSourceFactory*
/// @param parent QObject*
/// @param parameters libqt_map /* of const char* to QVariant* */
///
QGeoAreaMonitorSource* q_geopositioninfosourcefactory_area_monitor(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#operator-eq)
///
/// @param self QGeoPositionInfoSourceFactory*
/// @param param1 QGeoPositionInfoSourceFactory*
///
void q_geopositioninfosourcefactory_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeopositioninfosourcefactory.html#dtor.QGeoPositionInfoSourceFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoPositionInfoSourceFactory*
///
void q_geopositioninfosourcefactory_delete(void* self);

#endif
