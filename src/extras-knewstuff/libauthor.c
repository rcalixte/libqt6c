#include "../libqurl.hpp"
#include "libauthor.hpp"
#include "libauthor.h"

KNSCore__Author* k_nscore__author_new() {
    return KNSCore__Author_new();
}

KNSCore__Author* k_nscore__author_new2(void* other) {
    return KNSCore__Author_new2((KNSCore__Author*)other);
}

void k_nscore__author_operator_assign(void* self, void* other) {
    KNSCore__Author_OperatorAssign((KNSCore__Author*)self, (KNSCore__Author*)other);
}

void k_nscore__author_set_id(void* self, const char* id) {
    KNSCore__Author_SetId((KNSCore__Author*)self, qstring(id));
}

const char* k_nscore__author_id(void* self) {
    libqt_string _str = KNSCore__Author_Id((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_name(void* self, const char* name) {
    KNSCore__Author_SetName((KNSCore__Author*)self, qstring(name));
}

const char* k_nscore__author_name(void* self) {
    libqt_string _str = KNSCore__Author_Name((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_email(void* self, const char* email) {
    KNSCore__Author_SetEmail((KNSCore__Author*)self, qstring(email));
}

const char* k_nscore__author_email(void* self) {
    libqt_string _str = KNSCore__Author_Email((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_jabber(void* self, const char* jabber) {
    KNSCore__Author_SetJabber((KNSCore__Author*)self, qstring(jabber));
}

const char* k_nscore__author_jabber(void* self) {
    libqt_string _str = KNSCore__Author_Jabber((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_homepage(void* self, const char* homepage) {
    KNSCore__Author_SetHomepage((KNSCore__Author*)self, qstring(homepage));
}

const char* k_nscore__author_homepage(void* self) {
    libqt_string _str = KNSCore__Author_Homepage((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_profilepage(void* self, const char* profilepage) {
    KNSCore__Author_SetProfilepage((KNSCore__Author*)self, qstring(profilepage));
}

const char* k_nscore__author_profilepage(void* self) {
    libqt_string _str = KNSCore__Author_Profilepage((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_avatar_url(void* self, void* avatarUrl) {
    KNSCore__Author_SetAvatarUrl((KNSCore__Author*)self, (QUrl*)avatarUrl);
}

QUrl* k_nscore__author_avatar_url(void* self) {
    return KNSCore__Author_AvatarUrl((KNSCore__Author*)self);
}

const char* k_nscore__author_description(void* self) {
    libqt_string _str = KNSCore__Author_Description((KNSCore__Author*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__author_set_description(void* self, const char* description) {
    KNSCore__Author_SetDescription((KNSCore__Author*)self, qstring(description));
}

void k_nscore__author_delete(void* self) {
    KNSCore__Author_Delete((KNSCore__Author*)(self));
}
