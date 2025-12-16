#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOSHAPE_H
#define SRC_POSITIONING_QT6C_LIBQGEOSHAPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QGeoShape* q_geoshape_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#type)
///
/// @param self QGeoShape*
///
/// @return enum QGeoShape__ShapeType
///
int32_t q_geoshape_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isValid)
///
/// @param self QGeoShape*
///
bool q_geoshape_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#isEmpty)
///
/// @param self QGeoShape*
///
bool q_geoshape_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#contains)
///
/// @param self QGeoShape*
/// @param coordinate QGeoCoordinate*
///
bool q_geoshape_contains(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#boundingGeoRectangle)
///
/// @param self QGeoShape*
///
QGeoRectangle* q_geoshape_bounding_geo_rectangle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#center)
///
/// @param self QGeoShape*
///
QGeoCoordinate* q_geoshape_center(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#operator-eq)
///
/// @param self QGeoShape*
/// @param other QGeoShape*
///
void q_geoshape_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGeoShape*
///
const char* q_geoshape_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#dtor.QGeoShape)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoShape*
///
void q_geoshape_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoshape.html#public-types)

typedef enum {
    QGEOSHAPE_SHAPETYPE_UNKNOWNTYPE = 0,
    QGEOSHAPE_SHAPETYPE_RECTANGLETYPE = 1,
    QGEOSHAPE_SHAPETYPE_CIRCLETYPE = 2,
    QGEOSHAPE_SHAPETYPE_PATHTYPE = 3,
    QGEOSHAPE_SHAPETYPE_POLYGONTYPE = 4
} QGeoShape__ShapeType;

#endif
