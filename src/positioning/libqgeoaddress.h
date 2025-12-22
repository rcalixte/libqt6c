#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOADDRESS_H
#define SRC_POSITIONING_QT6C_LIBQGEOADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html)

/// q_geoaddress_new constructs a new QGeoAddress object.
///
QGeoAddress* q_geoaddress_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html)

/// q_geoaddress_new2 constructs a new QGeoAddress object.
///
/// @param other QGeoAddress*
///
QGeoAddress* q_geoaddress_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#operator-eq)
///
/// @param self QGeoAddress*
/// @param other QGeoAddress*
///
void q_geoaddress_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#swap)
///
/// @param self QGeoAddress*
/// @param other QGeoAddress*
///
void q_geoaddress_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setText)
///
/// @param self QGeoAddress*
/// @param text const char*
///
void q_geoaddress_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#country)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_country(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountry)
///
/// @param self QGeoAddress*
/// @param country const char*
///
void q_geoaddress_set_country(void* self, const char* country);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#countryCode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_country_code(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCountryCode)
///
/// @param self QGeoAddress*
/// @param countryCode const char*
///
void q_geoaddress_set_country_code(void* self, const char* countryCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setState)
///
/// @param self QGeoAddress*
/// @param state const char*
///
void q_geoaddress_set_state(void* self, const char* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#county)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_county(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCounty)
///
/// @param self QGeoAddress*
/// @param county const char*
///
void q_geoaddress_set_county(void* self, const char* county);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#city)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_city(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setCity)
///
/// @param self QGeoAddress*
/// @param city const char*
///
void q_geoaddress_set_city(void* self, const char* city);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#district)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_district(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setDistrict)
///
/// @param self QGeoAddress*
/// @param district const char*
///
void q_geoaddress_set_district(void* self, const char* district);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#postalCode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_postal_code(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setPostalCode)
///
/// @param self QGeoAddress*
/// @param postalCode const char*
///
void q_geoaddress_set_postal_code(void* self, const char* postalCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#street)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_street(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreet)
///
/// @param self QGeoAddress*
/// @param street const char*
///
void q_geoaddress_set_street(void* self, const char* street);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#streetNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoAddress*
///
const char* q_geoaddress_street_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#setStreetNumber)
///
/// @param self QGeoAddress*
/// @param streetNumber const char*
///
void q_geoaddress_set_street_number(void* self, const char* streetNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isEmpty)
///
/// @param self QGeoAddress*
///
bool q_geoaddress_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#clear)
///
/// @param self QGeoAddress*
///
void q_geoaddress_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#isTextGenerated)
///
/// @param self QGeoAddress*
///
bool q_geoaddress_is_text_generated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoaddress.html#dtor.QGeoAddress)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoAddress*
///
void q_geoaddress_delete(void* self);

#endif
