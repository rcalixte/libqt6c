#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOSATELLITEINFO_H
#define SRC_POSITIONING_QT6C_LIBQGEOSATELLITEINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html)

/// q_geosatelliteinfo_new constructs a new QGeoSatelliteInfo object.
///
QGeoSatelliteInfo* q_geosatelliteinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html)

/// q_geosatelliteinfo_new2 constructs a new QGeoSatelliteInfo object.
///
/// @param other QGeoSatelliteInfo*
///
QGeoSatelliteInfo* q_geosatelliteinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#operator-eq)
///
/// @param self QGeoSatelliteInfo*
/// @param other QGeoSatelliteInfo*
///
void q_geosatelliteinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#swap)
///
/// @param self QGeoSatelliteInfo*
/// @param other QGeoSatelliteInfo*
///
void q_geosatelliteinfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteSystem)
///
/// @param self QGeoSatelliteInfo*
/// @param system enum QGeoSatelliteInfo__SatelliteSystem
///
void q_geosatelliteinfo_set_satellite_system(void* self, int32_t system);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteSystem)
///
/// @param self QGeoSatelliteInfo*
///
/// @return enum QGeoSatelliteInfo__SatelliteSystem
///
int32_t q_geosatelliteinfo_satellite_system(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSatelliteIdentifier)
///
/// @param self QGeoSatelliteInfo*
/// @param satId int
///
void q_geosatelliteinfo_set_satellite_identifier(void* self, int satId);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#satelliteIdentifier)
///
/// @param self QGeoSatelliteInfo*
///
int32_t q_geosatelliteinfo_satellite_identifier(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setSignalStrength)
///
/// @param self QGeoSatelliteInfo*
/// @param signalStrength int
///
void q_geosatelliteinfo_set_signal_strength(void* self, int signalStrength);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#signalStrength)
///
/// @param self QGeoSatelliteInfo*
///
int32_t q_geosatelliteinfo_signal_strength(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#setAttribute)
///
/// @param self QGeoSatelliteInfo*
/// @param attribute enum QGeoSatelliteInfo__Attribute
/// @param value double
///
void q_geosatelliteinfo_set_attribute(void* self, int32_t attribute, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#attribute)
///
/// @param self QGeoSatelliteInfo*
/// @param attribute enum QGeoSatelliteInfo__Attribute
///
double q_geosatelliteinfo_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#removeAttribute)
///
/// @param self QGeoSatelliteInfo*
/// @param attribute enum QGeoSatelliteInfo__Attribute
///
void q_geosatelliteinfo_remove_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#hasAttribute)
///
/// @param self QGeoSatelliteInfo*
/// @param attribute enum QGeoSatelliteInfo__Attribute
///
bool q_geosatelliteinfo_has_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#detach)
///
/// @param self QGeoSatelliteInfo*
///
void q_geosatelliteinfo_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#dtor.QGeoSatelliteInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoSatelliteInfo*
///
void q_geosatelliteinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#public-types)

typedef enum {
    QGEOSATELLITEINFO_ATTRIBUTE_ELEVATION = 0,
    QGEOSATELLITEINFO_ATTRIBUTE_AZIMUTH = 1
} QGeoSatelliteInfo__Attribute;

/// [Upstream resources](https://doc.qt.io/qt-6/qgeosatelliteinfo.html#public-types)

typedef enum {
    QGEOSATELLITEINFO_SATELLITESYSTEM_UNDEFINED = 0,
    QGEOSATELLITEINFO_SATELLITESYSTEM_GPS = 1,
    QGEOSATELLITEINFO_SATELLITESYSTEM_GLONASS = 2,
    QGEOSATELLITEINFO_SATELLITESYSTEM_GALILEO = 3,
    QGEOSATELLITEINFO_SATELLITESYSTEM_BEIDOU = 4,
    QGEOSATELLITEINFO_SATELLITESYSTEM_QZSS = 5,
    QGEOSATELLITEINFO_SATELLITESYSTEM_MULTIPLE = 255,
    QGEOSATELLITEINFO_SATELLITESYSTEM_CUSTOMTYPE = 256
} QGeoSatelliteInfo__SatelliteSystem;

#endif
