#include "libqplaceattribute.hpp"
#include "libqplacecategory.hpp"
#include "libqplacecontactdetail.hpp"
#include "libqplacecontent.hpp"
#include "libqplaceicon.hpp"
#include "libqplaceratings.hpp"
#include "libqplacesupplier.hpp"
#include "../libqurl.hpp"
#include "libqplace.hpp"
#include "libqplace.h"

QPlace* q_place_new() {
    return QPlace_new();
}

QPlace* q_place_new2(void* other) {
    return QPlace_new2((QPlace*)other);
}

void q_place_operator_assign(void* self, void* other) {
    QPlace_OperatorAssign((QPlace*)self, (QPlace*)other);
}

void q_place_swap(void* self, void* other) {
    QPlace_Swap((QPlace*)self, (QPlace*)other);
}

libqt_list /* of QPlaceCategory* */ q_place_categories(void* self) {
    libqt_list _arr = QPlace_Categories((QPlace*)self);
    return _arr;
}

void q_place_set_category(void* self, void* category) {
    QPlace_SetCategory((QPlace*)self, (QPlaceCategory*)category);
}

void q_place_set_categories(void* self, libqt_list categories) {
    QPlace_SetCategories((QPlace*)self, categories);
}

QGeoLocation* q_place_location(void* self) {
    return QPlace_Location((QPlace*)self);
}

void q_place_set_location(void* self, void* location) {
    QPlace_SetLocation((QPlace*)self, (QGeoLocation*)location);
}

QPlaceRatings* q_place_ratings(void* self) {
    return QPlace_Ratings((QPlace*)self);
}

void q_place_set_ratings(void* self, void* ratings) {
    QPlace_SetRatings((QPlace*)self, (QPlaceRatings*)ratings);
}

QPlaceSupplier* q_place_supplier(void* self) {
    return QPlace_Supplier((QPlace*)self);
}

void q_place_set_supplier(void* self, void* supplier) {
    QPlace_SetSupplier((QPlace*)self, (QPlaceSupplier*)supplier);
}

const char* q_place_attribution(void* self) {
    libqt_string _str = QPlace_Attribution((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_attribution(void* self, const char* attribution) {
    QPlace_SetAttribution((QPlace*)self, qstring(attribution));
}

QPlaceIcon* q_place_icon(void* self) {
    return QPlace_Icon((QPlace*)self);
}

void q_place_set_icon(void* self, void* icon) {
    QPlace_SetIcon((QPlace*)self, (QPlaceIcon*)icon);
}

libqt_map /* of int to QPlaceContent* */ q_place_content(void* self, int32_t type) {
    return QPlace_Content((QPlace*)self, type);
}

void q_place_set_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content) {
    QPlace_SetContent((QPlace*)self, type, content);
}

void q_place_insert_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content) {
    QPlace_InsertContent((QPlace*)self, type, content);
}

int32_t q_place_total_content_count(void* self, int32_t type) {
    return QPlace_TotalContentCount((QPlace*)self, type);
}

void q_place_set_total_content_count(void* self, int32_t type, int total) {
    QPlace_SetTotalContentCount((QPlace*)self, type, total);
}

const char* q_place_name(void* self) {
    libqt_string _str = QPlace_Name((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_name(void* self, const char* name) {
    QPlace_SetName((QPlace*)self, qstring(name));
}

const char* q_place_place_id(void* self) {
    libqt_string _str = QPlace_PlaceId((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_place_id(void* self, const char* identifier) {
    QPlace_SetPlaceId((QPlace*)self, qstring(identifier));
}

const char* q_place_primary_phone(void* self) {
    libqt_string _str = QPlace_PrimaryPhone((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_place_primary_fax(void* self) {
    libqt_string _str = QPlace_PrimaryFax((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_place_primary_email(void* self) {
    libqt_string _str = QPlace_PrimaryEmail((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_place_primary_website(void* self) {
    return QPlace_PrimaryWebsite((QPlace*)self);
}

bool q_place_details_fetched(void* self) {
    return QPlace_DetailsFetched((QPlace*)self);
}

void q_place_set_details_fetched(void* self, bool fetched) {
    QPlace_SetDetailsFetched((QPlace*)self, fetched);
}

const char** q_place_extended_attribute_types(void* self) {
    libqt_list _arr = QPlace_ExtendedAttributeTypes((QPlace*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_place_extended_attribute_types");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QPlaceAttribute* q_place_extended_attribute(void* self, const char* attributeType) {
    return QPlace_ExtendedAttribute((QPlace*)self, qstring(attributeType));
}

void q_place_set_extended_attribute(void* self, const char* attributeType, void* attribute) {
    QPlace_SetExtendedAttribute((QPlace*)self, qstring(attributeType), (QPlaceAttribute*)attribute);
}

void q_place_remove_extended_attribute(void* self, const char* attributeType) {
    QPlace_RemoveExtendedAttribute((QPlace*)self, qstring(attributeType));
}

const char** q_place_contact_types(void* self) {
    libqt_list _arr = QPlace_ContactTypes((QPlace*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_place_contact_types");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of QPlaceContactDetail* */ q_place_contact_details(void* self, const char* contactType) {
    libqt_list _arr = QPlace_ContactDetails((QPlace*)self, qstring(contactType));
    return _arr;
}

void q_place_set_contact_details(void* self, const char* contactType, libqt_list details) {
    QPlace_SetContactDetails((QPlace*)self, qstring(contactType), details);
}

void q_place_append_contact_detail(void* self, const char* contactType, void* detail) {
    QPlace_AppendContactDetail((QPlace*)self, qstring(contactType), (QPlaceContactDetail*)detail);
}

void q_place_remove_contact_details(void* self, const char* contactType) {
    QPlace_RemoveContactDetails((QPlace*)self, qstring(contactType));
}

int32_t q_place_visibility(void* self) {
    return QPlace_Visibility((QPlace*)self);
}

void q_place_set_visibility(void* self, int32_t visibility) {
    QPlace_SetVisibility((QPlace*)self, visibility);
}

bool q_place_is_empty(void* self) {
    return QPlace_IsEmpty((QPlace*)self);
}

void q_place_delete(void* self) {
    QPlace_Delete((QPlace*)(self));
}
