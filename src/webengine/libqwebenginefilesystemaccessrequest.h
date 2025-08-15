#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html

/// q_webenginefilesystemaccessrequest_new constructs a new QWebEngineFileSystemAccessRequest object.
///
/// @param other QWebEngineFileSystemAccessRequest*
QWebEngineFileSystemAccessRequest* q_webenginefilesystemaccessrequest_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#operator-eq)
///
/// @param self QWebEngineFileSystemAccessRequest*
/// @param other QWebEngineFileSystemAccessRequest*
void q_webenginefilesystemaccessrequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#swap)
///
/// @param self QWebEngineFileSystemAccessRequest*
/// @param other QWebEngineFileSystemAccessRequest*
void q_webenginefilesystemaccessrequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accept)
///
/// @param self QWebEngineFileSystemAccessRequest*
void q_webenginefilesystemaccessrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#reject)
///
/// @param self QWebEngineFileSystemAccessRequest*
void q_webenginefilesystemaccessrequest_reject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#origin)
///
/// @param self QWebEngineFileSystemAccessRequest*
QUrl* q_webenginefilesystemaccessrequest_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#filePath)
///
/// @param self QWebEngineFileSystemAccessRequest*
QUrl* q_webenginefilesystemaccessrequest_file_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#handleType)
///
/// @param self QWebEngineFileSystemAccessRequest*
///
/// @return enum QWebEngineFileSystemAccessRequest__HandleType
int64_t q_webenginefilesystemaccessrequest_handle_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#accessFlags)
///
/// @param self QWebEngineFileSystemAccessRequest*
///
/// @return flag of enum QWebEngineFileSystemAccessRequest__AccessFlag
int64_t q_webenginefilesystemaccessrequest_access_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#dtor.QWebEngineFileSystemAccessRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFileSystemAccessRequest*
void q_webenginefilesystemaccessrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginefilesystemaccessrequest.html#types

typedef enum {
    QWEBENGINEFILESYSTEMACCESSREQUEST_HANDLETYPE_FILE = 0,
    QWEBENGINEFILESYSTEMACCESSREQUEST_HANDLETYPE_DIRECTORY = 1
} QWebEngineFileSystemAccessRequest__HandleType;

typedef enum {
    QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_READ = 1,
    QWEBENGINEFILESYSTEMACCESSREQUEST_ACCESSFLAG_WRITE = 2
} QWebEngineFileSystemAccessRequest__AccessFlag;

#endif
