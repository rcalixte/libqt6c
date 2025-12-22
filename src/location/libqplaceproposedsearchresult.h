#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEPROPOSEDSEARCHRESULT_H
#define SRC_LOCATION_QT6C_LIBQPLACEPROPOSEDSEARCHRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)

/// q_placeproposedsearchresult_new constructs a new QPlaceProposedSearchResult object.
///
QPlaceProposedSearchResult* q_placeproposedsearchresult_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)

/// q_placeproposedsearchresult_new2 constructs a new QPlaceProposedSearchResult object.
///
/// @param other QPlaceSearchResult*
///
QPlaceProposedSearchResult* q_placeproposedsearchresult_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)

/// q_placeproposedsearchresult_new3 constructs a new QPlaceProposedSearchResult object.
///
/// @param param1 QPlaceProposedSearchResult*
///
QPlaceProposedSearchResult* q_placeproposedsearchresult_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#searchRequest)
///
/// @param self QPlaceProposedSearchResult*
///
QPlaceSearchRequest* q_placeproposedsearchresult_search_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#setSearchRequest)
///
/// @param self QPlaceProposedSearchResult*
/// @param request QPlaceSearchRequest*
///
void q_placeproposedsearchresult_set_search_request(void* self, void* request);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq)
///
/// @param self QPlaceProposedSearchResult*
/// @param other QPlaceSearchResult*
///
void q_placeproposedsearchresult_operator_assign(void* self, void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
///
/// @param self QPlaceProposedSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placeproposedsearchresult_operator_equal(void* self, void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
///
/// @param self QPlaceProposedSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placeproposedsearchresult_operator_not_equal(void* self, void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
///
/// @param self QPlaceProposedSearchResult*
///
/// @return enum QPlaceSearchResult__SearchResultType
///
int32_t q_placeproposedsearchresult_type(void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceProposedSearchResult*
///
const char* q_placeproposedsearchresult_title(void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setTitle)
///
/// @param self QPlaceProposedSearchResult*
/// @param title const char*
///
void q_placeproposedsearchresult_set_title(void* self, const char* title);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#icon)
///
/// @param self QPlaceProposedSearchResult*
///
QPlaceIcon* q_placeproposedsearchresult_icon(void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
///
/// @param self QPlaceProposedSearchResult*
/// @param icon QPlaceIcon*
///
void q_placeproposedsearchresult_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#dtor.QPlaceProposedSearchResult)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceProposedSearchResult*
///
void q_placeproposedsearchresult_delete(void* self);

#endif
