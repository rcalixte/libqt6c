#pragma once
#ifndef SRC_QT6C_LIBQPROPERTYPRIVATE_H
#define SRC_QT6C_LIBQPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/quntypedpropertydata.html

/// q_untypedpropertydata_new constructs a new QUntypedPropertyData object.
///
/// @param other QUntypedPropertyData*
QUntypedPropertyData* q_untypedpropertydata_new(void* other);

/// q_untypedpropertydata_new2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
///
/// @param other QUntypedPropertyData*
QUntypedPropertyData* q_untypedpropertydata_new2(void* other);

/// q_untypedpropertydata_copy_assign shallow copies `other` into `self`.
///
/// @param self QUntypedPropertyData*
/// @param other QUntypedPropertyData*
void q_untypedpropertydata_copy_assign(void* self, void* other);

/// q_untypedpropertydata_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QUntypedPropertyData*
/// @param other QUntypedPropertyData*
void q_untypedpropertydata_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/quntypedpropertydata.html#dtor.QUntypedPropertyData)
///
/// Delete this object from C++ memory.
///
/// @param self QUntypedPropertyData*
void q_untypedpropertydata_delete(void* self);

/// https://doc.qt.io/qt-6/qpropertyproxybindingdata.html

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#d_ptr-var)
///
/// @param self QPropertyProxyBindingData*
uintptr_t q_propertyproxybindingdata_d_ptr(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#d_ptr-var)
///
/// @param self QPropertyProxyBindingData*
/// @param d_ptr uintptr_t
void q_propertyproxybindingdata_set_d_ptr(void* self, uintptr_t d_ptr);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#propertyData-var)
///
/// @param self QPropertyProxyBindingData*
QUntypedPropertyData* q_propertyproxybindingdata_property_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#propertyData-var)
///
/// @param self QPropertyProxyBindingData*
/// @param propertyData QUntypedPropertyData*
void q_propertyproxybindingdata_set_property_data(void* self, void* propertyData);

/// [Upstream resources](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#dtor.QPropertyProxyBindingData)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyProxyBindingData*
void q_propertyproxybindingdata_delete(void* self);

#endif
