#pragma once
#ifndef SRCQT6C_LIBQTESTSUPPORT_GUI_H
#define SRCQT6C_LIBQTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"
#include "libqwindow.h"

QTest__QTouchEventSequence* q_test__qtoucheventsequence_press(void* self, int touchId, void* pt);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move(void* self, int touchId, void* pt);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release(void* self, int touchId, void* pt);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_stationary(void* self, int touchId);
bool q_test__qtoucheventsequence_commit(void* self, bool processEvents);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press3(void* self, int touchId, void* pt, void* window);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move3(void* self, int touchId, void* pt, void* window);
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release3(void* self, int touchId, void* pt, void* window);
void q_test__qtoucheventsequence_delete(void* self);

#endif
