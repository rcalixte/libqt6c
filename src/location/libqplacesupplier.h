#pragma once
#ifndef LOCATION_LIBQPLACESUPPLIER_H
#define LOCATION_LIBQPLACESUPPLIER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QPlaceSupplier* q_placesupplier_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#operator-eq)
///
/// @param self QPlaceSupplier*
/// @param other QPlaceSupplier*
///
void q_placesupplier_operator_assign(void* self, const void* other);

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
/// @param self const QPlaceSupplier*
///
const char* q_placesupplier_name(const void* self);

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
/// @param self const QPlaceSupplier*
///
const char* q_placesupplier_supplier_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setSupplierId)
///
/// @param self QPlaceSupplier*
/// @param identifier const char*
///
void q_placesupplier_set_supplier_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#url)
///
/// @param self const QPlaceSupplier*
///
QUrl* q_placesupplier_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setUrl)
///
/// @param self QPlaceSupplier*
/// @param data QUrl*
///
void q_placesupplier_set_url(void* self, const void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#icon)
///
/// @param self const QPlaceSupplier*
///
QPlaceIcon* q_placesupplier_icon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#setIcon)
///
/// @param self QPlaceSupplier*
/// @param icon QPlaceIcon*
///
void q_placesupplier_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#isEmpty)
///
/// @param self const QPlaceSupplier*
///
bool q_placesupplier_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacesupplier.html#dtor.QPlaceSupplier)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceSupplier*
///
void q_placesupplier_delete(void* self);

#endif
