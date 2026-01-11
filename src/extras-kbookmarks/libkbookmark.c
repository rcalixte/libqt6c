#include "../xml/libqdom.hpp"
#include "../libqmimedata.hpp"
#include "../libqurl.hpp"
#include "libkbookmark.hpp"
#include "libkbookmark.h"

KBookmark* k_bookmark_new() {
    return KBookmark_new();
}

KBookmark* k_bookmark_new2(void* elem) {
    return KBookmark_new2((QDomElement*)elem);
}

KBookmark* k_bookmark_new3(void* param1) {
    return KBookmark_new3((KBookmark*)param1);
}

KBookmark* k_bookmark_standalone_bookmark(const char* text, void* url, const char* icon) {
    return KBookmark_StandaloneBookmark(qstring(text), (QUrl*)url, qstring(icon));
}

bool k_bookmark_is_group(void* self) {
    return KBookmark_IsGroup((KBookmark*)self);
}

bool k_bookmark_is_separator(void* self) {
    return KBookmark_IsSeparator((KBookmark*)self);
}

bool k_bookmark_is_null(void* self) {
    return KBookmark_IsNull((KBookmark*)self);
}

bool k_bookmark_has_parent(void* self) {
    return KBookmark_HasParent((KBookmark*)self);
}

const char* k_bookmark_text(void* self) {
    libqt_string _str = KBookmark_Text((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmark_full_text(void* self) {
    libqt_string _str = KBookmark_FullText((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmark_set_full_text(void* self, const char* fullText) {
    KBookmark_SetFullText((KBookmark*)self, qstring(fullText));
}

QUrl* k_bookmark_url(void* self) {
    return KBookmark_Url((KBookmark*)self);
}

void k_bookmark_set_url(void* self, void* url) {
    KBookmark_SetUrl((KBookmark*)self, (QUrl*)url);
}

const char* k_bookmark_icon(void* self) {
    libqt_string _str = KBookmark_Icon((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmark_set_icon(void* self, const char* icon) {
    KBookmark_SetIcon((KBookmark*)self, qstring(icon));
}

const char* k_bookmark_description(void* self) {
    libqt_string _str = KBookmark_Description((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmark_set_description(void* self, const char* description) {
    KBookmark_SetDescription((KBookmark*)self, qstring(description));
}

const char* k_bookmark_mime_type(void* self) {
    libqt_string _str = KBookmark_MimeType((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmark_set_mime_type(void* self, const char* mimeType) {
    KBookmark_SetMimeType((KBookmark*)self, qstring(mimeType));
}

bool k_bookmark_show_in_toolbar(void* self) {
    return KBookmark_ShowInToolbar((KBookmark*)self);
}

void k_bookmark_set_show_in_toolbar(void* self, bool show) {
    KBookmark_SetShowInToolbar((KBookmark*)self, show);
}

KBookmarkGroup* k_bookmark_parent_group(void* self) {
    return KBookmark_ParentGroup((KBookmark*)self);
}

KBookmarkGroup* k_bookmark_to_group(void* self) {
    return KBookmark_ToGroup((KBookmark*)self);
}

const char* k_bookmark_address(void* self) {
    libqt_string _str = KBookmark_Address((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_bookmark_position_in_parent(void* self) {
    return KBookmark_PositionInParent((KBookmark*)self);
}

QDomElement* k_bookmark_internal_element(void* self) {
    return KBookmark_InternalElement((KBookmark*)self);
}

void k_bookmark_update_access_metadata(void* self) {
    KBookmark_UpdateAccessMetadata((KBookmark*)self);
}

const char* k_bookmark_parent_address(const char* address) {
    libqt_string _str = KBookmark_ParentAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_bookmark_position_in_parent2(const char* address) {
    return KBookmark_PositionInParent2(qstring(address));
}

const char* k_bookmark_previous_address(const char* address) {
    libqt_string _str = KBookmark_PreviousAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmark_next_address(const char* address) {
    libqt_string _str = KBookmark_NextAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmark_common_parent(const char* A, const char* B) {
    libqt_string _str = KBookmark_CommonParent(qstring(A), qstring(B));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* k_bookmark_meta_data(void* self, const char* owner, bool create) {
    return KBookmark_MetaData((KBookmark*)self, qstring(owner), create);
}

const char* k_bookmark_meta_data_item(void* self, const char* key) {
    libqt_string _str = KBookmark_MetaDataItem((KBookmark*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmark_set_meta_data_item(void* self, const char* key, const char* value) {
    KBookmark_SetMetaDataItem((KBookmark*)self, qstring(key), qstring(value));
}

void k_bookmark_populate_mime_data(void* self, void* mimeData) {
    KBookmark_PopulateMimeData((KBookmark*)self, (QMimeData*)mimeData);
}

bool k_bookmark_operator_equal(void* self, void* rhs) {
    return KBookmark_OperatorEqual((KBookmark*)self, (KBookmark*)rhs);
}

void k_bookmark_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode) {
    KBookmark_SetMetaDataItem3((KBookmark*)self, qstring(key), qstring(value), mode);
}

void k_bookmark_delete(void* self) {
    KBookmark_Delete((KBookmark*)(self));
}

KBookmarkGroup* k_bookmarkgroup_new() {
    return KBookmarkGroup_new();
}

KBookmarkGroup* k_bookmarkgroup_new2(void* elem) {
    return KBookmarkGroup_new2((QDomElement*)elem);
}

bool k_bookmarkgroup_is_open(void* self) {
    return KBookmarkGroup_IsOpen((KBookmarkGroup*)self);
}

KBookmark* k_bookmarkgroup_first(void* self) {
    return KBookmarkGroup_First((KBookmarkGroup*)self);
}

KBookmark* k_bookmarkgroup_previous(void* self, void* current) {
    return KBookmarkGroup_Previous((KBookmarkGroup*)self, (KBookmark*)current);
}

KBookmark* k_bookmarkgroup_next(void* self, void* current) {
    return KBookmarkGroup_Next((KBookmarkGroup*)self, (KBookmark*)current);
}

int32_t k_bookmarkgroup_index_of(void* self, void* child) {
    return KBookmarkGroup_IndexOf((KBookmarkGroup*)self, (KBookmark*)child);
}

KBookmarkGroup* k_bookmarkgroup_create_new_folder(void* self, const char* text) {
    return KBookmarkGroup_CreateNewFolder((KBookmarkGroup*)self, qstring(text));
}

KBookmark* k_bookmarkgroup_create_new_separator(void* self) {
    return KBookmarkGroup_CreateNewSeparator((KBookmarkGroup*)self);
}

KBookmark* k_bookmarkgroup_add_bookmark(void* self, void* bm) {
    return KBookmarkGroup_AddBookmark((KBookmarkGroup*)self, (KBookmark*)bm);
}

KBookmark* k_bookmarkgroup_add_bookmark2(void* self, const char* text, void* url, const char* icon) {
    return KBookmarkGroup_AddBookmark2((KBookmarkGroup*)self, qstring(text), (QUrl*)url, qstring(icon));
}

bool k_bookmarkgroup_move_bookmark(void* self, void* bookmark, void* after) {
    return KBookmarkGroup_MoveBookmark((KBookmarkGroup*)self, (KBookmark*)bookmark, (KBookmark*)after);
}

void k_bookmarkgroup_delete_bookmark(void* self, void* bk) {
    KBookmarkGroup_DeleteBookmark((KBookmarkGroup*)self, (KBookmark*)bk);
}

bool k_bookmarkgroup_is_toolbar_group(void* self) {
    return KBookmarkGroup_IsToolbarGroup((KBookmarkGroup*)self);
}

QDomElement* k_bookmarkgroup_find_toolbar(void* self) {
    return KBookmarkGroup_FindToolbar((KBookmarkGroup*)self);
}

libqt_list /* of QUrl* */ k_bookmarkgroup_group_url_list(void* self) {
    libqt_list _arr = KBookmarkGroup_GroupUrlList((KBookmarkGroup*)self);
    return _arr;
}

KBookmark* k_bookmarkgroup_standalone_bookmark(const char* text, void* url, const char* icon) {
    return KBookmark_StandaloneBookmark(qstring(text), (QUrl*)url, qstring(icon));
}

bool k_bookmarkgroup_is_group(void* self) {
    return KBookmark_IsGroup((KBookmark*)self);
}

bool k_bookmarkgroup_is_separator(void* self) {
    return KBookmark_IsSeparator((KBookmark*)self);
}

bool k_bookmarkgroup_is_null(void* self) {
    return KBookmark_IsNull((KBookmark*)self);
}

bool k_bookmarkgroup_has_parent(void* self) {
    return KBookmark_HasParent((KBookmark*)self);
}

const char* k_bookmarkgroup_text(void* self) {
    libqt_string _str = KBookmark_Text((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkgroup_full_text(void* self) {
    libqt_string _str = KBookmark_FullText((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkgroup_set_full_text(void* self, const char* fullText) {
    KBookmark_SetFullText((KBookmark*)self, qstring(fullText));
}

QUrl* k_bookmarkgroup_url(void* self) {
    return KBookmark_Url((KBookmark*)self);
}

void k_bookmarkgroup_set_url(void* self, void* url) {
    KBookmark_SetUrl((KBookmark*)self, (QUrl*)url);
}

const char* k_bookmarkgroup_icon(void* self) {
    libqt_string _str = KBookmark_Icon((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkgroup_set_icon(void* self, const char* icon) {
    KBookmark_SetIcon((KBookmark*)self, qstring(icon));
}

const char* k_bookmarkgroup_description(void* self) {
    libqt_string _str = KBookmark_Description((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkgroup_set_description(void* self, const char* description) {
    KBookmark_SetDescription((KBookmark*)self, qstring(description));
}

const char* k_bookmarkgroup_mime_type(void* self) {
    libqt_string _str = KBookmark_MimeType((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkgroup_set_mime_type(void* self, const char* mimeType) {
    KBookmark_SetMimeType((KBookmark*)self, qstring(mimeType));
}

bool k_bookmarkgroup_show_in_toolbar(void* self) {
    return KBookmark_ShowInToolbar((KBookmark*)self);
}

void k_bookmarkgroup_set_show_in_toolbar(void* self, bool show) {
    KBookmark_SetShowInToolbar((KBookmark*)self, show);
}

KBookmarkGroup* k_bookmarkgroup_parent_group(void* self) {
    return KBookmark_ParentGroup((KBookmark*)self);
}

KBookmarkGroup* k_bookmarkgroup_to_group(void* self) {
    return KBookmark_ToGroup((KBookmark*)self);
}

const char* k_bookmarkgroup_address(void* self) {
    libqt_string _str = KBookmark_Address((KBookmark*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_bookmarkgroup_position_in_parent(void* self) {
    return KBookmark_PositionInParent((KBookmark*)self);
}

QDomElement* k_bookmarkgroup_internal_element(void* self) {
    return KBookmark_InternalElement((KBookmark*)self);
}

void k_bookmarkgroup_update_access_metadata(void* self) {
    KBookmark_UpdateAccessMetadata((KBookmark*)self);
}

const char* k_bookmarkgroup_parent_address(const char* address) {
    libqt_string _str = KBookmark_ParentAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_bookmarkgroup_position_in_parent2(const char* address) {
    return KBookmark_PositionInParent2(qstring(address));
}

const char* k_bookmarkgroup_previous_address(const char* address) {
    libqt_string _str = KBookmark_PreviousAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkgroup_next_address(const char* address) {
    libqt_string _str = KBookmark_NextAddress(qstring(address));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_bookmarkgroup_common_parent(const char* A, const char* B) {
    libqt_string _str = KBookmark_CommonParent(qstring(A), qstring(B));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDomNode* k_bookmarkgroup_meta_data(void* self, const char* owner, bool create) {
    return KBookmark_MetaData((KBookmark*)self, qstring(owner), create);
}

const char* k_bookmarkgroup_meta_data_item(void* self, const char* key) {
    libqt_string _str = KBookmark_MetaDataItem((KBookmark*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_bookmarkgroup_set_meta_data_item(void* self, const char* key, const char* value) {
    KBookmark_SetMetaDataItem((KBookmark*)self, qstring(key), qstring(value));
}

void k_bookmarkgroup_populate_mime_data(void* self, void* mimeData) {
    KBookmark_PopulateMimeData((KBookmark*)self, (QMimeData*)mimeData);
}

bool k_bookmarkgroup_operator_equal(void* self, void* rhs) {
    return KBookmark_OperatorEqual((KBookmark*)self, (KBookmark*)rhs);
}

void k_bookmarkgroup_set_meta_data_item3(void* self, const char* key, const char* value, int32_t mode) {
    KBookmark_SetMetaDataItem3((KBookmark*)self, qstring(key), qstring(value), mode);
}

void k_bookmarkgroup_delete(void* self) {
    KBookmarkGroup_Delete((KBookmarkGroup*)(self));
}

// Also inherits unprojectable QList<KBookmark>

KBookmark__List* k_bookmark__list_new() {
    return KBookmark__List_new();
}

void k_bookmark__list_populate_mime_data(void* self, void* mimeData) {
    KBookmark__List_PopulateMimeData((KBookmark__List*)self, (QMimeData*)mimeData);
}

bool k_bookmark__list_can_decode(void* mimeData) {
    return KBookmark__List_CanDecode((QMimeData*)mimeData);
}

const char** k_bookmark__list_mime_data_types() {
    libqt_list _arr = KBookmark__List_MimeDataTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_bookmark__list_mime_data_types");
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

KBookmark__List* k_bookmark__list_from_mime_data(void* mimeData, void* parentDocument) {
    return KBookmark__List_FromMimeData((QMimeData*)mimeData, (QDomDocument*)parentDocument);
}

void k_bookmark__list_delete(void* self) {
    KBookmark__List_Delete((KBookmark__List*)(self));
}
