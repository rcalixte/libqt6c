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
    return QPlace_New();
}

QPlace* q_place_new2(const void* other) {
    return QPlace_New2((QPlace*)other);
}

void q_place_operator_assign(void* self, const void* other) {
    QPlace_OperatorAssign((QPlace*)self, (QPlace*)other);
}

void q_place_swap(void* self, void* other) {
    QPlace_Swap((QPlace*)self, (QPlace*)other);
}

libqt_list /* of QPlaceCategory* */ q_place_categories(const void* self) {
    libqt_list _arr = QPlace_Categories((QPlace*)self);
    return _arr;
}

void q_place_set_category(void* self, const void* category) {
    QPlace_SetCategory((QPlace*)self, (QPlaceCategory*)category);
}

void q_place_set_categories(void* self, libqt_list /* of QPlaceCategory* */ categories) {
    QPlace_SetCategories((QPlace*)self, categories);
}

QGeoLocation* q_place_location(const void* self) {
    return QPlace_Location((QPlace*)self);
}

void q_place_set_location(void* self, const void* location) {
    QPlace_SetLocation((QPlace*)self, (QGeoLocation*)location);
}

QPlaceRatings* q_place_ratings(const void* self) {
    return QPlace_Ratings((QPlace*)self);
}

void q_place_set_ratings(void* self, const void* ratings) {
    QPlace_SetRatings((QPlace*)self, (QPlaceRatings*)ratings);
}

QPlaceSupplier* q_place_supplier(const void* self) {
    return QPlace_Supplier((QPlace*)self);
}

void q_place_set_supplier(void* self, const void* supplier) {
    QPlace_SetSupplier((QPlace*)self, (QPlaceSupplier*)supplier);
}

const char* q_place_attribution(const void* self) {
    libqt_string _str = QPlace_Attribution((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_attribution(void* self, const char* attribution) {
    QPlace_SetAttribution((QPlace*)self, qstring(attribution));
}

QPlaceIcon* q_place_icon(const void* self) {
    return QPlace_Icon((QPlace*)self);
}

void q_place_set_icon(void* self, const void* icon) {
    QPlace_SetIcon((QPlace*)self, (QPlaceIcon*)icon);
}

libqt_map /* of int to QPlaceContent* */ q_place_content(const void* self, int32_t type) {
    // Convert QMap<int,QPlaceContent> to libqt_map
    libqt_map _out = QPlace_Content((QPlace*)self, type);
    libqt_map _ret;
    _ret.len = _out.len;
    _ret.keys = _out.keys;
    _ret.values = _out.values;
    return _ret;
}

void q_place_set_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content) {
    // Convert libqt_map to QMap<int,QPlaceContent>
    libqt_map content_ret;
    content_ret.len = content.len;
    content_ret.keys = (int*)malloc(content_ret.len * sizeof(int));
    if (content_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_place_set_content\n");
        abort();
    }
    content_ret.values = (QPlaceContent**)malloc(content_ret.len * sizeof(QPlaceContent*));
    if (content_ret.values == NULL) {
        free(content_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_place_set_content\n");
        abort();
    }
    int* content_karr = (int*)content.keys;
    int* content_kdest = (int*)content_ret.keys;
    QPlaceContent** content_varr = (QPlaceContent**)content.values;
    QPlaceContent** content_vdest = (QPlaceContent**)content_ret.values;
    for (size_t i = 0; i < content_ret.len; ++i) {
        content_kdest[i] = content_karr[i];
        content_vdest[i] = content_varr[i];
    }
    QPlace_SetContent((QPlace*)self, type, content_ret);
    free(content_ret.keys);
    free(content_ret.values);
}

void q_place_insert_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content) {
    // Convert libqt_map to QMap<int,QPlaceContent>
    libqt_map content_ret;
    content_ret.len = content.len;
    content_ret.keys = (int*)malloc(content_ret.len * sizeof(int));
    if (content_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_place_insert_content\n");
        abort();
    }
    content_ret.values = (QPlaceContent**)malloc(content_ret.len * sizeof(QPlaceContent*));
    if (content_ret.values == NULL) {
        free(content_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_place_insert_content\n");
        abort();
    }
    int* content_karr = (int*)content.keys;
    int* content_kdest = (int*)content_ret.keys;
    QPlaceContent** content_varr = (QPlaceContent**)content.values;
    QPlaceContent** content_vdest = (QPlaceContent**)content_ret.values;
    for (size_t i = 0; i < content_ret.len; ++i) {
        content_kdest[i] = content_karr[i];
        content_vdest[i] = content_varr[i];
    }
    QPlace_InsertContent((QPlace*)self, type, content_ret);
    free(content_ret.keys);
    free(content_ret.values);
}

int32_t q_place_total_content_count(const void* self, int32_t type) {
    return QPlace_TotalContentCount((QPlace*)self, type);
}

void q_place_set_total_content_count(void* self, int32_t type, int total) {
    QPlace_SetTotalContentCount((QPlace*)self, type, total);
}

const char* q_place_name(const void* self) {
    libqt_string _str = QPlace_Name((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_name(void* self, const char* name) {
    QPlace_SetName((QPlace*)self, qstring(name));
}

const char* q_place_place_id(const void* self) {
    libqt_string _str = QPlace_PlaceId((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_place_set_place_id(void* self, const char* identifier) {
    QPlace_SetPlaceId((QPlace*)self, qstring(identifier));
}

const char* q_place_primary_phone(const void* self) {
    libqt_string _str = QPlace_PrimaryPhone((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_place_primary_fax(const void* self) {
    libqt_string _str = QPlace_PrimaryFax((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_place_primary_email(const void* self) {
    libqt_string _str = QPlace_PrimaryEmail((QPlace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* q_place_primary_website(const void* self) {
    return QPlace_PrimaryWebsite((QPlace*)self);
}

bool q_place_details_fetched(const void* self) {
    return QPlace_DetailsFetched((QPlace*)self);
}

void q_place_set_details_fetched(void* self, bool fetched) {
    QPlace_SetDetailsFetched((QPlace*)self, fetched);
}

const char** q_place_extended_attribute_types(const void* self) {
    libqt_list _arr = QPlace_ExtendedAttributeTypes((QPlace*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_place_extended_attribute_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QPlaceAttribute* q_place_extended_attribute(const void* self, const char* attributeType) {
    return QPlace_ExtendedAttribute((QPlace*)self, qstring(attributeType));
}

void q_place_set_extended_attribute(void* self, const char* attributeType, const void* attribute) {
    QPlace_SetExtendedAttribute((QPlace*)self, qstring(attributeType), (QPlaceAttribute*)attribute);
}

void q_place_remove_extended_attribute(void* self, const char* attributeType) {
    QPlace_RemoveExtendedAttribute((QPlace*)self, qstring(attributeType));
}

const char** q_place_contact_types(const void* self) {
    libqt_list _arr = QPlace_ContactTypes((QPlace*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_place_contact_types\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

libqt_list /* of QPlaceContactDetail* */ q_place_contact_details(const void* self, const char* contactType) {
    libqt_list _arr = QPlace_ContactDetails((QPlace*)self, qstring(contactType));
    return _arr;
}

void q_place_set_contact_details(void* self, const char* contactType, libqt_list /* of QPlaceContactDetail* */ details) {
    QPlace_SetContactDetails((QPlace*)self, qstring(contactType), details);
}

void q_place_append_contact_detail(void* self, const char* contactType, const void* detail) {
    QPlace_AppendContactDetail((QPlace*)self, qstring(contactType), (QPlaceContactDetail*)detail);
}

void q_place_remove_contact_details(void* self, const char* contactType) {
    QPlace_RemoveContactDetails((QPlace*)self, qstring(contactType));
}

int32_t q_place_visibility(const void* self) {
    return QPlace_Visibility((QPlace*)self);
}

void q_place_set_visibility(void* self, int32_t visibility) {
    QPlace_SetVisibility((QPlace*)self, visibility);
}

bool q_place_is_empty(const void* self) {
    return QPlace_IsEmpty((QPlace*)self);
}

void q_place_delete(void* self) {
    QPlace_Delete((QPlace*)(self));
}
