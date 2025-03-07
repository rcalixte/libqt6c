#include "libqdatetime.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqresource.hpp"
#include "libqresource.h"

/// https://doc.qt.io/qt-6/qresource.html

/// q_resource_new constructs a new QResource object.
///
///
QResource* q_resource_new() {
    return QResource_new();
}

/// q_resource_new2 constructs a new QResource object.
///
/// ``` const char* file ```
QResource* q_resource_new2(const char* file) {
    return QResource_new2(qstring(file));
}

/// q_resource_new3 constructs a new QResource object.
///
/// ``` const char* file, QLocale* locale ```
QResource* q_resource_new3(const char* file, void* locale) {
    return QResource_new3(qstring(file), (QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setFileName)
///
/// ``` QResource* self, const char* file ```
void q_resource_set_file_name(void* self, const char* file) {
    QResource_SetFileName((QResource*)self, qstring(file));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#fileName)
///
/// ``` QResource* self ```
const char* q_resource_file_name(void* self) {
    libqt_string _str = QResource_FileName((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
///
/// ``` QResource* self ```
const char* q_resource_absolute_file_path(void* self) {
    libqt_string _str = QResource_AbsoluteFilePath((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setLocale)
///
/// ``` QResource* self, QLocale* locale ```
void q_resource_set_locale(void* self, void* locale) {
    QResource_SetLocale((QResource*)self, (QLocale*)locale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#locale)
///
/// ``` QResource* self ```
QLocale* q_resource_locale(void* self) {
    return QResource_Locale((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#isValid)
///
/// ``` QResource* self ```
bool q_resource_is_valid(void* self) {
    return QResource_IsValid((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#compressionAlgorithm)
///
/// ``` QResource* self ```
int64_t q_resource_compression_algorithm(void* self) {
    return QResource_CompressionAlgorithm((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#size)
///
/// ``` QResource* self ```
long long q_resource_size(void* self) {
    return QResource_Size((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#data)
///
/// ``` QResource* self ```
unsigned char* q_resource_data(void* self) {
    return (unsigned char*)QResource_Data((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
///
/// ``` QResource* self ```
long long q_resource_uncompressed_size(void* self) {
    return QResource_UncompressedSize((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
///
/// ``` QResource* self ```
char* q_resource_uncompressed_data(void* self) {
    libqt_string _str = QResource_UncompressedData((QResource*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#lastModified)
///
/// ``` QResource* self ```
QDateTime* q_resource_last_modified(void* self) {
    return QResource_LastModified((QResource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` const char* rccFilename ```
bool q_resource_register_resource(const char* rccFilename) {
    return QResource_RegisterResource(qstring(rccFilename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` const char* rccFilename ```
bool q_resource_unregister_resource(const char* rccFilename) {
    return QResource_UnregisterResource(qstring(rccFilename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` unsigned char* rccData ```
bool q_resource_register_resource_with_rcc_data(unsigned char* rccData) {
    return QResource_RegisterResourceWithRccData(rccData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` unsigned char* rccData ```
bool q_resource_unregister_resource_with_rcc_data(unsigned char* rccData) {
    return QResource_UnregisterResourceWithRccData(rccData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` const char* rccFilename, const char* resourceRoot ```
bool q_resource_register_resource2(const char* rccFilename, const char* resourceRoot) {
    return QResource_RegisterResource2(qstring(rccFilename), qstring(resourceRoot));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` const char* rccFilename, const char* resourceRoot ```
bool q_resource_unregister_resource2(const char* rccFilename, const char* resourceRoot) {
    return QResource_UnregisterResource2(qstring(rccFilename), qstring(resourceRoot));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` unsigned char* rccData, const char* resourceRoot ```
bool q_resource_register_resource22(unsigned char* rccData, const char* resourceRoot) {
    return QResource_RegisterResource22(rccData, qstring(resourceRoot));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` unsigned char* rccData, const char* resourceRoot ```
bool q_resource_unregister_resource22(unsigned char* rccData, const char* resourceRoot) {
    return QResource_UnregisterResource22(rccData, qstring(resourceRoot));
}

/// Delete this object from C++ memory.
///
/// ``` QResource* self ```
void q_resource_delete(void* self) {
    QResource_Delete((QResource*)(self));
}