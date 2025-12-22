#include "libqplacecontactdetail.hpp"
#include "libqplacecontactdetail.h"

QPlaceContactDetail* q_placecontactdetail_new() {
    return QPlaceContactDetail_new();
}

QPlaceContactDetail* q_placecontactdetail_new2(void* other) {
    return QPlaceContactDetail_new2((QPlaceContactDetail*)other);
}

void q_placecontactdetail_operator_assign(void* self, void* other) {
    QPlaceContactDetail_OperatorAssign((QPlaceContactDetail*)self, (QPlaceContactDetail*)other);
}

void q_placecontactdetail_swap(void* self, void* other) {
    QPlaceContactDetail_Swap((QPlaceContactDetail*)self, (QPlaceContactDetail*)other);
}

const char* q_placecontactdetail_label(void* self) {
    libqt_string _str = QPlaceContactDetail_Label((QPlaceContactDetail*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecontactdetail_set_label(void* self, const char* label) {
    QPlaceContactDetail_SetLabel((QPlaceContactDetail*)self, qstring(label));
}

const char* q_placecontactdetail_value(void* self) {
    libqt_string _str = QPlaceContactDetail_Value((QPlaceContactDetail*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placecontactdetail_set_value(void* self, const char* value) {
    QPlaceContactDetail_SetValue((QPlaceContactDetail*)self, qstring(value));
}

void q_placecontactdetail_clear(void* self) {
    QPlaceContactDetail_Clear((QPlaceContactDetail*)self);
}

void q_placecontactdetail_delete(void* self) {
    QPlaceContactDetail_Delete((QPlaceContactDetail*)(self));
}
