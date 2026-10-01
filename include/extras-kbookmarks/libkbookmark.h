#pragma once
#ifndef EXTRAS_KBOOKMARKS_LIBKBOOKMARK_H
#define EXTRAS_KBOOKMARKS_LIBKBOOKMARK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbookmark.html)

/// k_bookmark_new constructs a new KBookmark object.
///
KBookmark* k_bookmark_new();

/// [Upstream resources](https://api.kde.org/kbookmark.html)

/// k_bookmark_new2 constructs a new KBookmark object.
///
/// @param elem QDomElement*
///
KBookmark* k_bookmark_new2(const void* elem);

/// [Upstream resources](https://api.kde.org/kbookmark.html)

/// k_bookmark_new3 constructs a new KBookmark object.
///
/// @param param1 KBookmark*
///
KBookmark* k_bookmark_new3(const void* param1);

/// [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
///
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
///
KBookmark* k_bookmark_standalone_bookmark(const char* text, const void* url, const char* icon);

/// [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
///
/// @param self const KBookmark*
///
bool k_bookmark_is_group(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
///
/// @param self const KBookmark*
///
bool k_bookmark_is_separator(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
///
/// @param self const KBookmark*
///
bool k_bookmark_is_null(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
///
/// @param self const KBookmark*
///
bool k_bookmark_has_parent(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_text(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#fullText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_full_text(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
///
/// @param self KBookmark*
/// @param fullText const char*
///
void k_bookmark_set_full_text(void* self, const char* fullText);

/// [Upstream resources](https://api.kde.org/kbookmark.html#url)
///
/// @param self const KBookmark*
///
QUrl* k_bookmark_url(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
///
/// @param self KBookmark*
/// @param url QUrl*
///
void k_bookmark_set_url(void* self, const void* url);

/// [Upstream resources](https://api.kde.org/kbookmark.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
///
/// @param self KBookmark*
/// @param icon const char*
///
void k_bookmark_set_icon(void* self, const char* icon);

/// [Upstream resources](https://api.kde.org/kbookmark.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_description(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
///
/// @param self KBookmark*
/// @param description const char*
///
void k_bookmark_set_description(void* self, const char* description);

/// [Upstream resources](https://api.kde.org/kbookmark.html#mimeType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_mime_type(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
///
/// @param self KBookmark*
/// @param mimeType const char*
///
void k_bookmark_set_mime_type(void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
///
/// @param self const KBookmark*
///
bool k_bookmark_show_in_toolbar(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setShowInToolbar)
///
/// @param self KBookmark*
/// @param show bool
///
void k_bookmark_set_show_in_toolbar(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
///
/// @param self const KBookmark*
///
KBookmarkGroup* k_bookmark_parent_group(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
///
/// @param self const KBookmark*
///
KBookmarkGroup* k_bookmark_to_group(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#address)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
///
const char* k_bookmark_address(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param self const KBookmark*
///
int32_t k_bookmark_position_in_parent(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
///
/// @param self const KBookmark*
///
QDomElement* k_bookmark_internal_element(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
///
/// @param self KBookmark*
///
void k_bookmark_update_access_metadata(void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmark_parent_address(const char* address);

/// [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param address const char*
///
uint32_t k_bookmark_position_in_parent2(const char* address);

/// [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmark_previous_address(const char* address);

/// [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmark_next_address(const char* address);

/// [Upstream resources](https://api.kde.org/kbookmark.html#commonParent)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param A const char*
/// @param B const char*
///
const char* k_bookmark_common_parent(const char* A, const char* B);

/// [Upstream resources](https://api.kde.org/kbookmark.html#metaData)
///
/// @param self const KBookmark*
/// @param owner const char*
/// @param create bool
///
QDomNode* k_bookmark_meta_data(const void* self, const char* owner, bool create);

/// [Upstream resources](https://api.kde.org/kbookmark.html#metaDataItem)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmark*
/// @param key const char*
///
const char* k_bookmark_meta_data_item(const void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmark*
/// @param key const char*
/// @param value const char*
///
void k_bookmark_set_meta_data_item(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kbookmark.html#populateMimeData)
///
/// @param self const KBookmark*
/// @param mimeData QMimeData*
///
void k_bookmark_populate_mime_data(const void* self, void* mimeData);

/// [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq-eq)
///
/// @param self const KBookmark*
/// @param rhs KBookmark*
///
bool k_bookmark_operator_equal(const void* self, const void* rhs);

/// [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq)
///
/// @param self KBookmark*
/// @param param1 KBookmark*
///
void k_bookmark_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmark*
/// @param key const char*
/// @param value const char*
/// @param mode enum KBookmark__MetaDataOverwriteMode
///
void k_bookmark_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode);

/// [Upstream resources](https://api.kde.org/kbookmark.html#dtor.KBookmark)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmark*
///
void k_bookmark_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html)

/// k_bookmarkgroup_new constructs a new KBookmarkGroup object.
///
KBookmarkGroup* k_bookmarkgroup_new();

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html)

/// k_bookmarkgroup_new2 constructs a new KBookmarkGroup object.
///
/// @param elem QDomElement*
///
KBookmarkGroup* k_bookmarkgroup_new2(const void* elem);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isOpen)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_is_open(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#first)
///
/// @param self const KBookmarkGroup*
///
KBookmark* k_bookmarkgroup_first(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#previous)
///
/// @param self const KBookmarkGroup*
/// @param current KBookmark*
///
KBookmark* k_bookmarkgroup_previous(const void* self, const void* current);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#next)
///
/// @param self const KBookmarkGroup*
/// @param current KBookmark*
///
KBookmark* k_bookmarkgroup_next(const void* self, const void* current);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#indexOf)
///
/// @param self const KBookmarkGroup*
/// @param child KBookmark*
///
int32_t k_bookmarkgroup_index_of(const void* self, const void* child);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewFolder)
///
/// @param self KBookmarkGroup*
/// @param text const char*
///
KBookmarkGroup* k_bookmarkgroup_create_new_folder(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewSeparator)
///
/// @param self KBookmarkGroup*
///
KBookmark* k_bookmarkgroup_create_new_separator(void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
///
/// @param self KBookmarkGroup*
/// @param bm KBookmark*
///
KBookmark* k_bookmarkgroup_add_bookmark(void* self, const void* bm);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
///
/// @param self KBookmarkGroup*
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
///
KBookmark* k_bookmarkgroup_add_bookmark2(void* self, const char* text, const void* url, const char* icon);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#moveBookmark)
///
/// @param self KBookmarkGroup*
/// @param bookmark KBookmark*
/// @param after KBookmark*
///
bool k_bookmarkgroup_move_bookmark(void* self, const void* bookmark, const void* after);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#deleteBookmark)
///
/// @param self KBookmarkGroup*
/// @param bk KBookmark*
///
void k_bookmarkgroup_delete_bookmark(void* self, const void* bk);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isToolbarGroup)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_is_toolbar_group(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#findToolbar)
///
/// @param self const KBookmarkGroup*
///
QDomElement* k_bookmarkgroup_find_toolbar(const void* self);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#groupUrlList)
///
/// @param self const KBookmarkGroup*
///
/// @return libqt_list of QUrl*
///
libqt_list k_bookmarkgroup_group_url_list(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
///
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
///
KBookmark* k_bookmarkgroup_standalone_bookmark(const char* text, const void* url, const char* icon);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_is_group(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_is_separator(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_is_null(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_has_parent(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_text(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#fullText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_full_text(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
///
/// @param self KBookmarkGroup*
/// @param fullText const char*
///
void k_bookmarkgroup_set_full_text(void* self, const char* fullText);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#url)
///
/// @param self const KBookmarkGroup*
///
QUrl* k_bookmarkgroup_url(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
///
/// @param self KBookmarkGroup*
/// @param url QUrl*
///
void k_bookmarkgroup_set_url(void* self, const void* url);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_icon(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
///
/// @param self KBookmarkGroup*
/// @param icon const char*
///
void k_bookmarkgroup_set_icon(void* self, const char* icon);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_description(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
///
/// @param self KBookmarkGroup*
/// @param description const char*
///
void k_bookmarkgroup_set_description(void* self, const char* description);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#mimeType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_mime_type(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
///
/// @param self KBookmarkGroup*
/// @param mimeType const char*
///
void k_bookmarkgroup_set_mime_type(void* self, const char* mimeType);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
///
/// @param self const KBookmarkGroup*
///
bool k_bookmarkgroup_show_in_toolbar(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setShowInToolbar)
///
/// @param self KBookmarkGroup*
/// @param show bool
///
void k_bookmarkgroup_set_show_in_toolbar(void* self, bool show);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
///
/// @param self const KBookmarkGroup*
///
KBookmarkGroup* k_bookmarkgroup_parent_group(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
///
/// @param self const KBookmarkGroup*
///
KBookmarkGroup* k_bookmarkgroup_to_group(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#address)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
///
const char* k_bookmarkgroup_address(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param self const KBookmarkGroup*
///
int32_t k_bookmarkgroup_position_in_parent(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
///
/// @param self const KBookmarkGroup*
///
QDomElement* k_bookmarkgroup_internal_element(const void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
///
/// @param self KBookmarkGroup*
///
void k_bookmarkgroup_update_access_metadata(void* self);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmarkgroup_parent_address(const char* address);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param address const char*
///
uint32_t k_bookmarkgroup_position_in_parent2(const char* address);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmarkgroup_previous_address(const char* address);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param address const char*
///
const char* k_bookmarkgroup_next_address(const char* address);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#commonParent)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param A const char*
/// @param B const char*
///
const char* k_bookmarkgroup_common_parent(const char* A, const char* B);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#metaData)
///
/// @param self const KBookmarkGroup*
/// @param owner const char*
/// @param create bool
///
QDomNode* k_bookmarkgroup_meta_data(const void* self, const char* owner, bool create);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#metaDataItem)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KBookmarkGroup*
/// @param key const char*
///
const char* k_bookmarkgroup_meta_data_item(const void* self, const char* key);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmarkGroup*
/// @param key const char*
/// @param value const char*
///
void k_bookmarkgroup_set_meta_data_item(void* self, const char* key, const char* value);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#populateMimeData)
///
/// @param self const KBookmarkGroup*
/// @param mimeData QMimeData*
///
void k_bookmarkgroup_populate_mime_data(const void* self, void* mimeData);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq-eq)
///
/// @param self const KBookmarkGroup*
/// @param rhs KBookmark*
///
bool k_bookmarkgroup_operator_equal(const void* self, const void* rhs);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq)
///
/// @param self KBookmarkGroup*
/// @param param1 KBookmark*
///
void k_bookmarkgroup_operator_assign(void* self, const void* param1);

/// Inherited from KBookmark
///
/// [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmarkGroup*
/// @param key const char*
/// @param value const char*
/// @param mode enum KBookmark__MetaDataOverwriteMode
///
void k_bookmarkgroup_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode);

/// [Upstream resources](https://api.kde.org/kbookmarkgroup.html#dtor.KBookmarkGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkGroup*
///
void k_bookmarkgroup_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbookmark-list.html)

/// k_bookmark__list_new constructs a new KBookmark::List object.
///
KBookmark__List* k_bookmark__list_new();

/// [Upstream resources](https://api.kde.org/kbookmark-list.html#populateMimeData)
///
/// @param self const KBookmark__List*
/// @param mimeData QMimeData*
///
void k_bookmark__list_populate_mime_data(const void* self, void* mimeData);

/// [Upstream resources](https://api.kde.org/kbookmark-list.html#canDecode)
///
/// @param mimeData QMimeData*
///
bool k_bookmark__list_can_decode(const void* mimeData);

/// [Upstream resources](https://api.kde.org/kbookmark-list.html#mimeDataTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_bookmark__list_mime_data_types();

/// [Upstream resources](https://api.kde.org/kbookmark-list.html#fromMimeData)
///
/// @param mimeData QMimeData*
/// @param parentDocument QDomDocument*
///
KBookmark__List* k_bookmark__list_from_mime_data(const void* mimeData, void* parentDocument);

/// Delete this object from C++ memory.
///
/// @param self KBookmark__List*
///
void k_bookmark__list_delete(void* self);

/// [Upstream resources](https://api.kde.org/kbookmark.html#public-types)

typedef enum {
    KBOOKMARK_METADATAOVERWRITEMODE_OVERWRITEMETADATA = 0,
    KBOOKMARK_METADATAOVERWRITEMODE_DONTOVERWRITEMETADATA = 1
} KBookmark__MetaDataOverwriteMode;

#endif
