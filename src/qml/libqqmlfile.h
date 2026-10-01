#pragma once
#ifndef QML_LIBQQMLFILE_H
#define QML_LIBQQMLFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html)

/// q_qmlfile_new constructs a new QQmlFile object.
///
QQmlFile* q_qmlfile_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html)

/// q_qmlfile_new2 constructs a new QQmlFile object.
///
/// @param engine QQmlEngine*
/// @param url QUrl*
///
QQmlFile* q_qmlfile_new2(void* engine, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html)

/// q_qmlfile_new3 constructs a new QQmlFile object.
///
/// @param engine QQmlEngine*
/// @param url const char*
///
QQmlFile* q_qmlfile_new3(void* engine, const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isNull)
///
/// @param self const QQmlFile*
///
bool q_qmlfile_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isReady)
///
/// @param self const QQmlFile*
///
bool q_qmlfile_is_ready(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isError)
///
/// @param self const QQmlFile*
///
bool q_qmlfile_is_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLoading)
///
/// @param self const QQmlFile*
///
bool q_qmlfile_is_loading(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#url)
///
/// @param self const QQmlFile*
///
QUrl* q_qmlfile_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#status)
///
/// @param self const QQmlFile*
///
/// @return enum QQmlFile__Status
///
int32_t q_qmlfile_status(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#error)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlFile*
///
const char* q_qmlfile_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#size)
///
/// @param self const QQmlFile*
///
int64_t q_qmlfile_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQmlFile*
///
const char* q_qmlfile_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#dataByteArray)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQmlFile*
///
char* q_qmlfile_data_byte_array(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#load)
///
/// @param self QQmlFile*
/// @param param1 QQmlEngine*
/// @param param2 QUrl*
///
void q_qmlfile_load(void* self, void* param1, const void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#load)
///
/// @param self QQmlFile*
/// @param param1 QQmlEngine*
/// @param param2 const char*
///
void q_qmlfile_load2(void* self, void* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#clear)
///
/// @param self QQmlFile*
///
void q_qmlfile_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#clear)
///
/// @param self QQmlFile*
/// @param object QObject*
///
void q_qmlfile_clear2(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectFinished)
///
/// @param self QQmlFile*
/// @param param1 QObject*
/// @param param2 const char*
///
bool q_qmlfile_connect_finished(void* self, void* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectFinished)
///
/// @param self QQmlFile*
/// @param param1 QObject*
/// @param param2 int
///
bool q_qmlfile_connect_finished2(void* self, void* param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectDownloadProgress)
///
/// @param self QQmlFile*
/// @param param1 QObject*
/// @param param2 const char*
///
bool q_qmlfile_connect_download_progress(void* self, void* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectDownloadProgress)
///
/// @param self QQmlFile*
/// @param param1 QObject*
/// @param param2 int
///
bool q_qmlfile_connect_download_progress2(void* self, void* param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isSynchronous)
///
/// @param url const char*
///
bool q_qmlfile_is_synchronous(const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isSynchronous)
///
/// @param url QUrl*
///
bool q_qmlfile_is_synchronous2(const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLocalFile)
///
/// @param url const char*
///
bool q_qmlfile_is_local_file(const char* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLocalFile)
///
/// @param url QUrl*
///
bool q_qmlfile_is_local_file2(const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#urlToLocalFileOrQrc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* q_qmlfile_url_to_local_file_or_qrc(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#urlToLocalFileOrQrc)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 QUrl*
///
const char* q_qmlfile_url_to_local_file_or_qrc2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#dtor.QQmlFile)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlFile*
///
void q_qmlfile_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#public-types)

typedef enum {
    QQMLFILE_STATUS_NULL = 0,
    QQMLFILE_STATUS_READY = 1,
    QQMLFILE_STATUS_ERROR = 2,
    QQMLFILE_STATUS_LOADING = 3
} QQmlFile__Status;

#endif
