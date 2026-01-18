#include "../libqurl.hpp"
#include "libkprotocolmanager.hpp"
#include "libkprotocolmanager.h"

KProtocolManager* k_protocolmanager_new(void* other) {
    return KProtocolManager_new((KProtocolManager*)other);
}

KProtocolManager* k_protocolmanager_new2(void* other) {
    return KProtocolManager_new2((KProtocolManager*)other);
}

void k_protocolmanager_copy_assign(void* self, void* other) {
    KProtocolManager_CopyAssign((KProtocolManager*)self, (KProtocolManager*)other);
}

void k_protocolmanager_move_assign(void* self, void* other) {
    KProtocolManager_MoveAssign((KProtocolManager*)self, (KProtocolManager*)other);
}

int32_t k_protocolmanager_read_timeout() {
    return KProtocolManager_ReadTimeout();
}

int32_t k_protocolmanager_connect_timeout() {
    return KProtocolManager_ConnectTimeout();
}

int32_t k_protocolmanager_proxy_connect_timeout() {
    return KProtocolManager_ProxyConnectTimeout();
}

int32_t k_protocolmanager_response_timeout() {
    return KProtocolManager_ResponseTimeout();
}

bool k_protocolmanager_auto_resume() {
    return KProtocolManager_AutoResume();
}

bool k_protocolmanager_mark_partial() {
    return KProtocolManager_MarkPartial();
}

int32_t k_protocolmanager_minimum_keep_size() {
    return KProtocolManager_MinimumKeepSize();
}

bool k_protocolmanager_supports_listing(void* url) {
    return KProtocolManager_SupportsListing((QUrl*)url);
}

bool k_protocolmanager_supports_reading(void* url) {
    return KProtocolManager_SupportsReading((QUrl*)url);
}

bool k_protocolmanager_supports_writing(void* url) {
    return KProtocolManager_SupportsWriting((QUrl*)url);
}

bool k_protocolmanager_supports_make_dir(void* url) {
    return KProtocolManager_SupportsMakeDir((QUrl*)url);
}

bool k_protocolmanager_supports_deleting(void* url) {
    return KProtocolManager_SupportsDeleting((QUrl*)url);
}

bool k_protocolmanager_supports_linking(void* url) {
    return KProtocolManager_SupportsLinking((QUrl*)url);
}

bool k_protocolmanager_supports_moving(void* url) {
    return KProtocolManager_SupportsMoving((QUrl*)url);
}

bool k_protocolmanager_supports_opening(void* url) {
    return KProtocolManager_SupportsOpening((QUrl*)url);
}

bool k_protocolmanager_supports_truncating(void* url) {
    return KProtocolManager_SupportsTruncating((QUrl*)url);
}

bool k_protocolmanager_can_copy_from_file(void* url) {
    return KProtocolManager_CanCopyFromFile((QUrl*)url);
}

bool k_protocolmanager_can_copy_to_file(void* url) {
    return KProtocolManager_CanCopyToFile((QUrl*)url);
}

bool k_protocolmanager_can_rename_from_file(void* url) {
    return KProtocolManager_CanRenameFromFile((QUrl*)url);
}

bool k_protocolmanager_can_rename_to_file(void* url) {
    return KProtocolManager_CanRenameToFile((QUrl*)url);
}

bool k_protocolmanager_can_delete_recursive(void* url) {
    return KProtocolManager_CanDeleteRecursive((QUrl*)url);
}

const char* k_protocolmanager_default_mimetype(void* url) {
    libqt_string _str = KProtocolManager_DefaultMimetype((QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_protocolmanager_input_type(void* url) {
    return KProtocolManager_InputType((QUrl*)url);
}

int32_t k_protocolmanager_output_type(void* url) {
    return KProtocolManager_OutputType((QUrl*)url);
}

const char** k_protocolmanager_listing(void* url) {
    libqt_list _arr = KProtocolManager_Listing((QUrl*)url);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_protocolmanager_listing\n");
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

bool k_protocolmanager_is_source_protocol(void* url) {
    return KProtocolManager_IsSourceProtocol((QUrl*)url);
}

const char* k_protocolmanager_protocol_for_archive_mimetype(const char* mimeType) {
    libqt_string _str = KProtocolManager_ProtocolForArchiveMimetype(qstring(mimeType));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_protocolmanager_reparse_configuration() {
    KProtocolManager_ReparseConfiguration();
}

const char* k_protocolmanager_charset_for(void* url) {
    libqt_string _str = KProtocolManager_CharsetFor((QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_protocolmanager_supports_permissions(void* url) {
    return KProtocolManager_SupportsPermissions((QUrl*)url);
}

void k_protocolmanager_delete(void* self) {
    KProtocolManager_Delete((KProtocolManager*)(self));
}
