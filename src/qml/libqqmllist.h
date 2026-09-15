#pragma once
#ifndef QML_LIBQQMLLIST_H
#define QML_LIBQQMLLIST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new constructs a new QQmlListReference object.
///
QQmlListReference* q_qmllistreference_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new2 constructs a new QQmlListReference object.
///
/// @param variant QVariant*
///
QQmlListReference* q_qmllistreference_new2(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new3 constructs a new QQmlListReference object.
///
/// @param o QObject*
/// @param property const char*
///
QQmlListReference* q_qmllistreference_new3(void* o, const char* property);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new4 constructs a new QQmlListReference object.
///
/// @param variant QVariant*
///
QQmlListReference* q_qmllistreference_new4(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new5 constructs a new QQmlListReference object.
///
/// @param o QObject*
/// @param property const char*
///
QQmlListReference* q_qmllistreference_new5(void* o, const char* property);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new6 constructs a new QQmlListReference object.
///
/// @param param1 QQmlListReference*
///
QQmlListReference* q_qmllistreference_new6(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new7 constructs a new QQmlListReference object.
///
/// @param variant QVariant*
/// @param engine QQmlEngine*
///
QQmlListReference* q_qmllistreference_new7(void* variant, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)

/// q_qmllistreference_new8 constructs a new QQmlListReference object.
///
/// @param o QObject*
/// @param property const char*
/// @param engine QQmlEngine*
///
QQmlListReference* q_qmllistreference_new8(void* o, const char* property, void* engine);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#operator-eq)
///
/// @param self QQmlListReference*
/// @param param1 QQmlListReference*
///
void q_qmllistreference_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isValid)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#object)
///
/// @param self QQmlListReference*
///
QObject* q_qmllistreference_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#listElementType)
///
/// @param self QQmlListReference*
///
const QMetaObject* q_qmllistreference_list_element_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canAppend)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_append(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canAt)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_at(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canClear)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canCount)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canReplace)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_replace(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canRemoveLast)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_can_remove_last(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isManipulable)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_is_manipulable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isReadable)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_is_readable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#append)
///
/// @param self QQmlListReference*
/// @param param1 QObject*
///
bool q_qmllistreference_append(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#at)
///
/// @param self QQmlListReference*
/// @param param1 intptr_t
///
QObject* q_qmllistreference_at(void* self, intptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#clear)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#count)
///
/// @param self QQmlListReference*
///
intptr_t q_qmllistreference_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#size)
///
/// @param self QQmlListReference*
///
intptr_t q_qmllistreference_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#replace)
///
/// @param self QQmlListReference*
/// @param param1 intptr_t
/// @param param2 QObject*
///
bool q_qmllistreference_replace(void* self, intptr_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#removeLast)
///
/// @param self QQmlListReference*
///
bool q_qmllistreference_remove_last(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#operator-eq-eq)
///
/// @param self QQmlListReference*
/// @param other QQmlListReference*
///
bool q_qmllistreference_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#dtor.QQmlListReference)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlListReference*
///
void q_qmllistreference_delete(void* self);

#endif
