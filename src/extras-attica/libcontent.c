#include "libdownloaddescription.hpp"
#include "libhomepageentry.hpp"
#include "libicon.hpp"
#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libcontent.hpp"
#include "libcontent.h"

Attica__Content* k_attica__content_new() {
    return Attica__Content_new();
}

Attica__Content* k_attica__content_new2(void* other) {
    return Attica__Content_new2((Attica__Content*)other);
}

void k_attica__content_operator_assign(void* self, void* other) {
    Attica__Content_OperatorAssign((Attica__Content*)self, (Attica__Content*)other);
}

void k_attica__content_set_id(void* self, const char* id) {
    Attica__Content_SetId((Attica__Content*)self, qstring(id));
}

const char* k_attica__content_id(void* self) {
    libqt_string _str = Attica__Content_Id((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__content_set_name(void* self, const char* name) {
    Attica__Content_SetName((Attica__Content*)self, qstring(name));
}

const char* k_attica__content_name(void* self) {
    libqt_string _str = Attica__Content_Name((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__content_set_rating(void* self, int rating) {
    Attica__Content_SetRating((Attica__Content*)self, rating);
}

int32_t k_attica__content_rating(void* self) {
    return Attica__Content_Rating((Attica__Content*)self);
}

void k_attica__content_set_downloads(void* self, int downloads) {
    Attica__Content_SetDownloads((Attica__Content*)self, downloads);
}

int32_t k_attica__content_downloads(void* self) {
    return Attica__Content_Downloads((Attica__Content*)self);
}

void k_attica__content_set_number_of_comments(void* self, int numComments) {
    Attica__Content_SetNumberOfComments((Attica__Content*)self, numComments);
}

int32_t k_attica__content_number_of_comments(void* self) {
    return Attica__Content_NumberOfComments((Attica__Content*)self);
}

void k_attica__content_set_created(void* self, void* created) {
    Attica__Content_SetCreated((Attica__Content*)self, (QDateTime*)created);
}

QDateTime* k_attica__content_created(void* self) {
    return Attica__Content_Created((Attica__Content*)self);
}

void k_attica__content_set_updated(void* self, void* updated) {
    Attica__Content_SetUpdated((Attica__Content*)self, (QDateTime*)updated);
}

QDateTime* k_attica__content_updated(void* self) {
    return Attica__Content_Updated((Attica__Content*)self);
}

const char* k_attica__content_summary(void* self) {
    libqt_string _str = Attica__Content_Summary((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_description(void* self) {
    libqt_string _str = Attica__Content_Description((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_attica__content_detailpage(void* self) {
    return Attica__Content_Detailpage((Attica__Content*)self);
}

const char* k_attica__content_changelog(void* self) {
    libqt_string _str = Attica__Content_Changelog((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_version(void* self) {
    libqt_string _str = Attica__Content_Version((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_depend(void* self) {
    libqt_string _str = Attica__Content_Depend((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Attica__DownloadDescription* k_attica__content_download_url_description(void* self, int number) {
    return Attica__Content_DownloadUrlDescription((Attica__Content*)self, number);
}

libqt_list /* of Attica__DownloadDescription* */ k_attica__content_download_url_descriptions(void* self) {
    libqt_list _arr = Attica__Content_DownloadUrlDescriptions((Attica__Content*)self);
    return _arr;
}

Attica__HomePageEntry* k_attica__content_home_page_entry(void* self, int number) {
    return Attica__Content_HomePageEntry((Attica__Content*)self, number);
}

libqt_list /* of Attica__HomePageEntry* */ k_attica__content_home_page_entries(void* self) {
    libqt_list _arr = Attica__Content_HomePageEntries((Attica__Content*)self);
    return _arr;
}

const char* k_attica__content_preview_picture(void* self) {
    libqt_string _str = Attica__Content_PreviewPicture((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_small_preview_picture(void* self) {
    libqt_string _str = Attica__Content_SmallPreviewPicture((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_license(void* self) {
    libqt_string _str = Attica__Content_License((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_license_name(void* self) {
    libqt_string _str = Attica__Content_LicenseName((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_author(void* self) {
    libqt_string _str = Attica__Content_Author((Attica__Content*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of Attica__Icon* */ k_attica__content_icons(void* self) {
    libqt_list _arr = Attica__Content_Icons((Attica__Content*)self);
    return _arr;
}

libqt_list /* of Attica__Icon* */ k_attica__content_icons2(void* self) {
    libqt_list _arr = Attica__Content_Icons2((Attica__Content*)self);
    return _arr;
}

void k_attica__content_set_icons(void* self, libqt_list icons) {
    Attica__Content_SetIcons((Attica__Content*)self, icons);
}

libqt_list /* of QUrl* */ k_attica__content_videos(void* self) {
    libqt_list _arr = Attica__Content_Videos((Attica__Content*)self);
    return _arr;
}

void k_attica__content_set_videos(void* self, libqt_list videos) {
    Attica__Content_SetVideos((Attica__Content*)self, videos);
}

const char** k_attica__content_tags(void* self) {
    libqt_list _arr = Attica__Content_Tags((Attica__Content*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__content_tags");
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

void k_attica__content_set_tags(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__content_set_tags");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    Attica__Content_SetTags((Attica__Content*)self, tags_list);
    free(tags_qstr);
}

void k_attica__content_add_attribute(void* self, const char* key, const char* value) {
    Attica__Content_AddAttribute((Attica__Content*)self, qstring(key), qstring(value));
}

const char* k_attica__content_attribute(void* self, const char* key) {
    libqt_string _str = Attica__Content_Attribute((Attica__Content*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_attica__content_attributes(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Attica__Content_Attributes((Attica__Content*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__content_attributes");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__content_attributes");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

bool k_attica__content_is_valid(void* self) {
    return Attica__Content_IsValid((Attica__Content*)self);
}

const char* k_attica__content_preview_picture1(void* self, const char* number) {
    libqt_string _str = Attica__Content_PreviewPicture1((Attica__Content*)self, qstring(number));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_attica__content_small_preview_picture1(void* self, const char* number) {
    libqt_string _str = Attica__Content_SmallPreviewPicture1((Attica__Content*)self, qstring(number));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__content_delete(void* self) {
    Attica__Content_Delete((Attica__Content*)(self));
}
