#pragma once
#ifndef SRCQT6C_LIBQRESOURCE_H
#define SRCQT6C_LIBQRESOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qresource.html

/// q_resource_new constructs a new QResource object.
///
QResource* q_resource_new();

/// q_resource_new2 constructs a new QResource object.
///
/// @param file const char*
QResource* q_resource_new2(const char* file);

/// q_resource_new3 constructs a new QResource object.
///
/// @param file const char*
/// @param locale QLocale*
QResource* q_resource_new3(const char* file, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setFileName)
///
/// @param self QResource*
/// @param file const char*
void q_resource_set_file_name(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#fileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QResource*
const char* q_resource_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QResource*
const char* q_resource_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setLocale)
///
/// @param self QResource*
/// @param locale QLocale*
void q_resource_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#locale)
///
/// @param self QResource*
QLocale* q_resource_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#isValid)
///
/// @param self QResource*
bool q_resource_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#compressionAlgorithm)
///
/// @param self QResource*
///
/// @return enum QResource__Compression
int32_t q_resource_compression_algorithm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#size)
///
/// @param self QResource*
long long q_resource_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#data)
///
/// @param self QResource*
const unsigned char* q_resource_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
///
/// @param self QResource*
long long q_resource_uncompressed_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QResource*
char* q_resource_uncompressed_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#lastModified)
///
/// @param self QResource*
QDateTime* q_resource_last_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// @param rccFilename const char*
bool q_resource_register_resource(const char* rccFilename);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// @param rccFilename const char*
bool q_resource_unregister_resource(const char* rccFilename);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// @param rccData unsigned char*
bool q_resource_register_resource2(unsigned char* rccData);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// @param rccData unsigned char*
bool q_resource_unregister_resource2(unsigned char* rccData);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// @param rccFilename const char*
/// @param resourceRoot const char*
bool q_resource_register_resource22(const char* rccFilename, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// @param rccFilename const char*
/// @param resourceRoot const char*
bool q_resource_unregister_resource22(const char* rccFilename, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// @param rccData unsigned char*
/// @param resourceRoot const char*
bool q_resource_register_resource23(unsigned char* rccData, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// @param rccData unsigned char*
/// @param resourceRoot const char*
bool q_resource_unregister_resource23(unsigned char* rccData, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#dtor.QResource)
///
/// Delete this object from C++ memory.
///
/// @param self QResource*
void q_resource_delete(void* self);

/// https://doc.qt.io/qt-6/qresource.html#types

typedef enum {
    QRESOURCE_COMPRESSION_NOCOMPRESSION = 0,
    QRESOURCE_COMPRESSION_ZLIBCOMPRESSION = 1,
    QRESOURCE_COMPRESSION_ZSTDCOMPRESSION = 2
} QResource__Compression;

#endif
