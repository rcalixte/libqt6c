#include "libqevent.hpp"
#include "libqgesture.hpp"
#include "libqobject.hpp"
#include "libqcoreevent.hpp"
#include "libqgesturerecognizer.hpp"
#include "libqgesturerecognizer.h"

/// https://doc.qt.io/qt-6/qgesturerecognizer.html

/// q_gesturerecognizer_new constructs a new QGestureRecognizer object.
///
///
QGestureRecognizer* q_gesturerecognizer_new() {
    return QGestureRecognizer_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#create)
///
/// ``` QGestureRecognizer* self, QObject* target ```
QGesture* q_gesturerecognizer_create(void* self, void* target) {
    return QGestureRecognizer_Create((QGestureRecognizer*)self, (QObject*)target);
}

/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, QGesture* (*slot)(QGestureRecognizer*, QObject*) ```
void q_gesturerecognizer_on_create(void* self, QGesture* (*slot)(void*, void*)) {
    QGestureRecognizer_OnCreate((QGestureRecognizer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QObject* target ```
QGesture* q_gesturerecognizer_qbase_create(void* self, void* target) {
    return QGestureRecognizer_QBaseCreate((QGestureRecognizer*)self, (QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#recognize)
///
/// ``` QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event ```
int64_t q_gesturerecognizer_recognize(void* self, void* state, void* watched, void* event) {
    return QGestureRecognizer_Recognize((QGestureRecognizer*)self, (QGesture*)state, (QObject*)watched, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, int64_t (*slot)(QGestureRecognizer*, QGesture*, QObject*, QEvent*) ```
void q_gesturerecognizer_on_recognize(void* self, int64_t (*slot)(void*, void*, void*, void*)) {
    QGestureRecognizer_OnRecognize((QGestureRecognizer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event ```
int64_t q_gesturerecognizer_qbase_recognize(void* self, void* state, void* watched, void* event) {
    return QGestureRecognizer_QBaseRecognize((QGestureRecognizer*)self, (QGesture*)state, (QObject*)watched, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// ``` QGestureRecognizer* self, QGesture* state ```
void q_gesturerecognizer_reset(void* self, void* state) {
    QGestureRecognizer_Reset((QGestureRecognizer*)self, (QGesture*)state);
}

/// Allows for overriding the related default method
///
/// ``` QGestureRecognizer* self, void (*slot)(QGestureRecognizer*, QGesture*) ```
void q_gesturerecognizer_on_reset(void* self, void (*slot)(void*, void*)) {
    QGestureRecognizer_OnReset((QGestureRecognizer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGestureRecognizer* self, QGesture* state ```
void q_gesturerecognizer_qbase_reset(void* self, void* state) {
    QGestureRecognizer_QBaseReset((QGestureRecognizer*)self, (QGesture*)state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// ``` QGestureRecognizer* recognizer ```
int64_t q_gesturerecognizer_register_recognizer(void* recognizer) {
    return QGestureRecognizer_RegisterRecognizer((QGestureRecognizer*)recognizer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// ``` enum Qt__GestureType typeVal ```
void q_gesturerecognizer_unregister_recognizer(int64_t typeVal) {
    QGestureRecognizer_UnregisterRecognizer(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator=)
///
/// ``` QGestureRecognizer* self, QGestureRecognizer* param1 ```
void q_gesturerecognizer_operator_assign(void* self, void* param1) {
    QGestureRecognizer_OperatorAssign((QGestureRecognizer*)self, (QGestureRecognizer*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QGestureRecognizer* self ```
void q_gesturerecognizer_delete(void* self) {
    QGestureRecognizer_Delete((QGestureRecognizer*)(self));
}