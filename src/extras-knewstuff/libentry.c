#include "libauthor.hpp"
#include "../libqdatetime.hpp"
#include "../libqimage.hpp"
#include "../libqurl.hpp"
#include "../libqxmlstream.hpp"
#include "libentry.hpp"
#include "libentry.h"

const char* k_nscore_replace_b_b_code(const char* param1) {
    libqt_string _str = KNSCore_ReplaceBBCode(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_nscore_q_hash(void* param1, uint64_t param2) {
    return KNSCore_QHash((KNSCore__Entry*)param1, param2);
}

KNSCore__Entry* k_nscore__entry_new() {
    return KNSCore__Entry_new();
}

KNSCore__Entry* k_nscore__entry_new2(void* other) {
    return KNSCore__Entry_new2((KNSCore__Entry*)other);
}

void k_nscore__entry_operator_assign(void* self, void* other) {
    KNSCore__Entry_OperatorAssign((KNSCore__Entry*)self, (KNSCore__Entry*)other);
}

bool k_nscore__entry_operator_equal(void* self, void* other) {
    return KNSCore__Entry_OperatorEqual((KNSCore__Entry*)self, (KNSCore__Entry*)other);
}

bool k_nscore__entry_operator_lesser(void* self, void* other) {
    return KNSCore__Entry_OperatorLesser((KNSCore__Entry*)self, (KNSCore__Entry*)other);
}

bool k_nscore__entry_is_valid(void* self) {
    return KNSCore__Entry_IsValid((KNSCore__Entry*)self);
}

void k_nscore__entry_set_name(void* self, const char* name) {
    KNSCore__Entry_SetName((KNSCore__Entry*)self, qstring(name));
}

const char* k_nscore__entry_name(void* self) {
    libqt_string _str = KNSCore__Entry_Name((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_unique_id(void* self, const char* id) {
    KNSCore__Entry_SetUniqueId((KNSCore__Entry*)self, qstring(id));
}

const char* k_nscore__entry_unique_id(void* self) {
    libqt_string _str = KNSCore__Entry_UniqueId((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_category(void* self, const char* category) {
    KNSCore__Entry_SetCategory((KNSCore__Entry*)self, qstring(category));
}

const char* k_nscore__entry_category(void* self) {
    libqt_string _str = KNSCore__Entry_Category((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_homepage(void* self, void* page) {
    KNSCore__Entry_SetHomepage((KNSCore__Entry*)self, (QUrl*)page);
}

QUrl* k_nscore__entry_homepage(void* self) {
    return KNSCore__Entry_Homepage((KNSCore__Entry*)self);
}

void k_nscore__entry_set_author(void* self, void* author) {
    KNSCore__Entry_SetAuthor((KNSCore__Entry*)self, (KNSCore__Author*)author);
}

KNSCore__Author* k_nscore__entry_author(void* self) {
    return KNSCore__Entry_Author((KNSCore__Entry*)self);
}

void k_nscore__entry_set_license(void* self, const char* license) {
    KNSCore__Entry_SetLicense((KNSCore__Entry*)self, qstring(license));
}

const char* k_nscore__entry_license(void* self) {
    libqt_string _str = KNSCore__Entry_License((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_summary(void* self, const char* summary) {
    KNSCore__Entry_SetSummary((KNSCore__Entry*)self, qstring(summary));
}

const char* k_nscore__entry_short_summary(void* self) {
    libqt_string _str = KNSCore__Entry_ShortSummary((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_short_summary(void* self, const char* summary) {
    KNSCore__Entry_SetShortSummary((KNSCore__Entry*)self, qstring(summary));
}

const char* k_nscore__entry_summary(void* self) {
    libqt_string _str = KNSCore__Entry_Summary((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_changelog(void* self, const char* changelog) {
    KNSCore__Entry_SetChangelog((KNSCore__Entry*)self, qstring(changelog));
}

const char* k_nscore__entry_changelog(void* self) {
    libqt_string _str = KNSCore__Entry_Changelog((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_version(void* self, const char* version) {
    KNSCore__Entry_SetVersion((KNSCore__Entry*)self, qstring(version));
}

const char* k_nscore__entry_version(void* self) {
    libqt_string _str = KNSCore__Entry_Version((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_release_date(void* self, void* releasedate) {
    KNSCore__Entry_SetReleaseDate((KNSCore__Entry*)self, (QDate*)releasedate);
}

QDate* k_nscore__entry_release_date(void* self) {
    return KNSCore__Entry_ReleaseDate((KNSCore__Entry*)self);
}

void k_nscore__entry_set_update_version(void* self, const char* version) {
    KNSCore__Entry_SetUpdateVersion((KNSCore__Entry*)self, qstring(version));
}

const char* k_nscore__entry_update_version(void* self) {
    libqt_string _str = KNSCore__Entry_UpdateVersion((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_update_release_date(void* self, void* releasedate) {
    KNSCore__Entry_SetUpdateReleaseDate((KNSCore__Entry*)self, (QDate*)releasedate);
}

QDate* k_nscore__entry_update_release_date(void* self) {
    return KNSCore__Entry_UpdateReleaseDate((KNSCore__Entry*)self);
}

void k_nscore__entry_set_payload(void* self, const char* url) {
    KNSCore__Entry_SetPayload((KNSCore__Entry*)self, qstring(url));
}

const char* k_nscore__entry_payload(void* self) {
    libqt_string _str = KNSCore__Entry_Payload((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_preview_url(void* self, const char* url) {
    KNSCore__Entry_SetPreviewUrl((KNSCore__Entry*)self, qstring(url));
}

const char* k_nscore__entry_preview_url(void* self) {
    libqt_string _str = KNSCore__Entry_PreviewUrl((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QImage* k_nscore__entry_preview_image(void* self) {
    return KNSCore__Entry_PreviewImage((KNSCore__Entry*)self);
}

void k_nscore__entry_set_preview_image(void* self, void* image) {
    KNSCore__Entry_SetPreviewImage((KNSCore__Entry*)self, (QImage*)image);
}

void k_nscore__entry_set_installed_files(void* self, const char* files[static 1]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry_set_installed_files\n");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    KNSCore__Entry_SetInstalledFiles((KNSCore__Entry*)self, files_list);
    free(files_qstr);
}

const char** k_nscore__entry_installed_files(void* self) {
    libqt_list _arr = KNSCore__Entry_InstalledFiles((KNSCore__Entry*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry_installed_files\n");
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

const char** k_nscore__entry_uninstalled_files(void* self) {
    libqt_list _arr = KNSCore__Entry_UninstalledFiles((KNSCore__Entry*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry_uninstalled_files\n");
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

void k_nscore__entry_set_rating(void* self, int rating) {
    KNSCore__Entry_SetRating((KNSCore__Entry*)self, rating);
}

int32_t k_nscore__entry_rating(void* self) {
    return KNSCore__Entry_Rating((KNSCore__Entry*)self);
}

void k_nscore__entry_set_number_of_comments(void* self, int comments) {
    KNSCore__Entry_SetNumberOfComments((KNSCore__Entry*)self, comments);
}

int32_t k_nscore__entry_number_of_comments(void* self) {
    return KNSCore__Entry_NumberOfComments((KNSCore__Entry*)self);
}

void k_nscore__entry_set_download_count(void* self, int downloads) {
    KNSCore__Entry_SetDownloadCount((KNSCore__Entry*)self, downloads);
}

int32_t k_nscore__entry_download_count(void* self) {
    return KNSCore__Entry_DownloadCount((KNSCore__Entry*)self);
}

int32_t k_nscore__entry_number_fans(void* self) {
    return KNSCore__Entry_NumberFans((KNSCore__Entry*)self);
}

void k_nscore__entry_set_number_fans(void* self, int fans) {
    KNSCore__Entry_SetNumberFans((KNSCore__Entry*)self, fans);
}

int32_t k_nscore__entry_number_knowledgebase_entries(void* self) {
    return KNSCore__Entry_NumberKnowledgebaseEntries((KNSCore__Entry*)self);
}

void k_nscore__entry_set_number_knowledgebase_entries(void* self, int num) {
    KNSCore__Entry_SetNumberKnowledgebaseEntries((KNSCore__Entry*)self, num);
}

const char* k_nscore__entry_knowledgebase_link(void* self) {
    libqt_string _str = KNSCore__Entry_KnowledgebaseLink((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_knowledgebase_link(void* self, const char* link) {
    KNSCore__Entry_SetKnowledgebaseLink((KNSCore__Entry*)self, qstring(link));
}

int32_t k_nscore__entry_download_link_count(void* self) {
    return KNSCore__Entry_DownloadLinkCount((KNSCore__Entry*)self);
}

libqt_list /* of KNSCore__Entry__DownloadLinkInformation* */ k_nscore__entry_download_link_information_list(void* self) {
    libqt_list _arr = KNSCore__Entry_DownloadLinkInformationList((KNSCore__Entry*)self);
    return _arr;
}

void k_nscore__entry_append_download_link_information(void* self, void* info) {
    KNSCore__Entry_AppendDownloadLinkInformation((KNSCore__Entry*)self, (KNSCore__Entry__DownloadLinkInformation*)info);
}

void k_nscore__entry_clear_download_link_information(void* self) {
    KNSCore__Entry_ClearDownloadLinkInformation((KNSCore__Entry*)self);
}

const char* k_nscore__entry_donation_link(void* self) {
    libqt_string _str = KNSCore__Entry_DonationLink((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_donation_link(void* self, const char* link) {
    KNSCore__Entry_SetDonationLink((KNSCore__Entry*)self, qstring(link));
}

const char** k_nscore__entry_tags(void* self) {
    libqt_list _arr = KNSCore__Entry_Tags((KNSCore__Entry*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry_tags\n");
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

void k_nscore__entry_set_tags(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry_set_tags\n");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    KNSCore__Entry_SetTags((KNSCore__Entry*)self, tags_list);
    free(tags_qstr);
}

const char* k_nscore__entry_provider_id(void* self) {
    libqt_string _str = KNSCore__Entry_ProviderId((KNSCore__Entry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__entry_set_provider_id(void* self, const char* id) {
    KNSCore__Entry_SetProviderId((KNSCore__Entry*)self, qstring(id));
}

void k_nscore__entry_set_source(void* self, int32_t source) {
    KNSCore__Entry_SetSource((KNSCore__Entry*)self, source);
}

int32_t k_nscore__entry_source(void* self) {
    return KNSCore__Entry_Source((KNSCore__Entry*)self);
}

void k_nscore__entry_set_entry_type(void* self, int32_t type) {
    KNSCore__Entry_SetEntryType((KNSCore__Entry*)self, type);
}

int32_t k_nscore__entry_entry_type(void* self) {
    return KNSCore__Entry_EntryType((KNSCore__Entry*)self);
}

bool k_nscore__entry_set_entry_x_m_l(void* self, void* reader) {
    return KNSCore__Entry_SetEntryXML((KNSCore__Entry*)self, (QXmlStreamReader*)reader);
}

void k_nscore__entry_set_status(void* self, int32_t status) {
    KNSCore__Entry_SetStatus((KNSCore__Entry*)self, status);
}

int32_t k_nscore__entry_status(void* self) {
    return KNSCore__Entry_Status((KNSCore__Entry*)self);
}

void k_nscore__entry_set_entry_deleted(void* self) {
    KNSCore__Entry_SetEntryDeleted((KNSCore__Entry*)self);
}

void k_nscore__entry_set_preview_url2(void* self, const char* url, int32_t type) {
    KNSCore__Entry_SetPreviewUrl2((KNSCore__Entry*)self, qstring(url), type);
}

const char* k_nscore__entry_preview_url1(void* self, int32_t type) {
    libqt_string _str = KNSCore__Entry_PreviewUrl1((KNSCore__Entry*)self, type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QImage* k_nscore__entry_preview_image1(void* self, int32_t type) {
    return KNSCore__Entry_PreviewImage1((KNSCore__Entry*)self, type);
}

void k_nscore__entry_set_preview_image2(void* self, void* image, int32_t type) {
    KNSCore__Entry_SetPreviewImage2((KNSCore__Entry*)self, (QImage*)image, type);
}

void k_nscore__entry_delete(void* self) {
    KNSCore__Entry_Delete((KNSCore__Entry*)(self));
}

KNSCore__Entry__DownloadLinkInformation* k_nscore__entry__downloadlinkinformation_new(void* param1) {
    return KNSCore__Entry__DownloadLinkInformation_new((KNSCore__Entry__DownloadLinkInformation*)param1);
}

const char* k_nscore__entry__downloadlinkinformation_name(void* self) {
    libqt_string name_str = KNSCore__Entry__DownloadLinkInformation_Name((KNSCore__Entry__DownloadLinkInformation*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_nscore__entry__downloadlinkinformation_set_name(void* self, const char* name) {
    KNSCore__Entry__DownloadLinkInformation_SetName((KNSCore__Entry__DownloadLinkInformation*)self, qstring(name));
}

const char* k_nscore__entry__downloadlinkinformation_price_amount(void* self) {
    libqt_string priceAmount_str = KNSCore__Entry__DownloadLinkInformation_PriceAmount((KNSCore__Entry__DownloadLinkInformation*)self);
    char* priceAmount_ret = qstring_to_char(priceAmount_str);
    libqt_string_free(&priceAmount_str);
    return priceAmount_ret;
}

void k_nscore__entry__downloadlinkinformation_set_price_amount(void* self, const char* priceAmount) {
    KNSCore__Entry__DownloadLinkInformation_SetPriceAmount((KNSCore__Entry__DownloadLinkInformation*)self, qstring(priceAmount));
}

const char* k_nscore__entry__downloadlinkinformation_distribution_type(void* self) {
    libqt_string distributionType_str = KNSCore__Entry__DownloadLinkInformation_DistributionType((KNSCore__Entry__DownloadLinkInformation*)self);
    char* distributionType_ret = qstring_to_char(distributionType_str);
    libqt_string_free(&distributionType_str);
    return distributionType_ret;
}

void k_nscore__entry__downloadlinkinformation_set_distribution_type(void* self, const char* distributionType) {
    KNSCore__Entry__DownloadLinkInformation_SetDistributionType((KNSCore__Entry__DownloadLinkInformation*)self, qstring(distributionType));
}

const char* k_nscore__entry__downloadlinkinformation_description_link(void* self) {
    libqt_string descriptionLink_str = KNSCore__Entry__DownloadLinkInformation_DescriptionLink((KNSCore__Entry__DownloadLinkInformation*)self);
    char* descriptionLink_ret = qstring_to_char(descriptionLink_str);
    libqt_string_free(&descriptionLink_str);
    return descriptionLink_ret;
}

void k_nscore__entry__downloadlinkinformation_set_description_link(void* self, const char* descriptionLink) {
    KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink((KNSCore__Entry__DownloadLinkInformation*)self, qstring(descriptionLink));
}

int32_t k_nscore__entry__downloadlinkinformation_id(void* self) {
    return KNSCore__Entry__DownloadLinkInformation_Id((KNSCore__Entry__DownloadLinkInformation*)self);
}

void k_nscore__entry__downloadlinkinformation_set_id(void* self, int id) {
    KNSCore__Entry__DownloadLinkInformation_SetId((KNSCore__Entry__DownloadLinkInformation*)self, id);
}

bool k_nscore__entry__downloadlinkinformation_is_downloadtype_link(void* self) {
    return KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink((KNSCore__Entry__DownloadLinkInformation*)self);
}

void k_nscore__entry__downloadlinkinformation_set_is_downloadtype_link(void* self, bool isDownloadtypeLink) {
    KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink((KNSCore__Entry__DownloadLinkInformation*)self, isDownloadtypeLink);
}

uint64_t k_nscore__entry__downloadlinkinformation_size(void* self) {
    return KNSCore__Entry__DownloadLinkInformation_Size((KNSCore__Entry__DownloadLinkInformation*)self);
}

void k_nscore__entry__downloadlinkinformation_set_size(void* self, uint64_t size) {
    KNSCore__Entry__DownloadLinkInformation_SetSize((KNSCore__Entry__DownloadLinkInformation*)self, size);
}

const char** k_nscore__entry__downloadlinkinformation_tags(void* self) {
    libqt_list tags_arr = KNSCore__Entry__DownloadLinkInformation_Tags((KNSCore__Entry__DownloadLinkInformation*)self);
    const libqt_string* tags_qstr = (libqt_string*)tags_arr.data.ptr;
    const char** tags_ret = (const char**)malloc((tags_arr.len + 1) * sizeof(const char*));
    if (tags_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry__downloadlinkinformation_tags\n");
        abort();
    }
    for (size_t i = 0; i < tags_arr.len; ++i) {
        tags_ret[i] = qstring_to_char(tags_qstr[i]);
    }
    tags_ret[tags_arr.len] = NULL;
    for (size_t i = 0; i < tags_arr.len; ++i) {
        libqt_string_free((libqt_string*)&tags_qstr[i]);
    }
    libqt_free(tags_arr.data.ptr);
    return tags_ret;
}

void k_nscore__entry__downloadlinkinformation_set_tags(void* self, const char* tags[static 1]) {
    size_t tags_len = libqt_strv_length(tags);
    libqt_string* tags_qstr = (libqt_string*)malloc(tags_len * sizeof(libqt_string));
    if (tags_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_nscore__entry__downloadlinkinformation_set_tags\n");
        abort();
    }
    for (size_t i = 0; i < tags_len; ++i) {
        tags_qstr[i] = qstring(tags[i]);
    }
    libqt_list tags_list = qlist(tags_qstr, tags_len);
    KNSCore__Entry__DownloadLinkInformation_SetTags((KNSCore__Entry__DownloadLinkInformation*)self, tags_list);
    free(tags_qstr);
}

void k_nscore__entry__downloadlinkinformation_operator_assign(void* self, void* param1) {
    KNSCore__Entry__DownloadLinkInformation_OperatorAssign((KNSCore__Entry__DownloadLinkInformation*)self, (KNSCore__Entry__DownloadLinkInformation*)param1);
}

void k_nscore__entry__downloadlinkinformation_delete(void* self) {
    KNSCore__Entry__DownloadLinkInformation_Delete((KNSCore__Entry__DownloadLinkInformation*)(self));
}
