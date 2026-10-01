#pragma once
#ifndef LOCATION_LIBQPLACEUSER_H
#define LOCATION_LIBQPLACEUSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html)

/// q_placeuser_new constructs a new QPlaceUser object.
///
QPlaceUser* q_placeuser_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html)

/// q_placeuser_new2 constructs a new QPlaceUser object.
///
/// @param other QPlaceUser*
///
QPlaceUser* q_placeuser_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#operator-eq)
///
/// @param self QPlaceUser*
/// @param other QPlaceUser*
///
void q_placeuser_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#swap)
///
/// @param self QPlaceUser*
/// @param other QPlaceUser*
///
void q_placeuser_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#userId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceUser*
///
const char* q_placeuser_user_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setUserId)
///
/// @param self QPlaceUser*
/// @param identifier const char*
///
void q_placeuser_set_user_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceUser*
///
const char* q_placeuser_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#setName)
///
/// @param self QPlaceUser*
/// @param name const char*
///
void q_placeuser_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceuser.html#dtor.QPlaceUser)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceUser*
///
void q_placeuser_delete(void* self);

#endif
