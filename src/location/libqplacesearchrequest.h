#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACESEARCHREQUEST_H
#define SRC_LOCATION_QT6C_LIBQPLACESEARCHREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html)

/// q_placesearchrequest_new constructs a new QPlaceSearchRequest object.
///
QPlaceSearchRequest* q_placesearchrequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html)

/// q_placesearchrequest_new2 constructs a new QPlaceSearchRequest object.
///
/// @param other QPlaceSearchRequest*
///
QPlaceSearchRequest* q_placesearchrequest_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#operator-eq)
///
/// @param self QPlaceSearchRequest*
/// @param other QPlaceSearchRequest*
///
void q_placesearchrequest_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#swap)
///
/// @param self QPlaceSearchRequest*
/// @param other QPlaceSearchRequest*
///
void q_placesearchrequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchTerm)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchRequest*
///
const char* q_placesearchrequest_search_term(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchTerm)
///
/// @param self QPlaceSearchRequest*
/// @param term const char*
///
void q_placesearchrequest_set_search_term(void* self, const char* term);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#categories)
///
/// @param self QPlaceSearchRequest*
///
libqt_list /* of QPlaceCategory* */ q_placesearchrequest_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategory)
///
/// @param self QPlaceSearchRequest*
/// @param category QPlaceCategory*
///
void q_placesearchrequest_set_category(void* self, void* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setCategories)
///
/// @param self QPlaceSearchRequest*
/// @param categories libqt_list /* of QPlaceCategory* */
///
void q_placesearchrequest_set_categories(void* self, libqt_list categories);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchArea)
///
/// @param self QPlaceSearchRequest*
///
QGeoShape* q_placesearchrequest_search_area(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchArea)
///
/// @param self QPlaceSearchRequest*
/// @param area QGeoShape*
///
void q_placesearchrequest_set_search_area(void* self, void* area);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#recommendationId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSearchRequest*
///
const char* q_placesearchrequest_recommendation_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRecommendationId)
///
/// @param self QPlaceSearchRequest*
/// @param recommendationId const char*
///
void q_placesearchrequest_set_recommendation_id(void* self, const char* recommendationId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#searchContext)
///
/// @param self QPlaceSearchRequest*
///
QVariant* q_placesearchrequest_search_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setSearchContext)
///
/// @param self QPlaceSearchRequest*
/// @param context QVariant*
///
void q_placesearchrequest_set_search_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#visibilityScope)
///
/// @param self QPlaceSearchRequest*
///
/// @return flag of enum QLocation__Visibility
///
int32_t q_placesearchrequest_visibility_scope(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setVisibilityScope)
///
/// @param self QPlaceSearchRequest*
/// @param visibilityScopes flag of enum QLocation__Visibility
///
void q_placesearchrequest_set_visibility_scope(void* self, int32_t visibilityScopes);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#relevanceHint)
///
/// @param self QPlaceSearchRequest*
///
/// @return enum QPlaceSearchRequest__RelevanceHint
///
int32_t q_placesearchrequest_relevance_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setRelevanceHint)
///
/// @param self QPlaceSearchRequest*
/// @param hint enum QPlaceSearchRequest__RelevanceHint
///
void q_placesearchrequest_set_relevance_hint(void* self, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#limit)
///
/// @param self QPlaceSearchRequest*
///
int32_t q_placesearchrequest_limit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#setLimit)
///
/// @param self QPlaceSearchRequest*
/// @param limit int
///
void q_placesearchrequest_set_limit(void* self, int limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#clear)
///
/// @param self QPlaceSearchRequest*
///
void q_placesearchrequest_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#dtor.QPlaceSearchRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSearchRequest*
///
void q_placesearchrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesearchrequest.html#public-types)

typedef enum {
    QPLACESEARCHREQUEST_RELEVANCEHINT_UNSPECIFIEDHINT = 0,
    QPLACESEARCHREQUEST_RELEVANCEHINT_DISTANCEHINT = 1,
    QPLACESEARCHREQUEST_RELEVANCEHINT_LEXICALPLACENAMEHINT = 2
} QPlaceSearchRequest__RelevanceHint;

#endif
