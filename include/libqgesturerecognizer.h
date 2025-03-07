#pragma once
#ifndef SRCQT6C_LIBQGESTURERECOGNIZER_H
#define SRCQT6C_LIBQGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqgesture.h"
#include "libqobject.h"

QGestureRecognizer* q_gesturerecognizer_new();
QGesture* q_gesturerecognizer_create(void* self, void* target);
void q_gesturerecognizer_on_create(void* self, QGesture* (*slot)(void*, void*));
QGesture* q_gesturerecognizer_qbase_create(void* self, void* target);
int64_t q_gesturerecognizer_recognize(void* self, void* state, void* watched, void* event);
void q_gesturerecognizer_on_recognize(void* self, int64_t (*slot)(void*, void*, void*, void*));
int64_t q_gesturerecognizer_qbase_recognize(void* self, void* state, void* watched, void* event);
void q_gesturerecognizer_reset(void* self, void* state);
void q_gesturerecognizer_on_reset(void* self, void (*slot)(void*, void*));
void q_gesturerecognizer_qbase_reset(void* self, void* state);
int64_t q_gesturerecognizer_register_recognizer(void* recognizer);
void q_gesturerecognizer_unregister_recognizer(int64_t typeVal);
void q_gesturerecognizer_operator_assign(void* self, void* param1);
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
