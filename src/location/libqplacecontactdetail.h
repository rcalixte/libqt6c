#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACECONTACTDETAIL_H
#define SRC_LOCATION_QT6C_LIBQPLACECONTACTDETAIL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html)

/// q_placecontactdetail_new constructs a new QPlaceContactDetail object.
///
QPlaceContactDetail* q_placecontactdetail_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html)

/// q_placecontactdetail_new2 constructs a new QPlaceContactDetail object.
///
/// @param other QPlaceContactDetail*
///
QPlaceContactDetail* q_placecontactdetail_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#operator-eq)
///
/// @param self QPlaceContactDetail*
/// @param other QPlaceContactDetail*
///
void q_placecontactdetail_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#swap)
///
/// @param self QPlaceContactDetail*
/// @param other QPlaceContactDetail*
///
void q_placecontactdetail_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceContactDetail*
///
const char* q_placecontactdetail_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setLabel)
///
/// @param self QPlaceContactDetail*
/// @param label const char*
///
void q_placecontactdetail_set_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceContactDetail*
///
const char* q_placecontactdetail_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#setValue)
///
/// @param self QPlaceContactDetail*
/// @param value const char*
///
void q_placecontactdetail_set_value(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#clear)
///
/// @param self QPlaceContactDetail*
///
void q_placecontactdetail_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontactdetail.html#dtor.QPlaceContactDetail)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceContactDetail*
///
void q_placecontactdetail_delete(void* self);

#endif
