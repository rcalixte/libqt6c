#include "libqplaceuser.hpp"
#include "libqplaceuser.h"

QPlaceUser* q_placeuser_new() {
    return QPlaceUser_new();
}

QPlaceUser* q_placeuser_new2(void* other) {
    return QPlaceUser_new2((QPlaceUser*)other);
}

void q_placeuser_operator_assign(void* self, void* other) {
    QPlaceUser_OperatorAssign((QPlaceUser*)self, (QPlaceUser*)other);
}

void q_placeuser_swap(void* self, void* other) {
    QPlaceUser_Swap((QPlaceUser*)self, (QPlaceUser*)other);
}

const char* q_placeuser_user_id(void* self) {
    libqt_string _str = QPlaceUser_UserId((QPlaceUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeuser_set_user_id(void* self, const char* identifier) {
    QPlaceUser_SetUserId((QPlaceUser*)self, qstring(identifier));
}

const char* q_placeuser_name(void* self) {
    libqt_string _str = QPlaceUser_Name((QPlaceUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_placeuser_set_name(void* self, const char* name) {
    QPlaceUser_SetName((QPlaceUser*)self, qstring(name));
}

void q_placeuser_delete(void* self) {
    QPlaceUser_Delete((QPlaceUser*)(self));
}
