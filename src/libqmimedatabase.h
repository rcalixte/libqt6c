#pragma once
#ifndef SRC_QT6C_LIBQMIMEDATABASE_H
#define SRC_QT6C_LIBQMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html)

/// q_mimedatabase_new constructs a new QMimeDatabase object.
///
QMimeDatabase* q_mimedatabase_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForName)
///
/// @param self QMimeDatabase*
/// @param nameOrAlias const char*
///
QMimeType* q_mimedatabase_mime_type_for_name(void* self, const char* nameOrAlias);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// @param self QMimeDatabase*
/// @param fileName const char*
///
QMimeType* q_mimedatabase_mime_type_for_file(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// @param self QMimeDatabase*
/// @param fileInfo QFileInfo*
///
QMimeType* q_mimedatabase_mime_type_for_file2(void* self, void* fileInfo);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypesForFileName)
///
/// @param self QMimeDatabase*
/// @param fileName const char*
///
libqt_list /* of QMimeType* */ q_mimedatabase_mime_types_for_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
///
/// @param self QMimeDatabase*
/// @param data const char*
///
QMimeType* q_mimedatabase_mime_type_for_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
///
/// @param self QMimeDatabase*
/// @param device QIODevice*
///
QMimeType* q_mimedatabase_mime_type_for_data2(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForUrl)
///
/// @param self QMimeDatabase*
/// @param url QUrl*
///
QMimeType* q_mimedatabase_mime_type_for_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
///
/// @param self QMimeDatabase*
/// @param fileName const char*
/// @param device QIODevice*
///
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data(void* self, const char* fileName, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
///
/// @param self QMimeDatabase*
/// @param fileName const char*
/// @param data const char*
///
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data2(void* self, const char* fileName, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#suffixForFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QMimeDatabase*
/// @param fileName const char*
///
const char* q_mimedatabase_suffix_for_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#allMimeTypes)
///
/// @param self QMimeDatabase*
///
libqt_list /* of QMimeType* */ q_mimedatabase_all_mime_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// @param self QMimeDatabase*
/// @param fileName const char*
/// @param mode enum QMimeDatabase__MatchMode
///
QMimeType* q_mimedatabase_mime_type_for_file22(void* self, const char* fileName, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// @param self QMimeDatabase*
/// @param fileInfo QFileInfo*
/// @param mode enum QMimeDatabase__MatchMode
///
QMimeType* q_mimedatabase_mime_type_for_file23(void* self, void* fileInfo, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#dtor.QMimeDatabase)
///
/// Delete this object from C++ memory.
///
/// @param self QMimeDatabase*
///
void q_mimedatabase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#public-types)

typedef enum {
    QMIMEDATABASE_MATCHMODE_MATCHDEFAULT = 0,
    QMIMEDATABASE_MATCHMODE_MATCHEXTENSION = 1,
    QMIMEDATABASE_MATCHMODE_MATCHCONTENT = 2
} QMimeDatabase__MatchMode;

#endif
