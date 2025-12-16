#pragma once
#ifndef SRC_POSITIONING_QT6C_LIBQGEOAREAMONITORINFO_H
#define SRC_POSITIONING_QT6C_LIBQGEOAREAMONITORINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)

/// q_geoareamonitorinfo_new constructs a new QGeoAreaMonitorInfo object.
///
QGeoAreaMonitorInfo* q_geoareamonitorinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)

/// q_geoareamonitorinfo_new2 constructs a new QGeoAreaMonitorInfo object.
///
/// @param other QGeoAreaMonitorInfo*
///
QGeoAreaMonitorInfo* q_geoareamonitorinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html)

/// q_geoareamonitorinfo_new3 constructs a new QGeoAreaMonitorInfo object.
///
/// @param name const char*
///
QGeoAreaMonitorInfo* q_geoareamonitorinfo_new3(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#operator-eq)
///
/// @param self QGeoAreaMonitorInfo*
/// @param other QGeoAreaMonitorInfo*
///
void q_geoareamonitorinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#swap)
///
/// @param self QGeoAreaMonitorInfo*
/// @param other QGeoAreaMonitorInfo*
///
void q_geoareamonitorinfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGeoAreaMonitorInfo*
///
const char* q_geoareamonitorinfo_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setName)
///
/// @param self QGeoAreaMonitorInfo*
/// @param name const char*
///
void q_geoareamonitorinfo_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#identifier)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGeoAreaMonitorInfo*
///
const char* q_geoareamonitorinfo_identifier(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isValid)
///
/// @param self QGeoAreaMonitorInfo*
///
bool q_geoareamonitorinfo_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#area)
///
/// @param self QGeoAreaMonitorInfo*
///
QGeoShape* q_geoareamonitorinfo_area(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setArea)
///
/// @param self QGeoAreaMonitorInfo*
/// @param newShape QGeoShape*
///
void q_geoareamonitorinfo_set_area(void* self, void* newShape);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#expiration)
///
/// @param self QGeoAreaMonitorInfo*
///
QDateTime* q_geoareamonitorinfo_expiration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setExpiration)
///
/// @param self QGeoAreaMonitorInfo*
/// @param expiry QDateTime*
///
void q_geoareamonitorinfo_set_expiration(void* self, void* expiry);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#isPersistent)
///
/// @param self QGeoAreaMonitorInfo*
///
bool q_geoareamonitorinfo_is_persistent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setPersistent)
///
/// @param self QGeoAreaMonitorInfo*
/// @param isPersistent bool
///
void q_geoareamonitorinfo_set_persistent(void* self, bool isPersistent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#notificationParameters)
///
/// @param self QGeoAreaMonitorInfo*
///
libqt_map /* of const char* to QVariant* */ q_geoareamonitorinfo_notification_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#setNotificationParameters)
///
/// @param self QGeoAreaMonitorInfo*
/// @param parameters libqt_map /* of const char* to QVariant* */
///
void q_geoareamonitorinfo_set_notification_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#detach)
///
/// @param self QGeoAreaMonitorInfo*
///
void q_geoareamonitorinfo_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeoareamonitorinfo.html#dtor.QGeoAreaMonitorInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoAreaMonitorInfo*
///
void q_geoareamonitorinfo_delete(void* self);

#endif
