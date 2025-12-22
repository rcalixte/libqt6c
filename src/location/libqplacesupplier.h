#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACESUPPLIER_H
#define SRC_LOCATION_QT6C_LIBQPLACESUPPLIER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html)

/// q_placesupplier_new constructs a new QPlaceSupplier object.
///
QPlaceSupplier* q_placesupplier_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html)

/// q_placesupplier_new2 constructs a new QPlaceSupplier object.
///
/// @param other QPlaceSupplier*
///
QPlaceSupplier* q_placesupplier_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#operator-eq)
///
/// @param self QPlaceSupplier*
/// @param other QPlaceSupplier*
///
void q_placesupplier_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#swap)
///
/// @param self QPlaceSupplier*
/// @param other QPlaceSupplier*
///
void q_placesupplier_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSupplier*
///
const char* q_placesupplier_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setName)
///
/// @param self QPlaceSupplier*
/// @param data const char*
///
void q_placesupplier_set_name(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#supplierId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceSupplier*
///
const char* q_placesupplier_supplier_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setSupplierId)
///
/// @param self QPlaceSupplier*
/// @param identifier const char*
///
void q_placesupplier_set_supplier_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#url)
///
/// @param self QPlaceSupplier*
///
QUrl* q_placesupplier_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setUrl)
///
/// @param self QPlaceSupplier*
/// @param data QUrl*
///
void q_placesupplier_set_url(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#icon)
///
/// @param self QPlaceSupplier*
///
QPlaceIcon* q_placesupplier_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setIcon)
///
/// @param self QPlaceSupplier*
/// @param icon QPlaceIcon*
///
void q_placesupplier_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#isEmpty)
///
/// @param self QPlaceSupplier*
///
bool q_placesupplier_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#dtor.QPlaceSupplier)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSupplier*
///
void q_placesupplier_delete(void* self);

#endif
