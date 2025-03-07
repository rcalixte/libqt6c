#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEFILESYSTEMACCESSREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqurl.h"

QWebEngineFileSystemAccessRequest* q_webenginefilesystemaccessrequest_new(void* other);
void q_webenginefilesystemaccessrequest_operator_assign(void* self, void* other);
void q_webenginefilesystemaccessrequest_swap(void* self, void* other);
void q_webenginefilesystemaccessrequest_accept(void* self);
void q_webenginefilesystemaccessrequest_reject(void* self);
QUrl* q_webenginefilesystemaccessrequest_origin(void* self);
QUrl* q_webenginefilesystemaccessrequest_file_path(void* self);
int64_t q_webenginefilesystemaccessrequest_handle_type(void* self);
int64_t q_webenginefilesystemaccessrequest_access_flags(void* self);
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
