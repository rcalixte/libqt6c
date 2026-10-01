#pragma once
#ifndef LOCATION_LIBQPLACEPROPOSEDSEARCHRESULT_H
#define LOCATION_LIBQPLACEPROPOSEDSEARCHRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QPlaceProposedSearchResult* q_placeproposedsearchresult_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html)

/// q_placeproposedsearchresult_new3 constructs a new QPlaceProposedSearchResult object.
///
/// @param param1 QPlaceProposedSearchResult*
///
QPlaceProposedSearchResult* q_placeproposedsearchresult_new3(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#searchRequest)
///
/// @param self const QPlaceProposedSearchResult*
///
QPlaceSearchRequest* q_placeproposedsearchresult_search_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#setSearchRequest)
///
/// @param self QPlaceProposedSearchResult*
/// @param request QPlaceSearchRequest*
///
void q_placeproposedsearchresult_set_search_request(void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#operator-eq)
///
/// @param self QPlaceProposedSearchResult*
/// @param param1 QPlaceProposedSearchResult*
///
void q_placeproposedsearchresult_operator_assign(void* self, const void* param1);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-eq-eq)
///
/// @param self const QPlaceProposedSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placeproposedsearchresult_operator_equal(const void* self, const void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#operator-not-eq)
///
/// @param self const QPlaceProposedSearchResult*
/// @param other QPlaceSearchResult*
///
bool q_placeproposedsearchresult_operator_not_equal(const void* self, const void* other);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#type)
///
/// @param self const QPlaceProposedSearchResult*
///
/// @return enum QPlaceSearchResult__SearchResultType
///
int32_t q_placeproposedsearchresult_type(const void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceProposedSearchResult*
///
const char* q_placeproposedsearchresult_title(const void* self);

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
/// @param self const QPlaceProposedSearchResult*
///
QPlaceIcon* q_placeproposedsearchresult_icon(const void* self);

/// Inherited from QPlaceSearchResult
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchresult.html#setIcon)
///
/// @param self QPlaceProposedSearchResult*
/// @param icon QPlaceIcon*
///
void q_placeproposedsearchresult_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceproposedsearchresult.html#dtor.QPlaceProposedSearchResult)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceProposedSearchResult*
///
void q_placeproposedsearchresult_delete(void* self);

#endif
