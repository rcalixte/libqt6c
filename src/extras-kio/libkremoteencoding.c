#include "../libqurl.hpp"
#include "libkremoteencoding.hpp"
#include "libkremoteencoding.h"

KRemoteEncoding* k_remoteencoding_new() {
    return KRemoteEncoding_new();
}

KRemoteEncoding* k_remoteencoding_new2(const char* name) {
    return KRemoteEncoding_new2(name);
}

const char* k_remoteencoding_decode(void* self, char* name) {
    libqt_string _str = KRemoteEncoding_Decode((KRemoteEncoding*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_remoteencoding_encode(void* self, const char* name) {
    libqt_string _str = KRemoteEncoding_Encode((KRemoteEncoding*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_remoteencoding_encode2(void* self, void* url) {
    libqt_string _str = KRemoteEncoding_Encode2((KRemoteEncoding*)self, (QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_remoteencoding_directory(void* self, void* url) {
    libqt_string _str = KRemoteEncoding_Directory((KRemoteEncoding*)self, (QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_remoteencoding_file_name(void* self, void* url) {
    libqt_string _str = KRemoteEncoding_FileName((KRemoteEncoding*)self, (QUrl*)url);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_remoteencoding_encoding(void* self) {
    return KRemoteEncoding_Encoding((KRemoteEncoding*)self);
}

void k_remoteencoding_set_encoding(void* self, const char* name) {
    KRemoteEncoding_SetEncoding((KRemoteEncoding*)self, name);
}

void k_remoteencoding_virtual_hook(void* self, int id, void* data) {
    KRemoteEncoding_VirtualHook((KRemoteEncoding*)self, id, data);
}

void k_remoteencoding_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KRemoteEncoding_OnVirtualHook((KRemoteEncoding*)self, (intptr_t)callback);
}

void k_remoteencoding_super_virtual_hook(void* self, int id, void* data) {
    KRemoteEncoding_SuperVirtualHook((KRemoteEncoding*)self, id, data);
}

char* k_remoteencoding_directory2(void* self, void* url, bool ignore_trailing_slash) {
    libqt_string _str = KRemoteEncoding_Directory2((KRemoteEncoding*)self, (QUrl*)url, ignore_trailing_slash);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_remoteencoding_delete(void* self) {
    KRemoteEncoding_Delete((KRemoteEncoding*)(self));
}
