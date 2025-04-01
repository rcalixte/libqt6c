#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTINFO_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEURLREQUESTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqurl.h"

/// https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#resourceType)
///
/// ``` QWebEngineUrlRequestInfo* self ```
int64_t q_webengineurlrequestinfo_resource_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#navigationType)
///
/// ``` QWebEngineUrlRequestInfo* self ```
int64_t q_webengineurlrequestinfo_navigation_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestUrl)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_request_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#firstPartyUrl)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_first_party_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#initiator)
///
/// ``` QWebEngineUrlRequestInfo* self ```
QUrl* q_webengineurlrequestinfo_initiator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestMethod)
///
/// ``` QWebEngineUrlRequestInfo* self ```
char* q_webengineurlrequestinfo_request_method(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#changed)
///
/// ``` QWebEngineUrlRequestInfo* self ```
bool q_webengineurlrequestinfo_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#block)
///
/// ``` QWebEngineUrlRequestInfo* self, bool shouldBlock ```
void q_webengineurlrequestinfo_block(void* self, bool shouldBlock);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#redirect)
///
/// ``` QWebEngineUrlRequestInfo* self, QUrl* url ```
void q_webengineurlrequestinfo_redirect(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#setHttpHeader)
///
/// ``` QWebEngineUrlRequestInfo* self, const char* name, const char* value ```
void q_webengineurlrequestinfo_set_http_header(void* self, const char* name, const char* value);

/// https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#types

typedef enum {
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEMAINFRAME = 0,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESUBFRAME = 1,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESTYLESHEET = 2,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESCRIPT = 3,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEIMAGE = 4,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEFONTRESOURCE = 5,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESUBRESOURCE = 6,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEOBJECT = 7,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEMEDIA = 8,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEWORKER = 9,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESHAREDWORKER = 10,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEPREFETCH = 11,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEFAVICON = 12,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEXHR = 13,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEPING = 14,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPESERVICEWORKER = 15,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPECSPREPORT = 16,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEPLUGINRESOURCE = 17,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPENAVIGATIONPRELOADMAINFRAME = 19,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPENAVIGATIONPRELOADSUBFRAME = 20,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPELAST = 20,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEWEBSOCKET = 254,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEUNKNOWN = 255
} QWebEngineUrlRequestInfo__ResourceType;

typedef enum {
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPELINK = 0,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPETYPED = 1,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPEFORMSUBMITTED = 2,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPEBACKFORWARD = 3,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPERELOAD = 4,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPEOTHER = 5,
    QWEBENGINEURLREQUESTINFO_NAVIGATIONTYPE_NAVIGATIONTYPEREDIRECT = 6
} QWebEngineUrlRequestInfo__NavigationType;

#endif
