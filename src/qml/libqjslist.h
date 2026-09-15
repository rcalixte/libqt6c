#pragma once
#ifndef QML_LIBQJSLIST_H
#define QML_LIBQJSLIST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)

/// q_jslistindexclamp_new constructs a new QJSListIndexClamp object.
///
/// @param other QJSListIndexClamp*
///
QJSListIndexClamp* q_jslistindexclamp_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)

/// q_jslistindexclamp_new2 constructs a new QJSListIndexClamp object and invalidates the source QJSListIndexClamp object.
///
/// @param other QJSListIndexClamp*
///
QJSListIndexClamp* q_jslistindexclamp_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)

/// q_jslistindexclamp_new3 constructs a new QJSListIndexClamp object.
///
/// @param param1 QJSListIndexClamp*
///
QJSListIndexClamp* q_jslistindexclamp_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html)

/// q_jslistindexclamp_new4 constructs a new QJSListIndexClamp object.
///
QJSListIndexClamp* q_jslistindexclamp_new4();

/// q_jslistindexclamp_copy_assign shallow copies `other` into `self`.
///
/// @param self QJSListIndexClamp*
/// @param other QJSListIndexClamp*
///
void q_jslistindexclamp_copy_assign(void* self, void* other);

/// q_jslistindexclamp_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QJSListIndexClamp*
/// @param other QJSListIndexClamp*
///
void q_jslistindexclamp_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#clamp)
///
/// @param start intptr_t
/// @param max intptr_t
///
intptr_t q_jslistindexclamp_clamp(intptr_t start, intptr_t max);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#operator-eq)
///
/// @param self QJSListIndexClamp*
/// @param param1 QJSListIndexClamp*
///
void q_jslistindexclamp_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#clamp)
///
/// @param start intptr_t
/// @param max intptr_t
/// @param min intptr_t
///
intptr_t q_jslistindexclamp_clamp3(intptr_t start, intptr_t max, intptr_t min);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistindexclamp.html#dtor.QJSListIndexClamp)
///
/// Delete this object from C++ memory.
///
/// @param self QJSListIndexClamp*
///
void q_jslistindexclamp_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#hasNext)
///
/// @param self QJSListForInIterator*
///
bool q_jslistforiniterator_has_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#next)
///
/// @param self QJSListForInIterator*
///
intptr_t q_jslistforiniterator_next(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforiniterator.html#dtor.QJSListForInIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QJSListForInIterator*
///
void q_jslistforiniterator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html#init)
///
/// @param self QJSListForOfIterator*
///
void q_jslistforofiterator_init(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qjslistforofiterator.html#dtor.QJSListForOfIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QJSListForOfIterator*
///
void q_jslistforofiterator_delete(void* self);

#endif
