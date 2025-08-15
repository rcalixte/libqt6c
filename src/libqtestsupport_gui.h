#pragma once
#ifndef SRCQT6C_LIBQTESTSUPPORT_GUI_H
#define SRCQT6C_LIBQTESTSUPPORT_GUI_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release(void* self, int touchId, void* pt);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#stationary)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
QTest__QTouchEventSequence* q_test__qtoucheventsequence_stationary(void* self, int touchId);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#commit)
///
/// @param self QTest__QTouchEventSequence*
/// @param processEvents bool
bool q_test__qtoucheventsequence_commit(void* self, bool processEvents);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#press)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_press3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#move)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_move3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#release)
///
/// @param self QTest__QTouchEventSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param window QWindow*
QTest__QTouchEventSequence* q_test__qtoucheventsequence_release3(void* self, int touchId, void* pt, void* window);

/// [Qt documentation](https://doc.qt.io/qt-6/qtest::qtoucheventsequence.html#dtor.QTest::QTouchEventSequence)
///
/// Delete this object from C++ memory.
///
/// @param self QTest__QTouchEventSequence*
void q_test__qtoucheventsequence_delete(void* self);

#endif
