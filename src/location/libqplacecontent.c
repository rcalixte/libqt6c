#include "libqplacesupplier.hpp"
#include "libqplaceuser.hpp"
#include "../libqvariant.hpp"
#include "libqplacecontent.hpp"
#include "libqplacecontent.h"

QPlaceContent* q_placecontent_new() {
    return QPlaceContent_new();
}

QPlaceContent* q_placecontent_new2(void* other) {
    return QPlaceContent_new2((QPlaceContent*)other);
}

QPlaceContent* q_placecontent_new3(int32_t type) {
    return QPlaceContent_new3(type);
}

void q_placecontent_operator_assign(void* self, void* other) {
    QPlaceContent_OperatorAssign((QPlaceContent*)self, (QPlaceContent*)other);
}

void q_placecontent_swap(void* self, void* other) {
    QPlaceContent_Swap((QPlaceContent*)self, (QPlaceContent*)other);
}

void q_placecontent_detach(void* self) {
    QPlaceContent_Detach((QPlaceContent*)self);
}

bool q_placecontent_operator_equal(void* self, void* other) {
    return QPlaceContent_OperatorEqual((QPlaceContent*)self, (QPlaceContent*)other);
}

bool q_placecontent_operator_not_equal(void* self, void* other) {
    return QPlaceContent_OperatorNotEqual((QPlaceContent*)self, (QPlaceContent*)other);
}

int32_t q_placecontent_type(void* self) {
    return QPlaceContent_Type((QPlaceContent*)self);
}

libqt_list /* of int32_t */ q_placecontent_data_tags(void* self) {
    libqt_list _arr = QPlaceContent_DataTags((QPlaceContent*)self);
    return _arr;
}

QVariant* q_placecontent_value(void* self, int32_t tag) {
    return QPlaceContent_Value((QPlaceContent*)self, tag);
}

void q_placecontent_set_value(void* self, int32_t tag, void* param2) {
    QPlaceContent_SetValue((QPlaceContent*)self, tag, (QVariant*)param2);
}

QPlaceSupplier* q_placecontent_supplier(void* self) {
    return QPlaceContent_Supplier((QPlaceContent*)self);
}

void q_placecontent_set_supplier(void* self, void* supplier) {
    QPlaceContent_SetSupplier((QPlaceContent*)self, (QPlaceSupplier*)supplier);
}

QPlaceUser* q_placecontent_user(void* self) {
    return QPlaceContent_User((QPlaceContent*)self);
}

void q_placecontent_set_user(void* self, void* user) {
    QPlaceContent_SetUser((QPlaceContent*)self, (QPlaceUser*)user);
}

const char* q_placecontent_attribution(void* self) {
    libqt_string _str = QPlaceContent_Attribution((QPlaceContent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecontent_set_attribution(void* self, const char* attribution) {
    QPlaceContent_SetAttribution((QPlaceContent*)self, qstring(attribution));
}

void q_placecontent_delete(void* self) {
    QPlaceContent_Delete((QPlaceContent*)(self));
}
