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

QResource* q_resource_new();
QResource* q_resource_new2(const char* file);
QResource* q_resource_new3(const char* file, void* locale);
void q_resource_set_file_name(void* self, const char* file);
const char* q_resource_file_name(void* self);
const char* q_resource_absolute_file_path(void* self);
void q_resource_set_locale(void* self, void* locale);
QLocale* q_resource_locale(void* self);
bool q_resource_is_valid(void* self);
int64_t q_resource_compression_algorithm(void* self);
long long q_resource_size(void* self);
unsigned char* q_resource_data(void* self);
long long q_resource_uncompressed_size(void* self);
char* q_resource_uncompressed_data(void* self);
QDateTime* q_resource_last_modified(void* self);
bool q_resource_register_resource(const char* rccFilename);
bool q_resource_unregister_resource(const char* rccFilename);
bool q_resource_register_resource_with_rcc_data(unsigned char* rccData);
bool q_resource_unregister_resource_with_rcc_data(unsigned char* rccData);
bool q_resource_register_resource2(const char* rccFilename, const char* resourceRoot);
bool q_resource_unregister_resource2(const char* rccFilename, const char* resourceRoot);
bool q_resource_register_resource22(unsigned char* rccData, const char* resourceRoot);
bool q_resource_unregister_resource22(unsigned char* rccData, const char* resourceRoot);
void q_resource_delete(void* self);

/// https://doc.qt.io/qt-6/qresource.html#types

typedef enum {
    QRESOURCE_COMPRESSION_NOCOMPRESSION = 0,
    QRESOURCE_COMPRESSION_ZLIBCOMPRESSION = 1,
    QRESOURCE_COMPRESSION_ZSTDCOMPRESSION = 2
} QResource__Compression;

#endif
