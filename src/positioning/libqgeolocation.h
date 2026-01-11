#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOLOCATION_H
#define SRC_POSITIONING_QT6C_LIBQGEOLOCATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QGeoLocation* q_geolocation_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#operator-eq)
///
/// @param self QGeoLocation*
/// @param other QGeoLocation*
///
void q_geolocation_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#swap)
///
/// @param self QGeoLocation*
/// @param other QGeoLocation*
///
void q_geolocation_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#address)
///
/// @param self QGeoLocation*
///
QGeoAddress* q_geolocation_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setAddress)
///
/// @param self QGeoLocation*
/// @param address QGeoAddress*
///
void q_geolocation_set_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#coordinate)
///
/// @param self QGeoLocation*
///
QGeoCoordinate* q_geolocation_coordinate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setCoordinate)
///
/// @param self QGeoLocation*
/// @param position QGeoCoordinate*
///
void q_geolocation_set_coordinate(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#boundingShape)
///
/// @param self QGeoLocation*
///
QGeoShape* q_geolocation_bounding_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setBoundingShape)
///
/// @param self QGeoLocation*
/// @param shape QGeoShape*
///
void q_geolocation_set_bounding_shape(void* self, void* shape);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QGeoLocation*
///
libqt_map /* of const char* to QVariant* */ q_geolocation_extended_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#setExtendedAttributes)
///
/// @param self QGeoLocation*
/// @param data libqt_map /* of const char* to QVariant* */
///
void q_geolocation_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ data);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#isEmpty)
///
/// @param self QGeoLocation*
///
bool q_geolocation_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeolocation.html#dtor.QGeoLocation)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoLocation*
///
void q_geolocation_delete(void* self);

#endif
