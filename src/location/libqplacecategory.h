#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACECATEGORY_H
#define SRC_LOCATION_QT6C_LIBQPLACECATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html)

/// q_placecategory_new constructs a new QPlaceCategory object.
///
QPlaceCategory* q_placecategory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html)

/// q_placecategory_new2 constructs a new QPlaceCategory object.
///
/// @param other QPlaceCategory*
///
QPlaceCategory* q_placecategory_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#operator-eq)
///
/// @param self QPlaceCategory*
/// @param other QPlaceCategory*
///
void q_placecategory_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#swap)
///
/// @param self QPlaceCategory*
/// @param other QPlaceCategory*
///
void q_placecategory_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#categoryId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceCategory*
///
const char* q_placecategory_category_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setCategoryId)
///
/// @param self QPlaceCategory*
/// @param identifier const char*
///
void q_placecategory_set_category_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceCategory*
///
const char* q_placecategory_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setName)
///
/// @param self QPlaceCategory*
/// @param name const char*
///
void q_placecategory_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#visibility)
///
/// @param self QPlaceCategory*
///
/// @return enum QLocation__Visibility
///
int32_t q_placecategory_visibility(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setVisibility)
///
/// @param self QPlaceCategory*
/// @param visibility enum QLocation__Visibility
///
void q_placecategory_set_visibility(void* self, int32_t visibility);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#icon)
///
/// @param self QPlaceCategory*
///
QPlaceIcon* q_placecategory_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#setIcon)
///
/// @param self QPlaceCategory*
/// @param icon QPlaceIcon*
///
void q_placecategory_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#isEmpty)
///
/// @param self QPlaceCategory*
///
bool q_placecategory_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecategory.html#dtor.QPlaceCategory)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceCategory*
///
void q_placecategory_delete(void* self);

#endif
