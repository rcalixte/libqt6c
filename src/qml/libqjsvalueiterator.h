#pragma once
#ifndef QML_LIBQJSVALUEITERATOR_H
#define QML_LIBQJSVALUEITERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html)

/// q_jsvalueiterator_new constructs a new QJSValueIterator object.
///
/// @param value QJSValue*
///
QJSValueIterator* q_jsvalueiterator_new(void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#hasNext)
///
/// @param self QJSValueIterator*
///
bool q_jsvalueiterator_has_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#next)
///
/// @param self QJSValueIterator*
///
bool q_jsvalueiterator_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QJSValueIterator*
///
const char* q_jsvalueiterator_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#value)
///
/// @param self QJSValueIterator*
///
QJSValue* q_jsvalueiterator_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#operator-eq)
///
/// @param self QJSValueIterator*
/// @param value QJSValue*
///
void q_jsvalueiterator_operator_assign(void* self, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qjsvalueiterator.html#dtor.QJSValueIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QJSValueIterator*
///
void q_jsvalueiterator_delete(void* self);

#endif
