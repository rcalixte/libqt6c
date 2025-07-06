#pragma once
#ifndef SRCQT6C_LIBQGESTURERECOGNIZER_H
#define SRCQT6C_LIBQGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgesturerecognizer.html

/// q_gesturerecognizer_new constructs a new QGestureRecognizer object.
///
///
QGestureRecognizer* q_gesturerecognizer_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// ``` QGestureRecognizer* self, QObject* target ```
QGesture* q_gesturerecognizer_create(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, QGesture* (*slot)(QGestureRecognizer*, QObject*) ```
void q_gesturerecognizer_on_create(void* self, QGesture* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QObject* target ```
QGesture* q_gesturerecognizer_qbase_create(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// ``` QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event ```
int64_t q_gesturerecognizer_recognize(void* self, void* state, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, int64_t (*slot)(QGestureRecognizer*, QGesture*, QObject*, QEvent*) ```
void q_gesturerecognizer_on_recognize(void* self, int64_t (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event ```
int64_t q_gesturerecognizer_qbase_recognize(void* self, void* state, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// ``` QGestureRecognizer* self, QGesture* state ```
void q_gesturerecognizer_reset(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, void (*slot)(QGestureRecognizer*, QGesture*) ```
void q_gesturerecognizer_on_reset(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QGesture* state ```
void q_gesturerecognizer_qbase_reset(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// ``` QGestureRecognizer* recognizer ```
int64_t q_gesturerecognizer_register_recognizer(void* recognizer);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// ``` enum Qt__GestureType typeVal ```
void q_gesturerecognizer_unregister_recognizer(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator=)
///
/// ``` QGestureRecognizer* self, QGestureRecognizer* param1 ```
void q_gesturerecognizer_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#dtor.QGestureRecognizer)
///
/// Delete this object from C++ memory.
///
/// ``` QGestureRecognizer* self ```
void q_gesturerecognizer_delete(void* self);

/// https://doc.qt.io/qt-6/qgesturerecognizer.html#types

typedef enum {
    QGESTURERECOGNIZER_RESULTFLAG_IGNORE = 1,
    QGESTURERECOGNIZER_RESULTFLAG_MAYBEGESTURE = 2,
    QGESTURERECOGNIZER_RESULTFLAG_TRIGGERGESTURE = 4,
    QGESTURERECOGNIZER_RESULTFLAG_FINISHGESTURE = 8,
    QGESTURERECOGNIZER_RESULTFLAG_CANCELGESTURE = 16,
    QGESTURERECOGNIZER_RESULTFLAG_RESULTSTATE_MASK = 255,
    QGESTURERECOGNIZER_RESULTFLAG_CONSUMEEVENTHINT = 256,
    QGESTURERECOGNIZER_RESULTFLAG_RESULTHINT_MASK = 65280
} QGestureRecognizer__ResultFlag;

#endif
