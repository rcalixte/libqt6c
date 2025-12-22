#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEATTRIBUTE_H
#define SRC_LOCATION_QT6C_LIBQPLACEATTRIBUTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html)

/// q_placeattribute_new constructs a new QPlaceAttribute object.
///
QPlaceAttribute* q_placeattribute_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html)

/// q_placeattribute_new2 constructs a new QPlaceAttribute object.
///
/// @param other QPlaceAttribute*
///
QPlaceAttribute* q_placeattribute_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#operator-eq)
///
/// @param self QPlaceAttribute*
/// @param other QPlaceAttribute*
///
void q_placeattribute_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#swap)
///
/// @param self QPlaceAttribute*
/// @param other QPlaceAttribute*
///
void q_placeattribute_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceAttribute*
///
const char* q_placeattribute_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setLabel)
///
/// @param self QPlaceAttribute*
/// @param label const char*
///
void q_placeattribute_set_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceAttribute*
///
const char* q_placeattribute_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#setText)
///
/// @param self QPlaceAttribute*
/// @param text const char*
///
void q_placeattribute_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#isEmpty)
///
/// @param self QPlaceAttribute*
///
bool q_placeattribute_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceattribute.html#dtor.QPlaceAttribute)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceAttribute*
///
void q_placeattribute_delete(void* self);

#endif
