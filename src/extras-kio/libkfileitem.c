#include "libkacl.hpp"
#include "libudsentry.hpp"
#include "../libqdatetime.hpp"
#include "../libqmimetype.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libkfileitem.hpp"
#include "libkfileitem.h"

KFileItem* k_fileitem_new() {
    return KFileItem_new();
}

KFileItem* k_fileitem_new2(void* entry, void* itemOrDirUrl) {
    return KFileItem_new2((KIO__UDSEntry*)entry, (QUrl*)itemOrDirUrl);
}

KFileItem* k_fileitem_new3(void* url) {
    return KFileItem_new3((QUrl*)url);
}

KFileItem* k_fileitem_new4(void* url, int32_t mimeTypeDetermination) {
    return KFileItem_new4((QUrl*)url, mimeTypeDetermination);
}

KFileItem* k_fileitem_new5(void* param1) {
    return KFileItem_new5((KFileItem*)param1);
}

KFileItem* k_fileitem_new6(void* entry, void* itemOrDirUrl, bool delayedMimeTypes) {
    return KFileItem_new6((KIO__UDSEntry*)entry, (QUrl*)itemOrDirUrl, delayedMimeTypes);
}

KFileItem* k_fileitem_new7(void* entry, void* itemOrDirUrl, bool delayedMimeTypes, bool urlIsDirectory) {
    return KFileItem_new7((KIO__UDSEntry*)entry, (QUrl*)itemOrDirUrl, delayedMimeTypes, urlIsDirectory);
}

KFileItem* k_fileitem_new8(void* url, const char* mimeType) {
    return KFileItem_new8((QUrl*)url, qstring(mimeType));
}

KFileItem* k_fileitem_new9(void* url, const char* mimeType, mode_t mode) {
    return KFileItem_new9((QUrl*)url, qstring(mimeType), mode);
}

void k_fileitem_operator_assign(void* self, void* param1) {
    KFileItem_OperatorAssign((KFileItem*)self, (KFileItem*)param1);
}

void k_fileitem_refresh(void* self) {
    KFileItem_Refresh((KFileItem*)self);
}

void k_fileitem_refresh_mime_type(void* self) {
    KFileItem_RefreshMimeType((KFileItem*)self);
}

void k_fileitem_set_delayed_mime_types(void* self, bool b) {
    KFileItem_SetDelayedMimeTypes((KFileItem*)self, b);
}

QUrl* k_fileitem_url(void* self) {
    return KFileItem_Url((KFileItem*)self);
}

void k_fileitem_set_url(void* self, void* url) {
    KFileItem_SetUrl((KFileItem*)self, (QUrl*)url);
}

void k_fileitem_set_local_path(void* self, const char* path) {
    KFileItem_SetLocalPath((KFileItem*)self, qstring(path));
}

void k_fileitem_set_name(void* self, const char* name) {
    KFileItem_SetName((KFileItem*)self, qstring(name));
}

mode_t k_fileitem_permissions(void* self) {
    return (int)KFileItem_Permissions((KFileItem*)self);
}

const char* k_fileitem_permissions_string(void* self) {
    libqt_string _str = KFileItem_PermissionsString((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileitem_has_extended_a_c_l(void* self) {
    return KFileItem_HasExtendedACL((KFileItem*)self);
}

KACL* k_fileitem_a_c_l(void* self) {
    return KFileItem_ACL((KFileItem*)self);
}

KACL* k_fileitem_default_a_c_l(void* self) {
    return KFileItem_DefaultACL((KFileItem*)self);
}

mode_t k_fileitem_mode(void* self) {
    return (int)KFileItem_Mode((KFileItem*)self);
}

int32_t k_fileitem_user_id(void* self) {
    return KFileItem_UserId((KFileItem*)self);
}

int32_t k_fileitem_group_id(void* self) {
    return KFileItem_GroupId((KFileItem*)self);
}

const char* k_fileitem_user(void* self) {
    libqt_string _str = KFileItem_User((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_group(void* self) {
    libqt_string _str = KFileItem_Group((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileitem_is_link(void* self) {
    return KFileItem_IsLink((KFileItem*)self);
}

bool k_fileitem_is_dir(void* self) {
    return KFileItem_IsDir((KFileItem*)self);
}

bool k_fileitem_is_file(void* self) {
    return KFileItem_IsFile((KFileItem*)self);
}

bool k_fileitem_is_readable(void* self) {
    return KFileItem_IsReadable((KFileItem*)self);
}

bool k_fileitem_is_writable(void* self) {
    return KFileItem_IsWritable((KFileItem*)self);
}

bool k_fileitem_is_hidden(void* self) {
    return KFileItem_IsHidden((KFileItem*)self);
}

bool k_fileitem_is_slow(void* self) {
    return KFileItem_IsSlow((KFileItem*)self);
}

bool k_fileitem_is_desktop_file(void* self) {
    return KFileItem_IsDesktopFile((KFileItem*)self);
}

const char* k_fileitem_link_dest(void* self) {
    libqt_string _str = KFileItem_LinkDest((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_fileitem_target_url(void* self) {
    return KFileItem_TargetUrl((KFileItem*)self);
}

const char* k_fileitem_local_path(void* self) {
    libqt_string _str = KFileItem_LocalPath((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_fileitem_size(void* self) {
    return KFileItem_Size((KFileItem*)self);
}

uint64_t k_fileitem_recursive_size(void* self) {
    return KFileItem_RecursiveSize((KFileItem*)self);
}

QDateTime* k_fileitem_time(void* self, int32_t which) {
    return KFileItem_Time((KFileItem*)self, which);
}

const char* k_fileitem_time_string(void* self) {
    libqt_string _str = KFileItem_TimeString((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileitem_is_local_file(void* self) {
    return KFileItem_IsLocalFile((KFileItem*)self);
}

const char* k_fileitem_text(void* self) {
    libqt_string _str = KFileItem_Text((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_name(void* self) {
    libqt_string _str = KFileItem_Name((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_mimetype(void* self) {
    libqt_string _str = KFileItem_Mimetype((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMimeType* k_fileitem_determine_mime_type(void* self) {
    return KFileItem_DetermineMimeType((KFileItem*)self);
}

QMimeType* k_fileitem_current_mime_type(void* self) {
    return KFileItem_CurrentMimeType((KFileItem*)self);
}

bool k_fileitem_is_final_icon_known(void* self) {
    return KFileItem_IsFinalIconKnown((KFileItem*)self);
}

bool k_fileitem_is_mime_type_known(void* self) {
    return KFileItem_IsMimeTypeKnown((KFileItem*)self);
}

const char* k_fileitem_mime_comment(void* self) {
    libqt_string _str = KFileItem_MimeComment((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_icon_name(void* self) {
    libqt_string _str = KFileItem_IconName((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_fileitem_overlays(void* self) {
    libqt_list _arr = KFileItem_Overlays((KFileItem*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fileitem_overlays");
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

const char* k_fileitem_comment(void* self) {
    libqt_string _str = KFileItem_Comment((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_get_status_bar_info(void* self) {
    libqt_string _str = KFileItem_GetStatusBarInfo((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__UDSEntry* k_fileitem_entry(void* self) {
    return KFileItem_Entry((KFileItem*)self);
}

bool k_fileitem_is_regular_file(void* self) {
    return KFileItem_IsRegularFile((KFileItem*)self);
}

const char* k_fileitem_suffix(void* self) {
    libqt_string _str = KFileItem_Suffix((KFileItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileitem_cmp(void* self, void* item) {
    return KFileItem_Cmp((KFileItem*)self, (KFileItem*)item);
}

bool k_fileitem_operator_equal(void* self, void* other) {
    return KFileItem_OperatorEqual((KFileItem*)self, (KFileItem*)other);
}

bool k_fileitem_operator_not_equal(void* self, void* other) {
    return KFileItem_OperatorNotEqual((KFileItem*)self, (KFileItem*)other);
}

bool k_fileitem_operator_lesser(void* self, void* other) {
    return KFileItem_OperatorLesser((KFileItem*)self, (KFileItem*)other);
}

bool k_fileitem_operator_lesser2(void* self, void* other) {
    return KFileItem_OperatorLesser2((KFileItem*)self, (QUrl*)other);
}

QVariant* k_fileitem_to_q_variant(void* self) {
    return KFileItem_ToQVariant((KFileItem*)self);
}

QUrl* k_fileitem_most_local_url(void* self) {
    return KFileItem_MostLocalUrl((KFileItem*)self);
}

KFileItem__MostLocalUrlResult* k_fileitem_is_most_local_url(void* self) {
    return KFileItem_IsMostLocalUrl((KFileItem*)self);
}

bool k_fileitem_is_null(void* self) {
    return KFileItem_IsNull((KFileItem*)self);
}

bool k_fileitem_exists(void* self) {
    return KFileItem_Exists((KFileItem*)self);
}

bool k_fileitem_is_executable(void* self) {
    return KFileItem_IsExecutable((KFileItem*)self);
}

const char* k_fileitem_time_string1(void* self, int32_t which) {
    libqt_string _str = KFileItem_TimeString1((KFileItem*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitem_name1(void* self, bool lowerCase) {
    libqt_string _str = KFileItem_Name1((KFileItem*)self, lowerCase);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_fileitem_most_local_url1(void* self, bool* local) {
    return KFileItem_MostLocalUrl1((KFileItem*)self, (bool*)local);
}

void k_fileitem_delete(void* self) {
    KFileItem_Delete((KFileItem*)(self));
}

// Also inherits unprojectable QList<KFileItem>

KFileItemList* k_fileitemlist_new() {
    return KFileItemList_new();
}

KFileItemList* k_fileitemlist_new2(libqt_list items) {
    return KFileItemList_new2(items);
}

KFileItem* k_fileitemlist_find_by_name(void* self, const char* fileName) {
    return KFileItemList_FindByName((KFileItemList*)self, qstring(fileName));
}

KFileItem* k_fileitemlist_find_by_url(void* self, void* url) {
    return KFileItemList_FindByUrl((KFileItemList*)self, (QUrl*)url);
}

libqt_list /* of QUrl* */ k_fileitemlist_url_list(void* self) {
    libqt_list _arr = KFileItemList_UrlList((KFileItemList*)self);
    return _arr;
}

libqt_list /* of QUrl* */ k_fileitemlist_target_url_list(void* self) {
    libqt_list _arr = KFileItemList_TargetUrlList((KFileItemList*)self);
    return _arr;
}

void k_fileitemlist_delete(void* self) {
    KFileItemList_Delete((KFileItemList*)(self));
}

KFileItem__MostLocalUrlResult* k_fileitem__mostlocalurlresult_new(void* param1) {
    return KFileItem__MostLocalUrlResult_new((KFileItem__MostLocalUrlResult*)param1);
}

QUrl* k_fileitem__mostlocalurlresult_url(void* self) {
    return KFileItem__MostLocalUrlResult_Url((KFileItem__MostLocalUrlResult*)self);
}

void k_fileitem__mostlocalurlresult_set_url(void* self, void* url) {
    KFileItem__MostLocalUrlResult_SetUrl((KFileItem__MostLocalUrlResult*)self, (QUrl*)url);
}

bool k_fileitem__mostlocalurlresult_local(void* self) {
    return KFileItem__MostLocalUrlResult_Local((KFileItem__MostLocalUrlResult*)self);
}

void k_fileitem__mostlocalurlresult_set_local(void* self, bool local) {
    KFileItem__MostLocalUrlResult_SetLocal((KFileItem__MostLocalUrlResult*)self, local);
}

void k_fileitem__mostlocalurlresult_operator_assign(void* self, void* param1) {
    KFileItem__MostLocalUrlResult_OperatorAssign((KFileItem__MostLocalUrlResult*)self, (KFileItem__MostLocalUrlResult*)param1);
}

void k_fileitem__mostlocalurlresult_delete(void* self) {
    KFileItem__MostLocalUrlResult_Delete((KFileItem__MostLocalUrlResult*)(self));
}
