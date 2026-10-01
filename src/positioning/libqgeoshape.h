#pragma once
#ifndef POSITIONING_LIBQGEOSHAPE_H
#define POSITIONING_LIBQGEOSHAPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html)

/// q_geoshape_new constructs a new QGeoShape object.
///
QGeoShape* q_geoshape_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html)

/// q_geoshape_new2 constructs a new QGeoShape object.
///
/// @param other QGeoShape*
///
QGeoShape* q_geoshape_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self const QGeoShape*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geoshape_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self const QGeoShape*
///
bool q_geoshape_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self const QGeoShape*
///
bool q_geoshape_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self const QGeoShape*
/// @param coordinate QGeoCoordinate*
///
bool q_geoshape_contains(const void* self, const void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self const QGeoShape*
///
QGeoRectangle* q_geoshape_bounding_geo_rectangle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
///
/// @param self const QGeoShape*
///
QGeoCoordinate* q_geoshape_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#operator-eq)
///
/// @param self QGeoShape*
/// @param other QGeoShape*
///
void q_geoshape_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGeoShape*
///
const char* q_geoshape_to_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#dtor.QGeoShape)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoShape*
///
void q_geoshape_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape-h.html#qHash)
///
/// @param shape QGeoShape*
/// @param seed size_t
///
size_t q_qgeoshape_h_q_hash(const void* shape, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#public-types)

typedef enum {
    QGEOSHAPE_SHAPETYPE_UNKNOWNTYPE = 0,
    QGEOSHAPE_SHAPETYPE_RECTANGLETYPE = 1,
    QGEOSHAPE_SHAPETYPE_CIRCLETYPE = 2,
    QGEOSHAPE_SHAPETYPE_PATHTYPE = 3,
    QGEOSHAPE_SHAPETYPE_POLYGONTYPE = 4
} QGeoShape__ShapeType;

#endif
