#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTH_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTH_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumMetaObject)
///
/// @param param1 enum QBluetooth__Security
///
const QMetaObject* q_bluetooth_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum QBluetooth__Security
///
const char* q_bluetooth_get_enum_name(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumMetaObject)
///
/// @param param1 enum QBluetooth__AttAccessConstraint
///
const QMetaObject* q_bluetooth_get_enum_meta_object2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#qt_getEnumName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 enum QBluetooth__AttAccessConstraint
///
const char* q_bluetooth_get_enum_name2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#public-types)

typedef enum {
    QBLUETOOTH_SECURITY_NOSECURITY = 0,
    QBLUETOOTH_SECURITY_AUTHORIZATION = 1,
    QBLUETOOTH_SECURITY_AUTHENTICATION = 2,
    QBLUETOOTH_SECURITY_ENCRYPTION = 4,
    QBLUETOOTH_SECURITY_SECURE = 8
} QBluetooth__Security;

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetooth.html#public-types)

typedef enum {
    QBLUETOOTH_ATTACCESSCONSTRAINT_ATTAUTHORIZATIONREQUIRED = 1,
    QBLUETOOTH_ATTACCESSCONSTRAINT_ATTAUTHENTICATIONREQUIRED = 2,
    QBLUETOOTH_ATTACCESSCONSTRAINT_ATTENCRYPTIONREQUIRED = 4
} QBluetooth__AttAccessConstraint;

#endif
