#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINEPERMISSION_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINEPERMISSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginepermission.html

/// q_webenginepermission_new constructs a new QWebEnginePermission object.
///
///
QWebEnginePermission* q_webenginepermission_new();

/// q_webenginepermission_new2 constructs a new QWebEnginePermission object.
///
/// ``` QWebEnginePermission* other ```
QWebEnginePermission* q_webenginepermission_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#operator=)
///
/// ``` QWebEnginePermission* self, QWebEnginePermission* other ```
void q_webenginepermission_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#swap)
///
/// ``` QWebEnginePermission* self, QWebEnginePermission* other ```
void q_webenginepermission_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#origin)
///
/// ``` QWebEnginePermission* self ```
QUrl* q_webenginepermission_origin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#permissionType)
///
/// ``` QWebEnginePermission* self ```
int64_t q_webenginepermission_permission_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#state)
///
/// ``` QWebEnginePermission* self ```
int64_t q_webenginepermission_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isValid)
///
/// ``` QWebEnginePermission* self ```
bool q_webenginepermission_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#grant)
///
/// ``` QWebEnginePermission* self ```
void q_webenginepermission_grant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#deny)
///
/// ``` QWebEnginePermission* self ```
void q_webenginepermission_deny(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#reset)
///
/// ``` QWebEnginePermission* self ```
void q_webenginepermission_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#isPersistent)
///
/// ``` enum QWebEnginePermission__PermissionType permissionType ```
bool q_webenginepermission_is_persistent(int64_t permissionType);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginepermission.html#dtor.QWebEnginePermission)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEnginePermission* self ```
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
