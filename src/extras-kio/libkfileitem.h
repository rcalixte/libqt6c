#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEITEM_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new constructs a new KFileItem object.
///
KFileItem* k_fileitem_new();

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new2 constructs a new KFileItem object.
///
/// @param entry KIO__UDSEntry*
/// @param itemOrDirUrl QUrl*
///
KFileItem* k_fileitem_new2(void* entry, void* itemOrDirUrl);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new3 constructs a new KFileItem object.
///
/// @param url QUrl*
///
KFileItem* k_fileitem_new3(void* url);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new4 constructs a new KFileItem object.
///
/// @param url QUrl*
/// @param mimeTypeDetermination enum KFileItem__MimeTypeDetermination
///
KFileItem* k_fileitem_new4(void* url, int32_t mimeTypeDetermination);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new5 constructs a new KFileItem object.
///
/// @param param1 KFileItem*
///
KFileItem* k_fileitem_new5(void* param1);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new6 constructs a new KFileItem object.
///
/// @param entry KIO__UDSEntry*
/// @param itemOrDirUrl QUrl*
/// @param delayedMimeTypes bool
///
KFileItem* k_fileitem_new6(void* entry, void* itemOrDirUrl, bool delayedMimeTypes);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new7 constructs a new KFileItem object.
///
/// @param entry KIO__UDSEntry*
/// @param itemOrDirUrl QUrl*
/// @param delayedMimeTypes bool
/// @param urlIsDirectory bool
///
KFileItem* k_fileitem_new7(void* entry, void* itemOrDirUrl, bool delayedMimeTypes, bool urlIsDirectory);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new8 constructs a new KFileItem object.
///
/// @param url QUrl*
/// @param mimeType const char*
///
KFileItem* k_fileitem_new8(void* url, const char* mimeType);

/// [Upstream resources](https://api.kde.org/kfileitem.html)

/// k_fileitem_new9 constructs a new KFileItem object.
///
/// @param url QUrl*
/// @param mimeType const char*
/// @param mode mode_t
///
KFileItem* k_fileitem_new9(void* url, const char* mimeType, mode_t mode);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq)
///
/// @param self KFileItem*
/// @param param1 KFileItem*
///
void k_fileitem_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kfileitem.html#refresh)
///
/// @param self KFileItem*
///
void k_fileitem_refresh(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#refreshMimeType)
///
/// @param self KFileItem*
///
void k_fileitem_refresh_mime_type(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#setDelayedMimeTypes)
///
/// @param self KFileItem*
/// @param b bool
///
void k_fileitem_set_delayed_mime_types(void* self, bool b);

/// [Upstream resources](https://api.kde.org/kfileitem.html#url)
///
/// @param self KFileItem*
///
QUrl* k_fileitem_url(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#setUrl)
///
/// @param self KFileItem*
/// @param url QUrl*
///
void k_fileitem_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileitem.html#setLocalPath)
///
/// @param self KFileItem*
/// @param path const char*
///
void k_fileitem_set_local_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kfileitem.html#setName)
///
/// @param self KFileItem*
/// @param name const char*
///
void k_fileitem_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kfileitem.html#permissions)
///
/// @param self KFileItem*
///
mode_t k_fileitem_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#permissionsString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_permissions_string(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#hasExtendedACL)
///
/// @param self KFileItem*
///
bool k_fileitem_has_extended_a_c_l(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#ACL)
///
/// @param self KFileItem*
///
KACL* k_fileitem_a_c_l(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#defaultACL)
///
/// @param self KFileItem*
///
KACL* k_fileitem_default_a_c_l(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#mode)
///
/// @param self KFileItem*
///
mode_t k_fileitem_mode(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#userId)
///
/// @param self KFileItem*
///
int32_t k_fileitem_user_id(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#groupId)
///
/// @param self KFileItem*
///
int32_t k_fileitem_group_id(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_user(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#group)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_group(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isLink)
///
/// @param self KFileItem*
///
bool k_fileitem_is_link(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isDir)
///
/// @param self KFileItem*
///
bool k_fileitem_is_dir(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isFile)
///
/// @param self KFileItem*
///
bool k_fileitem_is_file(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isReadable)
///
/// @param self KFileItem*
///
bool k_fileitem_is_readable(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isWritable)
///
/// @param self KFileItem*
///
bool k_fileitem_is_writable(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isHidden)
///
/// @param self KFileItem*
///
bool k_fileitem_is_hidden(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isSlow)
///
/// @param self KFileItem*
///
bool k_fileitem_is_slow(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isDesktopFile)
///
/// @param self KFileItem*
///
bool k_fileitem_is_desktop_file(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#linkDest)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_link_dest(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#targetUrl)
///
/// @param self KFileItem*
///
QUrl* k_fileitem_target_url(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#localPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_local_path(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#size)
///
/// @param self KFileItem*
///
uint64_t k_fileitem_size(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#recursiveSize)
///
/// @param self KFileItem*
///
uint64_t k_fileitem_recursive_size(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#time)
///
/// @param self KFileItem*
/// @param which enum KFileItem__FileTimes
///
QDateTime* k_fileitem_time(void* self, int32_t which);

/// [Upstream resources](https://api.kde.org/kfileitem.html#timeString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_time_string(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isLocalFile)
///
/// @param self KFileItem*
///
bool k_fileitem_is_local_file(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_text(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_name(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#mimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_mimetype(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#determineMimeType)
///
/// @param self KFileItem*
///
QMimeType* k_fileitem_determine_mime_type(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#currentMimeType)
///
/// @param self KFileItem*
///
QMimeType* k_fileitem_current_mime_type(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isFinalIconKnown)
///
/// @param self KFileItem*
///
bool k_fileitem_is_final_icon_known(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isMimeTypeKnown)
///
/// @param self KFileItem*
///
bool k_fileitem_is_mime_type_known(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#mimeComment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_mime_comment(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#overlays)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileItem*
///
const char** k_fileitem_overlays(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_comment(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#getStatusBarInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_get_status_bar_info(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#entry)
///
/// @param self KFileItem*
///
KIO__UDSEntry* k_fileitem_entry(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isRegularFile)
///
/// @param self KFileItem*
///
bool k_fileitem_is_regular_file(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#suffix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
///
const char* k_fileitem_suffix(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#cmp)
///
/// @param self KFileItem*
/// @param item KFileItem*
///
bool k_fileitem_cmp(void* self, void* item);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq-eq)
///
/// @param self KFileItem*
/// @param other KFileItem*
///
bool k_fileitem_operator_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator-not-eq)
///
/// @param self KFileItem*
/// @param other KFileItem*
///
bool k_fileitem_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
///
/// @param self KFileItem*
/// @param other KFileItem*
///
bool k_fileitem_operator_lesser(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
///
/// @param self KFileItem*
/// @param other QUrl*
///
bool k_fileitem_operator_lesser2(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfileitem.html#operator)
///
/// @param self KFileItem*
///
QVariant* k_fileitem_to_q_variant(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
///
/// @param self KFileItem*
///
QUrl* k_fileitem_most_local_url(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isMostLocalUrl)
///
/// @param self KFileItem*
///
KFileItem__MostLocalUrlResult* k_fileitem_is_most_local_url(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isNull)
///
/// @param self KFileItem*
///
bool k_fileitem_is_null(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#exists)
///
/// @param self KFileItem*
///
bool k_fileitem_exists(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#isExecutable)
///
/// @param self KFileItem*
///
bool k_fileitem_is_executable(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#timeString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
/// @param which enum KFileItem__FileTimes
///
const char* k_fileitem_time_string1(void* self, int32_t which);

/// [Upstream resources](https://api.kde.org/kfileitem.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileItem*
/// @param lowerCase bool
///
const char* k_fileitem_name1(void* self, bool lowerCase);

/// [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
///
/// @param self KFileItem*
/// @param local bool*
///
QUrl* k_fileitem_most_local_url1(void* self, bool* local);

/// [Upstream resources](https://api.kde.org/kfileitem.html#dtor.KFileItem)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItem*
///
void k_fileitem_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html)

/// k_fileitemlist_new constructs a new KFileItemList object.
///
KFileItemList* k_fileitemlist_new();

/// [Upstream resources](https://api.kde.org/kfileitemlist.html)

/// k_fileitemlist_new2 constructs a new KFileItemList object.
///
/// @param items libqt_list /* of KFileItem* */
///
KFileItemList* k_fileitemlist_new2(libqt_list items);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html#findByName)
///
/// @param self KFileItemList*
/// @param fileName const char*
///
KFileItem* k_fileitemlist_find_by_name(void* self, const char* fileName);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html#findByUrl)
///
/// @param self KFileItemList*
/// @param url QUrl*
///
KFileItem* k_fileitemlist_find_by_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html#urlList)
///
/// @param self KFileItemList*
///
libqt_list /* of QUrl* */ k_fileitemlist_url_list(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html#targetUrlList)
///
/// @param self KFileItemList*
///
libqt_list /* of QUrl* */ k_fileitemlist_target_url_list(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlist.html#dtor.KFileItemList)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItemList*
///
void k_fileitemlist_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html)

/// k_fileitem__mostlocalurlresult_new constructs a new KFileItem::MostLocalUrlResult object.
///
/// @param param1 KFileItem__MostLocalUrlResult*
///
KFileItem__MostLocalUrlResult* k_fileitem__mostlocalurlresult_new(void* param1);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
///
/// @param self KFileItem__MostLocalUrlResult*
///
QUrl* k_fileitem__mostlocalurlresult_url(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
///
/// @param self KFileItem__MostLocalUrlResult*
/// @param url QUrl*
///
void k_fileitem__mostlocalurlresult_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
///
/// @param self KFileItem__MostLocalUrlResult*
///
bool k_fileitem__mostlocalurlresult_local(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
///
/// @param self KFileItem__MostLocalUrlResult*
/// @param local bool
///
void k_fileitem__mostlocalurlresult_set_local(void* self, bool local);

/// [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#operator-eq)
///
/// @param self KFileItem__MostLocalUrlResult*
/// @param param1 KFileItem__MostLocalUrlResult*
///
void k_fileitem__mostlocalurlresult_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KFileItem__MostLocalUrlResult*
///
void k_fileitem__mostlocalurlresult_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfileitem.html#public-types)

typedef enum {
    KFILEITEM__UNKNOWN = 4294967295
} KFileItem__;

/// [Upstream resources](https://api.kde.org/kfileitem.html#public-types)

typedef enum {
    KFILEITEM_FILETIMES_MODIFICATIONTIME = 0,
    KFILEITEM_FILETIMES_ACCESSTIME = 1,
    KFILEITEM_FILETIMES_CREATIONTIME = 2
} KFileItem__FileTimes;

/// [Upstream resources](https://api.kde.org/kfileitem.html#public-types)

typedef enum {
    KFILEITEM_MIMETYPEDETERMINATION_NORMALMIMETYPEDETERMINATION = 0,
    KFILEITEM_MIMETYPEDETERMINATION_SKIPMIMETYPEFROMCONTENT = 1
} KFileItem__MimeTypeDetermination;

#endif
