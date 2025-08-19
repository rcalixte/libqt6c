#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPERMISSION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginepermission.html

/// q_webenginepermission_new constructs a new QWebEnginePermission object.
///
QWebEnginePermission* q_webenginepermission_new();

/// q_webenginepermission_new2 constructs a new QWebEnginePermission object.
///
/// @param other QWebEnginePermission*
QWebEnginePermission* q_webenginepermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#operator-eq)
///
/// @param self QWebEnginePermission*
/// @param other QWebEnginePermission*
void q_webenginepermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
///
/// @param self QWebEnginePermission*
/// @param other QWebEnginePermission*
void q_webenginepermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
///
/// @param self QWebEnginePermission*
QUrl* q_webenginepermission_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#permissionType)
///
/// @param self QWebEnginePermission*
///
/// @return enum QWebEnginePermission__PermissionType
uint8_t q_webenginepermission_permission_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#state)
///
/// @param self QWebEnginePermission*
///
/// @return enum QWebEnginePermission__State
uint8_t q_webenginepermission_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
///
/// @param self QWebEnginePermission*
bool q_webenginepermission_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
///
/// @param self QWebEnginePermission*
void q_webenginepermission_grant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
///
/// @param self QWebEnginePermission*
void q_webenginepermission_deny(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
///
/// @param self QWebEnginePermission*
void q_webenginepermission_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
///
/// @param permissionType enum QWebEnginePermission__PermissionType
bool q_webenginepermission_is_persistent(uint8_t permissionType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEnginePermission*
void q_webenginepermission_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginepermission.html#types

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

typedef enum {
    QWEBENGINEPERMISSION_STATE_INVALID = 0,
    QWEBENGINEPERMISSION_STATE_ASK = 1,
    QWEBENGINEPERMISSION_STATE_GRANTED = 2,
    QWEBENGINEPERMISSION_STATE_DENIED = 3
} QWebEnginePermission__State;

#endif
