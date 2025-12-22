#include "libqplaceicon.hpp"
#include "libqplacecategory.hpp"
#include "libqplacecategory.h"

QPlaceCategory* q_placecategory_new() {
    return QPlaceCategory_new();
}

QPlaceCategory* q_placecategory_new2(void* other) {
    return QPlaceCategory_new2((QPlaceCategory*)other);
}

void q_placecategory_operator_assign(void* self, void* other) {
    QPlaceCategory_OperatorAssign((QPlaceCategory*)self, (QPlaceCategory*)other);
}

void q_placecategory_swap(void* self, void* other) {
    QPlaceCategory_Swap((QPlaceCategory*)self, (QPlaceCategory*)other);
}

const char* q_placecategory_category_id(void* self) {
    libqt_string _str = QPlaceCategory_CategoryId((QPlaceCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecategory_set_category_id(void* self, const char* identifier) {
    QPlaceCategory_SetCategoryId((QPlaceCategory*)self, qstring(identifier));
}

const char* q_placecategory_name(void* self) {
    libqt_string _str = QPlaceCategory_Name((QPlaceCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecategory_set_name(void* self, const char* name) {
    QPlaceCategory_SetName((QPlaceCategory*)self, qstring(name));
}

int32_t q_placecategory_visibility(void* self) {
    return QPlaceCategory_Visibility((QPlaceCategory*)self);
}

void q_placecategory_set_visibility(void* self, int32_t visibility) {
    QPlaceCategory_SetVisibility((QPlaceCategory*)self, visibility);
}

QPlaceIcon* q_placecategory_icon(void* self) {
    return QPlaceCategory_Icon((QPlaceCategory*)self);
}

void q_placecategory_set_icon(void* self, void* icon) {
    QPlaceCategory_SetIcon((QPlaceCategory*)self, (QPlaceIcon*)icon);
}

bool q_placecategory_is_empty(void* self) {
    return QPlaceCategory_IsEmpty((QPlaceCategory*)self);
}

void q_placecategory_delete(void* self) {
    QPlaceCategory_Delete((QPlaceCategory*)(self));
}
