#include "libdownloaddescription.hpp"
#include "libdownloaddescription.h"

Attica__DownloadDescription* k_attica__downloaddescription_new() {
    return Attica__DownloadDescription_new();
}

Attica__DownloadDescription* k_attica__downloaddescription_new2(void* other) {
    return Attica__DownloadDescription_new2((Attica__DownloadDescription*)other);
}

void k_attica__downloaddescription_operator_assign(void* self, void* other) {
    Attica__DownloadDescription_OperatorAssign((Attica__DownloadDescription*)self, (Attica__DownloadDescription*)other);
}

int32_t k_attica__downloaddescription_id(void* self) {
    return Attica__DownloadDescription_Id((Attica__DownloadDescription*)self);
}

int32_t k_attica__downloaddescription_type(void* self) {
    return Attica__DownloadDescription_Type((Attica__DownloadDescription*)self);
}

bool k_attica__downloaddescription_has_price(void* self) {
    return Attica__DownloadDescription_HasPrice((Attica__DownloadDescription*)self);
}

const char* k_attica__downloaddescription_category(void* self) {
    libqt_string _str = Attica__DownloadDescription_Category((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_name(void* self) {
    libqt_string _str = Attica__DownloadDescription_Name((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_link(void* self) {
    libqt_string _str = Attica__DownloadDescription_Link((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_distribution_type(void* self) {
    libqt_string _str = Attica__DownloadDescription_DistributionType((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_price_reason(void* self) {
    libqt_string _str = Attica__DownloadDescription_PriceReason((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_price_amount(void* self) {
    libqt_string _str = Attica__DownloadDescription_PriceAmount((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_attica__downloaddescription_size(void* self) {
    return Attica__DownloadDescription_Size((Attica__DownloadDescription*)self);
}

const char* k_attica__downloaddescription_gpg_fingerprint(void* self) {
    libqt_string _str = Attica__DownloadDescription_GpgFingerprint((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_gpg_signature(void* self) {
    libqt_string _str = Attica__DownloadDescription_GpgSignature((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_package_name(void* self) {
    libqt_string _str = Attica__DownloadDescription_PackageName((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__downloaddescription_repository(void* self) {
    libqt_string _str = Attica__DownloadDescription_Repository((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_attica__downloaddescription_tags(void* self) {
    libqt_list _arr = Attica__DownloadDescription_Tags((Attica__DownloadDescription*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__downloaddescription_tags");
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

void k_attica__downloaddescription_set_id(void* self, int id) {
    Attica__DownloadDescription_SetId((Attica__DownloadDescription*)self, id);
}

void k_attica__downloaddescription_set_type(void* self, int32_t type) {
    Attica__DownloadDescription_SetType((Attica__DownloadDescription*)self, type);
}

void k_attica__downloaddescription_set_has_price(void* self, bool hasPrice) {
    Attica__DownloadDescription_SetHasPrice((Attica__DownloadDescription*)self, hasPrice);
}

void k_attica__downloaddescription_set_category(void* self, const char* category) {
    Attica__DownloadDescription_SetCategory((Attica__DownloadDescription*)self, qstring(category));
}

void k_attica__downloaddescription_set_name(void* self, const char* name) {
    Attica__DownloadDescription_SetName((Attica__DownloadDescription*)self, qstring(name));
}

void k_attica__downloaddescription_set_link(void* self, const char* link) {
    Attica__DownloadDescription_SetLink((Attica__DownloadDescription*)self, qstring(link));
}

void k_attica__downloaddescription_set_distribution_type(void* self, const char* distributionType) {
    Attica__DownloadDescription_SetDistributionType((Attica__DownloadDescription*)self, qstring(distributionType));
}

void k_attica__downloaddescription_set_price_reason(void* self, const char* priceReason) {
    Attica__DownloadDescription_SetPriceReason((Attica__DownloadDescription*)self, qstring(priceReason));
}

void k_attica__downloaddescription_set_price_amount(void* self, const char* priceAmount) {
    Attica__DownloadDescription_SetPriceAmount((Attica__DownloadDescription*)self, qstring(priceAmount));
}

void k_attica__downloaddescription_set_size(void* self, uint32_t size) {
    Attica__DownloadDescription_SetSize((Attica__DownloadDescription*)self, size);
}

void k_attica__downloaddescription_set_gpg_fingerprint(void* self, const char* fingerprint) {
    Attica__DownloadDescription_SetGpgFingerprint((Attica__DownloadDescription*)self, qstring(fingerprint));
}

void k_attica__downloaddescription_set_gpg_signature(void* self, const char* signature) {
    Attica__DownloadDescription_SetGpgSignature((Attica__DownloadDescription*)self, qstring(signature));
}

void k_attica__downloaddescription_set_package_name(void* self, const char* packageName) {
    Attica__DownloadDescription_SetPackageName((Attica__DownloadDescription*)self, qstring(packageName));
}

void k_attica__downloaddescription_set_repository(void* self, const char* repository) {
    Attica__DownloadDescription_SetRepository((Attica__DownloadDescription*)self, qstring(repository));
}

void k_attica__downloaddescription_set_tags(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__downloaddescription_set_tags");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    Attica__DownloadDescription_SetTags((Attica__DownloadDescription*)self, tags_list);
    free(tags_qstr);
}

const char* k_attica__downloaddescription_version(void* self) {
    libqt_string _str = Attica__DownloadDescription_Version((Attica__DownloadDescription*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaddescription_set_version(void* self, const char* version) {
    Attica__DownloadDescription_SetVersion((Attica__DownloadDescription*)self, qstring(version));
}

void k_attica__downloaddescription_delete(void* self) {
    Attica__DownloadDescription_Delete((Attica__DownloadDescription*)(self));
}
