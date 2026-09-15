#pragma once
#ifndef QML_LIBQJSNUMBERCOERCION_H
#define QML_LIBQJSNUMBERCOERCION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html)

/// q_jsnumbercoercion_new constructs a new QJSNumberCoercion object.
///
/// @param other QJSNumberCoercion*
///
QJSNumberCoercion* q_jsnumbercoercion_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html)

/// q_jsnumbercoercion_new2 constructs a new QJSNumberCoercion object and invalidates the source QJSNumberCoercion object.
///
/// @param other QJSNumberCoercion*
///
QJSNumberCoercion* q_jsnumbercoercion_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html)

/// q_jsnumbercoercion_new3 constructs a new QJSNumberCoercion object.
///
/// @param param1 QJSNumberCoercion*
///
QJSNumberCoercion* q_jsnumbercoercion_new3(void* param1);

/// q_jsnumbercoercion_copy_assign shallow copies `other` into `self`.
///
/// @param self QJSNumberCoercion*
/// @param other QJSNumberCoercion*
///
void q_jsnumbercoercion_copy_assign(void* self, void* other);

/// q_jsnumbercoercion_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QJSNumberCoercion*
/// @param other QJSNumberCoercion*
///
void q_jsnumbercoercion_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isInteger)
///
/// @param d double
///
bool q_jsnumbercoercion_is_integer(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
///
/// @param d double
///
bool q_jsnumbercoercion_is_array_index(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
///
/// @param i int64_t
///
bool q_jsnumbercoercion_is_array_index2(int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#isArrayIndex)
///
/// @param i uint64_t
///
bool q_jsnumbercoercion_is_array_index3(uint64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#toInteger)
///
/// @param d double
///
int32_t q_jsnumbercoercion_to_integer(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#equals)
///
/// @param lhs double
/// @param rhs double
///
bool q_jsnumbercoercion_equals(double lhs, double rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#roundTowards0)
///
/// @param d double
///
double q_jsnumbercoercion_round_towards0(double d);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsnumbercoercion.html#dtor.QJSNumberCoercion)
///
/// Delete this object from C++ memory.
///
/// @param self QJSNumberCoercion*
///
void q_jsnumbercoercion_delete(void* self);

#endif
