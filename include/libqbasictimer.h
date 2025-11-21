#pragma once
#ifndef SRC_QT6C_LIBQBASICTIMER_H
#define SRC_QT6C_LIBQBASICTIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbasictimer.html

/// q_basictimer_new constructs a new QBasicTimer object.
///
QBasicTimer* q_basictimer_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#swap)
///
/// @param self QBasicTimer*
/// @param other QBasicTimer*
void q_basictimer_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#isActive)
///
/// @param self QBasicTimer*
bool q_basictimer_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#timerId)
///
/// @param self QBasicTimer*
int32_t q_basictimer_timer_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#id)
///
/// @param self QBasicTimer*
///
/// @return enum Qt__TimerId
int32_t q_basictimer_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// @param self QBasicTimer*
/// @param msec int
/// @param obj QObject*
void q_basictimer_start(void* self, int msec, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#start)
///
/// @param self QBasicTimer*
/// @param msec int
/// @param timerType enum Qt__TimerType
/// @param obj QObject*
void q_basictimer_start2(void* self, int msec, int32_t timerType, void* obj);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#stop)
///
/// @param self QBasicTimer*
void q_basictimer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbasictimer.html#dtor.QBasicTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QBasicTimer*
void q_basictimer_delete(void* self);

#endif
