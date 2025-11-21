#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINELOADINGINFO_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINELOADINGINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineloadinginfo.html

/// q_webengineloadinginfo_new constructs a new QWebEngineLoadingInfo object.
///
/// @param other QWebEngineLoadingInfo*
QWebEngineLoadingInfo* q_webengineloadinginfo_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#operator-eq)
///
/// @param self QWebEngineLoadingInfo*
/// @param other QWebEngineLoadingInfo*
void q_webengineloadinginfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#url)
///
/// @param self QWebEngineLoadingInfo*
QUrl* q_webengineloadinginfo_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#isErrorPage)
///
/// @param self QWebEngineLoadingInfo*
bool q_webengineloadinginfo_is_error_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#status)
///
/// @param self QWebEngineLoadingInfo*
///
/// @return enum QWebEngineLoadingInfo__LoadStatus
int32_t q_webengineloadinginfo_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineLoadingInfo*
const char* q_webengineloadinginfo_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorDomain)
///
/// @param self QWebEngineLoadingInfo*
///
/// @return enum QWebEngineLoadingInfo__ErrorDomain
int32_t q_webengineloadinginfo_error_domain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#errorCode)
///
/// @param self QWebEngineLoadingInfo*
int32_t q_webengineloadinginfo_error_code(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineloadinginfo.html#dtor.QWebEngineLoadingInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineLoadingInfo*
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
