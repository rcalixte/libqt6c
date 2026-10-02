#pragma once
#ifndef LOCATION_LIBQPLACERESULT_H
#define LOCATION_LIBQPLACERESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)

/// q_placeresult_new constructs a new QPlaceResult object.
///
QPlaceResult* q_placeresult_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)

/// q_placeresult_new2 constructs a new QPlaceResult object.
///
/// @param other QPlaceSearchResult*
///
QPlaceResult* q_placeresult_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html)

/// q_placeresult_new3 constructs a new QPlaceResult object.
///
/// @param param1 QPlaceResult*
///
QPlaceResult* q_placeresult_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#distance)
///
/// @param self const QPlaceResult*
///
double q_placeresult_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setDistance)
///
/// @param self QPlaceResult*
/// @param distance double
///
void q_placeresult_set_distance(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#place)
///
/// @param self const QPlaceResult*
///
QPlace* q_placeresult_place(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setPlace)
///
/// @param self QPlaceResult*
/// @param place QPlace*
///
void q_placeresult_set_place(void* self, const void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#isSponsored)
///
/// @param self const QPlaceResult*
///
bool q_placeresult_is_sponsored(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#setSponsored)
///
/// @param self QPlaceResult*
/// @param sponsored bool
///
void q_placeresult_set_sponsored(void* self, bool sponsored);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
///
/// @param self const QPlaceResult*
/// @param other QPlaceSearchResult*
///
bool q_placeresult_operator_equal(const void* self, const void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
///
/// @param self const QPlaceResult*
/// @param other QPlaceSearchResult*
///
bool q_placeresult_operator_not_equal(const void* self, const void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
///
/// @param self const QPlaceResult*
///
/// @return enum QPlaceSearchResult__SearchResultType
///
int32_t q_placeresult_type(const void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceResult*
///
const char* q_placeresult_title(const void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
///
/// @param self QPlaceResult*
/// @param title const char*
///
void q_placeresult_set_title(void* self, const char* title);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
///
/// @param self const QPlaceResult*
///
QPlaceIcon* q_placeresult_icon(const void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
///
/// @param self QPlaceResult*
/// @param icon QPlaceIcon*
///
void q_placeresult_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceresult.html#dtor.QPlaceResult)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceResult*
///
void q_placeresult_delete(void* self);

#endif
