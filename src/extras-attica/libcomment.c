#include "../libqdatetime.hpp"
#include "libcomment.hpp"
#include "libcomment.h"

Attica__Comment* k_attica__comment_new() {
    return Attica__Comment_new();
}

Attica__Comment* k_attica__comment_new2(void* other) {
    return Attica__Comment_new2((Attica__Comment*)other);
}

const char* k_attica__comment_comment_type_to_string(int32_t type) {
    libqt_string _str = Attica__Comment_CommentTypeToString(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__comment_operator_assign(void* self, void* other) {
    Attica__Comment_OperatorAssign((Attica__Comment*)self, (Attica__Comment*)other);
}

void k_attica__comment_set_id(void* self, const char* id) {
    Attica__Comment_SetId((Attica__Comment*)self, qstring(id));
}

const char* k_attica__comment_id(void* self) {
    libqt_string _str = Attica__Comment_Id((Attica__Comment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__comment_set_subject(void* self, const char* subject) {
    Attica__Comment_SetSubject((Attica__Comment*)self, qstring(subject));
}

const char* k_attica__comment_subject(void* self) {
    libqt_string _str = Attica__Comment_Subject((Attica__Comment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__comment_set_text(void* self, const char* text) {
    Attica__Comment_SetText((Attica__Comment*)self, qstring(text));
}

const char* k_attica__comment_text(void* self) {
    libqt_string _str = Attica__Comment_Text((Attica__Comment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__comment_set_child_count(void* self, int childCount) {
    Attica__Comment_SetChildCount((Attica__Comment*)self, childCount);
}

int32_t k_attica__comment_child_count(void* self) {
    return Attica__Comment_ChildCount((Attica__Comment*)self);
}

void k_attica__comment_set_user(void* self, const char* user) {
    Attica__Comment_SetUser((Attica__Comment*)self, qstring(user));
}

const char* k_attica__comment_user(void* self) {
    libqt_string _str = Attica__Comment_User((Attica__Comment*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__comment_set_date(void* self, void* date) {
    Attica__Comment_SetDate((Attica__Comment*)self, (QDateTime*)date);
}

QDateTime* k_attica__comment_date(void* self) {
    return Attica__Comment_Date((Attica__Comment*)self);
}

void k_attica__comment_set_score(void* self, int score) {
    Attica__Comment_SetScore((Attica__Comment*)self, score);
}

int32_t k_attica__comment_score(void* self) {
    return Attica__Comment_Score((Attica__Comment*)self);
}

void k_attica__comment_set_children(void* self, libqt_list comments) {
    Attica__Comment_SetChildren((Attica__Comment*)self, comments);
}

libqt_list /* of Attica__Comment* */ k_attica__comment_children(void* self) {
    libqt_list _arr = Attica__Comment_Children((Attica__Comment*)self);
    return _arr;
}

bool k_attica__comment_is_valid(void* self) {
    return Attica__Comment_IsValid((Attica__Comment*)self);
}

void k_attica__comment_delete(void* self) {
    Attica__Comment_Delete((Attica__Comment*)(self));
}
