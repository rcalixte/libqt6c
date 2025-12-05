#pragma once
#ifndef SRC_QT6C_LIBQTESTSUPPORT_WIDGETS_H
#define SRC_QT6C_LIBQTESTSUPPORT_WIDGETS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html)

/// q_test__qtoucheventwidgetsequence_new constructs a new QTest::QTouchEventWidgetSequence object.
///
/// @param param1 QTest__QTouchEventWidgetSequence*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_press(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_move(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_release(void* self, int touchId, void* pt);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_stationary(void* self, int touchId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
///
/// Allows for overriding the related default method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param callback QTest__QTouchEventWidgetSequence* func(QTest__QTouchEventWidgetSequence* self, int touchId)
///
void q_test__qtoucheventwidgetsequence_on_stationary(void* self, QTest__QTouchEventWidgetSequence* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#stationary)
///
/// Base class method implementation
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_qbase_stationary(void* self, int touchId);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param processEvents bool
///
bool q_test__qtoucheventwidgetsequence_commit(void* self, bool processEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
///
/// Allows for overriding the related default method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param callback bool func(QTest__QTouchEventWidgetSequence* self, bool processEvents)
///
void q_test__qtoucheventwidgetsequence_on_commit(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#commit)
///
/// Base class method implementation
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param processEvents bool
///
bool q_test__qtoucheventwidgetsequence_qbase_commit(void* self, bool processEvents);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#press)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param widget QWidget*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_press3(void* self, int touchId, void* pt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#move)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param widget QWidget*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_move3(void* self, int touchId, void* pt, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventwidgetsequence.html#release)
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
/// @param pt QPoint*
/// @param widget QWidget*
///
QTest__QTouchEventWidgetSequence* q_test__qtoucheventwidgetsequence_release3(void* self, int touchId, void* pt, void* widget);

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QEventPoint* q_test__qtoucheventwidgetsequence_point(void* self, int touchId);

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QEventPoint* q_test__qtoucheventwidgetsequence_qbase_point(void* self, int touchId);

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#point)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param callback QEventPoint* func(QTest__QTouchEventWidgetSequence* self, int touchId)
///
void q_test__qtoucheventwidgetsequence_on_point(void* self, QEventPoint* (*callback)(void*, int));

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QEventPoint* q_test__qtoucheventwidgetsequence_point_or_previous_point(void* self, int touchId);

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param touchId int
///
QEventPoint* q_test__qtoucheventwidgetsequence_qbase_point_or_previous_point(void* self, int touchId);

/// Inherited from QTest::QTouchEventSequence
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtest-qtoucheventsequence.html#pointOrPreviousPoint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTest__QTouchEventWidgetSequence*
/// @param callback QEventPoint* func(QTest__QTouchEventWidgetSequence* self, int touchId)
///
void q_test__qtoucheventwidgetsequence_on_point_or_previous_point(void* self, QEventPoint* (*callback)(void*, int));

/// Delete this object from C++ memory.
///
/// @param self QTest__QTouchEventWidgetSequence*
///
void q_test__qtoucheventwidgetsequence_delete(void* self);

#endif
