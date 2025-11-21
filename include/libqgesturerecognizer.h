#pragma once
#ifndef SRC_QT6C_LIBQGESTURERECOGNIZER_H
#define SRC_QT6C_LIBQGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgesturerecognizer.html

/// q_gesturerecognizer_new constructs a new QGestureRecognizer object.
///
QGestureRecognizer* q_gesturerecognizer_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// @param self QGestureRecognizer*
/// @param target QObject*
QGesture* q_gesturerecognizer_create(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QGestureRecognizer*
/// @param callback QGesture* func(QGestureRecognizer* self, QObject* target)
void q_gesturerecognizer_on_create(void* self, QGesture* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// Base class method implementation
///
/// @param self QGestureRecognizer*
/// @param target QObject*
QGesture* q_gesturerecognizer_qbase_create(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// @param self QGestureRecognizer*
/// @param state QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t q_gesturerecognizer_recognize(void* self, void* state, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// Allows for overriding the related default method
///
/// @param self QGestureRecognizer*
/// @param callback int32_t func(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event)
void q_gesturerecognizer_on_recognize(void* self, int32_t (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// Base class method implementation
///
/// @param self QGestureRecognizer*
/// @param state QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t q_gesturerecognizer_qbase_recognize(void* self, void* state, void* watched, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// @param self QGestureRecognizer*
/// @param state QGesture*
void q_gesturerecognizer_reset(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QGestureRecognizer*
/// @param callback void func(QGestureRecognizer* self, QGesture* state)
void q_gesturerecognizer_on_reset(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Base class method implementation
///
/// @param self QGestureRecognizer*
/// @param state QGesture*
void q_gesturerecognizer_qbase_reset(void* self, void* state);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// @param recognizer QGestureRecognizer*
///
/// @return enum Qt__GestureType
int64_t q_gesturerecognizer_register_recognizer(void* recognizer);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// @param type enum Qt__GestureType
void q_gesturerecognizer_unregister_recognizer(int64_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
///
/// @param self QGestureRecognizer*
/// @param param1 QGestureRecognizer*
void q_gesturerecognizer_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#dtor.QGestureRecognizer)
///
/// Delete this object from C++ memory.
///
/// @param self QGestureRecognizer*
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
