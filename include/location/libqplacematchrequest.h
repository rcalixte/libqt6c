#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEMATCHREQUEST_H
#define SRC_LOCATION_QT6C_LIBQPLACEMATCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html)

/// q_placematchrequest_new constructs a new QPlaceMatchRequest object.
///
QPlaceMatchRequest* q_placematchrequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html)

/// q_placematchrequest_new2 constructs a new QPlaceMatchRequest object.
///
/// @param other QPlaceMatchRequest*
///
QPlaceMatchRequest* q_placematchrequest_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#operator-eq)
///
/// @param self QPlaceMatchRequest*
/// @param other QPlaceMatchRequest*
///
void q_placematchrequest_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#swap)
///
/// @param self QPlaceMatchRequest*
/// @param other QPlaceMatchRequest*
///
void q_placematchrequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#places)
///
/// @param self QPlaceMatchRequest*
///
/// @return libqt_list of QPlace*
///
libqt_list q_placematchrequest_places(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setPlaces)
///
/// @param self QPlaceMatchRequest*
/// @param places libqt_list of QPlace*
///
void q_placematchrequest_set_places(void* self, libqt_list /* of QPlace* */ places);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setResults)
///
/// @param self QPlaceMatchRequest*
/// @param results libqt_list of QPlaceSearchResult*
///
void q_placematchrequest_set_results(void* self, libqt_list /* of QPlaceSearchResult* */ results);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#parameters)
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
/// @param self QPlaceMatchRequest*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map q_placematchrequest_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#setParameters)
///
/// @param self QPlaceMatchRequest*
/// @param parameters libqt_map of const char* to QVariant*
///
void q_placematchrequest_set_parameters(void* self, libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#clear)
///
/// @param self QPlaceMatchRequest*
///
void q_placematchrequest_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacematchrequest.html#dtor.QPlaceMatchRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceMatchRequest*
///
void q_placematchrequest_delete(void* self);

#endif
