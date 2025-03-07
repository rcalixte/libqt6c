#pragma once
#ifndef SRCQT6C_LIBQMIMEDATABASE_H
#define SRCQT6C_LIBQMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqfileinfo.h"
#include "libqiodevice.h"
#include "libqmimetype.h"
#include <string.h>
#include "libqurl.h"

QMimeDatabase* q_mimedatabase_new();
QMimeType* q_mimedatabase_mime_type_for_name(void* self, const char* nameOrAlias);
QMimeType* q_mimedatabase_mime_type_for_file(void* self, const char* fileName);
QMimeType* q_mimedatabase_mime_type_for_file_with_file_info(void* self, void* fileInfo);
libqt_list /* of QMimeType* */ q_mimedatabase_mime_types_for_file_name(void* self, const char* fileName);
QMimeType* q_mimedatabase_mime_type_for_data(void* self, const char* data);
QMimeType* q_mimedatabase_mime_type_for_data_with_device(void* self, void* device);
QMimeType* q_mimedatabase_mime_type_for_url(void* self, void* url);
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data(void* self, const char* fileName, void* device);
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data2(void* self, const char* fileName, const char* data);
const char* q_mimedatabase_suffix_for_file_name(void* self, const char* fileName);
libqt_list /* of QMimeType* */ q_mimedatabase_all_mime_types(void* self);
QMimeType* q_mimedatabase_mime_type_for_file2(void* self, const char* fileName, int64_t mode);
QMimeType* q_mimedatabase_mime_type_for_file22(void* self, void* fileInfo, int64_t mode);
void q_mimedatabase_delete(void* self);

/// https://doc.qt.io/qt-6/qmimedatabase.html#types

typedef enum {
    QMIMEDATABASE_MATCHMODE_MATCHDEFAULT = 0,
    QMIMEDATABASE_MATCHMODE_MATCHEXTENSION = 1,
    QMIMEDATABASE_MATCHMODE_MATCHCONTENT = 2
} QMimeDatabase__MatchMode;

#endif
