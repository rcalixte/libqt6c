#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libauthinfo.hpp"
#include "libauthinfo.h"

KIO__AuthInfo* k_io__authinfo_new() {
    return KIO__AuthInfo_new();
}

KIO__AuthInfo* k_io__authinfo_new2(void* info) {
    return KIO__AuthInfo_new2((KIO__AuthInfo*)info);
}

void k_io__authinfo_operator_assign(void* self, void* info) {
    KIO__AuthInfo_OperatorAssign((KIO__AuthInfo*)self, (KIO__AuthInfo*)info);
}

bool k_io__authinfo_is_modified(void* self) {
    return KIO__AuthInfo_IsModified((KIO__AuthInfo*)self);
}

void k_io__authinfo_set_modified(void* self, bool flag) {
    KIO__AuthInfo_SetModified((KIO__AuthInfo*)self, flag);
}

QUrl* k_io__authinfo_url(void* self) {
    return KIO__AuthInfo_Url((KIO__AuthInfo*)self);
}

void k_io__authinfo_set_url(void* self, void* url) {
    KIO__AuthInfo_SetUrl((KIO__AuthInfo*)self, (QUrl*)url);
}

const char* k_io__authinfo_username(void* self) {
    libqt_string username_str = KIO__AuthInfo_Username((KIO__AuthInfo*)self);
    char* username_ret = qstring_to_char(username_str);
    libqt_string_free(&username_str);
    return username_ret;
}

void k_io__authinfo_set_username(void* self, const char* username) {
    KIO__AuthInfo_SetUsername((KIO__AuthInfo*)self, qstring(username));
}

const char* k_io__authinfo_password(void* self) {
    libqt_string password_str = KIO__AuthInfo_Password((KIO__AuthInfo*)self);
    char* password_ret = qstring_to_char(password_str);
    libqt_string_free(&password_str);
    return password_ret;
}

void k_io__authinfo_set_password(void* self, const char* password) {
    KIO__AuthInfo_SetPassword((KIO__AuthInfo*)self, qstring(password));
}

const char* k_io__authinfo_prompt(void* self) {
    libqt_string prompt_str = KIO__AuthInfo_Prompt((KIO__AuthInfo*)self);
    char* prompt_ret = qstring_to_char(prompt_str);
    libqt_string_free(&prompt_str);
    return prompt_ret;
}

void k_io__authinfo_set_prompt(void* self, const char* prompt) {
    KIO__AuthInfo_SetPrompt((KIO__AuthInfo*)self, qstring(prompt));
}

const char* k_io__authinfo_caption(void* self) {
    libqt_string caption_str = KIO__AuthInfo_Caption((KIO__AuthInfo*)self);
    char* caption_ret = qstring_to_char(caption_str);
    libqt_string_free(&caption_str);
    return caption_ret;
}

void k_io__authinfo_set_caption(void* self, const char* caption) {
    KIO__AuthInfo_SetCaption((KIO__AuthInfo*)self, qstring(caption));
}

const char* k_io__authinfo_comment(void* self) {
    libqt_string comment_str = KIO__AuthInfo_Comment((KIO__AuthInfo*)self);
    char* comment_ret = qstring_to_char(comment_str);
    libqt_string_free(&comment_str);
    return comment_ret;
}

void k_io__authinfo_set_comment(void* self, const char* comment) {
    KIO__AuthInfo_SetComment((KIO__AuthInfo*)self, qstring(comment));
}

const char* k_io__authinfo_comment_label(void* self) {
    libqt_string commentLabel_str = KIO__AuthInfo_CommentLabel((KIO__AuthInfo*)self);
    char* commentLabel_ret = qstring_to_char(commentLabel_str);
    libqt_string_free(&commentLabel_str);
    return commentLabel_ret;
}

void k_io__authinfo_set_comment_label(void* self, const char* commentLabel) {
    KIO__AuthInfo_SetCommentLabel((KIO__AuthInfo*)self, qstring(commentLabel));
}

const char* k_io__authinfo_realm_value(void* self) {
    libqt_string realmValue_str = KIO__AuthInfo_RealmValue((KIO__AuthInfo*)self);
    char* realmValue_ret = qstring_to_char(realmValue_str);
    libqt_string_free(&realmValue_str);
    return realmValue_ret;
}

void k_io__authinfo_set_realm_value(void* self, const char* realmValue) {
    KIO__AuthInfo_SetRealmValue((KIO__AuthInfo*)self, qstring(realmValue));
}

const char* k_io__authinfo_digest_info(void* self) {
    libqt_string digestInfo_str = KIO__AuthInfo_DigestInfo((KIO__AuthInfo*)self);
    char* digestInfo_ret = qstring_to_char(digestInfo_str);
    libqt_string_free(&digestInfo_str);
    return digestInfo_ret;
}

void k_io__authinfo_set_digest_info(void* self, const char* digestInfo) {
    KIO__AuthInfo_SetDigestInfo((KIO__AuthInfo*)self, qstring(digestInfo));
}

bool k_io__authinfo_verify_path(void* self) {
    return KIO__AuthInfo_VerifyPath((KIO__AuthInfo*)self);
}

void k_io__authinfo_set_verify_path(void* self, bool verifyPath) {
    KIO__AuthInfo_SetVerifyPath((KIO__AuthInfo*)self, verifyPath);
}

bool k_io__authinfo_read_only(void* self) {
    return KIO__AuthInfo_ReadOnly((KIO__AuthInfo*)self);
}

void k_io__authinfo_set_read_only(void* self, bool readOnly) {
    KIO__AuthInfo_SetReadOnly((KIO__AuthInfo*)self, readOnly);
}

bool k_io__authinfo_keep_password(void* self) {
    return KIO__AuthInfo_KeepPassword((KIO__AuthInfo*)self);
}

void k_io__authinfo_set_keep_password(void* self, bool keepPassword) {
    KIO__AuthInfo_SetKeepPassword((KIO__AuthInfo*)self, keepPassword);
}

void k_io__authinfo_set_extra_field(void* self, const char* fieldName, void* value) {
    KIO__AuthInfo_SetExtraField((KIO__AuthInfo*)self, qstring(fieldName), (QVariant*)value);
}

void k_io__authinfo_set_extra_field_flags(void* self, const char* fieldName, int32_t flags) {
    KIO__AuthInfo_SetExtraFieldFlags((KIO__AuthInfo*)self, qstring(fieldName), flags);
}

QVariant* k_io__authinfo_get_extra_field(void* self, const char* fieldName) {
    return KIO__AuthInfo_GetExtraField((KIO__AuthInfo*)self, qstring(fieldName));
}

int32_t k_io__authinfo_get_extra_field_flags(void* self, const char* fieldName) {
    return KIO__AuthInfo_GetExtraFieldFlags((KIO__AuthInfo*)self, qstring(fieldName));
}

void k_io__authinfo_register_meta_types() {
    KIO__AuthInfo_RegisterMetaTypes();
}

void k_io__authinfo_delete(void* self) {
    KIO__AuthInfo_Delete((KIO__AuthInfo*)(self));
}
