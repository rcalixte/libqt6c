#pragma once
#ifndef SRCQT6C_LIBQPROPERTYPRIVATE_H
#define SRCQT6C_LIBQPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqproperty.h"

/// https://doc.qt.io/qt-6/quntypedpropertydata.html

/// q_untypedpropertydata_new constructs a new QUntypedPropertyData object.
///
/// ``` QUntypedPropertyData* other ```
QUntypedPropertyData* q_untypedpropertydata_new(void* other);

/// q_untypedpropertydata_new2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
///
/// ``` QUntypedPropertyData* other ```
QUntypedPropertyData* q_untypedpropertydata_new2(void* other);

/// q_untypedpropertydata_copy_assign shallow copies `other` into `self`.
///
/// ``` QUntypedPropertyData* self, QUntypedPropertyData* other ```
void q_untypedpropertydata_copy_assign(void* self, void* other);

/// q_untypedpropertydata_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QUntypedPropertyData* self, QUntypedPropertyData* other ```
void q_untypedpropertydata_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QUntypedPropertyData* self ```
void q_untypedpropertydata_delete(void* self);

#endif
