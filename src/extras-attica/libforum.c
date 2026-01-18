#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libforum.hpp"
#include "libforum.h"

Attica__Forum* k_attica__forum_new() {
    return Attica__Forum_new();
}

Attica__Forum* k_attica__forum_new2(void* other) {
    return Attica__Forum_new2((Attica__Forum*)other);
}

void k_attica__forum_operator_assign(void* self, void* other) {
    Attica__Forum_OperatorAssign((Attica__Forum*)self, (Attica__Forum*)other);
}

void k_attica__forum_set_id(void* self, const char* id) {
    Attica__Forum_SetId((Attica__Forum*)self, qstring(id));
}

const char* k_attica__forum_id(void* self) {
    libqt_string _str = Attica__Forum_Id((Attica__Forum*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__forum_set_name(void* self, const char* name) {
    Attica__Forum_SetName((Attica__Forum*)self, qstring(name));
}

const char* k_attica__forum_name(void* self) {
    libqt_string _str = Attica__Forum_Name((Attica__Forum*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__forum_set_description(void* self, const char* description) {
    Attica__Forum_SetDescription((Attica__Forum*)self, qstring(description));
}

const char* k_attica__forum_description(void* self) {
    libqt_string _str = Attica__Forum_Description((Attica__Forum*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__forum_set_date(void* self, void* date) {
    Attica__Forum_SetDate((Attica__Forum*)self, (QDateTime*)date);
}

QDateTime* k_attica__forum_date(void* self) {
    return Attica__Forum_Date((Attica__Forum*)self);
}

void k_attica__forum_set_icon(void* self, void* icon) {
    Attica__Forum_SetIcon((Attica__Forum*)self, (QUrl*)icon);
}

QUrl* k_attica__forum_icon(void* self) {
    return Attica__Forum_Icon((Attica__Forum*)self);
}

void k_attica__forum_set_child_count(void* self, int childCount) {
    Attica__Forum_SetChildCount((Attica__Forum*)self, childCount);
}

int32_t k_attica__forum_child_count(void* self) {
    return Attica__Forum_ChildCount((Attica__Forum*)self);
}

void k_attica__forum_set_topics(void* self, int topics) {
    Attica__Forum_SetTopics((Attica__Forum*)self, topics);
}

int32_t k_attica__forum_topics(void* self) {
    return Attica__Forum_Topics((Attica__Forum*)self);
}

void k_attica__forum_set_children(void* self, libqt_list /* of Attica__Forum* */ comments) {
    Attica__Forum_SetChildren((Attica__Forum*)self, comments);
}

libqt_list /* of Attica__Forum* */ k_attica__forum_children(void* self) {
    libqt_list _arr = Attica__Forum_Children((Attica__Forum*)self);
    return _arr;
}

bool k_attica__forum_is_valid(void* self) {
    return Attica__Forum_IsValid((Attica__Forum*)self);
}

void k_attica__forum_delete(void* self) {
    Attica__Forum_Delete((Attica__Forum*)(self));
}
