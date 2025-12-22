#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACERATINGS_H
#define SRC_LOCATION_QT6C_LIBQPLACERATINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html)

/// q_placeratings_new constructs a new QPlaceRatings object.
///
QPlaceRatings* q_placeratings_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html)

/// q_placeratings_new2 constructs a new QPlaceRatings object.
///
/// @param other QPlaceRatings*
///
QPlaceRatings* q_placeratings_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#operator-eq)
///
/// @param self QPlaceRatings*
/// @param other QPlaceRatings*
///
void q_placeratings_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#swap)
///
/// @param self QPlaceRatings*
/// @param other QPlaceRatings*
///
void q_placeratings_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#average)
///
/// @param self QPlaceRatings*
///
double q_placeratings_average(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setAverage)
///
/// @param self QPlaceRatings*
/// @param average double
///
void q_placeratings_set_average(void* self, double average);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#count)
///
/// @param self QPlaceRatings*
///
int32_t q_placeratings_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setCount)
///
/// @param self QPlaceRatings*
/// @param count int
///
void q_placeratings_set_count(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#maximum)
///
/// @param self QPlaceRatings*
///
double q_placeratings_maximum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#setMaximum)
///
/// @param self QPlaceRatings*
/// @param max double
///
void q_placeratings_set_maximum(void* self, double max);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#isEmpty)
///
/// @param self QPlaceRatings*
///
bool q_placeratings_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceratings.html#dtor.QPlaceRatings)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceRatings*
///
void q_placeratings_delete(void* self);

#endif
