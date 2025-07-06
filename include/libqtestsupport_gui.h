#pragma once
#ifndef SRCQT6C_LIBQTESTSUPPORT_GUI_H
#define SRCQT6C_LIBQTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#press)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#move)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#release)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#stationary)
///
/// ``` QTest__QTouchEventSequence* self, int touchId ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_stationary(void* self, int touchId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#commit)
///
/// ``` QTest__QTouchEventSequence* self, bool processEvents ```
bool q_test__qtoucheventsequence_commit(void* self, bool processEvents);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#press)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#move)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest__qtoucheventsequence.html#release)
///
/// ``` QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window ```
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest::qtoucheventsequence.html#dtor.QTest::QTouchEventSequence)
///
/// Delete this object from C++ memory.
///
/// ``` QTest__QTouchEventSequence* self ```
void q_test__qtoucheventsequence_delete(void* self);

#endif
