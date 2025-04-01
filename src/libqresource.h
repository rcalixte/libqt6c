#pragma once
#ifndef SRCQT6C_LIBQRESOURCE_H
#define SRCQT6C_LIBQRESOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdatetime.h"
#include "libqlocale.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qresource.html

/// q_resource_new constructs a new QResource object.
///
///
QResource* q_resource_new();

/// q_resource_new2 constructs a new QResource object.
///
/// ``` const char* file ```
QResource* q_resource_new2(const char* file);

/// q_resource_new3 constructs a new QResource object.
///
/// ``` const char* file, QLocale* locale ```
QResource* q_resource_new3(const char* file, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setFileName)
///
/// ``` QResource* self, const char* file ```
void q_resource_set_file_name(void* self, const char* file);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#fileName)
///
/// ``` QResource* self ```
const char* q_resource_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#absoluteFilePath)
///
/// ``` QResource* self ```
const char* q_resource_absolute_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#setLocale)
///
/// ``` QResource* self, QLocale* locale ```
void q_resource_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#locale)
///
/// ``` QResource* self ```
QLocale* q_resource_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#isValid)
///
/// ``` QResource* self ```
bool q_resource_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#compressionAlgorithm)
///
/// ``` QResource* self ```
int64_t q_resource_compression_algorithm(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#size)
///
/// ``` QResource* self ```
long long q_resource_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#data)
///
/// ``` QResource* self ```
unsigned char* q_resource_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedSize)
///
/// ``` QResource* self ```
long long q_resource_uncompressed_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#uncompressedData)
///
/// ``` QResource* self ```
char* q_resource_uncompressed_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#lastModified)
///
/// ``` QResource* self ```
QDateTime* q_resource_last_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` const char* rccFilename ```
bool q_resource_register_resource(const char* rccFilename);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` const char* rccFilename ```
bool q_resource_unregister_resource(const char* rccFilename);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` unsigned char* rccData ```
bool q_resource_register_resource_with_rcc_data(unsigned char* rccData);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` unsigned char* rccData ```
bool q_resource_unregister_resource_with_rcc_data(unsigned char* rccData);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` const char* rccFilename, const char* resourceRoot ```
bool q_resource_register_resource2(const char* rccFilename, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` const char* rccFilename, const char* resourceRoot ```
bool q_resource_unregister_resource2(const char* rccFilename, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#registerResource)
///
/// ``` unsigned char* rccData, const char* resourceRoot ```
bool q_resource_register_resource22(unsigned char* rccData, const char* resourceRoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qresource.html#unregisterResource)
///
/// ``` unsigned char* rccData, const char* resourceRoot ```
bool q_resource_unregister_resource22(unsigned char* rccData, const char* resourceRoot);

/// Delete this object from C++ memory.
///
/// ``` QResource* self ```
void q_resource_delete(void* self);

/// https://doc.qt.io/qt-6/qresource.html#types

typedef enum {
    QRESOURCE_COMPRESSION_NOCOMPRESSION = 0,
    QRESOURCE_COMPRESSION_ZLIBCOMPRESSION = 1,
    QRESOURCE_COMPRESSION_ZSTDCOMPRESSION = 2
} QResource__Compression;

#endif
