#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include "libqresource.hpp"
#include "libqresource.h"

QResource* q_resource_new() {
    return QResource_new();
}

QResource* q_resource_new2(const char* file) {
    return QResource_new2(qstring(file));
}

QResource* q_resource_new3(const char* file, void* locale) {
    return QResource_new3(qstring(file), (QLocale*)locale);
}

void q_resource_set_file_name(void* self, const char* file) {
    QResource_SetFileName((QResource*)self, qstring(file));
}

const char* q_resource_file_name(void* self) {
    libqt_string _str = QResource_FileName((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_resource_absolute_file_path(void* self) {
    libqt_string _str = QResource_AbsoluteFilePath((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_resource_set_locale(void* self, void* locale) {
    QResource_SetLocale((QResource*)self, (QLocale*)locale);
}

QLocale* q_resource_locale(void* self) {
    return QResource_Locale((QResource*)self);
}

bool q_resource_is_valid(void* self) {
    return QResource_IsValid((QResource*)self);
}

int64_t q_resource_compression_algorithm(void* self) {
    return QResource_CompressionAlgorithm((QResource*)self);
}

long long q_resource_size(void* self) {
    return QResource_Size((QResource*)self);
}

const unsigned char* q_resource_data(void* self) {
    return (unsigned char*)QResource_Data((QResource*)self);
}

long long q_resource_uncompressed_size(void* self) {
    return QResource_UncompressedSize((QResource*)self);
}

char* q_resource_uncompressed_data(void* self) {
    libqt_string _str = QResource_UncompressedData((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDateTime* q_resource_last_modified(void* self) {
    return QResource_LastModified((QResource*)self);
}

bool q_resource_register_resource(const char* rccFilename) {
    return QResource_RegisterResource(qstring(rccFilename));
}

bool q_resource_unregister_resource(const char* rccFilename) {
    return QResource_UnregisterResource(qstring(rccFilename));
}

bool q_resource_register_resource2(unsigned char* rccData) {
    return QResource_RegisterResource2(rccData);
}

bool q_resource_unregister_resource2(unsigned char* rccData) {
    return QResource_UnregisterResource2(rccData);
}

bool q_resource_register_resource22(const char* rccFilename, const char* resourceRoot) {
    return QResource_RegisterResource22(qstring(rccFilename), qstring(resourceRoot));
}

bool q_resource_unregister_resource22(const char* rccFilename, const char* resourceRoot) {
    return QResource_UnregisterResource22(qstring(rccFilename), qstring(resourceRoot));
}

bool q_resource_register_resource23(unsigned char* rccData, const char* resourceRoot) {
    return QResource_RegisterResource23(rccData, qstring(resourceRoot));
}

bool q_resource_unregister_resource23(unsigned char* rccData, const char* resourceRoot) {
    return QResource_UnregisterResource23(rccData, qstring(resourceRoot));
}

void q_resource_delete(void* self) {
    QResource_Delete((QResource*)(self));
}
