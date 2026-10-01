#pragma once
#ifndef WEBENGINE_LIBQWEBENGINEPERMISSION_H
#define WEBENGINE_LIBQWEBENGINEPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html)

/// q_webenginepermission_new constructs a new QWebEnginePermission object.
///
QWebEnginePermission* q_webenginepermission_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html)

/// q_webenginepermission_new2 constructs a new QWebEnginePermission object.
///
/// @param other QWebEnginePermission*
///
QWebEnginePermission* q_webenginepermission_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#operator-eq)
///
/// @param self QWebEnginePermission*
/// @param other QWebEnginePermission*
///
void q_webenginepermission_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
///
/// @param self QWebEnginePermission*
/// @param other QWebEnginePermission*
///
void q_webenginepermission_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
///
/// @param self const QWebEnginePermission*
///
QUrl* q_webenginepermission_origin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#permissionType)
///
/// @param self const QWebEnginePermission*
///
/// @return enum QWebEnginePermission__PermissionType
///
uint8_t q_webenginepermission_permission_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#state)
///
/// @param self const QWebEnginePermission*
///
/// @return enum QWebEnginePermission__State
///
uint8_t q_webenginepermission_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
///
/// @param self const QWebEnginePermission*
///
bool q_webenginepermission_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
///
/// @param self const QWebEnginePermission*
///
void q_webenginepermission_grant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
///
/// @param self const QWebEnginePermission*
///
void q_webenginepermission_deny(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
///
/// @param self const QWebEnginePermission*
///
void q_webenginepermission_reset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
///
/// @param permissionType enum QWebEnginePermission__PermissionType
///
bool q_webenginepermission_is_persistent(uint8_t permissionType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEnginePermission*
///
void q_webenginepermission_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#public-types)

typedef enum {
    QWEBENGINEPERMISSION_PERMISSIONTYPE_UNSUPPORTED = 0,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_MEDIAAUDIOCAPTURE = 1,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_MEDIAVIDEOCAPTURE = 2,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_MEDIAAUDIOVIDEOCAPTURE = 3,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_DESKTOPVIDEOCAPTURE = 4,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_DESKTOPAUDIOVIDEOCAPTURE = 5,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_MOUSELOCK = 6,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_NOTIFICATIONS = 7,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_GEOLOCATION = 8,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_CLIPBOARDREADWRITE = 9,
    QWEBENGINEPERMISSION_PERMISSIONTYPE_LOCALFONTSACCESS = 10
} QWebEnginePermission__PermissionType;

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginepermission.html#public-types)

typedef enum {
    QWEBENGINEPERMISSION_STATE_INVALID = 0,
    QWEBENGINEPERMISSION_STATE_ASK = 1,
    QWEBENGINEPERMISSION_STATE_GRANTED = 2,
    QWEBENGINEPERMISSION_STATE_DENIED = 3
} QWebEnginePermission__State;

#endif
