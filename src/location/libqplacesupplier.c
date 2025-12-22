#include "libqplaceicon.hpp"
#include "../libqurl.hpp"
#include "libqplacesupplier.hpp"
#include "libqplacesupplier.h"

QPlaceSupplier* q_placesupplier_new() {
    return QPlaceSupplier_new();
}

QPlaceSupplier* q_placesupplier_new2(void* other) {
    return QPlaceSupplier_new2((QPlaceSupplier*)other);
}

void q_placesupplier_operator_assign(void* self, void* other) {
    QPlaceSupplier_OperatorAssign((QPlaceSupplier*)self, (QPlaceSupplier*)other);
}

void q_placesupplier_swap(void* self, void* other) {
    QPlaceSupplier_Swap((QPlaceSupplier*)self, (QPlaceSupplier*)other);
}

const char* q_placesupplier_name(void* self) {
    libqt_string _str = QPlaceSupplier_Name((QPlaceSupplier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesupplier_set_name(void* self, const char* data) {
    QPlaceSupplier_SetName((QPlaceSupplier*)self, qstring(data));
}

const char* q_placesupplier_supplier_id(void* self) {
    libqt_string _str = QPlaceSupplier_SupplierId((QPlaceSupplier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placesupplier_set_supplier_id(void* self, const char* identifier) {
    QPlaceSupplier_SetSupplierId((QPlaceSupplier*)self, qstring(identifier));
}

QUrl* q_placesupplier_url(void* self) {
    return QPlaceSupplier_Url((QPlaceSupplier*)self);
}

void q_placesupplier_set_url(void* self, void* data) {
    QPlaceSupplier_SetUrl((QPlaceSupplier*)self, (QUrl*)data);
}

QPlaceIcon* q_placesupplier_icon(void* self) {
    return QPlaceSupplier_Icon((QPlaceSupplier*)self);
}

void q_placesupplier_set_icon(void* self, void* icon) {
    QPlaceSupplier_SetIcon((QPlaceSupplier*)self, (QPlaceIcon*)icon);
}

bool q_placesupplier_is_empty(void* self) {
    return QPlaceSupplier_IsEmpty((QPlaceSupplier*)self);
}

void q_placesupplier_delete(void* self) {
    QPlaceSupplier_Delete((QPlaceSupplier*)(self));
}
