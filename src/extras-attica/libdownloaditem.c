#include "../libqurl.hpp"
#include "libdownloaditem.hpp"
#include "libdownloaditem.h"

Attica__DownloadItem* k_attica__downloaditem_new() {
    return Attica__DownloadItem_new();
}

Attica__DownloadItem* k_attica__downloaditem_new2(void* other) {
    return Attica__DownloadItem_new2((Attica__DownloadItem*)other);
}

void k_attica__downloaditem_operator_assign(void* self, void* other) {
    Attica__DownloadItem_OperatorAssign((Attica__DownloadItem*)self, (Attica__DownloadItem*)other);
}

void k_attica__downloaditem_set_url(void* self, void* url) {
    Attica__DownloadItem_SetUrl((Attica__DownloadItem*)self, (QUrl*)url);
}

QUrl* k_attica__downloaditem_url(void* self) {
    return Attica__DownloadItem_Url((Attica__DownloadItem*)self);
}

void k_attica__downloaditem_set_mime_type(void* self, const char* mimeType) {
    Attica__DownloadItem_SetMimeType((Attica__DownloadItem*)self, qstring(mimeType));
}

const char* k_attica__downloaditem_mime_type(void* self) {
    libqt_string _str = Attica__DownloadItem_MimeType((Attica__DownloadItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaditem_set_package_name(void* self, const char* packageName) {
    Attica__DownloadItem_SetPackageName((Attica__DownloadItem*)self, qstring(packageName));
}

const char* k_attica__downloaditem_package_name(void* self) {
    libqt_string _str = Attica__DownloadItem_PackageName((Attica__DownloadItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaditem_set_package_repository(void* self, const char* packageRepository) {
    Attica__DownloadItem_SetPackageRepository((Attica__DownloadItem*)self, qstring(packageRepository));
}

const char* k_attica__downloaditem_package_repository(void* self) {
    libqt_string _str = Attica__DownloadItem_PackageRepository((Attica__DownloadItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaditem_set_gpg_fingerprint(void* self, const char* gpgFingerprint) {
    Attica__DownloadItem_SetGpgFingerprint((Attica__DownloadItem*)self, qstring(gpgFingerprint));
}

const char* k_attica__downloaditem_gpg_fingerprint(void* self) {
    libqt_string _str = Attica__DownloadItem_GpgFingerprint((Attica__DownloadItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaditem_set_gpg_signature(void* self, const char* gpgSignature) {
    Attica__DownloadItem_SetGpgSignature((Attica__DownloadItem*)self, qstring(gpgSignature));
}

const char* k_attica__downloaditem_gpg_signature(void* self) {
    libqt_string _str = Attica__DownloadItem_GpgSignature((Attica__DownloadItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__downloaditem_set_type(void* self, int32_t type) {
    Attica__DownloadItem_SetType((Attica__DownloadItem*)self, type);
}

int32_t k_attica__downloaditem_type(void* self) {
    return Attica__DownloadItem_Type((Attica__DownloadItem*)self);
}

void k_attica__downloaditem_delete(void* self) {
    Attica__DownloadItem_Delete((Attica__DownloadItem*)(self));
}
