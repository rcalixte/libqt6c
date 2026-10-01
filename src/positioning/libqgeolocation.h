#pragma once
#ifndef POSITIONING_LIBQGEOLOCATION_H
#define POSITIONING_LIBQGEOLOCATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html)

/// q_geolocation_new constructs a new QGeoLocation object.
///
QGeoLocation* q_geolocation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html)

/// q_geolocation_new2 constructs a new QGeoLocation object.
///
/// @param other QGeoLocation*
///
QGeoLocation* q_geolocation_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#operator-eq)
///
/// @param self QGeoLocation*
/// @param other QGeoLocation*
///
void q_geolocation_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#swap)
///
/// @param self QGeoLocation*
/// @param other QGeoLocation*
///
void q_geolocation_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#address)
///
/// @param self const QGeoLocation*
///
QGeoAddress* q_geolocation_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setAddress)
///
/// @param self QGeoLocation*
/// @param address QGeoAddress*
///
void q_geolocation_set_address(void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#coordinate)
///
/// @param self const QGeoLocation*
///
QGeoCoordinate* q_geolocation_coordinate(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setCoordinate)
///
/// @param self QGeoLocation*
/// @param position QGeoCoordinate*
///
void q_geolocation_set_coordinate(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#boundingShape)
///
/// @param self const QGeoLocation*
///
QGeoShape* q_geolocation_bounding_shape(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setBoundingShape)
///
/// @param self QGeoLocation*
/// @param shape QGeoShape*
///
void q_geolocation_set_bounding_shape(void* self, const void* shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QGeoLocation*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_geolocation_extended_attributes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setExtendedAttributes)
///
/// @param self QGeoLocation*
/// @param data libqt_map of const char* to QVariant*
///
void q_geolocation_set_extended_attributes(void* self, libqt_map data);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#isEmpty)
///
/// @param self const QGeoLocation*
///
bool q_geolocation_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#dtor.QGeoLocation)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoLocation*
///
void q_geolocation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation-h.html#qHash)
///
/// @param location QGeoLocation*
/// @param seed size_t
///
size_t q_qgeolocation_h_q_hash(const void* location, size_t seed);
#endif
