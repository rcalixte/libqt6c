#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEURLREQUESTINFO_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEURLREQUESTINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#resourceType)
///
/// @param self QWebEngineUrlRequestInfo*
///
/// @return enum QWebEngineUrlRequestInfo__ResourceType
///
int32_t q_webengineurlrequestinfo_resource_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#navigationType)
///
/// @param self QWebEngineUrlRequestInfo*
///
/// @return enum QWebEngineUrlRequestInfo__NavigationType
///
int32_t q_webengineurlrequestinfo_navigation_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestUrl)
///
/// @param self QWebEngineUrlRequestInfo*
///
QUrl* q_webengineurlrequestinfo_request_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#firstPartyUrl)
///
/// @param self QWebEngineUrlRequestInfo*
///
QUrl* q_webengineurlrequestinfo_first_party_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#initiator)
///
/// @param self QWebEngineUrlRequestInfo*
///
QUrl* q_webengineurlrequestinfo_initiator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestMethod)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineUrlRequestInfo*
///
char* q_webengineurlrequestinfo_request_method(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#requestBody)
///
/// @param self QWebEngineUrlRequestInfo*
///
QIODevice* q_webengineurlrequestinfo_request_body(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#changed)
///
/// @param self QWebEngineUrlRequestInfo*
///
bool q_webengineurlrequestinfo_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#block)
///
/// @param self QWebEngineUrlRequestInfo*
/// @param shouldBlock bool
///
void q_webengineurlrequestinfo_block(void* self, bool shouldBlock);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#redirect)
///
/// @param self QWebEngineUrlRequestInfo*
/// @param url QUrl*
///
void q_webengineurlrequestinfo_redirect(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#setHttpHeader)
///
/// @param self QWebEngineUrlRequestInfo*
/// @param name const char*
/// @param value const char*
///
void q_webengineurlrequestinfo_set_http_header(void* self, const char* name, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#public-types)

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
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEJSON = 21,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPELAST = 21,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEWEBSOCKET = 254,
    QWEBENGINEURLREQUESTINFO_RESOURCETYPE_RESOURCETYPEUNKNOWN = 255
} QWebEngineUrlRequestInfo__ResourceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebengineurlrequestinfo.html#public-types)

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
