#include "../libqurl.hpp"
#include "libusermetadata.hpp"
#include "libusermetadata.h"

KFileMetaData__UserMetaData* k_filemetadata__usermetadata_new(const char* filePath) {
    return KFileMetaData__UserMetaData_new(qstring(filePath));
}

KFileMetaData__UserMetaData* k_filemetadata__usermetadata_new2(void* rhs) {
    return KFileMetaData__UserMetaData_new2((KFileMetaData__UserMetaData*)rhs);
}

void k_filemetadata__usermetadata_operator_assign(void* self, void* rhs) {
    KFileMetaData__UserMetaData_OperatorAssign((KFileMetaData__UserMetaData*)self, (KFileMetaData__UserMetaData*)rhs);
}

const char* k_filemetadata__usermetadata_file_path(void* self) {
    libqt_string _str = KFileMetaData__UserMetaData_FilePath((KFileMetaData__UserMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_filemetadata__usermetadata_is_supported(void* self) {
    return KFileMetaData__UserMetaData_IsSupported((KFileMetaData__UserMetaData*)self);
}

int32_t k_filemetadata__usermetadata_set_tags(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__usermetadata_set_tags\n");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    int32_t _out = KFileMetaData__UserMetaData_SetTags((KFileMetaData__UserMetaData*)self, tags_list);
    free(tags_qstr);
    return _out;
}

const char** k_filemetadata__usermetadata_tags(void* self) {
    libqt_list _arr = KFileMetaData__UserMetaData_Tags((KFileMetaData__UserMetaData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__usermetadata_tags\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t k_filemetadata__usermetadata_rating(void* self) {
    return KFileMetaData__UserMetaData_Rating((KFileMetaData__UserMetaData*)self);
}

int32_t k_filemetadata__usermetadata_set_rating(void* self, int rating) {
    return KFileMetaData__UserMetaData_SetRating((KFileMetaData__UserMetaData*)self, rating);
}

const char* k_filemetadata__usermetadata_user_comment(void* self) {
    libqt_string _str = KFileMetaData__UserMetaData_UserComment((KFileMetaData__UserMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__usermetadata_set_user_comment(void* self, const char* userComment) {
    return KFileMetaData__UserMetaData_SetUserComment((KFileMetaData__UserMetaData*)self, qstring(userComment));
}

QUrl* k_filemetadata__usermetadata_origin_url(void* self) {
    return KFileMetaData__UserMetaData_OriginUrl((KFileMetaData__UserMetaData*)self);
}

int32_t k_filemetadata__usermetadata_set_origin_url(void* self, void* originUrl) {
    return KFileMetaData__UserMetaData_SetOriginUrl((KFileMetaData__UserMetaData*)self, (QUrl*)originUrl);
}

const char* k_filemetadata__usermetadata_origin_email_subject(void* self) {
    libqt_string _str = KFileMetaData__UserMetaData_OriginEmailSubject((KFileMetaData__UserMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__usermetadata_set_origin_email_subject(void* self, const char* originEmailSubject) {
    return KFileMetaData__UserMetaData_SetOriginEmailSubject((KFileMetaData__UserMetaData*)self, qstring(originEmailSubject));
}

const char* k_filemetadata__usermetadata_origin_email_sender(void* self) {
    libqt_string _str = KFileMetaData__UserMetaData_OriginEmailSender((KFileMetaData__UserMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__usermetadata_set_origin_email_sender(void* self, const char* originEmailSender) {
    return KFileMetaData__UserMetaData_SetOriginEmailSender((KFileMetaData__UserMetaData*)self, qstring(originEmailSender));
}

const char* k_filemetadata__usermetadata_origin_email_message_id(void* self) {
    libqt_string _str = KFileMetaData__UserMetaData_OriginEmailMessageId((KFileMetaData__UserMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__usermetadata_set_origin_email_message_id(void* self, const char* originEmailMessageId) {
    return KFileMetaData__UserMetaData_SetOriginEmailMessageId((KFileMetaData__UserMetaData*)self, qstring(originEmailMessageId));
}

const char* k_filemetadata__usermetadata_attribute(void* self, const char* name) {
    libqt_string _str = KFileMetaData__UserMetaData_Attribute((KFileMetaData__UserMetaData*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__usermetadata_attribute2(void* self, const char* name) {
    libqt_string _str = KFileMetaData__UserMetaData_Attribute2((KFileMetaData__UserMetaData*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__usermetadata_set_attribute(void* self, const char* name, const char* value) {
    return KFileMetaData__UserMetaData_SetAttribute((KFileMetaData__UserMetaData*)self, qstring(name), qstring(value));
}

bool k_filemetadata__usermetadata_has_attribute(void* self, const char* name) {
    return KFileMetaData__UserMetaData_HasAttribute((KFileMetaData__UserMetaData*)self, qstring(name));
}

bool k_filemetadata__usermetadata_has_attribute2(void* self, const char* name) {
    return KFileMetaData__UserMetaData_HasAttribute2((KFileMetaData__UserMetaData*)self, qstring(name));
}

uint32_t k_filemetadata__usermetadata_query_attributes(void* self) {
    return KFileMetaData__UserMetaData_QueryAttributes((KFileMetaData__UserMetaData*)self);
}

uint32_t k_filemetadata__usermetadata_query_attributes1(void* self, uint32_t attributes) {
    return KFileMetaData__UserMetaData_QueryAttributes1((KFileMetaData__UserMetaData*)self, attributes);
}

void k_filemetadata__usermetadata_delete(void* self) {
    KFileMetaData__UserMetaData_Delete((KFileMetaData__UserMetaData*)(self));
}
