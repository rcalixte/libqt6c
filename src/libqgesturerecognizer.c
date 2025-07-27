#include "libqcoreevent.hpp"
#include "libqgesture.hpp"
#include "libqobject.hpp"
#include "libqgesturerecognizer.hpp"
#include "libqgesturerecognizer.h"

QGestureRecognizer* q_gesturerecognizer_new() {
    return QGestureRecognizer_new();
}

QGesture* q_gesturerecognizer_create(void* self, void* target) {
    return QGestureRecognizer_Create((QGestureRecognizer*)self, (QObject*)target);
}

void q_gesturerecognizer_on_create(void* self, QGesture* (*slot)(void*, void*)) {
    QGestureRecognizer_OnCreate((QGestureRecognizer*)self, (intptr_t)slot);
}

QGesture* q_gesturerecognizer_qbase_create(void* self, void* target) {
    return QGestureRecognizer_QBaseCreate((QGestureRecognizer*)self, (QObject*)target);
}

int64_t q_gesturerecognizer_recognize(void* self, void* state, void* watched, void* event) {
    return QGestureRecognizer_Recognize((QGestureRecognizer*)self, (QGesture*)state, (QObject*)watched, (QEvent*)event);
}

void q_gesturerecognizer_on_recognize(void* self, int64_t (*slot)(void*, void*, void*, void*)) {
    QGestureRecognizer_OnRecognize((QGestureRecognizer*)self, (intptr_t)slot);
}

int64_t q_gesturerecognizer_qbase_recognize(void* self, void* state, void* watched, void* event) {
    return QGestureRecognizer_QBaseRecognize((QGestureRecognizer*)self, (QGesture*)state, (QObject*)watched, (QEvent*)event);
}

void q_gesturerecognizer_reset(void* self, void* state) {
    QGestureRecognizer_Reset((QGestureRecognizer*)self, (QGesture*)state);
}

void q_gesturerecognizer_on_reset(void* self, void (*slot)(void*, void*)) {
    QGestureRecognizer_OnReset((QGestureRecognizer*)self, (intptr_t)slot);
}

void q_gesturerecognizer_qbase_reset(void* self, void* state) {
    QGestureRecognizer_QBaseReset((QGestureRecognizer*)self, (QGesture*)state);
}

int64_t q_gesturerecognizer_register_recognizer(void* recognizer) {
    return QGestureRecognizer_RegisterRecognizer((QGestureRecognizer*)recognizer);
}

void q_gesturerecognizer_unregister_recognizer(int64_t typeVal) {
    QGestureRecognizer_UnregisterRecognizer(typeVal);
}

void q_gesturerecognizer_operator_assign(void* self, void* param1) {
    QGestureRecognizer_OperatorAssign((QGestureRecognizer*)self, (QGestureRecognizer*)param1);
}

void q_gesturerecognizer_delete(void* self) {
    QGestureRecognizer_Delete((QGestureRecognizer*)(self));
}
