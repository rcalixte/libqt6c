#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACESEARCHRESULT_H
#define SRC_LOCATION_QT6C_LIBQPLACESEARCHRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html)

/// q_placesearchresult_new constructs a new QPlaceSearchResult object.
///
QPlaceSearchResult* q_placesearchresult_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html)

/// q_placesearchresult_new2 constructs a new QPlaceSearchResult object.
///
/// @param other QPlaceSearchResult*
///
QPlaceSearchResult* q_placesearchresult_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
///
/// @param self QPlaceSearchResult*
/// @param other QPlaceSearchResult*
///
void q_placesearchresult_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
///
/// @param self QPlaceSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placesearchresult_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
///
/// @param self QPlaceSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placesearchresult_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
///
/// @param self QPlaceSearchResult*
///
/// @return enum QPlaceSearchResult__SearchResultType
///
int32_t q_placesearchresult_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchResult*
///
const char* q_placesearchresult_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
///
/// @param self QPlaceSearchResult*
/// @param title const char*
///
void q_placesearchresult_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
///
/// @param self QPlaceSearchResult*
///
QPlaceIcon* q_placesearchresult_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
///
/// @param self QPlaceSearchResult*
/// @param icon QPlaceIcon*
///
void q_placesearchresult_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#dtor.QPlaceSearchResult)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSearchResult*
///
void q_placesearchresult_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#public-types)

typedef enum {
    QPLACESEARCHRESULT_SEARCHRESULTTYPE_UNKNOWNSEARCHRESULT = 0,
    QPLACESEARCHRESULT_SEARCHRESULTTYPE_PLACERESULT = 1,
    QPLACESEARCHRESULT_SEARCHRESULTTYPE_PROPOSEDSEARCHRESULT = 2
} QPlaceSearchResult__SearchResultType;

#endif
