#pragma once
#ifndef QML_LIBQQMLINCUBATOR_H
#define QML_LIBQQMLINCUBATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html)

/// q_qmlincubator_new constructs a new QQmlIncubator object.
///
QQmlIncubator* q_qmlincubator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html)

/// q_qmlincubator_new2 constructs a new QQmlIncubator object.
///
/// @param param1 enum QQmlIncubator__IncubationMode
///
QQmlIncubator* q_qmlincubator_new2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#clear)
///
/// @param self QQmlIncubator*
///
void q_qmlincubator_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#forceCompletion)
///
/// @param self QQmlIncubator*
///
void q_qmlincubator_force_completion(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isNull)
///
/// @param self QQmlIncubator*
///
bool q_qmlincubator_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isReady)
///
/// @param self QQmlIncubator*
///
bool q_qmlincubator_is_ready(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isError)
///
/// @param self QQmlIncubator*
///
bool q_qmlincubator_is_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#isLoading)
///
/// @param self QQmlIncubator*
///
bool q_qmlincubator_is_loading(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#errors)
///
/// @param self QQmlIncubator*
///
/// @return libqt_list of QQmlError*
///
libqt_list q_qmlincubator_errors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#incubationMode)
///
/// @param self QQmlIncubator*
///
/// @return enum QQmlIncubator__IncubationMode
///
int32_t q_qmlincubator_incubation_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#status)
///
/// @param self QQmlIncubator*
///
/// @return enum QQmlIncubator__Status
///
int32_t q_qmlincubator_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#object)
///
/// @param self QQmlIncubator*
///
QObject* q_qmlincubator_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialProperties)
///
/// @param self QQmlIncubator*
/// @param initialProperties libqt_map of const char* to QVariant*
///
void q_qmlincubator_set_initial_properties(void* self, libqt_map initialProperties);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
///
/// @param self QQmlIncubator*
/// @param param1 enum QQmlIncubator__Status
///
void q_qmlincubator_status_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
///
/// Allows for overriding the related default method
///
/// @param self QQmlIncubator*
/// @param callback void func(QQmlIncubator* self, enum QQmlIncubator__Status param1)
///
void q_qmlincubator_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#statusChanged)
///
/// Base class method implementation
///
/// @param self QQmlIncubator*
/// @param param1 enum QQmlIncubator__Status
///
void q_qmlincubator_super_status_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
///
/// @param self QQmlIncubator*
/// @param initialState QObject*
///
void q_qmlincubator_set_initial_state(void* self, void* initialState);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
///
/// Allows for overriding the related default method
///
/// @param self QQmlIncubator*
/// @param callback void func(QQmlIncubator* self, QObject* initialState)
///
void q_qmlincubator_on_set_initial_state(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#setInitialState)
///
/// Base class method implementation
///
/// @param self QQmlIncubator*
/// @param initialState QObject*
///
void q_qmlincubator_super_set_initial_state(void* self, void* initialState);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#dtor.QQmlIncubator)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlIncubator*
///
void q_qmlincubator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html)

/// q_qmlincubationcontroller_new constructs a new QQmlIncubationController object.
///
QQmlIncubationController* q_qmlincubationcontroller_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#engine)
///
/// @param self QQmlIncubationController*
///
QQmlEngine* q_qmlincubationcontroller_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCount)
///
/// @param self QQmlIncubationController*
///
int32_t q_qmlincubationcontroller_incubating_object_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubateFor)
///
/// @param self QQmlIncubationController*
/// @param msecs int
///
void q_qmlincubationcontroller_incubate_for(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
///
/// @param self QQmlIncubationController*
/// @param param1 int
///
void q_qmlincubationcontroller_incubating_object_count_changed(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
///
/// Allows for overriding the related default method
///
/// @param self QQmlIncubationController*
/// @param callback void func(QQmlIncubationController* self, int param1)
///
void q_qmlincubationcontroller_on_incubating_object_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#incubatingObjectCountChanged)
///
/// Base class method implementation
///
/// @param self QQmlIncubationController*
/// @param param1 int
///
void q_qmlincubationcontroller_super_incubating_object_count_changed(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubationcontroller.html#dtor.QQmlIncubationController)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlIncubationController*
///
void q_qmlincubationcontroller_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#public-types)

typedef enum {
    QQMLINCUBATOR_INCUBATIONMODE_ASYNCHRONOUS = 0,
    QQMLINCUBATOR_INCUBATIONMODE_ASYNCHRONOUSIFNESTED = 1,
    QQMLINCUBATOR_INCUBATIONMODE_SYNCHRONOUS = 2
} QQmlIncubator__IncubationMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlincubator.html#public-types)

typedef enum {
    QQMLINCUBATOR_STATUS_NULL = 0,
    QQMLINCUBATOR_STATUS_READY = 1,
    QQMLINCUBATOR_STATUS_LOADING = 2,
    QQMLINCUBATOR_STATUS_ERROR = 3
} QQmlIncubator__Status;

#endif
