#include "../libqdatetime.hpp"
#include "libtopic.hpp"
#include "libtopic.h"

Attica__Topic* k_attica__topic_new() {
    return Attica__Topic_new();
}

Attica__Topic* k_attica__topic_new2(void* other) {
    return Attica__Topic_new2((Attica__Topic*)other);
}

void k_attica__topic_operator_assign(void* self, void* other) {
    Attica__Topic_OperatorAssign((Attica__Topic*)self, (Attica__Topic*)other);
}

void k_attica__topic_set_id(void* self, const char* id) {
    Attica__Topic_SetId((Attica__Topic*)self, qstring(id));
}

const char* k_attica__topic_id(void* self) {
    libqt_string _str = Attica__Topic_Id((Attica__Topic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__topic_set_forum_id(void* self, const char* forumId) {
    Attica__Topic_SetForumId((Attica__Topic*)self, qstring(forumId));
}

const char* k_attica__topic_forum_id(void* self) {
    libqt_string _str = Attica__Topic_ForumId((Attica__Topic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__topic_set_user(void* self, const char* user) {
    Attica__Topic_SetUser((Attica__Topic*)self, qstring(user));
}

const char* k_attica__topic_user(void* self) {
    libqt_string _str = Attica__Topic_User((Attica__Topic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__topic_set_date(void* self, void* date) {
    Attica__Topic_SetDate((Attica__Topic*)self, (QDateTime*)date);
}

QDateTime* k_attica__topic_date(void* self) {
    return Attica__Topic_Date((Attica__Topic*)self);
}

void k_attica__topic_set_subject(void* self, const char* subject) {
    Attica__Topic_SetSubject((Attica__Topic*)self, qstring(subject));
}

const char* k_attica__topic_subject(void* self) {
    libqt_string _str = Attica__Topic_Subject((Attica__Topic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__topic_set_content(void* self, const char* content) {
    Attica__Topic_SetContent((Attica__Topic*)self, qstring(content));
}

const char* k_attica__topic_content(void* self) {
    libqt_string _str = Attica__Topic_Content((Attica__Topic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__topic_set_comments(void* self, int comments) {
    Attica__Topic_SetComments((Attica__Topic*)self, comments);
}

int32_t k_attica__topic_comments(void* self) {
    return Attica__Topic_Comments((Attica__Topic*)self);
}

bool k_attica__topic_is_valid(void* self) {
    return Attica__Topic_IsValid((Attica__Topic*)self);
}

void k_attica__topic_delete(void* self) {
    Attica__Topic_Delete((Attica__Topic*)(self));
}
