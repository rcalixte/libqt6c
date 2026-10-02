#include "../libqurl.hpp"
#include "libkfileitemlistproperties.hpp"
#include "libkfileitemlistproperties.h"

KFileItemListProperties* k_fileitemlistproperties_new() {
    return KFileItemListProperties_New();
}

KFileItemListProperties* k_fileitemlistproperties_new2(const void* items) {
    return KFileItemListProperties_New2((KFileItemList*)items);
}

KFileItemListProperties* k_fileitemlistproperties_new3(const void* param1) {
    return KFileItemListProperties_New3((KFileItemListProperties*)param1);
}

void k_fileitemlistproperties_set_items(void* self, const void* items) {
    KFileItemListProperties_SetItems((KFileItemListProperties*)self, (KFileItemList*)items);
}

bool k_fileitemlistproperties_supports_reading(const void* self) {
    return KFileItemListProperties_SupportsReading((KFileItemListProperties*)self);
}

bool k_fileitemlistproperties_supports_deleting(const void* self) {
    return KFileItemListProperties_SupportsDeleting((KFileItemListProperties*)self);
}

bool k_fileitemlistproperties_supports_writing(const void* self) {
    return KFileItemListProperties_SupportsWriting((KFileItemListProperties*)self);
}

bool k_fileitemlistproperties_supports_moving(const void* self) {
    return KFileItemListProperties_SupportsMoving((KFileItemListProperties*)self);
}

bool k_fileitemlistproperties_is_local(const void* self) {
    return KFileItemListProperties_IsLocal((KFileItemListProperties*)self);
}

libqt_list /* of QUrl* */ k_fileitemlistproperties_url_list(const void* self) {
    libqt_list _arr = KFileItemListProperties_UrlList((KFileItemListProperties*)self);
    return _arr;
}

bool k_fileitemlistproperties_is_directory(const void* self) {
    return KFileItemListProperties_IsDirectory((KFileItemListProperties*)self);
}

bool k_fileitemlistproperties_is_file(const void* self) {
    return KFileItemListProperties_IsFile((KFileItemListProperties*)self);
}

const char* k_fileitemlistproperties_mime_type(const void* self) {
    libqt_string _str = KFileItemListProperties_MimeType((KFileItemListProperties*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileitemlistproperties_mime_group(const void* self) {
    libqt_string _str = KFileItemListProperties_MimeGroup((KFileItemListProperties*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileitemlistproperties_delete(void* self) {
    KFileItemListProperties_Delete((KFileItemListProperties*)(self));
}
