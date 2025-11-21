#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARK_H
#define SRC_EXTRAS_KBOOKMARKS_QT6C_LIBKBOOKMARK_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kbookmark.html

/// k_bookmark_new constructs a new KBookmark object.
///
KBookmark* k_bookmark_new();

/// k_bookmark_new2 constructs a new KBookmark object.
///
/// @param elem QDomElement*
KBookmark* k_bookmark_new2(void* elem);

/// [Qt documentation](https://api.kde.org/kbookmark.html#standaloneBookmark)
///
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
KBookmark* k_bookmark_standalone_bookmark(const char* text, void* url, const char* icon);

/// [Qt documentation](https://api.kde.org/kbookmark.html#isGroup)
///
/// @param self KBookmark*
bool k_bookmark_is_group(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#isSeparator)
///
/// @param self KBookmark*
bool k_bookmark_is_separator(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#isNull)
///
/// @param self KBookmark*
bool k_bookmark_is_null(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#hasParent)
///
/// @param self KBookmark*
bool k_bookmark_has_parent(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_text(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#fullText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_full_text(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setFullText)
///
/// @param self KBookmark*
/// @param fullText const char*
void k_bookmark_set_full_text(void* self, const char* fullText);

/// [Qt documentation](https://api.kde.org/kbookmark.html#url)
///
/// @param self KBookmark*
QUrl* k_bookmark_url(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setUrl)
///
/// @param self KBookmark*
/// @param url QUrl*
void k_bookmark_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kbookmark.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_icon(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setIcon)
///
/// @param self KBookmark*
/// @param icon const char*
void k_bookmark_set_icon(void* self, const char* icon);

/// [Qt documentation](https://api.kde.org/kbookmark.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_description(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setDescription)
///
/// @param self KBookmark*
/// @param description const char*
void k_bookmark_set_description(void* self, const char* description);

/// [Qt documentation](https://api.kde.org/kbookmark.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_mime_type(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setMimeType)
///
/// @param self KBookmark*
/// @param mimeType const char*
void k_bookmark_set_mime_type(void* self, const char* mimeType);

/// [Qt documentation](https://api.kde.org/kbookmark.html#showInToolbar)
///
/// @param self KBookmark*
bool k_bookmark_show_in_toolbar(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setShowInToolbar)
///
/// @param self KBookmark*
/// @param show bool
void k_bookmark_set_show_in_toolbar(void* self, bool show);

/// [Qt documentation](https://api.kde.org/kbookmark.html#parentGroup)
///
/// @param self KBookmark*
KBookmarkGroup* k_bookmark_parent_group(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#toGroup)
///
/// @param self KBookmark*
KBookmarkGroup* k_bookmark_to_group(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#address)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
const char* k_bookmark_address(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param self KBookmark*
int32_t k_bookmark_position_in_parent(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#internalElement)
///
/// @param self KBookmark*
QDomElement* k_bookmark_internal_element(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#updateAccessMetadata)
///
/// @param self KBookmark*
void k_bookmark_update_access_metadata(void* self);

/// [Qt documentation](https://api.kde.org/kbookmark.html#parentAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmark_parent_address(const char* address);

/// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param address const char*
uint32_t k_bookmark_position_in_parent2(const char* address);

/// [Qt documentation](https://api.kde.org/kbookmark.html#previousAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmark_previous_address(const char* address);

/// [Qt documentation](https://api.kde.org/kbookmark.html#nextAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmark_next_address(const char* address);

/// [Qt documentation](https://api.kde.org/kbookmark.html#commonParent)
///
/// Caller is responsible for freeing the returned memory
///
/// @param A const char*
/// @param B const char*
const char* k_bookmark_common_parent(const char* A, const char* B);

/// [Qt documentation](https://api.kde.org/kbookmark.html#metaData)
///
/// @param self KBookmark*
/// @param owner const char*
/// @param create bool
QDomNode* k_bookmark_meta_data(void* self, const char* owner, bool create);

/// [Qt documentation](https://api.kde.org/kbookmark.html#metaDataItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmark*
/// @param key const char*
const char* k_bookmark_meta_data_item(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmark*
/// @param key const char*
/// @param value const char*
void k_bookmark_set_meta_data_item(void* self, const char* key, const char* value);

/// [Qt documentation](https://api.kde.org/kbookmark.html#populateMimeData)
///
/// @param self KBookmark*
/// @param mimeData QMimeData*
void k_bookmark_populate_mime_data(void* self, void* mimeData);

/// [Qt documentation](https://api.kde.org/kbookmark.html#operator-eq-eq)
///
/// @param self KBookmark*
/// @param rhs KBookmark*
bool k_bookmark_operator_equal(void* self, void* rhs);

/// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmark*
/// @param key const char*
/// @param value const char*
/// @param mode enum KBookmark__MetaDataOverwriteMode
void k_bookmark_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode);

/// [Qt documentation](https://api.kde.org/kbookmark.html#dtor.KBookmark)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmark*
void k_bookmark_delete(void* self);

/// https://api.kde.org/kbookmarkgroup.html

/// k_bookmarkgroup_new constructs a new KBookmarkGroup object.
///
KBookmarkGroup* k_bookmarkgroup_new();

/// k_bookmarkgroup_new2 constructs a new KBookmarkGroup object.
///
/// @param elem QDomElement*
KBookmarkGroup* k_bookmarkgroup_new2(void* elem);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#isOpen)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_is_open(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#first)
///
/// @param self KBookmarkGroup*
KBookmark* k_bookmarkgroup_first(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#previous)
///
/// @param self KBookmarkGroup*
/// @param current KBookmark*
KBookmark* k_bookmarkgroup_previous(void* self, void* current);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#next)
///
/// @param self KBookmarkGroup*
/// @param current KBookmark*
KBookmark* k_bookmarkgroup_next(void* self, void* current);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#indexOf)
///
/// @param self KBookmarkGroup*
/// @param child KBookmark*
int32_t k_bookmarkgroup_index_of(void* self, void* child);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#createNewFolder)
///
/// @param self KBookmarkGroup*
/// @param text const char*
KBookmarkGroup* k_bookmarkgroup_create_new_folder(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#createNewSeparator)
///
/// @param self KBookmarkGroup*
KBookmark* k_bookmarkgroup_create_new_separator(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#addBookmark)
///
/// @param self KBookmarkGroup*
/// @param bm KBookmark*
KBookmark* k_bookmarkgroup_add_bookmark(void* self, void* bm);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#addBookmark)
///
/// @param self KBookmarkGroup*
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
KBookmark* k_bookmarkgroup_add_bookmark2(void* self, const char* text, void* url, const char* icon);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#moveBookmark)
///
/// @param self KBookmarkGroup*
/// @param bookmark KBookmark*
/// @param after KBookmark*
bool k_bookmarkgroup_move_bookmark(void* self, void* bookmark, void* after);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#deleteBookmark)
///
/// @param self KBookmarkGroup*
/// @param bk KBookmark*
void k_bookmarkgroup_delete_bookmark(void* self, void* bk);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#isToolbarGroup)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_is_toolbar_group(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#findToolbar)
///
/// @param self KBookmarkGroup*
QDomElement* k_bookmarkgroup_find_toolbar(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#groupUrlList)
///
/// @param self KBookmarkGroup*
libqt_list /* of QUrl* */ k_bookmarkgroup_group_url_list(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#standaloneBookmark)
///
/// @param text const char*
/// @param url QUrl*
/// @param icon const char*
KBookmark* k_bookmarkgroup_standalone_bookmark(const char* text, void* url, const char* icon);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#isGroup)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_is_group(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#isSeparator)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_is_separator(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#isNull)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_is_null(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#hasParent)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_has_parent(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_text(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#fullText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_full_text(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setFullText)
///
/// @param self KBookmarkGroup*
/// @param fullText const char*
void k_bookmarkgroup_set_full_text(void* self, const char* fullText);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#url)
///
/// @param self KBookmarkGroup*
QUrl* k_bookmarkgroup_url(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setUrl)
///
/// @param self KBookmarkGroup*
/// @param url QUrl*
void k_bookmarkgroup_set_url(void* self, void* url);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_icon(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setIcon)
///
/// @param self KBookmarkGroup*
/// @param icon const char*
void k_bookmarkgroup_set_icon(void* self, const char* icon);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_description(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setDescription)
///
/// @param self KBookmarkGroup*
/// @param description const char*
void k_bookmarkgroup_set_description(void* self, const char* description);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_mime_type(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setMimeType)
///
/// @param self KBookmarkGroup*
/// @param mimeType const char*
void k_bookmarkgroup_set_mime_type(void* self, const char* mimeType);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#showInToolbar)
///
/// @param self KBookmarkGroup*
bool k_bookmarkgroup_show_in_toolbar(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setShowInToolbar)
///
/// @param self KBookmarkGroup*
/// @param show bool
void k_bookmarkgroup_set_show_in_toolbar(void* self, bool show);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#parentGroup)
///
/// @param self KBookmarkGroup*
KBookmarkGroup* k_bookmarkgroup_parent_group(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#toGroup)
///
/// @param self KBookmarkGroup*
KBookmarkGroup* k_bookmarkgroup_to_group(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#address)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
const char* k_bookmarkgroup_address(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param self KBookmarkGroup*
int32_t k_bookmarkgroup_position_in_parent(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#internalElement)
///
/// @param self KBookmarkGroup*
QDomElement* k_bookmarkgroup_internal_element(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#updateAccessMetadata)
///
/// @param self KBookmarkGroup*
void k_bookmarkgroup_update_access_metadata(void* self);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#parentAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmarkgroup_parent_address(const char* address);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#positionInParent)
///
/// @param address const char*
uint32_t k_bookmarkgroup_position_in_parent2(const char* address);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#previousAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmarkgroup_previous_address(const char* address);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#nextAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param address const char*
const char* k_bookmarkgroup_next_address(const char* address);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#commonParent)
///
/// Caller is responsible for freeing the returned memory
///
/// @param A const char*
/// @param B const char*
const char* k_bookmarkgroup_common_parent(const char* A, const char* B);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#metaData)
///
/// @param self KBookmarkGroup*
/// @param owner const char*
/// @param create bool
QDomNode* k_bookmarkgroup_meta_data(void* self, const char* owner, bool create);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#metaDataItem)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KBookmarkGroup*
/// @param key const char*
const char* k_bookmarkgroup_meta_data_item(void* self, const char* key);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmarkGroup*
/// @param key const char*
/// @param value const char*
void k_bookmarkgroup_set_meta_data_item(void* self, const char* key, const char* value);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#populateMimeData)
///
/// @param self KBookmarkGroup*
/// @param mimeData QMimeData*
void k_bookmarkgroup_populate_mime_data(void* self, void* mimeData);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#operator-eq-eq)
///
/// @param self KBookmarkGroup*
/// @param rhs KBookmark*
bool k_bookmarkgroup_operator_equal(void* self, void* rhs);

/// Inherited from KBookmark
///
/// [Qt documentation](https://api.kde.org/kbookmark.html#setMetaDataItem)
///
/// @param self KBookmarkGroup*
/// @param key const char*
/// @param value const char*
/// @param mode enum KBookmark__MetaDataOverwriteMode
void k_bookmarkgroup_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode);

/// [Qt documentation](https://api.kde.org/kbookmarkgroup.html#dtor.KBookmarkGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkGroup*
void k_bookmarkgroup_delete(void* self);

/// https://api.kde.org/kbookmark-list.html

/// k_bookmark__list_new constructs a new KBookmark::List object.
///
KBookmark__List* k_bookmark__list_new();

/// [Qt documentation](https://api.kde.org/kbookmark-list.html#populateMimeData)
///
/// @param self KBookmark__List*
/// @param mimeData QMimeData*
void k_bookmark__list_populate_mime_data(void* self, void* mimeData);

/// [Qt documentation](https://api.kde.org/kbookmark-list.html#canDecode)
///
/// @param mimeData QMimeData*
bool k_bookmark__list_can_decode(void* mimeData);

/// [Qt documentation](https://api.kde.org/kbookmark-list.html#mimeDataTypes)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_bookmark__list_mime_data_types();

/// [Qt documentation](https://api.kde.org/kbookmark-list.html#fromMimeData)
///
/// @param mimeData QMimeData*
/// @param parentDocument QDomDocument*
KBookmark__List* k_bookmark__list_from_mime_data(void* mimeData, void* parentDocument);

/// Delete this object from C++ memory.
///
/// @param self KBookmark__List*
void k_bookmark__list_delete(void* self);

/// https://api.kde.org/kbookmark.html#types

typedef enum {
    KBOOKMARK_METADATAOVERWRITEMODE_OVERWRITEMETADATA = 0,
    KBOOKMARK_METADATAOVERWRITEMODE_DONTOVERWRITEMETADATA = 1
} KBookmark__MetaDataOverwriteMode;

#endif
