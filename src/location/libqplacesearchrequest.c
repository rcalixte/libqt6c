#include "libqplacecategory.hpp"
#include "../libqvariant.hpp"
#include "libqplacesearchrequest.hpp"
#include "libqplacesearchrequest.h"

QPlaceSearchRequest* q_placesearchrequest_new() {
    return QPlaceSearchRequest_new();
}

QPlaceSearchRequest* q_placesearchrequest_new2(void* other) {
    return QPlaceSearchRequest_new2((QPlaceSearchRequest*)other);
}

void q_placesearchrequest_operator_assign(void* self, void* other) {
    QPlaceSearchRequest_OperatorAssign((QPlaceSearchRequest*)self, (QPlaceSearchRequest*)other);
}

void q_placesearchrequest_swap(void* self, void* other) {
    QPlaceSearchRequest_Swap((QPlaceSearchRequest*)self, (QPlaceSearchRequest*)other);
}

const char* q_placesearchrequest_search_term(void* self) {
    libqt_string _str = QPlaceSearchRequest_SearchTerm((QPlaceSearchRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchrequest_set_search_term(void* self, const char* term) {
    QPlaceSearchRequest_SetSearchTerm((QPlaceSearchRequest*)self, qstring(term));
}

libqt_list /* of QPlaceCategory* */ q_placesearchrequest_categories(void* self) {
    libqt_list _arr = QPlaceSearchRequest_Categories((QPlaceSearchRequest*)self);
    return _arr;
}

void q_placesearchrequest_set_category(void* self, void* category) {
    QPlaceSearchRequest_SetCategory((QPlaceSearchRequest*)self, (QPlaceCategory*)category);
}

void q_placesearchrequest_set_categories(void* self, libqt_list /* of QPlaceCategory* */ categories) {
    QPlaceSearchRequest_SetCategories((QPlaceSearchRequest*)self, categories);
}

QGeoShape* q_placesearchrequest_search_area(void* self) {
    return QPlaceSearchRequest_SearchArea((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_set_search_area(void* self, void* area) {
    QPlaceSearchRequest_SetSearchArea((QPlaceSearchRequest*)self, (QGeoShape*)area);
}

const char* q_placesearchrequest_recommendation_id(void* self) {
    libqt_string _str = QPlaceSearchRequest_RecommendationId((QPlaceSearchRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesearchrequest_set_recommendation_id(void* self, const char* recommendationId) {
    QPlaceSearchRequest_SetRecommendationId((QPlaceSearchRequest*)self, qstring(recommendationId));
}

QVariant* q_placesearchrequest_search_context(void* self) {
    return QPlaceSearchRequest_SearchContext((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_set_search_context(void* self, void* context) {
    QPlaceSearchRequest_SetSearchContext((QPlaceSearchRequest*)self, (QVariant*)context);
}

int32_t q_placesearchrequest_visibility_scope(void* self) {
    return QPlaceSearchRequest_VisibilityScope((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_set_visibility_scope(void* self, int32_t visibilityScopes) {
    QPlaceSearchRequest_SetVisibilityScope((QPlaceSearchRequest*)self, visibilityScopes);
}

int32_t q_placesearchrequest_relevance_hint(void* self) {
    return QPlaceSearchRequest_RelevanceHint((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_set_relevance_hint(void* self, int32_t hint) {
    QPlaceSearchRequest_SetRelevanceHint((QPlaceSearchRequest*)self, hint);
}

int32_t q_placesearchrequest_limit(void* self) {
    return QPlaceSearchRequest_Limit((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_set_limit(void* self, int limit) {
    QPlaceSearchRequest_SetLimit((QPlaceSearchRequest*)self, limit);
}

void q_placesearchrequest_clear(void* self) {
    QPlaceSearchRequest_Clear((QPlaceSearchRequest*)self);
}

void q_placesearchrequest_delete(void* self) {
    QPlaceSearchRequest_Delete((QPlaceSearchRequest*)(self));
}
