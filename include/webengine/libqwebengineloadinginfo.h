#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINELOADINGINFO_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINELOADINGINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html

/// q_webengineloadinginfo_new constructs a new QWebEngineLoadingInfo object.
///
/// ``` QWebEngineLoadingInfo* other ```
QWebEngineLoadingInfo* q_webengineloadinginfo_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator=)
///
/// ``` QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other ```
void q_webengineloadinginfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
///
/// ``` QWebEngineLoadingInfo* self ```
QUrl* q_webengineloadinginfo_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
///
/// ``` QWebEngineLoadingInfo* self ```
bool q_webengineloadinginfo_is_error_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
///
/// ``` QWebEngineLoadingInfo* self ```
int64_t q_webengineloadinginfo_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
///
/// ``` QWebEngineLoadingInfo* self ```
const char* q_webengineloadinginfo_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
///
/// ``` QWebEngineLoadingInfo* self ```
int64_t q_webengineloadinginfo_error_domain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
///
/// ``` QWebEngineLoadingInfo* self ```
int32_t q_webengineloadinginfo_error_code(void* self);

/// Delete this object from C++ memory.
///
/// ``` QWebEngineLoadingInfo* self ```
void q_webengineloadinginfo_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html#types

typedef enum {
    QWEBENGINELOADINGINFO_LOADSTATUS_LOADSTARTEDSTATUS = 0,
    QWEBENGINELOADINGINFO_LOADSTATUS_LOADSTOPPEDSTATUS = 1,
    QWEBENGINELOADINGINFO_LOADSTATUS_LOADSUCCEEDEDSTATUS = 2,
    QWEBENGINELOADINGINFO_LOADSTATUS_LOADFAILEDSTATUS = 3
} QWebEngineLoadingInfo__LoadStatus;

typedef enum {
    QWEBENGINELOADINGINFO_ERRORDOMAIN_NOERRORDOMAIN = 0,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_INTERNALERRORDOMAIN = 1,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_CONNECTIONERRORDOMAIN = 2,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_CERTIFICATEERRORDOMAIN = 3,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_HTTPERRORDOMAIN = 4,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_FTPERRORDOMAIN = 5,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_DNSERRORDOMAIN = 6,
    QWEBENGINELOADINGINFO_ERRORDOMAIN_HTTPSTATUSCODEDOMAIN = 7
} QWebEngineLoadingInfo__ErrorDomain;

#endif
